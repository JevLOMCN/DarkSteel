// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXD3D11RHI
// Functions: 1

// ~FD3D11NGXFeatureHandle @ 14de12bb0

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

void __thiscall FD3D11NGXFeatureHandle::~FD3D11NGXFeatureHandle(FD3D11NGXFeatureHandle *this)

{
  code *pcVar1;
  bool bVar2;
  NVSDK_NGX_Result NVar3;
  FString local_28;
  FString local_18;
  
  *(undefined ***)this = &___7FD3D11NGXFeatureHandle__6B_;
  if (((GIsRunningRHIInSeparateThread_InternalUseOnly != false) && (bVar2 = IsInRHIThread(), !bVar2)
      ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsRunningRHIInSeparateThread() || IsInRHIThread()",
                               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D11RHI\\Private\\NGXD3D11RHI.cpp"
                               ,0x22,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((NGXRHI::bNGXInitialized == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NGXRHI::NGXInitialized()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D11RHI\\Private\\NGXD3D11RHI.cpp"
                         ,0x23,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  NVar3 = NVSDK_NGX_D3D11_ReleaseFeature(*(NVSDK_NGX_Handle **)&this->field_0x48);
  if ((NVar3 & 0xfff00000) == NVSDK_NGX_Result_Fail) {
    FDLSSFeatureDesc::GetDebugDescription((FDLSSFeatureDesc *)&this->field_0x8,&local_28);
    GetNGXResultAsString(NVar3);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((ResultReleaseFeature) & 0xFFF00000) != NVSDK_NGX_Result_Fail)",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D11RHI\\Private\\NGXD3D11RHI.cpp"
                       ,0x25,L"NVSDK_NGX_D3D11_ReleaseFeature failed! (%u %s), %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((*(NVSDK_NGX_Parameter **)&this->field_0x50 != (NVSDK_NGX_Parameter *)0x0) &&
     (NVar3 = NVSDK_NGX_D3D11_DestroyParameters(*(NVSDK_NGX_Parameter **)&this->field_0x50),
     (NVar3 & 0xfff00000) == NVSDK_NGX_Result_Fail)) {
    FDLSSFeatureDesc::GetDebugDescription((FDLSSFeatureDesc *)&this->field_0x8,&local_18);
    GetNGXResultAsString(NVar3);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(((ResultDestroyParameter) & 0xFFF00000) != NVSDK_NGX_Result_Fail)",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXD3D11RHI\\Private\\NGXD3D11RHI.cpp"
                       ,0x2a,L"NVSDK_NGX_D3D11_DestroyParameters failed! (%u %s), %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  NGXDLSSFeature::~NGXDLSSFeature((NGXDLSSFeature *)this);
  return;
}

