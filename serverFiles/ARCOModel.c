/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "ARCOModel.h"


/* ARCOModel - ns=0;s=ARCOModel */

static UA_StatusCode function_ARCOModel_0_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ARCOModel");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[0], "ARCOModel"),
UA_NODEID_NUMERIC(ns[0], 85LU),
UA_NODEID_NUMERIC(ns[0], 35LU),
UA_QUALIFIEDNAME(ns[1], "ARCOModel"),
UA_NODEID_NUMERIC(ns[0], 58LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ARCOModel_0_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "ARCOModel")
);
}

/* ResidualGenerators - ns=0;s=resGens */

static UA_StatusCode function_ARCOModel_1_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "ResidualGenerators");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ResidualGenerators");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[0], "resGens"),
UA_NODEID_STRING(ns[0], "ARCOModel"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ResidualGenerators"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ARCOModel_1_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "resGens")
);
}

/* HeaterTempOutResGen - ns=0;s=heaterTempOutResGen */

static UA_StatusCode function_ARCOModel_2_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_heatertempoutresgen_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_heatertempoutresgen_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_heatertempoutresgen_variant_DataContents);
*variablenode_ns_0_s_heatertempoutresgen_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_heatertempoutresgen_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "HeaterTempOutResGen");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "HeaterTempOutResGen");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "heaterTempOutResGen"),
UA_NODEID_STRING(ns[0], "resGens"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "HeaterTempOutResGen"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_heatertempoutresgen_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_2_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "heaterTempOutResGen")
);
}

/* CTAHResGen - ns=0;s=CTAHResGen */

static UA_StatusCode function_ARCOModel_3_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_ctahresgen_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_ctahresgen_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_ctahresgen_variant_DataContents);
*variablenode_ns_0_s_ctahresgen_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_ctahresgen_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CTAHResGen");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CTAHResGen");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "CTAHResGen"),
UA_NODEID_STRING(ns[0], "resGens"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CTAHResGen"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_ctahresgen_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_3_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "CTAHResGen")
);
}

/* TCHXTempInResGen - ns=0;s=tchxTempInResGen */

static UA_StatusCode function_ARCOModel_4_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_tchxtempinresgen_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_tchxtempinresgen_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_tchxtempinresgen_variant_DataContents);
*variablenode_ns_0_s_tchxtempinresgen_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_tchxtempinresgen_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "TCHXTempInResGen");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TCHXTempInResGen");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "tchxTempInResGen"),
UA_NODEID_STRING(ns[0], "resGens"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "TCHXTempInResGen"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_tchxtempinresgen_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_4_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "tchxTempInResGen")
);
}

/* DHXTempOutResGen - ns=0;s=dhxTempOutResGen */

static UA_StatusCode function_ARCOModel_5_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_dhxtempoutresgen_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_dhxtempoutresgen_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_dhxtempoutresgen_variant_DataContents);
*variablenode_ns_0_s_dhxtempoutresgen_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_dhxtempoutresgen_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "DHXTempOutResGen");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DHXTempOutResGen");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "dhxTempOutResGen"),
UA_NODEID_STRING(ns[0], "resGens"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "DHXTempOutResGen"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_dhxtempoutresgen_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_5_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "dhxTempOutResGen")
);
}

/* FaultDiagnosticsActive - ns=0;s=faultDiagnosticsActive */

static UA_StatusCode function_ARCOModel_6_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_0_s_faultdiagnosticsactive_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_0_s_faultdiagnosticsactive_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_0_s_faultdiagnosticsactive_variant_DataContents);
*variablenode_ns_0_s_faultdiagnosticsactive_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_faultdiagnosticsactive_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "FaultDiagnosticsActive");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "FaultDiagnosticsActive");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "faultDiagnosticsActive"),
UA_NODEID_STRING(ns[0], "resGens"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FaultDiagnosticsActive"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_0_s_faultdiagnosticsactive_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_6_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "faultDiagnosticsActive")
);
}

/* MATLABActive - ns=0;s=matlabActive */

static UA_StatusCode function_ARCOModel_7_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_0_s_matlabactive_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_0_s_matlabactive_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_0_s_matlabactive_variant_DataContents);
*variablenode_ns_0_s_matlabactive_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_matlabactive_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "MATLABActive");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "MATLABActive");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "matlabActive"),
UA_NODEID_STRING(ns[0], "resGens"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "MATLABActive"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_0_s_matlabactive_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_7_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "matlabActive")
);
}

/* CTAHTempInResGen - ns=0;s=ctahTempInResGen */

static UA_StatusCode function_ARCOModel_8_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_ctahtempinresgen_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_ctahtempinresgen_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_ctahtempinresgen_variant_DataContents);
*variablenode_ns_0_s_ctahtempinresgen_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_ctahtempinresgen_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CTAHTempInResGen");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CTAHTempInResGen");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "ctahTempInResGen"),
UA_NODEID_STRING(ns[0], "resGens"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CTAHTempInResGen"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_ctahtempinresgen_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_8_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "ctahTempInResGen")
);
}

/* HeaterResGen - ns=0;s=heaterResGen */

static UA_StatusCode function_ARCOModel_9_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_heaterresgen_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_heaterresgen_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_heaterresgen_variant_DataContents);
*variablenode_ns_0_s_heaterresgen_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_heaterresgen_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "HeaterResGen");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "HeaterResGen");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "heaterResGen"),
UA_NODEID_STRING(ns[0], "resGens"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "HeaterResGen"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_heaterresgen_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_9_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "heaterResGen")
);
}

/* thermocouples - ns=0;s=thermocouples */

static UA_StatusCode function_ARCOModel_10_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "thermocouples");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "thermocouples");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_STRING(ns[0], "ARCOModel"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ARCOModel_10_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "thermocouples")
);
}

/* ST-12-SE - ns=0;s=st12se */

static UA_StatusCode function_ARCOModel_11_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_st12se_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_st12se_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_st12se_variant_DataContents);
*variablenode_ns_0_s_st12se_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_st12se_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ST-12-SE");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ST-12-SE");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "st12se"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ST-12-SE"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_st12se_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_11_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "st12se")
);
}

/* BT-32 - ns=0;s=bt32 */

static UA_StatusCode function_ARCOModel_12_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_bt32_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_bt32_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_bt32_variant_DataContents);
*variablenode_ns_0_s_bt32_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_bt32_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "BT-32");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BT-32");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "bt32"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BT-32"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_bt32_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_12_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bt32")
);
}

/* ST-14-S - ns=0;s=st14s */

static UA_StatusCode function_ARCOModel_13_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_st14s_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_st14s_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_st14s_variant_DataContents);
*variablenode_ns_0_s_st14s_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_st14s_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ST-14-S");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ST-14-S");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "st14s"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ST-14-S"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_st14s_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_13_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "st14s")
);
}

/* ST-13 - ns=0;s=st13 */

static UA_StatusCode function_ARCOModel_14_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_st13_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_st13_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_st13_variant_DataContents);
*variablenode_ns_0_s_st13_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_st13_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ST-13");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ST-13");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "st13"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ST-13"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_st13_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_14_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "st13")
);
}

/* BT-34 - ns=0;s=bt34 */

static UA_StatusCode function_ARCOModel_15_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_bt34_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_bt34_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_bt34_variant_DataContents);
*variablenode_ns_0_s_bt34_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_bt34_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "BT-34");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BT-34");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "bt34"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BT-34"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_bt34_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_15_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bt34")
);
}

/* WT-35 - ns=0;s=wt35 */

static UA_StatusCode function_ARCOModel_16_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_wt35_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_wt35_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_wt35_variant_DataContents);
*variablenode_ns_0_s_wt35_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_wt35_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "WT-35");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "WT-35");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "wt35"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WT-35"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_wt35_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_16_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "wt35")
);
}

/* WT-33 - ns=0;s=wt33 */

static UA_StatusCode function_ARCOModel_17_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_wt33_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_wt33_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_wt33_variant_DataContents);
*variablenode_ns_0_s_wt33_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_wt33_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "WT-33");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "WT-33");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "wt33"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WT-33"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_wt33_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_17_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "wt33")
);
}

/* BT-29 - ns=0;s=bt29 */

static UA_StatusCode function_ARCOModel_18_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_bt29_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_bt29_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_bt29_variant_DataContents);
*variablenode_ns_0_s_bt29_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_bt29_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "BT-29");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BT-29");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "bt29"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BT-29"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_bt29_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_18_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bt29")
);
}

