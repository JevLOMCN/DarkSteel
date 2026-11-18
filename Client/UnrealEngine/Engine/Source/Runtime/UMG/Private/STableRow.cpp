// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 78

// STableRow<UObject_*> @ 1469821c0

STableRow<UObject_*> * __thiscall
STableRow<UObject_*>::STableRow<UObject_*>(STableRow<UObject_*> *this)

{
  byte *pbVar1;
  
  this->_padding_ = (longlong)&___7ITableRow__6B_;
  SBorder::SBorder((SBorder *)&this->_padding_);
  this->_padding_ = (longlong)&STableRow<UObject*___ptr64>::_vftable__for__ITableRow__;
  this->_padding_ = (longlong)&STableRow<UObject*___ptr64>::_vftable__for__SBorder__;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 4;
  (this->OwnerTablePtr).Object = (ITypedTableView<UObject_*> *)0x0;
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

// STableRow<FName> @ 1469822f0

STableRow<FName> * __thiscall STableRow<FName>::STableRow<FName>(STableRow<FName> *this)

{
  byte *pbVar1;
  
  this->_padding_ = (longlong)&___7ITableRow__6B_;
  SBorder::SBorder((SBorder *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__ITableRow__;
  this->_padding_ = (longlong)&_vftable__for__SBorder__;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 4;
  (this->OwnerTablePtr).Object = (ITypedTableView<FName> *)0x0;
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

// ~STableRow<UObject_*> @ 14698ffd0

void __thiscall STableRow<UObject_*>::~STableRow<UObject_*>(STableRow<UObject_*> *this)

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

// ~STableRow<FName> @ 146990180

void __thiscall STableRow<FName>::~STableRow<FName>(STableRow<FName> *this)

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

// operator() @ 146997270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`STableRow<UObject_*>::OnDrop'::__l2::<lambda_1>::operator()
          (void *this,FReply *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  atomic<int> aVar4;
  char cVar5;
  atomic<int> aVar6;
  int iVar7;
  FReply *pFVar8;
  undefined8 *puVar9;
  TTransform2<float> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  int local_198;
  char local_194;
  undefined1 local_190 [8];
  FReadAccessScope local_188;
  FReadAccessScope local_170;
  FReadAccessScope local_158;
  FReply local_138;
  TTransform2<float> local_78;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  lVar1 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x340),&local_188);
  if (((*(int *)(lVar1 + 0x350) == 0) || (*(longlong **)(lVar1 + 0x348) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(lVar1 + 0x348) + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_188);
    goto LAB_146997615;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_188);
  lVar1 = *(longlong *)this;
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  pTVar13 = *(TReferenceControllerBase<1> **)(lVar1 + 0x2f0);
  pTVar12 = pTVar13;
  pTVar14 = pTVar15;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_146997325:
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar16) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FReply *)(*pcVar3)();
      return pFVar8;
    }
    pTVar13 = pTVar12;
    if ((pTVar14 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar16)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FReply *)(*pcVar3)();
      return pFVar8;
    }
  }
  else {
    aVar4 = pTVar13->SharedReferenceCount;
    do {
      pTVar12 = pTVar15;
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_146997325;
      LOCK();
      aVar6 = pTVar13->SharedReferenceCount;
      bVar16 = aVar4 == aVar6;
      if (bVar16) {
        pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar16);
    pTVar14 = *(TReferenceControllerBase<1> **)(lVar1 + 0x2e8);
    pTVar12 = pTVar13;
    if (pTVar14 == (TReferenceControllerBase<1> *)0x0) goto LAB_146997325;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lVar1 = *(longlong *)this;
  if ((local_190 != (undefined1 *)(lVar1 + 0x370)) && (*(char *)(lVar1 + 0x374) != '\0')) {
    *(undefined1 *)(lVar1 + 0x374) = 0;
  }
  puVar9 = (undefined8 *)(**(code **)(pTVar14->_padding_ + 0x48))(pTVar14);
  if (puVar9 == (undefined8 *)0x0) {
    cVar5 = (**(code **)(pTVar14->_padding_ + 200))(pTVar14);
    if ((cVar5 == '\0') &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar16)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FReply *)(*pcVar3)();
      return pFVar8;
    }
  }
  else {
    pTVar10 = Inverse<TTransform2<float>_>
                        (&local_78,(TTransform2<float> *)(*(longlong *)((longlong)this + 8) + 0x1c))
    ;
    uVar2 = *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x28);
    local_1a8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    local_1a8._0_4_ = (float)uVar2;
    fVar19 = local_1a8._4_4_ * (pTVar10->M).M[1][0];
    fVar17 = (float)local_1a8 * (pTVar10->M).M[0][0];
    fVar18 = (pTVar10->Trans).field0_0x0._s_0.X;
    fVar20 = (float)local_1a8 * (pTVar10->M).M[0][1] + local_1a8._4_4_ * (pTVar10->M).M[1][1] +
             (pTVar10->Trans).field0_0x0._s_0.Y;
    local_1a8 = uVar2;
    iVar7 = (**(code **)(pTVar14->_padding_ + 0xc0))(pTVar14);
    uVar2 = **(undefined8 **)((longlong)this + 8);
    if (iVar7 == 0) {
      local_1a8._0_4_ = (float)uVar2;
      fVar20 = fVar19 + fVar17 + fVar18;
    }
    else {
      local_1a8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      local_1a8._0_4_ = local_1a8._4_4_;
    }
    fVar18 = (float)local_1a8 * __real_3e800000;
    if (__real_41200000 <= (float)local_1a8 * __real_3e800000) {
      fVar18 = __real_41200000;
    }
    if (fVar18 <= __real_40400000) {
      fVar18 = __real_40400000;
    }
    pTVar12 = pTVar15;
    if (fVar18 <= fVar20) {
      pTVar12 = (TReferenceControllerBase<1> *)(ulonglong)(((float)local_1a8 - fVar18 < fVar20) + 1)
      ;
    }
    local_1a8 = uVar2;
    bVar16 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                       ((TDelegateBase<FNotThreadSafeDelegateMode> *)(*(longlong *)this + 0x328));
    iVar7 = (int)pTVar12;
    if (!bVar16) {
LAB_146997520:
      lVar1 = *(longlong *)this;
      local_1a0 = *puVar9;
      uVar2 = *(undefined8 *)((longlong)this + 0x10);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x340),
                 &local_158);
      if (*(int *)(lVar1 + 0x350) != 0) {
        pTVar15 = *(TReferenceControllerBase<1> **)(lVar1 + 0x348);
      }
      local_1b8 = local_1a0;
      (**(code **)(pTVar15->_padding_ + 0x60))(pTVar15,&local_138,uVar2,iVar7);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_158);
      if (((char)local_138._padding_ != '\0') && (iVar7 == 1)) {
        (**(code **)(pTVar14->_padding_ + 0x50))(pTVar14,*puVar9,1);
      }
      FReply::FReply(__return_storage_ptr__,&local_138);
      FReply::~FReply(&local_138);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      return __return_storage_ptr__;
    }
    local_1a8 = *puVar9;
    lVar1 = *(longlong *)this;
    local_1a0 = *(undefined8 *)((longlong)this + 0x10);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x328),&local_170)
    ;
    pTVar11 = pTVar15;
    if (*(int *)(lVar1 + 0x338) != 0) {
      pTVar11 = *(TReferenceControllerBase<1> **)(lVar1 + 0x330);
    }
    local_1b8 = local_1a8;
    (**(code **)(pTVar11->_padding_ + 0x60))(pTVar11,&local_198,local_1a0,pTVar12);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_170);
    iVar7 = local_198;
    if (local_194 != '\0') goto LAB_146997520;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
LAB_146997615:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// operator() @ 146997660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`STableRow<FName>::OnDrop'::__l2::<lambda_1>::operator()(void *this,FReply *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  int iVar8;
  FReply *pFVar9;
  undefined8 *puVar10;
  TTransform2<float> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1a8;
  int local_1a0;
  char local_19c;
  FReply *local_198;
  undefined1 local_190 [8];
  FReadAccessScope local_188;
  FReadAccessScope local_170;
  FReadAccessScope local_158;
  FReply local_138;
  TTransform2<float> local_78;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  lVar1 = *(longlong *)this;
  local_198 = __return_storage_ptr__;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x340),&local_188);
  if (((*(int *)(lVar1 + 0x350) == 0) || (*(longlong **)(lVar1 + 0x348) == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(**(longlong **)(lVar1 + 0x348) + 0x38))(), cVar6 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_188);
    goto LAB_146997a0a;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_188);
  lVar1 = *(longlong *)this;
  pTVar16 = (TReferenceControllerBase<1> *)0x0;
  pTVar15 = *(TReferenceControllerBase<1> **)(lVar1 + 0x2f0);
  pTVar14 = pTVar16;
  pTVar13 = pTVar15;
  if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
LAB_146997715:
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar4)();
      return pFVar9;
    }
    pTVar15 = pTVar13;
    if ((pTVar14 == (TReferenceControllerBase<1> *)0x0) &&
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
    aVar5 = pTVar15->SharedReferenceCount;
    do {
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      pTVar13 = pTVar16;
      if (aVar5 == (atomic<int>)0x0) goto LAB_146997715;
      LOCK();
      aVar7 = pTVar15->SharedReferenceCount;
      bVar17 = aVar5 == aVar7;
      if (bVar17) {
        pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar17);
    pTVar14 = *(TReferenceControllerBase<1> **)(lVar1 + 0x2e8);
    pTVar13 = pTVar15;
    if (pTVar14 == (TReferenceControllerBase<1> *)0x0) goto LAB_146997715;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  lVar1 = *(longlong *)this;
  if ((local_190 != (undefined1 *)(lVar1 + 0x370)) && (*(char *)(lVar1 + 0x374) != '\0')) {
    *(undefined1 *)(lVar1 + 0x374) = 0;
  }
  puVar10 = (undefined8 *)(**(code **)(pTVar14->_padding_ + 0x48))(pTVar14);
  if (puVar10 == (undefined8 *)0x0) {
    cVar6 = (**(code **)(pTVar14->_padding_ + 200))(pTVar14);
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
    local_1a8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    local_1a8._0_4_ = (float)uVar2;
    fVar20 = local_1a8._4_4_ * (pTVar11->M).M[1][0];
    fVar18 = (float)local_1a8 * (pTVar11->M).M[0][0];
    fVar19 = (pTVar11->Trans).field0_0x0._s_0.X;
    fVar21 = (float)local_1a8 * (pTVar11->M).M[0][1] + local_1a8._4_4_ * (pTVar11->M).M[1][1] +
             (pTVar11->Trans).field0_0x0._s_0.Y;
    local_1a8 = uVar2;
    iVar8 = (**(code **)(pTVar14->_padding_ + 0xc0))(pTVar14);
    uVar2 = **(undefined8 **)((longlong)this + 8);
    if (iVar8 == 0) {
      local_1a8._0_4_ = (float)uVar2;
      fVar21 = fVar20 + fVar18 + fVar19;
    }
    else {
      local_1a8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      local_1a8._0_4_ = local_1a8._4_4_;
    }
    fVar19 = (float)local_1a8 * __real_3e800000;
    if (__real_41200000 <= (float)local_1a8 * __real_3e800000) {
      fVar19 = __real_41200000;
    }
    if (fVar19 <= __real_40400000) {
      fVar19 = __real_40400000;
    }
    pTVar13 = pTVar16;
    if (fVar19 <= fVar21) {
      pTVar13 = (TReferenceControllerBase<1> *)(ulonglong)(((float)local_1a8 - fVar19 < fVar21) + 1)
      ;
    }
    local_1a8 = uVar2;
    bVar17 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                       ((TDelegateBase<FNotThreadSafeDelegateMode> *)(*(longlong *)this + 0x328));
    iVar8 = (int)pTVar13;
    if (!bVar17) {
LAB_146997907:
      lVar1 = *(longlong *)this;
      uVar2 = *puVar10;
      uVar3 = *(undefined8 *)((longlong)this + 0x10);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x340),
                 &local_158);
      if (*(int *)(lVar1 + 0x350) != 0) {
        pTVar16 = *(TReferenceControllerBase<1> **)(lVar1 + 0x348);
      }
      local_1b8 = uVar2;
      (**(code **)(pTVar16->_padding_ + 0x60))(pTVar16,&local_138,uVar3,iVar8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_158);
      if (((char)local_138._padding_ != '\0') && (iVar8 == 1)) {
        (**(code **)(pTVar14->_padding_ + 0x50))(pTVar14,*puVar10,1);
      }
      FReply::FReply(local_198,&local_138);
      FReply::~FReply(&local_138);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      return local_198;
    }
    lVar1 = *(longlong *)this;
    local_1a8 = *(undefined8 *)((longlong)this + 0x10);
    uVar2 = *puVar10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x328),&local_170)
    ;
    pTVar12 = pTVar16;
    if (*(int *)(lVar1 + 0x338) != 0) {
      pTVar12 = *(TReferenceControllerBase<1> **)(lVar1 + 0x330);
    }
    local_1b8 = uVar2;
    (**(code **)(pTVar12->_padding_ + 0x60))(pTVar12,&local_1a0,local_1a8,pTVar13);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_170);
    __return_storage_ptr__ = local_198;
    iVar8 = local_1a0;
    if (local_19c != '\0') goto LAB_146997907;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
LAB_146997a0a:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// AsWidget @ 1469a2ac0

