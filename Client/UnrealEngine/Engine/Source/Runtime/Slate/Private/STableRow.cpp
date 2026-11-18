// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 81

// ~STableRow<TSharedPtr<SWidget,1>_> @ 1427b6c40

void __thiscall
STableRow<TSharedPtr<SWidget,1>_>::~STableRow<TSharedPtr<SWidget,1>_>
          (STableRow<TSharedPtr<SWidget,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  pTVar3 = (this->Content).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrop_Handler);
  pvVar4 = *(void **)&(this->OnDrop_Handler).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDrop_Handler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDragLeave_Handler);
  pvVar4 = *(void **)&(this->OnDragLeave_Handler).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragLeave_Handler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDragEnter_Handler);
  pvVar4 = *(void **)&(this->OnDragEnter_Handler).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragEnter_Handler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDragDetected_Handler);
  pvVar4 = *(void **)&(this->OnDragDetected_Handler).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragDetected_Handler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PaintDropIndicatorEvent);
  pvVar4 = *(void **)&(this->PaintDropIndicatorEvent).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PaintDropIndicatorEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAcceptDrop);
  pvVar4 = *(void **)&(this->OnAcceptDrop).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCanAcceptDrop);
  pvVar4 = *(void **)&(this->OnCanAcceptDrop).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCanAcceptDrop);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ExpanderArrowWidget).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SBorder::~SBorder((SBorder *)&this->_padding_);
  return;
}

// operator() @ 1427bc700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`STableRow<TSharedPtr<SWidget,1>_>::OnDrop'::__l2::<lambda_1>::operator()
          (void *this,FReply *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  int iVar8;
  FReply *pFVar9;
  longlong *plVar10;
  TTransform2<float> *pTVar11;
  TOptional<EItemDropZone> TVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc;
  FReply *local_1b8;
  undefined1 local_1b0 [88];
  FReadAccessScope local_158;
  FReply local_138;
  TTransform2<float> local_78;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar1 = *(longlong *)this;
  local_1b8 = __return_storage_ptr__;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x340),
             (FReadAccessScope *)(local_1b0 + 0x40));
  if (((*(int *)(lVar1 + 0x350) == 0) || (*(longlong **)(lVar1 + 0x348) == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(**(longlong **)(lVar1 + 0x348) + 0x38))(), cVar6 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_1b0 + 0x40));
    goto LAB_1427bcaec;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_1b0 + 0x40));
  lVar1 = *(longlong *)this;
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  pTVar14 = *(TReferenceControllerBase<1> **)(lVar1 + 0x2f0);
  pTVar13 = pTVar14;
  pTVar15 = pTVar16;
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
LAB_1427bc7b5:
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar4)();
      return pFVar9;
    }
    pTVar14 = pTVar13;
    if ((pTVar15 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar17)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar4)();
      return pFVar9;
    }
  }
  else {
    aVar5 = pTVar14->SharedReferenceCount;
    do {
      pTVar13 = pTVar16;
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1427bc7b5;
      LOCK();
      aVar7 = pTVar14->SharedReferenceCount;
      bVar17 = aVar5 == aVar7;
      if (bVar17) {
        pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar17);
    pTVar15 = *(TReferenceControllerBase<1> **)(lVar1 + 0x2e8);
    pTVar13 = pTVar14;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) goto LAB_1427bc7b5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lVar1 = *(longlong *)this;
  if ((local_1b0 + 0x38 != (undefined1 *)(lVar1 + 0x370)) && (*(char *)(lVar1 + 0x374) != '\0')) {
    *(undefined1 *)(lVar1 + 0x374) = 0;
  }
  plVar10 = (longlong *)(**(code **)(pTVar15->_padding_ + 0x48))(pTVar15);
  if (plVar10 == (longlong *)0x0) {
    cVar6 = (**(code **)(pTVar15->_padding_ + 200))(pTVar15);
    if ((cVar6 == '\0') &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar17)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar4)();
      return pFVar9;
    }
  }
  else {
    pTVar11 = Inverse<TTransform2<float>_>
                        (&local_78,(TTransform2<float> *)(*(longlong *)((longlong)this + 8) + 0x1c))
    ;
    uVar2 = *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x28);
    local_1c8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    local_1c8._0_4_ = (float)uVar2;
    fVar20 = local_1c8._4_4_ * (pTVar11->M).M[1][0];
    fVar18 = (float)local_1c8 * (pTVar11->M).M[0][0];
    fVar19 = (pTVar11->Trans).field0_0x0._s_0.X;
    fVar21 = (float)local_1c8 * (pTVar11->M).M[0][1] + local_1c8._4_4_ * (pTVar11->M).M[1][1] +
             (pTVar11->Trans).field0_0x0._s_0.Y;
    local_1c8 = uVar2;
    iVar8 = (**(code **)(pTVar15->_padding_ + 0xc0))(pTVar15);
    uVar2 = **(undefined8 **)((longlong)this + 8);
    if (iVar8 == 0) {
      local_1c8._0_4_ = (float)uVar2;
      fVar21 = fVar20 + fVar18 + fVar19;
    }
    else {
      local_1c8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      local_1c8._0_4_ = local_1c8._4_4_;
    }
    fVar19 = (float)local_1c8 * __real_3e800000;
    if (__real_41200000 <= (float)local_1c8 * __real_3e800000) {
      fVar19 = __real_41200000;
    }
    if (fVar19 <= __real_40400000) {
      fVar19 = __real_40400000;
    }
    pTVar13 = pTVar16;
    if (fVar19 <= fVar21) {
      pTVar13 = (TReferenceControllerBase<1> *)(ulonglong)(((float)local_1c8 - fVar19 < fVar21) + 1)
      ;
    }
    local_1c8 = uVar2;
    bVar17 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                       ((TDelegateBase<FNotThreadSafeDelegateMode> *)(*(longlong *)this + 0x328));
    if (bVar17) {
      local_1b0._8_8_ = *plVar10;
      lVar1 = *(longlong *)this;
      local_1b0._16_8_ = plVar10[1];
      if (local_1b0._16_8_ != 0) {
        LOCK();
        *(int *)(local_1b0._16_8_ + 8) = *(int *)(local_1b0._16_8_ + 8) + 1;
        UNLOCK();
      }
      local_1d8 = local_1b0 + 8;
      TVar12 = TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
               ::Execute((void *)(lVar1 + 0x328),(FDragDropEvent *)local_1b0,
                         (EItemDropZone)*(undefined8 *)((longlong)this + 0x10),
                         (TSharedPtr<SWidget,1> *)pTVar13);
    }
    else {
      local_1c0 = (int)pTVar13;
      TVar12 = (TOptional<EItemDropZone>)&local_1c0;
      local_1bc = 1;
    }
    __return_storage_ptr__ = local_1b8;
    if (*(char *)((longlong)TVar12 + 4) != '\0') {
      lVar1 = *(longlong *)this;
      lVar3 = plVar10[1];
      local_1c8 = CONCAT44(local_1c8._4_4_,*(undefined4 *)TVar12);
      local_1b0._8_8_ = *plVar10;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      local_1b0._0_8_ = *(longlong *)((longlong)this + 0x10);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x340),
                 &local_158);
      if (*(int *)(lVar1 + 0x350) != 0) {
        pTVar16 = *(TReferenceControllerBase<1> **)(lVar1 + 0x348);
      }
      local_1d8 = local_1b0 + 0x18;
      iVar8 = (int)(float)local_1c8;
      local_1b0._24_8_ = local_1b0._8_8_;
      local_1b0._32_8_ = lVar3;
      (**(code **)(pTVar16->_padding_ + 0x60))
                (pTVar16,&local_138,local_1b0._0_8_,local_1c8 & 0xffffffff);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_158);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (((char)local_138._padding_ != '\0') && (iVar8 == 1)) {
        pcVar4 = *(code **)(pTVar15->_padding_ + 0x50);
        local_1b0._40_8_ = *plVar10;
        local_1b0._48_8_ = plVar10[1];
        if (local_1b0._48_8_ != 0) {
          LOCK();
          *(int *)(local_1b0._48_8_ + 8) = *(int *)(local_1b0._48_8_ + 8) + 1;
          UNLOCK();
        }
        (*pcVar4)(pTVar15,local_1b0 + 0x28,1);
      }
      FReply::FReply(local_1b8,&local_138);
      FReply::~FReply(&local_138);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      return local_1b8;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