/* BT-23 - ns=0;s=bt23 */

static UA_StatusCode function_ARCOModel_19_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_bt23_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_bt23_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_bt23_variant_DataContents);
*variablenode_ns_0_s_bt23_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_bt23_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "BT-23");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BT-23");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "bt23"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BT-23"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_bt23_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_19_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bt23")
);
}

/* ST-11 - ns=0;s=st11 */

static UA_StatusCode function_ARCOModel_20_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_st11_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_st11_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_st11_variant_DataContents);
*variablenode_ns_0_s_st11_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_st11_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ST-11");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ST-11");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "st11"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ST-11"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_st11_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_20_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "st11")
);
}

/* BT-60 - ns=0;s=bt60 */

static UA_StatusCode function_ARCOModel_21_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_bt60_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_bt60_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_bt60_variant_DataContents);
*variablenode_ns_0_s_bt60_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_bt60_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "BT-60");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BT-60");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "bt60"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BT-60"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_bt60_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_21_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bt60")
);
}

/* BT-41 - ns=0;s=bt41 */

static UA_StatusCode function_ARCOModel_22_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_bt41_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_bt41_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_bt41_variant_DataContents);
*variablenode_ns_0_s_bt41_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_bt41_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "BT-41");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BT-41");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "bt41"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BT-41"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_bt41_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_22_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bt41")
);
}

/* BT-30 - ns=0;s=bt30 */

static UA_StatusCode function_ARCOModel_23_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_bt30_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_bt30_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_bt30_variant_DataContents);
*variablenode_ns_0_s_bt30_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_bt30_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "BT-30");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BT-30");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "bt30"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BT-30"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_bt30_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_23_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bt30")
);
}

/* CX-10-4 - ns=0;s=cx104 */

static UA_StatusCode function_ARCOModel_24_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_cx104_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_cx104_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_cx104_variant_DataContents);
*variablenode_ns_0_s_cx104_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_cx104_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CX-10-4");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CX-10-4");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "cx104"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CX-10-4"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_cx104_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_24_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "cx104")
);
}

/* WT-20 - ns=0;s=wt20 */

static UA_StatusCode function_ARCOModel_25_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_wt20_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_wt20_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_wt20_variant_DataContents);
*variablenode_ns_0_s_wt20_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_wt20_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "WT-20");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "WT-20");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "wt20"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WT-20"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_wt20_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_25_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "wt20")
);
}

/* BT-63 - ns=0;s=bt63 */

static UA_StatusCode function_ARCOModel_26_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_bt63_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_bt63_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_bt63_variant_DataContents);
*variablenode_ns_0_s_bt63_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_bt63_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "BT-63");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BT-63");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "bt63"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BT-63"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_bt63_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_26_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bt63")
);
}

/* ST-14-W - ns=0;s=st14w */

static UA_StatusCode function_ARCOModel_27_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_st14w_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_st14w_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_st14w_variant_DataContents);
*variablenode_ns_0_s_st14w_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_st14w_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ST-14-W");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ST-14-W");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "st14w"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ST-14-W"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_st14w_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_27_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "st14w")
);
}

/* ST-14-N - ns=0;s=st14n */

static UA_StatusCode function_ARCOModel_28_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_st14n_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_st14n_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_st14n_variant_DataContents);
*variablenode_ns_0_s_st14n_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_st14n_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ST-14-N");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ST-14-N");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "st14n"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ST-14-N"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_st14n_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_28_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "st14n")
);
}

/* WT-64 - ns=0;s=wt64 */

static UA_StatusCode function_ARCOModel_29_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_wt64_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_wt64_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_wt64_variant_DataContents);
*variablenode_ns_0_s_wt64_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_wt64_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "WT-64");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "WT-64");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "wt64"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WT-64"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_wt64_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_29_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "wt64")
);
}

/* AT-01 - ns=0;s=at01 */

static UA_StatusCode function_ARCOModel_30_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_at01_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_at01_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_at01_variant_DataContents);
*variablenode_ns_0_s_at01_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_at01_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "AT-01");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AT-01");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "at01"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "AT-01"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_at01_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_30_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "at01")
);
}

/* BT-11 - ns=0;s=bt11 */

static UA_StatusCode function_ARCOModel_31_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_bt11_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_bt11_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_bt11_variant_DataContents);
*variablenode_ns_0_s_bt11_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_bt11_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "BT-11");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Heater in");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "bt11"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BT-11"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_bt11_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_31_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bt11")
);
}

/* ST-10 - ns=0;s=st10 */

static UA_StatusCode function_ARCOModel_32_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_st10_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_st10_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_st10_variant_DataContents);
*variablenode_ns_0_s_st10_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_st10_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ST-10");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ST-10");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "st10"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ST-10"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_st10_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_32_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "st10")
);
}

/* BT-25 - ns=0;s=bt25 */

static UA_StatusCode function_ARCOModel_33_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_bt25_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_bt25_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_bt25_variant_DataContents);
*variablenode_ns_0_s_bt25_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_bt25_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "BT-25");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BT-25");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "bt25"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BT-25"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_bt25_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_33_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bt25")
);
}

/* WT-31 - ns=0;s=wt31 */

static UA_StatusCode function_ARCOModel_34_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_wt31_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_wt31_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_wt31_variant_DataContents);
*variablenode_ns_0_s_wt31_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_wt31_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "WT-31");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "WT-31");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "wt31"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WT-31"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_wt31_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_34_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "wt31")
);
}

/* ST-14-E - ns=0;s=st14e */

static UA_StatusCode function_ARCOModel_35_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_st14e_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_st14e_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_st14e_variant_DataContents);
*variablenode_ns_0_s_st14e_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_st14e_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ST-14-E");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ST-14-E");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "st14e"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ST-14-E"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_st14e_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_35_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "st14e")
);
}

/* WT-62 - ns=0;s=wt62 */

static UA_StatusCode function_ARCOModel_36_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_wt62_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_wt62_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_wt62_variant_DataContents);
*variablenode_ns_0_s_wt62_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_wt62_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "WT-62");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "WT-62");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "wt62"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WT-62"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_wt62_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_36_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "wt62")
);
}

/* BT-66 - ns=0;s=bt66 */

static UA_StatusCode function_ARCOModel_37_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_bt66_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_bt66_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_bt66_variant_DataContents);
*variablenode_ns_0_s_bt66_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_bt66_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "BT-66");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BT-66");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "bt66"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BT-66"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_bt66_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_37_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bt66")
);
}

/* CX-10-1 - ns=0;s=cx101 */

static UA_StatusCode function_ARCOModel_38_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_cx101_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_cx101_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_cx101_variant_DataContents);
*variablenode_ns_0_s_cx101_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_cx101_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CX-10-1");
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "cx101"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CX-10-1"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_cx101_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_38_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "cx101")
);
}

/* AT-02 - ns=0;i=20001 */

static UA_StatusCode function_ARCOModel_39_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_i_20001_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_i_20001_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_i_20001_variant_DataContents);
*variablenode_ns_0_i_20001_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_i_20001_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "AT-02");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AT-02");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_NUMERIC(ns[0], 20001LU),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "AT-02"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_i_20001_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_39_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_NUMERIC(ns[0], 20001LU)
);
}

/* BT-65 - ns=0;s=bt65 */

static UA_StatusCode function_ARCOModel_40_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_bt65_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_bt65_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_bt65_variant_DataContents);
*variablenode_ns_0_s_bt65_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_bt65_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "BT-65");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BT-65");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "bt65"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BT-65"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_bt65_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_40_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bt65")
);
}

/* CX-11-2 - ns=0;s=cx112 */

static UA_StatusCode function_ARCOModel_41_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_cx112_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_cx112_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_cx112_variant_DataContents);
*variablenode_ns_0_s_cx112_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_cx112_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CX-11-2");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CX-11-2");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "cx112"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CX-11-2"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_cx112_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_41_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "cx112")
);
}

/* CX-11-1 - ns=0;s=cx111 */

static UA_StatusCode function_ARCOModel_42_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_cx111_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_cx111_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_cx111_variant_DataContents);
*variablenode_ns_0_s_cx111_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_cx111_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CX-11-1");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CX-11-1");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "cx111"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CX-11-1"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_cx111_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_42_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "cx111")
);
}