TSharedRef<SWidget,1> * __thiscall
STableRow<UObject_*>::AsWidget
          (STableRow<UObject_*> *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

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

// AsWidget @ 1469a2b60

TSharedRef<SWidget,1> * __thiscall
STableRow<FName>::AsWidget(STableRow<FName> *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

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

// ConstructChildren @ 1469af300

/* WARNING: Type propagation algorithm not settling */

void __thiscall
STableRow<UObject_*>::ConstructChildren
          (STableRow<UObject_*> *this,Type param_1,TAttribute<FMargin> *param_2,
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
  TSharedRef<STableRow<UObject_*>,1> local_728;
  T1RequiredArgs<TSharedRef<STableRow<UObject_*>,1>_&&> local_718;
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
  FArguments local_4a0;
  FArguments local_298;
  
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
    pFVar8 = SHorizontalBox::FArguments::FArguments(&local_4a0);
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
    pFVar11 = SExpanderArrow::FArguments::FArguments(&local_298);
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
      local_728.Object = (STableRow<UObject_*> *)0x0;
    }
    else {
      local_728.Object = (STableRow<UObject_*> *)&pTVar12->Object[-1].StatID;
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
    TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<UObject_*>,1>_&&>_>
    ::
    TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<UObject_*>,1>_&&>_>
              ((TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<UObject_*>,1>_&&>_>
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
    pTVar13 = TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<UObject_*>,1>_&&>_>
              ::operator<<=((TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<UObject_*>,1>_&&>_>
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
    SExpanderArrow::FArguments::~FArguments(&local_298);
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
              ((FSlotArguments *)local_4a0._Slots.AllocatorInstance.Data,local_4a0._Slots.ArrayNum);
    if ((FSlotArguments *)local_4a0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_4a0._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4a0);
    this->InnerContentSlot = pFVar5;
  }
  return;
}

// ConstructChildren @ 1469afaa0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
STableRow<FName>::ConstructChildren
          (STableRow<FName> *this,Type param_1,TAttribute<FMargin> *param_2,
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
  TSharedRef<STableRow<FName>,1> local_728;
  T1RequiredArgs<TSharedRef<STableRow<FName>,1>_&&> local_718;
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
  FArguments local_4a0;
  FArguments local_298;
  
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
    pFVar8 = SHorizontalBox::FArguments::FArguments(&local_4a0);
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
    pFVar11 = SExpanderArrow::FArguments::FArguments(&local_298);
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
      local_728.Object = (STableRow<FName> *)0x0;
    }
    else {
      local_728.Object = (STableRow<FName> *)&pTVar12->Object[-1].StatID;
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
    TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<FName>,1>_&&>_>::
    TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<FName>,1>_&&>_>
              ((TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<FName>,1>_&&>_>
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
    pTVar13 = TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<FName>,1>_&&>_>
              ::operator<<=((TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<FName>,1>_&&>_>
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
    SExpanderArrow::FArguments::~FArguments(&local_298);
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
              ((FSlotArguments *)local_4a0._Slots.AllocatorInstance.Data,local_4a0._Slots.ArrayNum);
    if ((FSlotArguments *)local_4a0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_4a0._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4a0);
    this->InnerContentSlot = pFVar5;
  }
  return;
}

// ConstructInternal @ 1469b0240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
STableRow<UObject_*>::ConstructInternal
          (STableRow<UObject_*> *this,FArguments *param_1,TSharedRef<STableViewBase,1> *param_2)

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
  ITypedTableView<UObject_*> *pIVar13;
  ITypedTableView<UObject_*> *pIVar14;
  TReferenceControllerBase<1> *pTVar15;
  undefined1 local_198 [8];
  ForAnyElementType FStack_190;
  int local_188;
  undefined1 local_180 [8];
  ForAnyElementType local_178;
  int local_170;
  FLinearColor_u_0 local_168;
  undefined1 local_158;
  undefined1 local_154;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  FDelegateAllocation FStack_148;
  TSharedRef<SWidget_const_,1> local_138;
  undefined1 local_128 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  FDelegateAllocation FStack_110;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  FDestructionSentinel local_98;
  FDelegateAllocation *local_80;
  TSharedRef<SWidget_const_,1> local_78;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  pIVar14 = (ITypedTableView<UObject_*> *)0x0;
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
  local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_128._0_8_ = (FSlateBrush *)0x0;
  local_128[8] = true;
  FStack_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)&local_b8);
  local_a0 = &FStack_110;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,&FStack_110);
  pIVar13 = pIVar14;
  pTVar15 = (TReferenceControllerBase<1> *)param_2;
  if (puVar10 != (undefined8 *)0x0) {
    local_198 = (undefined1  [8])STableRow<UObject*___ptr64>::_vcall__152__flat______;
    FStack_190.Data =
         (FScriptContainerElement *)
         ((ulonglong)local_138.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_78);
    pTVar15 = (pTVar11->SharedReferenceCount).ReferenceController;
    pIVar13 = (ITypedTableView<UObject_*> *)&pTVar11->Object[-1].StatID;
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
               ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_PEAVUObject_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = pIVar13;
    puVar10[4] = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(undefined1 (*) [8])(puVar10 + 5) = local_198;
    puVar10[6] = FStack_190.Data;
    pIVar13 = (ITypedTableView<UObject_*> *)0x7;
  }
  if (((ulonglong)pIVar13 & 4) != 0) {
    pIVar13 = (ITypedTableView<UObject_*> *)(ulonglong)((uint)pIVar13 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (((ulonglong)pIVar13 & 2) != 0) {
    pIVar13 = (ITypedTableView<UObject_*> *)(ulonglong)((uint)pIVar13 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (((ulonglong)pIVar13 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  bVar8 = false;
  bVar7 = false;
  bVar9 = false;
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  SBorder::SetBorderImage((SBorder *)&this->_padding_,(TAttribute<FSlateBrush_const_*> *)local_128);
  local_168._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_168._8_8_ = _UNK_15090c6d8;
  local_158 = 0;
  local_154 = 1;
  local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_148.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_148.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_98);
  local_80 = &FStack_148;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,&FStack_148);
  pTVar15 = (TReferenceControllerBase<1> *)param_2;
  if (puVar10 != (undefined8 *)0x0) {
    local_198 = (undefined1  [8])GetForegroundBasedOnSelection;
    FStack_190.Data =
         (FScriptContainerElement *)
         ((ulonglong)local_138.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_138);
    pTVar15 = (pTVar11->SharedReferenceCount).ReferenceController;
    pIVar13 = (ITypedTableView<UObject_*> *)&pTVar11->Object[-1].StatID;
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
               ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_PEAVUObject_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = pIVar13;
    puVar10[4] = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(undefined1 (*) [8])(puVar10 + 5) = local_198;
    puVar10[6] = FStack_190.Data;
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
               CONCAT44(local_138.SharedReferenceCount.ReferenceController._4_4_,
                        local_138.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)&this->_padding_,
           (TAttribute<FSlateColor> *)&local_168._s_0,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_100);
  if ((FStack_148.DelegateSize != 0) &&
     (FStack_148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_148.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_148,0,0,0x10);
    FStack_148.DelegateSize = 0;
  }
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  if (FStack_148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_148.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
  if (&param_1->_OnCanAcceptDrop != &this->OnCanAcceptDrop) {
    local_198 = (undefined1  [8])0x0;
    FStack_190.Data = (FScriptContainerElement *)0x0;
    local_188 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnCanAcceptDrop,
               &local_68);
    if ((*(int *)&(param_1->_OnCanAcceptDrop).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnCanAcceptDrop).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_198);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCanAcceptDrop,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_198);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
               (FWriteAccessScope *)&local_e8);
    if ((local_188 != 0) && (FStack_190.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_190.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_190,0,0,0x10);
      local_188 = 0;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    if (FStack_190.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_190.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_198);
  }
  if (&param_1->_OnAcceptDrop != &this->OnAcceptDrop) {
    local_180 = (undefined1  [8])0x0;
    local_178.Data = (FScriptContainerElement *)0x0;
    local_170 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnAcceptDrop,
               &local_50);
    if ((*(int *)&(param_1->_OnAcceptDrop).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnAcceptDrop).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_180);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAcceptDrop,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_180);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_180,
               (FWriteAccessScope *)&local_d0);
    if ((local_170 != 0) && (local_178.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_178.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,0,0x10);
      local_170 = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_180);
  }
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=(&this->OnDragDetected_Handler,&param_1->_OnDragDetected);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDragEnter_Handler,&param_1->_OnDragEnter);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDragLeave_Handler,&param_1->_OnDragLeave);
  TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDrop_Handler,&param_1->_OnDrop);
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
    pIVar14 = (ITypedTableView<UObject_*> *)&pSVar4[1].field_0x8;
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

// ConstructInternal @ 1469b08c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
STableRow<FName>::ConstructInternal
          (STableRow<FName> *this,FArguments *param_1,TSharedRef<STableViewBase,1> *param_2)

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
  ITypedTableView<FName> *pIVar13;
  ITypedTableView<FName> *pIVar14;
  TReferenceControllerBase<1> *pTVar15;
  undefined1 local_198 [8];
  ForAnyElementType FStack_190;
  int local_188;
  undefined1 local_180 [8];
  ForAnyElementType local_178;
  int local_170;
  FLinearColor_u_0 local_168;
  undefined1 local_158;
  undefined1 local_154;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  FDelegateAllocation FStack_148;
  TSharedRef<SWidget_const_,1> local_138;
  undefined1 local_128 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  FDelegateAllocation FStack_110;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  FDestructionSentinel local_98;
  FDelegateAllocation *local_80;
  TSharedRef<SWidget_const_,1> local_78;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  pIVar14 = (ITypedTableView<FName> *)0x0;
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
  local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_128._0_8_ = (FSlateBrush *)0x0;
  local_128[8] = true;
  FStack_110.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)&local_b8);
  local_a0 = &FStack_110;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,&FStack_110);
  pIVar13 = pIVar14;
  pTVar15 = (TReferenceControllerBase<1> *)param_2;
  if (puVar10 != (undefined8 *)0x0) {
    local_198 = (undefined1  [8])_vcall__152__flat______;
    FStack_190.Data =
         (FScriptContainerElement *)
         ((ulonglong)local_138.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_78);
    pTVar15 = (pTVar11->SharedReferenceCount).ReferenceController;
    pIVar13 = (ITypedTableView<FName> *)&pTVar11->Object[-1].StatID;
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
               ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_VFName_____00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = pIVar13;
    puVar10[4] = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(undefined1 (*) [8])(puVar10 + 5) = local_198;
    puVar10[6] = FStack_190.Data;
    pIVar13 = (ITypedTableView<FName> *)0x7;
  }
  if (((ulonglong)pIVar13 & 4) != 0) {
    pIVar13 = (ITypedTableView<FName> *)(ulonglong)((uint)pIVar13 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (((ulonglong)pIVar13 & 2) != 0) {
    pIVar13 = (ITypedTableView<FName> *)(ulonglong)((uint)pIVar13 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  if (((ulonglong)pIVar13 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  bVar8 = false;
  bVar7 = false;
  bVar9 = false;
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  SBorder::SetBorderImage((SBorder *)&this->_padding_,(TAttribute<FSlateBrush_const_*> *)local_128);
  local_168._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_168._8_8_ = _UNK_15090c6d8;
  local_158 = 0;
  local_154 = 1;
  local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_148.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_148.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_98);
  local_80 = &FStack_148;
  puVar10 = UE::Core::Private::DelegateAllocate(0x38,&FStack_148);
  pTVar15 = (TReferenceControllerBase<1> *)param_2;
  if (puVar10 != (undefined8 *)0x0) {
    local_198 = (undefined1  [8])GetForegroundBasedOnSelection;
    FStack_190.Data =
         (FScriptContainerElement *)
         ((ulonglong)local_138.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_138);
    pTVar15 = (pTVar11->SharedReferenceCount).ReferenceController;
    pIVar13 = (ITypedTableView<FName> *)&pTVar11->Object[-1].StatID;
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
               ___7__TBaseSPMethodDelegateInstance__00__CBV__STableRow_VFName_____00__A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar10[3] = pIVar13;
    puVar10[4] = pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(undefined1 (*) [8])(puVar10 + 5) = local_198;
    puVar10[6] = FStack_190.Data;
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
               CONCAT44(local_138.SharedReferenceCount.ReferenceController._4_4_,
                        local_138.SharedReferenceCount.ReferenceController._0_4_));
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->_padding_,(SWidget *)&this->_padding_,
           (TAttribute<FSlateColor> *)&local_168._s_0,None);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_100);
  if ((FStack_148.DelegateSize != 0) &&
     (FStack_148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_148.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_148,0,0,0x10);
    FStack_148.DelegateSize = 0;
  }
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  if (FStack_148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_148.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
  if (&param_1->_OnCanAcceptDrop != &this->OnCanAcceptDrop) {
    local_198 = (undefined1  [8])0x0;
    FStack_190.Data = (FScriptContainerElement *)0x0;
    local_188 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnCanAcceptDrop,
               &local_68);
    if ((*(int *)&(param_1->_OnCanAcceptDrop).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnCanAcceptDrop).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_198);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCanAcceptDrop,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_198);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
               (FWriteAccessScope *)&local_e8);
    if ((local_188 != 0) && (FStack_190.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_190.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_190,0,0,0x10);
      local_188 = 0;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    if (FStack_190.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_190.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_198);
  }
  if (&param_1->_OnAcceptDrop != &this->OnAcceptDrop) {
    local_180 = (undefined1  [8])0x0;
    local_178.Data = (FScriptContainerElement *)0x0;
    local_170 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnAcceptDrop,
               &local_50);
    if ((*(int *)&(param_1->_OnAcceptDrop).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnAcceptDrop).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_180);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_50);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAcceptDrop,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_180);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_180,
               (FWriteAccessScope *)&local_d0);
    if ((local_170 != 0) && (local_178.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_178.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,0,0x10);
      local_170 = 0;
    }
    if (local_d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
    }
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_180);
  }
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=(&this->OnDragDetected_Handler,&param_1->_OnDragDetected);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDragEnter_Handler,&param_1->_OnDragEnter);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDragLeave_Handler,&param_1->_OnDragLeave);
  TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDrop_Handler,&param_1->_OnDrop);
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
    pIVar14 = (ITypedTableView<FName> *)&pSVar4->field_0x588;
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

// CreateAccessibleWidget @ 1469b2980

/* WARNING: Type propagation algorithm not settling */

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
STableRow<UObject_*>::CreateAccessibleWidget
          (STableRow<UObject_*> *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

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
           (longlong)
           &STableRow<UObject*___ptr64>::FSlateAccessibleTableRow::
            _vftable__for__FSlateAccessibleWidget__;
      (this_00->PersistentState).InitialClipState.TypedValue.ScissorRect.TypedValue.TopRight.
      field0_0x0 = (TVector2<float>_u_0)
                   &STableRow<UObject*___ptr64>::FSlateAccessibleTableRow::
                    _vftable__for__IAccessibleTableRow__;
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
           (longlong)
           &STableRow<UObject*___ptr64>::FSlateAccessibleTableRow::
            _vftable__for__FSlateAccessibleWidget__;
      (this_00->PersistentState).InitialClipState.TypedValue.ScissorRect.TypedValue.TopRight.
      field0_0x0 = (TVector2<float>_u_0)
                   &STableRow<UObject*___ptr64>::FSlateAccessibleTableRow::
                    _vftable__for__IAccessibleTableRow__;
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
      goto LAB_1469b2ae9;
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
LAB_1469b2ae9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)TVar9.Object);
  return __return_storage_ptr__;
}

// CreateAccessibleWidget @ 1469b2b10

/* WARNING: Type propagation algorithm not settling */

TSharedRef<FSlateAccessibleWidget,1> * __thiscall
STableRow<FName>::CreateAccessibleWidget
          (STableRow<FName> *this,TSharedRef<FSlateAccessibleWidget,1> *__return_storage_ptr__)

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
      goto LAB_1469b2c79;
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
LAB_1469b2c79:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)TVar9.Object);
  return __return_storage_ptr__;
}

// DoesItemHaveChildren @ 1469be9b0

int __thiscall STableRow<UObject_*>::DoesItemHaveChildren(STableRow<UObject_*> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469be9f1;
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
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469bea17;
  }
LAB_1469be9f1:
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
LAB_1469bea17:
  bVar3 = (**(code **)(pTVar6->_padding_ + 0x68))(pTVar6,this->IndexInList);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return (uint)bVar3;
}

// DoesItemHaveChildren @ 1469bea60

int __thiscall STableRow<FName>::DoesItemHaveChildren(STableRow<FName> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469beaa1;
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
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469beac7;
  }
LAB_1469beaa1:
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
LAB_1469beac7:
  bVar3 = (**(code **)(pTVar6->_padding_ + 0x68))(pTVar6,this->IndexInList);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return (uint)bVar3;
}

