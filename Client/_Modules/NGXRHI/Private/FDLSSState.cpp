// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NGXRHI
// Functions: 1

// RequiresFeatureRecreation @ 14de11e20

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */

bool __thiscall FDLSSState::RequiresFeatureRecreation(FDLSSState *this,FRHIDLSSArguments *param_1)

{
  NGXDLSSFeature *pNVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TIntRect<int>_u_0 local_48;
  TIntPoint<int>_u_0 local_38;
  TIntPoint<int>_u_0 local_30;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  uint local_18;
  uint local_14;
  ENGXDLSSDenoiserMode local_10;
  
  if (GIsRunningRHIInSeparateThread_InternalUseOnly) {
    bVar3 = IsInRHIThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRunningRHIInSeparateThread() || IsInRHIThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\NGXRHI\\Private\\NGXRHI.cpp"
                         ,0x264,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  pNVar1 = (this->DLSSFeature).Object;
  if (pNVar1 != (NGXDLSSFeature *)0x0) {
    local_48._s_0.Min.field0_0x0 = (TIntPoint<int>)(param_1->SrcRect).field0_0x0._s_0.Min.field0_0x0
    ;
    local_48._s_0.Max.field0_0x0 = (TIntPoint<int>)(param_1->SrcRect).field0_0x0._s_0.Max.field0_0x0
    ;
    local_38 = (param_1->DestRect).field0_0x0._s_0.Min.field0_0x0;
    local_30 = (param_1->DestRect).field0_0x0._s_0.Max.field0_0x0;
    local_28 = param_1->DLSSPreset;
    local_24 = param_1->DLSSRRPreset;
    local_20 = param_1->PerfQuality;
    local_1c = param_1->bHighResolutionMotionVectors;
    local_1b = param_1->bUseAutoExposure;
    local_1a = param_1->bEnableAlphaUpscaling;
    local_19 = param_1->bReleaseMemoryOnDelete;
    local_18 = param_1->GPUNode;
    local_14 = param_1->GPUVisibility;
    local_10 = param_1->DenoiserMode;
    bVar3 = FDLSSFeatureDesc::operator!=(&pNVar1->Desc,(FDLSSFeatureDesc *)&local_48._s_0);
    return bVar3;
  }
  return true;
}