/* WT-67 - ns=0;s=wt67 */

static UA_StatusCode function_ARCOModel_43_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_wt67_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_wt67_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_wt67_variant_DataContents);
*variablenode_ns_0_s_wt67_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_wt67_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "WT-67");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "WT-67");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "wt67"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WT-67"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_wt67_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_43_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "wt67")
);
}

/* CX-11-4 - ns=0;s=cx114 */

static UA_StatusCode function_ARCOModel_44_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_cx114_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_cx114_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_cx114_variant_DataContents);
*variablenode_ns_0_s_cx114_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_cx114_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CX-11-4");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CX-11-4");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "cx114"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CX-11-4"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_cx114_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_44_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "cx114")
);
}

/* CX-11-3 - ns=0;s=cx113 */

static UA_StatusCode function_ARCOModel_45_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_cx113_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_cx113_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_cx113_variant_DataContents);
*variablenode_ns_0_s_cx113_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_cx113_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CX-11-3");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CX-11-3");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "cx113"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CX-11-3"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_cx113_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_45_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "cx113")
);
}

/* BT-12 - ns=0;s=bt12 */

static UA_StatusCode function_ARCOModel_46_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_bt12_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_bt12_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_bt12_variant_DataContents);
*variablenode_ns_0_s_bt12_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_bt12_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "BT-12");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BT-12");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "bt12"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BT-12"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_bt12_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_46_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bt12")
);
}

/* WT-24 - ns=0;s=wt24 */

static UA_StatusCode function_ARCOModel_47_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_wt24_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_wt24_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_wt24_variant_DataContents);
*variablenode_ns_0_s_wt24_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_wt24_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "WT-24");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "WT-24");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "wt24"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WT-24"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_wt24_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_47_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "wt24")
);
}

/* CX-10-3 - ns=0;s=cx103 */

static UA_StatusCode function_ARCOModel_48_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_cx103_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_cx103_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_cx103_variant_DataContents);
*variablenode_ns_0_s_cx103_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_cx103_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CX-10-3");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CX-10-3");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "cx103"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CX-10-3"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_cx103_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_48_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "cx103")
);
}

/* BT-27 - ns=0;s=bt27 */

static UA_StatusCode function_ARCOModel_49_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_bt27_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_bt27_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_bt27_variant_DataContents);
*variablenode_ns_0_s_bt27_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_bt27_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "BT-27");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BT-27");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "bt27"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BT-27"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_bt27_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_49_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bt27")
);
}

/* BT-21 - ns=0;s=bt21 */

static UA_StatusCode function_ARCOModel_50_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_bt21_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_bt21_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_bt21_variant_DataContents);
*variablenode_ns_0_s_bt21_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_bt21_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "BT-21");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BT-21");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "bt21"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BT-21"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_bt21_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_50_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bt21")
);
}

/* ST-12-SW - ns=0;s=st12sw */

static UA_StatusCode function_ARCOModel_51_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_st12sw_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_st12sw_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_st12sw_variant_DataContents);
*variablenode_ns_0_s_st12sw_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_st12sw_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ST-12-SW");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ST-12-SW");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "st12sw"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ST-12-SW"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_st12sw_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_51_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "st12sw")
);
}

/* WT-61 - ns=0;s=wt61 */

static UA_StatusCode function_ARCOModel_52_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_wt61_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_wt61_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_wt61_variant_DataContents);
*variablenode_ns_0_s_wt61_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_wt61_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "WT-61");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "WT-61");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "wt61"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WT-61"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_wt61_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_52_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "wt61")
);
}

/* WT-26 - ns=0;s=wt26 */

static UA_StatusCode function_ARCOModel_53_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_wt26_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_wt26_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_wt26_variant_DataContents);
*variablenode_ns_0_s_wt26_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_wt26_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "WT-26");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "WT-26");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "wt26"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WT-26"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_wt26_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_53_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "wt26")
);
}

/* CX-10-2 - ns=0;s=cx102 */

static UA_StatusCode function_ARCOModel_54_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_cx102_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_cx102_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_cx102_variant_DataContents);
*variablenode_ns_0_s_cx102_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_cx102_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CX-10-2");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CX-10-2");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "cx102"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CX-10-2"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_cx102_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_54_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "cx102")
);
}

/* WT-13 - ns=0;s=wt13 */

static UA_StatusCode function_ARCOModel_55_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_wt13_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_wt13_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_wt13_variant_DataContents);
*variablenode_ns_0_s_wt13_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_wt13_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "WT-13");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "WT-13");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "wt13"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WT-13"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_wt13_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_55_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "wt13")
);
}

/* WT-10 - ns=0;s=wt10 */

static UA_StatusCode function_ARCOModel_56_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_wt10_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_wt10_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_wt10_variant_DataContents);
*variablenode_ns_0_s_wt10_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_wt10_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "WT-10");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Heater in");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "wt10"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WT-10"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_wt10_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_56_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "wt10")
);
}

/* WT-22 - ns=0;s=wt22 */

static UA_StatusCode function_ARCOModel_57_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_wt22_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_wt22_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_wt22_variant_DataContents);
*variablenode_ns_0_s_wt22_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_wt22_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "WT-22");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "WT-22");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "wt22"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WT-22"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_wt22_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_57_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "wt22")
);
}

/* BT-43 - ns=0;s=bt43 */

static UA_StatusCode function_ARCOModel_58_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_bt43_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_bt43_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_bt43_variant_DataContents);
*variablenode_ns_0_s_bt43_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_bt43_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "BT-43");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BT-43");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "bt43"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BT-43"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_bt43_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_58_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bt43")
);
}

/* WT-42 - ns=0;s=wt42 */

static UA_StatusCode function_ARCOModel_59_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_wt42_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_wt42_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_wt42_variant_DataContents);
*variablenode_ns_0_s_wt42_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_wt42_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "WT-42");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "WT-42");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "wt42"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WT-42"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_wt42_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_59_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "wt42")
);
}

/* WT-40 - ns=0;s=wt40 */

static UA_StatusCode function_ARCOModel_60_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_wt40_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_wt40_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_wt40_variant_DataContents);
*variablenode_ns_0_s_wt40_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_wt40_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "WT-40");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "WT-40");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "wt40"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WT-40"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_wt40_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_60_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "wt40")
);
}

/* WT-28 - ns=0;s=wt28 */

static UA_StatusCode function_ARCOModel_61_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_wt28_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_wt28_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_wt28_variant_DataContents);
*variablenode_ns_0_s_wt28_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_wt28_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "WT-28");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "WT-28");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "wt28"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "WT-28"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_wt28_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_61_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "wt28")
);
}

/* ST-12-N - ns=0;s=st12n */

static UA_StatusCode function_ARCOModel_62_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_st12n_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_st12n_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_st12n_variant_DataContents);
*variablenode_ns_0_s_st12n_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_st12n_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ST-12-N");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ST-12-N");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "st12n"),
UA_NODEID_STRING(ns[0], "thermocouples"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ST-12-N"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_st12n_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_62_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "st12n")
);
}

/* flowMeters - ns=0;s=flowMeters */

static UA_StatusCode function_ARCOModel_63_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "flowMeters");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "flowMeters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[0], "flowMeters"),
UA_NODEID_STRING(ns[0], "ARCOModel"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "flowMeters"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ARCOModel_63_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "flowMeters")
);
}

/* FM-20 - ns=0;s=fm20 */

static UA_StatusCode function_ARCOModel_64_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_fm20_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_fm20_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_fm20_variant_DataContents);
*variablenode_ns_0_s_fm20_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_fm20_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "FM-20");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DRACS Primary Flow");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "fm20"),
UA_NODEID_STRING(ns[0], "flowMeters"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FM-20"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_fm20_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_64_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "fm20")
);
}

/* FM-40 - ns=0;s=fm40 */

static UA_StatusCode function_ARCOModel_65_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_fm40_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_fm40_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_fm40_variant_DataContents);
*variablenode_ns_0_s_fm40_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_fm40_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "FM-40");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Primary");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "fm40"),
UA_NODEID_STRING(ns[0], "flowMeters"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FM-40"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_fm40_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_65_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "fm40")
);
}

/* FM-60 - ns=0;s=fm60 */

