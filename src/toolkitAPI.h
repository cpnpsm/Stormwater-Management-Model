//-----------------------------------------------------------------------------
//   toolkitAPI.h
//
//   Project: EPA SWMM5
//   Version: 5.1
//   Date:    08/30/2016
//   Author:  B. McDonnell (EmNet LLC)
//
//   Exportable Functions for Project Definition API.
//
//-----------------------------------------------------------------------------


#ifdef WINDOWS
	#ifdef __MINGW32__
		#define DLLEXPORT __declspec(dllexport) __cdecl // <- More wrapper friendly
	#else
		#define DLLEXPORT __declspec(dllexport) __stdcall
	#endif
#else
	#define DLLEXPORT
#endif


#ifdef __cplusplus
extern "C" { 
#endif 

// Input API Exportable Functions
int DLLEXPORT  swmm_countObjects(int type, int *count);
int DLLEXPORT  swmm_getObjectId(int type, int index, char *id);

int DLLEXPORT  swmm_getNodeType(int index, int *Ntype);
int DLLEXPORT  swmm_getLinkType(int index, int *Ltype);

int DLLEXPORT  swmm_getLinkConnections(int index, int *Node1, int *Node2);
int DLLEXPORT  swmm_getSubcatchOutConnection(int index, int *type, int *Index );

//Nodes
int DLLEXPORT  swmm_getNodeParam(int index, int Param, double *value);
//Links
int DLLEXPORT  swmm_getLinkParam(int index, int Param, double *value);
int DLLEXPORT  swmm_getLinkDirection(int index, signed char *value);
//Subcatchments
int DLLEXPORT  swmm_getSubcatchParam(int index, int Param, double *value);

//-------------------------------
// Active Simulation Results API
//-------------------------------
int DLLEXPORT swmm_getNodeResult(int index, int type, double *result);
int DLLEXPORT swmm_getLinkResult(int index, int type, double *result);
int DLLEXPORT swmm_getSubcatchResult(int index, int type, double *result);

//-------------------------------
// Setters API
//-------------------------------
int DLLEXPORT swmm_setLinkParam(int index, double setting);


#ifdef __cplusplus 
}   // matches the linkage specification from above */ 
#endif


