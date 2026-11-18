// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 2

// ~FVisualTreeSnapshot @ 142e14470

void __thiscall FVisualTreeSnapshot::~FVisualTreeSnapshot(FVisualTreeSnapshot *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<TWeakPtr<SWidget_const_,1>,int>
            ((TWeakPtr<SWidget_const_,1> *)(this->WidgetStack).AllocatorInstance.Data,
             (this->WidgetStack).ArrayNum);
  pFVar3 = (this->WidgetStack).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FSlateClippingState,int>
            ((FSlateClippingState *)(this->CachedClippingStates).AllocatorInstance.Data,
             (this->CachedClippingStates).ArrayNum);
  pFVar3 = (this->CachedClippingStates).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FSlateClippingState,int>
            ((FSlateClippingState *)(this->ClippingStates).AllocatorInstance.Data,
             (this->ClippingStates).ArrayNum);
  pFVar3 = (this->ClippingStates).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FVisualEntry,int>
            ((FVisualEntry *)(this->Entries).AllocatorInstance.Data,(this->Entries).ArrayNum);
  pFVar3 = (this->Entries).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142e14506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// Pick @ 142ee4860

TSharedPtr<SWidget_const_,1> * __thiscall
FVisualTreeSnapshot::Pick
          (FVisualTreeSnapshot *this,TSharedPtr<SWidget_const_,1> *__return_storage_ptr__,
          TVector2<float> param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  uint uVar6;
  atomic<int> aVar7;
  TSharedPtr<SWidget_const_,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  TVector2<float>_u_0 local_res8;
  TVector2<float>_u_0 local_res18 [2];
  
  uVar10 = (this->Entries).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar13 = (longlong)(int)uVar10 << 6;
    local_res18[0] = param_1.field0_0x0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->Entries).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TSharedPtr<SWidget_const_,1> *)(*pcVar3)();
        return pTVar8;
      }
      pFVar9 = (this->Entries).AllocatorInstance.Data + lVar13;
      iVar1 = *(int *)(pFVar9 + 0x24);
      if (iVar1 == -1) {
LAB_142ee49ae:
        pFVar12 = pFVar9 + 8;
        bVar5 = IsPointInTriangle((TVector2<float> *)&local_res18[0]._s_0,(TVector2<float> *)pFVar9,
                                  (TVector2<float> *)pFVar12,(TVector2<float> *)(pFVar9 + 0x10));
        if ((bVar5) ||
           (bVar5 = IsPointInTriangle((TVector2<float> *)&local_res18[0]._s_0,
                                      (TVector2<float> *)(pFVar9 + 0x10),(TVector2<float> *)pFVar12,
                                      (TVector2<float> *)(pFVar9 + 0x18)), bVar5)) {
          __return_storage_ptr__->Object = (SWidget *)0x0;
          pTVar2 = *(TReferenceControllerBase<1> **)&pFVar9[0x38].field_0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
          if (pTVar2 == (TReferenceControllerBase<1> *)0x0) goto LAB_142ee4a48;
          aVar4 = pTVar2->SharedReferenceCount;
          goto joined_r0x000142ee4a2a;
        }
      }
      else {
        lVar11 = 0x30;
        if (pFVar9[0x2d] == (FScriptContainerElement)0x0) {
          lVar11 = 0x20;
        }
        if ((iVar1 < 0) || (*(int *)((longlong)&this->_padding_ + lVar11) <= iVar1)) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4767386614496231525>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\VisualTreeCapture.cpp"
                             ,0x65,"LocalClippingState.IsValidIndex(Entry.ClippingIndex)");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TSharedPtr<SWidget_const_,1> *)(*pcVar3)();
            return pTVar8;
          }
          goto LAB_142ee49ae;
        }
        if ((iVar1 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar8 = (TSharedPtr<SWidget_const_,1> *)(*pcVar3)();
          return pTVar8;
        }
        local_res8._s_0 = local_res18[0]._s_0;
        bVar5 = FSlateClippingState::IsPointInside
                          ((FSlateClippingState *)
                           (*(longlong *)((longlong)&this->_padding_ + lVar11) +
                           (longlong)iVar1 * 0x48),(FDeprecateVector2DParameter *)&local_res8._s_0);
        if (bVar5) goto LAB_142ee49ae;
      }
      lVar13 = lVar13 + -0x40;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
  while( true ) {
    LOCK();
    aVar7 = pTVar2->SharedReferenceCount;
    bVar5 = aVar4 == aVar7;
    if (bVar5) {
      pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
      aVar7 = aVar4;
    }
    UNLOCK();
    aVar4 = aVar7;
    if (bVar5) break;
joined_r0x000142ee4a2a:
    if (aVar4 == (atomic<int>)0x0) {
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      break;
    }
  }
LAB_142ee4a48:
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = *(SWidget **)(pFVar9 + 0x30);
  }
  return __return_storage_ptr__;
}