static UA_StatusCode function_ARCOModel_66_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 1;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_fm60_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_fm60_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_fm60_variant_DataContents);
*variablenode_ns_0_s_fm60_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_fm60_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "FM-60");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "DRACS");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "fm60"),
UA_NODEID_STRING(ns[0], "flowMeters"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FM-60"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_fm60_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_66_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "fm60")
);
}

/* FM-30 - ns=0;s=fm30 */

static UA_StatusCode function_ARCOModel_67_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_fm30_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_fm30_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_fm30_variant_DataContents);
*variablenode_ns_0_s_fm30_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_fm30_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "FM-30");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Bypass");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "fm30"),
UA_NODEID_STRING(ns[0], "flowMeters"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FM-30"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_fm30_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_67_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "fm30")
);
}

/* BoPInputs - ns=0;s=bopInputs */

static UA_StatusCode function_ARCOModel_68_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BoPInputs");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BoPInputs");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[0], "bopInputs"),
UA_NODEID_STRING(ns[0], "ARCOModel"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BoPInputs"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ARCOModel_68_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bopInputs")
);
}

/* AirFlowRate - ns=0;s=airFlowRate */

static UA_StatusCode function_ARCOModel_69_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_airflowrate_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_airflowrate_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_airflowrate_variant_DataContents);
*variablenode_ns_0_s_airflowrate_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_airflowrate_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "AirFlowRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AirFlowRate");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "airFlowRate"),
UA_NODEID_STRING(ns[0], "bopInputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "AirFlowRate"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_airflowrate_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_69_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "airFlowRate")
);
}

/* AmbientPressure - ns=0;s=ambientPressure */

static UA_StatusCode function_ARCOModel_70_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_ambientpressure_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_ambientpressure_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_ambientpressure_variant_DataContents);
*variablenode_ns_0_s_ambientpressure_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_ambientpressure_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "AmbientPressure");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AmbientPressure");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "ambientPressure"),
UA_NODEID_STRING(ns[0], "bopInputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "AmbientPressure"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_ambientpressure_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_70_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "ambientPressure")
);
}

/* NGTempIn - ns=0;s=ngTempIn */

static UA_StatusCode function_ARCOModel_71_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_ngtempin_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_ngtempin_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_ngtempin_variant_DataContents);
*variablenode_ns_0_s_ngtempin_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_ngtempin_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "NGTempIn");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "NGTempIn");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "ngTempIn"),
UA_NODEID_STRING(ns[0], "bopInputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "NGTempIn"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_ngtempin_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_71_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "ngTempIn")
);
}

/* AmbientTemperature - ns=0;s=ambientTemperature */

static UA_StatusCode function_ARCOModel_72_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_ambienttemperature_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_ambienttemperature_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_ambienttemperature_variant_DataContents);
*variablenode_ns_0_s_ambienttemperature_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_ambienttemperature_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "AmbientTemperature");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "AmbientTemperature");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "ambientTemperature"),
UA_NODEID_STRING(ns[0], "bopInputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "AmbientTemperature"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_ambienttemperature_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_72_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "ambientTemperature")
);
}

/* NGPressureIn - ns=0;s=ngPressureIn */

static UA_StatusCode function_ARCOModel_73_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_ngpressurein_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_ngpressurein_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_ngpressurein_variant_DataContents);
*variablenode_ns_0_s_ngpressurein_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_ngpressurein_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "NGPressureIn");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "NGPressureIn");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "ngPressureIn"),
UA_NODEID_STRING(ns[0], "bopInputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "NGPressureIn"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_ngpressurein_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_73_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "ngPressureIn")
);
}

/* NGFlowRate - ns=0;s=ngFlowRate */

static UA_StatusCode function_ARCOModel_74_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_ngflowrate_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_ngflowrate_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_ngflowrate_variant_DataContents);
*variablenode_ns_0_s_ngflowrate_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_ngflowrate_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "NGFlowRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "NGFlowRate");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "ngFlowRate"),
UA_NODEID_STRING(ns[0], "bopInputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "NGFlowRate"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_ngflowrate_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_74_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "ngFlowRate")
);
}

/* ShaftRPM - ns=0;s=shaftRpm */

static UA_StatusCode function_ARCOModel_75_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_shaftrpm_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_shaftrpm_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_shaftrpm_variant_DataContents);
*variablenode_ns_0_s_shaftrpm_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_shaftrpm_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "ShaftRPM");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ShaftRPM");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "shaftRpm"),
UA_NODEID_STRING(ns[0], "bopInputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ShaftRPM"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_shaftrpm_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_75_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "shaftRpm")
);
}

/* LPTPR - ns=0;s=lptPr */

static UA_StatusCode function_ARCOModel_76_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_lptpr_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_lptpr_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_lptpr_variant_DataContents);
*variablenode_ns_0_s_lptpr_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_lptpr_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "LPTPR");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "LPTPR");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "lptPr"),
UA_NODEID_STRING(ns[0], "bopInputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "LPTPR"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_lptpr_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_76_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "lptPr")
);
}

/* HPTPR - ns=0;s=hptPr */

static UA_StatusCode function_ARCOModel_77_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_hptpr_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_hptpr_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_hptpr_variant_DataContents);
*variablenode_ns_0_s_hptpr_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_hptpr_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "HPTPR");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "HPTPR");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "hptPr"),
UA_NODEID_STRING(ns[0], "bopInputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "HPTPR"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_hptpr_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_77_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "hptPr")
);
}

/* text - ns=0;s=text */

static UA_StatusCode function_ARCOModel_78_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "text");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "text");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[0], "text"),
UA_NODEID_STRING(ns[0], "ARCOModel"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "text"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ARCOModel_78_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "text")
);
}

/* OperatorActions - ns=0;s=operatorActions */

static UA_StatusCode function_ARCOModel_79_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_0_s_operatoractions_variant_DataContents =  UA_String_new();
if (!variablenode_ns_0_s_operatoractions_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_0_s_operatoractions_variant_DataContents);
*variablenode_ns_0_s_operatoractions_variant_DataContents = UA_STRING_ALLOC("Null");
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_operatoractions_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "OperatorActions");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "OperatorActions");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "operatorActions"),
UA_NODEID_STRING(ns[0], "text"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "OperatorActions"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_0_s_operatoractions_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_79_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "operatorActions")
);
}

/* Chat - ns=0;s=chat */

static UA_StatusCode function_ARCOModel_80_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_0_s_chat_variant_DataContents =  UA_String_new();
if (!variablenode_ns_0_s_chat_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_0_s_chat_variant_DataContents);
*variablenode_ns_0_s_chat_variant_DataContents = UA_STRING_ALLOC("Null");
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_chat_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Chat");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Chat");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "chat"),
UA_NODEID_STRING(ns[0], "text"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Chat"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_0_s_chat_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_80_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "chat")
);
}

/* Boolean - ns=0;s=Button */

static UA_StatusCode function_ARCOModel_81_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_0_s_button_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_0_s_button_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_0_s_button_variant_DataContents);
*variablenode_ns_0_s_button_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_button_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "Boolean");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Boolean");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "Button"),
UA_NODEID_STRING(ns[0], "ARCOModel"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Boolean"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_0_s_button_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_81_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "Button")
);
}

/* BoPOutputs - ns=0;s=bopOutputs */

static UA_StatusCode function_ARCOModel_82_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "BoPOutputs");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "BoPOutputs");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_STRING(ns[0], "ARCOModel"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "BoPOutputs"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ARCOModel_82_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "bopOutputs")
);
}

/* mdotHPTOut - ns=0;s=mdotHptOut */

static UA_StatusCode function_ARCOModel_83_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_mdothptout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_mdothptout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_mdothptout_variant_DataContents);
*variablenode_ns_0_s_mdothptout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_mdothptout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "mdotHPTOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "mdotHPTOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "mdotHptOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "mdotHPTOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_mdothptout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_83_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "mdotHptOut")
);
}

/* HdotCompressorIn - ns=0;s=hdotCompressorIn */

static UA_StatusCode function_ARCOModel_84_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_hdotcompressorin_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_hdotcompressorin_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_hdotcompressorin_variant_DataContents);
*variablenode_ns_0_s_hdotcompressorin_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_hdotcompressorin_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "HdotCompressorIn");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "HdotCompressorIn");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "hdotCompressorIn"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "HdotCompressorIn"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_hdotcompressorin_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_84_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "hdotCompressorIn")
);
}

/* mdotCompressorOut - ns=0;s=mdotCompressorOut */

