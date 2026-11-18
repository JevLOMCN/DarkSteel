// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FScreenPercentageHellDriver @ 1454d4d80

FScreenPercentageHellDriver * __thiscall
_anon_8E22FA03::FScreenPercentageHellDriver::FScreenPercentageHellDriver
          (FScreenPercentageHellDriver *this,FSceneViewFamily *param_1)

{
  code *pcVar1;
  bool bVar2;
  FScreenPercentageHellDriver *pFVar3;
  float fVar4;
  
  fVar4 = __real_3f800000;
  this->_padding_ = (longlong)&::FScreenPercentageHellDriver::_vftable_;
  this->ViewFamily = param_1;
  this->MinResolutionFraction = 0.5;
  this->MaxResolutionFraction = 1.0;
  if (param_1->TemporalUpscalerInterface != (ITemporalUpscaler *)0x0) {
    fVar4 = (float)(**(code **)((longlong)*param_1->TemporalUpscalerInterface + 0x18))();
    this->MinResolutionFraction = fVar4;
    fVar4 = (float)(**(code **)((longlong)*param_1->TemporalUpscalerInterface + 0x20))();
    this->MaxResolutionFraction = fVar4;
  }
  if (fVar4 < this->MinResolutionFraction) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MinResolutionFraction <= MaxResolutionFraction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x282,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FScreenPercentageHellDriver *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->MinResolutionFraction <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MinResolutionFraction > 0.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FScreenPercentageHellDriver *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->MaxResolutionFraction <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxResolutionFraction > 0.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x284,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FScreenPercentageHellDriver *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// Fork_GameThread @ 1454f0470

ISceneViewFamilyScreenPercentage * __thiscall
_anon_8E22FA03::FScreenPercentageHellDriver::Fork_GameThread
          (FScreenPercentageHellDriver *this,FSceneViewFamily *param_1)

{
  code *pcVar1;
  bool bVar2;
  ISceneViewFamilyScreenPercentage *pIVar3;
  FScreenPercentageHellDriver *this_00;
  FLegacyScreenPercentageDriver *pFVar4;
  FLegacyScreenPercentageDriver *this_01;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                         ,0x293,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ISceneViewFamilyScreenPercentage *)(*pcVar1)();
    return pIVar3;
  }
  pFVar4 = (FLegacyScreenPercentageDriver *)0x0;
  if (((param_1->Views).ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ISceneViewFamilyScreenPercentage *)(*pcVar1)();
    return pIVar3;
  }
  if (*(longlong *)(*(longlong *)(param_1->Views).AllocatorInstance.Data + 0x10) == 0) {
    this_01 = ::operator_new(0x18);
    if (this_01 != (FLegacyScreenPercentageDriver *)0x0) {
      pFVar4 = FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver
                         (this_01,param_1,this->MaxResolutionFraction);
    }
  }
  else {
    this_00 = ::operator_new(0x18);
    if (this_00 != (FScreenPercentageHellDriver *)0x0) {
      pFVar4 = (FLegacyScreenPercentageDriver *)FScreenPercentageHellDriver(this_00,param_1);
    }
  }
  return (ISceneViewFamilyScreenPercentage *)pFVar4;
}

// GetResolutionFractionsUpperBound @ 1454f85e0

TMap<float> * __thiscall
_anon_8E22FA03::FScreenPercentageHellDriver::GetResolutionFractionsUpperBound
          (FScreenPercentageHellDriver *this,TMap<float> *__return_storage_ptr__)

{
  float fVar1;
  float *pfVar2;
  
  DynamicRenderScaling::TMap<float>::TMap<float>(__return_storage_ptr__);
  if ((this->ViewFamily->EngineShowFlags).ScreenPercentage != 0) {
    fVar1 = this->MaxResolutionFraction;
    pfVar2 = DynamicRenderScaling::TMap<float>::operator[]
                       (__return_storage_ptr__,&GDynamicPrimaryResolutionFraction);
    *pfVar2 = fVar1;
  }
  return __return_storage_ptr__;
}

// GetResolutionFractions_RenderThread @ 1454f8640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMap<float> * __thiscall
_anon_8E22FA03::FScreenPercentageHellDriver::GetResolutionFractions_RenderThread
          (FScreenPercentageHellDriver *this,TMap<float> *__return_storage_ptr__)

{
  FSceneViewFamily *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TMap<float> *pTVar5;
  float *pfVar6;
  uint uVar7;
  double dVar8;
  float fVar9;
  
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                       ,0x2a0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TMap<float> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar1 = this->ViewFamily;
  uVar7 = 0;
  if ((pFVar1->Views).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TMap<float> *)(*pcVar3)();
      return pTVar5;
    }
  }
  lVar2 = *(longlong *)(*(longlong *)(pFVar1->Views).AllocatorInstance.Data + 0x10);
  if (lVar2 != 0) {
    uVar7 = *(uint *)(lVar2 + 0x1030) & 7;
  }
  DynamicRenderScaling::TMap<float>::TMap<float>(__return_storage_ptr__);
  if ((this->ViewFamily->EngineShowFlags).ScreenPercentage != 0) {
    if (uVar7 == 0) {
      fVar9 = this->MaxResolutionFraction;
    }
    else {
      fVar9 = this->MinResolutionFraction;
      dVar8 = cos((double)uVar7 * ___real_3fd921fb60000000 + ___real_3fb921fb60000000);
      fVar9 = (float)((dVar8 + __real_3ff0000000000000) * __real_3fe0000000000000 *
                      (double)(this->MaxResolutionFraction - fVar9) + (double)fVar9);
    }
    pfVar6 = DynamicRenderScaling::TMap<float>::operator[]
                       (__return_storage_ptr__,&GDynamicPrimaryResolutionFraction);
    *pfVar6 = fVar9;
  }
  return __return_storage_ptr__;
}

