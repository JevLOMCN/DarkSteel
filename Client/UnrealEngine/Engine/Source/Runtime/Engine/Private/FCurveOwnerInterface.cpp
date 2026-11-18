// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetCurveColor @ 147a4ec30

FLinearColor * __thiscall
FCurveOwnerInterface::GetCurveColor
          (FCurveOwnerInterface *this,FLinearColor *__return_storage_ptr__,
          FRichCurveEditInfoTemplate<FRealCurve_*> *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  FString local_18;
  
  ::FName::ToString(&param_1->CurveName,&local_18);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,L"X");
  if (iVar1 == 0) {
LAB_147a4ed4c:
    (__return_storage_ptr__->field0_0x0)._s_0.R = 1.0;
    (__return_storage_ptr__->field0_0x0)._s_0.G = 0.05;
  }
  else {
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,L"R");
    if (iVar1 == 0) goto LAB_147a4ed4c;
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,L"Y");
    if (iVar1 != 0) {
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar2.Data = local_18.Data.AllocatorInstance.Data;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,L"G");
      if (iVar1 != 0) {
        FVar2.Data = (FScriptContainerElement *)L"";
        if (local_18.Data.ArrayNum != 0) {
          FVar2.Data = local_18.Data.AllocatorInstance.Data;
        }
        iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,L"Z");
        if (iVar1 != 0) {
          FVar2.Data = (FScriptContainerElement *)L"";
          if (local_18.Data.ArrayNum != 0) {
            FVar2.Data = local_18.Data.AllocatorInstance.Data;
          }
          iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,L"B");
          if (iVar1 != 0) {
            (__return_storage_ptr__->field0_0x0)._s_0.R = 0.2;
            (__return_storage_ptr__->field0_0x0)._s_0.G = 0.2;
            (__return_storage_ptr__->field0_0x0)._s_0.B = 0.2;
            goto LAB_147a4ed60;
          }
        }
        (__return_storage_ptr__->field0_0x0)._s_0.R = 0.1;
        (__return_storage_ptr__->field0_0x0)._s_0.G = 0.2;
        (__return_storage_ptr__->field0_0x0)._s_0.B = 1.0;
        goto LAB_147a4ed60;
      }
    }
    (__return_storage_ptr__->field0_0x0)._s_0.R = 0.05;
    (__return_storage_ptr__->field0_0x0)._s_0.G = 1.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.B = 0.05;
LAB_147a4ed60:
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