static UA_StatusCode function_ARCOModel_85_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_mdotcompressorout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_mdotcompressorout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_mdotcompressorout_variant_DataContents);
*variablenode_ns_0_s_mdotcompressorout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_mdotcompressorout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "mdotCompressorOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "mdotCompressorOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "mdotCompressorOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "mdotCompressorOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_mdotcompressorout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_85_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "mdotCompressorOut")
);
}

/* PressCompressorOut - ns=0;s=pressCompressorOut */

static UA_StatusCode function_ARCOModel_86_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_presscompressorout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_presscompressorout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_presscompressorout_variant_DataContents);
*variablenode_ns_0_s_presscompressorout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_presscompressorout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PressCompressorOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PressCompressorOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "pressCompressorOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PressCompressorOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_presscompressorout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_86_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "pressCompressorOut")
);
}

/* CTAH2HeatTransferRate - ns=0;s=ctah2HeatTransferRate */

static UA_StatusCode function_ARCOModel_87_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_ctah2heattransferrate_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_ctah2heattransferrate_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_ctah2heattransferrate_variant_DataContents);
*variablenode_ns_0_s_ctah2heattransferrate_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_ctah2heattransferrate_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CTAH2HeatTransferRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CTAH2HeatTransferRate");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "ctah2HeatTransferRate"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CTAH2HeatTransferRate"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_ctah2heattransferrate_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_87_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "ctah2HeatTransferRate")
);
}

/* PressHPTOut - ns=0;s=pressHptOut */

static UA_StatusCode function_ARCOModel_88_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_presshptout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_presshptout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_presshptout_variant_DataContents);
*variablenode_ns_0_s_presshptout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_presshptout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PressHPTOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PressHPTOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "pressHptOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PressHPTOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_presshptout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_88_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "pressHptOut")
);
}

/* PressCompressorIn - ns=0;s=pressCompressorIn */

static UA_StatusCode function_ARCOModel_89_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_presscompressorin_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_presscompressorin_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_presscompressorin_variant_DataContents);
*variablenode_ns_0_s_presscompressorin_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_presscompressorin_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PressCompressorIn");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PressCompressorIn");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "pressCompressorIn"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PressCompressorIn"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_presscompressorin_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_89_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "pressCompressorIn")
);
}

/* TempLPCTAHOut - ns=0;s=tempLpCtahOut */

static UA_StatusCode function_ARCOModel_90_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_templpctahout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_templpctahout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_templpctahout_variant_DataContents);
*variablenode_ns_0_s_templpctahout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_templpctahout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "TempLPCTAHOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TempLPCTAHOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "tempLpCtahOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "TempLPCTAHOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_templpctahout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_90_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "tempLpCtahOut")
);
}

/* TempLPTOut - ns=0;s=tempLptOut */

static UA_StatusCode function_ARCOModel_91_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_templptout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_templptout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_templptout_variant_DataContents);
*variablenode_ns_0_s_templptout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_templptout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "TempLPTOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TempLPTOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "tempLptOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "TempLPTOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_templptout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_91_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "tempLptOut")
);
}

/* PressHPCTAHOut - ns=0;s=pressHpCtahOut */

static UA_StatusCode function_ARCOModel_92_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_presshpctahout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_presshpctahout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_presshpctahout_variant_DataContents);
*variablenode_ns_0_s_presshpctahout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_presshpctahout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PressHPCTAHOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PressHPCTAHOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "pressHpCtahOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PressHPCTAHOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_presshpctahout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_92_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "pressHpCtahOut")
);
}

/* mdotLPTOut - ns=0;s=mdotLptOut */

static UA_StatusCode function_ARCOModel_93_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_mdotlptout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_mdotlptout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_mdotlptout_variant_DataContents);
*variablenode_ns_0_s_mdotlptout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_mdotlptout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "mdotLPTOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "mdotLPTOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "mdotLptOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "mdotLPTOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_mdotlptout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_93_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "mdotLptOut")
);
}

/* TempHPTOut - ns=0;s=tempHptOut */

static UA_StatusCode function_ARCOModel_94_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_temphptout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_temphptout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_temphptout_variant_DataContents);
*variablenode_ns_0_s_temphptout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_temphptout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "TempHPTOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TempHPTOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "tempHptOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "TempHPTOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_temphptout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_94_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "tempHptOut")
);
}

/* HdotHPCTAHOut - ns=0;s=hdotHpCtahOut */

static UA_StatusCode function_ARCOModel_95_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_hdothpctahout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_hdothpctahout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_hdothpctahout_variant_DataContents);
*variablenode_ns_0_s_hdothpctahout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_hdothpctahout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "HdotHPCTAHOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "HdotHPCTAHOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "hdotHpCtahOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "HdotHPCTAHOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_hdothpctahout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_95_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "hdotHpCtahOut")
);
}

/* TempHPCTAHOut - ns=0;s=tempHpCtahOut */

static UA_StatusCode function_ARCOModel_96_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_temphpctahout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_temphpctahout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_temphpctahout_variant_DataContents);
*variablenode_ns_0_s_temphpctahout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_temphpctahout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "TempHPCTAHOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TempHPCTAHOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "tempHpCtahOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "TempHPCTAHOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_temphpctahout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_96_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "tempHpCtahOut")
);
}

/* HdotLPCTAHOut - ns=0;s=hdotLpCtahOut */

static UA_StatusCode function_ARCOModel_97_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_hdotlpctahout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_hdotlpctahout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_hdotlpctahout_variant_DataContents);
*variablenode_ns_0_s_hdotlpctahout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_hdotlpctahout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "HdotLPCTAHOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "HdotLPCTAHOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "hdotLpCtahOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "HdotLPCTAHOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_hdotlpctahout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_97_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "hdotLpCtahOut")
);
}

/* PressLPTOut - ns=0;s=pressLptOut */

static UA_StatusCode function_ARCOModel_98_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_presslptout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_presslptout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_presslptout_variant_DataContents);
*variablenode_ns_0_s_presslptout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_presslptout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PressLPTOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PressLPTOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "pressLptOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PressLPTOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_presslptout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_98_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "pressLptOut")
);
}

/* TempCompressorOut - ns=0;s=tempCompressorOut */

static UA_StatusCode function_ARCOModel_99_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_tempcompressorout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_tempcompressorout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_tempcompressorout_variant_DataContents);
*variablenode_ns_0_s_tempcompressorout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_tempcompressorout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "TempCompressorOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TempCompressorOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "tempCompressorOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "TempCompressorOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_tempcompressorout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_99_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "tempCompressorOut")
);
}

/* mdotCombustorOut - ns=0;s=mdotCombustorOut */

static UA_StatusCode function_ARCOModel_100_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_mdotcombustorout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_mdotcombustorout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_mdotcombustorout_variant_DataContents);
*variablenode_ns_0_s_mdotcombustorout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_mdotcombustorout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "mdotCombustorOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "mdotCombustorOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "mdotCombustorOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "mdotCombustorOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_mdotcombustorout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_100_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "mdotCombustorOut")
);
}

/* TempCompressorIn - ns=0;s=tempCompressorIn */

static UA_StatusCode function_ARCOModel_101_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_tempcompressorin_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_tempcompressorin_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_tempcompressorin_variant_DataContents);
*variablenode_ns_0_s_tempcompressorin_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_tempcompressorin_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "TempCompressorIn");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TempCompressorIn");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "tempCompressorIn"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "TempCompressorIn"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_tempcompressorin_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_101_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "tempCompressorIn")
);
}

/* PressCombustorOut - ns=0;s=pressCombustorOut */

static UA_StatusCode function_ARCOModel_102_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_presscombustorout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_presscombustorout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_presscombustorout_variant_DataContents);
*variablenode_ns_0_s_presscombustorout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_presscombustorout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PressCombustorOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PressCombustorOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "pressCombustorOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PressCombustorOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_presscombustorout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_102_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "pressCombustorOut")
);
}

/* mdotCompressorIn - ns=0;s=mdotCompressorIn */

static UA_StatusCode function_ARCOModel_103_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_mdotcompressorin_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_mdotcompressorin_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_mdotcompressorin_variant_DataContents);
*variablenode_ns_0_s_mdotcompressorin_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_mdotcompressorin_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "mdotCompressorIn");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "mdotCompressorIn");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "mdotCompressorIn"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "mdotCompressorIn"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_mdotcompressorin_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_103_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "mdotCompressorIn")
);
}