LAB_1427bcaec:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// operator() @ 1427bcb20

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
`STableRow<TSharedPtr<SWidget,1>_>::OnDragOver'::__l5::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  char cVar5;
  atomic<int> aVar6;
  TOptional<EItemDropZone> TVar7;
  longlong lVar8;
  TOptional<EItemDropZone> in_RDX;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  lVar8 = *(longlong *)((longlong)this + 0x98);
  pTVar11 = *(TReferenceControllerBase<1> **)(lVar8 + 0x2f0);
  pTVar10 = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar11->SharedReferenceCount;
    do {
      pTVar10 = pTVar9;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1427bcb75;
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar12 = aVar4 == aVar6;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar12);
    pTVar9 = *(TReferenceControllerBase<1> **)(lVar8 + 0x2e8);
    pTVar10 = pTVar11;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) goto LAB_1427bcbc6;
  }
LAB_1427bcb75:
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar12) {
    pcVar3 = (code *)swi(3);
    TVar7 = (TOptional<EItemDropZone>)(*pcVar3)();
    return TVar7;
  }
  pTVar11 = pTVar10;
  if ((pTVar9 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    TVar7 = (TOptional<EItemDropZone>)(*pcVar3)();
    return TVar7;
  }
LAB_1427bcbc6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lVar8 = (**(code **)(pTVar9->_padding_ + 0x48))(pTVar9,*(undefined8 *)((longlong)this + 0x98));
  if (lVar8 == 0) {
    cVar5 = (**(code **)(pTVar9->_padding_ + 200))(pTVar9);
    if ((cVar5 == '\0') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar12)) {
      pcVar3 = (code *)swi(3);
      TVar7 = (TOptional<EItemDropZone>)(*pcVar3)();
      return TVar7;
    }
    *(undefined1 *)((longlong)in_RDX + 4) = 0;
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x98);
    if (*(longlong *)(lVar8 + 8) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(lVar8 + 8) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>
    ::Execute((void *)(lVar2 + 0x328),(FDragDropEvent *)in_RDX,(int)this + 8,
              (TSharedPtr<SWidget,1> *)(ulonglong)*(uint *)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return in_RDX;
}

// AsWidget @ 1427d36c0

TSharedRef<SWidget,1> * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::AsWidget
          (STableRow<TSharedPtr<SWidget,1>_> *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<SWidget,1> *pTVar2;
  atomic<int> *paVar3;
  SWidget *pSVar4;
  SWidget *pSVar5;
  TSharedRef<SWidget,1> local_18;
  
  pTVar2 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  pSVar5 = (SWidget *)0x0;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  pSVar4 = (SWidget *)&pTVar2->Object[-1].StatID;
  if (pTVar2->Object == (SWidget *)0x0) {
    pSVar4 = pSVar5;
  }
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar3 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar3 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pSVar4 != (SWidget *)0x0) {
    pSVar5 = (SWidget *)&pSVar4->_padding_;
  }
  __return_storage_ptr__->Object = pSVar5;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// ConstructChildren @ 1427f0460

/* WARNING: Type propagation algorithm not settling */

void __thiscall
STableRow<TSharedPtr<SWidget,1>_>::ConstructChildren
          (STableRow<TSharedPtr<SWidget,1>_> *this,Type param_1,TAttribute<FMargin> *param_2,
          TSharedRef<SWidget,1> *param_3)

{
  atomic<int> *paVar1;
  longlong *this_00;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSlotBase *pFVar5;
  FMemScope FVar6;
  TReferenceControllerBase<1> *pTVar7;
  FArguments *pFVar8;
  FSlot *pFVar9;
  FSizeParam *pFVar10;
  FArguments *pFVar11;
  TSharedRef<SWidget,1> *pTVar12;
  TSharedRef<SExpanderArrow,1> *pTVar13;
  FSlot *pFVar14;
  FSlotArguments *pFVar15;
  FSlotArguments *pFVar16;
  TSharedRef<SHorizontalBox,1> *pTVar17;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *this_01;
  FSlot *local_res8;
  T0RequiredArgs local_res10 [8];
  FName local_res20;
  FDestructionSentinel local_7a8;
  undefined1 local_790;
  undefined1 local_78f;
  undefined1 local_788 [8];
  ForAnyElementType FStack_780;
  ulonglong local_778;
  undefined1 local_770 [24];
  undefined1 local_758 [8];
  ForAnyElementType FStack_750;
  int local_748;
  SExpanderArrow *local_740;
  FSharedReferencer<1> local_738;
  bool local_730;
  TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1> local_728;
  T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_&&> local_718;
  TAttribute<float> local_710;
  TSharedRef<SHorizontalBox,1> local_6f0;
  TSharedRef<SExpanderArrow,1> local_6e0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_6d0;
  undefined1 local_6b8 [16];
  undefined1 local_6a8 [32];
  undefined1 local_688 [24];
  undefined8 *local_670;
  SExpanderArrow *local_668;
  FSharedReferencer<1> local_660 [4];
  undefined1 local_640 [24];
  undefined4 local_628;
  undefined1 local_624;
  undefined4 local_620;
  undefined1 local_61c;
  FSlotArgumentsMixin local_618;
  undefined8 *local_588 [2];
  TReferenceControllerBase<1> *local_578;
  undefined1 local_558 [40];
  FSlotArgumentsMixin local_530;
  undefined1 local_4a0 [520];
  undefined1 local_298 [32];
  undefined1 local_278 [32];
  undefined1 local_258 [24];
  FArguments local_240;
  
  (this->Content).Object = param_3->Object;
  pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->Content).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->Content).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->Content).WeakReferenceCount.ReferenceController = pTVar3;
  }
  pFVar14 = (FSlot *)0x0;
  this->InnerContentSlot = (FSlotBase *)0x0;
  if (param_1 < Tree) {
    local_770._0_4_ = (param_2->Value).Left;
    local_770._4_4_ = (param_2->Value).Top;
    local_770._8_4_ = (param_2->Value).Right;
    local_770._12_4_ = (param_2->Value).Bottom;
    local_770[0x10] = param_2->bIsSet;
    local_748 = 0;
    local_758 = (undefined1  [8])0x0;
    FStack_750.Data = (FScriptContainerElement *)0x0;
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_758,
               &param_2->Getter);
    this_01 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                        ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                          *)&this->_padding_,(TAttribute<FMargin> *)local_770);
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               this_01,param_3);
    this->InnerContentSlot = (FSlotBase *)&this->_padding_;
  }
  else {
    pFVar8 = SHorizontalBox::FArguments::FArguments(&local_240);
    pFVar9 = ::operator_new(0x58);
    local_res8 = pFVar14;
    if (pFVar9 != (FSlot *)0x0) {
      *(undefined8 *)pFVar9 = 0;
      *(undefined8 *)&pFVar9->field_0x8 = 0;
      *(undefined8 *)&pFVar9->field_0x10 = 0;
      *(undefined8 *)&pFVar9->field_0x18 = 0;
      *(undefined8 *)&pFVar9->field_0x20 = 0;
      *(undefined8 *)&pFVar9->field_0x28 = 0;
      *(undefined8 *)&pFVar9->field_0x30 = 0;
      *(undefined8 *)&pFVar9->field_0x38 = 0;
      *(undefined8 *)&pFVar9->field_0x40 = 0;
      *(undefined8 *)&pFVar9->field_0x48 = 0;
      *(undefined8 *)&pFVar9->field_0x50 = 0;
      local_res8 = SHorizontalBox::FSlot::FSlot(pFVar9);
    }
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)&local_670,(FSlot *)&local_res8);
    pFVar10 = (FSizeParam *)FAuto::FAuto((FAuto *)local_6b8);
    TOptional<FSizeParam>::operator=(&local_618._SizeParam,pFVar10);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_688);
    if ((void *)local_688._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_688._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_688);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6a8);
    if ((void *)local_6a8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_6a8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_6a8);
    local_628 = 3;
    local_624 = 1;
    local_620 = 0;
    local_61c = 1;
    pFVar11 = SExpanderArrow::FArguments::FArguments((FArguments *)local_4a0);
    pFVar11->_StyleSet = this->ExpanderStyleSet;
    local_790 = this->bShowWires;
    local_78f = 1;
    local_778 = 0;
    local_788 = (undefined1  [8])0x0;
    FStack_780.Data = (FScriptContainerElement *)0x0;
    (pFVar11->_ShouldDrawWires).Value = (bool)local_790;
    (pFVar11->_ShouldDrawWires).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_ShouldDrawWires).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_788);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_788,
               (FWriteAccessScope *)&local_740);
    if (((int)local_778 != 0) && (FStack_780.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_780.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_780,0,0,0x10);
      local_778 = local_778 & 0xffffffff00000000;
    }
    if (local_730 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_738.ReferenceController,
                 (FDestructionSentinel *)&local_740);
    }
    if (FStack_780.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_780.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_788);
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)&local_7a8);
    if (pTVar12->Object == (SWidget *)0x0) {
      local_728.Object = (STableRow<TSharedPtr<SWidget,1>_> *)0x0;
    }
    else {
      local_728.Object = (STableRow<TSharedPtr<SWidget,1>_> *)&pTVar12->Object[-1].StatID;
    }
    local_728.SharedReferenceCount.ReferenceController =
         (pTVar12->SharedReferenceCount).ReferenceController;
    if (local_728.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_728.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_728.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_7a8.Accessor);
    local_718.Arg0 = &local_728;
    FLLMScope::FLLMScope
              ((FLLMScope *)&local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,
               true);
    local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_7a8,&local_res20,true);
    TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_&&>_>
    ::
    TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_&&>_>
              ((TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_&&>_>
                *)&local_740,"SExpanderArrow",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
               ,0xd2,&local_718);
    FMemScope::~FMemScope((FMemScope *)&local_7a8);
    FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
    if (local_738.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_738.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_738.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->ExpanderArrowWidget).SharedReferenceCount.ReferenceController;
    (this->ExpanderArrowWidget).Object = local_740;
    (this->ExpanderArrowWidget).SharedReferenceCount.ReferenceController =
         local_738.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar13 = TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_&&>_>
              ::operator<<=((TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<SWidget,1>_>,1>_&&>_>
                             *)&local_740,&local_6e0,pFVar11);
    pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
    local_668 = pTVar13->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_7a8._0_8_ = (FMemScope)0x0;
    local_7a8.Accessor = (FMRSWRecursiveAccessDetector *)pTVar3;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (local_660,(FSharedReferencer<1> *)&local_7a8.Accessor);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_7a8.Accessor);
    local_res20 = (FName)SHorizontalBox::FArguments::operator+(pFVar8,(FSlotArguments *)&local_670);
    pFVar9 = ::operator_new(0x58);
    if (pFVar9 != (FSlot *)0x0) {
      *(undefined8 *)pFVar9 = 0;
      *(undefined8 *)&pFVar9->field_0x8 = 0;
      *(undefined8 *)&pFVar9->field_0x10 = 0;
      *(undefined8 *)&pFVar9->field_0x18 = 0;
      *(undefined8 *)&pFVar9->field_0x20 = 0;
      *(undefined8 *)&pFVar9->field_0x28 = 0;
      *(undefined8 *)&pFVar9->field_0x30 = 0;
      *(undefined8 *)&pFVar9->field_0x38 = 0;
      *(undefined8 *)&pFVar9->field_0x40 = 0;
      *(undefined8 *)&pFVar9->field_0x48 = 0;
      *(undefined8 *)&pFVar9->field_0x50 = 0;
      pFVar14 = SHorizontalBox::FSlot::FSlot(pFVar9);
    }
    local_res8 = pFVar14;
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)local_588,(FSlot *)&local_res8);
    local_710.Value = 1.0;
    local_710.Getter._16_8_ = 0;
    local_710.bIsSet = true;
    local_710.Getter._0_8_ = 0;
    local_710.Getter._8_8_ = 0;
    pFVar15 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                        ((FSlotArguments *)local_588,&local_710);
    local_770._0_4_ = (param_2->Value).Left;
    local_770._4_4_ = (param_2->Value).Top;
    local_770._8_4_ = (param_2->Value).Right;
    local_770._12_4_ = (param_2->Value).Bottom;
    local_770[0x10] = param_2->bIsSet;
    pFVar5 = *(FSlotBase **)pFVar15;
    local_748 = 0;
    local_758 = (undefined1  [8])0x0;
    FStack_750.Data = (FScriptContainerElement *)0x0;
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_758,
               &param_2->Getter);
    *(undefined8 *)&pFVar15->field_0x18 = local_770._0_8_;
    *(undefined8 *)&pFVar15->field_0x20 = local_770._8_8_;
    pFVar15->field_0x28 = local_770[0x10];
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar15->field_0x30,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_758);
    pFVar16 = (FSlotArguments *)0x0;
    if (&pFVar15->field_0x18 != (undefined1 *)0x0) {
      pFVar16 = pFVar15;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_758,
               (FWriteAccessScope *)&local_7a8);
    if ((local_748 != 0) && (FStack_750.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_750.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_750,0,0,0x10);
      local_748 = 0;
    }
    if (local_7a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7a8.Accessor,&local_7a8);
    }
    if (FStack_750.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_750.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_758);
    pFVar16 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar16,param_3);
    pFVar8 = SHorizontalBox::FArguments::operator+((FArguments *)local_res20,pFVar16);
    FLLMScope::FLLMScope
              ((FLLMScope *)&local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,
               true);
    local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_7a8,&local_res20,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_6d0,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
               ,0xcb,local_res10);
    FMemScope::~FMemScope((FMemScope *)&local_7a8);
    FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
    pTVar17 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_6d0,&local_6f0,pFVar8);
    this_00 = &this->_padding_;
    pTVar4 = (pTVar17->SharedReferenceCount).ReferenceController;
    FVar6 = (FMemScope)pTVar17->Object;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    }
    else {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)pTVar4;
    local_7a8._0_8_ = FVar6;
    local_7a8.Accessor = (FMRSWRecursiveAccessDetector *)pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6f0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6d0._Widget.SharedReferenceCount.ReferenceController);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_530);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_558);
    if ((void *)local_558._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_558._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_558);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_578);
    if (local_588[0] != (undefined8 *)0x0) {
      (**(code **)*local_588[0])(local_588[0],1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6e0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_738.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_728.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_258);
    if ((void *)local_258._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_258._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_258);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_278);
    if ((void *)local_278._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_278._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_278);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_298);
    if ((void *)local_298._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_298._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_298);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_4a0);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_618);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_640);
    if ((void *)local_640._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_640._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_640);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_660[0].ReferenceController);
    if (local_670 != (undefined8 *)0x0) {
      (**(code **)*local_670)(local_670,1);
    }
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_240._Slots.AllocatorInstance.Data,local_240._Slots.ArrayNum);
    if ((FSlotArguments *)local_240._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_240._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_240);
    this->InnerContentSlot = pFVar5;
  }
  return;
}

// ConstructInternal @ 1427f1300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
STableRow<TSharedPtr<SWidget,1>_>::ConstructInternal
          (STableRow<TSharedPtr<SWidget,1>_> *this,FArguments *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  STableViewBase *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  TSharedRef<SWidget_const_,1> *pTVar11;
  ulong64 uVar12;
  ITypedTableView<TSharedPtr<SWidget,1>_> *pIVar13;
  ITypedTableView<TSharedPtr<SWidget,1>_> *pIVar14;
  TReferenceControllerBase<1> *pTVar15;
  undefined1 local_1e8 [8];
  ForAnyElementType FStack_1e0;
  int local_1d8;
  undefined1 local_1d0 [8];
  ForAnyElementType local_1c8;
  int local_1c0;
  undefined1 local_1b8 [8];
  ForAnyElementType local_1b0;
  int local_1a8;
  FLinearColor_u_0 local_1a0;
  undefined1 local_190;
  undefined1 local_18c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_188;
  FDelegateAllocation FStack_180;
  TSharedRef<SWidget_const_,1> local_170;
  undefined1 local_160 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  FDelegateAllocation FStack_148;
  FDestructionSentinel local_138;
  FDestructionSentinel local_120;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  FDestructionSentinel local_d8;
  FDelegateAllocation *local_c0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  TSharedRef<SWidget_const_,1> local_98;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  pIVar14 = (ITypedTableView<TSharedPtr<SWidget,1>_> *)0x0;
  this->bProcessingSelectionTouch = false;
  if ((param_1->_Style == (FTableRowStyle *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InArgs._Style",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                         ,0x483,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->Style = param_1->_Style;
  if ((param_1->_ExpanderStyleSet == (ISlateStyle *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InArgs._ExpanderStyleSet",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                         ,0x486,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->ExpanderStyleSet = param_1->_ExpanderStyleSet;
  local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_148.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_160._0_8_ = (FSlateBrush *)0x0;
  local_160[8] = true;
  FStack_148.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_d8);
  local_c0 = &FStack_148;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,&FStack_148);
  pIVar13 = pIVar14;
  pTVar15 = (TReferenceControllerBase<1> *)param_2;
  if (puVar10 != (undefined8 *)0x0) {
    local_1e8 = (undefined1  [8])_vcall__152__flat______;
    FStack_1e0.Data =
         (FScriptContainerElement *)
         ((ulonglong)local_170.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_98);
    pTVar15 = (pTVar11->SharedReferenceCount).ReferenceController;
    pIVar13 = (ITypedTableView<TSharedPtr<SWidget,1>_> *)&pTVar11->Object[-1].StatID;
    if (pTVar11->Object == (SWidget *)0x0) {
      pIVar13 = pIVar14;
    }
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar12;
    *puVar10 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_VSWidget___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = pIVar13;
    puVar10[4] = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(undefined1 (*) [8])(puVar10 + 5) = local_1e8;
    puVar10[6] = FStack_1e0.Data;
    pIVar13 = (ITypedTableView<TSharedPtr<SWidget,1>_> *)0x7;
  }
  if (((ulonglong)pIVar13 & 4) != 0) {
    pIVar13 = (ITypedTableView<TSharedPtr<SWidget,1>_> *)(ulonglong)((uint)pIVar13 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (((ulonglong)pIVar13 & 2) != 0) {
    pIVar13 = (ITypedTableView<TSharedPtr<SWidget,1>_> *)(ulonglong)((uint)pIVar13 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (((ulonglong)pIVar13 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  bVar8 = false;
  bVar7 = false;
  bVar9 = false;
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  SBorder::SetBorderImage((SBorder *)&this->_padding_,(TAttribute<FSlateBrush_const_*> *)local_160);
  local_1a0._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_1a0._8_8_ = _UNK_15090c6d8;
  local_190 = 0;
  local_18c = 1;
  local_188.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_180.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_188,(FWriteAccessScope *)&local_b8);
  local_a0 = &FStack_180;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,&FStack_180);
  pTVar15 = (TReferenceControllerBase<1> *)param_2;
  if (puVar10 != (undefined8 *)0x0) {
    local_1e8 = (undefined1  [8])GetForegroundBasedOnSelection;
    FStack_1e0.Data =
         (FScriptContainerElement *)
         ((ulonglong)local_170.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_170);
    pTVar15 = (pTVar11->SharedReferenceCount).ReferenceController;
    pIVar13 = (ITypedTableView<TSharedPtr<SWidget,1>_> *)&pTVar11->Object[-1].StatID;
    if (pTVar11->Object == (SWidget *)0x0) {
      pIVar13 = pIVar14;
    }
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar7 = true;
    bVar9 = true;
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar12;
    *puVar10 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_VSWidget___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = pIVar13;
    puVar10[4] = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(undefined1 (*) [8])(puVar10 + 5) = local_1e8;
    puVar10[6] = FStack_1e0.Data;
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_170.SharedReferenceCount.ReferenceController._4_4_,
                        local_170.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)&this->_padding_,
           (TAttribute<FSlateColor> *)&local_1a0._s_0,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_188,(FWriteAccessScope *)&local_138);
  if ((FStack_180.DelegateSize != 0) &&
     (FStack_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_180.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_180,0,0,0x10);
    FStack_180.DelegateSize = 0;
  }
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  if (FStack_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_180.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_188.AccessDetector);
  if (&param_1->_OnCanAcceptDrop != &this->OnCanAcceptDrop) {
    local_1e8 = (undefined1  [8])0x0;
    FStack_1e0.Data = (FScriptContainerElement *)0x0;
    local_1d8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnCanAcceptDrop,
               &local_88);
    if ((*(int *)&(param_1->_OnCanAcceptDrop).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnCanAcceptDrop).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_1e8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCanAcceptDrop,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e8,
               (FWriteAccessScope *)&local_120);
    if ((local_1d8 != 0) && (FStack_1e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1e0,0,0,0x10);
      local_1d8 = 0;
    }
    if (local_120.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
    }
    if (FStack_1e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1e0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1e8);
  }
  if (&param_1->_OnAcceptDrop != &this->OnAcceptDrop) {
    local_1d0 = (undefined1  [8])0x0;
    local_1c8.Data = (FScriptContainerElement *)0x0;
    local_1c0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnAcceptDrop,
               &local_70);
    if ((*(int *)&(param_1->_OnAcceptDrop).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnAcceptDrop).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_1d0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAcceptDrop,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1d0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d0,
               (FWriteAccessScope *)&local_108);
    if ((local_1c0 != 0) && (local_1c8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1c8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1c8,0,0,0x10);
      local_1c0 = 0;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    if (local_1c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1d0);
  }
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnDragDetected_Handler,&param_1->_OnDragDetected);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDragEnter_Handler,&param_1->_OnDragEnter);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDragLeave_Handler,&param_1->_OnDragLeave);
  if (&param_1->_OnDrop != &this->OnDrop_Handler) {
    local_1b8 = (undefined1  [8])0x0;
    local_1b0.Data = (FScriptContainerElement *)0x0;
    local_1a8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnDrop,&local_58
              );
    if ((*(int *)&(param_1->_OnDrop).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnDrop).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_1b8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrop_Handler,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_f0);
    if ((local_1a8 != 0) && (local_1b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1b0,0,0,0x10);
      local_1a8 = 0;
    }
    if (local_f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
    }
    if (local_1b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1b8);
  }
  pSVar4 = param_2->Object;
  pTVar15 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 != (STableViewBase *)0x0) {
    pIVar14 = (ITypedTableView<TSharedPtr<SWidget,1>_> *)&pSVar4->field_0x588;
  }
  (this->OwnerTablePtr).Object = pIVar14;
  if (pTVar15 != (this->OwnerTablePtr).WeakReferenceCount.ReferenceController) {
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (this->OwnerTablePtr).WeakReferenceCount.ReferenceController = pTVar15;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  this->bShowSelection = param_1->_ShowSelection;
  this->SignalSelectionMode = param_1->_SignalSelectionMode;
  this->bShowWires = param_1->_ShowWires;
  this->bAllowPreselectedItemActivation = param_1->_bAllowPreselectedItemActivation;
  return;
}

// CreateAccessibleWidget @ 1427f4bf0

/* WARNING: Type propagation algorithm not settling */

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::CreateAccessibleWidget
          (STableRow<TSharedPtr<SWidget,1>_> *this,
          TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  SWidget *this_00;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar6;
  SWidget *pSVar7;
  SWidget *pSVar8;
  TRawPtrProxy<FSlateAccessibleWidget> TVar9;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_38;
  TSharedRef<SWidget,1> local_28;
  
  pSVar7 = (SWidget *)0x0;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0x70);
  pSVar8 = pSVar7;
  TVar9.Object = local_res10.Object;
  if (this_00 != (SWidget *)0x0) {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
    TVar9.Object = (FSlateAccessibleWidget *)(pTVar5->SharedReferenceCount).ReferenceController;
    pSVar8 = (SWidget *)&pTVar5->Object[-1].StatID;
    if (pTVar5->Object == (SWidget *)0x0) {
      pSVar8 = pSVar7;
    }
    if (TVar9.Object != (FSlateAccessibleWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&(TVar9.Object)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TVar9.Object)->_padding_ + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (pSVar8 != (SWidget *)0x0) {
      pSVar7 = (SWidget *)&pSVar8->_padding_;
    }
    local_38.Object = pSVar7;
    local_38.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar9.Object;
    if (TVar9.Object == (FSlateAccessibleWidget *)0x0) {
      FSlateAccessibleWidget::FSlateAccessibleWidget
                ((FSlateAccessibleWidget *)this_00,&local_38,ListItem);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleTableRow::_vftable__for__FSlateAccessibleWidget__;
      (this_00->PersistentState).InitialClipState.TypedValue.ScissorRect.TypedValue.TopRight.
      field0_0x0 = (TVector2<float>_u_0)
                   &FSlateAccessibleTableRow::_vftable__for__IAccessibleTableRow__;
    }
    else {
      LOCK();
      ((atomic<int> *)&(TVar9.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar9.Object)->_padding_)[1] + 1);
      UNLOCK();
      LOCK();
      ((atomic<int> *)&(TVar9.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar9.Object)->_padding_)[1] + 1);
      UNLOCK();
      FSlateAccessibleWidget::FSlateAccessibleWidget
                ((FSlateAccessibleWidget *)this_00,&local_38,ListItem);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleTableRow::_vftable__for__FSlateAccessibleWidget__;
      (this_00->PersistentState).InitialClipState.TypedValue.ScissorRect.TypedValue.TopRight.
      field0_0x0 = (TVector2<float>_u_0)
                   &FSlateAccessibleTableRow::_vftable__for__IAccessibleTableRow__;
      LOCK();
      paVar1 = (atomic<int> *)&(TVar9.Object)->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TVar9.Object)->_padding_ + 8))(TVar9.Object,1);
      }
    }
    if (((this_00->_padding_ == 0) || (this_00->_padding_ == 0)) ||
       (*(int *)(this_00->_padding_ + 8) < 1)) {
      local_res10.Object = (FSlateAccessibleWidget *)this_00;
      TSharedRef<FSlateAccessibleWidget,1>::
      TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
                (__return_storage_ptr__,&local_res10);
      goto LAB_1427f4d59;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InObject || !InObject->DoesSharedInstanceExist()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x7a5,L"Trying to share an already-shared object");
    pSVar7 = this_00;
    pSVar8 = (SWidget *)&DAT_00000001;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  local_res10.Object = (FSlateAccessibleWidget *)pSVar7;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (pSVar8 == (SWidget *)0x0) {
    return __return_storage_ptr__;
  }
LAB_1427f4d59:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)TVar9.Object);
  return __return_storage_ptr__;
}

// DoesItemHaveChildren @ 142801fb0

int __thiscall
STableRow<TSharedPtr<SWidget,1>_>::DoesItemHaveChildren(STableRow<TSharedPtr<SWidget,1>_> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  byte bVar3;
  atomic<int> aVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  pTVar8 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142801ff1;
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar9 = aVar2 == aVar4;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar9);
    pTVar6 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar7 = pTVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_142802017;
  }
LAB_142801ff1:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar8 = pTVar7;
  if (bVar9) {
    pcVar1 = (code *)swi(3);
    iVar5 = (*pcVar1)();
    return iVar5;
  }
LAB_142802017:
  bVar3 = (**(code **)(pTVar6->_padding_ + 0x68))(pTVar6,this->IndexInList);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return (uint)bVar3;
}

// GetBorder @ 14280d6d0

FSlateBrush * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::GetBorder(STableRow<TSharedPtr<SWidget,1>_> *this)

{
  FTableRowStyle *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  atomic<int> aVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  ISlateStyle *pIVar12;
  longlong lVar13;
  FSlateBrush *pFVar14;
  byte bVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  bool bVar19;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  pTVar17 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pFVar14 = (FSlateBrush *)0x0;
  pTVar16 = pTVar17;
  pTVar18 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
LAB_14280d716:
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar19) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FSlateBrush *)(*pcVar2)();
      return pFVar14;
    }
    pTVar17 = pTVar16;
    if ((pTVar18 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar19)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FSlateBrush *)(*pcVar2)();
      return pFVar14;
    }
  }
  else {
    aVar3 = pTVar17->SharedReferenceCount;
    do {
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
      pTVar18 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14280d716;
      LOCK();
      aVar8 = pTVar17->SharedReferenceCount;
      bVar19 = aVar3 == aVar8;
      if (bVar19) {
        pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar8;
    } while (!bVar19);
    pTVar18 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar16 = pTVar17;
    if (pTVar18 == (TReferenceControllerBase<1> *)0x0) goto LAB_14280d716;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar11 = (undefined8 *)(**(code **)(pTVar18->_padding_ + 0xe8))(pTVar18,local_38);
  cVar4 = (**(code **)(*(longlong *)*puVar11 + 0x1a0))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  cVar5 = (**(code **)(pTVar18->_padding_ + 0x68))(pTVar18,this->IndexInList);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<SWidget,1>_>::GetBorder(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<SWidget,1>_>::GetBorder(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<SWidget,1>_>::GetBorder(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<SWidget,1>_>::GetBorder(void)const___ptr64'
                    ::__l2::GenericWhiteBoxBrush,"GenericWhiteBox");
    _Init_thread_footer(&`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<SWidget,1>_>::GetBorder(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pIVar12 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar12 + 0x50))
            (pIVar12,`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<SWidget,1>_>::GetBorder(void)const___ptr64'
                     ::__l2::GenericWhiteBoxBrush,0,0);
  lVar13 = (**(code **)(pTVar18->_padding_ + 0x48))(pTVar18,this);
  if (lVar13 == 0) {
    cVar4 = (**(code **)(pTVar18->_padding_ + 200))(pTVar18);
    if ((cVar4 == '\0') &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar19)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FSlateBrush *)(*pcVar2)();
      return pFVar14;
    }
  }
  else {
    cVar6 = (**(code **)(pTVar18->_padding_ + 0x10))(pTVar18,lVar13);
    cVar7 = (**(code **)(pTVar18->_padding_ + 0x20))(pTVar18,lVar13);
    iVar9 = (**(code **)(this->_padding_ + 0x78))(this);
    bVar15 = ~(byte)this->IndexInList & 1;
    if (cVar6 == '\0') {
      if (cVar7 != '\0') {
        cVar5 = *(char *)((longlong)&this->_padding_ + 3);
        pFVar1 = this->Style;
        if (cVar4 == '\0') {
          if (cVar5 == '\0') {
            pFVar14 = &pFVar1->InactiveHighlightedBrush;
            goto LAB_14280da1c;
          }
        }
        else if (cVar5 == '\0') {
          pFVar14 = &pFVar1->ActiveHighlightedBrush;
          goto LAB_14280da1c;
        }
        lVar13 = 0x4f0;
        if (bVar15 == 0) {
          lVar13 = 0x650;
        }
        pFVar14 = (FSlateBrush *)((longlong)&pFVar1->_padding_ + lVar13);
        goto LAB_14280da1c;
      }
    }
    else if (this->bShowSelection != false) {
      cVar5 = *(char *)((longlong)&this->_padding_ + 3);
      pFVar1 = this->Style;
      if (cVar4 == '\0') {
        if (cVar5 == '\0') {
          pFVar14 = &pFVar1->InactiveBrush;
        }
        else {
          pFVar14 = &pFVar1->InactiveHoveredBrush;
        }
      }
      else {
        lVar13 = 0xc0;
        if (cVar5 == '\0') {
          lVar13 = 0x170;
        }
        pFVar14 = (FSlateBrush *)((longlong)&pFVar1->_padding_ + lVar13);
      }
      goto LAB_14280da1c;
    }
    if (((cVar5 == '\0') || (this->Style->bUseParentRowBrush == false)) ||
       (iVar10 = (**(code **)(this->_padding_ + 0x38))(this), iVar10 != 0)) {
      cVar4 = *(char *)((longlong)&this->_padding_ + 3);
      if (bVar15 == 0) {
        if ((cVar4 == '\0') || (iVar9 == 0)) {
          pFVar14 = &this->Style->OddRowBackgroundBrush;
        }
        else {
          pFVar14 = &this->Style->OddRowBackgroundHoveredBrush;
        }
      }
      else if ((cVar4 == '\0') || (iVar9 == 0)) {
        pFVar14 = &this->Style->EvenRowBackgroundBrush;
      }
      else {
        pFVar14 = &this->Style->EvenRowBackgroundHoveredBrush;
      }
    }
    else if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
      pFVar14 = &this->Style->ParentRowBackgroundBrush;
    }
    else {
      pFVar14 = &this->Style->ParentRowBackgroundHoveredBrush;
    }
  }
LAB_14280da1c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  return pFVar14;
}

// GetContent @ 14280ef00

TSharedPtr<SWidget,1> * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::GetContent
          (STableRow<TSharedPtr<SWidget,1>_> *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  if ((((this->Content).Object == (SWidget *)0x0) ||
      (pTVar1 = (this->Content).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = (SWidget *)0x0;
    pTVar1 = (this->Content).WeakReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar1->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar3 = pTVar1->SharedReferenceCount;
        bVar4 = aVar2 == aVar3;
        if (bVar4) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar4);
    }
    if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = (this->Content).Object;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetForegroundBasedOnSelection @ 14280ff80

FSlateColor * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::GetForegroundBasedOnSelection
          (STableRow<TSharedPtr<SWidget,1>_> *this,FSlateColor *__return_storage_ptr__)

{
  float *pfVar1;
  TReferenceControllerBase<1> *pTVar2;
  FTableRowStyle *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  undefined4 uVar8;
  longlong lVar9;
  FSlateColor *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pTVar2 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  pTVar11 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar2->SharedReferenceCount;
    do {
      pTVar11 = pTVar12;
      if (aVar5 == (atomic<int>)0x0) goto LAB_14280ffc1;
      LOCK();
      aVar7 = pTVar2->SharedReferenceCount;
      bVar13 = aVar5 == aVar7;
      if (bVar13) {
        pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar13);
    pTVar12 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar11 = pTVar2;
  }
LAB_14280ffc1:
  pFVar3 = this->Style;
  if ((this->bShowSelection != false) && (pTVar12 != (TReferenceControllerBase<1> *)0x0)) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    lVar9 = (**(code **)(pTVar12->_padding_ + 0x48))(pTVar12);
    if (lVar9 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      cVar6 = (**(code **)(pTVar12->_padding_ + 0x10))(pTVar12,lVar9);
      lVar9 = 0x7b0;
      if (cVar6 != '\0') {
        lVar9 = 0x7c4;
      }
      pfVar1 = (float *)((longlong)&pFVar3->_padding_ + lVar9);
      fVar14 = *pfVar1;
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      uVar8 = *(undefined4 *)((longlong)&(pFVar3->SelectorFocusedBrush)._padding_ + lVar9);
      goto LAB_142810082;
    }
    cVar6 = (**(code **)(pTVar12->_padding_ + 200))(pTVar12);
    if ((cVar6 == '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar13)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FSlateColor *)(*pcVar4)();
      return pFVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  fVar14 = (pFVar3->TextColor).SpecifiedColor.field0_0x0._s_0.R;
  fVar15 = (pFVar3->TextColor).SpecifiedColor.field0_0x0._s_0.G;
  fVar16 = (pFVar3->TextColor).SpecifiedColor.field0_0x0._s_0.B;
  fVar17 = (pFVar3->TextColor).SpecifiedColor.field0_0x0._s_0.A;
  uVar8._0_1_ = (pFVar3->TextColor).ColorUseRule;
  uVar8._1_1_ = (pFVar3->TextColor).ColorTableId;
  uVar8._2_2_ = *(undefined2 *)&(pFVar3->TextColor).field_0x12;
LAB_142810082:
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = fVar14;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = fVar15;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = fVar16;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar17;
  __return_storage_ptr__->ColorUseRule = (char)uVar8;
  __return_storage_ptr__->ColorTableId = (char)((uint)uVar8 >> 8);
  *(short *)&__return_storage_ptr__->field_0x12 = (short)((uint)uVar8 >> 0x10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// GetIndentLevel @ 142810940

int __thiscall
STableRow<TSharedPtr<SWidget,1>_>::GetIndentLevel(STableRow<TSharedPtr<SWidget,1>_> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = pTVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142810981;
      LOCK();
      aVar3 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar5 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar6 = pTVar7;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_1428109a7;
  }
LAB_142810981:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar7 = pTVar6;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
LAB_1428109a7:
  iVar4 = (**(code **)(pTVar5->_padding_ + 0x88))(pTVar5,this->IndexInList);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return iVar4;
}

// GetIndexInList @ 1428109f0

int __thiscall
STableRow<TSharedPtr<SWidget,1>_>::GetIndexInList(STableRow<TSharedPtr<SWidget,1>_> *this)

{
  return this->IndexInList;
}

// GetRowSizeForColumn @ 1428140d0

TVector2<double> * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::GetRowSizeForColumn
          (STableRow<TSharedPtr<SWidget,1>_> *this,TVector2<double> *__return_storage_ptr__,
          FName *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetSelectionMode @ 142815110

Type __thiscall
STableRow<TSharedPtr<SWidget,1>_>::GetSelectionMode(STableRow<TSharedPtr<SWidget,1>_> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  Type TVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = pTVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142815143;
      LOCK();
      aVar3 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar5 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar6 = pTVar7;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_142815169;
  }
LAB_142815143:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar7 = pTVar6;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    TVar4 = (*pcVar1)();
    return TVar4;
  }
LAB_142815169:
  TVar4 = (**(code **)(pTVar5->_padding_ + 0xb8))(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return TVar4;
}

// GetWiresNeededByDepth @ 1428173e0

TBitArray<FDefaultBitArrayAllocator> * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::GetWiresNeededByDepth
          (STableRow<TSharedPtr<SWidget,1>_> *this,
          TBitArray<FDefaultBitArrayAllocator> *__return_storage_ptr__)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  void *_Src;
  uint uVar8;
  ForElementType<unsigned_int> _Dst;
  TReferenceControllerBase<1> *pTVar9;
  ITypedTableView<TSharedPtr<SWidget,1>_> *pIVar10;
  bool bVar11;
  
  pTVar9 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pIVar10 = (ITypedTableView<TSharedPtr<SWidget,1>_> *)0x0;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142817424;
      }
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar11 = aVar4 == aVar5;
      if (bVar11) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar11);
    pIVar10 = (this->OwnerTablePtr).Object;
    if (pIVar10 != (ITypedTableView<TSharedPtr<SWidget,1>_> *)0x0) goto LAB_14281744a;
  }
LAB_142817424:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar11) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar3)();
    return pTVar7;
  }
LAB_14281744a:
  _Src = (void *)(**(code **)((longlong)*pIVar10 + 0x90))(pIVar10);
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<unsigned_int>)0x0;
  __return_storage_ptr__->NumBits = 0;
  __return_storage_ptr__->MaxBits = 0;
  uVar8 = *(int *)((longlong)_Src + 0x18) + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar8) {
    uVar6 = 0x80;
    if (0x80 < (int)uVar8) {
      uVar6 = uVar8;
    }
    __return_storage_ptr__->MaxBits = uVar6;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(__return_storage_ptr__,0);
  }
  iVar1 = *(int *)((longlong)_Src + 0x18);
  __return_storage_ptr__->NumBits = iVar1;
  if (iVar1 != 0) {
    if (*(void **)((longlong)_Src + 0x10) != (void *)0x0) {
      _Src = *(void **)((longlong)_Src + 0x10);
    }
    FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    _Dst = (ForElementType<unsigned_int>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      _Dst = FVar2;
    }
    memcpy((void *)_Dst,_Src,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// InitializeRow @ 14281a8b0

void __thiscall
STableRow<TSharedPtr<SWidget,1>_>::InitializeRow(STableRow<TSharedPtr<SWidget,1>_> *this)

{
  return;
}

// IsItemExpanded @ 14281e260

bool __thiscall
STableRow<TSharedPtr<SWidget,1>_>::IsItemExpanded(STableRow<TSharedPtr<SWidget,1>_> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  char cVar4;
  atomic<int> aVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  
  pTVar9 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14281e2a5;
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar10 = aVar2 == aVar5;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar10);
    pTVar7 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar8 = pTVar9;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_14281e2f6;
  }
LAB_14281e2a5:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar10) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pTVar9 = pTVar8;
  if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_14281e2f6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lVar6 = (**(code **)(pTVar7->_padding_ + 0x48))(pTVar7,this);
  if (lVar6 == 0) {
    cVar4 = (**(code **)(pTVar7->_padding_ + 200))(pTVar7);
    if ((cVar4 == '\0') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar10)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(pTVar7->_padding_ + 0x60))(pTVar7,lVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return (bool)uVar3;
}

// IsItemSelected @ 14281e390

bool __thiscall
STableRow<TSharedPtr<SWidget,1>_>::IsItemSelected(STableRow<TSharedPtr<SWidget,1>_> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  char cVar4;
  atomic<int> aVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  
  pTVar9 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14281e3d5;
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar10 = aVar2 == aVar5;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar10);
    pTVar7 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar8 = pTVar9;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_14281e426;
  }
LAB_14281e3d5:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar10) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pTVar9 = pTVar8;
  if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_14281e426:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lVar6 = (**(code **)(pTVar7->_padding_ + 0x48))(pTVar7,this);
  if (lVar6 == 0) {
    cVar4 = (**(code **)(pTVar7->_padding_ + 200))(pTVar7);
    if ((cVar4 == '\0') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar10)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(pTVar7->_padding_ + 0x10))(pTVar7,lVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return (bool)uVar3;
}

// IsLastChild @ 14281e4c0

bool __thiscall
STableRow<TSharedPtr<SWidget,1>_>::IsLastChild(STableRow<TSharedPtr<SWidget,1>_> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = pTVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14281e501;
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar8);
    pTVar5 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar6 = pTVar7;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_14281e527;
  }
LAB_14281e501:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar7 = pTVar6;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_14281e527:
  uVar3 = (**(code **)(pTVar5->_padding_ + 0x98))(pTVar5,this->IndexInList);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return (bool)uVar3;
}

// OnDragDetected @ 142825ce0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::OnDragDetected
          (STableRow<TSharedPtr<SWidget,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  FReply *pFVar5;
  TSharedRef<SWidget,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  FReadAccessScope local_118;
  FReadAccessScope local_100;
  undefined1 local_e8 [16];
  FReply local_d8;
  
  if (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) != '\0') {
    *(undefined1 *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) = 0;
    FReply::FReply(&local_d8,true);
    pTVar8 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    pTVar7 = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar8->SharedReferenceCount;
      do {
        pTVar7 = pTVar10;
        if (aVar2 == (atomic<int>)0x0) goto LAB_142825d51;
        LOCK();
        aVar4 = pTVar8->SharedReferenceCount;
        bVar11 = aVar2 == aVar4;
        if (bVar11) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar11);
      pTVar10 = (TReferenceControllerBase<1> *)this->_padding_;
      pTVar7 = pTVar8;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) goto LAB_142825d77;
    }
LAB_142825d51:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pTVar8 = pTVar7;
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar1)();
      return pFVar5;
    }
LAB_142825d77:
    pTVar6 = (TSharedRef<SWidget,1> *)(**(code **)(pTVar10->_padding_ + 0xe8))(pTVar10,local_e8);
    pFVar5 = FReply::CaptureMouse(&local_d8,pTVar6);
    FReply::FReply(__return_storage_ptr__,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    FReply::~FReply(&local_d8);
    return __return_storage_ptr__;
  }
  bVar11 = SWidget::HasMouseCapture((SWidget *)this);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (((!bVar11) ||
      (*(undefined1 *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 1) = 1,
      *(char *)&(this->Content).WeakReferenceCount.ReferenceController == '\0')) ||
     (this->IndexInList != 0)) goto LAB_142825e69;
  pTVar10 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar9 = pTVar10;
  pTVar7 = pTVar8;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_142825e25:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pTVar10 = pTVar9;
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar1)();
      return pFVar5;
    }
  }
  else {
    aVar2 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar8;
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142825e25;
      LOCK();
      aVar4 = pTVar10->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    pTVar7 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar9 = pTVar10;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_142825e25;
  }
  (**(code **)(pTVar7->_padding_ + 0x40))(pTVar7,2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_142825e69:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ItemDropZone,
             &local_118);
  if (((*(int *)&(this->OnDragDetected_Handler).field_0x8 != 0) &&
      (*(longlong **)&this->OnDragDetected_Handler != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)&this->OnDragDetected_Handler + 0x38))(), cVar3 != '\0'))
  {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_118);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ItemDropZone,
               &local_100);
    if (*(int *)&(this->OnDragDetected_Handler).field_0x8 != 0) {
      pTVar8 = *(TReferenceControllerBase<1> **)&this->OnDragDetected_Handler;
    }
    (**(code **)(pTVar8->_padding_ + 0x60))(pTVar8,__return_storage_ptr__,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_100);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_118);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnDragEnter @ 142825f30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STableRow<TSharedPtr<SWidget,1>_>::OnDragEnter
          (STableRow<TSharedPtr<SWidget,1>_> *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  undefined1 *this_00;
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  this_00 = &(this->OnDragDetected_Handler).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  if ((*(int *)&(this->OnDragEnter_Handler).field_0x8 != 0) &&
     (*(longlong **)&this->OnDragEnter_Handler != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)&this->OnDragEnter_Handler + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
      if (*(int *)&(this->OnDragEnter_Handler).field_0x8 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&this->OnDragEnter_Handler;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnDragLeave @ 142826230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STableRow<TSharedPtr<SWidget,1>_>::OnDragLeave
          (STableRow<TSharedPtr<SWidget,1>_> *this,FDragDropEvent *param_1)

{
  undefined1 *this_00;
  char cVar1;
  longlong *plVar2;
  undefined1 local_28 [8];
  FReadAccessScope local_20;
  
  if ((local_28 != &(this->PaintDropIndicatorEvent).field_0x10) &&
     ((this->PaintDropIndicatorEvent).field_0x14 != '\0')) {
    (this->PaintDropIndicatorEvent).field_0x14 = 0;
  }
  this_00 = &(this->OnDragEnter_Handler).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_20);
  if ((*(int *)&(this->OnDragLeave_Handler).field_0x8 != 0) &&
     (*(longlong **)&this->OnDragLeave_Handler != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)&this->OnDragLeave_Handler + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_20);
      if (*(int *)&(this->OnDragLeave_Handler).field_0x8 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&this->OnDragLeave_Handler;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  return;
}

// OnDragOver @ 1428262d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::OnDragOver
          (STableRow<TSharedPtr<SWidget,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FDragDropEvent *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FDeprecateSlateVector2D FVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  int iVar8;
  FReply *pFVar9;
  TTransform2<float> *pTVar10;
  TOptional<EItemDropZone> TVar11;
  int iVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  int local_140 [2];
  FPointerEvent local_138;
  FDragDropOperation *local_b8;
  TReferenceControllerBase<1> *local_b0;
  bool *local_a8;
  FReadAccessScope local_98;
  TTransform2<float> local_80;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_168;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->ExpanderArrowWidget).SharedReferenceCount,&local_98);
  if (((*(int *)&(this->OnCanAcceptDrop).field_0x8 == 0) ||
      (*(longlong **)&this->OnCanAcceptDrop == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(**(longlong **)&this->OnCanAcceptDrop + 0x38))(), cVar6 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
    FReply::FReply(__return_storage_ptr__,false);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_98);
  pTVar14 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  iVar12 = 0;
  pTVar13 = pTVar14;
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar14->SharedReferenceCount;
    do {
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142826395;
      LOCK();
      aVar7 = pTVar14->SharedReferenceCount;
      bVar16 = aVar5 == aVar7;
      if (bVar16) {
        pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar16);
    pTVar15 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar13 = pTVar14;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) goto LAB_1428263e6;
  }
LAB_142826395:
  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar16) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FReply *)(*pcVar4)();
    return pFVar9;
  }
  pTVar14 = pTVar13;
  if ((pTVar15 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar16)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FReply *)(*pcVar4)();
    return pFVar9;
  }
LAB_1428263e6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar10 = Inverse<TTransform2<float>_>(&local_80,&param_1->AccumulatedRenderTransform);
  lVar2 = param_2->_padding_;
  local_148._4_4_ = (float)((ulonglong)lVar2 >> 0x20);
  local_148._0_4_ = (float)lVar2;
  fVar19 = local_148._4_4_ * (pTVar10->M).M[1][0];
  fVar17 = (float)local_148 * (pTVar10->M).M[0][0];
  fVar18 = (pTVar10->Trans).field0_0x0._s_0.X;
  fVar20 = (float)local_148 * (pTVar10->M).M[0][1] + local_148._4_4_ * (pTVar10->M).M[1][1] +
           (pTVar10->Trans).field0_0x0._s_0.Y;
  local_148 = (FDeprecateSlateVector2D)lVar2;
  iVar8 = (**(code **)(pTVar15->_padding_ + 0xc0))(pTVar15);
  FVar3 = param_1->Size;
  if (iVar8 == 0) {
    local_148._0_4_ = FVar3._0_4_;
    fVar20 = fVar19 + fVar17 + fVar18;
  }
  else {
    local_148._4_4_ = FVar3._4_4_;
    local_148._0_4_ = local_148._4_4_;
  }
  fVar18 = (float)local_148 * __real_3e800000;
  if (__real_41200000 <= (float)local_148 * __real_3e800000) {
    fVar18 = __real_41200000;
  }
  if (fVar18 <= __real_40400000) {
    fVar18 = __real_40400000;
  }
  if (fVar18 <= fVar20) {
    iVar12 = ((float)local_148 - fVar18 < fVar20) + 1;
  }
  local_138._padding_._0_2_ = (undefined2)param_2->_padding_;
  local_138._padding_._2_1_ = *(undefined1 *)((longlong)&param_2->_padding_ + 2);
  local_138._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_138._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_138._padding_ = param_2->_padding_;
  local_138._padding_ = param_2->_padding_;
  local_138.ScreenSpacePosition = (FDeprecateSlateVector2D)param_2->_padding_;
  local_138.LastScreenSpacePosition = (FDeprecateSlateVector2D)param_2->_padding_;
  local_138.CursorDelta = (FDeprecateSlateVector2D)param_2->_padding_;
  local_138.PressedButtons =
       (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)param_2->_padding_;
  local_138.EffectingButton.KeyName = (FName)param_2->_padding_;
  local_138.EffectingButton.KeyDetails.Object = (FKeyDetails *)param_2->_padding_;
  local_138.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)param_2->_padding_;
  if (local_138.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_138.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(local_138.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_138.PointerIndex = (uint)param_2->_padding_;
  local_138.Force = *(float *)&param_2->_padding_;
  local_138.TouchpadIndex = *(uint *)((longlong)&param_2->_padding_ + 4);
  local_138.bIsTouchEvent = *(bool *)((longlong)&param_2->_padding_ + 4);
  local_138.GestureType = *(EGestureEvent *)((longlong)&param_2->_padding_ + 5);
  local_138.WheelOrGestureDelta = (FDeprecateSlateVector2D)param_2->_padding_;
  local_138.bIsDirectionInvertedFromDevice = SUB81(param_2->_padding_,0);
  local_138.bIsTouchForceChanged = *(bool *)((longlong)&param_2->_padding_ + 1);
  local_138.bIsTouchFirstMove = *(bool *)((longlong)&param_2->_padding_ + 2);
  local_138._padding_ = (longlong)&___7FDragDropEvent__6B_;
  local_b8 = (param_2->Content).Object;
  local_b0 = (param_2->Content).SharedReferenceCount.ReferenceController;
  if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8 = &this[-1].bChangedSelectionOnMouseDown;
  local_148 = FVar3;
  local_140[0] = iVar12;
  TVar11 = `STableRow<TSharedPtr<SWidget,1>_>::OnDragOver'::__l5::<lambda_1>::operator()(local_140);
  puVar1 = &(this->PaintDropIndicatorEvent).field_0x10;
  if (TVar11 != (TOptional<EItemDropZone>)puVar1) {
    if (*(char *)((longlong)TVar11 + 4) == '\0') {
      if ((this->PaintDropIndicatorEvent).field_0x14 != '\0') {
        (this->PaintDropIndicatorEvent).field_0x14 = 0;
      }
    }
    else {
      *(undefined4 *)puVar1 = *(undefined4 *)TVar11;
      (this->PaintDropIndicatorEvent).field_0x14 = 1;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  FPointerEvent::~FPointerEvent(&local_138);
  FReply::FReply(__return_storage_ptr__,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return __return_storage_ptr__;
}

// OnDrop @ 1428269e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::OnDrop
          (STableRow<TSharedPtr<SWidget,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FDragDropEvent *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *this_00;
  undefined1 local_e8 [32];
  FReply local_c8;
  
  local_e8._0_8_ = &this[-1].bChangedSelectionOnMouseDown;
  local_e8._8_8_ = param_1;
  local_e8._16_8_ = param_2;
  `STableRow<TSharedPtr<SWidget,1>_>::OnDrop'::__l2::<lambda_1>::operator()(local_e8,&local_c8);
  if ((char)local_c8._padding_ == '\0') {
    this_00 = &(this->OnDragLeave_Handler).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)local_e8);
    if ((*(int *)&(this->OnDrop_Handler).field_0x8 != 0) &&
       (*(longlong **)&this->OnDrop_Handler != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)&this->OnDrop_Handler + 0x38))();
      if (cVar1 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)local_e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FReadAccessScope *)local_e8);
        if (*(int *)&(this->OnDrop_Handler).field_0x8 == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)&this->OnDrop_Handler;
        }
        (**(code **)(*plVar2 + 0x60))(plVar2,__return_storage_ptr__,param_2);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)local_e8);
        goto LAB_142826aa5;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_e8);
  }
  FReply::FReply(__return_storage_ptr__,&local_c8);
LAB_142826aa5:
  FReply::~FReply(&local_c8);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 142828920

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::OnMouseButtonDoubleClick
          (STableRow<TSharedPtr<SWidget,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  FName FVar1;
  code *pcVar2;
  atomic<int> aVar3;
  char cVar4;
  atomic<int> aVar5;
  FReply *pFVar6;
  undefined8 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined8 local_18;
  longlong local_10;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar10 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar11 = FVar1 != EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (bVar11) goto LAB_142828aa0;
  pTVar10 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_142828995:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar2)();
      return pFVar6;
    }
    pTVar10 = pTVar9;
    if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142828995;
      LOCK();
      aVar5 = pTVar10->SharedReferenceCount;
      bVar11 = aVar3 == aVar5;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar11);
    pTVar8 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar9 = pTVar10;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_142828995;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar7 = (undefined8 *)(**(code **)(pTVar8->_padding_ + 0x48))(pTVar8);
  if (puVar7 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(pTVar8->_padding_ + 0xb0);
    local_18 = *puVar7;
    local_10 = puVar7[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    cVar4 = (*pcVar2)(pTVar8,&local_18);
    if (cVar4 == '\0') {
      (**(code **)(*(longlong *)&this[-1].bChangedSelectionOnMouseDown + 0x28))
                (&this[-1].bChangedSelectionOnMouseDown);
    }
    FReply::FReply(__return_storage_ptr__,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    return __return_storage_ptr__;
  }
  cVar4 = (**(code **)(pTVar8->_padding_ + 200))(pTVar8);
  if ((cVar4 == '\0') &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("OwnerTable->Private_IsPendingRefresh()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                          ,0x4cf,
                          L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                         ), bVar11)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FReply *)(*pcVar2)();
    return pFVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_142828aa0:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 142828bd0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::OnMouseButtonDown
          (STableRow<TSharedPtr<SWidget,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  int iVar8;
  FReply *pFVar9;
  undefined8 *puVar10;
  TSharedRef<SWidget,1> *pTVar11;
  atomic<int> *paVar12;
  atomic<int> *paVar13;
  SWidget *pSVar14;
  SWidget *pSVar15;
  SWidget *pSVar16;
  SWidget *pSVar17;
  bool bVar18;
  TSharedRef<SWidget,1> local_188;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  TSharedRef<SWidget,1> local_148;
  FKey local_138;
  TSharedRef<SWidget,1> local_120;
  TSharedRef<SWidget,1> local_110;
  undefined1 local_100 [16];
  FReply local_f0;
  
  pSVar17 = (SWidget *)(this->OwnerTablePtr).Object;
  pSVar15 = (SWidget *)0x0;
  pSVar14 = pSVar15;
  pSVar16 = pSVar17;
  if (pSVar17 == (SWidget *)0x0) {
LAB_142828c26:
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar4)();
      return pFVar9;
    }
    pSVar17 = pSVar16;
    if ((pSVar14 == (SWidget *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar18)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar4)();
      return pFVar9;
    }
  }
  else {
    aVar5 = *(atomic<int> *)&pSVar17->_padding_;
    do {
      pSVar14 = (SWidget *)0x0;
      pSVar16 = pSVar15;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142828c26;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar17->_padding_;
      bVar18 = aVar5 == aVar7;
      if (bVar18) {
        *(atomic<int> *)&pSVar17->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar18);
    pSVar14 = (SWidget *)this->_padding_;
    pSVar16 = pSVar17;
    if (pSVar14 == (SWidget *)0x0) goto LAB_142828c26;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  *(undefined2 *)&(this->Content).WeakReferenceCount.ReferenceController = 0;
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar18 = FVar2 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((bVar18) &&
     (iVar8 = (**(code **)(*(longlong *)&this[-1].bChangedSelectionOnMouseDown + 0x78))
                        (&this[-1].bChangedSelectionOnMouseDown), iVar8 != 0)) {
    puVar10 = (undefined8 *)(*(code *)((TStatIdData *)pSVar14->_padding_)[3].Name)(pSVar14);
    if (puVar10 != (undefined8 *)0x0) {
      cVar6 = (*(code *)(((TStatIdData *)pSVar14->_padding_)->StatDescriptionAnsi).Ptr)
                        (pSVar14,puVar10);
      if (iVar8 == 3) {
        if ((param_2->_padding_ & 3) == 0) {
          if ((param_2->_padding_ & 0xc) == 0) goto LAB_142828db7;
          pcVar4 = (code *)((TStatIdData *)pSVar14->_padding_)[1].StatDescriptionAnsi.Ptr;
          local_178 = *puVar10;
          local_170 = puVar10[1];
          if (local_170 != 0) {
            LOCK();
            *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
            UNLOCK();
          }
          (*pcVar4)(pSVar14,&local_178,cVar6 == '\0');
        }
        else {
          pcVar4 = (code *)((TStatIdData *)pSVar14->_padding_)[2].StatDescriptionWide.Ptr;
          local_168 = *puVar10;
          local_160 = puVar10[1];
          if (local_160 != 0) {
            LOCK();
            *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
            UNLOCK();
          }
          (*pcVar4)(pSVar14,&local_168);
        }
        iVar8 = this->IndexInList;
        *(undefined1 *)&(this->Content).WeakReferenceCount.ReferenceController = 1;
        if (iVar8 == 1) {
          (*(code *)((TStatIdData *)pSVar14->_padding_)[2].StatDescriptionAnsi.Ptr)(pSVar14,2);
        }
      }
LAB_142828db7:
      if (((*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 3) != '\0'
           ) || (cVar6 == '\0')) &&
         (*(char *)&(this->Content).WeakReferenceCount.ReferenceController == '\0')) {
        (*(code *)((TStatIdData *)pSVar14->_padding_)[2].Name)(pSVar14);
        pcVar4 = (code *)((TStatIdData *)pSVar14->_padding_)[1].StatDescriptionAnsi.Ptr;
        local_158 = *puVar10;
        local_150 = puVar10[1];
        if (local_150 != 0) {
          LOCK();
          *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
          UNLOCK();
        }
        (*pcVar4)(pSVar14,&local_158,1);
        iVar8 = this->IndexInList;
        *(undefined1 *)&(this->Content).WeakReferenceCount.ReferenceController = 1;
        if (iVar8 == 1) {
          (*(code *)((TStatIdData *)pSVar14->_padding_)[2].StatDescriptionAnsi.Ptr)(pSVar14,2);
        }
      }
      FReply::FReply(&local_f0,true);
      local_138.KeyName = EKeys::LeftMouseButton.KeyName;
      local_138.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object;
      local_138.KeyDetails.SharedReferenceCount.ReferenceController =
           EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
      if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_120);
      paVar13 = (atomic<int> *)&DAT_00000008;
      pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
      local_188.Object = (SWidget *)&pTVar11->Object[-1].StatID;
      if (pTVar11->Object == (SWidget *)0x0) {
        local_188.Object = pSVar15;
      }
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        paVar12 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar12 = &pTVar1->SharedReferenceCount;
        LOCK();
        *paVar12 = (atomic<int>)((int)*paVar12 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_120.SharedReferenceCount.ReferenceController);
      if (local_188.Object == (SWidget *)0x0) {
        local_188.Object = (SWidget *)0x0;
      }
      else {
        local_188.Object = (SWidget *)&(local_188.Object)->_padding_;
      }
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar12 = (atomic<int>)((int)*paVar12 + 1);
        UNLOCK();
      }
      local_188.SharedReferenceCount.ReferenceController = pTVar1;
      pFVar9 = FReply::DetectDrag(&local_f0,&local_188,&local_138);
      pTVar11 = (TSharedRef<SWidget,1> *)
                (*(code *)((TStatIdData *)pSVar14->_padding_)[9].StatDescriptionAnsi.Ptr)
                          (pSVar14,local_100);
      pFVar9 = FReply::SetUserFocus(pFVar9,pTVar11,Mouse,false);
      pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_110);
      pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
      pSVar14 = (SWidget *)&pTVar11->Object[-1].StatID;
      if (pTVar11->Object == (SWidget *)0x0) {
        pSVar14 = pSVar15;
      }
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        paVar13 = &pTVar3->SharedReferenceCount;
        LOCK();
        *paVar13 = (atomic<int>)((int)*paVar13 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_110.SharedReferenceCount.ReferenceController);
      if (pSVar14 != (SWidget *)0x0) {
        pSVar15 = (SWidget *)&pSVar14->_padding_;
      }
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar13 = (atomic<int>)((int)*paVar13 + 1);
        UNLOCK();
      }
      local_148.Object = pSVar15;
      local_148.SharedReferenceCount.ReferenceController = pTVar3;
      pFVar9 = FReply::CaptureMouse(pFVar9,&local_148);
      FReply::FReply(__return_storage_ptr__,pFVar9);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      FReply::~FReply(&local_f0);
      goto LAB_142828fdc;
    }
    cVar6 = (*(code *)((TStatIdData *)pSVar14->_padding_)[8].StatDescriptionWide.Ptr)(pSVar14);
    if ((cVar6 == '\0') &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar18)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar4)();
      return pFVar9;
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
LAB_142828fdc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar17);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 142829360

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::OnMouseButtonUp
          (STableRow<TSharedPtr<SWidget,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  atomic<int> aVar9;
  int iVar10;
  FReply *pFVar11;
  undefined8 *puVar12;
  STableViewBase *pSVar13;
  STableViewBase *pSVar14;
  STableViewBase *pSVar15;
  STableViewBase *pSVar16;
  bool bVar17;
  undefined4 local_res8;
  undefined4 uStackX_c;
  TVector2<float>_u_0 local_508;
  undefined4 local_500;
  undefined8 local_4fc;
  undefined4 local_4f4;
  undefined8 local_4f0;
  longlong local_4e8;
  undefined8 local_4e0;
  longlong local_4d8;
  undefined8 local_4d0;
  longlong local_4c8;
  undefined8 local_4c0;
  longlong local_4b8;
  FSlateRotatedRect local_4b0;
  FReply local_498;
  FReply local_3e0;
  FReply local_328;
  FReply local_270;
  FReply local_1b8;
  FReply local_f8;
  
  pSVar14 = (STableViewBase *)(this->OwnerTablePtr).Object;
  pSVar16 = (STableViewBase *)0x0;
  pSVar13 = pSVar14;
  pSVar15 = (STableViewBase *)0x0;
  if (pSVar14 == (STableViewBase *)0x0) {
LAB_1428293da:
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FReply *)(*pcVar5)();
      return pFVar11;
    }
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    pSVar14 = pSVar13;
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FReply *)(*pcVar5)();
      return pFVar11;
    }
  }
  else {
    aVar2 = *(atomic<int> *)&pSVar14->field_0x8;
    do {
      pSVar13 = pSVar16;
      pSVar15 = pSVar16;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1428293da;
      LOCK();
      aVar9 = *(atomic<int> *)&pSVar14->field_0x8;
      bVar17 = aVar2 == aVar9;
      if (bVar17) {
        *(atomic<int> *)&pSVar14->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar17);
    pSVar15 = (STableViewBase *)this->_padding_;
    pSVar13 = pSVar14;
    if (pSVar15 == (STableViewBase *)0x0) goto LAB_1428293da;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pSVar13 = (STableViewBase *)&pSVar15[-1].field_0x8;
  if (pSVar15 == (STableViewBase *)0x0) {
    pSVar13 = pSVar16;
  }
  if (pSVar14 != (STableViewBase *)0x0) {
    LOCK();
    *(atomic<int> *)&pSVar14->field_0x8 =
         (atomic<int>)((int)*(atomic<int> *)&pSVar14->field_0x8 + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)&pSVar14->field_0x8 =
         (atomic<int>)((int)*(atomic<int> *)&pSVar14->field_0x8 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar17 = FVar4 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar17) {
    FReply::FReply(&local_498,false);
    FVar6.ReferenceController = local_498.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_498.MouseCaptor.Object = (SWidget *)0x0;
    local_498.MouseCaptor.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
      }
    }
    local_498.bUseHighPrecisionMouse = 0;
    local_498.bReleaseMouseCapture = 1;
    FReply::FReply(&local_1b8,&local_498);
    FReply::~FReply(&local_498);
    if (*(char *)&(this->Content).WeakReferenceCount.ReferenceController != '\0') {
      FReply::FReply(&local_3e0,true);
      FVar6.ReferenceController = local_3e0.MouseCaptor.WeakReferenceCount.ReferenceController;
      local_3e0.MouseCaptor.Object = (SWidget *)0x0;
      local_3e0.MouseCaptor.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
        }
      }
      local_3e0.bUseHighPrecisionMouse = 0;
      local_3e0.bReleaseMouseCapture = 1;
      FReply::operator=(&local_1b8,&local_3e0);
      FReply::~FReply(&local_3e0);
    }
    local_508 = (TVector2<float>_u_0)0x0;
    local_4fc = 0;
    local_res8 = SUB84(param_1->Size,0);
    uStackX_c = SUB84(param_1->Size,4);
    local_500 = local_res8;
    local_4f4 = uStackX_c;
    TransformRect<TTransform2<float>_>
              (&local_4b0,&param_1->AccumulatedRenderTransform,(FSlateRotatedRect *)&local_508._s_0)
    ;
    bVar17 = FSlateRotatedRect::IsUnderLocation
                       (&local_4b0,*(FDeprecateVector2DParameter *)&param_2->ScreenSpacePosition);
    bVar7 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar7) {
      if ((bVar17) &&
         (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 1) == '\0'))
      {
        iVar10 = (**(code **)(*(longlong *)&this[-1].bChangedSelectionOnMouseDown + 0x78))
                           (&this[-1].bChangedSelectionOnMouseDown);
        if (iVar10 == 2) {
          if (*(char *)&(this->Content).WeakReferenceCount.ReferenceController == '\0') {
            (**(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 + 0x30))
                      (pSVar15);
            (**(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 + 0x40))
                      (pSVar15,2);
          }
          FReply::FReply(&local_270,true);
          FVar6.ReferenceController = local_270.MouseCaptor.WeakReferenceCount.ReferenceController;
          local_270.MouseCaptor.Object = (SWidget *)0x0;
          local_270.MouseCaptor.WeakReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1)
              ;
            }
          }
          local_270.bUseHighPrecisionMouse = 0;
          local_270.bReleaseMouseCapture = 1;
          FReply::operator=(&local_1b8,&local_270);
          pFVar11 = &local_270;
LAB_1428297da:
          FReply::~FReply(pFVar11);
        }
        else if ((((iVar10 == 3) &&
                  (*(char *)&(this->Content).WeakReferenceCount.ReferenceController == '\0')) &&
                 ((param_2->_padding_ & 0xc) == 0)) && ((param_2->_padding_ & 3) == 0)) {
          puVar12 = (undefined8 *)
                    (**(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 +
                                0x48))(pSVar15,&this[-1].bChangedSelectionOnMouseDown);
          if (puVar12 == (undefined8 *)0x0) {
            cVar8 = (**(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 + 200
                                ))(pSVar15);
            if ((cVar8 == '\0') &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OwnerTable->Private_IsPendingRefresh()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                                    ,0x4cf,
                                    L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                                   ), bVar17)) {
              pcVar5 = (code *)swi(3);
              pFVar11 = (FReply *)(*pcVar5)();
              return pFVar11;
            }
          }
          else {
            cVar8 = (**(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 +
                                0x10))(pSVar15,puVar12);
            if ((cVar8 != '\0') &&
               (iVar10 = (**(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15
                                     + 0x70))(pSVar15), 1 < iVar10)) {
              (**(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 + 0x30))
                        (pSVar15);
              pcVar5 = *(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 +
                                 0x28);
              local_4f0 = *puVar12;
              local_4e8 = puVar12[1];
              if (local_4e8 != 0) {
                LOCK();
                *(int *)(local_4e8 + 8) = *(int *)(local_4e8 + 8) + 1;
                UNLOCK();
              }
              (*pcVar5)(pSVar15,&local_4f0,1);
              (**(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 + 0x40))
                        (pSVar15,2);
              FReply::FReply(&local_328,true);
              FVar6.ReferenceController =
                   local_328.MouseCaptor.WeakReferenceCount.ReferenceController;
              local_328.MouseCaptor.Object = (SWidget *)0x0;
              local_328.MouseCaptor.WeakReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
                aVar2 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if (aVar2 == (atomic<int>)0x1) {
                  (**(code **)((FVar6.ReferenceController)->_padding_ + 8))
                            (FVar6.ReferenceController,1);
                }
              }
              local_328.bUseHighPrecisionMouse = 0;
              local_328.bReleaseMouseCapture = 1;
              FReply::operator=(&local_1b8,&local_328);
              pFVar11 = &local_328;
              goto LAB_1428297da;
            }
          }
        }
      }
      puVar12 = (undefined8 *)
                (**(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 + 0x48))
                          (pSVar15,&this[-1].bChangedSelectionOnMouseDown);
      if (puVar12 == (undefined8 *)0x0) {
        cVar8 = (**(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 + 200))
                          (pSVar15);
        if ((cVar8 == '\0') &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("OwnerTable->Private_IsPendingRefresh()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                                ,0x4cf,
                                L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                               ), bVar17)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FReply *)(*pcVar5)();
          return pFVar11;
        }
      }
      else {
        pcVar5 = *(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 + 0xa8);
        local_4e0 = *puVar12;
        local_4d8 = puVar12[1];
        if (local_4d8 != 0) {
          LOCK();
          *(int *)(local_4d8 + 8) = *(int *)(local_4d8 + 8) + 1;
          UNLOCK();
        }
        cVar8 = (*pcVar5)(pSVar15,&local_4e0);
        if (cVar8 != '\0') {
          FReply::FReply(&local_f8,true);
          pFVar11 = FReply::ReleaseMouseCapture(&local_f8);
          FReply::operator=(&local_1b8,pFVar11);
          FReply::~FReply(&local_f8);
        }
      }
      if (((*(char *)&(this->Content).WeakReferenceCount.ReferenceController != '\0') &&
          (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 1) == '\0')
          ) && (this->IndexInList == 0)) {
        (**(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 + 0x40))
                  (pSVar15,2);
      }
      FReply::FReply(__return_storage_ptr__,&local_1b8);
      FReply::~FReply(&local_1b8);
      goto LAB_142829a43;
    }
    FReply::~FReply(&local_1b8);
LAB_142829a35:
    bVar17 = false;
  }
  else {
    pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FVar4 != EKeys::RightMouseButton.KeyName) ||
       (bVar17 = STableViewBase::IsRightClickScrolling(pSVar13), bVar17)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      goto LAB_142829a35;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    iVar10 = (**(code **)(*(longlong *)&this[-1].bChangedSelectionOnMouseDown + 0x78))
                       (&this[-1].bChangedSelectionOnMouseDown);
    if (((iVar10 != 1) && (iVar10 != 2)) && (iVar10 != 3)) goto LAB_142829a35;
    puVar12 = (undefined8 *)
              (**(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 + 0x48))
                        (pSVar15);
    if (puVar12 == (undefined8 *)0x0) {
      cVar8 = (**(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 + 200))
                        (pSVar15);
      if ((cVar8 == '\0') &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("OwnerTable->Private_IsPendingRefresh()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                              ,0x4cf,
                              L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                             ), bVar17)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FReply *)(*pcVar5)();
        return pFVar11;
      }
      goto LAB_142829a35;
    }
    cVar8 = (**(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 + 0x10))
                      (pSVar15,puVar12);
    if (cVar8 == '\0') {
      (**(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 + 0x30))(pSVar15);
      pcVar5 = *(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 + 0x28);
      local_4d0 = *puVar12;
      local_4c8 = puVar12[1];
      if (local_4c8 != 0) {
        LOCK();
        *(int *)(local_4c8 + 8) = *(int *)(local_4c8 + 8) + 1;
        UNLOCK();
      }
      (*pcVar5)(pSVar15,&local_4d0,1);
      (**(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 + 0x40))(pSVar15,2)
      ;
    }
    pcVar5 = *(code **)((longlong)*(ITypedTableView<TSharedPtr<SWidget,1>_> *)pSVar15 + 0xa0);
    local_4c0 = *puVar12;
    local_4b8 = puVar12[1];
    if (local_4b8 != 0) {
      LOCK();
      *(int *)(local_4b8 + 8) = *(int *)(local_4b8 + 8) + 1;
      UNLOCK();
    }
    (*pcVar5)(pSVar15,&local_4c0,param_2);
    bVar17 = true;
  }
  FReply::FReply(__return_storage_ptr__,bVar17);
LAB_142829a43:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
  return __return_storage_ptr__;
}

// OnPaint @ 14282ae40

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<TSharedPtr<SWidget,1>_>::OnPaint
          (STableRow<TSharedPtr<SWidget,1>_> *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  int iVar1;
  
  iVar1 = PaintSelection((STableRow<TSharedPtr<SWidget,1>_> *)&this[-1].bChangedSelectionOnMouseDown
                         ,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  iVar1 = SBorder::OnPaint((SBorder *)this,param_1,param_2,param_3,param_4,iVar1,param_6,param_7);
  iVar1 = PaintDropIndicator((STableRow<TSharedPtr<SWidget,1>_> *)
                             &this[-1].bChangedSelectionOnMouseDown,param_1,param_2,param_3,param_4,
                             iVar1,param_6,param_7);
  return iVar1;
}

// OnPaintDropIndicator @ 14282af50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<TSharedPtr<SWidget,1>_>::OnPaintDropIndicator
          (STableRow<TSharedPtr<SWidget,1>_> *this,EItemDropZone param_1,FPaintArgs *param_2,
          FGeometry *param_3,FSlateRect *param_4,FSlateWindowElementList *param_5,int param_6,
          FWidgetStyle *param_7,bool param_8)

{
  float fVar1;
  ESlateColorStylingMode EVar2;
  undefined1 uVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  FSlateColor *this_00;
  TReferenceControllerBase<1> *pTVar8;
  FSlateBrush *pFVar9;
  ITypedTableView<TSharedPtr<SWidget,1>_> *pIVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_198 [32];
  undefined8 local_148;
  undefined8 local_140;
  FLinearColor_u_0 local_138;
  FLinearColor_u_0 local_128;
  TVector2<float>_u_0_s_0 local_114;
  FDeprecateOptionalVector2DParameter local_108;
  TTransform2<float> local_f8;
  TTransform2<float> local_e0;
  TVector2<float>_u_0 local_c8;
  float local_c0;
  undefined8 local_bc;
  FDeprecateSlateVector2D local_b4;
  float local_ac [2];
  float afStack_a4 [2];
  TVector2<float>_u_0 local_9c;
  byte local_94;
  TVector2<float>_u_0 local_90;
  float local_88;
  undefined8 local_84;
  undefined8 local_7c;
  float local_74 [2];
  float afStack_6c [2];
  TVector2<float>_u_0 local_64;
  byte local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar8 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pIVar10 = (ITypedTableView<TSharedPtr<SWidget,1>_> *)0x0;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar8->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14282afb1;
      }
      LOCK();
      aVar6 = pTVar8->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    pIVar10 = (this->OwnerTablePtr).Object;
    if (pIVar10 != (ITypedTableView<TSharedPtr<SWidget,1>_> *)0x0) goto LAB_14282b002;
  }
LAB_14282afb1:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar11) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  if ((pIVar10 == (ITypedTableView<TSharedPtr<SWidget,1>_> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
LAB_14282b002:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (param_1 == AboveItem) {
    pFVar9 = &this->Style->DropIndicator_Above;
  }
  else if ((param_1 == OntoItem) || (param_1 != BelowItem)) {
    pFVar9 = &this->Style->DropIndicator_Onto;
  }
  else {
    pFVar9 = &this->Style->DropIndicator_Below;
  }
  this_00 = &pFVar9->TintColor;
  iVar7 = (**(code **)((longlong)*pIVar10 + 0xc0))(pIVar10);
  EVar2 = (pFVar9->TintColor).ColorUseRule;
  if (iVar7 == 1) {
    if (EVar2 != UseColor_Specified) {
      if (EVar2 == UseColor_ColorTable) {
        this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
      }
      else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
        this_00 = (FSlateColor *)&param_7->ForegroundColor;
      }
      else {
        this_00 = (FSlateColor *)&param_7->SubduedForeground;
      }
    }
    local_c8 = (param_3->AbsolutePosition).field0_0x0;
    local_138._s_0.R =
         (this_00->SpecifiedColor).field0_0x0._s_0.R *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_b4 = param_3->Size;
    local_138._s_0.G =
         (this_00->SpecifiedColor).field0_0x0._s_0.G *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_138._s_0.B =
         (this_00->SpecifiedColor).field0_0x0._s_0.B *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_94 = param_3->bHasRenderTransform * '\x02' | local_94 & 0xfc;
    local_138._s_0.A =
         (this_00->SpecifiedColor).field0_0x0._s_0.A *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_c0 = param_3->Scale;
    local_ac = (param_3->AccumulatedRenderTransform).M.M[0];
    afStack_a4 = (param_3->AccumulatedRenderTransform).M.M[1];
    local_bc = 0;
    local_9c = (param_3->AccumulatedRenderTransform).Trans.field0_0x0;
    FSlateDrawElement::MakeBox
              (param_5,param_6,(FPaintGeometry *)&local_c8._s_0,pFVar9,None,
               (FLinearColor *)&local_138._s_0);
  }
  else {
    local_148._4_4_ = SUB84(param_3->Size,4);
    local_148._0_4_ = SUB84(param_3->Size,0);
    fVar13 = (float)local_148._4_4_ * __real_3f000000;
    fVar12 = (float)(undefined4)local_148 * __real_3f000000;
    local_138._s_0.R = (float)local_148._4_4_;
    local_138._s_0.G = (float)(undefined4)local_148;
    local_140._4_4_ = fVar13 - fVar12;
    local_140._0_4_ = fVar12 - fVar13;
    if (EVar2 != UseColor_Specified) {
      if (EVar2 == UseColor_ColorTable) {
        this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
      }
      else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
        this_00 = (FSlateColor *)&param_7->ForegroundColor;
      }
      else {
        this_00 = (FSlateColor *)&param_7->SubduedForeground;
      }
    }
    fVar1 = param_3->Scale;
    local_148._4_4_ = fVar12;
    local_148._0_4_ = fVar13;
    local_128._s_0.R =
         (this_00->SpecifiedColor).field0_0x0._s_0.R *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_128._s_0.G =
         (this_00->SpecifiedColor).field0_0x0._s_0.G *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_108._0_8_ = local_148;
    local_114 = (param_3->AbsolutePosition).field0_0x0._s_0;
    local_128._s_0.B =
         (this_00->SpecifiedColor).field0_0x0._s_0.B *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_108._8_1_ = 1;
    local_f8.Trans.field0_0x0 = local_140;
    local_128._s_0.A =
         (this_00->SpecifiedColor).field0_0x0._s_0.A *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_f8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_f8.M.M[0][1] = _UNK_15076b184;
    local_f8.M.M[1][0] = _UNK_15076b188;
    local_f8.M.M[1][1] = _UNK_15076b18c;
    local_148._4_4_ = (fVar13 - fVar12) * fVar1 + local_114.Y;
    local_148._0_4_ = (fVar12 - fVar13) * fVar1 + local_114.X;
    Concatenate<TTransform2<float>_>(&local_e0,&local_f8,&param_3->AccumulatedRenderTransform);
    local_90 = local_148;
    local_7c = CONCAT44(local_138._s_0.G,local_138._s_0.R);
    local_5c = param_3->bHasRenderTransform * '\x02' | local_5c & 0xfc;
    local_84 = 0;
    local_74[0] = local_e0.M.M[0][0];
    local_74[1] = local_e0.M.M[0][1];
    afStack_6c[0] = local_e0.M.M[1][0];
    afStack_6c[1] = local_e0.M.M[1][1];
    local_64 = local_e0.Trans.field0_0x0;
    local_88 = fVar1;
    FSlateDrawElement::MakeRotatedBox
              (param_5,param_6,(FPaintGeometry *)&local_90._s_0,pFVar9,None,__real_bfc90fdb,
               &local_108,RelativeToElement,(FLinearColor *)&local_128._s_0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return param_6 + 1;
}

// OnTouchEnded @ 14282b3b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::OnTouchEnded
          (STableRow<TSharedPtr<SWidget,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  bool *pbVar1;
  code *pcVar2;
  atomic<int> aVar3;
  char cVar4;
  atomic<int> aVar5;
  int iVar6;
  FReply *pFVar7;
  undefined8 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  undefined8 local_278;
  longlong local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 local_258;
  longlong local_250;
  FReply local_248;
  FReply local_190;
  FReply local_d8;
  
  FReply::FReply(__return_storage_ptr__,false);
  pbVar1 = &this[-1].bChangedSelectionOnMouseDown;
  if (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) == '\0') {
    return __return_storage_ptr__;
  }
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) = 0;
  pTVar11 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar10 = pTVar11;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_14282b425:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FReply *)(*pcVar2)();
      return pFVar7;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    pTVar11 = pTVar10;
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FReply *)(*pcVar2)();
      return pFVar7;
    }
  }
  else {
    aVar3 = pTVar11->SharedReferenceCount;
    do {
      pTVar10 = pTVar9;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14282b425;
      LOCK();
      aVar5 = pTVar11->SharedReferenceCount;
      bVar12 = aVar3 == aVar5;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar12);
    pTVar9 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar10 = pTVar11;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_14282b425;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar8 = (undefined8 *)(**(code **)(pTVar9->_padding_ + 0x48))(pTVar9,pbVar1);
  if (puVar8 == (undefined8 *)0x0) {
    cVar4 = (**(code **)(pTVar9->_padding_ + 200))(pTVar9);
    if ((cVar4 == '\0') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar12)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FReply *)(*pcVar2)();
      return pFVar7;
    }
    goto LAB_14282b65e;
  }
  iVar6 = (**(code **)(*(longlong *)pbVar1 + 0x78))(pbVar1);
  if (iVar6 != 0) {
    cVar4 = (**(code **)(pTVar9->_padding_ + 0x10))(pTVar9,puVar8);
    if (cVar4 == '\0') {
      if (iVar6 != 3) {
        (**(code **)(pTVar9->_padding_ + 0x30))(pTVar9);
      }
      pcVar2 = *(code **)(pTVar9->_padding_ + 0x28);
      local_278 = *puVar8;
      local_270 = puVar8[1];
      if (local_270 != 0) {
        LOCK();
        *(int *)(local_270 + 8) = *(int *)(local_270 + 8) + 1;
        UNLOCK();
      }
      (*pcVar2)(pTVar9,&local_278,1);
      (**(code **)(pTVar9->_padding_ + 0x40))(pTVar9,2);
      FReply::FReply(&local_248,true);
      FReply::operator=(__return_storage_ptr__,&local_248);
      pFVar7 = &local_248;
    }
    else {
      if (1 < iVar6 - 2U) goto LAB_14282b5bf;
      pcVar2 = *(code **)(pTVar9->_padding_ + 0x28);
      local_268 = *puVar8;
      local_260 = puVar8[1];
      if (local_260 != 0) {
        LOCK();
        *(int *)(local_260 + 8) = *(int *)(local_260 + 8) + 1;
        UNLOCK();
      }
      (*pcVar2)(pTVar9,&local_268,1);
      (**(code **)(pTVar9->_padding_ + 0x40))(pTVar9,2);
      FReply::FReply(&local_190,true);
      FReply::operator=(__return_storage_ptr__,&local_190);
      pFVar7 = &local_190;
    }
    FReply::~FReply(pFVar7);
  }
LAB_14282b5bf:
  pcVar2 = *(code **)(pTVar9->_padding_ + 0xa8);
  local_258 = *puVar8;
  local_250 = puVar8[1];
  if (local_250 != 0) {
    LOCK();
    *(int *)(local_250 + 8) = *(int *)(local_250 + 8) + 1;
    UNLOCK();
  }
  cVar4 = (*pcVar2)(pTVar9,&local_258);
  if (cVar4 != '\0') {
    FReply::FReply(&local_d8,true);
    FReply::operator=(__return_storage_ptr__,&local_d8);
    FReply::~FReply(&local_d8);
  }
LAB_14282b65e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 14282b690

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<SWidget,1>_>::OnTouchStarted
          (STableRow<TSharedPtr<SWidget,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<SWidget,1> *pTVar2;
  FReply *pFVar3;
  atomic<int> *paVar4;
  TStatId *pTVar5;
  TSharedRef<SWidget,1> local_e8;
  FKey local_d8;
  FReply local_c0;
  
  *(undefined1 *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) = 1;
  FReply::FReply(&local_c0,true);
  local_d8.KeyName = EKeys::LeftMouseButton.KeyName;
  local_d8.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object;
  local_d8.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e8);
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  pTVar5 = &pTVar2->Object[-1].StatID;
  if (pTVar2->Object == (SWidget *)0x0) {
    pTVar5 = (TStatId *)0x0;
  }
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar4 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar4 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  if (pTVar5 == (TStatId *)0x0) {
    local_e8.Object = (SWidget *)0x0;
  }
  else {
    local_e8.Object = (SWidget *)(pTVar5 + 1);
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  local_e8.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar3 = FReply::DetectDrag(&local_c0,&local_e8,&local_d8);
  FReply::FReply(__return_storage_ptr__,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FReply::~FReply(&local_c0);
  return __return_storage_ptr__;
}

// PaintDropIndicator @ 14282c820

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<TSharedPtr<SWidget,1>_>::PaintDropIndicator
          (STableRow<TSharedPtr<SWidget,1>_> *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  EItemDropZone EVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if ((this->ItemDropZone).bIsSet != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->PaintDropIndicatorEvent,&local_38);
    if (((*(int *)&(this->PaintDropIndicatorEvent).field_0x10 == 0) ||
        (plVar6 = *(longlong **)&(this->PaintDropIndicatorEvent).field_0x8,
        plVar6 == (longlong *)0x0)) || (cVar3 = (**(code **)(*plVar6 + 0x38))(), cVar3 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      pcVar2 = *(code **)(this->_padding_ + 0x88);
      if (((this->ItemDropZone).bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      param_5 = (*pcVar2)(this,(this->ItemDropZone).TypedValue,param_1,param_2,param_3,param_4,
                          param_5,param_6,param_7);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      if (((this->ItemDropZone).bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      EVar1 = (this->ItemDropZone).TypedValue;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->PaintDropIndicatorEvent,&local_20);
      if (*(int *)&(this->PaintDropIndicatorEvent).field_0x10 == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)&(this->PaintDropIndicatorEvent).field_0x8;
      }
      param_5 = (**(code **)(*plVar6 + 0x60))
                          (plVar6,EVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
    }
  }
  return param_5;
}

// PaintSelection @ 14282ca00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<TSharedPtr<SWidget,1>_>::PaintSelection
          (STableRow<TSharedPtr<SWidget,1>_> *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  ESlateColorStylingMode EVar1;
  code *pcVar2;
  atomic<int> aVar3;
  char cVar4;
  atomic<int> aVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  FSlateColor *this_00;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  undefined1 auStackY_b8 [32];
  FLinearColor_u_0 local_88;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  TVector2<float>_u_0 local_68;
  float local_60;
  undefined8 local_5c;
  FDeprecateSlateVector2D local_54;
  float local_4c [2];
  float afStack_44 [2];
  TVector2<float>_u_0 local_3c;
  byte local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pTVar11 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar10 = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar11->SharedReferenceCount;
    do {
      pTVar10 = pTVar9;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14282ca65;
      LOCK();
      aVar5 = pTVar11->SharedReferenceCount;
      bVar12 = aVar3 == aVar5;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar12);
    pTVar9 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar10 = pTVar11;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) goto LAB_14282cab6;
  }
LAB_14282ca65:
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar12) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  pTVar11 = pTVar10;
  if ((pTVar9 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
LAB_14282cab6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar7 = (undefined8 *)(**(code **)(pTVar9->_padding_ + 0xe8))(pTVar9,local_78);
  cVar4 = (**(code **)(*(longlong *)*puVar7 + 0x1a0))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  lVar8 = (**(code **)(pTVar9->_padding_ + 0x48))(pTVar9,this);
  if (lVar8 == 0) {
    cVar4 = (**(code **)(pTVar9->_padding_ + 200))(pTVar9);
    if ((cVar4 == '\0') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar12)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
  }
  else if (((cVar4 != '\0') && (cVar4 = (**(code **)pTVar9->_padding_)(pTVar9), cVar4 != '\0')) &&
          (cVar4 = (**(code **)(pTVar9->_padding_ + 8))(pTVar9,lVar8), cVar4 != '\0')) {
    EVar1 = (this->Style->SelectorFocusedBrush).TintColor.ColorUseRule;
    this_00 = &(this->Style->SelectorFocusedBrush).TintColor;
    if (EVar1 != UseColor_Specified) {
      if (EVar1 == UseColor_ColorTable) {
        this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
      }
      else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
        this_00 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        this_00 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_68 = (param_2->AbsolutePosition).field0_0x0;
    local_88._s_0.R =
         (this_00->SpecifiedColor).field0_0x0._s_0.R *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_54 = param_2->Size;
    local_88._s_0.G =
         *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 4) *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_88._s_0.B =
         *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 8) *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_34 = param_2->bHasRenderTransform * '\x02' | local_34 & 0xfc;
    local_88._s_0.A =
         *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 0xc) *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_60 = param_2->Scale;
    local_4c = (param_2->AccumulatedRenderTransform).M.M[0];
    afStack_44 = (param_2->AccumulatedRenderTransform).M.M[1];
    local_3c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
    local_5c = 0;
    FSlateDrawElement::MakeBox
              (param_4,param_5,(FPaintGeometry *)&local_68._s_0,&this->Style->SelectorFocusedBrush,
               None,(FLinearColor *)&local_88._s_0);
    param_5 = param_5 + 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return param_5;
}

// Private_OnExpanderArrowShiftClicked @ 14282e7e0

void __thiscall
STableRow<TSharedPtr<SWidget,1>_>::Private_OnExpanderArrowShiftClicked
          (STableRow<TSharedPtr<SWidget,1>_> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  undefined8 local_18;
  longlong local_10;
  
  pTVar8 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14282e825;
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar9 = aVar2 == aVar4;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar9);
    pTVar6 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar7 = pTVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_14282e876;
  }
LAB_14282e825:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  if (bVar9) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar8 = pTVar7;
  if ((pTVar6 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14282e876:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  cVar3 = (**(code **)(pTVar6->_padding_ + 0x68))(pTVar6,this->IndexInList);
  if (cVar3 != '\0') {
    puVar5 = (undefined8 *)(**(code **)(pTVar6->_padding_ + 0x48))(pTVar6,this);
    if (puVar5 == (undefined8 *)0x0) {
      cVar3 = (**(code **)(pTVar6->_padding_ + 200))(pTVar6);
      if ((cVar3 == '\0') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("OwnerTable->Private_IsPendingRefresh()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                             ,0x4cf,
                             L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                            ), bVar9)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      cVar3 = (**(code **)(pTVar6->_padding_ + 0x60))(pTVar6,puVar5);
      local_10 = puVar5[1];
      local_18 = *puVar5;
      pcVar1 = *(code **)(pTVar6->_padding_ + 0x58);
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      (*pcVar1)(pTVar6,&local_18,cVar3 == '\0');
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// ResetRow @ 142832eb0

void __thiscall STableRow<TSharedPtr<SWidget,1>_>::ResetRow(STableRow<TSharedPtr<SWidget,1>_> *this)

{
  return;
}

// SetContent @ 142834df0

void __thiscall
STableRow<TSharedPtr<SWidget,1>_>::SetContent
          (STableRow<TSharedPtr<SWidget,1>_> *this,TSharedRef<SWidget,1> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  SWidget *pSVar4;
  SWidget *pSVar5;
  FSlotBase *this_00;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<SWidget,1> local_18;
  
  this->InnerContentSlot = (FSlotBase *)param_1->Object;
  pSVar4 = (SWidget *)(param_1->SharedReferenceCount).ReferenceController;
  if (pSVar4 != (this->Content).Object) {
    if (pSVar4 != (SWidget *)0x0) {
      LOCK();
      puVar1 = (undefined1 *)((longlong)&pSVar4->_padding_ + 4);
      *(int *)puVar1 = *(int *)puVar1 + 1;
      UNLOCK();
    }
    pSVar5 = (this->Content).Object;
    if (pSVar5 != (SWidget *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)&pSVar5->_padding_ + 4);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(pSVar5->_padding_ + 8))(pSVar5,1);
      }
    }
    (this->Content).Object = pSVar4;
  }
  this_00 = *(FSlotBase **)&(this->OnDrop_Handler).field_0x10;
  if (this_00 == (FSlotBase *)0x0) {
    local_18.Object = param_1->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SBorder::SetContent((SBorder *)this,&local_18);
  }
  else {
    FSlotBase::DetatchParentFromContent(this_00);
    pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
    pSVar4 = param_1->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (this_00->Widget).SharedReferenceCount.ReferenceController;
    (this_00->Widget).Object = pSVar4;
    (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    FSlotBase::AfterContentOrOwnerAssigned(this_00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIndexInList @ 142834fd0

void __thiscall
STableRow<TSharedPtr<SWidget,1>_>::SetIndexInList
          (STableRow<TSharedPtr<SWidget,1>_> *this,int param_1)

{
  this->IndexInList = param_1;
  return;
}

// SetRowContent @ 142835880

void __thiscall
STableRow<TSharedPtr<SWidget,1>_>::SetRowContent
          (STableRow<TSharedPtr<SWidget,1>_> *this,TSharedRef<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<SWidget,1> local_18;
  
  (this->Content).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->Content).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->Content).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->Content).WeakReferenceCount.ReferenceController = pTVar3;
  }
  this->InnerContentSlot = (FSlotBase *)0x0;
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SBorder::SetContent((SBorder *)&this->_padding_,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ToggleExpansion @ 1428377e0

void __thiscall
STableRow<TSharedPtr<SWidget,1>_>::ToggleExpansion(STableRow<TSharedPtr<SWidget,1>_> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  undefined8 local_18;
  longlong local_10;
  
  pTVar8 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142837825;
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar9 = aVar2 == aVar4;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar9);
    pTVar6 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar7 = pTVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_142837876;
  }
LAB_142837825:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  if (bVar9) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar8 = pTVar7;
  if ((pTVar6 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_142837876:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  cVar3 = (**(code **)(pTVar6->_padding_ + 0x68))(pTVar6,this->IndexInList);
  if (cVar3 != '\0') {
    puVar5 = (undefined8 *)(**(code **)(pTVar6->_padding_ + 0x48))(pTVar6,this);
    if (puVar5 == (undefined8 *)0x0) {
      cVar3 = (**(code **)(pTVar6->_padding_ + 200))(pTVar6);
      if ((cVar3 == '\0') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("OwnerTable->Private_IsPendingRefresh()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                             ,0x4cf,
                             L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                            ), bVar9)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      cVar3 = (**(code **)(pTVar6->_padding_ + 0x60))(pTVar6,puVar5);
      local_10 = puVar5[1];
      local_18 = *puVar5;
      pcVar1 = *(code **)(pTVar6->_padding_ + 0x50);
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      (*pcVar1)(pTVar6,&local_18,cVar3 == '\0');
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// STableRow<TSharedPtr<FString,1>_> @ 1428b0f50

STableRow<TSharedPtr<FString,1>_> * __thiscall
STableRow<TSharedPtr<FString,1>_>::STableRow<TSharedPtr<FString,1>_>
          (STableRow<TSharedPtr<FString,1>_> *this)

{
  byte *pbVar1;
  
  this->_padding_ = (longlong)&___7ITableRow__6B_;
  SBorder::SBorder((SBorder *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__ITableRow__;
  this->_padding_ = (longlong)&_vftable__for__SBorder__;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 4;
  (this->OwnerTablePtr).Object = (ITypedTableView<TSharedPtr<FString,1>_> *)0x0;
  (this->OwnerTablePtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->IndexInList = 0;
  this->SignalSelectionMode = Deferred;
  (this->ExpanderArrowWidget).Object = (SExpanderArrow *)0x0;
  (this->ExpanderArrowWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnCanAcceptDrop = 0;
  *(undefined8 *)&(this->OnCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->OnCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->OnAcceptDrop = 0;
  *(undefined8 *)&(this->OnAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->OnAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->PaintDropIndicatorEvent = 0;
  *(undefined8 *)&(this->PaintDropIndicatorEvent).field_0x8 = 0;
  *(undefined4 *)&(this->PaintDropIndicatorEvent).field_0x10 = 0;
  (this->ItemDropZone).bIsSet = false;
  *(undefined8 *)&this->OnDragDetected_Handler = 0;
  *(undefined8 *)&(this->OnDragDetected_Handler).field_0x8 = 0;
  *(undefined4 *)&(this->OnDragDetected_Handler).field_0x10 = 0;
  *(undefined8 *)&this->OnDragEnter_Handler = 0;
  *(undefined8 *)&(this->OnDragEnter_Handler).field_0x8 = 0;
  *(undefined4 *)&(this->OnDragEnter_Handler).field_0x10 = 0;
  *(undefined8 *)&this->OnDragLeave_Handler = 0;
  *(undefined8 *)&(this->OnDragLeave_Handler).field_0x8 = 0;
  *(undefined4 *)&(this->OnDragLeave_Handler).field_0x10 = 0;
  *(undefined8 *)&this->OnDrop_Handler = 0;
  *(undefined8 *)&(this->OnDrop_Handler).field_0x8 = 0;
  *(undefined4 *)&(this->OnDrop_Handler).field_0x10 = 0;
  (this->Content).Object = (SWidget *)0x0;
  (this->Content).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bShowSelection = true;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 2;
  return this;
}

// ~STableRow<TSharedPtr<FString,1>_> @ 1428bf120

void __thiscall
STableRow<TSharedPtr<FString,1>_>::~STableRow<TSharedPtr<FString,1>_>
          (STableRow<TSharedPtr<FString,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  
  pTVar3 = (this->Content).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrop_Handler);
  pvVar4 = *(void **)&(this->OnDrop_Handler).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDrop_Handler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDragLeave_Handler);
  pvVar4 = *(void **)&(this->OnDragLeave_Handler).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragLeave_Handler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDragEnter_Handler);
  pvVar4 = *(void **)&(this->OnDragEnter_Handler).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragEnter_Handler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDragDetected_Handler);
  pvVar4 = *(void **)&(this->OnDragDetected_Handler).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragDetected_Handler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PaintDropIndicatorEvent);
  pvVar4 = *(void **)&(this->PaintDropIndicatorEvent).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PaintDropIndicatorEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAcceptDrop);
  pvVar4 = *(void **)&(this->OnAcceptDrop).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCanAcceptDrop);
  pvVar4 = *(void **)&(this->OnCanAcceptDrop).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCanAcceptDrop);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ExpanderArrowWidget).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7SBorder__6B_;
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->_padding_);
  return;
}

// operator() @ 1428c6d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`STableRow<TSharedPtr<FString,1>_>::OnDrop'::__l2::<lambda_1>::operator()
          (void *this,FReply *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  int iVar8;
  FReply *pFVar9;
  longlong *plVar10;
  TTransform2<float> *pTVar11;
  TOptional<EItemDropZone> TVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc;
  FReply *local_1b8;
  undefined1 local_1b0 [88];
  FReadAccessScope local_158;
  FReply local_138;
  TTransform2<float> local_78;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar1 = *(longlong *)this;
  local_1b8 = __return_storage_ptr__;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x340),
             (FReadAccessScope *)(local_1b0 + 0x40));
  if (((*(int *)(lVar1 + 0x350) == 0) || (*(longlong **)(lVar1 + 0x348) == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(**(longlong **)(lVar1 + 0x348) + 0x38))(), cVar6 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_1b0 + 0x40));
    goto LAB_1428c717c;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_1b0 + 0x40));
  lVar1 = *(longlong *)this;
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  pTVar14 = *(TReferenceControllerBase<1> **)(lVar1 + 0x2f0);
  pTVar13 = pTVar14;
  pTVar15 = pTVar16;
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
LAB_1428c6e45:
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar4)();
      return pFVar9;
    }
    pTVar14 = pTVar13;
    if ((pTVar15 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar17)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar4)();
      return pFVar9;
    }
  }
  else {
    aVar5 = pTVar14->SharedReferenceCount;
    do {
      pTVar13 = pTVar16;
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1428c6e45;
      LOCK();
      aVar7 = pTVar14->SharedReferenceCount;
      bVar17 = aVar5 == aVar7;
      if (bVar17) {
        pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar17);
    pTVar15 = *(TReferenceControllerBase<1> **)(lVar1 + 0x2e8);
    pTVar13 = pTVar14;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) goto LAB_1428c6e45;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lVar1 = *(longlong *)this;
  if ((local_1b0 + 0x38 != (undefined1 *)(lVar1 + 0x370)) && (*(char *)(lVar1 + 0x374) != '\0')) {
    *(undefined1 *)(lVar1 + 0x374) = 0;
  }
  plVar10 = (longlong *)(**(code **)(pTVar15->_padding_ + 0x48))(pTVar15);
  if (plVar10 == (longlong *)0x0) {
    cVar6 = (**(code **)(pTVar15->_padding_ + 200))(pTVar15);
    if ((cVar6 == '\0') &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar17)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar4)();
      return pFVar9;
    }
  }
  else {
    pTVar11 = Inverse<TTransform2<float>_>
                        (&local_78,(TTransform2<float> *)(*(longlong *)((longlong)this + 8) + 0x1c))
    ;
    uVar2 = *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x28);
    local_1c8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    local_1c8._0_4_ = (float)uVar2;
    fVar20 = local_1c8._4_4_ * (pTVar11->M).M[1][0];
    fVar18 = (float)local_1c8 * (pTVar11->M).M[0][0];
    fVar19 = (pTVar11->Trans).field0_0x0._s_0.X;
    fVar21 = (float)local_1c8 * (pTVar11->M).M[0][1] + local_1c8._4_4_ * (pTVar11->M).M[1][1] +
             (pTVar11->Trans).field0_0x0._s_0.Y;
    local_1c8 = uVar2;
    iVar8 = (**(code **)(pTVar15->_padding_ + 0xc0))(pTVar15);
    uVar2 = **(undefined8 **)((longlong)this + 8);
    if (iVar8 == 0) {
      local_1c8._0_4_ = (float)uVar2;
      fVar21 = fVar20 + fVar18 + fVar19;
    }
    else {
      local_1c8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      local_1c8._0_4_ = local_1c8._4_4_;
    }
    fVar19 = (float)local_1c8 * __real_3e800000;
    if (__real_41200000 <= (float)local_1c8 * __real_3e800000) {
      fVar19 = __real_41200000;
    }
    if (fVar19 <= __real_40400000) {
      fVar19 = __real_40400000;
    }
    pTVar13 = pTVar16;
    if (fVar19 <= fVar21) {
      pTVar13 = (TReferenceControllerBase<1> *)(ulonglong)(((float)local_1c8 - fVar19 < fVar21) + 1)
      ;
    }
    local_1c8 = uVar2;
    bVar17 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                       ((TDelegateBase<FNotThreadSafeDelegateMode> *)(*(longlong *)this + 0x328));
    if (bVar17) {
      local_1b0._8_8_ = *plVar10;
      lVar1 = *(longlong *)this;
      local_1b0._16_8_ = plVar10[1];
      if (local_1b0._16_8_ != 0) {
        LOCK();
        *(int *)(local_1b0._16_8_ + 8) = *(int *)(local_1b0._16_8_ + 8) + 1;
        UNLOCK();
      }
      local_1d8 = local_1b0 + 8;
      TVar12 = TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
               ::Execute((void *)(lVar1 + 0x328),(FDragDropEvent *)local_1b0,
                         (EItemDropZone)*(undefined8 *)((longlong)this + 0x10),
                         (TSharedPtr<FString,1> *)pTVar13);
    }
    else {
      local_1c0 = (int)pTVar13;
      TVar12 = (TOptional<EItemDropZone>)&local_1c0;
      local_1bc = 1;
    }
    __return_storage_ptr__ = local_1b8;
    if (*(char *)((longlong)TVar12 + 4) != '\0') {
      lVar1 = *(longlong *)this;
      lVar3 = plVar10[1];
      local_1c8 = CONCAT44(local_1c8._4_4_,*(undefined4 *)TVar12);
      local_1b0._8_8_ = *plVar10;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      local_1b0._0_8_ = *(longlong *)((longlong)this + 0x10);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x340),
                 &local_158);
      if (*(int *)(lVar1 + 0x350) != 0) {
        pTVar16 = *(TReferenceControllerBase<1> **)(lVar1 + 0x348);
      }
      local_1d8 = local_1b0 + 0x18;
      iVar8 = (int)(float)local_1c8;
      local_1b0._24_8_ = local_1b0._8_8_;
      local_1b0._32_8_ = lVar3;
      (**(code **)(pTVar16->_padding_ + 0x60))
                (pTVar16,&local_138,local_1b0._0_8_,local_1c8 & 0xffffffff);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_158);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (((char)local_138._padding_ != '\0') && (iVar8 == 1)) {
        pcVar4 = *(code **)(pTVar15->_padding_ + 0x50);
        local_1b0._40_8_ = *plVar10;
        local_1b0._48_8_ = plVar10[1];
        if (local_1b0._48_8_ != 0) {
          LOCK();
          *(int *)(local_1b0._48_8_ + 8) = *(int *)(local_1b0._48_8_ + 8) + 1;
          UNLOCK();
        }
        (*pcVar4)(pTVar15,local_1b0 + 0x28,1);
      }
      FReply::FReply(local_1b8,&local_138);
      FReply::~FReply(&local_138);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      return local_1b8;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
