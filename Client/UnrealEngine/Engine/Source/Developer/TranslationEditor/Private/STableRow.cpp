// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 41

// STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> @ 146b967b0

STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  byte *pbVar1;
  
  this->_padding_ = (longlong)&___7ITableRow__6B_;
  SBorder::SBorder((SBorder *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__ITableRow__;
  this->_padding_ = (longlong)&_vftable__for__SBorder__;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 4;
  (this->OwnerTablePtr).Object = (ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0;
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

// ~STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> @ 146b98980

void __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::
~STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
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
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrop_Handler);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDragLeave_Handler);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDragEnter_Handler);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDragDetected_Handler);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PaintDropIndicatorEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCanAcceptDrop);
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

// operator() @ 146b99bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::OnDrop'::__l2::<lambda_1>::operator()
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
    goto LAB_146b99f9c;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)(local_1b0 + 0x40));
  lVar1 = *(longlong *)this;
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  pTVar14 = *(TReferenceControllerBase<1> **)(lVar1 + 0x2f0);
  pTVar13 = pTVar14;
  pTVar15 = pTVar16;
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
LAB_146b99c65:
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
      if (aVar5 == (atomic<int>)0x0) goto LAB_146b99c65;
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
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) goto LAB_146b99c65;
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
      TVar12 = TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
               ::Execute((void *)(lVar1 + 0x328),(FDragDropEvent *)local_1b0,
                         (EItemDropZone)*(undefined8 *)((longlong)this + 0x10),
                         (TSharedPtr<FTranslationPickerTextItem,1> *)pTVar13);
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
LAB_146b99f9c:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// operator() @ 146b9a0d0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<EItemDropZone> __thiscall
`STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::OnDragOver'::__l5::<lambda_1>::operator()
          (void *this)

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
      if (aVar4 == (atomic<int>)0x0) goto LAB_146b9a125;
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
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) goto LAB_146b9a176;
  }
LAB_146b9a125:
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
LAB_146b9a176:
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
    TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FTranslationPickerTextItem,1>),FDefaultDelegateUserPolicy>
    ::Execute((void *)(lVar2 + 0x328),(FDragDropEvent *)in_RDX,(int)this + 8,
              (TSharedPtr<FTranslationPickerTextItem,1> *)(ulonglong)*(uint *)this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return in_RDX;
}

// AsWidget @ 146b9cad0

TSharedRef<SWidget,1> * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::AsWidget
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__)

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

// ConstructChildren @ 146ba58f0

void __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::ConstructChildren
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,Type param_1,
          TAttribute<FMargin> *param_2,TSharedRef<SWidget,1> *param_3)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  longlong *this_00;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSlotBase *pFVar6;
  SHorizontalBox *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  FArguments *pFVar9;
  FSlotArguments *pFVar10;
  FSizeParam *pFVar11;
  FArguments *pFVar12;
  TSharedRef<SWidget,1> *pTVar13;
  TSharedRef<SExpanderArrow,1> *pTVar14;
  FSlotArguments *pFVar15;
  TSharedRef<SHorizontalBox,1> *pTVar16;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *this_01;
  FArguments *local_res8;
  T0RequiredArgs local_res10 [8];
  FName local_res20;
  TSharedRef<SWidget,1> local_7d8;
  undefined1 local_7c8;
  undefined1 local_7c7;
  undefined1 local_7c0 [8];
  ForAnyElementType FStack_7b8;
  ulonglong local_7b0;
  SExpanderArrow *local_7a8;
  FSharedReferencer<1> local_7a0;
  SWidget *local_798;
  FSharedReferencer<1> local_790;
  SExpanderArrow *local_788;
  FSharedReferencer<1> local_780;
  bool local_778;
  TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1> local_770;
  undefined4 local_760 [2];
  undefined4 local_758 [2];
  T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&> local_750;
  TAttribute<FMargin> local_748;
  TAttribute<float> local_718;
  TSharedRef<SHorizontalBox,1> local_6f8;
  TSharedRef<SExpanderArrow,1> local_6e8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_6d8;
  undefined1 local_6c0 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_690;
  undefined8 *local_678 [2];
  TReferenceControllerBase<1> *local_668;
  TDelegateBase<FNotThreadSafeDelegateMode> local_648 [2];
  TDelegateBase<FNotThreadSafeDelegateMode> local_610;
  TDelegateBase<FNotThreadSafeDelegateMode> local_5f0;
  char local_5d8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_5c8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_5a8;
  undefined8 *local_590 [2];
  TReferenceControllerBase<1> *local_580;
  TDelegateBase<FNotThreadSafeDelegateMode> local_560 [2];
  TDelegateBase<FNotThreadSafeDelegateMode> local_528;
  TDelegateBase<FNotThreadSafeDelegateMode> local_508;
  char local_4f0;
  TDelegateBase<FNotThreadSafeDelegateMode> local_4e0;
  TDelegateBase<FNotThreadSafeDelegateMode> local_4c0;
  FArguments local_4a8;
  FArguments local_2a0;
  
  (this->Content).Object = param_3->Object;
  pTVar4 = (param_3->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (this->Content).WeakReferenceCount.ReferenceController) {
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->Content).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    (this->Content).WeakReferenceCount.ReferenceController = pTVar4;
  }
  this->InnerContentSlot = (FSlotBase *)0x0;
  if (param_1 < Tree) {
    local_748.Value.Left = (param_2->Value).Left;
    local_748.Value.Top = (param_2->Value).Top;
    local_748.Value.Right = (param_2->Value).Right;
    local_748.Value.Bottom = (param_2->Value).Bottom;
    local_748.bIsSet = param_2->bIsSet;
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>(&local_748.Getter,&param_2->Getter);
    this_01 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                        ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                          *)&this->_padding_,&local_748);
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               this_01,param_3);
    this->InnerContentSlot = (FSlotBase *)&this->_padding_;
  }
  else {
    pFVar9 = SHorizontalBox::FArguments::FArguments(&local_4a8);
    pFVar10 = SHorizontalBox::Slot((FSlotArguments *)local_590);
    pFVar11 = (FSizeParam *)FAuto::FAuto((FAuto *)local_6c0);
    TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)&pFVar10->field_0x58,pFVar11);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_690);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_6c0 + 0x10));
    puVar2 = &pFVar10->field_0x48;
    if (local_760 != (undefined4 *)puVar2) {
      *(undefined4 *)puVar2 = 3;
      pFVar10->field_0x4c = 1;
    }
    pFVar15 = (FSlotArguments *)0x0;
    if (puVar2 != (undefined1 *)0x0) {
      pFVar15 = pFVar10;
    }
    if (local_758 != (undefined4 *)&pFVar15->field_0x50) {
      *(undefined4 *)&pFVar15->field_0x50 = 0;
      pFVar15->field_0x54 = 1;
    }
    pFVar10 = (FSlotArguments *)0x0;
    if (pFVar15 != (FSlotArguments *)0xffffffffffffffb8) {
      pFVar10 = pFVar15;
    }
    pFVar12 = SExpanderArrow::FArguments::FArguments(&local_2a0);
    pFVar12->_StyleSet = this->ExpanderStyleSet;
    local_7c8 = this->bShowWires;
    local_7c7 = 1;
    local_7b0 = 0;
    local_7c0 = (undefined1  [8])0x0;
    FStack_7b8.Data = (FScriptContainerElement *)0x0;
    (pFVar12->_ShouldDrawWires).Value = (bool)local_7c8;
    (pFVar12->_ShouldDrawWires).bIsSet = true;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_ShouldDrawWires).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7c0,
               (FWriteAccessScope *)&local_788);
    if (((int)local_7b0 != 0) && (FStack_7b8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_7b8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7b8,0,0,0x10);
      local_7b0 = local_7b0 & 0xffffffff00000000;
    }
    if (local_778 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_780.ReferenceController,
                 (FDestructionSentinel *)&local_788);
    }
    if (FStack_7b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_7b8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_7c0);
    pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_7d8);
    if (pTVar13->Object == (SWidget *)0x0) {
      local_770.Object = (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0;
    }
    else {
      local_770.Object =
           (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)&pTVar13->Object[-1].StatID;
    }
    local_770.SharedReferenceCount.ReferenceController =
         (pTVar13->SharedReferenceCount).ReferenceController;
    if (local_770.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_770.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_770.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7d8.SharedReferenceCount.ReferenceController);
    local_750.Arg0 = &local_770;
    FLLMScope::FLLMScope
              ((FLLMScope *)&local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,
               true);
    local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_7d8,&local_res20,true);
    TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
    ::
    TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
              ((TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
                *)&local_788,"SExpanderArrow",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
               ,0xd2,&local_750);
    FMemScope::~FMemScope((FMemScope *)&local_7d8);
    FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
    if (local_780.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_780.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_780.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->ExpanderArrowWidget).SharedReferenceCount.ReferenceController;
    (this->ExpanderArrowWidget).Object = local_788;
    (this->ExpanderArrowWidget).SharedReferenceCount.ReferenceController =
         local_780.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar14 = TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
              ::operator<<=((TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>,1>_&&>_>
                             *)&local_788,&local_6e8,pFVar12);
    pTVar4 = (pTVar14->SharedReferenceCount).ReferenceController;
    local_7a8 = pTVar14->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_7a0.ReferenceController = pTVar4;
    if ((SExpanderArrow **)&pFVar10->field_0x8 != &local_7a8) {
      *(SExpanderArrow **)&pFVar10->field_0x8 = local_7a8;
      local_7a8 = (SExpanderArrow *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar10->field_0x10,&local_7a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7a0.ReferenceController);
    local_res8 = SHorizontalBox::FArguments::operator+(pFVar9,pFVar10);
    pFVar10 = SHorizontalBox::Slot((FSlotArguments *)local_678);
    local_718.Value = 1.0;
    local_718.Getter._16_8_ = 0;
    local_718.bIsSet = true;
    local_718.Getter._0_8_ = 0;
    local_718.Getter._8_8_ = 0;
    pFVar15 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(pFVar10,&local_718);
    local_748.bIsSet = param_2->bIsSet;
    local_748.Value.Left = (param_2->Value).Left;
    local_748.Value.Top = (param_2->Value).Top;
    local_748.Value.Right = (param_2->Value).Right;
    local_748.Value.Bottom = (param_2->Value).Bottom;
    pFVar6 = *(FSlotBase **)pFVar15;
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>(&local_748.Getter,&param_2->Getter);
    *(float *)&pFVar15->field_0x18 = local_748.Value.Left;
    *(float *)&pFVar15->field_0x1c = local_748.Value.Top;
    *(float *)&pFVar15->field_0x20 = local_748.Value.Right;
    *(float *)&pFVar15->field_0x24 = local_748.Value.Bottom;
    pFVar15->field_0x28 = local_748.bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar15->field_0x30,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_748.Getter);
    pFVar10 = (FSlotArguments *)0x0;
    if (&pFVar15->field_0x18 != (undefined1 *)0x0) {
      pFVar10 = pFVar15;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_748.Getter);
    local_790.ReferenceController = (param_3->SharedReferenceCount).ReferenceController;
    local_798 = param_3->Object;
    if (local_790.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_790.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_790.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((SWidget **)&pFVar10->field_0x8 != &local_798) {
      *(SWidget **)&pFVar10->field_0x8 = local_798;
      local_798 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar10->field_0x10,&local_790);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_790.ReferenceController);
    pFVar9 = SHorizontalBox::FArguments::operator+(local_res8,pFVar10);
    FLLMScope::FLLMScope
              ((FLLMScope *)&local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,
               true);
    local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope((FMemScope *)&local_7d8,&local_res20,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_6d8,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
               ,0xcb,local_res10);
    FMemScope::~FMemScope((FMemScope *)&local_7d8);
    FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
    pTVar16 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_6d8,&local_6f8,pFVar9);
    this_00 = &this->_padding_;
    pTVar5 = (pTVar16->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar16->Object;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    }
    else {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)pSVar7;
    this->_padding_ = (longlong)pTVar5;
    local_7d8.Object = (SWidget *)pSVar7;
    local_7d8.SharedReferenceCount.ReferenceController = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6d8._Widget.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_5a8);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_5c8);
    if (local_5d8 != '\0') {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_5f0);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_610);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(local_648)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_668);
    if (local_678[0] != (undefined8 *)0x0) {
      (**(code **)*local_678[0])(local_678[0],1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_780.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_770.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2a0._ShouldDrawWires.Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2a0._BaseIndentLevel.Getter);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2a0._IndentAmount.Getter);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_2a0);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_4c0);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_4e0);
    if (local_4f0 != '\0') {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_508);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_528);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(local_560)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_580);
    if (local_590[0] != (undefined8 *)0x0) {
      (**(code **)*local_590[0])(local_590[0],1);
    }
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_4a8._Slots.AllocatorInstance.Data,local_4a8._Slots.ArrayNum);
    if ((FSlotArguments *)local_4a8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_4a8._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4a8);
    this->InnerContentSlot = pFVar6;
  }
  return;
}

// ConstructInternal @ 146ba6010

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::ConstructInternal
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FArguments *param_1,
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
  ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *pIVar13;
  ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *pIVar14;
  TReferenceControllerBase<1> *pTVar15;
  undefined1 local_228 [8];
  ForAnyElementType FStack_220;
  int local_218;
  undefined1 local_210 [8];
  ForAnyElementType local_208;
  int local_200;
  undefined1 local_1f8 [8];
  ForAnyElementType local_1f0;
  int local_1e8;
  undefined1 local_1e0 [8];
  ForAnyElementType local_1d8;
  int local_1d0;
  FLinearColor_u_0 local_1c8;
  undefined1 local_1b8;
  undefined1 local_1b4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1b0;
  FDelegateAllocation FStack_1a8;
  TSharedRef<SWidget_const_,1> local_198;
  undefined1 local_188 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_178;
  FDelegateAllocation FStack_170;
  FDestructionSentinel local_160;
  FDestructionSentinel local_148;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDelegateAllocation *local_d0;
  FDestructionSentinel local_c8;
  FDelegateAllocation *local_b0;
  TSharedRef<SWidget_const_,1> local_a8;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  pIVar14 = (ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0;
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
  local_178.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_170.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_188._0_8_ = (FSlateBrush *)0x0;
  local_188[8] = true;
  FStack_170.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_178,(FWriteAccessScope *)&local_e8);
  local_d0 = &FStack_170;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,&FStack_170);
  pIVar13 = pIVar14;
  pTVar15 = (TReferenceControllerBase<1> *)param_2;
  if (puVar10 != (undefined8 *)0x0) {
    local_228 = (undefined1  [8])_vcall__152__flat______;
    FStack_220.Data =
         (FScriptContainerElement *)
         ((ulonglong)local_198.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_a8);
    pTVar15 = (pTVar11->SharedReferenceCount).ReferenceController;
    pIVar13 = (ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)
              &pTVar11->Object[-1].StatID;
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
               ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_UFTranslationPickerTextItem___00_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = pIVar13;
    puVar10[4] = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(undefined1 (*) [8])(puVar10 + 5) = local_228;
    puVar10[6] = FStack_220.Data;
    pIVar13 = (ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x7;
  }
  if (((ulonglong)pIVar13 & 4) != 0) {
    pIVar13 = (ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)
              (ulonglong)((uint)pIVar13 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (((ulonglong)pIVar13 & 2) != 0) {
    pIVar13 = (ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)
              (ulonglong)((uint)pIVar13 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (((ulonglong)pIVar13 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  bVar8 = false;
  bVar7 = false;
  bVar9 = false;
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  SBorder::SetBorderImage((SBorder *)&this->_padding_,(TAttribute<FSlateBrush_const_*> *)local_188);
  local_1c8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_1c8._8_8_ = _UNK_15090c6d8;
  local_1b8 = 0;
  local_1b4 = 1;
  local_1b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_1a8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1b0,(FWriteAccessScope *)&local_c8);
  local_b0 = &FStack_1a8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,&FStack_1a8);
  pTVar15 = (TReferenceControllerBase<1> *)param_2;
  if (puVar10 != (undefined8 *)0x0) {
    local_228 = (undefined1  [8])GetForegroundBasedOnSelection;
    FStack_220.Data =
         (FScriptContainerElement *)
         ((ulonglong)local_198.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_198);
    pTVar15 = (pTVar11->SharedReferenceCount).ReferenceController;
    pIVar13 = (ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)
              &pTVar11->Object[-1].StatID;
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
               ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_V__TSharedPtr_UFTranslationPickerTextItem___00_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = pIVar13;
    puVar10[4] = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(undefined1 (*) [8])(puVar10 + 5) = local_228;
    puVar10[6] = FStack_220.Data;
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
               CONCAT44(local_198.SharedReferenceCount.ReferenceController._4_4_,
                        local_198.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)&this->_padding_,
           (TAttribute<FSlateColor> *)&local_1c8._s_0,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1b0,(FWriteAccessScope *)&local_160);
  if ((FStack_1a8.DelegateSize != 0) &&
     (FStack_1a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_1a8,0,0,0x10);
    FStack_1a8.DelegateSize = 0;
  }
  if (local_160.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
  }
  if (FStack_1a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_1a8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1b0.AccessDetector);
  if (&param_1->_OnCanAcceptDrop != &this->OnCanAcceptDrop) {
    local_228 = (undefined1  [8])0x0;
    FStack_220.Data = (FScriptContainerElement *)0x0;
    local_218 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnCanAcceptDrop,
               &local_98);
    if ((*(int *)&(param_1->_OnCanAcceptDrop).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnCanAcceptDrop).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_228);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_98);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCanAcceptDrop,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_228);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_228,
               (FWriteAccessScope *)&local_148);
    if ((local_218 != 0) && (FStack_220.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_220.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_220,0,0,0x10);
      local_218 = 0;
    }
    if (local_148.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
    }
    if (FStack_220.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_220.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_228);
  }
  if (&param_1->_OnAcceptDrop != &this->OnAcceptDrop) {
    local_210 = (undefined1  [8])0x0;
    local_208.Data = (FScriptContainerElement *)0x0;
    local_200 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnAcceptDrop,
               &local_80);
    if ((*(int *)&(param_1->_OnAcceptDrop).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnAcceptDrop).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_210);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_80);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAcceptDrop,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_210);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_210,
               (FWriteAccessScope *)&local_130);
    if ((local_200 != 0) && (local_208.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_208.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_208,0,0,0x10);
      local_200 = 0;
    }
    if (local_130.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
    }
    if (local_208.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_210);
  }
  if (&param_1->_OnDragDetected != &this->OnDragDetected_Handler) {
    local_1f8 = (undefined1  [8])0x0;
    local_1f0.Data = (FScriptContainerElement *)0x0;
    local_1e8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnDragDetected,
               &local_68);
    if ((*(int *)&(param_1->_OnDragDetected).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnDragDetected).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_1f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDragDetected_Handler,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f8,
               (FWriteAccessScope *)&local_118);
    if ((local_1e8 != 0) && (local_1f0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_1f0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1f0,0,0,0x10);
      local_1e8 = 0;
    }
    if (local_118.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
    }
    if (local_1f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1f8);
  }
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDragEnter_Handler,&param_1->_OnDragEnter);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDragLeave_Handler,&param_1->_OnDragLeave);
  if (&param_1->_OnDrop != &this->OnDrop_Handler) {
    local_1e0 = (undefined1  [8])0x0;
    local_1d8.Data = (FScriptContainerElement *)0x0;
    local_1d0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnDrop,&local_50
              );
    if ((*(int *)&(param_1->_OnDrop).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnDrop).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_1e0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnDrop_Handler,
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
    pIVar14 = (ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)&pSVar4->field_0x588;
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

// CreateAccessibleWidget @ 146ba6ae0

/* WARNING: Type propagation algorithm not settling */

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::CreateAccessibleWidget
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
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
      goto LAB_146ba6c49;
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
LAB_146ba6c49:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)TVar9.Object);
  return __return_storage_ptr__;
}

// DoesItemHaveChildren @ 146ba94a0

int __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::DoesItemHaveChildren
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_146ba94e1;
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
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_146ba9507;
  }
LAB_146ba94e1:
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
LAB_146ba9507:
  bVar3 = (**(code **)(pTVar6->_padding_ + 0x68))(pTVar6,this->IndexInList);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return (uint)bVar3;
}

// GetBorder @ 146babf10

FSlateBrush * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::GetBorder
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

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
LAB_146babf56:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_146babf56;
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
    if (pTVar18 == (TReferenceControllerBase<1> *)0x0) goto LAB_146babf56;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar11 = (undefined8 *)(**(code **)(pTVar18->_padding_ + 0xe8))(pTVar18,local_38);
  cVar4 = (**(code **)(*(longlong *)*puVar11 + 0x1a0))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  cVar5 = (**(code **)(pTVar18->_padding_ + 0x68))(pTVar18,this->IndexInList);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::GetBorder(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::GetBorder(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::GetBorder(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::GetBorder(void)const___ptr64'
                    ::__l2::GenericWhiteBoxBrush,"GenericWhiteBox");
    _Init_thread_footer(&`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::GetBorder(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pIVar12 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar12 + 0x50))
            (pIVar12,`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::GetBorder(void)const___ptr64'
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
            goto LAB_146bac25c;
          }
        }
        else if (cVar5 == '\0') {
          pFVar14 = &pFVar1->ActiveHighlightedBrush;
          goto LAB_146bac25c;
        }
        lVar13 = 0x4f0;
        if (bVar15 == 0) {
          lVar13 = 0x650;
        }
        pFVar14 = (FSlateBrush *)((longlong)&pFVar1->_padding_ + lVar13);
        goto LAB_146bac25c;
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
      goto LAB_146bac25c;
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
LAB_146bac25c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  return pFVar14;
}

// GetContent @ 146bac3d0

TSharedPtr<SWidget,1> * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::GetContent
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TSharedPtr<SWidget,1> *__return_storage_ptr__)

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

// GetForegroundBasedOnSelection @ 146bac5b0

FSlateColor * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::GetForegroundBasedOnSelection
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          FSlateColor *__return_storage_ptr__)

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
      if (aVar5 == (atomic<int>)0x0) goto LAB_146bac5f1;
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
LAB_146bac5f1:
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
      goto LAB_146bac6b2;
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
LAB_146bac6b2:
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

// GetIndentLevel @ 146baeaa0

int __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::GetIndentLevel
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_146baeae1;
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
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_146baeb07;
  }
LAB_146baeae1:
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
LAB_146baeb07:
  iVar4 = (**(code **)(pTVar5->_padding_ + 0x88))(pTVar5,this->IndexInList);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return iVar4;
}

// GetIndexInList @ 146baeb50

int __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::GetIndexInList
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  return this->IndexInList;
}

// GetRowSizeForColumn @ 146bafbb0

TVector2<double> * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::GetRowSizeForColumn
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
          TVector2<double> *__return_storage_ptr__,FName *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetSelectionMode @ 146bb0320

Type __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::GetSelectionMode
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_146bb0353;
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
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_146bb0379;
  }
LAB_146bb0353:
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
LAB_146bb0379:
  TVar4 = (**(code **)(pTVar5->_padding_ + 0xb8))(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return TVar4;
}

// GetWiresNeededByDepth @ 146bb05b0

TBitArray<FDefaultBitArrayAllocator> * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::GetWiresNeededByDepth
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,
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
  ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *pIVar10;
  bool bVar11;
  
  pTVar9 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pIVar10 = (ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146bb05f4;
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
    if (pIVar10 != (ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0)
    goto LAB_146bb061a;
  }
LAB_146bb05f4:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar11) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar3)();
    return pTVar7;
  }
LAB_146bb061a:
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

// InitializeRow @ 146bb2850

void __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::InitializeRow
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  return;
}

// IsItemExpanded @ 146bb2880

bool __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::IsItemExpanded
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_146bb28c5;
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
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_146bb2916;
  }
LAB_146bb28c5:
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
LAB_146bb2916:
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

// IsItemSelected @ 146bb29b0

bool __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::IsItemSelected
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_146bb29f5;
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
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_146bb2a46;
  }
LAB_146bb29f5:
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
LAB_146bb2a46:
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

// IsLastChild @ 146bb2ae0

bool __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::IsLastChild
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_146bb2b21;
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
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_146bb2b47;
  }
LAB_146bb2b21:
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
LAB_146bb2b47:
  uVar3 = (**(code **)(pTVar5->_padding_ + 0x98))(pTVar5,this->IndexInList);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return (bool)uVar3;
}

// OnDragDetected @ 146bb4e30

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::OnDragDetected
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FReply *__return_storage_ptr__
          ,FGeometry *param_1,FPointerEvent *param_2)

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
        if (aVar2 == (atomic<int>)0x0) goto LAB_146bb4ea1;
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
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) goto LAB_146bb4ec7;
    }
LAB_146bb4ea1:
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
LAB_146bb4ec7:
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
     (this->IndexInList != 0)) goto LAB_146bb4fb9;
  pTVar10 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar9 = pTVar10;
  pTVar7 = pTVar8;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_146bb4f75:
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_146bb4f75;
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
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_146bb4f75;
  }
  (**(code **)(pTVar7->_padding_ + 0x40))(pTVar7,2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_146bb4fb9:
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

// OnDragEnter @ 146bb5080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::OnDragEnter
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FGeometry *param_1,
          FDragDropEvent *param_2)

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

// OnDragLeave @ 146bb5110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::OnDragLeave
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FDragDropEvent *param_1)

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

// OnDragOver @ 146bb51b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::OnDragOver
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FReply *__return_storage_ptr__
          ,FGeometry *param_1,FDragDropEvent *param_2)

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
      if (aVar5 == (atomic<int>)0x0) goto LAB_146bb5275;
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
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) goto LAB_146bb52c6;
  }
LAB_146bb5275:
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
LAB_146bb52c6:
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
  TVar11 = `STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::OnDragOver'::__l5::<lambda_1>::
           operator()(local_140);
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

// OnDrop @ 146bb5530

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::OnDrop
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FReply *__return_storage_ptr__
          ,FGeometry *param_1,FDragDropEvent *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *this_00;
  undefined1 local_e8 [32];
  FReply local_c8;
  
  local_e8._0_8_ = &this[-1].bChangedSelectionOnMouseDown;
  local_e8._8_8_ = param_1;
  local_e8._16_8_ = param_2;
  `STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::OnDrop'::__l2::<lambda_1>::operator()
            (local_e8,&local_c8);
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
        goto LAB_146bb55f5;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_e8);
  }
  FReply::FReply(__return_storage_ptr__,&local_c8);
LAB_146bb55f5:
  FReply::~FReply(&local_c8);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 146bb6270

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::OnMouseButtonDoubleClick
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FReply *__return_storage_ptr__
          ,FGeometry *param_1,FPointerEvent *param_2)

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
  if (bVar11) goto LAB_146bb63f0;
  pTVar10 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_146bb62e5:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_146bb62e5;
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
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_146bb62e5;
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
LAB_146bb63f0:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 146bb6520

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::OnMouseButtonDown
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FReply *__return_storage_ptr__
          ,FGeometry *param_1,FPointerEvent *param_2)

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
LAB_146bb6576:
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
      if (aVar5 == (atomic<int>)0x0) goto LAB_146bb6576;
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
    if (pSVar14 == (SWidget *)0x0) goto LAB_146bb6576;
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
          if ((param_2->_padding_ & 0xc) == 0) goto LAB_146bb6707;
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
LAB_146bb6707:
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
      goto LAB_146bb692c;
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
LAB_146bb692c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar17);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 146bb6a60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::OnMouseButtonUp
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FReply *__return_storage_ptr__
          ,FGeometry *param_1,FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  TReferenceControllerBase<1> *pTVar7;
  FName FVar8;
  code *pcVar9;
  FWeakReferencer<1> FVar10;
  bool bVar11;
  char cVar12;
  atomic<int> aVar13;
  int iVar14;
  FReply *pFVar15;
  undefined8 *puVar16;
  STableViewBase *pSVar17;
  STableViewBase *pSVar18;
  STableViewBase *pSVar19;
  STableViewBase *pSVar20;
  bool bVar21;
  float local_res8;
  float fStackX_c;
  TVector2<float>_u_0 local_528;
  float local_520;
  float local_51c;
  float local_518;
  float local_514;
  undefined8 local_510;
  longlong local_508;
  undefined8 local_500;
  longlong local_4f8;
  undefined8 local_4f0;
  longlong local_4e8;
  undefined8 local_4e0;
  longlong local_4d8;
  FReply local_4d0;
  FReply local_418;
  FReply local_360;
  FReply local_2a8;
  FReply local_1e8;
  FReply local_128;
  
  pSVar18 = (STableViewBase *)(this->OwnerTablePtr).Object;
  pSVar20 = (STableViewBase *)0x0;
  pSVar17 = pSVar18;
  pSVar19 = (STableViewBase *)0x0;
  if (pSVar18 == (STableViewBase *)0x0) {
LAB_146bb6ace:
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar21) {
      pcVar9 = (code *)swi(3);
      pFVar15 = (FReply *)(*pcVar9)();
      return pFVar15;
    }
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    pSVar18 = pSVar17;
    if (bVar21) {
      pcVar9 = (code *)swi(3);
      pFVar15 = (FReply *)(*pcVar9)();
      return pFVar15;
    }
  }
  else {
    aVar2 = *(atomic<int> *)&pSVar18->field_0x8;
    do {
      pSVar17 = pSVar20;
      pSVar19 = pSVar20;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146bb6ace;
      LOCK();
      aVar13 = *(atomic<int> *)&pSVar18->field_0x8;
      bVar21 = aVar2 == aVar13;
      if (bVar21) {
        *(atomic<int> *)&pSVar18->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar13 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar13;
    } while (!bVar21);
    pSVar19 = (STableViewBase *)this->_padding_;
    pSVar17 = pSVar18;
    if (pSVar19 == (STableViewBase *)0x0) goto LAB_146bb6ace;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pSVar17 = (STableViewBase *)&pSVar19[-1].field_0x8;
  if (pSVar19 == (STableViewBase *)0x0) {
    pSVar17 = pSVar20;
  }
  if (pSVar18 != (STableViewBase *)0x0) {
    LOCK();
    *(atomic<int> *)&pSVar18->field_0x8 =
         (atomic<int>)((int)*(atomic<int> *)&pSVar18->field_0x8 + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)&pSVar18->field_0x8 =
         (atomic<int>)((int)*(atomic<int> *)&pSVar18->field_0x8 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar18);
  pTVar7 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar8 = (param_2->EffectingButton).KeyName;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar21 = FVar8 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (bVar21) {
    FReply::FReply(&local_4d0,false);
    FVar10.ReferenceController = local_4d0.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_4d0.MouseCaptor.Object = (SWidget *)0x0;
    local_4d0.MouseCaptor.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar10.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar10.ReferenceController)->_padding_ + 8))(FVar10.ReferenceController,1);
      }
    }
    local_4d0.bUseHighPrecisionMouse = 0;
    local_4d0.bReleaseMouseCapture = 1;
    FReply::FReply(&local_1e8,&local_4d0);
    FReply::~FReply(&local_4d0);
    if (*(char *)&(this->Content).WeakReferenceCount.ReferenceController != '\0') {
      FReply::FReply(&local_418,true);
      FVar10.ReferenceController = local_418.MouseCaptor.WeakReferenceCount.ReferenceController;
      local_418.MouseCaptor.Object = (SWidget *)0x0;
      local_418.MouseCaptor.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FVar10.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar10.ReferenceController)->_padding_ + 8))(FVar10.ReferenceController,1);
        }
      }
      local_418.bUseHighPrecisionMouse = 0;
      local_418.bReleaseMouseCapture = 1;
      FReply::operator=(&local_1e8,&local_418);
      FReply::~FReply(&local_418);
    }
    fVar3 = (param_1->AccumulatedRenderTransform).M.M[1][0];
    fVar4 = (param_1->AccumulatedRenderTransform).M.M[0][0];
    fVar5 = (param_1->AccumulatedRenderTransform).M.M[0][1];
    fVar6 = (param_1->AccumulatedRenderTransform).M.M[1][1];
    fStackX_c = SUB84(param_1->Size,4);
    local_res8 = SUB84(param_1->Size,0);
    local_528._s_0.X =
         fVar4 * 0.0 + fVar3 * 0.0 + (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    local_528._s_0.Y =
         fVar6 * 0.0 + fVar5 * 0.0 + (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
    local_520 = local_res8 * fVar4 + fVar3 * 0.0;
    local_51c = fVar6 * 0.0 + fVar5 * local_res8;
    local_514 = fVar5 * 0.0 + fVar6 * fStackX_c;
    local_518 = fVar4 * 0.0 + fVar3 * fStackX_c;
    bVar21 = FSlateRotatedRect::IsUnderLocation
                       ((FSlateRotatedRect *)&local_528._s_0,
                        *(FDeprecateVector2DParameter *)&param_2->ScreenSpacePosition);
    bVar11 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar11) {
      if ((bVar21) &&
         (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 1) == '\0'))
      {
        iVar14 = (**(code **)(*(longlong *)&this[-1].bChangedSelectionOnMouseDown + 0x78))
                           (&this[-1].bChangedSelectionOnMouseDown);
        if (iVar14 == 2) {
          if (*(char *)&(this->Content).WeakReferenceCount.ReferenceController == '\0') {
            (**(code **)((longlong)
                         *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pSVar19 +
                        0x30))(pSVar19);
            (**(code **)((longlong)
                         *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pSVar19 +
                        0x40))(pSVar19,2);
          }
          FReply::FReply(&local_2a8,true);
          FVar10.ReferenceController = local_2a8.MouseCaptor.WeakReferenceCount.ReferenceController;
          local_2a8.MouseCaptor.Object = (SWidget *)0x0;
          local_2a8.MouseCaptor.WeakReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &(FVar10.ReferenceController)->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)((FVar10.ReferenceController)->_padding_ + 8))
                        (FVar10.ReferenceController,1);
            }
          }
          local_2a8.bUseHighPrecisionMouse = 0;
          local_2a8.bReleaseMouseCapture = 1;
          FReply::operator=(&local_1e8,&local_2a8);
          pFVar15 = &local_2a8;
LAB_146bb6fc6:
          FReply::~FReply(pFVar15);
        }
        else if ((((iVar14 == 3) &&
                  (*(char *)&(this->Content).WeakReferenceCount.ReferenceController == '\0')) &&
                 ((param_2->_padding_ & 0xc) == 0)) && ((param_2->_padding_ & 3) == 0)) {
          puVar16 = (undefined8 *)
                    (**(code **)((longlong)
                                 *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)
                                  pSVar19 + 0x48))(pSVar19,&this[-1].bChangedSelectionOnMouseDown);
          if (puVar16 == (undefined8 *)0x0) {
            cVar12 = (**(code **)((longlong)
                                  *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)
                                   pSVar19 + 200))(pSVar19);
            if ((cVar12 == '\0') &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OwnerTable->Private_IsPendingRefresh()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                                    ,0x4cf,
                                    L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                                   ), bVar21)) {
              pcVar9 = (code *)swi(3);
              pFVar15 = (FReply *)(*pcVar9)();
              return pFVar15;
            }
          }
          else {
            cVar12 = (**(code **)((longlong)
                                  *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)
                                   pSVar19 + 0x10))(pSVar19,puVar16);
            if ((cVar12 != '\0') &&
               (iVar14 = (**(code **)((longlong)
                                      *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *
                                       )pSVar19 + 0x70))(pSVar19), 1 < iVar14)) {
              (**(code **)((longlong)
                           *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pSVar19 +
                          0x30))(pSVar19);
              pcVar9 = *(code **)((longlong)
                                  *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)
                                   pSVar19 + 0x28);
              local_510 = *puVar16;
              local_508 = puVar16[1];
              if (local_508 != 0) {
                LOCK();
                *(int *)(local_508 + 8) = *(int *)(local_508 + 8) + 1;
                UNLOCK();
              }
              (*pcVar9)(pSVar19,&local_510,1);
              (**(code **)((longlong)
                           *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pSVar19 +
                          0x40))(pSVar19,2);
              FReply::FReply(&local_360,true);
              FVar10.ReferenceController =
                   local_360.MouseCaptor.WeakReferenceCount.ReferenceController;
              local_360.MouseCaptor.Object = (SWidget *)0x0;
              local_360.MouseCaptor.WeakReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)0x0;
              if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar1 = &(FVar10.ReferenceController)->WeakReferenceCount;
                aVar2 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if (aVar2 == (atomic<int>)0x1) {
                  (**(code **)((FVar10.ReferenceController)->_padding_ + 8))
                            (FVar10.ReferenceController,1);
                }
              }
              local_360.bUseHighPrecisionMouse = 0;
              local_360.bReleaseMouseCapture = 1;
              FReply::operator=(&local_1e8,&local_360);
              pFVar15 = &local_360;
              goto LAB_146bb6fc6;
            }
          }
        }
      }
      puVar16 = (undefined8 *)
                (**(code **)((longlong)
                             *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pSVar19
                            + 0x48))(pSVar19,&this[-1].bChangedSelectionOnMouseDown);
      if (puVar16 == (undefined8 *)0x0) {
        cVar12 = (**(code **)((longlong)
                              *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pSVar19
                             + 200))(pSVar19);
        if ((cVar12 == '\0') &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("OwnerTable->Private_IsPendingRefresh()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                                ,0x4cf,
                                L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                               ), bVar21)) {
          pcVar9 = (code *)swi(3);
          pFVar15 = (FReply *)(*pcVar9)();
          return pFVar15;
        }
      }
      else {
        pcVar9 = *(code **)((longlong)
                            *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pSVar19 +
                           0xa8);
        local_500 = *puVar16;
        local_4f8 = puVar16[1];
        if (local_4f8 != 0) {
          LOCK();
          *(int *)(local_4f8 + 8) = *(int *)(local_4f8 + 8) + 1;
          UNLOCK();
        }
        cVar12 = (*pcVar9)(pSVar19,&local_500);
        if (cVar12 != '\0') {
          FReply::FReply(&local_128,true);
          pFVar15 = FReply::ReleaseMouseCapture(&local_128);
          FReply::operator=(&local_1e8,pFVar15);
          FReply::~FReply(&local_128);
        }
      }
      if (((*(char *)&(this->Content).WeakReferenceCount.ReferenceController != '\0') &&
          (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 1) == '\0')
          ) && (this->IndexInList == 0)) {
        (**(code **)((longlong)
                     *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pSVar19 + 0x40))
                  (pSVar19,2);
      }
      FReply::FReply(__return_storage_ptr__,&local_1e8);
      FReply::~FReply(&local_1e8);
      goto LAB_146bb7229;
    }
    FReply::~FReply(&local_1e8);
LAB_146bb721b:
    bVar21 = false;
  }
  else {
    pTVar7 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar8 = (param_2->EffectingButton).KeyName;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((FVar8 != EKeys::RightMouseButton.KeyName) ||
       (bVar21 = STableViewBase::IsRightClickScrolling(pSVar17), bVar21)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      goto LAB_146bb721b;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    iVar14 = (**(code **)(*(longlong *)&this[-1].bChangedSelectionOnMouseDown + 0x78))
                       (&this[-1].bChangedSelectionOnMouseDown);
    if (((iVar14 != 1) && (iVar14 != 2)) && (iVar14 != 3)) goto LAB_146bb721b;
    puVar16 = (undefined8 *)
              (**(code **)((longlong)
                           *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pSVar19 +
                          0x48))(pSVar19);
    if (puVar16 == (undefined8 *)0x0) {
      cVar12 = (**(code **)((longlong)
                            *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pSVar19 +
                           200))(pSVar19);
      if ((cVar12 == '\0') &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("OwnerTable->Private_IsPendingRefresh()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                              ,0x4cf,
                              L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                             ), bVar21)) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FReply *)(*pcVar9)();
        return pFVar15;
      }
      goto LAB_146bb721b;
    }
    cVar12 = (**(code **)((longlong)
                          *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pSVar19 +
                         0x10))(pSVar19,puVar16);
    if (cVar12 == '\0') {
      (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pSVar19
                  + 0x30))(pSVar19);
      pcVar9 = *(code **)((longlong)
                          *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pSVar19 +
                         0x28);
      local_4f0 = *puVar16;
      local_4e8 = puVar16[1];
      if (local_4e8 != 0) {
        LOCK();
        *(int *)(local_4e8 + 8) = *(int *)(local_4e8 + 8) + 1;
        UNLOCK();
      }
      (*pcVar9)(pSVar19,&local_4f0,1);
      (**(code **)((longlong)*(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pSVar19
                  + 0x40))(pSVar19,2);
    }
    pcVar9 = *(code **)((longlong)
                        *(ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)pSVar19 +
                       0xa0);
    local_4e0 = *puVar16;
    local_4d8 = puVar16[1];
    if (local_4d8 != 0) {
      LOCK();
      *(int *)(local_4d8 + 8) = *(int *)(local_4d8 + 8) + 1;
      UNLOCK();
    }
    (*pcVar9)(pSVar19,&local_4e0,param_2);
    bVar21 = true;
  }
  FReply::FReply(__return_storage_ptr__,bVar21);
LAB_146bb7229:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar18);
  return __return_storage_ptr__;
}

// OnPaint @ 146bb7590

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::OnPaint
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FPaintArgs *param_1,
          FGeometry *param_2,FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,
          FWidgetStyle *param_6,bool param_7)

{
  int iVar1;
  
  iVar1 = PaintSelection((STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)
                         &this[-1].bChangedSelectionOnMouseDown,param_1,param_2,param_3,param_4,
                         param_5,param_6,param_7);
  iVar1 = SBorder::OnPaint((SBorder *)this,param_1,param_2,param_3,param_4,iVar1,param_6,param_7);
  iVar1 = PaintDropIndicator((STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *)
                             &this[-1].bChangedSelectionOnMouseDown,param_1,param_2,param_3,param_4,
                             iVar1,param_6,param_7);
  return iVar1;
}

// OnPaintDropIndicator @ 146bb7820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::OnPaintDropIndicator
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,EItemDropZone param_1,
          FPaintArgs *param_2,FGeometry *param_3,FSlateRect *param_4,
          FSlateWindowElementList *param_5,int param_6,FWidgetStyle *param_7,bool param_8)

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
  ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *pIVar10;
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
  pIVar10 = (ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar8->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146bb7881;
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
    if (pIVar10 != (ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0)
    goto LAB_146bb78d2;
  }
LAB_146bb7881:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar11) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
  if ((pIVar10 == (ITypedTableView<TSharedPtr<FTranslationPickerTextItem,1>_> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    iVar7 = (*pcVar4)();
    return iVar7;
  }
LAB_146bb78d2:
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

// OnTouchEnded @ 146bb7c50

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::OnTouchEnded
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FReply *__return_storage_ptr__
          ,FGeometry *param_1,FPointerEvent *param_2)

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
LAB_146bb7cc5:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_146bb7cc5;
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
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) goto LAB_146bb7cc5;
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
    goto LAB_146bb7efe;
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
      if (1 < iVar6 - 2U) goto LAB_146bb7e5f;
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
LAB_146bb7e5f:
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
LAB_146bb7efe:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 146bb7f30

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::OnTouchStarted
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FReply *__return_storage_ptr__
          ,FGeometry *param_1,FPointerEvent *param_2)

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

// PaintDropIndicator @ 146bb8870

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::PaintDropIndicator
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FPaintArgs *param_1,
          FGeometry *param_2,FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,
          FWidgetStyle *param_6,bool param_7)

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

// PaintSelection @ 146bb8a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::PaintSelection
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,FPaintArgs *param_1,
          FGeometry *param_2,FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,
          FWidgetStyle *param_6,bool param_7)

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
      if (aVar3 == (atomic<int>)0x0) goto LAB_146bb8ab5;
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
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) goto LAB_146bb8b06;
  }
LAB_146bb8ab5:
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
LAB_146bb8b06:
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

// Private_OnExpanderArrowShiftClicked @ 146bba400

void __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::Private_OnExpanderArrowShiftClicked
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_146bba445;
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
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_146bba496;
  }
LAB_146bba445:
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
LAB_146bba496:
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

// ResetRow @ 146bbcdd0

void __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::ResetRow
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

{
  return;
}

// SetContent @ 146bc0710

void __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::SetContent
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,TSharedRef<SWidget,1> *param_1
          )

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

// SetIndexInList @ 146bc0870

void __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::SetIndexInList
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,int param_1)

{
  this->IndexInList = param_1;
  return;
}

// SetRowContent @ 146bc0880

void __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::SetRowContent
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this,TSharedRef<SWidget,1> *param_1
          )

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

// ToggleExpansion @ 146bc2070

void __thiscall
STableRow<TSharedPtr<FTranslationPickerTextItem,1>_>::ToggleExpansion
          (STableRow<TSharedPtr<FTranslationPickerTextItem,1>_> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_146bc20b5;
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
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_146bc2106;
  }
LAB_146bc20b5:
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
LAB_146bc2106:
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