// GetBorder @ 1469cd1b0

FSlateBrush * __thiscall STableRow<UObject_*>::GetBorder(STableRow<UObject_*> *this)

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
  FSlateBrush *pFVar13;
  longlong lVar14;
  byte bVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  bool bVar19;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  pTVar17 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pFVar13 = (FSlateBrush *)0x0;
  pTVar16 = pTVar17;
  pTVar18 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469cd1f5:
    bVar19 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar19) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FSlateBrush *)(*pcVar2)();
      return pFVar13;
    }
    pTVar17 = pTVar16;
    if ((pTVar18 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar19)) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FSlateBrush *)(*pcVar2)();
      return pFVar13;
    }
  }
  else {
    aVar3 = pTVar17->SharedReferenceCount;
    do {
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
      pTVar18 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469cd1f5;
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
    if (pTVar18 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469cd1f5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar11 = (undefined8 *)(**(code **)(pTVar18->_padding_ + 0xe8))(pTVar18,local_48);
  cVar4 = (**(code **)(*(longlong *)*puVar11 + 0x1a0))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  cVar5 = (**(code **)(pTVar18->_padding_ + 0x68))(pTVar18,this->IndexInList);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<UObject*___ptr64>::GetBorder(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<UObject*___ptr64>::GetBorder(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<UObject*___ptr64>::GetBorder(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<UObject*___ptr64>::GetBorder(void)const___ptr64'
                    ::__l2::GenericWhiteBoxBrush,"GenericWhiteBox");
    _Init_thread_footer(&`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<UObject*___ptr64>::GetBorder(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pIVar12 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar12 + 0x50))
            (pIVar12,`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<UObject*___ptr64>::GetBorder(void)const___ptr64'
                     ::__l2::GenericWhiteBoxBrush,0,0);
  puVar11 = (undefined8 *)(**(code **)(pTVar18->_padding_ + 0x48))(pTVar18,this);
  if (puVar11 == (undefined8 *)0x0) {
    cVar4 = (**(code **)(pTVar18->_padding_ + 200))(pTVar18);
    if ((cVar4 == '\0') &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar19)) {
      pcVar2 = (code *)swi(3);
      pFVar13 = (FSlateBrush *)(*pcVar2)();
      return pFVar13;
    }
  }
  else {
    local_res8 = *puVar11;
    cVar6 = (**(code **)(pTVar18->_padding_ + 0x10))(pTVar18,&local_res8);
    local_res10 = *puVar11;
    cVar7 = (**(code **)(pTVar18->_padding_ + 0x20))(pTVar18,&local_res10);
    iVar9 = (**(code **)(this->_padding_ + 0x78))(this);
    bVar15 = ~(byte)this->IndexInList & 1;
    if (cVar6 == '\0') {
      if (cVar7 != '\0') {
        cVar5 = *(char *)((longlong)&this->_padding_ + 3);
        pFVar1 = this->Style;
        if (cVar4 == '\0') {
          if (cVar5 == '\0') {
            pFVar13 = &pFVar1->InactiveHighlightedBrush;
            goto LAB_1469cd53a;
          }
        }
        else if (cVar5 == '\0') {
          pFVar13 = &pFVar1->ActiveHighlightedBrush;
          goto LAB_1469cd53a;
        }
        lVar14 = 0x4f0;
        if (bVar15 == 0) {
          lVar14 = 0x650;
        }
        pFVar13 = (FSlateBrush *)((longlong)&pFVar1->_padding_ + lVar14);
        goto LAB_1469cd53a;
      }
    }
    else if (this->bShowSelection != false) {
      cVar5 = *(char *)((longlong)&this->_padding_ + 3);
      pFVar1 = this->Style;
      if (cVar4 == '\0') {
        if (cVar5 == '\0') {
          pFVar13 = &pFVar1->InactiveBrush;
        }
        else {
          pFVar13 = &pFVar1->InactiveHoveredBrush;
        }
      }
      else {
        lVar14 = 0xc0;
        if (cVar5 == '\0') {
          lVar14 = 0x170;
        }
        pFVar13 = (FSlateBrush *)((longlong)&pFVar1->_padding_ + lVar14);
      }
      goto LAB_1469cd53a;
    }
    if (((cVar5 == '\0') || (this->Style->bUseParentRowBrush == false)) ||
       (iVar10 = (**(code **)(this->_padding_ + 0x38))(this), iVar10 != 0)) {
      cVar4 = *(char *)((longlong)&this->_padding_ + 3);
      if (bVar15 == 0) {
        if ((cVar4 == '\0') || (iVar9 == 0)) {
          pFVar13 = &this->Style->OddRowBackgroundBrush;
        }
        else {
          pFVar13 = &this->Style->OddRowBackgroundHoveredBrush;
        }
      }
      else if ((cVar4 == '\0') || (iVar9 == 0)) {
        pFVar13 = &this->Style->EvenRowBackgroundBrush;
      }
      else {
        pFVar13 = &this->Style->EvenRowBackgroundHoveredBrush;
      }
    }
    else if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
      pFVar13 = &this->Style->ParentRowBackgroundBrush;
    }
    else {
      pFVar13 = &this->Style->ParentRowBackgroundHoveredBrush;
    }
  }
LAB_1469cd53a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  return pFVar13;
}

// GetBorder @ 1469cd5a0

FSlateBrush * __thiscall STableRow<FName>::GetBorder(STableRow<FName> *this)

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
LAB_1469cd5e6:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469cd5e6;
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
    if (pTVar18 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469cd5e6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar11 = (undefined8 *)(**(code **)(pTVar18->_padding_ + 0xe8))(pTVar18,local_38);
  cVar4 = (**(code **)(*(longlong *)*puVar11 + 0x1a0))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  cVar5 = (**(code **)(pTVar18->_padding_ + 0x68))(pTVar18,this->IndexInList);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<FName>::GetBorder(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<FName>::GetBorder(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<FName>::GetBorder(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<FName>::GetBorder(void)const___ptr64'
                    ::__l2::GenericWhiteBoxBrush,"GenericWhiteBox");
    _Init_thread_footer(&`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<FName>::GetBorder(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pIVar12 = FAppStyle::Get();
  (**(code **)((longlong)*pIVar12 + 0x50))
            (pIVar12,`public:_virtual_struct_FSlateBrush_const*___ptr64___cdecl_STableRow<FName>::GetBorder(void)const___ptr64'
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
            goto LAB_1469cd8ec;
          }
        }
        else if (cVar5 == '\0') {
          pFVar14 = &pFVar1->ActiveHighlightedBrush;
          goto LAB_1469cd8ec;
        }
        lVar13 = 0x4f0;
        if (bVar15 == 0) {
          lVar13 = 0x650;
        }
        pFVar14 = (FSlateBrush *)((longlong)&pFVar1->_padding_ + lVar13);
        goto LAB_1469cd8ec;
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
      goto LAB_1469cd8ec;
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
LAB_1469cd8ec:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  return pFVar14;
}

// GetContent @ 1469ce820

TSharedPtr<SWidget,1> * __thiscall
STableRow<UObject_*>::GetContent
          (STableRow<UObject_*> *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

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

// GetContent @ 1469ce8b0

TSharedPtr<SWidget,1> * __thiscall
STableRow<FName>::GetContent(STableRow<FName> *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

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

// GetForegroundBasedOnSelection @ 1469d0950

FSlateColor * __thiscall
STableRow<UObject_*>::GetForegroundBasedOnSelection
          (STableRow<UObject_*> *this,FSlateColor *__return_storage_ptr__)

{
  float *pfVar1;
  TReferenceControllerBase<1> *pTVar2;
  FTableRowStyle *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  char cVar6;
  atomic<int> aVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  FSlateColor *pFVar10;
  longlong lVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_res8;
  
  pTVar2 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar13 = (TReferenceControllerBase<1> *)0x0;
  pTVar12 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar2->SharedReferenceCount;
    do {
      pTVar12 = pTVar13;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1469d0991;
      LOCK();
      aVar7 = pTVar2->SharedReferenceCount;
      bVar14 = aVar5 == aVar7;
      if (bVar14) {
        pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar14);
    pTVar13 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar12 = pTVar2;
  }
LAB_1469d0991:
  pFVar3 = this->Style;
  if ((this->bShowSelection != false) && (pTVar13 != (TReferenceControllerBase<1> *)0x0)) {
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar9 = (undefined8 *)(**(code **)(pTVar13->_padding_ + 0x48))(pTVar13);
    if (puVar9 != (undefined8 *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
      local_res8 = *puVar9;
      cVar6 = (**(code **)(pTVar13->_padding_ + 0x10))(pTVar13,&local_res8);
      lVar11 = 0x7b0;
      if (cVar6 != '\0') {
        lVar11 = 0x7c4;
      }
      pfVar1 = (float *)((longlong)&pFVar3->_padding_ + lVar11);
      fVar15 = *pfVar1;
      fVar16 = pfVar1[1];
      fVar17 = pfVar1[2];
      fVar18 = pfVar1[3];
      uVar8 = *(undefined4 *)((longlong)&(pFVar3->SelectorFocusedBrush)._padding_ + lVar11);
      goto LAB_1469d0a5c;
    }
    cVar6 = (**(code **)(pTVar13->_padding_ + 200))(pTVar13);
    if ((cVar6 == '\0') &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar14)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FSlateColor *)(*pcVar4)();
      return pFVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  fVar15 = (pFVar3->TextColor).SpecifiedColor.field0_0x0._s_0.R;
  fVar16 = (pFVar3->TextColor).SpecifiedColor.field0_0x0._s_0.G;
  fVar17 = (pFVar3->TextColor).SpecifiedColor.field0_0x0._s_0.B;
  fVar18 = (pFVar3->TextColor).SpecifiedColor.field0_0x0._s_0.A;
  uVar8._0_1_ = (pFVar3->TextColor).ColorUseRule;
  uVar8._1_1_ = (pFVar3->TextColor).ColorTableId;
  uVar8._2_2_ = *(undefined2 *)&(pFVar3->TextColor).field_0x12;
LAB_1469d0a5c:
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.R = fVar15;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.G = fVar16;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = fVar17;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = fVar18;
  __return_storage_ptr__->ColorUseRule = (char)uVar8;
  __return_storage_ptr__->ColorTableId = (char)((uint)uVar8 >> 8);
  *(short *)&__return_storage_ptr__->field_0x12 = (short)((uint)uVar8 >> 0x10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return __return_storage_ptr__;
}

// GetForegroundBasedOnSelection @ 1469d0a90

FSlateColor * __thiscall
STableRow<FName>::GetForegroundBasedOnSelection
          (STableRow<FName> *this,FSlateColor *__return_storage_ptr__)

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
      if (aVar5 == (atomic<int>)0x0) goto LAB_1469d0ad1;
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
LAB_1469d0ad1:
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
      goto LAB_1469d0b92;
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
LAB_1469d0b92:
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

// GetIndentLevel @ 1469d13d0

int __thiscall STableRow<UObject_*>::GetIndentLevel(STableRow<UObject_*> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469d1411;
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
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469d1437;
  }
LAB_1469d1411:
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
LAB_1469d1437:
  iVar4 = (**(code **)(pTVar5->_padding_ + 0x88))(pTVar5,this->IndexInList);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return iVar4;
}

// GetIndentLevel @ 1469d1480

int __thiscall STableRow<FName>::GetIndentLevel(STableRow<FName> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469d14c1;
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
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469d14e7;
  }
LAB_1469d14c1:
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
LAB_1469d14e7:
  iVar4 = (**(code **)(pTVar5->_padding_ + 0x88))(pTVar5,this->IndexInList);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return iVar4;
}

// GetIndexInList @ 1469d15a0

int __thiscall STableRow<UObject_*>::GetIndexInList(STableRow<UObject_*> *this)

{
  return this->IndexInList;
}

// GetIndexInList @ 1469d15b0

int __thiscall STableRow<FName>::GetIndexInList(STableRow<FName> *this)

{
  return this->IndexInList;
}

// GetRowSizeForColumn @ 1469d6fe0

TVector2<double> * __thiscall
STableRow<UObject_*>::GetRowSizeForColumn
          (STableRow<UObject_*> *this,TVector2<double> *__return_storage_ptr__,FName *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetRowSizeForColumn @ 1469d7000

TVector2<double> * __thiscall
STableRow<FName>::GetRowSizeForColumn
          (STableRow<FName> *this,TVector2<double> *__return_storage_ptr__,FName *param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// GetSelectionMode @ 1469d8410

Type __thiscall STableRow<UObject_*>::GetSelectionMode(STableRow<UObject_*> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469d8443;
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
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469d8469;
  }
LAB_1469d8443:
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
LAB_1469d8469:
  TVar4 = (**(code **)(pTVar5->_padding_ + 0xb8))(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return TVar4;
}

// GetSelectionMode @ 1469d84a0

Type __thiscall STableRow<FName>::GetSelectionMode(STableRow<FName> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469d84d3;
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
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469d84f9;
  }
LAB_1469d84d3:
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
LAB_1469d84f9:
  TVar4 = (**(code **)(pTVar5->_padding_ + 0xb8))(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return TVar4;
}

// GetWiresNeededByDepth @ 1469da610

TBitArray<FDefaultBitArrayAllocator> * __thiscall
STableRow<UObject_*>::GetWiresNeededByDepth
          (STableRow<UObject_*> *this,TBitArray<FDefaultBitArrayAllocator> *__return_storage_ptr__)

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
  ITypedTableView<UObject_*> *pIVar10;
  bool bVar11;
  
  pTVar9 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pIVar10 = (ITypedTableView<UObject_*> *)0x0;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469da654;
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
    if (pIVar10 != (ITypedTableView<UObject_*> *)0x0) goto LAB_1469da67a;
  }
LAB_1469da654:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar11) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar3)();
    return pTVar7;
  }
LAB_1469da67a:
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

// GetWiresNeededByDepth @ 1469da740

TBitArray<FDefaultBitArrayAllocator> * __thiscall
STableRow<FName>::GetWiresNeededByDepth
          (STableRow<FName> *this,TBitArray<FDefaultBitArrayAllocator> *__return_storage_ptr__)

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
  ITypedTableView<FName> *pIVar10;
  bool bVar11;
  
  pTVar9 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pIVar10 = (ITypedTableView<FName> *)0x0;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469da784;
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
    if (pIVar10 != (ITypedTableView<FName> *)0x0) goto LAB_1469da7aa;
  }
LAB_1469da784:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar11) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar3)();
    return pTVar7;
  }
LAB_1469da7aa:
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

// InitializeRow @ 1469e04d0

void __thiscall STableRow<UObject_*>::InitializeRow(STableRow<UObject_*> *this)

{
  return;
}

// InitializeRow @ 1469e04e0

void __thiscall STableRow<FName>::InitializeRow(STableRow<FName> *this)

{
  return;
}

// IsItemExpanded @ 1469e1ac0

bool __thiscall STableRow<UObject_*>::IsItemExpanded(STableRow<UObject_*> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  char cVar4;
  atomic<int> aVar5;
  undefined8 *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined8 local_res8;
  
  pTVar9 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469e1b05;
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
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469e1b56;
  }
