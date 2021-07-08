#include <signal.h>
#include <stdio.h>
#include "open62541.h"

/* Files ARCOModel.h and ARCOModel.c are created from ARCOModel.xml */
#include "ARCOModel.h"

static volatile UA_Boolean running = true;
static void stopHandler(int sig) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "received ctrl-c");
    running = false;
}

int main(void) {
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_Server *server = UA_Server_new();
    UA_ServerConfig_setDefault(UA_Server_getConfig(server));

    UA_StatusCode retval;
	
	/* create nodes from nodeset */
	if (ARCOModel(server) != UA_STATUSCODE_GOOD)
	{
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the example nodeset. ");
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
    } else {

        retval = UA_Server_run(server, &running);
    }

    UA_Server_delete(server);
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}