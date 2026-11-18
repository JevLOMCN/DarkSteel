// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 1

// OutputBookmark<> @ 14dd68fc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMiscTrace::OutputBookmark<>(uint param_1,void *param_2)

{
  undefined1 auStack_1038 [32];
  uchar local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14dd68fca;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1038;
  local_1018[0] = '\0';
  OutputBookmarkInternal(param_2,param_1,1,local_1018);
  return;
}