LAB_1469e1b05:
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
LAB_1469e1b56:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar6 = (undefined8 *)(**(code **)(pTVar7->_padding_ + 0x48))(pTVar7,this);
  if (puVar6 == (undefined8 *)0x0) {
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
    local_res8 = *puVar6;
    uVar3 = (**(code **)(pTVar7->_padding_ + 0x60))(pTVar7,&local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return (bool)uVar3;
}

// IsItemExpanded @ 1469e1c00

bool __thiscall STableRow<FName>::IsItemExpanded(STableRow<FName> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469e1c45;
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
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469e1c96;
  }
LAB_1469e1c45:
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
LAB_1469e1c96:
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

// IsItemSelected @ 1469e1f20

bool __thiscall STableRow<UObject_*>::IsItemSelected(STableRow<UObject_*> *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  char cVar4;
  atomic<int> aVar5;
  undefined8 *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  undefined8 local_res8;
  
  pTVar9 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469e1f65;
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
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469e1fb6;
  }
LAB_1469e1f65:
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
LAB_1469e1fb6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar6 = (undefined8 *)(**(code **)(pTVar7->_padding_ + 0x48))(pTVar7,this);
  if (puVar6 == (undefined8 *)0x0) {
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
    local_res8 = *puVar6;
    uVar3 = (**(code **)(pTVar7->_padding_ + 0x10))(pTVar7,&local_res8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return (bool)uVar3;
}

// IsItemSelected @ 1469e2060

bool __thiscall STableRow<FName>::IsItemSelected(STableRow<FName> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469e20a5;
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
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469e20f6;
  }
LAB_1469e20a5:
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
LAB_1469e20f6:
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

// IsLastChild @ 1469e2200

bool __thiscall STableRow<UObject_*>::IsLastChild(STableRow<UObject_*> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469e2241;
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
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469e2267;
  }
LAB_1469e2241:
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
LAB_1469e2267:
  uVar3 = (**(code **)(pTVar5->_padding_ + 0x98))(pTVar5,this->IndexInList);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return (bool)uVar3;
}

// IsLastChild @ 1469e22b0

bool __thiscall STableRow<FName>::IsLastChild(STableRow<FName> *this)

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
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469e22f1;
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
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469e2317;
  }
LAB_1469e22f1:
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
LAB_1469e2317:
  uVar3 = (**(code **)(pTVar5->_padding_ + 0x98))(pTVar5,this->IndexInList);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return (bool)uVar3;
}

// OnDragDetected @ 1469e6440

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<UObject_*>::OnDragDetected
          (STableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

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
  bool bVar10;
  FReadAccessScope local_f8;
  undefined1 local_e0 [16];
  FReply local_d0;
  
  if (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) != '\0') {
    *(undefined1 *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) = 0;
    FReply::FReply(&local_d0,true);
    pTVar9 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar9->SharedReferenceCount;
      do {
        pTVar8 = pTVar7;
        if (aVar2 == (atomic<int>)0x0) goto LAB_1469e64b1;
        LOCK();
        aVar4 = pTVar9->SharedReferenceCount;
        bVar10 = aVar2 == aVar4;
        if (bVar10) {
          pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar10);
      pTVar7 = (TReferenceControllerBase<1> *)this->_padding_;
      pTVar8 = pTVar9;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469e64d7;
    }
LAB_1469e64b1:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pTVar9 = pTVar8;
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar1)();
      return pFVar5;
    }
LAB_1469e64d7:
    pTVar6 = (TSharedRef<SWidget,1> *)(**(code **)(pTVar7->_padding_ + 0xe8))(pTVar7,local_e0);
    pFVar5 = FReply::CaptureMouse(&local_d0,pTVar6);
    FReply::FReply(__return_storage_ptr__,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    FReply::~FReply(&local_d0);
    return __return_storage_ptr__;
  }
  bVar10 = SWidget::HasMouseCapture((SWidget *)this);
  if (((!bVar10) ||
      (cVar3 = *(char *)&(this->Content).WeakReferenceCount.ReferenceController,
      *(undefined1 *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 1) = 1,
      cVar3 == '\0')) || (this->IndexInList != 0)) goto LAB_1469e65b1;
  pTVar9 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar9;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469e6575:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pTVar9 = pTVar8;
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar1)();
      return pFVar5;
    }
  }
  else {
    aVar2 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469e6575;
      LOCK();
      aVar4 = pTVar9->SharedReferenceCount;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pTVar7 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar8 = pTVar9;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469e6575;
  }
  (**(code **)(pTVar7->_padding_ + 0x40))(pTVar7,2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
LAB_1469e65b1:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ItemDropZone,&local_f8
            );
  if (((*(int *)&(this->OnDragDetected_Handler).field_0x8 != 0) &&
      (*(longlong **)&this->OnDragDetected_Handler != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)&this->OnDragDetected_Handler + 0x38))(), cVar3 != '\0'))
  {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f8);
    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
    Execute((TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
             *)&this->ItemDropZone,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_f8);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnDragDetected @ 1469e6650

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<FName>::OnDragDetected
          (STableRow<FName> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

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
  bool bVar10;
  FReadAccessScope local_f8;
  undefined1 local_e0 [16];
  FReply local_d0;
  
  if (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) != '\0') {
    *(undefined1 *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) = 0;
    FReply::FReply(&local_d0,true);
    pTVar9 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pTVar8 = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar9->SharedReferenceCount;
      do {
        pTVar8 = pTVar7;
        if (aVar2 == (atomic<int>)0x0) goto LAB_1469e66c1;
        LOCK();
        aVar4 = pTVar9->SharedReferenceCount;
        bVar10 = aVar2 == aVar4;
        if (bVar10) {
          pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar10);
      pTVar7 = (TReferenceControllerBase<1> *)this->_padding_;
      pTVar8 = pTVar9;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469e66e7;
    }
LAB_1469e66c1:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pTVar9 = pTVar8;
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar1)();
      return pFVar5;
    }
LAB_1469e66e7:
    pTVar6 = (TSharedRef<SWidget,1> *)(**(code **)(pTVar7->_padding_ + 0xe8))(pTVar7,local_e0);
    pFVar5 = FReply::CaptureMouse(&local_d0,pTVar6);
    FReply::FReply(__return_storage_ptr__,pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    FReply::~FReply(&local_d0);
    return __return_storage_ptr__;
  }
  bVar10 = SWidget::HasMouseCapture((SWidget *)this);
  if (((!bVar10) ||
      (cVar3 = *(char *)&(this->Content).WeakReferenceCount.ReferenceController,
      *(undefined1 *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 1) = 1,
      cVar3 == '\0')) || (this->IndexInList != 0)) goto LAB_1469e67c1;
  pTVar9 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar9;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469e6785:
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pTVar9 = pTVar8;
    if (bVar10) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar1)();
      return pFVar5;
    }
  }
  else {
    aVar2 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469e6785;
      LOCK();
      aVar4 = pTVar9->SharedReferenceCount;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pTVar7 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar8 = pTVar9;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469e6785;
  }
  (**(code **)(pTVar7->_padding_ + 0x40))(pTVar7,2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
LAB_1469e67c1:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ItemDropZone,&local_f8
            );
  if (((*(int *)&(this->OnDragDetected_Handler).field_0x8 != 0) &&
      (*(longlong **)&this->OnDragDetected_Handler != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)&this->OnDragDetected_Handler + 0x38))(), cVar3 != '\0'))
  {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f8);
    TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
    Execute((TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
             *)&this->ItemDropZone,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_f8);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnDragEnter @ 1469e6920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STableRow<UObject_*>::OnDragEnter
          (STableRow<UObject_*> *this,FGeometry *param_1,FDragDropEvent *param_2)

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

// OnDragEnter @ 1469e69b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STableRow<FName>::OnDragEnter(STableRow<FName> *this,FGeometry *param_1,FDragDropEvent *param_2)

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

// OnDragLeave @ 1469e6b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
STableRow<UObject_*>::OnDragLeave(STableRow<UObject_*> *this,FDragDropEvent *param_1)

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

// OnDragLeave @ 1469e6bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall STableRow<FName>::OnDragLeave(STableRow<FName> *this,FDragDropEvent *param_1)

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

// OnDragOver @ 1469e6f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<UObject_*>::OnDragOver
          (STableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FDeprecateSlateVector2D FVar3;
  undefined8 uVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool *pbVar7;
  char cVar8;
  atomic<int> aVar9;
  int iVar10;
  int iVar11;
  FReply *pFVar12;
  TTransform2<float> *pTVar13;
  undefined8 *puVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_168;
  undefined4 local_160;
  char local_15c;
  FReadAccessScope local_158;
  FReadAccessScope local_140;
  int local_128;
  FDragDropEvent local_120;
  bool *local_90;
  TTransform2<float> local_88;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStack_198;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->ExpanderArrowWidget).SharedReferenceCount,&local_158);
  if (((*(int *)&(this->OnCanAcceptDrop).field_0x8 == 0) ||
      (*(longlong **)&this->OnCanAcceptDrop == (longlong *)0x0)) ||
     (cVar8 = (**(code **)(**(longlong **)&this->OnCanAcceptDrop + 0x38))(), cVar8 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_158);
    FReply::FReply(__return_storage_ptr__,false);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_158);
  pTVar18 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  iVar11 = 0;
  pTVar16 = pTVar19;
  pTVar17 = pTVar18;
  if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469e7055:
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FReply *)(*pcVar5)();
      return pFVar12;
    }
    pTVar18 = pTVar17;
    if ((pTVar16 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar20)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FReply *)(*pcVar5)();
      return pFVar12;
    }
  }
  else {
    aVar6 = pTVar18->SharedReferenceCount;
    do {
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
      pTVar17 = pTVar19;
      if (aVar6 == (atomic<int>)0x0) goto LAB_1469e7055;
      LOCK();
      aVar9 = pTVar18->SharedReferenceCount;
      bVar20 = aVar6 == aVar9;
      if (bVar20) {
        pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar9 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar9;
    } while (!bVar20);
    pTVar16 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar17 = pTVar18;
    if (pTVar16 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469e7055;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar13 = Inverse<TTransform2<float>_>(&local_88,&param_1->AccumulatedRenderTransform);
  lVar2 = param_2->_padding_;
  local_168._4_4_ = (float)((ulonglong)lVar2 >> 0x20);
  local_168._0_4_ = (float)lVar2;
  fVar23 = local_168._4_4_ * (pTVar13->M).M[1][0];
  fVar21 = (float)local_168 * (pTVar13->M).M[0][0];
  fVar22 = (pTVar13->Trans).field0_0x0._s_0.X;
  fVar24 = (float)local_168 * (pTVar13->M).M[0][1] + local_168._4_4_ * (pTVar13->M).M[1][1] +
           (pTVar13->Trans).field0_0x0._s_0.Y;
  local_168 = (FDeprecateSlateVector2D)lVar2;
  iVar10 = (**(code **)(pTVar16->_padding_ + 0xc0))(pTVar16);
  FVar3 = param_1->Size;
  if (iVar10 == 0) {
    local_168._0_4_ = FVar3._0_4_;
    fVar24 = fVar23 + fVar21 + fVar22;
  }
  else {
    local_168._4_4_ = FVar3._4_4_;
    local_168._0_4_ = local_168._4_4_;
  }
  fVar22 = (float)local_168 * __real_3e800000;
  if (__real_41200000 <= (float)local_168 * __real_3e800000) {
    fVar22 = __real_41200000;
  }
  if (fVar22 <= __real_40400000) {
    fVar22 = __real_40400000;
  }
  if (fVar22 <= fVar24) {
    iVar11 = ((float)local_168 - fVar22 < fVar24) + 1;
  }
  local_168 = FVar3;
  local_128 = iVar11;
  FDragDropEvent::FDragDropEvent(&local_120,param_2);
  local_90 = &this[-1].bChangedSelectionOnMouseDown;
  pTVar16 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar15 = pTVar16;
  pTVar17 = pTVar19;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar16->SharedReferenceCount;
    do {
      pTVar15 = pTVar19;
      if (aVar6 == (atomic<int>)0x0) goto LAB_1469e71c5;
      LOCK();
      aVar9 = pTVar16->SharedReferenceCount;
      bVar20 = aVar6 == aVar9;
      if (bVar20) {
        pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar9 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar9;
    } while (!bVar20);
    pTVar17 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar15 = pTVar16;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469e7216;
  }
LAB_1469e71c5:
  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar20) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FReply *)(*pcVar5)();
    return pFVar12;
  }
  pTVar16 = pTVar15;
  if ((pTVar17 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FReply *)(*pcVar5)();
    return pFVar12;
  }
