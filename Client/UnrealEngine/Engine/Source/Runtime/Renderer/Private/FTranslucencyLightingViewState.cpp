// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~FTranslucencyLightingViewState @ 145407cd0

void __thiscall
FTranslucencyLightingViewState::~FTranslucencyLightingViewState
          (FTranslucencyLightingViewState *this)

{
  IPooledRenderTarget *pIVar1;
  longlong lVar2;
  TStaticArray<UE::Math::TVector<double>,2,4294967295> *pTVar3;
  TStaticArray<TRefCountPtr<IPooledRenderTarget>,2,4294967295> *pTVar4;
  longlong lVar5;
  
  lVar2 = 2;
  pTVar3 = &this->HistoryVolumeMin;
  lVar5 = 2;
  do {
    pIVar1 = (&((FTranslucencyLightingViewState *)(pTVar3 + -1))->HistoryAmbient)[2].Elements[1].
             Reference;
    pTVar3 = (TStaticArray<UE::Math::TVector<double>,2,4294967295> *)
             ((&((FTranslucencyLightingViewState *)(pTVar3 + -1))->HistoryAmbient)[2].Elements + 1);
    lVar5 = lVar5 + -1;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0x38))();
    }
  } while (lVar5 != 0);
  pTVar4 = &this->HistoryMark;
  lVar5 = 2;
  do {
    pIVar1 = pTVar4[-1].Elements[1].Reference;
    pTVar4 = (TStaticArray<TRefCountPtr<IPooledRenderTarget>,2,4294967295> *)
             (pTVar4[-1].Elements + 1);
    lVar5 = lVar5 + -1;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0x38))();
    }
  } while (lVar5 != 0);
  pTVar4 = &this->HistoryDirectional;
  do {
    pIVar1 = (((FTranslucencyLightingViewState *)(pTVar4 + -1))->HistoryAmbient).Elements[1].
             Reference;
    pTVar4 = (TStaticArray<TRefCountPtr<IPooledRenderTarget>,2,4294967295> *)
             ((((FTranslucencyLightingViewState *)(pTVar4 + -1))->HistoryAmbient).Elements + 1);
    lVar2 = lVar2 + -1;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0x38))();
    }
  } while (lVar2 != 0);
  return;
}

// GetGPUSizeBytes @ 1454f6a30

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FTranslucencyLightingViewState::GetGPUSizeBytes(FTranslucencyLightingViewState *this,bool param_1)

{
  IPooledRenderTarget *pIVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  TStaticArray<TRefCountPtr<IPooledRenderTarget>,2,4294967295> *pTVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  pTVar5 = &this->HistoryMark;
  uVar6 = 0;
  lVar8 = 2;
  do {
    pIVar1 = (((FTranslucencyLightingViewState *)(pTVar5 + -2))->HistoryAmbient).Elements[0].
             Reference;
    if (pIVar1 == (IPooledRenderTarget *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(pIVar1->_padding_ + 0x18))();
    }
    if (((param_1) && (uVar2 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      (**(code **)(((((FTranslucencyLightingViewState *)(pTVar5 + -2))->HistoryAmbient).Elements[0].
                   Reference)->_padding_ + 0x10))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    pIVar1 = pTVar5[-1].Elements[0].Reference;
    if (pIVar1 == (IPooledRenderTarget *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(pIVar1->_padding_ + 0x18))();
    }
    if (((param_1) && (uVar3 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      (**(code **)((pTVar5[-1].Elements[0].Reference)->_padding_ + 0x10))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    pIVar1 = pTVar5->Elements[0].Reference;
    if (pIVar1 == (IPooledRenderTarget *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar4 = (**(code **)(pIVar1->_padding_ + 0x18))();
      uVar7 = (ulonglong)uVar4;
    }
    if (((param_1) && ((int)uVar7 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      (**(code **)((pTVar5->Elements[0].Reference)->_padding_ + 0x10))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    pTVar5 = (TStaticArray<TRefCountPtr<IPooledRenderTarget>,2,4294967295> *)(pTVar5->Elements + 1);
    uVar6 = uVar6 + uVar2 + (ulonglong)uVar3 + uVar7;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return uVar6;
}

