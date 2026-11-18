// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// TSharedRef<FNiagaraDataChannelGameData,1> @ 1490b0920

TSharedRef<FNiagaraDataChannelGameData,1> * __thiscall
TSharedRef<FNiagaraDataChannelGameData,1>::TSharedRef<FNiagaraDataChannelGameData,1>
          (TSharedRef<FNiagaraDataChannelGameData,1> *this,FNiagaraDataChannelGameData *param_1,
          TReferenceControllerBase<1> *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TSharedRef<FNiagaraDataChannelGameData,1> *pTVar8;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FNiagaraDataChannelGameData *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TSharedRef<FNiagaraDataChannelGameData,1> *)(*pcVar6)();
      return pTVar8;
    }
  }
  else {
    plVar1 = &param_1->_padding_;
    if (((param_1->_padding_ == 0) || (*plVar1 == 0)) || (*(int *)(*plVar1 + 8) < 1)) {
      pTVar4 = (this->SharedReferenceCount).ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_1->_padding_ = (longlong)param_1;
      if (pTVar4 != (TReferenceControllerBase<1> *)*plVar1) {
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)*plVar1;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        *plVar1 = (longlong)pTVar4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  return this;
}

// TSharedRef<FNiagaraDebugHUDStatsListener,1> @ 1492740e0

TSharedRef<FNiagaraDebugHUDStatsListener,1> * __thiscall
TSharedRef<FNiagaraDebugHUDStatsListener,1>::TSharedRef<FNiagaraDebugHUDStatsListener,1>
          (TSharedRef<FNiagaraDebugHUDStatsListener,1> *this,FNiagaraDebugHUDStatsListener *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<FNiagaraDebugHUDStatsListener,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FNiagaraDebugHUDStatsListener *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<FNiagaraDebugHUDStatsListener,1> *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSharedRef<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1> @ 149331ee0

TSharedRef<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1> * __thiscall
TSharedRef<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1>::
TSharedRef<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1>
          (TSharedRef<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1> *this,
          FParticlePerfStatsListener_NiagaraBaselineComparisonRender *param_1,
          TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1> *pTVar7;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FParticlePerfStatsListener_NiagaraBaselineComparisonRender *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<FParticlePerfStatsListener_NiagaraBaselineComparisonRender,1> *)
               (*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