LAB_1469e7216:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar14 = (undefined8 *)(**(code **)(pTVar17->_padding_ + 0x48))(pTVar17,local_90);
  pbVar7 = local_90;
  iVar11 = local_128;
  if (puVar14 == (undefined8 *)0x0) {
    cVar8 = (**(code **)(pTVar17->_padding_ + 200))(pTVar17);
    if ((cVar8 == '\0') &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar20)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FReply *)(*pcVar5)();
      return pFVar12;
    }
    local_15c = '\0';
  }
  else {
    uVar4 = *puVar14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_90 + 0x328),
               &local_140);
    if (*(int *)(pbVar7 + 0x338) != 0) {
      pTVar19 = *(TReferenceControllerBase<1> **)(pbVar7 + 0x330);
    }
    local_178 = uVar4;
    (**(code **)(pTVar19->_padding_ + 0x60))(pTVar19,&local_160,&local_120,iVar11);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_140);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  puVar1 = &(this->PaintDropIndicatorEvent).field_0x10;
  if (&local_160 != (undefined4 *)puVar1) {
    if (local_15c == '\0') {
      if ((this->PaintDropIndicatorEvent).field_0x14 != '\0') {
        (this->PaintDropIndicatorEvent).field_0x14 = 0;
      }
    }
    else {
      *(undefined4 *)puVar1 = local_160;
      (this->PaintDropIndicatorEvent).field_0x14 = 1;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.Content.SharedReferenceCount.ReferenceController);
  FPointerEvent::~FPointerEvent((FPointerEvent *)&local_120);
  FReply::FReply(__return_storage_ptr__,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  return __return_storage_ptr__;
}

// OnDragOver @ 1469e73a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<FName>::OnDragOver
          (STableRow<FName> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  FDeprecateSlateVector2D FVar3;
  undefined8 uVar4;
  code *pcVar5;
  atomic<int> aVar6;
  bool *pbVar7;
  char cVar8;
  atomic<int> aVar9;
  int iVar10;
  int iVar11;
  FReply *pFVar12;
  TTransform2<float> *pTVar13;
  undefined8 *puVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_168;
  undefined4 local_160;
  char local_15c;
  FReadAccessScope local_158;
  FReadAccessScope local_140;
  int local_128;
  FDragDropEvent local_120;
  bool *local_90;
  TTransform2<float> local_88;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStack_198;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->ExpanderArrowWidget).SharedReferenceCount,&local_158);
  if (((*(int *)&(this->OnCanAcceptDrop).field_0x8 == 0) ||
      (*(longlong **)&this->OnCanAcceptDrop == (longlong *)0x0)) ||
     (cVar8 = (**(code **)(**(longlong **)&this->OnCanAcceptDrop + 0x38))(), cVar8 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_158);
    FReply::FReply(__return_storage_ptr__,false);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_158);
  pTVar17 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  iVar11 = 0;
  pTVar15 = pTVar19;
  pTVar16 = pTVar17;
  if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469e7465:
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FReply *)(*pcVar5)();
      return pFVar12;
    }
    pTVar17 = pTVar16;
    if ((pTVar15 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar20)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FReply *)(*pcVar5)();
      return pFVar12;
    }
  }
  else {
    aVar6 = pTVar17->SharedReferenceCount;
    do {
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
      pTVar16 = pTVar19;
      if (aVar6 == (atomic<int>)0x0) goto LAB_1469e7465;
      LOCK();
      aVar9 = pTVar17->SharedReferenceCount;
      bVar20 = aVar6 == aVar9;
      if (bVar20) {
        pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar9 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar9;
    } while (!bVar20);
    pTVar15 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar16 = pTVar17;
    if (pTVar15 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469e7465;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar13 = Inverse<TTransform2<float>_>(&local_88,&param_1->AccumulatedRenderTransform);
  lVar2 = param_2->_padding_;
  local_168._4_4_ = (float)((ulonglong)lVar2 >> 0x20);
  local_168._0_4_ = (float)lVar2;
  fVar23 = local_168._4_4_ * (pTVar13->M).M[1][0];
  fVar21 = (float)local_168 * (pTVar13->M).M[0][0];
  fVar22 = (pTVar13->Trans).field0_0x0._s_0.X;
  fVar24 = (float)local_168 * (pTVar13->M).M[0][1] + local_168._4_4_ * (pTVar13->M).M[1][1] +
           (pTVar13->Trans).field0_0x0._s_0.Y;
  local_168 = (FDeprecateSlateVector2D)lVar2;
  iVar10 = (**(code **)(pTVar15->_padding_ + 0xc0))(pTVar15);
  FVar3 = param_1->Size;
  if (iVar10 == 0) {
    local_168._0_4_ = FVar3._0_4_;
    fVar24 = fVar23 + fVar21 + fVar22;
  }
  else {
    local_168._4_4_ = FVar3._4_4_;
    local_168._0_4_ = local_168._4_4_;
  }
  fVar22 = (float)local_168 * __real_3e800000;
  if (__real_41200000 <= (float)local_168 * __real_3e800000) {
    fVar22 = __real_41200000;
  }
  if (fVar22 <= __real_40400000) {
    fVar22 = __real_40400000;
  }
  if (fVar22 <= fVar24) {
    iVar11 = ((float)local_168 - fVar22 < fVar24) + 1;
  }
  local_168 = FVar3;
  local_128 = iVar11;
  FDragDropEvent::FDragDropEvent(&local_120,param_2);
  local_90 = &this[-1].bChangedSelectionOnMouseDown;
  pTVar15 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar16 = pTVar19;
  pTVar18 = pTVar15;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar15->SharedReferenceCount;
    do {
      pTVar18 = pTVar19;
      if (aVar6 == (atomic<int>)0x0) goto LAB_1469e75d5;
      LOCK();
      aVar9 = pTVar15->SharedReferenceCount;
      bVar20 = aVar6 == aVar9;
      if (bVar20) {
        pTVar15->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar9 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar9;
    } while (!bVar20);
    pTVar16 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar18 = pTVar15;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469e7626;
  }
LAB_1469e75d5:
  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar20) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FReply *)(*pcVar5)();
    return pFVar12;
  }
  pTVar15 = pTVar18;
  if ((pTVar16 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FReply *)(*pcVar5)();
    return pFVar12;
  }
LAB_1469e7626:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar14 = (undefined8 *)(**(code **)(pTVar16->_padding_ + 0x48))(pTVar16,local_90);
  pbVar7 = local_90;
  iVar11 = local_128;
  if (puVar14 == (undefined8 *)0x0) {
    cVar8 = (**(code **)(pTVar16->_padding_ + 200))(pTVar16);
    if ((cVar8 == '\0') &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar20)) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FReply *)(*pcVar5)();
      return pFVar12;
    }
    local_15c = '\0';
  }
  else {
    uVar4 = *puVar14;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_90 + 0x328),
               &local_140);
    if (*(int *)(pbVar7 + 0x338) != 0) {
      pTVar19 = *(TReferenceControllerBase<1> **)(pbVar7 + 0x330);
    }
    local_178 = uVar4;
    (**(code **)(pTVar19->_padding_ + 0x60))(pTVar19,&local_160,&local_120,iVar11);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_140);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  puVar1 = &(this->PaintDropIndicatorEvent).field_0x10;
  if (&local_160 != (undefined4 *)puVar1) {
    if (local_15c == '\0') {
      if ((this->PaintDropIndicatorEvent).field_0x14 != '\0') {
        (this->PaintDropIndicatorEvent).field_0x14 = 0;
      }
    }
    else {
      *(undefined4 *)puVar1 = local_160;
      (this->PaintDropIndicatorEvent).field_0x14 = 1;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.Content.SharedReferenceCount.ReferenceController);
  FPointerEvent::~FPointerEvent((FPointerEvent *)&local_120);
  FReply::FReply(__return_storage_ptr__,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  return __return_storage_ptr__;
}

// OnDrop @ 1469e7cb0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<UObject_*>::OnDrop
          (STableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  char cVar1;
  undefined1 local_e8 [32];
  FReply local_c8;
  
  local_e8._0_8_ = &this[-1].bChangedSelectionOnMouseDown;
  local_e8._8_8_ = param_1;
  local_e8._16_8_ = param_2;
  `STableRow<UObject_*>::OnDrop'::__l2::<lambda_1>::operator()(local_e8,&local_c8);
  if ((char)local_c8._padding_ == '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->OnDragLeave_Handler).field_0x10,(FReadAccessScope *)local_e8);
    if ((*(int *)&(this->OnDrop_Handler).field_0x8 != 0) &&
       (*(longlong **)&this->OnDrop_Handler != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)&this->OnDrop_Handler + 0x38))();
      if (cVar1 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)local_e8);
        TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::Execute
                  ((TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy> *)
                   &(this->OnDragLeave_Handler).field_0x10,__return_storage_ptr__,param_2);
        goto LAB_1469e7d59;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_e8);
  }
  FReply::FReply(__return_storage_ptr__,&local_c8);
LAB_1469e7d59:
  FReply::~FReply(&local_c8);
  return __return_storage_ptr__;
}

// OnDrop @ 1469e7d90

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<FName>::OnDrop
          (STableRow<FName> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  char cVar1;
  undefined1 local_e8 [32];
  FReply local_c8;
  
  local_e8._0_8_ = &this[-1].bChangedSelectionOnMouseDown;
  local_e8._8_8_ = param_1;
  local_e8._16_8_ = param_2;
  `STableRow<FName>::OnDrop'::__l2::<lambda_1>::operator()(local_e8,&local_c8);
  if ((char)local_c8._padding_ == '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->OnDragLeave_Handler).field_0x10,(FReadAccessScope *)local_e8);
    if ((*(int *)&(this->OnDrop_Handler).field_0x8 != 0) &&
       (*(longlong **)&this->OnDrop_Handler != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)&this->OnDrop_Handler + 0x38))();
      if (cVar1 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)local_e8);
        TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::Execute
                  ((TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy> *)
                   &(this->OnDragLeave_Handler).field_0x10,__return_storage_ptr__,param_2);
        goto LAB_1469e7e39;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_e8);
  }
  FReply::FReply(__return_storage_ptr__,&local_c8);