LAB_1428c717c:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// operator() @ 1428c71b0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
`STableRow<TSharedPtr<FString,1>_>::OnDragOver'::__l5::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  char cVar5;
  atomic<int> aVar6;
  TOptional<EItemDropZone> TVar7;
  longlong lVar8;
  TOptional<EItemDropZone> in_RDX;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  lVar8 = *(longlong *)((longlong)this + 0x98);
  pTVar11 = *(TReferenceControllerBase<1> **)(lVar8 + 0x2f0);
  pTVar10 = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar11->SharedReferenceCount;
    do {
      pTVar10 = pTVar9;
      if (aVar4 == (atomic<int>)0x0) goto LAB_1428c7205;
      LOCK();
      aVar6 = pTVar11->SharedReferenceCount;
      bVar12 = aVar4 == aVar6;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar12);
    pTVar9 = *(TReferenceControllerBase<1> **)(lVar8 + 0x2e8);
    pTVar10 = pTVar11;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) goto LAB_1428c7256;
  }
LAB_1428c7205:
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar12) {
    pcVar3 = (code *)swi(3);
    TVar7 = (TOptional<EItemDropZone>)(*pcVar3)();
    return TVar7;
  }
  pTVar11 = pTVar10;
  if ((pTVar9 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    TVar7 = (TOptional<EItemDropZone>)(*pcVar3)();
    return TVar7;
  }
LAB_1428c7256:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lVar8 = (**(code **)(pTVar9->_padding_ + 0x48))(pTVar9,*(undefined8 *)((longlong)this + 0x98));
  if (lVar8 == 0) {
    cVar5 = (**(code **)(pTVar9->_padding_ + 200))(pTVar9);
    if ((cVar5 == '\0') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar12)) {
      pcVar3 = (code *)swi(3);
      TVar7 = (TOptional<EItemDropZone>)(*pcVar3)();
      return TVar7;
    }
    *(undefined1 *)((longlong)in_RDX + 4) = 0;
  }
  else {
    lVar2 = *(longlong *)((longlong)this + 0x98);
    if (*(longlong *)(lVar8 + 8) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(lVar8 + 8) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
    ::Execute((void *)(lVar2 + 0x328),(FDragDropEvent *)in_RDX,(int)this + 8,
              (TSharedPtr<FString,1> *)(ulonglong)*(uint *)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return in_RDX;
}

// AsWidget @ 1428d79c0

TSharedRef<SWidget,1> * __thiscall
STableRow<TSharedPtr<FString,1>_>::AsWidget
          (STableRow<TSharedPtr<FString,1>_> *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<SWidget,1> *pTVar2;
  atomic<int> *paVar3;
  SWidget *pSVar4;
  SWidget *pSVar5;
  TSharedRef<SWidget,1> local_18;
  
  pTVar2 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_18);
  pSVar5 = (SWidget *)0x0;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  pSVar4 = (SWidget *)&pTVar2->Object[-1].StatID;
  if (pTVar2->Object == (SWidget *)0x0) {
    pSVar4 = pSVar5;
  }
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar3 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar3 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pSVar4 != (SWidget *)0x0) {
    pSVar5 = (SWidget *)&pSVar4->_padding_;
  }
  __return_storage_ptr__->Object = pSVar5;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// ConstructChildren @ 14290d3c0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
STableRow<TSharedPtr<FString,1>_>::ConstructChildren
          (STableRow<TSharedPtr<FString,1>_> *this,Type param_1,TAttribute<FMargin> *param_2,
          TSharedRef<SWidget,1> *param_3)

{
  atomic<int> *paVar1;
  longlong *this_00;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSlotBase *pFVar5;
  FMemScope FVar6;
  TReferenceControllerBase<1> *pTVar7;
  FArguments *pFVar8;
  FSlot *pFVar9;
  FSizeParam *pFVar10;
  FArguments *pFVar11;
  TSharedRef<SWidget,1> *pTVar12;
  TSharedRef<SExpanderArrow,1> *pTVar13;
  FSlot *pFVar14;
  FSlotArguments *pFVar15;
  FSlotArguments *pFVar16;
  TSharedRef<SHorizontalBox,1> *pTVar17;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *this_01;
  FSlot *local_res8;
  T0RequiredArgs local_res10 [8];
  FName local_res20;
  FDestructionSentinel local_7a8;
  undefined1 local_790;
  undefined1 local_78f;
  undefined1 local_788 [8];
  ForAnyElementType FStack_780;
  ulonglong local_778;
  undefined1 local_770 [24];
  undefined1 local_758 [8];
  ForAnyElementType FStack_750;
  int local_748;
  SExpanderArrow *local_740;
  FSharedReferencer<1> local_738;
  bool local_730;
  TSharedRef<STableRow<TSharedPtr<FString,1>_>,1> local_728;
  T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_&&> local_718;
  TAttribute<float> local_710;
  TSharedRef<SHorizontalBox,1> local_6f0;
  TSharedRef<SExpanderArrow,1> local_6e0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_6d0;
  undefined1 local_6b8 [16];
  undefined1 local_6a8 [32];
  undefined1 local_688 [24];
  undefined8 *local_670;
  SExpanderArrow *local_668;
  FSharedReferencer<1> local_660 [4];
  undefined1 local_640 [24];
  undefined4 local_628;
  undefined1 local_624;
  undefined4 local_620;
  undefined1 local_61c;
  FSlotArgumentsMixin local_618;
  undefined8 *local_588 [2];
  TReferenceControllerBase<1> *local_578;
  undefined1 local_558 [40];
  FSlotArgumentsMixin local_530;
  undefined1 local_4a0 [520];
  undefined1 local_298 [32];
  undefined1 local_278 [32];
  undefined1 local_258 [24];
  FArguments local_240;
  
  (this->Content).Object = param_3->Object;
  pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->Content).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->Content).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->Content).WeakReferenceCount.ReferenceController = pTVar3;
  }
  pFVar14 = (FSlot *)0x0;
  this->InnerContentSlot = (FSlotBase *)0x0;
  if (param_1 < Tree) {
    local_770._0_4_ = (param_2->Value).Left;
    local_770._4_4_ = (param_2->Value).Top;
    local_770._8_4_ = (param_2->Value).Right;
    local_770._12_4_ = (param_2->Value).Bottom;
    local_770[0x10] = param_2->bIsSet;
    local_748 = 0;
    local_758 = (undefined1  [8])0x0;
    FStack_750.Data = (FScriptContainerElement *)0x0;
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_758,
               &param_2->Getter);
    this_01 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                        ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                          *)&this->_padding_,(TAttribute<FMargin> *)local_770);
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               this_01,param_3);
    this->InnerContentSlot = (FSlotBase *)&this->_padding_;
  }
  else {
    pFVar8 = SHorizontalBox::FArguments::FArguments(&local_240);
    pFVar9 = ::operator_new(0x58);
    local_res8 = pFVar14;
    if (pFVar9 != (FSlot *)0x0) {
      *(undefined8 *)pFVar9 = 0;
      *(undefined8 *)&pFVar9->field_0x8 = 0;
      *(undefined8 *)&pFVar9->field_0x10 = 0;
      *(undefined8 *)&pFVar9->field_0x18 = 0;
      *(undefined8 *)&pFVar9->field_0x20 = 0;
      *(undefined8 *)&pFVar9->field_0x28 = 0;
      *(undefined8 *)&pFVar9->field_0x30 = 0;
      *(undefined8 *)&pFVar9->field_0x38 = 0;
      *(undefined8 *)&pFVar9->field_0x40 = 0;
      *(undefined8 *)&pFVar9->field_0x48 = 0;
      *(undefined8 *)&pFVar9->field_0x50 = 0;
      local_res8 = SHorizontalBox::FSlot::FSlot(pFVar9);
    }
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)&local_670,(FSlot *)&local_res8);
    pFVar10 = (FSizeParam *)FAuto::FAuto((FAuto *)local_6b8);
    TOptional<FSizeParam>::operator=(&local_618._SizeParam,pFVar10);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_688);
    if ((void *)local_688._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_688._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_688);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6a8);
    if ((void *)local_6a8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_6a8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_6a8);
    local_628 = 3;
    local_624 = 1;
    local_620 = 0;
    local_61c = 1;
    pFVar11 = SExpanderArrow::FArguments::FArguments((FArguments *)local_4a0);
    pFVar11->_StyleSet = this->ExpanderStyleSet;
    local_790 = this->bShowWires;
    local_78f = 1;
    local_778 = 0;
    local_788 = (undefined1  [8])0x0;
    FStack_780.Data = (FScriptContainerElement *)0x0;
    (pFVar11->_ShouldDrawWires).Value = (bool)local_790;
    (pFVar11->_ShouldDrawWires).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_ShouldDrawWires).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_788);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_788,
               (FWriteAccessScope *)&local_740);
    if (((int)local_778 != 0) && (FStack_780.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_780.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_780,0,0,0x10);
      local_778 = local_778 & 0xffffffff00000000;
    }
    if (local_730 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_738.ReferenceController,
                 (FDestructionSentinel *)&local_740);
    }
    if (FStack_780.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_780.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_788);
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)&local_7a8);
    if (pTVar12->Object == (SWidget *)0x0) {
      local_728.Object = (STableRow<TSharedPtr<FString,1>_> *)0x0;
    }
    else {
      local_728.Object = (STableRow<TSharedPtr<FString,1>_> *)&pTVar12->Object[-1].StatID;
    }
    local_728.SharedReferenceCount.ReferenceController =
         (pTVar12->SharedReferenceCount).ReferenceController;
    if (local_728.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_728.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_728.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_7a8.Accessor);
    local_718.Arg0 = &local_728;
    FLLMScope::FLLMScope
              ((FLLMScope *)&local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,
               true);
    local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_7a8,&local_res20,true);
    TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_&&>_>
    ::
    TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_&&>_>
              ((TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_&&>_>
                *)&local_740,"SExpanderArrow",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
               ,0xd2,&local_718);
    FMemScope::~FMemScope((FMemScope *)&local_7a8);
    FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
    if (local_738.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_738.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_738.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this->ExpanderArrowWidget).SharedReferenceCount.ReferenceController;
    (this->ExpanderArrowWidget).Object = local_740;
    (this->ExpanderArrowWidget).SharedReferenceCount.ReferenceController =
         local_738.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar13 = TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_&&>_>
              ::operator<<=((TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FString,1>_>,1>_&&>_>
                             *)&local_740,&local_6e0,pFVar11);
    pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
    local_668 = pTVar13->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_7a8._0_8_ = (FMemScope)0x0;
    local_7a8.Accessor = (FMRSWRecursiveAccessDetector *)pTVar3;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (local_660,(FSharedReferencer<1> *)&local_7a8.Accessor);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_7a8.Accessor);
    local_res20 = (FName)SHorizontalBox::FArguments::operator+(pFVar8,(FSlotArguments *)&local_670);
    pFVar9 = ::operator_new(0x58);
    if (pFVar9 != (FSlot *)0x0) {
      *(undefined8 *)pFVar9 = 0;
      *(undefined8 *)&pFVar9->field_0x8 = 0;
      *(undefined8 *)&pFVar9->field_0x10 = 0;
      *(undefined8 *)&pFVar9->field_0x18 = 0;
      *(undefined8 *)&pFVar9->field_0x20 = 0;
      *(undefined8 *)&pFVar9->field_0x28 = 0;
      *(undefined8 *)&pFVar9->field_0x30 = 0;
      *(undefined8 *)&pFVar9->field_0x38 = 0;
      *(undefined8 *)&pFVar9->field_0x40 = 0;
      *(undefined8 *)&pFVar9->field_0x48 = 0;
      *(undefined8 *)&pFVar9->field_0x50 = 0;
      pFVar14 = SHorizontalBox::FSlot::FSlot(pFVar9);
    }
    local_res8 = pFVar14;
    SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
              ((FSlotArguments *)local_588,(FSlot *)&local_res8);
    local_710.Value = 1.0;
    local_710.Getter._16_8_ = 0;
    local_710.bIsSet = true;
    local_710.Getter._0_8_ = 0;
    local_710.Getter._8_8_ = 0;
    pFVar15 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                        ((FSlotArguments *)local_588,&local_710);
    local_770._0_4_ = (param_2->Value).Left;
    local_770._4_4_ = (param_2->Value).Top;
    local_770._8_4_ = (param_2->Value).Right;
    local_770._12_4_ = (param_2->Value).Bottom;
    local_770[0x10] = param_2->bIsSet;
    pFVar5 = *(FSlotBase **)pFVar15;
    local_748 = 0;
    local_758 = (undefined1  [8])0x0;
    FStack_750.Data = (FScriptContainerElement *)0x0;
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_758,
               &param_2->Getter);
    *(undefined8 *)&pFVar15->field_0x18 = local_770._0_8_;
    *(undefined8 *)&pFVar15->field_0x20 = local_770._8_8_;
    pFVar15->field_0x28 = local_770[0x10];
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar15->field_0x30,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_758);
    pFVar16 = (FSlotArguments *)0x0;
    if (&pFVar15->field_0x18 != (undefined1 *)0x0) {
      pFVar16 = pFVar15;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_758,
               (FWriteAccessScope *)&local_7a8);
    if ((local_748 != 0) && (FStack_750.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_750.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_750,0,0,0x10);
      local_748 = 0;
    }
    if (local_7a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7a8.Accessor,&local_7a8);
    }
    if (FStack_750.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_750.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_758);
    pFVar16 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)pFVar16,param_3);
    pFVar8 = SHorizontalBox::FArguments::operator+((FArguments *)local_res20,pFVar16);
    FLLMScope::FLLMScope
              ((FLLMScope *)&local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,
               true);
    local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_7a8,&local_res20,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_6d0,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
               ,0xcb,local_res10);
    FMemScope::~FMemScope((FMemScope *)&local_7a8);
    FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
    pTVar17 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_6d0,&local_6f0,pFVar8);
    this_00 = &this->_padding_;
    pTVar4 = (pTVar17->SharedReferenceCount).ReferenceController;
    FVar6 = (FMemScope)pTVar17->Object;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    }
    else {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)FVar6;
    this->_padding_ = (longlong)pTVar4;
    local_7a8._0_8_ = FVar6;
    local_7a8.Accessor = (FMRSWRecursiveAccessDetector *)pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6f0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6d0._Widget.SharedReferenceCount.ReferenceController);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_530);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_558);
    if ((void *)local_558._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_558._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_558);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_578);
    if (local_588[0] != (undefined8 *)0x0) {
      (**(code **)*local_588[0])(local_588[0],1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6e0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_738.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_728.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_258);
    if ((void *)local_258._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_258._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_258);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_278);
    if ((void *)local_278._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_278._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_278);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_298);
    if ((void *)local_298._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_298._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_298);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_4a0);
    TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_618);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_640);
    if ((void *)local_640._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_640._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_640);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_660[0].ReferenceController);
    if (local_670 != (undefined8 *)0x0) {
      (**(code **)*local_670)(local_670,1);
    }
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_240._Slots.AllocatorInstance.Data,local_240._Slots.ArrayNum);
    if ((FSlotArguments *)local_240._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_240._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_240);
    this->InnerContentSlot = pFVar5;
  }
  return;
}

// ConstructInternal @ 14290f1e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
STableRow<TSharedPtr<FString,1>_>::ConstructInternal
          (STableRow<TSharedPtr<FString,1>_> *this,FArguments *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  STableViewBase *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  TSharedRef<SWidget_const_,1> *pTVar11;
  ulong64 uVar12;
  ITypedTableView<TSharedPtr<FString,1>_> *pIVar13;
  ITypedTableView<TSharedPtr<FString,1>_> *pIVar14;
  TReferenceControllerBase<1> *pTVar15;
  undefined1 local_1f8 [8];
  ForAnyElementType FStack_1f0;
  int local_1e8;
  undefined1 local_1e0 [8];
  ForAnyElementType local_1d8;
  int local_1d0;
  undefined1 local_1c8 [8];
  ForAnyElementType local_1c0;
  int local_1b8;
  undefined1 local_1b0 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a0;
  FDelegateAllocation FStack_198;
  FLinearColor_u_0 local_188;
  undefined1 local_178;
  undefined1 local_174;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_170;
  FDelegateAllocation FStack_168;
  TSharedRef<SWidget_const_,1> local_158;
  FDestructionSentinel local_148;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  FDestructionSentinel local_b0;
  FDelegateAllocation *local_98;
  TSharedRef<SWidget_const_,1> local_90;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  pIVar14 = (ITypedTableView<TSharedPtr<FString,1>_> *)0x0;
  this->bProcessingSelectionTouch = false;
  if ((param_1->_Style == (FTableRowStyle *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InArgs._Style",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                         ,0x483,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->Style = param_1->_Style;
  if ((param_1->_ExpanderStyleSet == (ISlateStyle *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InArgs._ExpanderStyleSet",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                         ,0x486,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->ExpanderStyleSet = param_1->_ExpanderStyleSet;
  local_1a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_198.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1b0._0_8_ = (FSlateBrush *)0x0;
  local_1b0[8] = true;
  FStack_198.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1a0,(FWriteAccessScope *)&local_d0);
  local_b8 = &FStack_198;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,&FStack_198);
  pIVar13 = pIVar14;
  pTVar15 = (TReferenceControllerBase<1> *)param_2;
  if (puVar10 != (undefined8 *)0x0) {
    local_1f8 = (undefined1  [8])_vcall__152__flat______;
    FStack_1f0.Data =
         (FScriptContainerElement *)
         ((ulonglong)local_158.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_90);
    pTVar15 = (pTVar11->SharedReferenceCount).ReferenceController;
    pIVar13 = (ITypedTableView<TSharedPtr<FString,1>_> *)&pTVar11->Object[-1].StatID;
    if (pTVar11->Object == (SWidget *)0x0) {
      pIVar13 = pIVar14;
    }
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar12;
    *puVar10 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_VFString___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = pIVar13;
    puVar10[4] = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(undefined1 (*) [8])(puVar10 + 5) = local_1f8;
    puVar10[6] = FStack_1f0.Data;
    pIVar13 = (ITypedTableView<TSharedPtr<FString,1>_> *)0x7;
  }
  if (((ulonglong)pIVar13 & 4) != 0) {
    pIVar13 = (ITypedTableView<TSharedPtr<FString,1>_> *)(ulonglong)((uint)pIVar13 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (((ulonglong)pIVar13 & 2) != 0) {
    pIVar13 = (ITypedTableView<TSharedPtr<FString,1>_> *)(ulonglong)((uint)pIVar13 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (((ulonglong)pIVar13 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
  }
  bVar8 = false;
  bVar7 = false;
  bVar9 = false;
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateBrush_const_*,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)&this->_padding_,
           (TAttribute<FSlateBrush_const_*> *)local_1b0,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1a0,(FWriteAccessScope *)&local_148);
  if ((FStack_198.DelegateSize != 0) &&
     (FStack_198.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_198.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_198,0,0,0x10);
    FStack_198.DelegateSize = 0;
  }
  if (local_148.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
  }
  if (FStack_198.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_198.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a0.AccessDetector);
  local_188._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_188._8_8_ = _UNK_15090c6d8;
  local_178 = 0;
  local_174 = 1;
  local_170.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_168.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_168.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_170,(FWriteAccessScope *)&local_b0);
  local_98 = &FStack_168;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,&FStack_168);
  pTVar15 = (TReferenceControllerBase<1> *)param_2;
  if (puVar10 != (undefined8 *)0x0) {
    local_1f8 = (undefined1  [8])GetForegroundBasedOnSelection;
    FStack_1f0.Data =
         (FScriptContainerElement *)
         ((ulonglong)local_158.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_158);
    pTVar15 = (pTVar11->SharedReferenceCount).ReferenceController;
    pIVar13 = (ITypedTableView<TSharedPtr<FString,1>_> *)&pTVar11->Object[-1].StatID;
    if (pTVar11->Object == (SWidget *)0x0) {
      pIVar13 = pIVar14;
    }
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar7 = true;
    bVar9 = true;
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar12;
    *puVar10 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_VFString___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = pIVar13;
    puVar10[4] = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(undefined1 (*) [8])(puVar10 + 5) = local_1f8;
    puVar10[6] = FStack_1f0.Data;
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_158.SharedReferenceCount.ReferenceController._4_4_,
                        local_158.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)&this->_padding_,
           (TAttribute<FSlateColor> *)&local_188._s_0,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_170,(FWriteAccessScope *)&local_130);
  if ((FStack_168.DelegateSize != 0) &&
     (FStack_168.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_168.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_168,0,0,0x10);
    FStack_168.DelegateSize = 0;
  }
  if (local_130.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
  }
  if (FStack_168.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_168.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_170.AccessDetector);
  if (&param_1->_OnCanAcceptDrop != &this->OnCanAcceptDrop) {
    local_1f8 = (undefined1  [8])0x0;
    FStack_1f0.Data = (FScriptContainerElement *)0x0;
    local_1e8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnCanAcceptDrop,
               &local_80);
    if ((*(int *)&(param_1->_OnCanAcceptDrop).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnCanAcceptDrop).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_1f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_80);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCanAcceptDrop,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f8,
               (FWriteAccessScope *)&local_118);
    if ((local_1e8 != 0) && (FStack_1f0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1f0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f0,0,0,0x10);
      local_1e8 = 0;
    }
    if (local_118.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
    }
    if (FStack_1f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1f0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f8);
  }
  if (&param_1->_OnAcceptDrop != &this->OnAcceptDrop) {
    local_1e0 = (undefined1  [8])0x0;
    local_1d8.Data = (FScriptContainerElement *)0x0;
    local_1d0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnAcceptDrop,
               &local_68);
    if ((*(int *)&(param_1->_OnAcceptDrop).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnAcceptDrop).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_1e0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAcceptDrop,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e0,
               (FWriteAccessScope *)&local_100);
    if ((local_1d0 != 0) && (local_1d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1d8,0,0,0x10);
      local_1d0 = 0;
    }
    if (local_100.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
    }
    if (local_1d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1e0);
  }
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnDragDetected_Handler,&param_1->_OnDragDetected);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDragEnter_Handler,&param_1->_OnDragEnter);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDragLeave_Handler,&param_1->_OnDragLeave);
  if (&param_1->_OnDrop != &this->OnDrop_Handler) {
    local_1c8 = (undefined1  [8])0x0;
    local_1c0.Data = (FScriptContainerElement *)0x0;
    local_1b8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnDrop,&local_50
              );
    if ((*(int *)&(param_1->_OnDrop).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnDrop).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_1c8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrop_Handler,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
               (FWriteAccessScope *)&local_e8);
    if ((local_1b8 != 0) && (local_1c0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1c0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1c0,0,0,0x10);
      local_1b8 = 0;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    if (local_1c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1c8);
  }
  pSVar4 = param_2->Object;
  pTVar15 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 != (STableViewBase *)0x0) {
    pIVar14 = (ITypedTableView<TSharedPtr<FString,1>_> *)&pSVar4->field_0x588;
  }
  (this->OwnerTablePtr).Object = pIVar14;
  if (pTVar15 != (this->OwnerTablePtr).WeakReferenceCount.ReferenceController) {
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (this->OwnerTablePtr).WeakReferenceCount.ReferenceController = pTVar15;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  this->bShowSelection = param_1->_ShowSelection;
  this->SignalSelectionMode = param_1->_SignalSelectionMode;
  this->bShowWires = param_1->_ShowWires;
  this->bAllowPreselectedItemActivation = param_1->_bAllowPreselectedItemActivation;
  return;
}

// CreateAccessibleWidget @ 142911a30

/* WARNING: Type propagation algorithm not settling */

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
STableRow<TSharedPtr<FString,1>_>::CreateAccessibleWidget
          (STableRow<TSharedPtr<FString,1>_> *this,
          TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  SWidget *this_00;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedRef<FSlateAccessibleWidget,1> *pTVar6;
  SWidget *pSVar7;
  SWidget *pSVar8;
  TRawPtrProxy<FSlateAccessibleWidget> TVar9;
  TRawPtrProxy<FSlateAccessibleWidget> local_res10;
  TWeakPtr<SWidget,1> local_38;
  TSharedRef<SWidget,1> local_28;
  
  pSVar7 = (SWidget *)0x0;
  local_res10.Object = local_res10.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0x70);
  pSVar8 = pSVar7;
  TVar9.Object = local_res10.Object;
  if (this_00 != (SWidget *)0x0) {
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_28);
    TVar9.Object = (FSlateAccessibleWidget *)(pTVar5->SharedReferenceCount).ReferenceController;
    pSVar8 = (SWidget *)&pTVar5->Object[-1].StatID;
    if (pTVar5->Object == (SWidget *)0x0) {
      pSVar8 = pSVar7;
    }
    if (TVar9.Object != (FSlateAccessibleWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&(TVar9.Object)->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&(TVar9.Object)->_padding_ + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    if (pSVar8 != (SWidget *)0x0) {
      pSVar7 = (SWidget *)&pSVar8->_padding_;
    }
    local_38.Object = pSVar7;
    local_38.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)TVar9.Object;
    if (TVar9.Object == (FSlateAccessibleWidget *)0x0) {
      FSlateAccessibleWidget::FSlateAccessibleWidget
                ((FSlateAccessibleWidget *)this_00,&local_38,ListItem);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleTableRow::_vftable__for__FSlateAccessibleWidget__;
      (this_00->PersistentState).InitialClipState.TypedValue.ScissorRect.TypedValue.TopRight.
      field0_0x0 = (TVector2<float>_u_0)
                   &FSlateAccessibleTableRow::_vftable__for__IAccessibleTableRow__;
    }
    else {
      LOCK();
      ((atomic<int> *)&(TVar9.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar9.Object)->_padding_)[1] + 1);
      UNLOCK();
      LOCK();
      ((atomic<int> *)&(TVar9.Object)->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&(TVar9.Object)->_padding_)[1] + 1);
      UNLOCK();
      FSlateAccessibleWidget::FSlateAccessibleWidget
                ((FSlateAccessibleWidget *)this_00,&local_38,ListItem);
      this_00->_padding_ =
           (longlong)&FSlateAccessibleTableRow::_vftable__for__FSlateAccessibleWidget__;
      (this_00->PersistentState).InitialClipState.TypedValue.ScissorRect.TypedValue.TopRight.
      field0_0x0 = (TVector2<float>_u_0)
                   &FSlateAccessibleTableRow::_vftable__for__IAccessibleTableRow__;
      LOCK();
      paVar1 = (atomic<int> *)&(TVar9.Object)->_padding_ + 1;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((TVar9.Object)->_padding_ + 8))(TVar9.Object,1);
      }
    }
    if (((this_00->_padding_ == 0) || (this_00->_padding_ == 0)) ||
       (*(int *)(this_00->_padding_ + 8) < 1)) {
      local_res10.Object = (FSlateAccessibleWidget *)this_00;
      TSharedRef<FSlateAccessibleWidget,1>::
      TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
                (__return_storage_ptr__,&local_res10);
      goto LAB_142911b99;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InObject || !InObject->DoesSharedInstanceExist()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x7a5,L"Trying to share an already-shared object");
    pSVar7 = this_00;
    pSVar8 = (SWidget *)&DAT_00000001;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FSlateAccessibleWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  local_res10.Object = (FSlateAccessibleWidget *)pSVar7;
  TSharedRef<FSlateAccessibleWidget,1>::TSharedRef<FSlateAccessibleWidget,1><FSlateAccessibleWidget>
            (__return_storage_ptr__,&local_res10);
  if (pSVar8 == (SWidget *)0x0) {
    return __return_storage_ptr__;
  }
LAB_142911b99:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)TVar9.Object);
  return __return_storage_ptr__;
}

// DoesItemHaveChildren @ 142926210

int __thiscall
STableRow<TSharedPtr<FString,1>_>::DoesItemHaveChildren(STableRow<TSharedPtr<FString,1>_> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  byte bVar3;
  atomic<int> aVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  pTVar8 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142926251;
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar9 = aVar2 == aVar4;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar9);
    pTVar6 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar7 = pTVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_142926277;
  }
LAB_142926251:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar8 = pTVar7;
  if (bVar9) {
    pcVar1 = (code *)swi(3);
    iVar5 = (*pcVar1)();
    return iVar5;
  }
LAB_142926277:
  bVar3 = (**(code **)(pTVar6->_padding_ + 0x68))(pTVar6,this->IndexInList);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return (uint)bVar3;
}

// GetBorder @ 14293bdc0

FSlateBrush * __thiscall
STableRow<TSharedPtr<FString,1>_>::GetBorder(STableRow<TSharedPtr<FString,1>_> *this)

{
  FTableRowStyle *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  atomic<int> aVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  ISlateStyle *pIVar12;
  longlong lVar13;
  FSlateBrush *pFVar14;
  byte bVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  bool bVar19;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  pTVar17 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pFVar14 = (FSlateBrush *)0x0;
  pTVar16 = pTVar17;
  pTVar18 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
LAB_14293be06:
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar19) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FSlateBrush *)(*pcVar2)();
      return pFVar14;
    }
    pTVar17 = pTVar16;
    if ((pTVar18 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar19)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FSlateBrush *)(*pcVar2)();
      return pFVar14;
    }
  }
  else {
    aVar3 = pTVar17->SharedReferenceCount;
    do {
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
      pTVar18 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14293be06;
      LOCK();
      aVar8 = pTVar17->SharedReferenceCount;
      bVar19 = aVar3 == aVar8;
      if (bVar19) {
        pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar8;
    } while (!bVar19);
    pTVar18 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar16 = pTVar17;
    if (pTVar18 == (TReferenceControllerBase<1> *)0x0) goto LAB_14293be06;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar11 = (undefined8 *)(**(code **)(pTVar18->_padding_ + 0xe8))(pTVar18,local_38);
  cVar4 = (**(code **)(*(longlong *)*puVar11 + 0x1a0))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  cVar5 = (**(code **)(pTVar18->_padding_ + 0x68))(pTVar18,this->IndexInList);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<FString,1>_>::GetBorder(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<FString,1>_>::GetBorder(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<FString,1>_>::GetBorder(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<FString,1>_>::GetBorder(void)const___ptr64'
                    ::__l2::GenericWhiteBoxBrush,"GenericWhiteBox");
    _Init_thread_footer(&`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<FString,1>_>::GetBorder(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pIVar12 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar12 + 0x50))
            (pIVar12,`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<FString,1>_>::GetBorder(void)const___ptr64'
                     ::__l2::GenericWhiteBoxBrush,0,0);
  lVar13 = (**(code **)(pTVar18->_padding_ + 0x48))(pTVar18,this);
  if (lVar13 == 0) {
    cVar4 = (**(code **)(pTVar18->_padding_ + 200))(pTVar18);
    if ((cVar4 == '\0') &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar19)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FSlateBrush *)(*pcVar2)();
      return pFVar14;
    }
  }
  else {
    cVar6 = (**(code **)(pTVar18->_padding_ + 0x10))(pTVar18,lVar13);
    cVar7 = (**(code **)(pTVar18->_padding_ + 0x20))(pTVar18,lVar13);
    iVar9 = (**(code **)(this->_padding_ + 0x78))(this);
    bVar15 = ~(byte)this->IndexInList & 1;
    if (cVar6 == '\0') {
      if (cVar7 != '\0') {
        cVar5 = *(char *)((longlong)&this->_padding_ + 3);
        pFVar1 = this->Style;
        if (cVar4 == '\0') {
          if (cVar5 == '\0') {
            pFVar14 = &pFVar1->InactiveHighlightedBrush;
            goto LAB_14293c10c;
          }
        }
        else if (cVar5 == '\0') {
          pFVar14 = &pFVar1->ActiveHighlightedBrush;
          goto LAB_14293c10c;
        }
        lVar13 = 0x4f0;
        if (bVar15 == 0) {
          lVar13 = 0x650;
        }
        pFVar14 = (FSlateBrush *)((longlong)&pFVar1->_padding_ + lVar13);
        goto LAB_14293c10c;
      }
    }
    else if (this->bShowSelection != false) {
      cVar5 = *(char *)((longlong)&this->_padding_ + 3);
      pFVar1 = this->Style;
      if (cVar4 == '\0') {
        if (cVar5 == '\0') {
          pFVar14 = &pFVar1->InactiveBrush;
        }
        else {
          pFVar14 = &pFVar1->InactiveHoveredBrush;
        }
      }
      else {
        lVar13 = 0xc0;
        if (cVar5 == '\0') {
          lVar13 = 0x170;
        }
        pFVar14 = (FSlateBrush *)((longlong)&pFVar1->_padding_ + lVar13);
      }
      goto LAB_14293c10c;
    }
    if (((cVar5 == '\0') || (this->Style->bUseParentRowBrush == false)) ||
       (iVar10 = (**(code **)(this->_padding_ + 0x38))(this), iVar10 != 0)) {
      cVar4 = *(char *)((longlong)&this->_padding_ + 3);
      if (bVar15 == 0) {
        if ((cVar4 == '\0') || (iVar9 == 0)) {
          pFVar14 = &this->Style->OddRowBackgroundBrush;
        }
        else {
          pFVar14 = &this->Style->OddRowBackgroundHoveredBrush;
        }
      }
      else if ((cVar4 == '\0') || (iVar9 == 0)) {
        pFVar14 = &this->Style->EvenRowBackgroundBrush;
      }
      else {
        pFVar14 = &this->Style->EvenRowBackgroundHoveredBrush;
      }
    }
    else if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
      pFVar14 = &this->Style->ParentRowBackgroundBrush;
    }
    else {
      pFVar14 = &this->Style->ParentRowBackgroundHoveredBrush;
    }
  }
LAB_14293c10c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  return pFVar14;
}

// GetContent @ 14293eb10

TSharedPtr<SWidget,1> * __thiscall
STableRow<TSharedPtr<FString,1>_>::GetContent
          (STableRow<TSharedPtr<FString,1>_> *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  if ((((this->Content).Object == (SWidget *)0x0) ||
      (pTVar1 = (this->Content).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = (SWidget *)0x0;
    pTVar1 = (this->Content).WeakReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar1->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar3 = pTVar1->SharedReferenceCount;
        bVar4 = aVar2 == aVar3;
        if (bVar4) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar4);
    }
    if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = (this->Content).Object;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetForegroundBasedOnSelection @ 142940be0

FSlateColor * __thiscall
STableRow<TSharedPtr<FString,1>_>::GetForegroundBasedOnSelection
          (STableRow<TSharedPtr<FString,1>_> *this,FSlateColor *__return_storage_ptr__)

{
  float *pfVar1;
  TReferenceControllerBase<1> *pTVar2;
  FTableRowStyle *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  undefined4 uVar8;
  longlong lVar9;
  FSlateColor *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pTVar2 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  pTVar11 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar2->SharedReferenceCount;
    do {
      pTVar11 = pTVar12;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142940c21;
      LOCK();
      aVar7 = pTVar2->SharedReferenceCount;
      bVar13 = aVar5 == aVar7;
      if (bVar13) {
        pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar13);
    pTVar12 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar11 = pTVar2;
  }
LAB_142940c21:
  pFVar3 = this->Style;
  if ((this->bShowSelection != false) && (pTVar12 != (TReferenceControllerBase<1> *)0x0)) {
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    lVar9 = (**(code **)(pTVar12->_padding_ + 0x48))(pTVar12);
    if (lVar9 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      cVar6 = (**(code **)(pTVar12->_padding_ + 0x10))(pTVar12,lVar9);
      lVar9 = 0x7b0;
      if (cVar6 != '\0') {
        lVar9 = 0x7c4;
      }
      pfVar1 = (float *)((longlong)&pFVar3->_padding_ + lVar9);
      fVar14 = *pfVar1;
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      uVar8 = *(undefined4 *)((longlong)&(pFVar3->SelectorFocusedBrush)._padding_ + lVar9);
      goto LAB_142940ce2;
    }
    cVar6 = (**(code **)(pTVar12->_padding_ + 200))(pTVar12);
    if ((cVar6 == '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar13)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FSlateColor *)(*pcVar4)();
      return pFVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  fVar14 = (pFVar3->TextColor).SpecifiedColor.field0_0x0._s_0.R;
  fVar15 = (pFVar3->TextColor).SpecifiedColor.field0_0x0._s_0.G;
  fVar16 = (pFVar3->TextColor).SpecifiedColor.field0_0x0._s_0.B;
  fVar17 = (pFVar3->TextColor).SpecifiedColor.field0_0x0._s_0.A;
  uVar8._0_1_ = (pFVar3->TextColor).ColorUseRule;
  uVar8._1_1_ = (pFVar3->TextColor).ColorTableId;
  uVar8._2_2_ = *(undefined2 *)&(pFVar3->TextColor).field_0x12;
LAB_142940ce2:
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = fVar14;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = fVar15;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = fVar16;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar17;
  __return_storage_ptr__->ColorUseRule = (char)uVar8;
  __return_storage_ptr__->ColorTableId = (char)((uint)uVar8 >> 8);
  *(short *)&__return_storage_ptr__->field_0x12 = (short)((uint)uVar8 >> 0x10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// GetIndentLevel @ 142941370

int __thiscall
STableRow<TSharedPtr<FString,1>_>::GetIndentLevel(STableRow<TSharedPtr<FString,1>_> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = pTVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429413b1;
      LOCK();
      aVar3 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar5 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar6 = pTVar7;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429413d7;
  }
LAB_1429413b1:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar7 = pTVar6;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
LAB_1429413d7:
  iVar4 = (**(code **)(pTVar5->_padding_ + 0x88))(pTVar5,this->IndexInList);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return iVar4;
}

// GetIndexInList @ 142941420

int __thiscall
STableRow<TSharedPtr<FString,1>_>::GetIndexInList(STableRow<TSharedPtr<FString,1>_> *this)

{
  return this->IndexInList;
}

// GetRowSizeForColumn @ 142947670

TVector2<double> * __thiscall
STableRow<TSharedPtr<FString,1>_>::GetRowSizeForColumn
          (STableRow<TSharedPtr<FString,1>_> *this,TVector2<double> *__return_storage_ptr__,
          FName *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetSelectionMode @ 142948c10

Type __thiscall
STableRow<TSharedPtr<FString,1>_>::GetSelectionMode(STableRow<TSharedPtr<FString,1>_> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  Type TVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = pTVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142948c43;
      LOCK();
      aVar3 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar5 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar6 = pTVar7;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_142948c69;
  }
LAB_142948c43:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar7 = pTVar6;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    TVar4 = (*pcVar1)();
    return TVar4;
  }
LAB_142948c69:
  TVar4 = (**(code **)(pTVar5->_padding_ + 0xb8))(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return TVar4;
}

// GetWiresNeededByDepth @ 14294c760

TBitArray<FDefaultBitArrayAllocator> * __thiscall
STableRow<TSharedPtr<FString,1>_>::GetWiresNeededByDepth
          (STableRow<TSharedPtr<FString,1>_> *this,
          TBitArray<FDefaultBitArrayAllocator> *__return_storage_ptr__)

{
  int iVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  void *_Src;
  uint uVar8;
  ForElementType<unsigned_int> _Dst;
  TReferenceControllerBase<1> *pTVar9;
  ITypedTableView<TSharedPtr<FString,1>_> *pIVar10;
  bool bVar11;
  
  pTVar9 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pIVar10 = (ITypedTableView<TSharedPtr<FString,1>_> *)0x0;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14294c7a4;
      }
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar11 = aVar4 == aVar5;
      if (bVar11) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar11);
    pIVar10 = (this->OwnerTablePtr).Object;
    if (pIVar10 != (ITypedTableView<TSharedPtr<FString,1>_> *)0x0) goto LAB_14294c7ca;
  }
LAB_14294c7a4:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar11) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar3)();
    return pTVar7;
  }
LAB_14294c7ca:
  _Src = (void *)(**(code **)((longlong)*pIVar10 + 0x90))(pIVar10);
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<unsigned_int>)0x0;
  __return_storage_ptr__->NumBits = 0;
  __return_storage_ptr__->MaxBits = 0;
  uVar8 = *(int *)((longlong)_Src + 0x18) + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar8) {
    uVar6 = 0x80;
    if (0x80 < (int)uVar8) {
      uVar6 = uVar8;
    }
    __return_storage_ptr__->MaxBits = uVar6;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(__return_storage_ptr__,0);
  }
  iVar1 = *(int *)((longlong)_Src + 0x18);
  __return_storage_ptr__->NumBits = iVar1;
  if (iVar1 != 0) {
    if (*(void **)((longlong)_Src + 0x10) != (void *)0x0) {
      _Src = *(void **)((longlong)_Src + 0x10);
    }
    FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    _Dst = (ForElementType<unsigned_int>)__return_storage_ptr__;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      _Dst = FVar2;
    }
    memcpy((void *)_Dst,_Src,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return __return_storage_ptr__;
}

// InitializeRow @ 142951f60

void __thiscall
STableRow<TSharedPtr<FString,1>_>::InitializeRow(STableRow<TSharedPtr<FString,1>_> *this)

{
  return;
}

// IsItemExpanded @ 142954540

bool __thiscall
STableRow<TSharedPtr<FString,1>_>::IsItemExpanded(STableRow<TSharedPtr<FString,1>_> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  char cVar4;
  atomic<int> aVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  
  pTVar9 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142954585;
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar10 = aVar2 == aVar5;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar10);
    pTVar7 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar8 = pTVar9;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429545d6;
  }
LAB_142954585:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar10) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pTVar9 = pTVar8;
  if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_1429545d6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lVar6 = (**(code **)(pTVar7->_padding_ + 0x48))(pTVar7,this);
  if (lVar6 == 0) {
    cVar4 = (**(code **)(pTVar7->_padding_ + 200))(pTVar7);
    if ((cVar4 == '\0') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar10)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(pTVar7->_padding_ + 0x60))(pTVar7,lVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return (bool)uVar3;
}

// IsItemSelected @ 142954670

bool __thiscall
STableRow<TSharedPtr<FString,1>_>::IsItemSelected(STableRow<TSharedPtr<FString,1>_> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  char cVar4;
  atomic<int> aVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  
  pTVar9 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429546b5;
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar10 = aVar2 == aVar5;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar10);
    pTVar7 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar8 = pTVar9;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_142954706;
  }
LAB_1429546b5:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar10) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pTVar9 = pTVar8;
  if ((pTVar7 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_142954706:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lVar6 = (**(code **)(pTVar7->_padding_ + 0x48))(pTVar7,this);
  if (lVar6 == 0) {
    cVar4 = (**(code **)(pTVar7->_padding_ + 200))(pTVar7);
    if ((cVar4 == '\0') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar10)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(pTVar7->_padding_ + 0x10))(pTVar7,lVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return (bool)uVar3;
}

// IsLastChild @ 1429547a0

bool __thiscall
STableRow<TSharedPtr<FString,1>_>::IsLastChild(STableRow<TSharedPtr<FString,1>_> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = pTVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429547e1;
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar8);
    pTVar5 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar6 = pTVar7;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_142954807;
  }
LAB_1429547e1:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar7 = pTVar6;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_142954807:
  uVar3 = (**(code **)(pTVar5->_padding_ + 0x98))(pTVar5,this->IndexInList);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return (bool)uVar3;
}

// OnDragDetected @ 142962e80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<FString,1>_>::OnDragDetected
          (STableRow<TSharedPtr<FString,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  FReply *pFVar5;
  TSharedRef<SWidget,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  FReadAccessScope local_118;
  FReadAccessScope local_100;
  undefined1 local_e8 [16];
  FReply local_d8;
  
  if (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) != '\0') {
    *(undefined1 *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) = 0;
    FReply::FReply(&local_d8,true);
    pTVar8 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
    pTVar7 = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar8->SharedReferenceCount;
      do {
        pTVar7 = pTVar10;
        if (aVar2 == (atomic<int>)0x0) goto LAB_142962ef1;
        LOCK();
        aVar4 = pTVar8->SharedReferenceCount;
        bVar11 = aVar2 == aVar4;
        if (bVar11) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar11);
      pTVar10 = (TReferenceControllerBase<1> *)this->_padding_;
      pTVar7 = pTVar8;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) goto LAB_142962f17;
    }
LAB_142962ef1:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pTVar8 = pTVar7;
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar1)();
      return pFVar5;
    }
LAB_142962f17:
    pTVar6 = (TSharedRef<SWidget,1> *)(**(code **)(pTVar10->_padding_ + 0xe8))(pTVar10,local_e8);
    pFVar5 = FReply::CaptureMouse(&local_d8,pTVar6);
    FReply::FReply(__return_storage_ptr__,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    FReply::~FReply(&local_d8);
    return __return_storage_ptr__;
  }
  bVar11 = SWidget::HasMouseCapture((SWidget *)this);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (((!bVar11) ||
      (*(undefined1 *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 1) = 1,
      *(char *)&(this->Content).WeakReferenceCount.ReferenceController == '\0')) ||
     (this->IndexInList != 0)) goto LAB_142963009;
  pTVar10 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar9 = pTVar10;
  pTVar7 = pTVar8;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_142962fc5:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pTVar10 = pTVar9;
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar1)();
      return pFVar5;
    }
  }
  else {
    aVar2 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar8;
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142962fc5;
      LOCK();
      aVar4 = pTVar10->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    pTVar7 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar9 = pTVar10;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_142962fc5;
  }
  (**(code **)(pTVar7->_padding_ + 0x40))(pTVar7,2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_142963009:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ItemDropZone,
             &local_118);
  if (((*(int *)&(this->OnDragDetected_Handler).field_0x8 != 0) &&
      (*(longlong **)&this->OnDragDetected_Handler != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)&this->OnDragDetected_Handler + 0x38))(), cVar3 != '\0'))
  {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_118);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ItemDropZone,
               &local_100);
    if (*(int *)&(this->OnDragDetected_Handler).field_0x8 != 0) {
      pTVar8 = *(TReferenceControllerBase<1> **)&this->OnDragDetected_Handler;
    }
    (**(code **)(pTVar8->_padding_ + 0x60))(pTVar8,__return_storage_ptr__,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_100);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_118);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnDragEnter @ 1429630d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STableRow<TSharedPtr<FString,1>_>::OnDragEnter
          (STableRow<TSharedPtr<FString,1>_> *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  undefined1 *this_00;
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  this_00 = &(this->OnDragDetected_Handler).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  if ((*(int *)&(this->OnDragEnter_Handler).field_0x8 != 0) &&
     (*(longlong **)&this->OnDragEnter_Handler != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)&this->OnDragEnter_Handler + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
      if (*(int *)&(this->OnDragEnter_Handler).field_0x8 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&this->OnDragEnter_Handler;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnDragLeave @ 142963160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STableRow<TSharedPtr<FString,1>_>::OnDragLeave
          (STableRow<TSharedPtr<FString,1>_> *this,FDragDropEvent *param_1)

{
  undefined1 *this_00;
  char cVar1;
  longlong *plVar2;
  undefined1 local_28 [8];
  FReadAccessScope local_20;
  
  if ((local_28 != &(this->PaintDropIndicatorEvent).field_0x10) &&
     ((this->PaintDropIndicatorEvent).field_0x14 != '\0')) {
    (this->PaintDropIndicatorEvent).field_0x14 = 0;
  }
  this_00 = &(this->OnDragEnter_Handler).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_20);
  if ((*(int *)&(this->OnDragLeave_Handler).field_0x8 != 0) &&
     (*(longlong **)&this->OnDragLeave_Handler != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)&this->OnDragLeave_Handler + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_20);
      if (*(int *)&(this->OnDragLeave_Handler).field_0x8 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&this->OnDragLeave_Handler;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  return;
}

// OnDragOver @ 142963200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<FString,1>_>::OnDragOver
          (STableRow<TSharedPtr<FString,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FDragDropEvent *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FDeprecateSlateVector2D FVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  int iVar8;
  FReply *pFVar9;
  TTransform2<float> *pTVar10;
  TOptional<EItemDropZone> TVar11;
  int iVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  int local_140 [2];
  FPointerEvent local_138;
  FDragDropOperation *local_b8;
  TReferenceControllerBase<1> *local_b0;
  bool *local_a8;
  FReadAccessScope local_98;
  TTransform2<float> local_80;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_168;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->ExpanderArrowWidget).SharedReferenceCount,&local_98);
  if (((*(int *)&(this->OnCanAcceptDrop).field_0x8 == 0) ||
      (*(longlong **)&this->OnCanAcceptDrop == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(**(longlong **)&this->OnCanAcceptDrop + 0x38))(), cVar6 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
    FReply::FReply(__return_storage_ptr__,false);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_98);
  pTVar14 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  iVar12 = 0;
  pTVar13 = pTVar14;
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar14->SharedReferenceCount;
    do {
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1429632c5;
      LOCK();
      aVar7 = pTVar14->SharedReferenceCount;
      bVar16 = aVar5 == aVar7;
      if (bVar16) {
        pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar16);
    pTVar15 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar13 = pTVar14;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) goto LAB_142963316;
  }
LAB_1429632c5:
  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar16) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FReply *)(*pcVar4)();
    return pFVar9;
  }
  pTVar14 = pTVar13;
  if ((pTVar15 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar16)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FReply *)(*pcVar4)();
    return pFVar9;
  }
LAB_142963316:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar10 = Inverse<TTransform2<float>_>(&local_80,&param_1->AccumulatedRenderTransform);
  lVar2 = param_2->_padding_;
  local_148._4_4_ = (float)((ulonglong)lVar2 >> 0x20);
  local_148._0_4_ = (float)lVar2;
  fVar19 = local_148._4_4_ * (pTVar10->M).M[1][0];
  fVar17 = (float)local_148 * (pTVar10->M).M[0][0];
  fVar18 = (pTVar10->Trans).field0_0x0._s_0.X;
  fVar20 = (float)local_148 * (pTVar10->M).M[0][1] + local_148._4_4_ * (pTVar10->M).M[1][1] +
           (pTVar10->Trans).field0_0x0._s_0.Y;
  local_148 = (FDeprecateSlateVector2D)lVar2;
  iVar8 = (**(code **)(pTVar15->_padding_ + 0xc0))(pTVar15);
  FVar3 = param_1->Size;
  if (iVar8 == 0) {
    local_148._0_4_ = FVar3._0_4_;
    fVar20 = fVar19 + fVar17 + fVar18;
  }
  else {
    local_148._4_4_ = FVar3._4_4_;
    local_148._0_4_ = local_148._4_4_;
  }
  fVar18 = (float)local_148 * __real_3e800000;
  if (__real_41200000 <= (float)local_148 * __real_3e800000) {
    fVar18 = __real_41200000;
  }
  if (fVar18 <= __real_40400000) {
    fVar18 = __real_40400000;
  }
  if (fVar18 <= fVar20) {
    iVar12 = ((float)local_148 - fVar18 < fVar20) + 1;
  }
  local_138._padding_._0_2_ = (undefined2)param_2->_padding_;
  local_138._padding_._2_1_ = *(undefined1 *)((longlong)&param_2->_padding_ + 2);
  local_138._padding_._4_4_ = *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  local_138._padding_._0_4_ = (undefined4)param_2->_padding_;
  local_138._padding_ = param_2->_padding_;
  local_138._padding_ = param_2->_padding_;
  local_138.ScreenSpacePosition = (FDeprecateSlateVector2D)param_2->_padding_;
  local_138.LastScreenSpacePosition = (FDeprecateSlateVector2D)param_2->_padding_;
  local_138.CursorDelta = (FDeprecateSlateVector2D)param_2->_padding_;
  local_138.PressedButtons =
       (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)param_2->_padding_;
  local_138.EffectingButton.KeyName = (FName)param_2->_padding_;
  local_138.EffectingButton.KeyDetails.Object = (FKeyDetails *)param_2->_padding_;
  local_138.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)param_2->_padding_;
  if (local_138.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_138.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(local_138.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_138.PointerIndex = (uint)param_2->_padding_;
  local_138.Force = *(float *)&param_2->_padding_;
  local_138.TouchpadIndex = *(uint *)((longlong)&param_2->_padding_ + 4);
  local_138.bIsTouchEvent = *(bool *)((longlong)&param_2->_padding_ + 4);
  local_138.GestureType = *(EGestureEvent *)((longlong)&param_2->_padding_ + 5);
  local_138.WheelOrGestureDelta = (FDeprecateSlateVector2D)param_2->_padding_;
  local_138.bIsDirectionInvertedFromDevice = SUB81(param_2->_padding_,0);
  local_138.bIsTouchForceChanged = *(bool *)((longlong)&param_2->_padding_ + 1);
  local_138.bIsTouchFirstMove = *(bool *)((longlong)&param_2->_padding_ + 2);
  local_138._padding_ = (longlong)&___7FDragDropEvent__6B_;
  local_b8 = (param_2->Content).Object;
  local_b0 = (param_2->Content).SharedReferenceCount.ReferenceController;
  if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8 = &this[-1].bChangedSelectionOnMouseDown;
  local_148 = FVar3;
  local_140[0] = iVar12;
  TVar11 = `STableRow<TSharedPtr<FString,1>_>::OnDragOver'::__l5::<lambda_1>::operator()(local_140);
  puVar1 = &(this->PaintDropIndicatorEvent).field_0x10;
  if (TVar11 != (TOptional<EItemDropZone>)puVar1) {
    if (*(char *)((longlong)TVar11 + 4) == '\0') {
      if ((this->PaintDropIndicatorEvent).field_0x14 != '\0') {
        (this->PaintDropIndicatorEvent).field_0x14 = 0;
      }
    }
    else {
      *(undefined4 *)puVar1 = *(undefined4 *)TVar11;
      (this->PaintDropIndicatorEvent).field_0x14 = 1;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
  FPointerEvent::~FPointerEvent(&local_138);
  FReply::FReply(__return_storage_ptr__,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return __return_storage_ptr__;
}

// OnDrop @ 142963580

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<FString,1>_>::OnDrop
          (STableRow<TSharedPtr<FString,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FDragDropEvent *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *this_00;
  undefined1 local_e8 [32];
  FReply local_c8;
  
  local_e8._0_8_ = &this[-1].bChangedSelectionOnMouseDown;
  local_e8._8_8_ = param_1;
  local_e8._16_8_ = param_2;
  `STableRow<TSharedPtr<FString,1>_>::OnDrop'::__l2::<lambda_1>::operator()(local_e8,&local_c8);
  if ((char)local_c8._padding_ == '\0') {
    this_00 = &(this->OnDragLeave_Handler).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)local_e8);
    if ((*(int *)&(this->OnDrop_Handler).field_0x8 != 0) &&
       (*(longlong **)&this->OnDrop_Handler != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)&this->OnDrop_Handler + 0x38))();
      if (cVar1 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)local_e8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FReadAccessScope *)local_e8);
        if (*(int *)&(this->OnDrop_Handler).field_0x8 == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)&this->OnDrop_Handler;
        }
        (**(code **)(*plVar2 + 0x60))(plVar2,__return_storage_ptr__,param_2);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)local_e8);
        goto LAB_142963645;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_e8);
  }
  FReply::FReply(__return_storage_ptr__,&local_c8);
LAB_142963645:
  FReply::~FReply(&local_c8);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 14296a190

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<FString,1>_>::OnMouseButtonDoubleClick
          (STableRow<TSharedPtr<FString,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  FName FVar1;
  code *pcVar2;
  atomic<int> aVar3;
  char cVar4;
  atomic<int> aVar5;
  FReply *pFVar6;
  undefined8 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined8 local_18;
  longlong local_10;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar10 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar11 = FVar1 != EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (bVar11) goto LAB_14296a310;
  pTVar10 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_14296a205:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar2)();
      return pFVar6;
    }
    pTVar10 = pTVar9;
    if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14296a205;
      LOCK();
      aVar5 = pTVar10->SharedReferenceCount;
      bVar11 = aVar3 == aVar5;
      if (bVar11) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar11);
    pTVar8 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar9 = pTVar10;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_14296a205;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar7 = (undefined8 *)(**(code **)(pTVar8->_padding_ + 0x48))(pTVar8);
  if (puVar7 != (undefined8 *)0x0) {
    pcVar2 = *(code **)(pTVar8->_padding_ + 0xb0);
    local_18 = *puVar7;
    local_10 = puVar7[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    cVar4 = (*pcVar2)(pTVar8,&local_18);
    if (cVar4 == '\0') {
      (**(code **)(*(longlong *)&this[-1].bChangedSelectionOnMouseDown + 0x28))
                (&this[-1].bChangedSelectionOnMouseDown);
    }
    FReply::FReply(__return_storage_ptr__,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    return __return_storage_ptr__;
  }
  cVar4 = (**(code **)(pTVar8->_padding_ + 200))(pTVar8);
  if ((cVar4 == '\0') &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("OwnerTable->Private_IsPendingRefresh()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                          ,0x4cf,
                          L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                         ), bVar11)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FReply *)(*pcVar2)();
    return pFVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_14296a310:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 14296c330

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<FString,1>_>::OnMouseButtonDown
          (STableRow<TSharedPtr<FString,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  int iVar8;
  FReply *pFVar9;
  undefined8 *puVar10;
  TSharedRef<SWidget,1> *pTVar11;
  atomic<int> *paVar12;
  atomic<int> *paVar13;
  SWidget *pSVar14;
  SWidget *pSVar15;
  SWidget *pSVar16;
  SWidget *pSVar17;
  bool bVar18;
  TSharedRef<SWidget,1> local_188;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  TSharedRef<SWidget,1> local_148;
  FKey local_138;
  TSharedRef<SWidget,1> local_120;
  TSharedRef<SWidget,1> local_110;
  undefined1 local_100 [16];
  FReply local_f0;
  
  pSVar17 = (SWidget *)(this->OwnerTablePtr).Object;
  pSVar15 = (SWidget *)0x0;
  pSVar14 = pSVar15;
  pSVar16 = pSVar17;
  if (pSVar17 == (SWidget *)0x0) {
LAB_14296c386:
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar4)();
      return pFVar9;
    }
    pSVar17 = pSVar16;
    if ((pSVar14 == (SWidget *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar18)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar4)();
      return pFVar9;
    }
  }
  else {
    aVar5 = *(atomic<int> *)&pSVar17->_padding_;
    do {
      pSVar14 = (SWidget *)0x0;
      pSVar16 = pSVar15;
      if (aVar5 == (atomic<int>)0x0) goto LAB_14296c386;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar17->_padding_;
      bVar18 = aVar5 == aVar7;
      if (bVar18) {
        *(atomic<int> *)&pSVar17->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar18);
    pSVar14 = (SWidget *)this->_padding_;
    pSVar16 = pSVar17;
    if (pSVar14 == (SWidget *)0x0) goto LAB_14296c386;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  *(undefined2 *)&(this->Content).WeakReferenceCount.ReferenceController = 0;
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar18 = FVar2 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((bVar18) &&
     (iVar8 = (**(code **)(*(longlong *)&this[-1].bChangedSelectionOnMouseDown + 0x78))
                        (&this[-1].bChangedSelectionOnMouseDown), iVar8 != 0)) {
    puVar10 = (undefined8 *)(*(code *)((TStatIdData *)pSVar14->_padding_)[3].Name)(pSVar14);
    if (puVar10 != (undefined8 *)0x0) {
      cVar6 = (*(code *)(((TStatIdData *)pSVar14->_padding_)->StatDescriptionAnsi).Ptr)
                        (pSVar14,puVar10);
      if (iVar8 == 3) {
        if ((param_2->_padding_ & 3) == 0) {
          if ((param_2->_padding_ & 0xc) == 0) goto LAB_14296c517;
          pcVar4 = (code *)((TStatIdData *)pSVar14->_padding_)[1].StatDescriptionAnsi.Ptr;
          local_178 = *puVar10;
          local_170 = puVar10[1];
          if (local_170 != 0) {
            LOCK();
            *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
            UNLOCK();
          }
          (*pcVar4)(pSVar14,&local_178,cVar6 == '\0');
        }
        else {
          pcVar4 = (code *)((TStatIdData *)pSVar14->_padding_)[2].StatDescriptionWide.Ptr;
          local_168 = *puVar10;
          local_160 = puVar10[1];
          if (local_160 != 0) {
            LOCK();
            *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
            UNLOCK();
          }
          (*pcVar4)(pSVar14,&local_168);
        }
        iVar8 = this->IndexInList;
        *(undefined1 *)&(this->Content).WeakReferenceCount.ReferenceController = 1;
        if (iVar8 == 1) {
          (*(code *)((TStatIdData *)pSVar14->_padding_)[2].StatDescriptionAnsi.Ptr)(pSVar14,2);
        }
      }
LAB_14296c517:
      if (((*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 3) != '\0'
           ) || (cVar6 == '\0')) &&
         (*(char *)&(this->Content).WeakReferenceCount.ReferenceController == '\0')) {
        (*(code *)((TStatIdData *)pSVar14->_padding_)[2].Name)(pSVar14);
        pcVar4 = (code *)((TStatIdData *)pSVar14->_padding_)[1].StatDescriptionAnsi.Ptr;
        local_158 = *puVar10;
        local_150 = puVar10[1];
        if (local_150 != 0) {
          LOCK();
          *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
          UNLOCK();
        }
        (*pcVar4)(pSVar14,&local_158,1);
        iVar8 = this->IndexInList;
        *(undefined1 *)&(this->Content).WeakReferenceCount.ReferenceController = 1;
        if (iVar8 == 1) {
          (*(code *)((TStatIdData *)pSVar14->_padding_)[2].StatDescriptionAnsi.Ptr)(pSVar14,2);
        }
      }
      FReply::FReply(&local_f0,true);
      local_138.KeyName = EKeys::LeftMouseButton.KeyName;
      local_138.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object;
      local_138.KeyDetails.SharedReferenceCount.ReferenceController =
           EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
      if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_120);
      paVar13 = (atomic<int> *)&DAT_00000008;
      pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
      local_188.Object = (SWidget *)&pTVar11->Object[-1].StatID;
      if (pTVar11->Object == (SWidget *)0x0) {
        local_188.Object = pSVar15;
      }
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        paVar12 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar12 = &pTVar1->SharedReferenceCount;
        LOCK();
        *paVar12 = (atomic<int>)((int)*paVar12 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_120.SharedReferenceCount.ReferenceController);
      if (local_188.Object == (SWidget *)0x0) {
        local_188.Object = (SWidget *)0x0;
      }
      else {
        local_188.Object = (SWidget *)&(local_188.Object)->_padding_;
      }
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar12 = (atomic<int>)((int)*paVar12 + 1);
        UNLOCK();
      }
      local_188.SharedReferenceCount.ReferenceController = pTVar1;
      pFVar9 = FReply::DetectDrag(&local_f0,&local_188,&local_138);
      pTVar11 = (TSharedRef<SWidget,1> *)
                (*(code *)((TStatIdData *)pSVar14->_padding_)[9].StatDescriptionAnsi.Ptr)
                          (pSVar14,local_100);
      pFVar9 = FReply::SetUserFocus(pFVar9,pTVar11,Mouse,false);
      pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_110);
      pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
      pSVar14 = (SWidget *)&pTVar11->Object[-1].StatID;
      if (pTVar11->Object == (SWidget *)0x0) {
        pSVar14 = pSVar15;
      }
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        paVar13 = &pTVar3->SharedReferenceCount;
        LOCK();
        *paVar13 = (atomic<int>)((int)*paVar13 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_110.SharedReferenceCount.ReferenceController);
      if (pSVar14 != (SWidget *)0x0) {
        pSVar15 = (SWidget *)&pSVar14->_padding_;
      }
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar13 = (atomic<int>)((int)*paVar13 + 1);
        UNLOCK();
      }
      local_148.Object = pSVar15;
      local_148.SharedReferenceCount.ReferenceController = pTVar3;
      pFVar9 = FReply::CaptureMouse(pFVar9,&local_148);
      FReply::FReply(__return_storage_ptr__,pFVar9);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      FReply::~FReply(&local_f0);
      goto LAB_14296c73c;
    }
    cVar6 = (*(code *)((TStatIdData *)pSVar14->_padding_)[8].StatDescriptionWide.Ptr)(pSVar14);
    if ((cVar6 == '\0') &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar18)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar4)();
      return pFVar9;
    }
  }
  FReply::FReply(__return_storage_ptr__,false);
LAB_14296c73c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar17);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14296ed40

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<FString,1>_>::OnMouseButtonUp
          (STableRow<TSharedPtr<FString,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  code *pcVar5;
  FWeakReferencer<1> FVar6;
  bool bVar7;
  char cVar8;
  atomic<int> aVar9;
  int iVar10;
  FReply *pFVar11;
  undefined8 *puVar12;
  STableViewBase *pSVar13;
  STableViewBase *pSVar14;
  STableViewBase *pSVar15;
  STableViewBase *pSVar16;
  bool bVar17;
  undefined4 local_res8;
  undefined4 uStackX_c;
  TVector2<float>_u_0 local_508;
  undefined4 local_500;
  undefined8 local_4fc;
  undefined4 local_4f4;
  undefined8 local_4f0;
  longlong local_4e8;
  undefined8 local_4e0;
  longlong local_4d8;
  undefined8 local_4d0;
  longlong local_4c8;
  undefined8 local_4c0;
  longlong local_4b8;
  FSlateRotatedRect local_4b0;
  FReply local_498;
  FReply local_3e0;
  FReply local_328;
  FReply local_270;
  FReply local_1b8;
  FReply local_f8;
  
  pSVar14 = (STableViewBase *)(this->OwnerTablePtr).Object;
  pSVar16 = (STableViewBase *)0x0;
  pSVar13 = pSVar14;
  pSVar15 = (STableViewBase *)0x0;
  if (pSVar14 == (STableViewBase *)0x0) {
LAB_14296edba:
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FReply *)(*pcVar5)();
      return pFVar11;
    }
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    pSVar14 = pSVar13;
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FReply *)(*pcVar5)();
      return pFVar11;
    }
  }
  else {
    aVar2 = *(atomic<int> *)&pSVar14->field_0x8;
    do {
      pSVar13 = pSVar16;
      pSVar15 = pSVar16;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14296edba;
      LOCK();
      aVar9 = *(atomic<int> *)&pSVar14->field_0x8;
      bVar17 = aVar2 == aVar9;
      if (bVar17) {
        *(atomic<int> *)&pSVar14->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar9 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar9;
    } while (!bVar17);
    pSVar15 = (STableViewBase *)this->_padding_;
    pSVar13 = pSVar14;
    if (pSVar15 == (STableViewBase *)0x0) goto LAB_14296edba;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pSVar13 = (STableViewBase *)&pSVar15[-1].field_0x8;
  if (pSVar15 == (STableViewBase *)0x0) {
    pSVar13 = pSVar16;
  }
  if (pSVar14 != (STableViewBase *)0x0) {
    LOCK();
    *(atomic<int> *)&pSVar14->field_0x8 =
         (atomic<int>)((int)*(atomic<int> *)&pSVar14->field_0x8 + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)&pSVar14->field_0x8 =
         (atomic<int>)((int)*(atomic<int> *)&pSVar14->field_0x8 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar17 = FVar4 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar17) {
    FReply::FReply(&local_498,false);
    FVar6.ReferenceController = local_498.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_498.MouseCaptor.Object = (SWidget *)0x0;
    local_498.MouseCaptor.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
      }
    }
    local_498.bUseHighPrecisionMouse = 0;
    local_498.bReleaseMouseCapture = 1;
    FReply::FReply(&local_1b8,&local_498);
    FReply::~FReply(&local_498);
    if (*(char *)&(this->Content).WeakReferenceCount.ReferenceController != '\0') {
      FReply::FReply(&local_3e0,true);
      FVar6.ReferenceController = local_3e0.MouseCaptor.WeakReferenceCount.ReferenceController;
      local_3e0.MouseCaptor.Object = (SWidget *)0x0;
      local_3e0.MouseCaptor.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
        }
      }
      local_3e0.bUseHighPrecisionMouse = 0;
      local_3e0.bReleaseMouseCapture = 1;
      FReply::operator=(&local_1b8,&local_3e0);
      FReply::~FReply(&local_3e0);
    }
    local_508 = (TVector2<float>_u_0)0x0;
    local_4fc = 0;
    local_res8 = SUB84(param_1->Size,0);
    uStackX_c = SUB84(param_1->Size,4);
    local_500 = local_res8;
    local_4f4 = uStackX_c;
    TransformRect<TTransform2<float>_>
              (&local_4b0,&param_1->AccumulatedRenderTransform,(FSlateRotatedRect *)&local_508._s_0)
    ;
    bVar17 = FSlateRotatedRect::IsUnderLocation
                       (&local_4b0,*(FDeprecateVector2DParameter *)&param_2->ScreenSpacePosition);
    bVar7 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar7) {
      if ((bVar17) &&
         (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 1) == '\0'))
      {
        iVar10 = (**(code **)(*(longlong *)&this[-1].bChangedSelectionOnMouseDown + 0x78))
                           (&this[-1].bChangedSelectionOnMouseDown);
        if (iVar10 == 2) {
          if (*(char *)&(this->Content).WeakReferenceCount.ReferenceController == '\0') {
            (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 + 0x30))
                      (pSVar15);
            (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 + 0x40))
                      (pSVar15,2);
          }
          FReply::FReply(&local_270,true);
          FVar6.ReferenceController = local_270.MouseCaptor.WeakReferenceCount.ReferenceController;
          local_270.MouseCaptor.Object = (SWidget *)0x0;
          local_270.MouseCaptor.WeakReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1)
              ;
            }
          }
          local_270.bUseHighPrecisionMouse = 0;
          local_270.bReleaseMouseCapture = 1;
          FReply::operator=(&local_1b8,&local_270);
          pFVar11 = &local_270;
LAB_14296f1ba:
          FReply::~FReply(pFVar11);
        }
        else if ((((iVar10 == 3) &&
                  (*(char *)&(this->Content).WeakReferenceCount.ReferenceController == '\0')) &&
                 ((param_2->_padding_ & 0xc) == 0)) && ((param_2->_padding_ & 3) == 0)) {
          puVar12 = (undefined8 *)
                    (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 +
                                0x48))(pSVar15,&this[-1].bChangedSelectionOnMouseDown);
          if (puVar12 == (undefined8 *)0x0) {
            cVar8 = (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 + 200
                                ))(pSVar15);
            if ((cVar8 == '\0') &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OwnerTable->Private_IsPendingRefresh()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                                    ,0x4cf,
                                    L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                                   ), bVar17)) {
              pcVar5 = (code *)swi(3);
              pFVar11 = (FReply *)(*pcVar5)();
              return pFVar11;
            }
          }
          else {
            cVar8 = (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 +
                                0x10))(pSVar15,puVar12);
            if ((cVar8 != '\0') &&
               (iVar10 = (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15
                                     + 0x70))(pSVar15), 1 < iVar10)) {
              (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 + 0x30))
                        (pSVar15);
              pcVar5 = *(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 +
                                 0x28);
              local_4f0 = *puVar12;
              local_4e8 = puVar12[1];
              if (local_4e8 != 0) {
                LOCK();
                *(int *)(local_4e8 + 8) = *(int *)(local_4e8 + 8) + 1;
                UNLOCK();
              }
              (*pcVar5)(pSVar15,&local_4f0,1);
              (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 + 0x40))
                        (pSVar15,2);
              FReply::FReply(&local_328,true);
              FVar6.ReferenceController =
                   local_328.MouseCaptor.WeakReferenceCount.ReferenceController;
              local_328.MouseCaptor.Object = (SWidget *)0x0;
              local_328.MouseCaptor.WeakReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
                aVar2 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if (aVar2 == (atomic<int>)0x1) {
                  (**(code **)((FVar6.ReferenceController)->_padding_ + 8))
                            (FVar6.ReferenceController,1);
                }
              }
              local_328.bUseHighPrecisionMouse = 0;
              local_328.bReleaseMouseCapture = 1;
              FReply::operator=(&local_1b8,&local_328);
              pFVar11 = &local_328;
              goto LAB_14296f1ba;
            }
          }
        }
      }
      puVar12 = (undefined8 *)
                (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 + 0x48))
                          (pSVar15,&this[-1].bChangedSelectionOnMouseDown);
      if (puVar12 == (undefined8 *)0x0) {
        cVar8 = (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 + 200))
                          (pSVar15);
        if ((cVar8 == '\0') &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("OwnerTable->Private_IsPendingRefresh()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                                ,0x4cf,
                                L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                               ), bVar17)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FReply *)(*pcVar5)();
          return pFVar11;
        }
      }
      else {
        pcVar5 = *(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 + 0xa8);
        local_4e0 = *puVar12;
        local_4d8 = puVar12[1];
        if (local_4d8 != 0) {
          LOCK();
          *(int *)(local_4d8 + 8) = *(int *)(local_4d8 + 8) + 1;
          UNLOCK();
        }
        cVar8 = (*pcVar5)(pSVar15,&local_4e0);
        if (cVar8 != '\0') {
          FReply::FReply(&local_f8,true);
          pFVar11 = FReply::ReleaseMouseCapture(&local_f8);
          FReply::operator=(&local_1b8,pFVar11);
          FReply::~FReply(&local_f8);
        }
      }
      if (((*(char *)&(this->Content).WeakReferenceCount.ReferenceController != '\0') &&
          (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 1) == '\0')
          ) && (this->IndexInList == 0)) {
        (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 + 0x40))
                  (pSVar15,2);
      }
      FReply::FReply(__return_storage_ptr__,&local_1b8);
      FReply::~FReply(&local_1b8);
      goto LAB_14296f423;
    }
    FReply::~FReply(&local_1b8);
LAB_14296f415:
    bVar17 = false;
  }
  else {
    pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FVar4 != EKeys::RightMouseButton.KeyName) ||
       (bVar17 = STableViewBase::IsRightClickScrolling(pSVar13), bVar17)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      goto LAB_14296f415;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    iVar10 = (**(code **)(*(longlong *)&this[-1].bChangedSelectionOnMouseDown + 0x78))
                       (&this[-1].bChangedSelectionOnMouseDown);
    if (((iVar10 != 1) && (iVar10 != 2)) && (iVar10 != 3)) goto LAB_14296f415;
    puVar12 = (undefined8 *)
              (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 + 0x48))
                        (pSVar15);
    if (puVar12 == (undefined8 *)0x0) {
      cVar8 = (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 + 200))
                        (pSVar15);
      if ((cVar8 == '\0') &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("OwnerTable->Private_IsPendingRefresh()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                              ,0x4cf,
                              L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                             ), bVar17)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FReply *)(*pcVar5)();
        return pFVar11;
      }
      goto LAB_14296f415;
    }
    cVar8 = (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 + 0x10))
                      (pSVar15,puVar12);
    if (cVar8 == '\0') {
      (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 + 0x30))(pSVar15);
      pcVar5 = *(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 + 0x28);
      local_4d0 = *puVar12;
      local_4c8 = puVar12[1];
      if (local_4c8 != 0) {
        LOCK();
        *(int *)(local_4c8 + 8) = *(int *)(local_4c8 + 8) + 1;
        UNLOCK();
      }
      (*pcVar5)(pSVar15,&local_4d0,1);
      (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 + 0x40))(pSVar15,2)
      ;
    }
    pcVar5 = *(code **)((longlong)*(ITypedTableView<TSharedPtr<FString,1>_> *)pSVar15 + 0xa0);
    local_4c0 = *puVar12;
    local_4b8 = puVar12[1];
    if (local_4b8 != 0) {
      LOCK();
      *(int *)(local_4b8 + 8) = *(int *)(local_4b8 + 8) + 1;
      UNLOCK();
    }
    (*pcVar5)(pSVar15,&local_4c0,param_2);
    bVar17 = true;
  }
  FReply::FReply(__return_storage_ptr__,bVar17);
LAB_14296f423:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
  return __return_storage_ptr__;
}

// OnPaint @ 14297d630

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<TSharedPtr<FString,1>_>::OnPaint
          (STableRow<TSharedPtr<FString,1>_> *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  int iVar1;
  
  iVar1 = PaintSelection((STableRow<TSharedPtr<FString,1>_> *)&this[-1].bChangedSelectionOnMouseDown
                         ,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  iVar1 = SBorder::OnPaint((SBorder *)this,param_1,param_2,param_3,param_4,iVar1,param_6,param_7);
  iVar1 = PaintDropIndicator((STableRow<TSharedPtr<FString,1>_> *)
                             &this[-1].bChangedSelectionOnMouseDown,param_1,param_2,param_3,param_4,
                             iVar1,param_6,param_7);
  return iVar1;
}

// OnPaintDropIndicator @ 1429820a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<TSharedPtr<FString,1>_>::OnPaintDropIndicator
          (STableRow<TSharedPtr<FString,1>_> *this,EItemDropZone param_1,FPaintArgs *param_2,
          FGeometry *param_3,FSlateRect *param_4,FSlateWindowElementList *param_5,int param_6,
          FWidgetStyle *param_7,bool param_8)

{
  float fVar1;
  ESlateColorStylingMode EVar2;
  undefined1 uVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  FSlateColor *this_00;
  TReferenceControllerBase<1> *pTVar8;
  FSlateBrush *pFVar9;
  ITypedTableView<TSharedPtr<FString,1>_> *pIVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_198 [32];
  undefined8 local_148;
  undefined8 local_140;
  FLinearColor_u_0 local_138;
  FLinearColor_u_0 local_128;
  TVector2<float>_u_0_s_0 local_114;
  FDeprecateOptionalVector2DParameter local_108;
  TTransform2<float> local_f8;
  TTransform2<float> local_e0;
  TVector2<float>_u_0 local_c8;
  float local_c0;
  undefined8 local_bc;
  FDeprecateSlateVector2D local_b4;
  float local_ac [2];
  float afStack_a4 [2];
  TVector2<float>_u_0 local_9c;
  byte local_94;
  TVector2<float>_u_0 local_90;
  float local_88;
  undefined8 local_84;
  undefined8 local_7c;
  float local_74 [2];
  float afStack_6c [2];
  TVector2<float>_u_0 local_64;
  byte local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar8 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pIVar10 = (ITypedTableView<TSharedPtr<FString,1>_> *)0x0;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar8->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142982101;
      }
      LOCK();
      aVar6 = pTVar8->SharedReferenceCount;
      bVar11 = aVar5 == aVar6;
      if (bVar11) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar11);
    pIVar10 = (this->OwnerTablePtr).Object;
    if (pIVar10 != (ITypedTableView<TSharedPtr<FString,1>_> *)0x0) goto LAB_142982152;
  }
LAB_142982101:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar11) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  if ((pIVar10 == (ITypedTableView<TSharedPtr<FString,1>_> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
LAB_142982152:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (param_1 == AboveItem) {
    pFVar9 = &this->Style->DropIndicator_Above;
  }
  else if ((param_1 == OntoItem) || (param_1 != BelowItem)) {
    pFVar9 = &this->Style->DropIndicator_Onto;
  }
  else {
    pFVar9 = &this->Style->DropIndicator_Below;
  }
  this_00 = &pFVar9->TintColor;
  iVar7 = (**(code **)((longlong)*pIVar10 + 0xc0))(pIVar10);
  EVar2 = (pFVar9->TintColor).ColorUseRule;
  if (iVar7 == 1) {
    if (EVar2 != UseColor_Specified) {
      if (EVar2 == UseColor_ColorTable) {
        this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
      }
      else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
        this_00 = (FSlateColor *)&param_7->ForegroundColor;
      }
      else {
        this_00 = (FSlateColor *)&param_7->SubduedForeground;
      }
    }
    local_c8 = (param_3->AbsolutePosition).field0_0x0;
    local_138._s_0.R =
         (this_00->SpecifiedColor).field0_0x0._s_0.R *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_b4 = param_3->Size;
    local_138._s_0.G =
         (this_00->SpecifiedColor).field0_0x0._s_0.G *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_138._s_0.B =
         (this_00->SpecifiedColor).field0_0x0._s_0.B *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_94 = param_3->bHasRenderTransform * '\x02' | local_94 & 0xfc;
    local_138._s_0.A =
         (this_00->SpecifiedColor).field0_0x0._s_0.A *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_c0 = param_3->Scale;
    local_ac = (param_3->AccumulatedRenderTransform).M.M[0];
    afStack_a4 = (param_3->AccumulatedRenderTransform).M.M[1];
    local_bc = 0;
    local_9c = (param_3->AccumulatedRenderTransform).Trans.field0_0x0;
    FSlateDrawElement::MakeBox
              (param_5,param_6,(FPaintGeometry *)&local_c8._s_0,pFVar9,None,
               (FLinearColor *)&local_138._s_0);
  }
  else {
    local_148._4_4_ = SUB84(param_3->Size,4);
    local_148._0_4_ = SUB84(param_3->Size,0);
    fVar13 = (float)local_148._4_4_ * __real_3f000000;
    fVar12 = (float)(undefined4)local_148 * __real_3f000000;
    local_138._s_0.R = (float)local_148._4_4_;
    local_138._s_0.G = (float)(undefined4)local_148;
    local_140._4_4_ = fVar13 - fVar12;
    local_140._0_4_ = fVar12 - fVar13;
    if (EVar2 != UseColor_Specified) {
      if (EVar2 == UseColor_ColorTable) {
        this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
      }
      else if ((EVar2 == UseColor_Foreground) || (EVar2 != UseColor_Foreground_Subdued)) {
        this_00 = (FSlateColor *)&param_7->ForegroundColor;
      }
      else {
        this_00 = (FSlateColor *)&param_7->SubduedForeground;
      }
    }
    fVar1 = param_3->Scale;
    local_148._4_4_ = fVar12;
    local_148._0_4_ = fVar13;
    local_128._s_0.R =
         (this_00->SpecifiedColor).field0_0x0._s_0.R *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_128._s_0.G =
         (this_00->SpecifiedColor).field0_0x0._s_0.G *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_108._0_8_ = local_148;
    local_114 = (param_3->AbsolutePosition).field0_0x0._s_0;
    local_128._s_0.B =
         (this_00->SpecifiedColor).field0_0x0._s_0.B *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_108._8_1_ = 1;
    local_f8.Trans.field0_0x0 = local_140;
    local_128._s_0.A =
         (this_00->SpecifiedColor).field0_0x0._s_0.A *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_f8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_f8.M.M[0][1] = _UNK_15076b184;
    local_f8.M.M[1][0] = _UNK_15076b188;
    local_f8.M.M[1][1] = _UNK_15076b18c;
    local_148._4_4_ = (fVar13 - fVar12) * fVar1 + local_114.Y;
    local_148._0_4_ = (fVar12 - fVar13) * fVar1 + local_114.X;
    Concatenate<TTransform2<float>_>(&local_e0,&local_f8,&param_3->AccumulatedRenderTransform);
    local_90 = local_148;
    local_7c = CONCAT44(local_138._s_0.G,local_138._s_0.R);
    local_5c = param_3->bHasRenderTransform * '\x02' | local_5c & 0xfc;
    local_84 = 0;
    local_74[0] = local_e0.M.M[0][0];
    local_74[1] = local_e0.M.M[0][1];
    afStack_6c[0] = local_e0.M.M[1][0];
    afStack_6c[1] = local_e0.M.M[1][1];
    local_64 = local_e0.Trans.field0_0x0;
    local_88 = fVar1;
    FSlateDrawElement::MakeRotatedBox
              (param_5,param_6,(FPaintGeometry *)&local_90._s_0,pFVar9,None,__real_bfc90fdb,
               &local_108,RelativeToElement,(FLinearColor *)&local_128._s_0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return param_6 + 1;
}

// OnTouchEnded @ 142982920

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<FString,1>_>::OnTouchEnded
          (STableRow<TSharedPtr<FString,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  bool *pbVar1;
  code *pcVar2;
  atomic<int> aVar3;
  char cVar4;
  atomic<int> aVar5;
  int iVar6;
  FReply *pFVar7;
  undefined8 *puVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  undefined8 local_278;
  longlong local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 local_258;
  longlong local_250;
  FReply local_248;
  FReply local_190;
  FReply local_d8;
  
  FReply::FReply(__return_storage_ptr__,false);
  pbVar1 = &this[-1].bChangedSelectionOnMouseDown;
  if (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) == '\0') {
    return __return_storage_ptr__;
  }
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) = 0;
  pTVar11 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar10 = pTVar11;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_142982995:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FReply *)(*pcVar2)();
      return pFVar7;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    pTVar11 = pTVar10;
    if (bVar12) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FReply *)(*pcVar2)();
      return pFVar7;
    }
  }
  else {
    aVar3 = pTVar11->SharedReferenceCount;
    do {
      pTVar10 = pTVar9;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142982995;
      LOCK();
      aVar5 = pTVar11->SharedReferenceCount;
      bVar12 = aVar3 == aVar5;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar12);
    pTVar9 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar10 = pTVar11;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_142982995;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar8 = (undefined8 *)(**(code **)(pTVar9->_padding_ + 0x48))(pTVar9,pbVar1);
  if (puVar8 == (undefined8 *)0x0) {
    cVar4 = (**(code **)(pTVar9->_padding_ + 200))(pTVar9);
    if ((cVar4 == '\0') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar12)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FReply *)(*pcVar2)();
      return pFVar7;
    }
    goto LAB_142982bce;
  }
  iVar6 = (**(code **)(*(longlong *)pbVar1 + 0x78))(pbVar1);
  if (iVar6 != 0) {
    cVar4 = (**(code **)(pTVar9->_padding_ + 0x10))(pTVar9,puVar8);
    if (cVar4 == '\0') {
      if (iVar6 != 3) {
        (**(code **)(pTVar9->_padding_ + 0x30))(pTVar9);
      }
      pcVar2 = *(code **)(pTVar9->_padding_ + 0x28);
      local_278 = *puVar8;
      local_270 = puVar8[1];
      if (local_270 != 0) {
        LOCK();
        *(int *)(local_270 + 8) = *(int *)(local_270 + 8) + 1;
        UNLOCK();
      }
      (*pcVar2)(pTVar9,&local_278,1);
      (**(code **)(pTVar9->_padding_ + 0x40))(pTVar9,2);
      FReply::FReply(&local_248,true);
      FReply::operator=(__return_storage_ptr__,&local_248);
      pFVar7 = &local_248;
    }
    else {
      if (1 < iVar6 - 2U) goto LAB_142982b2f;
      pcVar2 = *(code **)(pTVar9->_padding_ + 0x28);
      local_268 = *puVar8;
      local_260 = puVar8[1];
      if (local_260 != 0) {
        LOCK();
        *(int *)(local_260 + 8) = *(int *)(local_260 + 8) + 1;
        UNLOCK();
      }
      (*pcVar2)(pTVar9,&local_268,1);
      (**(code **)(pTVar9->_padding_ + 0x40))(pTVar9,2);
      FReply::FReply(&local_190,true);
      FReply::operator=(__return_storage_ptr__,&local_190);
      pFVar7 = &local_190;
    }
    FReply::~FReply(pFVar7);
  }
LAB_142982b2f:
  pcVar2 = *(code **)(pTVar9->_padding_ + 0xa8);
  local_258 = *puVar8;
  local_250 = puVar8[1];
  if (local_250 != 0) {
    LOCK();
    *(int *)(local_250 + 8) = *(int *)(local_250 + 8) + 1;
    UNLOCK();
  }
  cVar4 = (*pcVar2)(pTVar9,&local_258);
  if (cVar4 != '\0') {
    FReply::FReply(&local_d8,true);
    FReply::operator=(__return_storage_ptr__,&local_d8);
    FReply::~FReply(&local_d8);
  }
LAB_142982bce:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 142983500

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<FString,1>_>::OnTouchStarted
          (STableRow<TSharedPtr<FString,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1
          ,FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<SWidget,1> *pTVar2;
  FReply *pFVar3;
  atomic<int> *paVar4;
  TStatId *pTVar5;
  TSharedRef<SWidget,1> local_e8;
  FKey local_d8;
  FReply local_c0;
  
  *(undefined1 *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) = 1;
  FReply::FReply(&local_c0,true);
  local_d8.KeyName = EKeys::LeftMouseButton.KeyName;
  local_d8.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object;
  local_d8.KeyDetails.SharedReferenceCount.ReferenceController =
       EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e8);
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  pTVar5 = &pTVar2->Object[-1].StatID;
  if (pTVar2->Object == (SWidget *)0x0) {
    pTVar5 = (TStatId *)0x0;
  }
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar4 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar4 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  if (pTVar5 == (TStatId *)0x0) {
    local_e8.Object = (SWidget *)0x0;
  }
  else {
    local_e8.Object = (SWidget *)(pTVar5 + 1);
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar4 = (atomic<int>)((int)*paVar4 + 1);
    UNLOCK();
  }
  local_e8.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar3 = FReply::DetectDrag(&local_c0,&local_e8,&local_d8);
  FReply::FReply(__return_storage_ptr__,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FReply::~FReply(&local_c0);
  return __return_storage_ptr__;
}

// PaintDropIndicator @ 1429844c0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<TSharedPtr<FString,1>_>::PaintDropIndicator
          (STableRow<TSharedPtr<FString,1>_> *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  EItemDropZone EVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if ((this->ItemDropZone).bIsSet != false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->PaintDropIndicatorEvent,&local_38);
    if (((*(int *)&(this->PaintDropIndicatorEvent).field_0x10 == 0) ||
        (plVar6 = *(longlong **)&(this->PaintDropIndicatorEvent).field_0x8,
        plVar6 == (longlong *)0x0)) || (cVar3 = (**(code **)(*plVar6 + 0x38))(), cVar3 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      pcVar2 = *(code **)(this->_padding_ + 0x88);
      if (((this->ItemDropZone).bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      param_5 = (*pcVar2)(this,(this->ItemDropZone).TypedValue,param_1,param_2,param_3,param_4,
                          param_5,param_6,param_7);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      if (((this->ItemDropZone).bIsSet == false) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      EVar1 = (this->ItemDropZone).TypedValue;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->PaintDropIndicatorEvent,&local_20);
      if (*(int *)&(this->PaintDropIndicatorEvent).field_0x10 == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)&(this->PaintDropIndicatorEvent).field_0x8;
      }
      param_5 = (**(code **)(*plVar6 + 0x60))
                          (plVar6,EVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
    }
  }
  return param_5;
}

// PaintSelection @ 1429846a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<TSharedPtr<FString,1>_>::PaintSelection
          (STableRow<TSharedPtr<FString,1>_> *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  ESlateColorStylingMode EVar1;
  code *pcVar2;
  atomic<int> aVar3;
  char cVar4;
  atomic<int> aVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  FSlateColor *this_00;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  undefined1 auStackY_b8 [32];
  FLinearColor_u_0 local_88;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  TVector2<float>_u_0 local_68;
  float local_60;
  undefined8 local_5c;
  FDeprecateSlateVector2D local_54;
  float local_4c [2];
  float afStack_44 [2];
  TVector2<float>_u_0 local_3c;
  byte local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pTVar11 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar10 = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar11->SharedReferenceCount;
    do {
      pTVar10 = pTVar9;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142984705;
      LOCK();
      aVar5 = pTVar11->SharedReferenceCount;
      bVar12 = aVar3 == aVar5;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar12);
    pTVar9 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar10 = pTVar11;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) goto LAB_142984756;
  }
LAB_142984705:
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar12) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  pTVar11 = pTVar10;
  if ((pTVar9 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
LAB_142984756:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar7 = (undefined8 *)(**(code **)(pTVar9->_padding_ + 0xe8))(pTVar9,local_78);
  cVar4 = (**(code **)(*(longlong *)*puVar7 + 0x1a0))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  lVar8 = (**(code **)(pTVar9->_padding_ + 0x48))(pTVar9,this);
  if (lVar8 == 0) {
    cVar4 = (**(code **)(pTVar9->_padding_ + 200))(pTVar9);
    if ((cVar4 == '\0') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar12)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
  }
  else if (((cVar4 != '\0') && (cVar4 = (**(code **)pTVar9->_padding_)(pTVar9), cVar4 != '\0')) &&
          (cVar4 = (**(code **)(pTVar9->_padding_ + 8))(pTVar9,lVar8), cVar4 != '\0')) {
    EVar1 = (this->Style->SelectorFocusedBrush).TintColor.ColorUseRule;
    this_00 = &(this->Style->SelectorFocusedBrush).TintColor;
    if (EVar1 != UseColor_Specified) {
      if (EVar1 == UseColor_ColorTable) {
        this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
      }
      else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
        this_00 = (FSlateColor *)&param_6->ForegroundColor;
      }
      else {
        this_00 = (FSlateColor *)&param_6->SubduedForeground;
      }
    }
    local_68 = (param_2->AbsolutePosition).field0_0x0;
    local_88._s_0.R =
         (this_00->SpecifiedColor).field0_0x0._s_0.R *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_54 = param_2->Size;
    local_88._s_0.G =
         *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 4) *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_88._s_0.B =
         *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 8) *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_34 = param_2->bHasRenderTransform * '\x02' | local_34 & 0xfc;
    local_88._s_0.A =
         *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 0xc) *
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_60 = param_2->Scale;
    local_4c = (param_2->AccumulatedRenderTransform).M.M[0];
    afStack_44 = (param_2->AccumulatedRenderTransform).M.M[1];
    local_3c = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
    local_5c = 0;
    FSlateDrawElement::MakeBox
              (param_4,param_5,(FPaintGeometry *)&local_68._s_0,&this->Style->SelectorFocusedBrush,
               None,(FLinearColor *)&local_88._s_0);
    param_5 = param_5 + 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return param_5;
}

// Private_OnExpanderArrowShiftClicked @ 142986990

void __thiscall
STableRow<TSharedPtr<FString,1>_>::Private_OnExpanderArrowShiftClicked
          (STableRow<TSharedPtr<FString,1>_> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  undefined8 local_18;
  longlong local_10;
  
  pTVar8 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429869d5;
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar9 = aVar2 == aVar4;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar9);
    pTVar6 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar7 = pTVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_142986a26;
  }
LAB_1429869d5:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  if (bVar9) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar8 = pTVar7;
  if ((pTVar6 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_142986a26:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  cVar3 = (**(code **)(pTVar6->_padding_ + 0x68))(pTVar6,this->IndexInList);
  if (cVar3 != '\0') {
    puVar5 = (undefined8 *)(**(code **)(pTVar6->_padding_ + 0x48))(pTVar6,this);
    if (puVar5 == (undefined8 *)0x0) {
      cVar3 = (**(code **)(pTVar6->_padding_ + 200))(pTVar6);
      if ((cVar3 == '\0') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("OwnerTable->Private_IsPendingRefresh()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                             ,0x4cf,
                             L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                            ), bVar9)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      cVar3 = (**(code **)(pTVar6->_padding_ + 0x60))(pTVar6,puVar5);
      local_10 = puVar5[1];
      local_18 = *puVar5;
      pcVar1 = *(code **)(pTVar6->_padding_ + 0x58);
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      (*pcVar1)(pTVar6,&local_18,cVar3 == '\0');
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// ResetRow @ 14298ac60

void __thiscall STableRow<TSharedPtr<FString,1>_>::ResetRow(STableRow<TSharedPtr<FString,1>_> *this)

{
  return;
}

// SetContent @ 14298ede0

void __thiscall
STableRow<TSharedPtr<FString,1>_>::SetContent
          (STableRow<TSharedPtr<FString,1>_> *this,TSharedRef<SWidget,1> *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  SWidget *pSVar4;
  SWidget *pSVar5;
  FSlotBase *this_00;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<SWidget,1> local_18;
  
  this->InnerContentSlot = (FSlotBase *)param_1->Object;
  pSVar4 = (SWidget *)(param_1->SharedReferenceCount).ReferenceController;
  if (pSVar4 != (this->Content).Object) {
    if (pSVar4 != (SWidget *)0x0) {
      LOCK();
      puVar1 = (undefined1 *)((longlong)&pSVar4->_padding_ + 4);
      *(int *)puVar1 = *(int *)puVar1 + 1;
      UNLOCK();
    }
    pSVar5 = (this->Content).Object;
    if (pSVar5 != (SWidget *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)&pSVar5->_padding_ + 4);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(pSVar5->_padding_ + 8))(pSVar5,1);
      }
    }
    (this->Content).Object = pSVar4;
  }
  this_00 = *(FSlotBase **)&(this->OnDrop_Handler).field_0x10;
  if (this_00 == (FSlotBase *)0x0) {
    local_18.Object = param_1->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SBorder::SetContent((SBorder *)this,&local_18);
  }
  else {
    FSlotBase::DetatchParentFromContent(this_00);
    pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
    pSVar4 = param_1->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (this_00->Widget).SharedReferenceCount.ReferenceController;
    (this_00->Widget).Object = pSVar4;
    (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    FSlotBase::AfterContentOrOwnerAssigned(this_00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIndexInList @ 142990f50

void __thiscall
STableRow<TSharedPtr<FString,1>_>::SetIndexInList
          (STableRow<TSharedPtr<FString,1>_> *this,int param_1)

{
  this->IndexInList = param_1;
  return;
}

// SetRowContent @ 1429988a0

void __thiscall
STableRow<TSharedPtr<FString,1>_>::SetRowContent
          (STableRow<TSharedPtr<FString,1>_> *this,TSharedRef<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  longlong *this_00;
  
  (this->Content).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->Content).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->Content).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->Content).WeakReferenceCount.ReferenceController = pTVar3;
  }
  this->InnerContentSlot = (FSlotBase *)0x0;
  this_00 = &this->_padding_;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar5 = param_1->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar5;
  this->_padding_ = (longlong)pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ToggleExpansion @ 1429ac470

void __thiscall
STableRow<TSharedPtr<FString,1>_>::ToggleExpansion(STableRow<TSharedPtr<FString,1>_> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  undefined8 local_18;
  longlong local_10;
  
  pTVar8 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1429ac4b5;
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar9 = aVar2 == aVar4;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar9);
    pTVar6 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar7 = pTVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_1429ac506;
  }
LAB_1429ac4b5:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  if (bVar9) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar8 = pTVar7;
  if ((pTVar6 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1429ac506:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  cVar3 = (**(code **)(pTVar6->_padding_ + 0x68))(pTVar6,this->IndexInList);
  if (cVar3 != '\0') {
    puVar5 = (undefined8 *)(**(code **)(pTVar6->_padding_ + 0x48))(pTVar6,this);
    if (puVar5 == (undefined8 *)0x0) {
      cVar3 = (**(code **)(pTVar6->_padding_ + 200))(pTVar6);
      if ((cVar3 == '\0') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("OwnerTable->Private_IsPendingRefresh()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                             ,0x4cf,
                             L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                            ), bVar9)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      cVar3 = (**(code **)(pTVar6->_padding_ + 0x60))(pTVar6,puVar5);
      local_10 = puVar5[1];
      local_18 = *puVar5;
      pcVar1 = *(code **)(pTVar6->_padding_ + 0x50);
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      (*pcVar1)(pTVar6,&local_18,cVar3 == '\0');
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