/* CTAH1HeatTransferRate - ns=0;s=ctah1HeatTransferRate */

static UA_StatusCode function_ARCOModel_104_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_ctah1heattransferrate_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_ctah1heattransferrate_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_ctah1heattransferrate_variant_DataContents);
*variablenode_ns_0_s_ctah1heattransferrate_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_ctah1heattransferrate_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CTAH1HeatTransferRate");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CTAH1HeatTransferRate");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "ctah1HeatTransferRate"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CTAH1HeatTransferRate"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_ctah1heattransferrate_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_104_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "ctah1HeatTransferRate")
);
}

/* HPTWorkOut - ns=0;s=hptWorkOut */

static UA_StatusCode function_ARCOModel_105_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_hptworkout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_hptworkout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_hptworkout_variant_DataContents);
*variablenode_ns_0_s_hptworkout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_hptworkout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "HPTWorkOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "HPTWorkOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "hptWorkOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "HPTWorkOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_hptworkout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_105_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "hptWorkOut")
);
}

/* mdotHPCTAHOut - ns=0;s=mdotHpCtahOut */

static UA_StatusCode function_ARCOModel_106_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_mdothpctahout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_mdothpctahout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_mdothpctahout_variant_DataContents);
*variablenode_ns_0_s_mdothpctahout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_mdothpctahout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "mdotHPCTAHOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "mdotHPCTAHOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "mdotHpCtahOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "mdotHPCTAHOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_mdothpctahout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_106_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "mdotHpCtahOut")
);
}

/* LPTWorkOut - ns=0;s=lptWorkOut */

static UA_StatusCode function_ARCOModel_107_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_lptworkout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_lptworkout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_lptworkout_variant_DataContents);
*variablenode_ns_0_s_lptworkout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_lptworkout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "LPTWorkOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "LPTWorkOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "lptWorkOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "LPTWorkOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_lptworkout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_107_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "lptWorkOut")
);
}

/* HdotHPTOut - ns=0;s=hdotHptOut */

static UA_StatusCode function_ARCOModel_108_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_hdothptout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_hdothptout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_hdothptout_variant_DataContents);
*variablenode_ns_0_s_hdothptout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_hdothptout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "HdotHPTOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "HdotHPTOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "hdotHptOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "HdotHPTOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_hdothptout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_108_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "hdotHptOut")
);
}

/* HdotCompressorOut - ns=0;s=hdotCompressorOut */

static UA_StatusCode function_ARCOModel_109_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_hdotcompressorout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_hdotcompressorout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_hdotcompressorout_variant_DataContents);
*variablenode_ns_0_s_hdotcompressorout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_hdotcompressorout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "HdotCompressorOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "HdotCompressorOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "hdotCompressorOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "HdotCompressorOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_hdotcompressorout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_109_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "hdotCompressorOut")
);
}

/* HdotLPTOut - ns=0;s=hdotLptOut */

static UA_StatusCode function_ARCOModel_110_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_hdotlptout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_hdotlptout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_hdotlptout_variant_DataContents);
*variablenode_ns_0_s_hdotlptout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_hdotlptout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "HdotLPTOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "HdotLPTOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "hdotLptOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "HdotLPTOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_hdotlptout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_110_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "hdotLptOut")
);
}

/* PressLPCTAHOut - ns=0;s=pressLpCtahOut */

static UA_StatusCode function_ARCOModel_111_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_presslpctahout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_presslpctahout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_presslpctahout_variant_DataContents);
*variablenode_ns_0_s_presslpctahout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_presslpctahout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PressLPCTAHOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PressLPCTAHOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "pressLpCtahOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PressLPCTAHOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_presslpctahout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_111_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "pressLpCtahOut")
);
}

/* TempCombustorOut - ns=0;s=tempCombustorOut */

static UA_StatusCode function_ARCOModel_112_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_tempcombustorout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_tempcombustorout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_tempcombustorout_variant_DataContents);
*variablenode_ns_0_s_tempcombustorout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_tempcombustorout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "TempCombustorOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TempCombustorOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "tempCombustorOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "TempCombustorOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_tempcombustorout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_112_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "tempCombustorOut")
);
}

/* HdotCombustorOut - ns=0;s=hdotCombustorOut */

static UA_StatusCode function_ARCOModel_113_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_hdotcombustorout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_hdotcombustorout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_hdotcombustorout_variant_DataContents);
*variablenode_ns_0_s_hdotcombustorout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_hdotcombustorout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "HdotCombustorOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "HdotCombustorOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "hdotCombustorOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "HdotCombustorOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_hdotcombustorout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_113_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "hdotCombustorOut")
);
}

/* CompressorWork - ns=0;s=compressorWork */

static UA_StatusCode function_ARCOModel_114_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_compressorwork_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_compressorwork_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_compressorwork_variant_DataContents);
*variablenode_ns_0_s_compressorwork_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_compressorwork_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CompressorWork");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CompressorWork");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "compressorWork"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CompressorWork"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_compressorwork_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_114_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "compressorWork")
);
}

/* mdotLPCTAHOut - ns=0;s=mdotLpCtahOut */

static UA_StatusCode function_ARCOModel_115_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_mdotlpctahout_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_mdotlpctahout_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_mdotlpctahout_variant_DataContents);
*variablenode_ns_0_s_mdotlpctahout_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_mdotlpctahout_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "mdotLPCTAHOut");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "mdotLPCTAHOut");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "mdotLpCtahOut"),
UA_NODEID_STRING(ns[0], "bopOutputs"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "mdotLPCTAHOut"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_mdotlpctahout_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_115_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "mdotLpCtahOut")
);
}

/* Message - ns=0;s=Message */

static UA_StatusCode function_ARCOModel_116_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 12LU);
UA_String *variablenode_ns_0_s_message_variant_DataContents =  UA_String_new();
if (!variablenode_ns_0_s_message_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_String_init(variablenode_ns_0_s_message_variant_DataContents);
*variablenode_ns_0_s_message_variant_DataContents = UA_STRING_ALLOC("Null");
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_message_variant_DataContents, &UA_TYPES[UA_TYPES_STRING]);
attr.displayName = UA_LOCALIZEDTEXT("", "Message");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Message");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "Message"),
UA_NODEID_STRING(ns[0], "ARCOModel"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Message"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_String_delete(variablenode_ns_0_s_message_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_116_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "Message")
);
}

/* Temperature - ns=0;s=Temperature */

static UA_StatusCode function_ARCOModel_117_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_temperature_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_temperature_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_temperature_variant_DataContents);
*variablenode_ns_0_s_temperature_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_temperature_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "Temperature");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Temperature");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "Temperature"),
UA_NODEID_STRING(ns[0], "ARCOModel"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Temperature"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_temperature_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_117_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "Temperature")
);
}

/* vfds - ns=0;s=vfds */

static UA_StatusCode function_ARCOModel_118_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "vfds");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "vfds");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[0], "vfds"),
UA_NODEID_STRING(ns[0], "ARCOModel"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "vfds"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ARCOModel_118_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "vfds")
);
}

/* ActivateCTAH - ns=0;s=activateCtah */

static UA_StatusCode function_ARCOModel_119_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_0_s_activatectah_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_0_s_activatectah_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_0_s_activatectah_variant_DataContents);
*variablenode_ns_0_s_activatectah_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_activatectah_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActivateCTAH");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ActivateCTAH");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "activateCtah"),
UA_NODEID_STRING(ns[0], "vfds"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ActivateCTAH"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_0_s_activatectah_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_119_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "activateCtah")
);
}

/* ActivatePump - ns=0;s=activatePump */

static UA_StatusCode function_ARCOModel_120_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_0_s_activatepump_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_0_s_activatepump_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_0_s_activatepump_variant_DataContents);
*variablenode_ns_0_s_activatepump_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_activatepump_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActivatePump");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ActivatePump");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "activatePump"),
UA_NODEID_STRING(ns[0], "vfds"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ActivatePump"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_0_s_activatepump_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_120_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "activatePump")
);
}

/* TCHXOperatingCase - ns=0;s=tchxOperatingCase */