LAB_1469e7e39:
  FReply::~FReply(&local_c8);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 1469ec0c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<UObject_*>::OnMouseButtonDoubleClick
          (STableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

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
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar10 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar11 = FVar1 != EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (bVar11) goto LAB_1469ec221;
  pTVar10 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469ec135:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469ec135;
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
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469ec135;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar7 = (undefined8 *)(**(code **)(pTVar8->_padding_ + 0x48))(pTVar8);
  if (puVar7 != (undefined8 *)0x0) {
    cVar4 = (**(code **)(pTVar8->_padding_ + 0xb0))(pTVar8,*puVar7);
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
LAB_1469ec221:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonDoubleClick @ 1469ec250

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<FName>::OnMouseButtonDoubleClick
          (STableRow<FName> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

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
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar10 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar11 = FVar1 != EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (bVar11) goto LAB_1469ec3ad;
  pTVar10 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469ec2c5:
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
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469ec2c5;
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
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469ec2c5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar7 = (undefined8 *)
           (**(code **)(pTVar8->_padding_ + 0x48))(pTVar8,&this[-1].bChangedSelectionOnMouseDown);
  if (puVar7 != (undefined8 *)0x0) {
    cVar4 = (**(code **)(pTVar8->_padding_ + 0xb0))(pTVar8,*puVar7);
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
LAB_1469ec3ad:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 1469ecc80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<UObject_*>::OnMouseButtonDown
          (STableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

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
  undefined8 local_res8;
  FReply *local_res10;
  TSharedRef<SWidget,1> local_158;
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
  local_res10 = __return_storage_ptr__;
  if (pSVar17 == (SWidget *)0x0) {
LAB_1469eccd6:
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
      if (aVar5 == (atomic<int>)0x0) goto LAB_1469eccd6;
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
    if (pSVar14 == (SWidget *)0x0) goto LAB_1469eccd6;
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
      local_res8 = *puVar10;
      cVar6 = (*(code *)(((TStatIdData *)pSVar14->_padding_)->StatDescriptionAnsi).Ptr)
                        (pSVar14,&local_res8);
      if (iVar8 == 3) {
        if ((param_2->_padding_ & 3) == 0) {
          if ((param_2->_padding_ & 0xc) == 0) goto LAB_1469ece2c;
          (*(code *)((TStatIdData *)pSVar14->_padding_)[1].StatDescriptionAnsi.Ptr)
                    (pSVar14,local_res8,cVar6 == '\0');
        }
        else {
          (*(code *)((TStatIdData *)pSVar14->_padding_)[2].StatDescriptionWide.Ptr)
                    (pSVar14,local_res8);
        }
        iVar8 = this->IndexInList;
        *(undefined1 *)&(this->Content).WeakReferenceCount.ReferenceController = 1;
        if (iVar8 == 1) {
          (*(code *)((TStatIdData *)pSVar14->_padding_)[2].StatDescriptionAnsi.Ptr)(pSVar14,2);
        }
      }
LAB_1469ece2c:
      if (((*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 3) != '\0'
           ) || (cVar6 == '\0')) &&
         (*(char *)&(this->Content).WeakReferenceCount.ReferenceController == '\0')) {
        (*(code *)((TStatIdData *)pSVar14->_padding_)[2].Name)(pSVar14);
        (*(code *)((TStatIdData *)pSVar14->_padding_)[1].StatDescriptionAnsi.Ptr)
                  (pSVar14,local_res8,1);
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
      local_158.Object = (SWidget *)&pTVar11->Object[-1].StatID;
      if (pTVar11->Object == (SWidget *)0x0) {
        local_158.Object = pSVar15;
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
      if (local_158.Object == (SWidget *)0x0) {
        local_158.Object = (SWidget *)0x0;
      }
      else {
        local_158.Object = (SWidget *)&(local_158.Object)->_padding_;
      }
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar12 = (atomic<int>)((int)*paVar12 + 1);
        UNLOCK();
      }
      local_158.SharedReferenceCount.ReferenceController = pTVar1;
      pFVar9 = FReply::DetectDrag(&local_f0,&local_158,&local_138);
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
      FReply::FReply(local_res10,pFVar9);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      FReply::~FReply(&local_f0);
      goto LAB_1469ed03a;
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
  FReply::FReply(local_res10,false);
LAB_1469ed03a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar17);
  return local_res10;
}

// OnMouseButtonDown @ 1469ed070

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<FName>::OnMouseButtonDown
          (STableRow<FName> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

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
  SWidget *pSVar13;
  SWidget *pSVar14;
  atomic<int> *paVar15;
  SWidget *pSVar16;
  SWidget *pSVar17;
  bool bVar18;
  TSharedRef<SWidget,1> local_148;
  TSharedRef<SWidget,1> local_138;
  FKey local_128;
  TSharedRef<SWidget,1> local_110;
  TSharedRef<SWidget,1> local_100;
  undefined1 local_f0 [16];
  FReply local_e0;
  
  pSVar14 = (SWidget *)(this->OwnerTablePtr).Object;
  pSVar17 = (SWidget *)0x0;
  pSVar13 = pSVar14;
  pSVar16 = pSVar17;
  if (pSVar14 == (SWidget *)0x0) {
LAB_1469ed0c5:
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FReply *)(*pcVar4)();
      return pFVar9;
    }
    pSVar14 = pSVar13;
    if ((pSVar16 == (SWidget *)0x0) &&
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
    aVar5 = *(atomic<int> *)&pSVar14->_padding_;
    do {
      pSVar13 = pSVar17;
      pSVar16 = (SWidget *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1469ed0c5;
      LOCK();
      aVar7 = *(atomic<int> *)&pSVar14->_padding_;
      bVar18 = aVar5 == aVar7;
      if (bVar18) {
        *(atomic<int> *)&pSVar14->_padding_ = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar18);
    pSVar16 = (SWidget *)this->_padding_;
    pSVar13 = pSVar14;
    if (pSVar16 == (SWidget *)0x0) goto LAB_1469ed0c5;
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
    puVar10 = (undefined8 *)(*(code *)((TStatIdData *)pSVar16->_padding_)[3].Name)(pSVar16);
    if (puVar10 != (undefined8 *)0x0) {
      cVar6 = (*(code *)(((TStatIdData *)pSVar16->_padding_)->StatDescriptionAnsi).Ptr)
                        (pSVar16,puVar10);
      if (iVar8 == 3) {
        if ((param_2->_padding_ & 3) == 0) {
          if ((param_2->_padding_ & 0xc) == 0) goto LAB_1469ed207;
          (*(code *)((TStatIdData *)pSVar16->_padding_)[1].StatDescriptionAnsi.Ptr)
                    (pSVar16,*puVar10,cVar6 == '\0');
        }
        else {
          (*(code *)((TStatIdData *)pSVar16->_padding_)[2].StatDescriptionWide.Ptr)
                    (pSVar16,*puVar10);
        }
        iVar8 = this->IndexInList;
        *(undefined1 *)&(this->Content).WeakReferenceCount.ReferenceController = 1;
        if (iVar8 == 1) {
          (*(code *)((TStatIdData *)pSVar16->_padding_)[2].StatDescriptionAnsi.Ptr)(pSVar16,2);
        }
      }
LAB_1469ed207:
      if (((*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 3) != '\0'
           ) || (cVar6 == '\0')) &&
         (*(char *)&(this->Content).WeakReferenceCount.ReferenceController == '\0')) {
        (*(code *)((TStatIdData *)pSVar16->_padding_)[2].Name)(pSVar16);
        (*(code *)((TStatIdData *)pSVar16->_padding_)[1].StatDescriptionAnsi.Ptr)
                  (pSVar16,*puVar10,1);
        iVar8 = this->IndexInList;
        *(undefined1 *)&(this->Content).WeakReferenceCount.ReferenceController = 1;
        if (iVar8 == 1) {
          (*(code *)((TStatIdData *)pSVar16->_padding_)[2].StatDescriptionAnsi.Ptr)(pSVar16,2);
        }
      }
      FReply::FReply(&local_e0,true);
      local_128.KeyName = EKeys::LeftMouseButton.KeyName;
      local_128.KeyDetails.Object = EKeys::LeftMouseButton.KeyDetails.Object;
      local_128.KeyDetails.SharedReferenceCount.ReferenceController =
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
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_110);
      paVar15 = (atomic<int> *)&DAT_00000008;
      pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
      local_148.Object = (SWidget *)&pTVar11->Object[-1].StatID;
      if (pTVar11->Object == (SWidget *)0x0) {
        local_148.Object = pSVar17;
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
                (local_110.SharedReferenceCount.ReferenceController);
      if (local_148.Object == (SWidget *)0x0) {
        local_148.Object = (SWidget *)0x0;
      }
      else {
        local_148.Object = (SWidget *)&(local_148.Object)->_padding_;
      }
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar12 = (atomic<int>)((int)*paVar12 + 1);
        UNLOCK();
      }
      local_148.SharedReferenceCount.ReferenceController = pTVar1;
      pFVar9 = FReply::DetectDrag(&local_e0,&local_148,&local_128);
      pTVar11 = (TSharedRef<SWidget,1> *)
                (*(code *)((TStatIdData *)pSVar16->_padding_)[9].StatDescriptionAnsi.Ptr)
                          (pSVar16,local_f0);
      pFVar9 = FReply::SetUserFocus(pFVar9,pTVar11,Mouse,false);
      pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_100);
      pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
      pSVar16 = (SWidget *)&pTVar11->Object[-1].StatID;
      if (pTVar11->Object == (SWidget *)0x0) {
        pSVar16 = pSVar17;
      }
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        paVar15 = &pTVar3->SharedReferenceCount;
        LOCK();
        *paVar15 = (atomic<int>)((int)*paVar15 + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_100.SharedReferenceCount.ReferenceController);
      if (pSVar16 != (SWidget *)0x0) {
        pSVar17 = (SWidget *)&pSVar16->_padding_;
      }
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar15 = (atomic<int>)((int)*paVar15 + 1);
        UNLOCK();
      }
      local_138.Object = pSVar17;
      local_138.SharedReferenceCount.ReferenceController = pTVar3;
      pFVar9 = FReply::CaptureMouse(pFVar9,&local_138);
      FReply::FReply(__return_storage_ptr__,pFVar9);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      FReply::~FReply(&local_e0);
      goto LAB_1469ed415;
    }
    cVar6 = (*(code *)((TStatIdData *)pSVar16->_padding_)[8].StatDescriptionWide.Ptr)(pSVar16);
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
LAB_1469ed415:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 1469ede70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<UObject_*>::OnMouseButtonUp
          (STableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

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
  FDeprecateSlateVector2D local_res8;
  FReply *local_res10;
  FGeometry *local_res18;
  undefined8 local_res20;
  undefined8 local_4b8;
  FReply local_4b0;
  FReply local_3f8;
  FReply local_340;
  FReply local_288;
  FReply local_1c8;
  FReply local_108;
  
  pSVar14 = (STableViewBase *)(this->OwnerTablePtr).Object;
  pSVar16 = (STableViewBase *)0x0;
  pSVar13 = pSVar14;
  pSVar15 = (STableViewBase *)0x0;
  local_res10 = __return_storage_ptr__;
  local_res18 = param_1;
  if (pSVar14 == (STableViewBase *)0x0) {
LAB_1469edede:
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469edede;
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
    if (pSVar15 == (STableViewBase *)0x0) goto LAB_1469edede;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pSVar13 = (STableViewBase *)&pSVar15[-2].field_0x588;
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
    FReply::FReply(&local_4b0,false);
    FVar6.ReferenceController = local_4b0.MouseCaptor.WeakReferenceCount.ReferenceController;
    local_4b0.MouseCaptor.Object = (SWidget *)0x0;
    local_4b0.MouseCaptor.WeakReferenceCount.ReferenceController =
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
    local_4b0.bUseHighPrecisionMouse = 0;
    local_4b0.bReleaseMouseCapture = 1;
    FReply::FReply(&local_1c8,&local_4b0);
    FReply::~FReply(&local_4b0);
    if (*(char *)&(this->Content).WeakReferenceCount.ReferenceController != '\0') {
      FReply::FReply(&local_3f8,true);
      FVar6.ReferenceController = local_3f8.MouseCaptor.WeakReferenceCount.ReferenceController;
      local_3f8.MouseCaptor.Object = (SWidget *)0x0;
      local_3f8.MouseCaptor.WeakReferenceCount.ReferenceController =
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
      local_3f8.bUseHighPrecisionMouse = 0;
      local_3f8.bReleaseMouseCapture = 1;
      FReply::operator=(&local_1c8,&local_3f8);
      FReply::~FReply(&local_3f8);
    }
    local_res8 = param_2->ScreenSpacePosition;
    bVar17 = FGeometry::IsUnderLocation(local_res18,(FDeprecateVector2DParameter *)&local_res8);
    bVar7 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar7) {
      if ((bVar17) &&
         (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 1) == '\0'))
      {
        iVar10 = (**(code **)(*(longlong *)&this[-1].bChangedSelectionOnMouseDown + 0x78))
                           (&this[-1].bChangedSelectionOnMouseDown);
        if (iVar10 == 2) {
          if (*(char *)&(this->Content).WeakReferenceCount.ReferenceController == '\0') {
            (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0x30))(pSVar15);
            (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0x40))(pSVar15,2);
          }
          FReply::FReply(&local_288,true);
          FVar6.ReferenceController = local_288.MouseCaptor.WeakReferenceCount.ReferenceController;
          local_288.MouseCaptor.Object = (SWidget *)0x0;
          local_288.MouseCaptor.WeakReferenceCount.ReferenceController =
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
          local_288.bUseHighPrecisionMouse = 0;
          local_288.bReleaseMouseCapture = 1;
          FReply::operator=(&local_1c8,&local_288);
          pFVar11 = &local_288;
LAB_1469ee288:
          FReply::~FReply(pFVar11);
        }
        else if ((((iVar10 == 3) &&
                  (*(char *)&(this->Content).WeakReferenceCount.ReferenceController == '\0')) &&
                 ((param_2->_padding_ & 0xc) == 0)) && ((param_2->_padding_ & 3) == 0)) {
          puVar12 = (undefined8 *)
                    (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0x48))
                              (pSVar15,&this[-1].bChangedSelectionOnMouseDown);
          if (puVar12 == (undefined8 *)0x0) {
            cVar8 = (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 200))(pSVar15);
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
            local_res20 = *puVar12;
            cVar8 = (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0x10))
                              (pSVar15,&local_res20);
            if ((cVar8 != '\0') &&
               (iVar10 = (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0x70))
                                   (pSVar15), 1 < iVar10)) {
              (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0x30))(pSVar15);
              (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0x28))
                        (pSVar15,*puVar12,1);
              (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0x40))(pSVar15,2);
              FReply::FReply(&local_340,true);
              FVar6.ReferenceController =
                   local_340.MouseCaptor.WeakReferenceCount.ReferenceController;
              local_340.MouseCaptor.Object = (SWidget *)0x0;
              local_340.MouseCaptor.WeakReferenceCount.ReferenceController =
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
              local_340.bUseHighPrecisionMouse = 0;
              local_340.bReleaseMouseCapture = 1;
              FReply::operator=(&local_1c8,&local_340);
              pFVar11 = &local_340;
              goto LAB_1469ee288;
            }
          }
        }
      }
      puVar12 = (undefined8 *)
                (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0x48))
                          (pSVar15,&this[-1].bChangedSelectionOnMouseDown);
      if (puVar12 == (undefined8 *)0x0) {
        cVar8 = (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 200))(pSVar15);
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
        cVar8 = (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0xa8))
                          (pSVar15,*puVar12);
        if (cVar8 != '\0') {
          FReply::FReply(&local_108,true);
          pFVar11 = FReply::ReleaseMouseCapture(&local_108);
          FReply::operator=(&local_1c8,pFVar11);
          FReply::~FReply(&local_108);
        }
      }
      if (((*(char *)&(this->Content).WeakReferenceCount.ReferenceController != '\0') &&
          (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 1) == '\0')
          ) && (this->IndexInList == 0)) {
        (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0x40))(pSVar15,2);
      }
      FReply::FReply(local_res10,&local_1c8);
      FReply::~FReply(&local_1c8);
      goto LAB_1469ee496;
    }
    FReply::~FReply(&local_1c8);
LAB_1469ee488:
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
      goto LAB_1469ee488;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    iVar10 = (**(code **)(*(longlong *)&this[-1].bChangedSelectionOnMouseDown + 0x78))
                       (&this[-1].bChangedSelectionOnMouseDown);
    if (((iVar10 != 1) && (iVar10 != 2)) && (iVar10 != 3)) goto LAB_1469ee488;
    puVar12 = (undefined8 *)
              (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0x48))(pSVar15);
    if (puVar12 == (undefined8 *)0x0) {
      cVar8 = (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 200))(pSVar15);
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
      goto LAB_1469ee488;
    }
    local_4b8 = *puVar12;
    cVar8 = (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0x10))
                      (pSVar15,&local_4b8);
    if (cVar8 == '\0') {
      (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0x30))(pSVar15);
      (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0x28))(pSVar15,*puVar12,1);
      (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0x40))(pSVar15,2);
    }
    (**(code **)((longlong)*(ITypedTableView<UObject_*> *)pSVar15 + 0xa0))(pSVar15,*puVar12,param_2)
    ;
    bVar17 = true;
  }
  FReply::FReply(local_res10,bVar17);
LAB_1469ee496:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
  return local_res10;
}

// OnMouseButtonUp @ 1469ee4d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<FName>::OnMouseButtonUp
          (STableRow<FName> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

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
  FDeprecateSlateVector2D local_res8;
  FReply *local_res10;
  FGeometry *local_res18;
  FReply local_498;
  FReply local_3e0;
  FReply local_328;
  FReply local_268;
  FReply local_1b0;
  FReply local_f8;
  
  pSVar14 = (STableViewBase *)(this->OwnerTablePtr).Object;
  pSVar16 = (STableViewBase *)0x0;
  pSVar13 = pSVar14;
  pSVar15 = (STableViewBase *)0x0;
  local_res10 = __return_storage_ptr__;
  local_res18 = param_1;
  if (pSVar14 == (STableViewBase *)0x0) {
LAB_1469ee54a:
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
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469ee54a;
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
    if (pSVar15 == (STableViewBase *)0x0) goto LAB_1469ee54a;
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
    FReply::FReply(&local_328,&local_498);
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
      FReply::operator=(&local_328,&local_3e0);
      FReply::~FReply(&local_3e0);
    }
    local_res8 = param_2->ScreenSpacePosition;
    bVar17 = FGeometry::IsUnderLocation(local_res18,(FDeprecateVector2DParameter *)&local_res8);
    bVar7 = SWidget::HasMouseCapture((SWidget *)this);
    if (bVar7) {
      if ((bVar17) &&
         (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 1) == '\0'))
      {
        iVar10 = (**(code **)(*(longlong *)&this[-1].bChangedSelectionOnMouseDown + 0x78))
                           (&this[-1].bChangedSelectionOnMouseDown);
        if (iVar10 == 2) {
          if (*(char *)&(this->Content).WeakReferenceCount.ReferenceController == '\0') {
            (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0x30))(pSVar15);
            (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0x40))(pSVar15,2);
          }
          FReply::FReply(&local_1b0,true);
          pFVar11 = FReply::ReleaseMouseCapture(&local_1b0);
          FReply::operator=(&local_328,pFVar11);
          pFVar11 = &local_1b0;
LAB_1469ee864:
          FReply::~FReply(pFVar11);
        }
        else if ((((iVar10 == 3) &&
                  (*(char *)&(this->Content).WeakReferenceCount.ReferenceController == '\0')) &&
                 ((param_2->_padding_ & 0xc) == 0)) && ((param_2->_padding_ & 3) == 0)) {
          puVar12 = (undefined8 *)
                    (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0x48))
                              (pSVar15,&this[-1].bChangedSelectionOnMouseDown);
          if (puVar12 == (undefined8 *)0x0) {
            cVar8 = (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 200))(pSVar15);
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
            cVar8 = (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0x10))
                              (pSVar15,puVar12);
            if ((cVar8 != '\0') &&
               (iVar10 = (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0x70))(pSVar15)
               , 1 < iVar10)) {
              (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0x30))(pSVar15);
              (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0x28))(pSVar15,*puVar12,1)
              ;
              (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0x40))(pSVar15,2);
              FReply::FReply(&local_268,true);
              pFVar11 = FReply::ReleaseMouseCapture(&local_268);
              FReply::operator=(&local_328,pFVar11);
              pFVar11 = &local_268;
              goto LAB_1469ee864;
            }
          }
        }
      }
      puVar12 = (undefined8 *)
                (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0x48))
                          (pSVar15,&this[-1].bChangedSelectionOnMouseDown);
      if (puVar12 == (undefined8 *)0x0) {
        cVar8 = (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 200))(pSVar15);
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
        cVar8 = (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0xa8))(pSVar15,*puVar12)
        ;
        if (cVar8 != '\0') {
          FReply::FReply(&local_f8,true);
          pFVar11 = FReply::ReleaseMouseCapture(&local_f8);
          FReply::operator=(&local_328,pFVar11);
          FReply::~FReply(&local_f8);
        }
      }
      if (((*(char *)&(this->Content).WeakReferenceCount.ReferenceController != '\0') &&
          (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 1) == '\0')
          ) && (this->IndexInList == 0)) {
        (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0x40))(pSVar15,2);
      }
      FReply::FReply(local_res10,&local_328);
      FReply::~FReply(&local_328);
      goto LAB_1469eea64;
    }
    FReply::~FReply(&local_328);
LAB_1469eea56:
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
      goto LAB_1469eea56;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    iVar10 = (**(code **)(*(longlong *)&this[-1].bChangedSelectionOnMouseDown + 0x78))
                       (&this[-1].bChangedSelectionOnMouseDown);
    if (((iVar10 != 1) && (iVar10 != 2)) && (iVar10 != 3)) goto LAB_1469eea56;
    puVar12 = (undefined8 *)
              (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0x48))(pSVar15);
    if (puVar12 == (undefined8 *)0x0) {
      cVar8 = (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 200))(pSVar15);
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
      goto LAB_1469eea56;
    }
    cVar8 = (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0x10))(pSVar15,puVar12);
    if (cVar8 == '\0') {
      (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0x30))(pSVar15);
      (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0x28))(pSVar15,*puVar12,1);
      (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0x40))(pSVar15,2);
    }
    (**(code **)((longlong)*(ITypedTableView<FName> *)pSVar15 + 0xa0))(pSVar15,*puVar12,param_2);
    bVar17 = true;
  }
  FReply::FReply(local_res10,bVar17);
