// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Fork_GameThread @ 147b628c0

ISceneViewFamilyScreenPercentage * __thiscall
FDefaultDynamicResolutionDriver::Fork_GameThread
          (FDefaultDynamicResolutionDriver *this,FSceneViewFamily *param_1)

{
  ISceneViewFamilyScreenPercentage IVar1;
  code *pcVar2;
  bool bVar3;
  ISceneViewFamilyScreenPercentage *pIVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                       ,0x28c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (ISceneViewFamilyScreenPercentage *)(*pcVar2)();
      return pIVar4;
    }
  }
  pIVar4 = ::operator_new(0x18);
  if (pIVar4 != (ISceneViewFamilyScreenPercentage *)0x0) {
    IVar1 = (ISceneViewFamilyScreenPercentage)this->Proxy;
    *pIVar4 = (ISceneViewFamilyScreenPercentage)&___7FDefaultDynamicResolutionDriver__6B_;
    pIVar4[1] = IVar1;
    pIVar4[2] = (ISceneViewFamilyScreenPercentage)param_1;
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                         ,0x27c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar4 = (ISceneViewFamilyScreenPercentage *)(*pcVar2)();
        return pIVar4;
      }
    }
    return pIVar4;
  }
  return (ISceneViewFamilyScreenPercentage *)0x0;
}

// GetResolutionFractionsUpperBound @ 147b6d780

TMap<float> * __thiscall
FDefaultDynamicResolutionDriver::GetResolutionFractionsUpperBound
          (FDefaultDynamicResolutionDriver *this,TMap<float> *__return_storage_ptr__)

{
  FDefaultDynamicResolutionStateProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  TMap<float> *pTVar4;
  float *pfVar5;
  
  pFVar1 = this->Proxy;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = IsInParallelRenderingThread();
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                         ,0x1f6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TMap<float> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  DynamicRenderScaling::TMap<float>::TMap<float>
            (__return_storage_ptr__,&(pFVar1->Heuristic).CurrentFrameMaxResolutionFractions);
  if ((this->ViewFamily->EngineShowFlags).ScreenPercentage == 0) {
    pfVar5 = DynamicRenderScaling::TMap<float>::operator[]
                       (__return_storage_ptr__,&GDynamicPrimaryResolutionFraction);
    *pfVar5 = 1.0;
  }
  return __return_storage_ptr__;
}

// GetResolutionFractions_RenderThread @ 147b6da00

TMap<float> * __thiscall
FDefaultDynamicResolutionDriver::GetResolutionFractions_RenderThread
          (FDefaultDynamicResolutionDriver *this,TMap<float> *__return_storage_ptr__)

{
  FDefaultDynamicResolutionStateProxy *this_00;
  code *pcVar1;
  bool bVar2;
  TMap<float> *pTVar3;
  float *pfVar4;
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicResolution.cpp"
                       ,0x293,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMap<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this_00 = this->Proxy;
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\DynamicResolutionProxy.h"
                       ,0x1d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMap<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FDynamicResolutionHeuristicProxy::QueryCurrentFrameResolutionFractions_Internal
            (&this_00->Heuristic,__return_storage_ptr__);
  if ((this->ViewFamily->EngineShowFlags).ScreenPercentage == 0) {
    pfVar4 = DynamicRenderScaling::TMap<float>::operator[]
                       (__return_storage_ptr__,&GDynamicPrimaryResolutionFraction);
    *pfVar4 = 1.0;
  }
  return __return_storage_ptr__;
}