static UA_StatusCode function_ARCOModel_121_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_tchxoperatingcase_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_tchxoperatingcase_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_tchxoperatingcase_variant_DataContents);
*variablenode_ns_0_s_tchxoperatingcase_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_tchxoperatingcase_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "TCHXOperatingCase");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "TCHXOperatingCase");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "tchxOperatingCase"),
UA_NODEID_STRING(ns[0], "vfds"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "TCHXOperatingCase"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_tchxoperatingcase_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_121_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "tchxOperatingCase")
);
}

/* CTAHOperatingCase - ns=0;s=ctahOperatingCase */

static UA_StatusCode function_ARCOModel_122_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_ctahoperatingcase_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_ctahoperatingcase_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_ctahoperatingcase_variant_DataContents);
*variablenode_ns_0_s_ctahoperatingcase_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_ctahoperatingcase_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CTAHOperatingCase");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "CTAHOperatingCase");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "ctahOperatingCase"),
UA_NODEID_STRING(ns[0], "vfds"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CTAHOperatingCase"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_ctahoperatingcase_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_122_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "ctahOperatingCase")
);
}

/* TCHXFrequency - ns=0;s=tchxFrequency */

static UA_StatusCode function_ARCOModel_123_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_tchxfrequency_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_tchxfrequency_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_tchxfrequency_variant_DataContents);
*variablenode_ns_0_s_tchxfrequency_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_tchxfrequency_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "TCHXFrequency");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Hz");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "tchxFrequency"),
UA_NODEID_STRING(ns[0], "vfds"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "TCHXFrequency"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_tchxfrequency_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_123_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "tchxFrequency")
);
}

/* PumpFrequency - ns=0;s=pumpFrequency */

static UA_StatusCode function_ARCOModel_124_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_pumpfrequency_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_pumpfrequency_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_pumpfrequency_variant_DataContents);
*variablenode_ns_0_s_pumpfrequency_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_pumpfrequency_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PumpFrequency");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Hz");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "pumpFrequency"),
UA_NODEID_STRING(ns[0], "vfds"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PumpFrequency"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_pumpfrequency_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_124_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "pumpFrequency")
);
}

/* SelectOperationMode - ns=0;s=selectOperationMode */

static UA_StatusCode function_ARCOModel_125_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_selectoperationmode_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_selectoperationmode_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_selectoperationmode_variant_DataContents);
*variablenode_ns_0_s_selectoperationmode_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_selectoperationmode_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "SelectOperationMode");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SelectOperationMode");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "selectOperationMode"),
UA_NODEID_STRING(ns[0], "vfds"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "SelectOperationMode"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_selectoperationmode_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_125_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "selectOperationMode")
);
}

/* CTAHFrequency - ns=0;s=ctahFrequency */

static UA_StatusCode function_ARCOModel_126_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_ctahfrequency_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_ctahfrequency_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_ctahfrequency_variant_DataContents);
*variablenode_ns_0_s_ctahfrequency_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_ctahfrequency_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "CTAHFrequency");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "Hz");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "ctahFrequency"),
UA_NODEID_STRING(ns[0], "vfds"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "CTAHFrequency"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_ctahfrequency_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_126_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "ctahFrequency")
);
}

/* PumpOperatingCase - ns=0;s=pumpOperatingCase */

static UA_StatusCode function_ARCOModel_127_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_pumpoperatingcase_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_pumpoperatingcase_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_pumpoperatingcase_variant_DataContents);
*variablenode_ns_0_s_pumpoperatingcase_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_pumpoperatingcase_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PumpOperatingCase");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PumpOperatingCase");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "pumpOperatingCase"),
UA_NODEID_STRING(ns[0], "vfds"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PumpOperatingCase"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_pumpoperatingcase_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_127_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "pumpOperatingCase")
);
}

/* ActivateTCHX - ns=0;s=activateTchx */

static UA_StatusCode function_ARCOModel_128_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_0_s_activatetchx_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_0_s_activatetchx_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_0_s_activatetchx_variant_DataContents);
*variablenode_ns_0_s_activatetchx_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_activatetchx_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActivateTCHX");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ActivateTCHX");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "activateTchx"),
UA_NODEID_STRING(ns[0], "vfds"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ActivateTCHX"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_0_s_activatetchx_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_128_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "activateTchx")
);
}

/* management - ns=0;s=management */

static UA_StatusCode function_ARCOModel_129_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "management");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "management");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[0], "management"),
UA_NODEID_STRING(ns[0], "ARCOModel"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "management"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ARCOModel_129_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "management")
);
}

/* ActionRecorderOn - ns=0;s=actionRecorderOn */

static UA_StatusCode function_ARCOModel_130_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_0_s_actionrecorderon_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_0_s_actionrecorderon_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_0_s_actionrecorderon_variant_DataContents);
*variablenode_ns_0_s_actionrecorderon_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_actionrecorderon_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "ActionRecorderOn");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ActionRecorderOn");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "actionRecorderOn"),
UA_NODEID_STRING(ns[0], "management"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ActionRecorderOn"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_0_s_actionrecorderon_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_130_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "actionRecorderOn")
);
}

/* Time - ns=0;s=time */

static UA_StatusCode function_ARCOModel_131_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 294LU);
UA_DateTime *variablenode_ns_0_s_time_variant_DataContents =  UA_DateTime_new();
if (!variablenode_ns_0_s_time_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_DateTime_init(variablenode_ns_0_s_time_variant_DataContents);
*variablenode_ns_0_s_time_variant_DataContents = ( (UA_DateTime)(978307200000 * UA_DATETIME_MSEC) + UA_DATETIME_UNIX_EPOCH);
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_time_variant_DataContents, &UA_TYPES[UA_TYPES_DATETIME]);
attr.displayName = UA_LOCALIZEDTEXT("", "Time");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "s");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "time"),
UA_NODEID_STRING(ns[0], "management"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "Time"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_DateTime_delete(variablenode_ns_0_s_time_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_131_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "time")
);
}

/* SpoofEnabled - ns=0;s=spoofEnabled */

static UA_StatusCode function_ARCOModel_132_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_0_s_spoofenabled_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_0_s_spoofenabled_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_0_s_spoofenabled_variant_DataContents);
*variablenode_ns_0_s_spoofenabled_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_spoofenabled_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "SpoofEnabled");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "SpoofEnabled");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "spoofEnabled"),
UA_NODEID_STRING(ns[0], "management"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "SpoofEnabled"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_0_s_spoofenabled_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_132_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "spoofEnabled")
);
}

/* FlowData - ns=0;s=flowData */

static UA_StatusCode function_ARCOModel_133_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_0_s_flowdata_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_0_s_flowdata_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_0_s_flowdata_variant_DataContents);
*variablenode_ns_0_s_flowdata_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_flowdata_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "FlowData");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "FlowData");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "flowData"),
UA_NODEID_STRING(ns[0], "management"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "FlowData"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_0_s_flowdata_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_133_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "flowData")
);
}

/* ExitProfile - ns=0;s=exitProfile */

static UA_StatusCode function_ARCOModel_134_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_0_s_exitprofile_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_0_s_exitprofile_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_0_s_exitprofile_variant_DataContents);
*variablenode_ns_0_s_exitprofile_variant_DataContents = (UA_Boolean) true;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_exitprofile_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "ExitProfile");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "ExitProfile");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "exitProfile"),
UA_NODEID_STRING(ns[0], "management"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "ExitProfile"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_0_s_exitprofile_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_134_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "exitProfile")
);
}

/* heaters - ns=0;s=heaters */

static UA_StatusCode function_ARCOModel_135_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_ObjectAttributes attr = UA_ObjectAttributes_default;
attr.displayName = UA_LOCALIZEDTEXT("", "heaters");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "heaters");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
UA_NODEID_STRING(ns[0], "heaters"),
UA_NODEID_STRING(ns[0], "ARCOModel"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "heaters"),
UA_NODEID_NUMERIC(ns[0], 61LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
return retVal;
}

static UA_StatusCode function_ARCOModel_135_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "heaters")
);
}

/* PowerOutput - ns=0;s=powerOutput */

static UA_StatusCode function_ARCOModel_136_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_poweroutput_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_poweroutput_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_poweroutput_variant_DataContents);
*variablenode_ns_0_s_poweroutput_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_poweroutput_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PowerOutput");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "W");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "powerOutput"),
UA_NODEID_STRING(ns[0], "heaters"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PowerOutput"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_poweroutput_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_136_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "powerOutput")
);
}

/* OutputCurrent1 - ns=0;s=outputCurrent1 */

