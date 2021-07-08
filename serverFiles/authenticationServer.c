/* Access control */
#include <signal.h>
#include <stdio.h>
#include "open62541.h"
#include "open62541/plugin/accesscontrol_default.h"
#include "open62541/plugin/log_stdout.h"
#include "open62541/server.h"
#include "open62541/server_config_default.h"

/* Files ARCOModel.h and ARCOModel.c are created from ARCOModel.xml */
#include "ARCOModel.h"


static UA_Boolean
allowAddNode(UA_Server *server, UA_AccessControl *ac,
             const UA_NodeId *sessionId, void *sessionContext,
             const UA_AddNodesItem *item) {
    printf("Called allowAddNode\n");
    return UA_TRUE;
}

static UA_Boolean
allowAddReference(UA_Server *server, UA_AccessControl *ac,
                  const UA_NodeId *sessionId, void *sessionContext,
                  const UA_AddReferencesItem *item) {
    printf("Called allowAddReference\n");
    return UA_TRUE;
}

static UA_Boolean
allowDeleteNode(UA_Server *server, UA_AccessControl *ac,
                const UA_NodeId *sessionId, void *sessionContext,
                const UA_DeleteNodesItem *item) {
    printf("Called allowDeleteNode\n");
    return UA_FALSE; // Do not allow deletion from client
}

static UA_Boolean
allowDeleteReference(UA_Server *server, UA_AccessControl *ac,
                     const UA_NodeId *sessionId, void *sessionContext,
                     const UA_DeleteReferencesItem *item) {
    printf("Called allowDeleteReference\n");
    return UA_TRUE;
}

UA_Boolean running = true;
static void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

static UA_UsernamePasswordLogin logins[2] = {
    {UA_STRING_STATIC("thlab"), UA_STRING_STATIC("hydraulics")}
};


int main(void) {
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_Server *server = UA_Server_new();
    UA_ServerConfig *config = UA_Server_getConfig(server);
    UA_ServerConfig_setDefault(config);

    /* Disable anonymous logins, enable two user/password logins */
    config->accessControl.clear(&config->accessControl);
    UA_StatusCode retval = UA_AccessControl_default(config, false,
             &config->securityPolicies[config->securityPoliciesSize-1].policyUri, 1, logins);
    if(retval != UA_STATUSCODE_GOOD)
        goto cleanup;

    /* Set accessControl functions for nodeManagement */
    config->accessControl.allowAddNode = allowAddNode;
    config->accessControl.allowAddReference = allowAddReference;
    config->accessControl.allowDeleteNode = allowDeleteNode;
    config->accessControl.allowDeleteReference = allowDeleteReference;

    UA_StatusCode retval;
	
	/* create nodes from nodeset */
	if (ARCOModel(server) != UA_STATUSCODE_GOOD)
	{
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the example nodeset. ");
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
    } else {

        retval = UA_Server_run(server, &running);
    }

 cleanup:
    UA_Server_delete(server);
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}