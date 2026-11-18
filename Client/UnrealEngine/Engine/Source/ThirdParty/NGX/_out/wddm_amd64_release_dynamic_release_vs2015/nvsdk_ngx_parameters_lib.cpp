// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGX
// Functions: 17

// GetNGXResultAsString @ 14ff33020

wchar_t * __cdecl GetNGXResultAsString(NVSDK_NGX_Result param_1)

{
  if ((int)param_1 < 2) {
    if (param_1 == NVSDK_NGX_Result_Success) {
      return L"NVSDK_NGX_Result_Success";
    }
    switch(param_1) {
    case NVSDK_NGX_Result_Fail:
      return L"NVSDK_NGX_Result_Fail";
    case NVSDK_NGX_Result_FAIL_FeatureNotSupported:
      return L"NVSDK_NGX_Result_FAIL_FeatureNotSupported";
    case NVSDK_NGX_Result_FAIL_PlatformError:
      return L"NVSDK_NGX_Result_FAIL_PlatformError";
    case NVSDK_NGX_Result_FAIL_FeatureAlreadyExists:
      return L"NVSDK_NGX_Result_FAIL_FeatureAlreadyExists";
    case NVSDK_NGX_Result_FAIL_FeatureNotFound:
      return L"NVSDK_NGX_Result_FAIL_FeatureNotFound";
    case NVSDK_NGX_Result_FAIL_InvalidParameter:
      return L"NVSDK_NGX_Result_FAIL_InvalidParameter";
    case NVSDK_NGX_Result_FAIL_ScratchBufferTooSmall:
      return L"NVSDK_NGX_Result_FAIL_ScratchBufferTooSmall";
    case NVSDK_NGX_Result_FAIL_NotInitialized:
      return L"NVSDK_NGX_Result_FAIL_NotInitialized";
    case NVSDK_NGX_Result_FAIL_UnsupportedInputFormat:
      return L"NVSDK_NGX_Result_FAIL_UnsupportedInputFormat";
    case NVSDK_NGX_Result_FAIL_RWFlagMissing:
      return L"NVSDK_NGX_Result_FAIL_RWFlagMissing";
    case NVSDK_NGX_Result_FAIL_MissingInput:
      return L"NVSDK_NGX_Result_FAIL_MissingInput";
    case NVSDK_NGX_Result_FAIL_UnableToInitializeFeature:
      return L"NVSDK_NGX_Result_FAIL_UnableToInitializeFeature";
    case NVSDK_NGX_Result_FAIL_OutOfDate:
      return L"NVSDK_NGX_Result_FAIL_OutOfDate";
    case NVSDK_NGX_Result_FAIL_OutOfGPUMemory:
      return L"NVSDK_NGX_Result_FAIL_OutOfGPUMemory";
    case NVSDK_NGX_Result_FAIL_UnsupportedFormat:
      return L"NVSDK_NGX_Result_FAIL_UnsupportedFormat";
    case NVSDK_NGX_Result_FAIL_UnableToWriteToAppDataPath:
      return L"NVSDK_NGX_Result_FAIL_UnableToWriteToAppDataPath";
    case NVSDK_NGX_Result_FAIL_UnsupportedParameter:
      return L"NVSDK_NGX_Result_FAIL_UnsupportedParameter";
    case NVSDK_NGX_Result_FAIL_Denied:
      return L"NVSDK_NGX_Result_FAIL_Denied";
    case NVSDK_NGX_Result_FAIL_NotImplemented:
      return L"NVSDK_NGX_Result_FAIL_NotImplemented";
    }
  }
  return L"unknown NVSDK_NGX_Result value";
}

// NVSDK_NGX_Parameter_GetD @ 14ff33150

NVSDK_NGX_Result __cdecl
NVSDK_NGX_Parameter_GetD(NVSDK_NGX_Parameter *param_1,char *param_2,double *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 0x68);
  (*__guard_check_icall_fptr)(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00014ff3319f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return NVar1;
}

// NVSDK_NGX_Parameter_GetD3d11Resource @ 14ff331b0

NVSDK_NGX_Result __cdecl
NVSDK_NGX_Parameter_GetD3d11Resource
          (NVSDK_NGX_Parameter *param_1,char *param_2,ID3D11Resource **param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 0x50);
  (*__guard_check_icall_fptr)(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00014ff331ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return NVar1;
}

// NVSDK_NGX_Parameter_GetD3d12Resource @ 14ff33210