static UA_StatusCode function_ARCOModel_137_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_outputcurrent1_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_outputcurrent1_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_outputcurrent1_variant_DataContents);
*variablenode_ns_0_s_outputcurrent1_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_outputcurrent1_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputCurrent1");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "outputCurrent1"),
UA_NODEID_STRING(ns[0], "heaters"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "OutputCurrent1"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_outputcurrent1_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_137_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "outputCurrent1")
);
}

/* OutputCurrent2 - ns=0;s=outputCurrent2 */

static UA_StatusCode function_ARCOModel_138_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_outputcurrent2_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_outputcurrent2_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_outputcurrent2_variant_DataContents);
*variablenode_ns_0_s_outputcurrent2_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_outputcurrent2_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputCurrent2");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "A");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "outputCurrent2"),
UA_NODEID_STRING(ns[0], "heaters"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "OutputCurrent2"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_outputcurrent2_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_138_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "outputCurrent2")
);
}

/* OutputVoltage1 - ns=0;s=outputVoltage1 */

static UA_StatusCode function_ARCOModel_139_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_outputvoltage1_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_outputvoltage1_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_outputvoltage1_variant_DataContents);
*variablenode_ns_0_s_outputvoltage1_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_outputvoltage1_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputVoltage1");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "V");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "outputVoltage1"),
UA_NODEID_STRING(ns[0], "heaters"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "OutputVoltage1"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_outputvoltage1_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_139_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "outputVoltage1")
);
}

/* PowerInputSignal - ns=0;s=powerInputSignal */

static UA_StatusCode function_ARCOModel_140_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_powerinputsignal_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_powerinputsignal_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_powerinputsignal_variant_DataContents);
*variablenode_ns_0_s_powerinputsignal_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_powerinputsignal_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "PowerInputSignal");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "W");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "powerInputSignal"),
UA_NODEID_STRING(ns[0], "heaters"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PowerInputSignal"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_powerinputsignal_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_140_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "powerInputSignal")
);
}

/* DesiredPower - ns=0;s=desiredPower */

static UA_StatusCode function_ARCOModel_141_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_desiredpower_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_desiredpower_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_desiredpower_variant_DataContents);
*variablenode_ns_0_s_desiredpower_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_desiredpower_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "DesiredPower");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "W");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "desiredPower"),
UA_NODEID_STRING(ns[0], "heaters"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "DesiredPower"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_desiredpower_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_141_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "desiredPower")
);
}

/* PowerOutputOn - ns=0;s=powerOutputOn */

static UA_StatusCode function_ARCOModel_142_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
UA_Boolean *variablenode_ns_0_s_poweroutputon_variant_DataContents =  UA_Boolean_new();
if (!variablenode_ns_0_s_poweroutputon_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Boolean_init(variablenode_ns_0_s_poweroutputon_variant_DataContents);
*variablenode_ns_0_s_poweroutputon_variant_DataContents = (UA_Boolean) false;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_poweroutputon_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
attr.displayName = UA_LOCALIZEDTEXT("", "PowerOutputOn");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "PowerOutputOn");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "powerOutputOn"),
UA_NODEID_STRING(ns[0], "heaters"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "PowerOutputOn"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Boolean_delete(variablenode_ns_0_s_poweroutputon_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_142_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "powerOutputOn")
);
}

/* OutputVoltage2 - ns=0;s=outputVoltage2 */

static UA_StatusCode function_ARCOModel_143_begin(UA_Server *server, UA_UInt16* ns) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
UA_VariableAttributes attr = UA_VariableAttributes_default;
attr.minimumSamplingInterval = 0.000000;
attr.userAccessLevel = 1;
attr.accessLevel = 111;
/* Value rank inherited */
attr.valueRank = -1;
attr.dataType = UA_NODEID_NUMERIC(ns[0], 11LU);
UA_Double *variablenode_ns_0_s_outputvoltage2_variant_DataContents =  UA_Double_new();
if (!variablenode_ns_0_s_outputvoltage2_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
UA_Double_init(variablenode_ns_0_s_outputvoltage2_variant_DataContents);
*variablenode_ns_0_s_outputvoltage2_variant_DataContents = (UA_Double) 0.0;
UA_Variant_setScalar(&attr.value, variablenode_ns_0_s_outputvoltage2_variant_DataContents, &UA_TYPES[UA_TYPES_DOUBLE]);
attr.displayName = UA_LOCALIZEDTEXT("", "OutputVoltage2");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
attr.description = UA_LOCALIZEDTEXT("", "V");
#endif
retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
UA_NODEID_STRING(ns[0], "outputVoltage2"),
UA_NODEID_STRING(ns[0], "heaters"),
UA_NODEID_NUMERIC(ns[0], 47LU),
UA_QUALIFIEDNAME(ns[1], "OutputVoltage2"),
UA_NODEID_NUMERIC(ns[0], 63LU),
(const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
UA_Double_delete(variablenode_ns_0_s_outputvoltage2_variant_DataContents);
return retVal;
}

static UA_StatusCode function_ARCOModel_143_finish(UA_Server *server, UA_UInt16* ns) {
return UA_Server_addNode_finish(server, 
UA_NODEID_STRING(ns[0], "outputVoltage2")
);
}

UA_StatusCode ARCOModel(UA_Server *server) {
UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
UA_UInt16 ns[2];
ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
ns[1] = UA_Server_addNamespace(server, "ARCONamespace");

/* Load custom datatype definitions into the server */
if((retVal = function_ARCOModel_0_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_1_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_2_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_3_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_4_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_5_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_6_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_7_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_8_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_9_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_10_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_11_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_12_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_13_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_14_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_15_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_16_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_17_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_18_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_19_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_20_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_21_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_22_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_23_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_24_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_25_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_26_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_27_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_28_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_29_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_30_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_31_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_32_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_33_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_34_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_35_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_36_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_37_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_38_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_39_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_40_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_41_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_42_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_43_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_44_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_45_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_46_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_47_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_48_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_49_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_50_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_51_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_52_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_53_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_54_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_55_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_56_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_57_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_58_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_59_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_60_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_61_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_62_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_63_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_64_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_65_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_66_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_67_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_68_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_69_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_70_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_71_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_72_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_73_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_74_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_75_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_76_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_77_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_78_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_79_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_80_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_81_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_82_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_83_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_84_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_85_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_86_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_87_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_88_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_89_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_90_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_91_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_92_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_93_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_94_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_95_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_96_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_97_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_98_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_99_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_100_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_101_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_102_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_103_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_104_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_105_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_106_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_107_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_108_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_109_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_110_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_111_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_112_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_113_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_114_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_115_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_116_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_117_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_118_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_119_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_120_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_121_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_122_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_123_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_124_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_125_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_126_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_127_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_128_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_129_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_130_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_131_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_132_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_133_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_134_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_135_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_136_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_137_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_138_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_139_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_140_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_141_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_142_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_143_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_143_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_142_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_141_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_140_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_139_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_138_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_137_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_136_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_135_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_134_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_133_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_132_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_131_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_130_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_129_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_128_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_127_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_126_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_125_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_124_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_123_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_122_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_121_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_120_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_119_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_118_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_117_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_116_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_115_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_114_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_113_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_112_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_111_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_110_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_109_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_108_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_107_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_106_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_105_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_104_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_103_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_102_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_101_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_100_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_99_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_98_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_97_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_96_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_95_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_94_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_93_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_92_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_91_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_90_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_89_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_88_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_87_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_86_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_85_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_84_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_83_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_82_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_81_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_80_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_79_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_78_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_77_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_76_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_75_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_74_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_73_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_72_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_71_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_70_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_69_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_68_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_67_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_66_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_65_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_64_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_63_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_62_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_61_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_60_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_59_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_58_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_57_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_56_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_55_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_54_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_53_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_52_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_51_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_50_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_49_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_48_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_47_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_46_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_45_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_44_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_43_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_42_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_41_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_40_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_39_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_38_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_37_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_36_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_35_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_34_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_33_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_32_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_31_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_30_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_29_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_28_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_27_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_26_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_25_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_24_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_23_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_22_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_21_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_20_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_19_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_18_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_17_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_16_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_15_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_14_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_13_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_12_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_11_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_10_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_9_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_8_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_7_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_6_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_5_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_4_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_3_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_2_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_1_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
if((retVal = function_ARCOModel_0_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
return retVal;
}