LAB_1469eea64:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar14);
  return local_res10;
}

// OnPaint @ 1469ef630

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<UObject_*>::OnPaint
          (STableRow<UObject_*> *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  bool *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  FReadAccessScope local_48;
  
  this_00 = &this[-1].bChangedSelectionOnMouseDown;
  iVar4 = PaintSelection((STableRow<UObject_*> *)this_00,param_1,param_2,param_3,param_4,param_5,
                         param_6,param_7);
  iVar4 = SBorder::OnPaint((SBorder *)this,param_1,param_2,param_3,param_4,iVar4,param_6,param_7);
  if ((this->PaintDropIndicatorEvent).field_0x14 != '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->OnAcceptDrop).field_0x10,&local_48);
    if (((*(int *)&(this->PaintDropIndicatorEvent).field_0x8 != 0) &&
        (*(longlong **)&this->PaintDropIndicatorEvent != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)&this->PaintDropIndicatorEvent + 0x38))(), cVar2 != '\0'
       )) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      if (((this->PaintDropIndicatorEvent).field_0x14 == '\0') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      iVar4 = TDelegate<int___cdecl(enum_EItemDropZone,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool),FDefaultDelegateUserPolicy>
              ::Execute(&(this->OnAcceptDrop).field_0x10,
                        *(EItemDropZone *)&(this->PaintDropIndicatorEvent).field_0x10,param_1,
                        param_2,param_3,param_4,iVar4,param_6,param_7);
      return iVar4;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    pcVar1 = *(code **)(*(longlong *)this_00 + 0x88);
    if (((this->PaintDropIndicatorEvent).field_0x14 == '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    iVar4 = (*pcVar1)(this_00,*(undefined4 *)&(this->PaintDropIndicatorEvent).field_0x10,param_1,
                      param_2,param_3,param_4,iVar4,param_6,param_7);
  }
  return iVar4;
}

// OnPaint @ 1469ef810

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<FName>::OnPaint
          (STableRow<FName> *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  bool *this_00;
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  FReadAccessScope local_48;
  
  this_00 = &this[-1].bChangedSelectionOnMouseDown;
  iVar4 = PaintSelection((STableRow<FName> *)this_00,param_1,param_2,param_3,param_4,param_5,param_6
                         ,param_7);
  iVar4 = SBorder::OnPaint((SBorder *)this,param_1,param_2,param_3,param_4,iVar4,param_6,param_7);
  if ((this->PaintDropIndicatorEvent).field_0x14 != '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->OnAcceptDrop).field_0x10,&local_48);
    if (((*(int *)&(this->PaintDropIndicatorEvent).field_0x8 != 0) &&
        (*(longlong **)&this->PaintDropIndicatorEvent != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)&this->PaintDropIndicatorEvent + 0x38))(), cVar2 != '\0'
       )) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      if (((this->PaintDropIndicatorEvent).field_0x14 == '\0') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      iVar4 = TDelegate<int___cdecl(enum_EItemDropZone,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_&,int,FWidgetStyle_const_&,bool),FDefaultDelegateUserPolicy>
              ::Execute(&(this->OnAcceptDrop).field_0x10,
                        *(EItemDropZone *)&(this->PaintDropIndicatorEvent).field_0x10,param_1,
                        param_2,param_3,param_4,iVar4,param_6,param_7);
      return iVar4;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    pcVar1 = *(code **)(*(longlong *)this_00 + 0x88);
    if (((this->PaintDropIndicatorEvent).field_0x14 == '\0') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    iVar4 = (*pcVar1)(this_00,*(undefined4 *)&(this->PaintDropIndicatorEvent).field_0x10,param_1,
                      param_2,param_3,param_4,iVar4,param_6,param_7);
  }
  return iVar4;
}

// OnPaintDropIndicator @ 1469ef9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<UObject_*>::OnPaintDropIndicator
          (STableRow<UObject_*> *this,EItemDropZone param_1,FPaintArgs *param_2,FGeometry *param_3,
          FSlateRect *param_4,FSlateWindowElementList *param_5,int param_6,FWidgetStyle *param_7,
          bool param_8)

{
  ESlateColorStylingMode EVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  int iVar5;
  FSlateColor *this_00;
  FSlateBrush *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  ITypedTableView<UObject_*> *pIVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_198 [32];
  undefined8 local_148;
  undefined8 local_140;
  FLinearColor_u_0 local_138;
  float local_128;
  float fStack_124;
  FLinearColor_u_0 local_120;
  TVector2<float>_u_0_s_0 local_10c;
  FDeprecateOptionalVector2DParameter local_100 [2];
  undefined8 local_e0;
  TVector2<float>_u_0 local_d8;
  float local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined8 local_ac;
  byte local_a4;
  TVector2<float>_u_0 local_a0;
  float local_98;
  undefined8 local_94;
  FDeprecateSlateVector2D local_8c;
  float local_84 [2];
  float afStack_7c [2];
  TVector2<float>_u_0 local_74;
  byte local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar7 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pIVar8 = (ITypedTableView<UObject_*> *)0x0;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469efa51;
      }
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar9 = aVar3 == aVar4;
      if (bVar9) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar9);
    pIVar8 = (this->OwnerTablePtr).Object;
    if (pIVar8 != (ITypedTableView<UObject_*> *)0x0) goto LAB_1469efaa2;
  }
LAB_1469efa51:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  if (bVar9) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  if ((pIVar8 == (ITypedTableView<UObject_*> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
LAB_1469efaa2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (param_1 == AboveItem) {
    pFVar6 = &this->Style->DropIndicator_Above;
  }
  else if ((param_1 == OntoItem) || (param_1 != BelowItem)) {
    pFVar6 = &this->Style->DropIndicator_Onto;
  }
  else {
    pFVar6 = &this->Style->DropIndicator_Below;
  }
  this_00 = &pFVar6->TintColor;
  iVar5 = (**(code **)((longlong)*pIVar8 + 0xc0))(pIVar8);
  EVar1 = (pFVar6->TintColor).ColorUseRule;
  if (iVar5 == 1) {
    if (EVar1 != UseColor_Specified) {
      if (EVar1 == UseColor_ColorTable) {
        this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
      }
      else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
        this_00 = (FSlateColor *)&param_7->ForegroundColor;
      }
      else {
        this_00 = (FSlateColor *)&param_7->SubduedForeground;
      }
    }
    local_a0 = (param_3->AbsolutePosition).field0_0x0;
    local_138._s_0.R =
         (this_00->SpecifiedColor).field0_0x0._s_0.R *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_8c = param_3->Size;
    local_138._s_0.G =
         (this_00->SpecifiedColor).field0_0x0._s_0.G *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_138._s_0.B =
         (this_00->SpecifiedColor).field0_0x0._s_0.B *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_6c = param_3->bHasRenderTransform * '\x02' | local_6c & 0xfc;
    local_138._s_0.A =
         (this_00->SpecifiedColor).field0_0x0._s_0.A *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_98 = param_3->Scale;
    local_84 = (param_3->AccumulatedRenderTransform).M.M[0];
    afStack_7c = (param_3->AccumulatedRenderTransform).M.M[1];
    local_94 = 0;
    local_74 = (param_3->AccumulatedRenderTransform).Trans.field0_0x0;
    FSlateDrawElement::MakeBox
              (param_5,param_6,(FPaintGeometry *)&local_a0._s_0,pFVar6,None,
               (FLinearColor *)&local_138._s_0);
  }
  else {
    local_148._4_4_ = SUB84(param_3->Size,4);
    local_148._0_4_ = SUB84(param_3->Size,0);
    fVar13 = (float)local_148._4_4_ * __real_3f000000;
    fVar12 = (float)(undefined4)local_148 * __real_3f000000;
    local_138._s_0.R = (float)local_148._4_4_;
    local_138._s_0.G = (float)(undefined4)local_148;
    fVar10 = fVar12 - fVar13;
    fVar11 = fVar13 - fVar12;
    local_140 = CONCAT44(fVar11,fVar10);
    if (EVar1 != UseColor_Specified) {
      if (EVar1 == UseColor_ColorTable) {
        this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
      }
      else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
        this_00 = (FSlateColor *)&param_7->ForegroundColor;
      }
      else {
        this_00 = (FSlateColor *)&param_7->SubduedForeground;
      }
    }
    local_d0 = param_3->Scale;
    local_bc = (param_3->AccumulatedRenderTransform).M.M[0][0];
    local_120._s_0.R =
         (this_00->SpecifiedColor).field0_0x0._s_0.R *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_100[0]._8_1_ = 1;
    local_b8 = (param_3->AccumulatedRenderTransform).M.M[0][1];
    local_120._s_0.G =
         (this_00->SpecifiedColor).field0_0x0._s_0.G *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_cc = 0;
    local_120._s_0.B =
         (this_00->SpecifiedColor).field0_0x0._s_0.B *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_b4 = (param_3->AccumulatedRenderTransform).M.M[1][0];
    local_148._4_4_ = fVar12;
    local_148._0_4_ = fVar13;
    local_b0 = (param_3->AccumulatedRenderTransform).M.M[1][1];
    local_100[0]._0_8_ = local_148;
    local_10c = (param_3->AbsolutePosition).field0_0x0._s_0;
    local_e0 = local_140;
    local_120._s_0.A =
         (this_00->SpecifiedColor).field0_0x0._s_0.A *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_148._4_4_ = fVar11 * local_d0 + local_10c.Y;
    local_148._0_4_ = fVar10 * local_d0 + local_10c.X;
    local_d8 = local_148;
    local_c4 = CONCAT44(local_138._s_0.G,local_138._s_0.R);
    local_128 = fVar10 * local_bc + fVar11 * local_b4 +
                (param_3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    fStack_124 = fVar11 * local_b0 + fVar10 * local_b8 +
                 (param_3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
    local_ac = CONCAT44(fStack_124,local_128);
    local_a4 = param_3->bHasRenderTransform * '\x02' | local_a4 & 0xfc;
    FSlateDrawElement::MakeRotatedBox
              (param_5,param_6,(FPaintGeometry *)&local_d8._s_0,pFVar6,None,__real_bfc90fdb,
               local_100,RelativeToElement,(FLinearColor *)&local_120._s_0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return param_6 + 1;
}

// OnPaintDropIndicator @ 1469efe80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<FName>::OnPaintDropIndicator
          (STableRow<FName> *this,EItemDropZone param_1,FPaintArgs *param_2,FGeometry *param_3,
          FSlateRect *param_4,FSlateWindowElementList *param_5,int param_6,FWidgetStyle *param_7,
          bool param_8)

{
  ESlateColorStylingMode EVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  int iVar5;
  FSlateColor *this_00;
  FSlateBrush *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  ITypedTableView<FName> *pIVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStackY_198 [32];
  undefined8 local_148;
  undefined8 local_140;
  FLinearColor_u_0 local_138;
  float local_128;
  float fStack_124;
  FLinearColor_u_0 local_120;
  TVector2<float>_u_0_s_0 local_10c;
  FDeprecateOptionalVector2DParameter local_100 [2];
  undefined8 local_e0;
  TVector2<float>_u_0 local_d8;
  float local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined8 local_ac;
  byte local_a4;
  TVector2<float>_u_0 local_a0;
  float local_98;
  undefined8 local_94;
  FDeprecateSlateVector2D local_8c;
  float local_84 [2];
  float afStack_7c [2];
  TVector2<float>_u_0 local_74;
  byte local_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar7 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pIVar8 = (ITypedTableView<FName> *)0x0;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469efee1;
      }
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar9 = aVar3 == aVar4;
      if (bVar9) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar9);
    pIVar8 = (this->OwnerTablePtr).Object;
    if (pIVar8 != (ITypedTableView<FName> *)0x0) goto LAB_1469eff32;
  }
LAB_1469efee1:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x416,L"");
  if (bVar9) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  if ((pIVar8 == (ITypedTableView<FName> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
LAB_1469eff32:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (param_1 == AboveItem) {
    pFVar6 = &this->Style->DropIndicator_Above;
  }
  else if ((param_1 == OntoItem) || (param_1 != BelowItem)) {
    pFVar6 = &this->Style->DropIndicator_Onto;
  }
  else {
    pFVar6 = &this->Style->DropIndicator_Below;
  }
  this_00 = &pFVar6->TintColor;
  iVar5 = (**(code **)((longlong)*pIVar8 + 0xc0))(pIVar8);
  EVar1 = (pFVar6->TintColor).ColorUseRule;
  if (iVar5 == 1) {
    if (EVar1 != UseColor_Specified) {
      if (EVar1 == UseColor_ColorTable) {
        this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
      }
      else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
        this_00 = (FSlateColor *)&param_7->ForegroundColor;
      }
      else {
        this_00 = (FSlateColor *)&param_7->SubduedForeground;
      }
    }
    local_a0 = (param_3->AbsolutePosition).field0_0x0;
    local_138._s_0.R =
         (this_00->SpecifiedColor).field0_0x0._s_0.R *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_8c = param_3->Size;
    local_138._s_0.G =
         (this_00->SpecifiedColor).field0_0x0._s_0.G *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_138._s_0.B =
         (this_00->SpecifiedColor).field0_0x0._s_0.B *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_6c = param_3->bHasRenderTransform * '\x02' | local_6c & 0xfc;
    local_138._s_0.A =
         (this_00->SpecifiedColor).field0_0x0._s_0.A *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_98 = param_3->Scale;
    local_84 = (param_3->AccumulatedRenderTransform).M.M[0];
    afStack_7c = (param_3->AccumulatedRenderTransform).M.M[1];
    local_94 = 0;
    local_74 = (param_3->AccumulatedRenderTransform).Trans.field0_0x0;
    FSlateDrawElement::MakeBox
              (param_5,param_6,(FPaintGeometry *)&local_a0._s_0,pFVar6,None,
               (FLinearColor *)&local_138._s_0);
  }
  else {
    local_148._4_4_ = SUB84(param_3->Size,4);
    local_148._0_4_ = SUB84(param_3->Size,0);
    fVar13 = (float)local_148._4_4_ * __real_3f000000;
    fVar12 = (float)(undefined4)local_148 * __real_3f000000;
    local_138._s_0.R = (float)local_148._4_4_;
    local_138._s_0.G = (float)(undefined4)local_148;
    fVar10 = fVar12 - fVar13;
    fVar11 = fVar13 - fVar12;
    local_140 = CONCAT44(fVar11,fVar10);
    if (EVar1 != UseColor_Specified) {
      if (EVar1 == UseColor_ColorTable) {
        this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
      }
      else if ((EVar1 == UseColor_Foreground) || (EVar1 != UseColor_Foreground_Subdued)) {
        this_00 = (FSlateColor *)&param_7->ForegroundColor;
      }
      else {
        this_00 = (FSlateColor *)&param_7->SubduedForeground;
      }
    }
    local_d0 = param_3->Scale;
    local_bc = (param_3->AccumulatedRenderTransform).M.M[0][0];
    local_120._s_0.R =
         (this_00->SpecifiedColor).field0_0x0._s_0.R *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_100[0]._8_1_ = 1;
    local_b8 = (param_3->AccumulatedRenderTransform).M.M[0][1];
    local_120._s_0.G =
         (this_00->SpecifiedColor).field0_0x0._s_0.G *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_cc = 0;
    local_120._s_0.B =
         (this_00->SpecifiedColor).field0_0x0._s_0.B *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_b4 = (param_3->AccumulatedRenderTransform).M.M[1][0];
    local_148._4_4_ = fVar12;
    local_148._0_4_ = fVar13;
    local_b0 = (param_3->AccumulatedRenderTransform).M.M[1][1];
    local_100[0]._0_8_ = local_148;
    local_10c = (param_3->AbsolutePosition).field0_0x0._s_0;
    local_e0 = local_140;
    local_120._s_0.A =
         (this_00->SpecifiedColor).field0_0x0._s_0.A *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.A;
    local_148._4_4_ = fVar11 * local_d0 + local_10c.Y;
    local_148._0_4_ = fVar10 * local_d0 + local_10c.X;
    local_d8 = local_148;
    local_c4 = CONCAT44(local_138._s_0.G,local_138._s_0.R);
    local_128 = fVar10 * local_bc + fVar11 * local_b4 +
                (param_3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
    fStack_124 = fVar11 * local_b0 + fVar10 * local_b8 +
                 (param_3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
    local_ac = CONCAT44(fStack_124,local_128);
    local_a4 = param_3->bHasRenderTransform * '\x02' | local_a4 & 0xfc;
    FSlateDrawElement::MakeRotatedBox
              (param_5,param_6,(FPaintGeometry *)&local_d8._s_0,pFVar6,None,__real_bfc90fdb,
               local_100,RelativeToElement,(FLinearColor *)&local_120._s_0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return param_6 + 1;
}

// OnTouchEnded @ 1469f2000

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<UObject_*>::OnTouchEnded
          (STableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  int iVar5;
  FReply *pFVar6;
  undefined8 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined8 local_res8;
  FReply local_248;
  FReply local_190;
  FReply local_d8;
  
  FReply::FReply(__return_storage_ptr__,false);
  if (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) == '\0') {
    return __return_storage_ptr__;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) = 0;
  pTVar10 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469f2075:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar1)();
      return pFVar6;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    pTVar10 = pTVar9;
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar1)();
      return pFVar6;
    }
  }
  else {
    aVar2 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469f2075;
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
    pTVar8 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar9 = pTVar10;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469f2075;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar7 = (undefined8 *)
           (**(code **)(pTVar8->_padding_ + 0x48))(pTVar8,&this[-1].bChangedSelectionOnMouseDown);
  if (puVar7 == (undefined8 *)0x0) {
    cVar3 = (**(code **)(pTVar8->_padding_ + 200))(pTVar8);
    if ((cVar3 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar11)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar1)();
      return pFVar6;
    }
    goto LAB_1469f224a;
  }
  iVar5 = (**(code **)(*(longlong *)&this[-1].bChangedSelectionOnMouseDown + 0x78))
                    (&this[-1].bChangedSelectionOnMouseDown);
  if (iVar5 != 0) {
    local_res8 = *puVar7;
    cVar3 = (**(code **)(pTVar8->_padding_ + 0x10))(pTVar8,&local_res8);
    if (cVar3 == '\0') {
      if (iVar5 != 3) {
        (**(code **)(pTVar8->_padding_ + 0x30))(pTVar8);
      }
      (**(code **)(pTVar8->_padding_ + 0x28))(pTVar8,*puVar7,1);
      (**(code **)(pTVar8->_padding_ + 0x40))(pTVar8,2);
      FReply::FReply(&local_248,true);
      FReply::operator=(__return_storage_ptr__,&local_248);
      pFVar6 = &local_248;
    }
    else {
      if (1 < iVar5 - 2U) goto LAB_1469f21d3;
      (**(code **)(pTVar8->_padding_ + 0x28))(pTVar8,*puVar7,1);
      (**(code **)(pTVar8->_padding_ + 0x40))(pTVar8,2);
      FReply::FReply(&local_190,true);
      FReply::operator=(__return_storage_ptr__,&local_190);
      pFVar6 = &local_190;
    }
    FReply::~FReply(pFVar6);
  }
LAB_1469f21d3:
  cVar3 = (**(code **)(pTVar8->_padding_ + 0xa8))(pTVar8,*puVar7);
  if (cVar3 != '\0') {
    FReply::FReply(&local_d8,true);
    FReply::operator=(__return_storage_ptr__,&local_d8);
    FReply::~FReply(&local_d8);
  }
LAB_1469f224a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// OnTouchEnded @ 1469f2280

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<FName>::OnTouchEnded
          (STableRow<FName> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  int iVar5;
  FReply *pFVar6;
  undefined8 *puVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  FReply local_248;
  FReply local_190;
  FReply local_d8;
  
  FReply::FReply(__return_storage_ptr__,false);
  if (*(char *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) == '\0') {
    return __return_storage_ptr__;
  }
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)((longlong)&(this->Content).WeakReferenceCount.ReferenceController + 2) = 0;
  pTVar10 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469f22f5:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar1)();
      return pFVar6;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    pTVar10 = pTVar9;
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar1)();
      return pFVar6;
    }
  }
  else {
    aVar2 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469f22f5;
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
    pTVar8 = (TReferenceControllerBase<1> *)this->_padding_;
    pTVar9 = pTVar10;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469f22f5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar7 = (undefined8 *)
           (**(code **)(pTVar8->_padding_ + 0x48))(pTVar8,&this[-1].bChangedSelectionOnMouseDown);
  if (puVar7 == (undefined8 *)0x0) {
    cVar3 = (**(code **)(pTVar8->_padding_ + 200))(pTVar8);
    if ((cVar3 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar11)) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FReply *)(*pcVar1)();
      return pFVar6;
    }
    goto LAB_1469f24ba;
  }
  iVar5 = (**(code **)(*(longlong *)&this[-1].bChangedSelectionOnMouseDown + 0x78))
                    (&this[-1].bChangedSelectionOnMouseDown);
  if (iVar5 != 0) {
    cVar3 = (**(code **)(pTVar8->_padding_ + 0x10))(pTVar8,puVar7);
    if (cVar3 == '\0') {
      if (iVar5 != 3) {
        (**(code **)(pTVar8->_padding_ + 0x30))(pTVar8);
      }
      (**(code **)(pTVar8->_padding_ + 0x28))(pTVar8,*puVar7,1);
      (**(code **)(pTVar8->_padding_ + 0x40))(pTVar8,2);
      FReply::FReply(&local_248,true);
      FReply::operator=(__return_storage_ptr__,&local_248);
      pFVar6 = &local_248;
    }
    else {
      if (1 < iVar5 - 2U) goto LAB_1469f2443;
      (**(code **)(pTVar8->_padding_ + 0x28))(pTVar8,*puVar7,1);
      (**(code **)(pTVar8->_padding_ + 0x40))(pTVar8,2);
      FReply::FReply(&local_190,true);
      FReply::operator=(__return_storage_ptr__,&local_190);
      pFVar6 = &local_190;
    }
    FReply::~FReply(pFVar6);
  }