NVSDK_NGX_Result __cdecl
NVSDK_NGX_Parameter_GetD3d12Resource
          (NVSDK_NGX_Parameter *param_1,char *param_2,ID3D12Resource **param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 0x48);
  (*__guard_check_icall_fptr)(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00014ff3325f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return NVar1;
}

// NVSDK_NGX_Parameter_GetF @ 14ff33270

NVSDK_NGX_Result __cdecl
NVSDK_NGX_Parameter_GetF(NVSDK_NGX_Parameter *param_1,char *param_2,float *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 0x70);
  (*__guard_check_icall_fptr)(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00014ff332bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return NVar1;
}

// NVSDK_NGX_Parameter_GetI @ 14ff332d0

NVSDK_NGX_Result __cdecl
NVSDK_NGX_Parameter_GetI(NVSDK_NGX_Parameter *param_1,char *param_2,int *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 0x58);
  (*__guard_check_icall_fptr)(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00014ff3331f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return NVar1;
}

// NVSDK_NGX_Parameter_GetUI @ 14ff33330

NVSDK_NGX_Result __cdecl
NVSDK_NGX_Parameter_GetUI(NVSDK_NGX_Parameter *param_1,char *param_2,uint *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 0x60);
  (*__guard_check_icall_fptr)(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00014ff3337f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return NVar1;
}

// NVSDK_NGX_Parameter_GetULL @ 14ff33390

NVSDK_NGX_Result __cdecl
NVSDK_NGX_Parameter_GetULL(NVSDK_NGX_Parameter *param_1,char *param_2,ulong64 *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 0x78);
  (*__guard_check_icall_fptr)(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00014ff333df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return NVar1;
}

// NVSDK_NGX_Parameter_GetVoidPointer @ 14ff333f0

NVSDK_NGX_Result __cdecl
NVSDK_NGX_Parameter_GetVoidPointer(NVSDK_NGX_Parameter *param_1,char *param_2,void **param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  NVSDK_NGX_Result NVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 0x40);
  (*__guard_check_icall_fptr)(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00014ff3343f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  NVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return NVar1;
}

// NVSDK_NGX_Parameter_SetD @ 14ff33450

void __cdecl NVSDK_NGX_Parameter_SetD(NVSDK_NGX_Parameter *param_1,char *param_2,double param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 0x28);
  (*__guard_check_icall_fptr)(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00014ff3349d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,SUB84(param_3,0));
  return;
}

// NVSDK_NGX_Parameter_SetD3d11Resource @ 14ff334b0

void __cdecl
NVSDK_NGX_Parameter_SetD3d11Resource
          (NVSDK_NGX_Parameter *param_1,char *param_2,ID3D11Resource *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 0x10);
  (*__guard_check_icall_fptr)(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00014ff334ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}

// NVSDK_NGX_Parameter_SetD3d12Resource @ 14ff33510

void __cdecl
NVSDK_NGX_Parameter_SetD3d12Resource
          (NVSDK_NGX_Parameter *param_1,char *param_2,ID3D12Resource *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 8);
  (*__guard_check_icall_fptr)(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00014ff3355f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}

// NVSDK_NGX_Parameter_SetF @ 14ff33570

void __cdecl NVSDK_NGX_Parameter_SetF(NVSDK_NGX_Parameter *param_1,char *param_2,float param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 0x30);
  (*__guard_check_icall_fptr)(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00014ff335bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}

// NVSDK_NGX_Parameter_SetI @ 14ff335d0

void __cdecl NVSDK_NGX_Parameter_SetI(NVSDK_NGX_Parameter *param_1,char *param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 0x18);
  (*__guard_check_icall_fptr)(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00014ff3361f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}

// NVSDK_NGX_Parameter_SetUI @ 14ff33630

void __cdecl NVSDK_NGX_Parameter_SetUI(NVSDK_NGX_Parameter *param_1,char *param_2,uint param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 0x20);
  (*__guard_check_icall_fptr)(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00014ff3367f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}

// NVSDK_NGX_Parameter_SetULL @ 14ff33690

void __cdecl NVSDK_NGX_Parameter_SetULL(NVSDK_NGX_Parameter *param_1,char *param_2,ulong64 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)*param_1 + 0x38);
  (*__guard_check_icall_fptr)(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00014ff336df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}

// NVSDK_NGX_Parameter_SetVoidPointer @ 14ff336f0

void __cdecl
NVSDK_NGX_Parameter_SetVoidPointer(NVSDK_NGX_Parameter *param_1,char *param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)*param_1;
  (*__guard_check_icall_fptr)(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x00014ff3373e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}

