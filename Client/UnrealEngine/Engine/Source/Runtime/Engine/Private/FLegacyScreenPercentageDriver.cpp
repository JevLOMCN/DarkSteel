// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FLegacyScreenPercentageDriver @ 147e547e0

FLegacyScreenPercentageDriver * __thiscall
FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver
          (FLegacyScreenPercentageDriver *this,FSceneViewFamily *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  FLegacyScreenPercentageDriver *pFVar3;
  
  bVar2 = param_2 != __real_3f800000;
  this->_padding_ = (longlong)&___7FLegacyScreenPercentageDriver__6B_;
  this->ViewFamily = param_1;
  this->GlobalResolutionFraction = param_2;
  this->GlobalResolutionFractionUpperBound = param_2;
  if ((bVar2) && ((param_1->EngineShowFlags).ScreenPercentage == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewFamily.EngineShowFlags.ScreenPercentage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LegacyScreenPercentageDriver.cpp"
                       ,0x81,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLegacyScreenPercentageDriver *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->_padding_ = (longlong)&___7FLegacyScreenPercentageDriver__6B_;
  return this;
}

// FLegacyScreenPercentageDriver @ 147e54860

FLegacyScreenPercentageDriver * __thiscall
FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver
          (FLegacyScreenPercentageDriver *this,FSceneViewFamily *param_1,float param_2,float param_3
          )

{
  code *pcVar1;
  bool bVar2;
  FLegacyScreenPercentageDriver *pFVar3;
  
  bVar2 = param_2 != __real_3f800000;
  this->_padding_ = (longlong)&___7FLegacyScreenPercentageDriver__6B_;
  this->ViewFamily = param_1;
  this->GlobalResolutionFraction = param_2;
  this->GlobalResolutionFractionUpperBound = param_3;
  if ((bVar2) && ((param_1->EngineShowFlags).ScreenPercentage == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ViewFamily.EngineShowFlags.ScreenPercentage",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LegacyScreenPercentageDriver.cpp"
                       ,0x81,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLegacyScreenPercentageDriver *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// Fork_GameThread @ 147e66770

ISceneViewFamilyScreenPercentage * __thiscall
FLegacyScreenPercentageDriver::Fork_GameThread
          (FLegacyScreenPercentageDriver *this,FSceneViewFamily *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  ISceneViewFamilyScreenPercentage *pIVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LegacyScreenPercentageDriver.cpp"
                       ,0xaa,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (ISceneViewFamilyScreenPercentage *)(*pcVar2)();
      return pIVar4;
    }
  }
  pIVar4 = ::operator_new(0x18);
  if (pIVar4 != (ISceneViewFamilyScreenPercentage *)0x0) {
    bVar3 = this->GlobalResolutionFraction != __real_3f800000;
    fVar1 = this->GlobalResolutionFractionUpperBound;
    *(float *)(pIVar4 + 2) = this->GlobalResolutionFraction;
    *(float *)&pIVar4[2].field_0x4 = fVar1;
    *pIVar4 = (ISceneViewFamilyScreenPercentage)&___7FLegacyScreenPercentageDriver__6B_;
    pIVar4[1] = (ISceneViewFamilyScreenPercentage)param_1;
    if ((bVar3) && ((param_1->EngineShowFlags).ScreenPercentage == 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ViewFamily.EngineShowFlags.ScreenPercentage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LegacyScreenPercentageDriver.cpp"
                         ,0x81,L"");
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

// GetCVarResolutionFraction @ 147e67170

float __cdecl FLegacyScreenPercentageDriver::GetCVarResolutionFraction(void)

{
  code *pcVar1;
  bool bVar2;
  IConsoleManager *pIVar3;
  longlong *plVar4;
  TConsoleVariableData<float> *pTVar5;
  float fVar6;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LegacyScreenPercentageDriver.cpp"
                       ,0xb3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar6 = (float)(*pcVar1)();
      return fVar6;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar3 = IConsoleManager::Get();
      plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0xc0))(pIVar3,L"r.ScreenPercentage",1);
      pTVar5 = (TConsoleVariableData<float> *)0x0;
      if (plVar4 != (longlong *)0x0) {
        pTVar5 = (TConsoleVariableData<float> *)(**(code **)(*plVar4 + 0x70))(plVar4);
      }
      ScreenPercentageCVar = pTVar5;
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar5 = CVarScreenPercentage.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar6 = (float)(*pcVar1)();
        return fVar6;
      }
    }
  }
  fVar6 = pTVar5->ShadowedValue[0] * __real_3c23d70a;
  if (fVar6 <= 0.0) {
    return __real_3f800000;
  }
  return fVar6;
}

// GetResolutionFractionsUpperBound @ 147e6a570

TMap<float> * __thiscall
FLegacyScreenPercentageDriver::GetResolutionFractionsUpperBound
          (FLegacyScreenPercentageDriver *this,TMap<float> *__return_storage_ptr__)

{
  float *pfVar1;
  float fVar2;
  float local_res8 [2];
  
  DynamicRenderScaling::TMap<float>::TMap<float>(__return_storage_ptr__);
  local_res8[0] = 1.0;
  DynamicRenderScaling::TMap<float>::SetAll(__return_storage_ptr__,local_res8);
  if ((this->ViewFamily->EngineShowFlags).ScreenPercentage != 0) {
    fVar2 = this->GlobalResolutionFractionUpperBound;
    if (__real_40800000 <= this->GlobalResolutionFractionUpperBound) {
      fVar2 = __real_40800000;
    }
    if (fVar2 <= __real_3c23d70a) {
      fVar2 = __real_3c23d70a;
    }
    pfVar1 = DynamicRenderScaling::TMap<float>::operator[]
                       (__return_storage_ptr__,&GDynamicPrimaryResolutionFraction);
    *pfVar1 = fVar2;
  }
  return __return_storage_ptr__;
}

// GetResolutionFractions_RenderThread @ 147e6a5f0

TMap<float> * __thiscall
FLegacyScreenPercentageDriver::GetResolutionFractions_RenderThread
          (FLegacyScreenPercentageDriver *this,TMap<float> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TMap<float> *pTVar3;
  float *pfVar4;
  float fVar5;
  float local_res8 [2];
  
  bVar2 = IsInParallelRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LegacyScreenPercentageDriver.cpp"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMap<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  DynamicRenderScaling::TMap<float>::TMap<float>(__return_storage_ptr__);
  local_res8[0] = 1.0;
  DynamicRenderScaling::TMap<float>::SetAll(__return_storage_ptr__,local_res8);
  if ((this->ViewFamily->EngineShowFlags).ScreenPercentage != 0) {
    fVar5 = this->GlobalResolutionFraction;
    if (__real_40800000 <= this->GlobalResolutionFraction) {
      fVar5 = __real_40800000;
    }
    if (fVar5 <= __real_3c23d70a) {
      fVar5 = __real_3c23d70a;
    }
    pfVar4 = DynamicRenderScaling::TMap<float>::operator[]
                       (__return_storage_ptr__,&GDynamicPrimaryResolutionFraction);
    *pfVar4 = fVar5;
  }
  return __return_storage_ptr__;
}