LAB_1469f2443:
  cVar3 = (**(code **)(pTVar8->_padding_ + 0xa8))(pTVar8,*puVar7);
  if (cVar3 != '\0') {
    FReply::FReply(&local_d8,true);
    FReply::operator=(__return_storage_ptr__,&local_d8);
    FReply::~FReply(&local_d8);
  }
LAB_1469f24ba:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return __return_storage_ptr__;
}

// OnTouchStarted @ 1469f25f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<UObject_*>::OnTouchStarted
          (STableRow<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

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

// OnTouchStarted @ 1469f2720

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STableRow<FName>::OnTouchStarted
          (STableRow<FName> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

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

// PaintSelection @ 1469f2e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<UObject_*>::PaintSelection
          (STableRow<UObject_*> *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  ESlateColorStylingMode EVar1;
  code *pcVar2;
  atomic<int> aVar3;
  char cVar4;
  atomic<int> aVar5;
  int iVar6;
  undefined8 *puVar7;
  FSlateColor *this_00;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined1 auStackY_c8 [32];
  FLinearColor_u_0 local_98;
  undefined8 local_88;
  undefined1 local_80 [8];
  TReferenceControllerBase<1> *local_78;
  TVector2<float>_u_0 local_70;
  float local_68;
  undefined8 local_64;
  FDeprecateSlateVector2D local_5c;
  float local_54 [2];
  float afStack_4c [2];
  TVector2<float>_u_0 local_44;
  byte local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pTVar10 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469f2ee5;
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
    pTVar8 = (TReferenceControllerBase<1> *)(this->OwnerTablePtr).Object;
    pTVar9 = pTVar10;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469f2f36;
  }
LAB_1469f2ee5:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar11) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
  pTVar10 = pTVar9;
  if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    iVar6 = (*pcVar2)();
    return iVar6;
  }
LAB_1469f2f36:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  puVar7 = (undefined8 *)(**(code **)(pTVar8->_padding_ + 0xe8))(pTVar8,local_80);
  cVar4 = (**(code **)(*(longlong *)*puVar7 + 0x1a0))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
  puVar7 = (undefined8 *)(**(code **)(pTVar8->_padding_ + 0x48))(pTVar8,this);
  if (puVar7 == (undefined8 *)0x0) {
    cVar4 = (**(code **)(pTVar8->_padding_ + 200))(pTVar8);
    if ((cVar4 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerTable->Private_IsPendingRefresh()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                            ,0x4cf,
                            L"We were unable to find the item for this widget.  If it was removed from the source collection, the list should be pending a refresh."
                           ), bVar11)) {
      pcVar2 = (code *)swi(3);
      iVar6 = (*pcVar2)();
      return iVar6;
    }
  }
  else if ((cVar4 != '\0') && (cVar4 = (**(code **)pTVar8->_padding_)(pTVar8), cVar4 != '\0')) {
    local_88 = *puVar7;
    cVar4 = (**(code **)(pTVar8->_padding_ + 8))(pTVar8,&local_88);
    if (cVar4 != '\0') {
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
      local_70 = (param_2->AbsolutePosition).field0_0x0;
      local_98._s_0.R =
           (this_00->SpecifiedColor).field0_0x0._s_0.R *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.R;
      local_5c = param_2->Size;
      local_98._s_0.G =
           *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 4) *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.G;
      local_98._s_0.B =
           *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 8) *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.B;
      local_3c = param_2->bHasRenderTransform * '\x02' | local_3c & 0xfc;
      local_98._s_0.A =
           *(float *)((longlong)&(this_00->SpecifiedColor).field0_0x0 + 0xc) *
           (param_6->ColorAndOpacityTint).field0_0x0._s_0.A;
      local_68 = param_2->Scale;
      local_54 = (param_2->AccumulatedRenderTransform).M.M[0];
      afStack_4c = (param_2->AccumulatedRenderTransform).M.M[1];
      local_44 = (param_2->AccumulatedRenderTransform).Trans.field0_0x0;
      local_64 = 0;
      FSlateDrawElement::MakeBox
                (param_4,param_5,(FPaintGeometry *)&local_70._s_0,&this->Style->SelectorFocusedBrush
                 ,None,(FLinearColor *)&local_98._s_0);
      param_5 = param_5 + 1;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return param_5;
}

// PaintSelection @ 1469f3160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STableRow<FName>::PaintSelection
          (STableRow<FName> *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

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
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469f31c5;
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
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469f3216;
  }
LAB_1469f31c5:
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
LAB_1469f3216:
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

// Private_OnExpanderArrowShiftClicked @ 1469f53d0

void __thiscall
STableRow<UObject_*>::Private_OnExpanderArrowShiftClicked(STableRow<UObject_*> *this)

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
  undefined8 local_res8;
  
  pTVar8 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469f5415;
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
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469f5466;
  }
LAB_1469f5415:
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
LAB_1469f5466:
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
      local_res8 = *puVar5;
      cVar3 = (**(code **)(pTVar6->_padding_ + 0x60))(pTVar6,&local_res8);
      (**(code **)(pTVar6->_padding_ + 0x58))(pTVar6,*puVar5,cVar3 == '\0');
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// Private_OnExpanderArrowShiftClicked @ 1469f5530

void __thiscall STableRow<FName>::Private_OnExpanderArrowShiftClicked(STableRow<FName> *this)

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
  
  pTVar8 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1469f5575;
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
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469f55c6;
  }
LAB_1469f5575:
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
LAB_1469f55c6:
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
      (**(code **)(pTVar6->_padding_ + 0x58))(pTVar6,*puVar5,cVar3 == '\0');
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// ResetRow @ 146a0dd40

void __thiscall STableRow<UObject_*>::ResetRow(STableRow<UObject_*> *this)

{
  return;
}

// ResetRow @ 146a0dd50

void __thiscall STableRow<FName>::ResetRow(STableRow<FName> *this)

{
  return;
}

// SetContent @ 146a12750

void __thiscall
STableRow<UObject_*>::SetContent(STableRow<UObject_*> *this,TSharedRef<SWidget,1> *param_1)

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

// SetContent @ 146a12840

void __thiscall STableRow<FName>::SetContent(STableRow<FName> *this,TSharedRef<SWidget,1> *param_1)

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

// SetIndexInList @ 146a156e0

void __thiscall STableRow<UObject_*>::SetIndexInList(STableRow<UObject_*> *this,int param_1)

{
  this->IndexInList = param_1;
  return;
}

// SetIndexInList @ 146a156f0

void __thiscall STableRow<FName>::SetIndexInList(STableRow<FName> *this,int param_1)

{
  this->IndexInList = param_1;
  return;
}

// SetRowContent @ 146a199b0

void __thiscall
STableRow<UObject_*>::SetRowContent(STableRow<UObject_*> *this,TSharedRef<SWidget,1> *param_1)

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

// SetRowContent @ 146a19a70

void __thiscall
STableRow<FName>::SetRowContent(STableRow<FName> *this,TSharedRef<SWidget,1> *param_1)

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

// ToggleExpansion @ 146a2a3f0

void __thiscall STableRow<UObject_*>::ToggleExpansion(STableRow<UObject_*> *this)

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
  undefined8 local_res8;
  
  pTVar8 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146a2a435;
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
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_146a2a486;
  }
LAB_146a2a435:
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
LAB_146a2a486:
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
      local_res8 = *puVar5;
      cVar3 = (**(code **)(pTVar6->_padding_ + 0x60))(pTVar6,&local_res8);
      (**(code **)(pTVar6->_padding_ + 0x50))(pTVar6,*puVar5,cVar3 == '\0');
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// ToggleExpansion @ 146a2a550

void __thiscall STableRow<FName>::ToggleExpansion(STableRow<FName> *this)

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
  
  pTVar8 = (this->OwnerTablePtr).WeakReferenceCount.ReferenceController;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_146a2a595;
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
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_146a2a5e6;
  }
LAB_146a2a595:
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
LAB_146a2a5e6:
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
      (**(code **)(pTVar6->_padding_ + 0x50))(pTVar6,*puVar5,cVar3 == '\0');
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

