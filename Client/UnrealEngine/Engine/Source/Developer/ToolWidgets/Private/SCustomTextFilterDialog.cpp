// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 8

// CheckFilterValidity @ 142d74c50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SCustomTextFilterDialog::CheckFilterValidity(SCustomTextFilterDialog *this)

{
  SEditableTextBox *pSVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  FText *pFVar7;
  longlong *plVar8;
  FText *pFVar9;
  undefined1 local_res8 [8];
  FText *local_78;
  undefined8 local_70;
  FText local_68;
  FText local_58;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  bVar4 = FText::IsEmpty(&(this->FilterData).FilterLabel);
  if (bVar4) {
    if (((this->FilterLabelTextBox).Object == (SEditableTextBox *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pSVar1 = (this->FilterLabelTextBox).Object;
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"CustomTextFilter",L"EmptyFilterLabelError",
                        L"Filter Label cannot be empty");
    SEditableTextBox::SetError(pSVar1,pFVar7);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      return false;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetFilterLabels,
               &local_48);
    if (((*(int *)&(this->OnGetFilterLabels).field_0x10 == 0) ||
        (plVar8 = *(longlong **)&(this->OnGetFilterLabels).field_0x8, plVar8 == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*plVar8 + 0x38))(), cVar6 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      return true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    plVar8 = (longlong *)0x0;
    local_78 = (FText *)0x0;
    local_70 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetFilterLabels,
               &local_30);
    if (*(int *)&(this->OnGetFilterLabels).field_0x10 != 0) {
      plVar8 = *(longlong **)&(this->OnGetFilterLabels).field_0x8;
    }
    (**(code **)(*plVar8 + 0x60))(plVar8,&local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    iVar3 = (int)local_70;
    pFVar9 = local_78 + (int)local_70;
    pFVar7 = local_78;
    while( true ) {
      if ((int)local_70 != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FText,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
        ;
      }
      if (pFVar7 == pFVar9) {
        DestructItems<FText,int>(local_78,(int)local_70);
        if (local_78 == (FText *)0x0) {
          return true;
        }
        FMemory::Free(local_78);
        return true;
      }
      bVar4 = FText::EqualTo(pFVar7,&(this->FilterData).FilterLabel,Default);
      if ((bVar4) &&
         ((this->bInEditMode == false ||
          (bVar4 = FText::EqualTo(pFVar7,&(this->InitialFilterData).FilterLabel,Default), !bVar4))))
      break;
      pFVar7 = pFVar7 + 1;
    }
    if (((this->FilterLabelTextBox).Object == (SEditableTextBox *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pSVar1 = (this->FilterLabelTextBox).Object;
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"CustomTextFilter",L"DuplicateFilterLabelError",
                        L"A filter with this label already exists!");
    SEditableTextBox::SetError(pSVar1,pFVar7);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    DestructItems<FText,int>(local_78,(int)local_70);
    if (local_78 != (FText *)0x0) {
      FMemory::Free(local_78);
    }
  }
  return false;
}

// ColorBlock_OnMouseButtonDown @ 142d75bd0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCustomTextFilterDialog::ColorBlock_OnMouseButtonDown
          (SCustomTextFilterDialog *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  SWidget *pSVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  uint uStackX_24;
  undefined1 local_1b8 [16];
  int local_1a8;
  code *local_1a0;
  FSharedReferencer<1> FStack_198;
  undefined1 local_190 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  ForAnyElementType FStack_160;
  ulonglong local_158;
  bool local_14f;
  TArray<FColor_*,TSizedDefaultAllocator<32>_> *local_148;
  TArray<FLinearColor_*,TSizedDefaultAllocator<32>_> *pTStack_140;
  TArray<FColorChannels,TSizedDefaultAllocator<32>_> *local_138;
  undefined1 local_130 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  ForAnyElementType FStack_110;
  int local_108;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_100;
  ForAnyElementType FStack_f8;
  int local_f0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  ForAnyElementType FStack_e0;
  int local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  ForAnyElementType FStack_c8;
  int local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  ForAnyElementType FStack_b0;
  int local_a8;
  FLinearColor_u_0 local_a0;
  FLinearColor_u_0 local_90;
  SWidget *local_80;
  FSharedReferencer<1> FStack_78;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  undefined1 *local_40;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  pTVar11 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar12 = FVar1 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if (bVar12) {
    local_1b8._0_8_ = (atomic<unsigned___int64>)0x0;
    local_1b8._8_8_ = (atomic<unsigned___int64> *)0x0;
    local_1a8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_58);
    local_40 = local_1b8 + 8;
    puVar8 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(local_1b8 + 8));
    if (puVar8 == (undefined8 *)0x0) {
      pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_24 << 0x20);
    }
    else {
      local_1a0 = HandleColorValueChanged;
      FStack_198.ReferenceController =
           (TReferenceControllerBase<1> *)((ulonglong)local_70.Accessor._4_4_ << 0x20);
      pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                          (TSharedRef<SWidget,1> *)&local_70);
      pTVar11 = (pTVar9->SharedReferenceCount).ReferenceController;
      pSVar2 = pTVar9->Object;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6AXUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar10;
      *puVar8 = &
                ___7__TBaseSPMethodDelegateInstance__0A_VSCustomTextFilterDialog___00__A6AXUFLinearColor___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar8[3] = pSVar2;
      puVar8[4] = pTVar11;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
        UNLOCK();
      }
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
      puVar8[5] = local_1a0;
      puVar8[6] = FStack_198.ReferenceController;
    }
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_70.Accessor._4_4_,local_70.Accessor._0_4_));
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    uVar3 = *(undefined8 *)&(this->FilterData).FilterColor.field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&(this->FilterData).FilterColor.field0_0x0 + 8);
    local_190[0] = false;
    local_158 = 0;
    local_190[0x18] = false;
    local_190[0x19] = false;
    local_190[0x1a] = false;
    local_190[0x1b] = true;
    local_190._8_8_ = (SWidget *)0x0;
    local_190._16_8_ = (TReferenceControllerBase<1> *)0x0;
    local_190[0x1c] = false;
    local_190[0x1d] = false;
    local_190._32_4_ = 2.2;
    local_190[0x24] = true;
    local_168.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_160.Data = (FScriptContainerElement *)0x0;
    local_14f = false;
    local_148 = (TArray<FColor_*,TSizedDefaultAllocator<32>_> *)0x0;
    pTStack_140 = (TArray<FLinearColor_*,TSizedDefaultAllocator<32>_> *)0x0;
    local_138 = (TArray<FColorChannels,TSizedDefaultAllocator<32>_> *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_130,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b8);
    local_108 = 0;
    local_f0 = 0;
    local_100.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_f8.Data = (FScriptContainerElement *)0x0;
    local_d8 = 0;
    local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_c8.Data = (FScriptContainerElement *)0x0;
    local_c0 = 0;
    local_a8 = 0;
    local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_110.Data = (FScriptContainerElement *)0x0;
    local_a0 = FLinearColor::White.field0_0x0;
    local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_e0.Data = (FScriptContainerElement *)0x0;
    local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_b0.Data = (FScriptContainerElement *)0x0;
    local_80 = (SWidget *)0x0;
    FStack_78.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_90._0_8_ = uVar3;
    local_90._8_8_ = uVar4;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_70);
    if ((local_1a8 != 0) &&
       ((FMRSWRecursiveAccessDetector *)local_1b8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
      (**(code **)*(atomic<unsigned___int64> *)local_1b8._8_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(local_1b8 + 8),0,0,0x10);
      local_1a8 = 0;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_70.Accessor._4_4_,local_70.Accessor._0_4_),&local_70);
    }
    if ((FMRSWRecursiveAccessDetector *)local_1b8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
      FMemory::Free((void *)local_1b8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1b8);
    FStack_198.ReferenceController = (this->ColorBlock).SharedReferenceCount.ReferenceController;
    local_190._8_8_ = (this->ColorBlock).Object;
    local_190[0] = true;
    if (FStack_198.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_198.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_198.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1a0 = (code *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(local_190 + 0x10),&FStack_198);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_198.ReferenceController);
    OpenColorPicker((FColorPickerArgs *)local_190);
    FReply::FReply(__return_storage_ptr__,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_78.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b8,(FWriteAccessScope *)local_1b8);
    if ((local_a8 != 0) && (FStack_b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b0,0,0,0x10);
      local_a8 = 0;
    }
    if (local_1a8._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1b8._8_8_,(FDestructionSentinel *)local_1b8);
    }
    if (FStack_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d0,(FWriteAccessScope *)local_1b8);
    if ((local_c0 != 0) && (FStack_c8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_c8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c8,0,0,0x10);
      local_c0 = 0;
    }
    if (local_1a8._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1b8._8_8_,(FDestructionSentinel *)local_1b8);
    }
    if (FStack_c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_c8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e8,(FWriteAccessScope *)local_1b8);
    if ((local_d8 != 0) && (FStack_e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e0,0,0,0x10);
      local_d8 = 0;
    }
    if (local_1a8._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1b8._8_8_,(FDestructionSentinel *)local_1b8);
    }
    if (FStack_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_e0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_100,(FWriteAccessScope *)local_1b8);
    if ((local_f0 != 0) && (FStack_f8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_f8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f8,0,0,0x10);
      local_f0 = 0;
    }
    if (local_1a8._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1b8._8_8_,(FDestructionSentinel *)local_1b8);
    }
    if (FStack_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_f8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_100.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_118,(FWriteAccessScope *)local_1b8);
    if ((local_108 != 0) && (FStack_110.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_110.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_110,0,0,0x10);
      local_108 = 0;
    }
    if (local_1a8._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1b8._8_8_,(FDestructionSentinel *)local_1b8);
    }
    if (FStack_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_110.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_130);
    if ((void *)local_130._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_130._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_130);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_168,(FWriteAccessScope *)local_1b8);
    if (((int)local_158 != 0) && (FStack_160.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_160.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_160,0,0,0x10);
      local_158 = local_158 & 0xffffffff00000000;
    }
    if (local_1a8._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_1b8._8_8_,(FDestructionSentinel *)local_1b8);
    }
    if (FStack_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_160.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_190._16_8_);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// Construct @ 142d7cb00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SCustomTextFilterDialog::Construct(SCustomTextFilterDialog *this,FArguments *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  SHorizontalBox *this_00;
  TReferenceControllerBase<1> *pTVar3;
  SEditableTextBox *pSVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  code *pcVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  FSharedReferencer<1> FVar17;
  bool bVar18;
  bool bVar19;
  FArguments *pFVar20;
  TSharedRef<SHorizontalBox,1> *pTVar21;
  SHorizontalBox *pSVar22;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar23;
  TAttribute<float> *pTVar24;
  FSlotArguments *pFVar25;
  FArguments *pFVar26;
  FText *pFVar27;
  TAttribute<FText> *pTVar28;
  TSlateDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs> *pTVar29;
  TSharedRef<SPrimaryButton,1> *pTVar30;
  FArguments *pFVar31;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar32;
  TSharedRef<SButton,1> *pTVar33;
  FSlotArguments *pFVar34;
  FArguments *pFVar35;
  FName *pFVar36;
  ISlateStyle *pIVar37;
  FSlot *this_01;
  FSlotArguments *pFVar38;
  FSlot *pFVar39;
  FArguments *pFVar40;
  TSharedRef<STextBlock,1> *pTVar41;
  FArguments *pFVar42;
  FArguments *pFVar43;
  undefined8 *puVar44;
  ulong64 uVar45;
  TSharedRef<SEditableTextBox,1> *pTVar46;
  TSharedRef<SBox,1> *pTVar47;
  FArguments *pFVar48;
  TSharedRef<SWidget,1> *pTVar49;
  SColorBlock *pSVar50;
  SColorBlock *pSVar51;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar52;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_02;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_04;
  FArguments *pFVar53;
  TSharedRef<SVerticalBox,1> *pTVar54;
  TSharedRef<SBorder,1> *pTVar55;
  FSlotArguments *pFVar56;
  undefined ***pppuVar57;
  longlong *plVar58;
  FName FVar59;
  float fVar60;
  undefined1 auStackY_6208 [32];
  T0RequiredArgs local_61d8;
  T0RequiredArgs local_61d7;
  T0RequiredArgs local_61d6;
  T0RequiredArgs local_61d5;
  T0RequiredArgs local_61d4;
  T0RequiredArgs local_61d3;
  T0RequiredArgs local_61d2;
  T0RequiredArgs local_61d1;
  T0RequiredArgs local_61d0;
  T0RequiredArgs local_61cf;
  T0RequiredArgs local_61ce;
  T0RequiredArgs local_61cd;
  T0RequiredArgs local_61cc;
  T0RequiredArgs local_61cb;
  T0RequiredArgs local_61ca;
  T0RequiredArgs local_61c9;
  T0RequiredArgs local_61c8;
  T0RequiredArgs local_61c7 [7];
  SBorder *local_61c0;
  FLLMScope local_61b8;
  FLLMScope local_61b4;
  FLLMScope local_61b0;
  FLLMScope local_61ac;
  FLLMScope local_61a8;
  FLLMScope local_61a4;
  FLLMScope local_61a0;
  FLLMScope local_619c;
  FLLMScope local_6198 [5];
  TSharedRef<SWidget,1> local_6188;
  undefined1 local_6178 [8];
  ForAnyElementType local_6170;
  int local_6168;
  undefined1 local_6160 [8];
  ForAnyElementType local_6158;
  int local_6150;
  undefined1 local_6148 [8];
  ForAnyElementType local_6140;
  int local_6138;
  TSharedRef<SWidget,1> local_6128;
  TSharedPtr<SHorizontalBox,1> local_6118;
  float local_6108 [2];
  FMemScope local_6100;
  FName local_60f8;
  undefined4 uStack_60f0;
  undefined4 uStack_60ec;
  FMemScope local_60e8;
  FArguments *local_60e0;
  FSlotArguments *local_60d8;
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs> local_60d0;
  FArguments *local_60b8;
  STextBlock *local_60b0;
  FSharedReferencer<1> local_60a8;
  FArguments *local_60a0;
  SButton *local_6098;
  FSharedReferencer<1> local_6090;
  SWidget *local_6088;
  TReferenceControllerBase<1> *pTStack_6080;
  undefined2 local_6078;
  undefined1 local_6070 [8];
  void *pvStack_6068;
  undefined8 local_6060;
  uchar local_6058;
  undefined1 local_6057;
  undefined1 local_6050 [8];
  void *pvStack_6048;
  undefined8 local_6040;
  uchar local_6038;
  undefined1 local_6037;
  undefined1 local_6030 [8];
  void *pvStack_6028;
  undefined8 local_6020;
  TReferenceControllerBase<1> *local_6018;
  undefined4 uStack_6010;
  uint uStack_600c;
  SVerticalBox *local_6008;
  TReferenceControllerBase<1> *pTStack_6000;
  SBorder *local_5ff8;
  TReferenceControllerBase<1> *pTStack_5ff0;
  undefined4 local_5fe8 [2];
  undefined4 local_5fe0 [2];
  undefined4 local_5fd8 [2];
  undefined4 local_5fd0 [2];
  FName local_5fc8;
  FArguments *local_5fc0;
  FName local_5fb8;
  FMemScope local_5fb0;
  FName local_5fa8;
  FName local_5fa0;
  FName local_5f98;
  FSlot *local_5f90;
  FMemScope local_5f88;
  FName local_5f80;
  FMemScope local_5f78;
  FSlotArguments *local_5f70;
  TSharedRef<SWidget,1> local_5f68;
  FMemScope local_5f58;
  FName local_5f50;
  FMemScope local_5f48;
  FName local_5f40;
  FSlotArguments *local_5f38;
  FSlotArguments *local_5f30;
  FMemScope local_5f28;
  FName local_5f20;
  FMemScope local_5f18;
  double local_5f10;
  double dStack_5f08;
  undefined1 local_5f00;
  undefined1 local_5ef8 [8];
  void *pvStack_5ef0;
  undefined8 local_5ee8;
  TAttribute<FOptionalSize> local_5ee0;
  TAttribute<FOptionalSize> local_5ec0;
  double local_5e98;
  double dStack_5e90;
  double local_5e88;
  double dStack_5e80;
  undefined1 local_5e78;
  undefined1 local_5e70 [8];
  void *pvStack_5e68;
  undefined8 local_5e60;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_5e58;
  TSharedRef<SWidget,1> local_5e40;
  TSharedRef<SWidget,1> local_5e30;
  TSharedRef<SWidget,1> local_5e20;
  TSharedRef<SWidget,1> local_5e10;
  TSharedRef<SWidget,1> local_5e00;
  TSharedRef<SWidget,1> local_5df0;
  TSharedRef<SWidget,1> local_5de0;
  TSharedRef<SWidget,1> local_5dd0;
  TSharedRef<SWidget,1> local_5dc0;
  FText local_5db0;
  TSharedRef<SWidget,1> local_5da0;
  TAttribute<FSlateBrush_const_*> local_5d90;
  FDestructionSentinel local_5d68;
  FDestructionSentinel local_5d50;
  FDestructionSentinel local_5d38;
  FDestructionSentinel local_5d20;
  undefined1 *local_5d08;
  FDestructionSentinel local_5d00;
  undefined1 *local_5ce8;
  FDestructionSentinel local_5ce0;
  undefined1 *local_5cc8;
  FDestructionSentinel local_5cc0;
  undefined1 *local_5ca8;
  TAttribute<FText> local_5ca0;
  TAttribute<FText> local_5c70;
  TAttribute<FText> local_5c40;
  TAttribute<FText> local_5c10;
  TAttribute<FText> local_5be0;
  TAttribute<FText> local_5bb0;
  TAttribute<FText> local_5b80;
  TSharedRef<SHorizontalBox,1> local_5b50;
  TSharedRef<STextBlock,1> local_5b40;
  FText local_5b30;
  FText local_5b20;
  TSharedRef<SBox,1> local_5b10;
  TSharedRef<SEditableTextBox,1> local_5b00;
  TSharedRef<STextBlock,1> local_5af0;
  FText local_5ae0;
  TSharedRef<SHorizontalBox,1> local_5ad0;
  code *local_5ab8;
  TReferenceControllerBase<1> *pTStack_5ab0;
  TSharedRef<SPrimaryButton,1> local_5aa8;
  FText local_5a98;
  code *local_5a88;
  TReferenceControllerBase<1> *pTStack_5a80;
  TSharedRef<SButton,1> local_5a78;
  FText local_5a68;
  code *local_5a58;
  longlong lStack_5a50;
  TSharedRef<SButton,1> local_5a48;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_5a38;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_5a20;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_5a08;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_59f0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_59d8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_59c0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_59a8;
  FText local_5990;
  code *local_5978;
  longlong lStack_5970;
  TSharedRef<SPrimaryButton,1> local_5968;
  FText local_5958;
  code *local_5948;
  longlong lStack_5940;
  TSharedRef<SButton,1> local_5938;
  FText local_5928;
  SEditableTextBox *local_5918;
  TReferenceControllerBase<1> *pTStack_5910;
  TSharedRef<SWidget,1> local_5908;
  SColorBlock *local_58f8;
  TReferenceControllerBase<1> *pTStack_58f0;
  TSharedRef<SBorder,1> local_58e8;
  TSharedRef<SVerticalBox,1> local_58d8;
  TSharedRef<SHorizontalBox,1> local_58c8;
  TSharedRef<SHorizontalBox,1> local_58b8;
  TSharedRef<SBox,1> local_58a8;
  TSharedRef<SEditableTextBox,1> local_5898;
  TSharedRef<STextBlock,1> local_5888;
  FText local_5878;
  FText local_5868;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_5858;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_5840;
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs> local_5828;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5810;
  FReadAccessScope local_57f8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_57e0;
  FReadAccessScope local_57c8;
  FReadAccessScope local_57b0;
  TSlateDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs> local_5798;
  TSlateDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs> local_5780;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_5768;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_5750;
  undefined8 *local_5738 [2];
  TReferenceControllerBase<1> *local_5728;
  undefined1 local_5708 [40];
  FSlotArgumentsMixin local_56e0;
  undefined8 *local_5650 [2];
  TReferenceControllerBase<1> *local_5640;
  undefined1 local_5638 [24];
  undefined1 local_5620 [40];
  FSlotArgumentsMixin local_55f8;
  undefined8 *local_5568 [2];
  TReferenceControllerBase<1> *local_5558;
  undefined1 local_5538 [40];
  FSlotArgumentsMixin local_5510;
  undefined8 *local_5480 [2];
  TReferenceControllerBase<1> *local_5470;
  undefined1 local_5450 [40];
  FSlotArgumentsMixin local_5428;
  TAttribute<float> local_5398;
  TAttribute<float> local_5378;
  undefined8 *local_5358 [2];
  TReferenceControllerBase<1> *local_5348;
  undefined1 local_5328 [40];
  FSlotArgumentsMixin local_5300;
  undefined8 *local_5270 [2];
  TReferenceControllerBase<1> *local_5260;
  undefined1 local_5240 [40];
  FSlotArgumentsMixin local_5218;
  undefined8 *local_5188 [2];
  TReferenceControllerBase<1> *local_5178;
  undefined1 local_5158 [40];
  FSlotArgumentsMixin local_5130;
  undefined8 *local_50a0 [2];
  TReferenceControllerBase<1> *local_5090;
  undefined1 local_5070 [40];
  FSlotArgumentsMixin local_5048;
  undefined8 *local_4fb8 [2];
  TReferenceControllerBase<1> *local_4fa8;
  undefined1 local_4f88 [40];
  FSlotArgumentsMixin local_4f60;
  TAttribute<FText> local_4ed0;
  TAttribute<FText> local_4ea0;
  TAttribute<FText> local_4e70;
  TAttribute<FText> local_4e40;
  undefined1 local_4e10 [256];
  FArguments local_4d10;
  FArguments local_4b08;
  FArguments local_4900;
  FArguments local_46f8;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_44f0;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_43f0;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_42f0;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_41f0;
  FArguments local_40f0;
  FArguments local_3e88;
  FArguments local_3c20;
  FArguments local_38e0;
  FArguments local_3598;
  FArguments local_3238;
  FArguments local_2e58;
  FArguments local_2918;
  FArguments local_23d8;
  FArguments local_1e98;
  FArguments local_1940;
  FArguments local_13e8;
  FArguments local_e90;
  FArguments local_7d0;
  code *local_108;
  undefined **local_f8;
  SCustomTextFilterDialog *local_f0;
  undefined ***local_e0;
  code *local_d8 [2];
  undefined **local_c8;
  SCustomTextFilterDialog *local_c0;
  undefined ***local_b0;
  code *local_a8 [2];
  undefined **local_98;
  SCustomTextFilterDialog *local_90;
  undefined ***local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_6208;
  bVar13 = false;
  bVar12 = false;
  bVar19 = false;
  local_61c0 = (SBorder *)((ulonglong)local_61c0 & 0xffffffff00000000);
  FCustomTextFilterData::operator=(&this->FilterData,&param_1->_FilterData);
  FCustomTextFilterData::operator=(&this->InitialFilterData,&this->FilterData);
  this->bInEditMode = param_1->_InEditMode;
  this->bEnableColorEditing = param_1->_InEnableColorEditing;
  if (&param_1->_OnCreateFilter != &this->OnCreateFilter) {
    local_6148 = (undefined1  [8])0x0;
    local_6140.Data = (FScriptContainerElement *)0x0;
    local_6138 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnCreateFilter,
               &local_57c8);
    if ((*(int *)&(param_1->_OnCreateFilter).field_0x10 != 0) &&
       (plVar58 = *(longlong **)&(param_1->_OnCreateFilter).field_0x8, plVar58 != (longlong *)0x0))
    {
      (**(code **)(*plVar58 + 0x50))(plVar58,local_6148);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_57c8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCreateFilter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6148);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6148,
               (FWriteAccessScope *)&local_5d38);
    if ((local_6138 != 0) && (local_6140.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_6140.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_6140,0,0,0x10);
      local_6138 = 0;
    }
    if (local_5d38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d38.Accessor,&local_5d38);
    }
    if (local_6140.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6140.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_6148);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnDeleteFilter,&param_1->_OnDeleteFilter);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnCancelClicked,&param_1->_OnCancelClicked);
  if (&param_1->_OnModifyFilter != &this->OnModifyFilter) {
    local_6160 = (undefined1  [8])0x0;
    local_6158.Data = (FScriptContainerElement *)0x0;
    local_6150 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnModifyFilter,
               &local_57b0);
    if ((*(int *)&(param_1->_OnModifyFilter).field_0x10 != 0) &&
       (plVar58 = *(longlong **)&(param_1->_OnModifyFilter).field_0x8, plVar58 != (longlong *)0x0))
    {
      (**(code **)(*plVar58 + 0x50))(plVar58,local_6160);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_57b0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnModifyFilter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6160);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6160,
               (FWriteAccessScope *)&local_5d68);
    if ((local_6150 != 0) && (local_6158.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_6158.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_6158,0,0,0x10);
      local_6150 = 0;
    }
    if (local_5d68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d68.Accessor,&local_5d68);
    }
    if (local_6158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6158.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_6160);
  }
  if (&param_1->_OnGetFilterLabels != &this->OnGetFilterLabels) {
    local_6178 = (undefined1  [8])0x0;
    local_6170.Data = (FScriptContainerElement *)0x0;
    local_6168 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnGetFilterLabels,&local_57f8);
    if ((*(int *)&(param_1->_OnGetFilterLabels).field_0x10 != 0) &&
       (plVar58 = *(longlong **)&(param_1->_OnGetFilterLabels).field_0x8, plVar58 != (longlong *)0x0
       )) {
      (**(code **)(*plVar58 + 0x50))(plVar58,local_6178);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_57f8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetFilterLabels,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6178);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6178,
               (FWriteAccessScope *)&local_5d50);
    if ((local_6168 != 0) && (local_6170.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_6170.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_6170,0,0,0x10);
      local_6168 = 0;
    }
    if (local_5d50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d50.Accessor,&local_5d50);
    }
    if (local_6170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6170.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_6178);
  }
  pFVar20 = SHorizontalBox::FArguments::FArguments(&local_4d10);
  FLLMScope::FLLMScope(local_6198,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5fc8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5f18,&local_5fc8,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_5a38,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
             ,0x19,&local_61d8);
  FMemScope::~FMemScope(&local_5f18);
  FLLMScope::~FLLMScope(local_6198);
  pTVar21 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5a38,&local_5ad0,pFVar20);
  local_6118.SharedReferenceCount.ReferenceController =
       (pTVar21->SharedReferenceCount).ReferenceController;
  this_00 = pTVar21->Object;
  if (local_6118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6118.Object = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5ad0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a38._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_4d10._Slots.AllocatorInstance.Data,local_4d10._Slots.ArrayNum);
  if ((FSlotArguments *)local_4d10._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_4d10._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4d10);
  if (this->bInEditMode == false) {
    pSVar22 = TSharedPtr<SHorizontalBox,1>::operator->(&local_6118);
    pFVar23 = SHorizontalBox::AddSlot(pSVar22,&local_42f0);
    local_61c0 = (SBorder *)CONCAT44(local_61c0._4_4_,0x3f800000);
    pTVar24 = TAttribute<float>::TAttribute<float>(&local_5378,(float *)&local_61c0);
    pFVar25 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                        ((FSlotArguments *)&pFVar23->_padding_,pTVar24);
    fVar60 = __real_41800000;
    pFVar25 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar25->field_0x18,0.0,0.0,__real_41800000,0.0);
    pFVar25 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar25->field_0x48,HAlign_Right);
    pFVar31 = SButton::FArguments::FArguments(&local_2918);
    pFVar27 = FText::AsLocalizable_Advanced_LocText
                        (&local_5990,L"CustomTextFilter",L"CreateAndApplyButton",L"Create and Apply"
                        );
    pTVar28 = TAttribute<FText>::TAttribute<FText>(&local_4e70,pFVar27);
    pFVar31 = SButton::FArguments::Text(pFVar31,pTVar28);
    local_6128.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_6128.Object = (SWidget *)OnCreateFilterButtonClicked;
    lStack_5a50 = (ulonglong)local_6128.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_5a58 = OnCreateFilterButtonClicked;
    pFVar31 = SButton::FArguments::OnClicked<SCustomTextFilterDialog,bool>
                        (pFVar31,this,(pmf_c06f9b70 *)&local_5a58,true);
    pTVar32 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                        (&local_5750,"SButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
                         ,0x3c,&local_61d5);
    pTVar33 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar32,&local_5a48,pFVar31);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5e40,pTVar33);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar25,&local_5e40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5e40.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5a48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5750._Widget.SharedReferenceCount.ReferenceController);
    FText::~FText(&local_5990);
    SButton::FArguments::~FArguments(&local_2918);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_42f0);
    pSVar22 = TSharedPtr<SHorizontalBox,1>::operator->(&local_6118);
    pFVar23 = SHorizontalBox::AddSlot(pSVar22,&local_41f0);
    pFVar25 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                        ((FSlotArguments *)&pFVar23->_padding_);
    pFVar25 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar25->field_0x18,0.0,0.0,fVar60,0.0);
    pFVar25 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar25->field_0x48,HAlign_Right);
    pFVar26 = SPrimaryButton::FArguments::FArguments(&local_3e88);
    pFVar27 = FText::AsLocalizable_Advanced_LocText
                        (&local_5958,L"CustomTextFilter",L"CreateButton",L"Create");
    pTVar28 = TAttribute<FText>::TAttribute<FText>(&local_4e40,pFVar27);
    pFVar26 = SPrimaryButton::FArguments::Text(pFVar26,pTVar28);
    local_6128.Object = (SWidget *)OnCreateFilterButtonClicked;
    local_6128.SharedReferenceCount.ReferenceController._0_4_ = 0;
    lStack_5970 = (ulonglong)local_6128.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
    local_5978 = OnCreateFilterButtonClicked;
    pFVar26 = SPrimaryButton::FArguments::OnClicked<SCustomTextFilterDialog,bool>
                        (pFVar26,this,(pmf_c06f9b70 *)&local_5978,false);
    pTVar29 = MakeTDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs>
                        (&local_5798,"SPrimaryButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
                         ,0x47,&local_61d4);
    pTVar30 = TSlateDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar29,&local_5968,pFVar26);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SPrimaryButton>(&local_5e30,pTVar30);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar25,&local_5e30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5e30.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5968.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5798._Widget.SharedReferenceCount.ReferenceController);
    FText::~FText(&local_5958);
    SPrimaryButton::FArguments::~FArguments(&local_3e88);
    pFVar23 = &local_41f0;
  }
  else {
    pSVar22 = TSharedPtr<SHorizontalBox,1>::operator->(&local_6118);
    pFVar23 = SHorizontalBox::AddSlot(pSVar22,&local_44f0);
    local_6108[0] = 1.0;
    pTVar24 = TAttribute<float>::TAttribute<float>(&local_5398,local_6108);
    pFVar25 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                        ((FSlotArguments *)&pFVar23->_padding_,pTVar24);
    fVar60 = __real_41800000;
    pFVar25 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar25->field_0x18,0.0,0.0,__real_41800000,0.0);
    pFVar25 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar25->field_0x48,HAlign_Right);
    pFVar26 = SPrimaryButton::FArguments::FArguments(&local_40f0);
    pFVar27 = FText::AsLocalizable_Advanced_LocText
                        (&local_5a98,L"CustomTextFilter",L"ModifyFilterButton",L"Save");
    pTVar28 = TAttribute<FText>::TAttribute<FText>(&local_4ed0,pFVar27);
    pFVar26 = SPrimaryButton::FArguments::Text(pFVar26,pTVar28);
    local_6188.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_6188.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    local_6188.Object = (SWidget *)OnModifyButtonClicked;
    local_5ab8 = OnModifyButtonClicked;
    pTStack_5ab0 = local_6188.SharedReferenceCount.ReferenceController;
    pFVar26 = SPrimaryButton::FArguments::OnClicked<SCustomTextFilterDialog>
                        (pFVar26,this,(pmf_3ad0ec8c *)&local_5ab8);
    pTVar29 = MakeTDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs>
                        (&local_5780,"SPrimaryButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
                         ,0x24,&local_61d7);
    pTVar30 = TSlateDecl<SPrimaryButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar29,&local_5aa8,pFVar26);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SPrimaryButton>(&local_5da0,pTVar30);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar25,&local_5da0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5da0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5aa8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5780._Widget.SharedReferenceCount.ReferenceController);
    FText::~FText(&local_5a98);
    SPrimaryButton::FArguments::~FArguments(&local_40f0);
    SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
    ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_44f0);
    pSVar22 = TSharedPtr<SHorizontalBox,1>::operator->(&local_6118);
    pFVar23 = SHorizontalBox::AddSlot(pSVar22,&local_43f0);
    pFVar25 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                        ((FSlotArguments *)&pFVar23->_padding_);
    pFVar25 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                        ((FSlotArgumentsMixin *)&pFVar25->field_0x18,0.0,0.0,fVar60,0.0);
    pFVar25 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                        ((FSlotArgumentsMixin *)&pFVar25->field_0x48,HAlign_Right);
    pFVar31 = SButton::FArguments::FArguments(&local_2e58);
    pFVar27 = FText::AsLocalizable_Advanced_LocText
                        (&local_5a68,L"CustomTextFilter",L"DeleteButton",L"Delete");
    pTVar28 = TAttribute<FText>::TAttribute<FText>(&local_4ea0,pFVar27);
    pFVar31 = SButton::FArguments::Text(pFVar31,pTVar28);
    local_6188.SharedReferenceCount.ReferenceController =
         local_6188.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_6188.Object = (SWidget *)OnDeleteButtonClicked;
    local_5a88 = OnDeleteButtonClicked;
    pTStack_5a80 = local_6188.SharedReferenceCount.ReferenceController;
    pFVar31 = SButton::FArguments::OnClicked<SCustomTextFilterDialog>
                        (pFVar31,this,(pmf_3ad0ec8c *)&local_5a88);
    pTVar32 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                        (&local_5768,"SButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
                         ,0x2f,&local_61d6);
    pTVar33 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar32,&local_5a78,pFVar31);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_6128,pTVar33);
    TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
              ((FSlotArguments *)pFVar25,&local_6128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_6128.SharedReferenceCount.ReferenceController._4_4_,
                        local_6128.SharedReferenceCount.ReferenceController._0_4_));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5a78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5768._Widget.SharedReferenceCount.ReferenceController);
    FText::~FText(&local_5a68);
    SButton::FArguments::~FArguments(&local_2e58);
    pFVar23 = &local_43f0;
  }
  pFVar25 = (FSlotArguments *)0x0;
  SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(pFVar23);
  if ((this_00 == (SHorizontalBox *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  SHorizontalBox::InsertSlot
            (this_00,(FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_4e10,-1);
  pFVar34 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)(local_4e10 + 8));
  pFVar34 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar34->field_0x18,0.0,0.0,fVar60,0.0);
  puVar1 = &pFVar34->field_0x48;
  if (local_5fe8 != (undefined4 *)puVar1) {
    *(undefined4 *)puVar1 = 3;
    pFVar34->field_0x4c = 1;
  }
  pFVar56 = pFVar25;
  if (puVar1 != (undefined1 *)0x0) {
    pFVar56 = pFVar34;
  }
  pFVar31 = SButton::FArguments::FArguments(&local_23d8);
  pFVar27 = FText::AsLocalizable_Advanced_LocText
                      (&local_5928,L"CustomTextFilter",L"CancelButton",L"Cancel");
  FText::FText(&local_5b80.Value,pFVar27);
  local_5b80.bIsSet = true;
  local_5b80.Getter._16_8_ = 0;
  local_5b80.Getter._0_8_ = 0;
  local_5b80.Getter._8_8_ = 0;
  pFVar31 = SButton::FArguments::Text(pFVar31,&local_5b80);
  uStack_6010 = 0;
  local_6018 = (TReferenceControllerBase<1> *)OnCancelButtonClicked;
  lStack_5940 = (ulonglong)uStack_600c << 0x20;
  local_5948 = OnCancelButtonClicked;
  TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<SCustomTextFilterDialog>
            ((TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar31->_OnClicked,this,(pmf_3ad0ec8c *)&local_5948);
  FLLMScope::FLLMScope(&local_61b8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5f20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5f28,&local_5f20,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_5a20,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
             ,0x54,&local_61d3);
  FMemScope::~FMemScope(&local_5f28);
  FLLMScope::~FLLMScope(&local_61b8);
  pTVar33 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5a20,&local_5938,pFVar31);
  pTVar3 = (pTVar33->SharedReferenceCount).ReferenceController;
  local_6098 = pTVar33->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6090.ReferenceController = pTVar3;
  if ((SButton **)&pFVar56->field_0x8 != &local_6098) {
    *(SButton **)&pFVar56->field_0x8 = local_6098;
    local_6098 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar56->field_0x10,&local_6090);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6090.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5938.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a20._Widget.SharedReferenceCount.ReferenceController);
  if (local_5928.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5928.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_23d8);
  SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
  ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
            ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_4e10);
  pFVar35 = SBorder::FArguments::FArguments(&local_3238);
  pFVar36 = ::FName::FName(&local_5fa0,"Brushes.Panel");
  FVar59 = *pFVar36;
  pIVar37 = FAppStyle::Get();
  local_5d90.Value = (FSlateBrush *)(**(code **)((longlong)*pIVar37 + 0x50))(pIVar37,FVar59,0,0);
  local_5d90.bIsSet = true;
  local_5d90.Getter._16_8_ = 0;
  local_5d90.Getter._0_8_ = 0;
  local_5d90.Getter._8_8_ = 0;
  local_5fc0 = SBorder::FArguments::BorderImage(pFVar35,&local_5d90);
  local_60b8 = (FArguments *)SVerticalBox::FArguments::FArguments(&local_46f8);
  this_01 = ::operator_new(0x58);
  local_5f30 = pFVar25;
  if (this_01 != (FSlot *)0x0) {
    *(undefined8 *)this_01 = 0;
    *(undefined8 *)&this_01->field_0x8 = 0;
    *(undefined8 *)&this_01->field_0x10 = 0;
    *(undefined8 *)&this_01->field_0x18 = 0;
    *(undefined8 *)&this_01->field_0x20 = 0;
    *(undefined8 *)&this_01->field_0x28 = 0;
    *(undefined8 *)&this_01->field_0x30 = 0;
    *(undefined8 *)&this_01->field_0x38 = 0;
    *(undefined8 *)&this_01->field_0x40 = 0;
    *(undefined8 *)&this_01->field_0x48 = 0;
    *(undefined8 *)&this_01->field_0x50 = 0;
    local_5f30 = (FSlotArguments *)SVerticalBox::FSlot::FSlot(this_01);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_5650,(FSlot *)&local_5f30);
  pFVar38 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)local_5638,0.0,__real_42180000,0.0,0.0);
  local_60d8 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar38);
  pFVar20 = SHorizontalBox::FArguments::FArguments(&local_4900);
  pFVar39 = ::operator_new(0x58);
  local_5f38 = pFVar25;
  if (pFVar39 != (FSlot *)0x0) {
    *(undefined8 *)pFVar39 = 0;
    *(undefined8 *)&pFVar39->field_0x8 = 0;
    *(undefined8 *)&pFVar39->field_0x10 = 0;
    *(undefined8 *)&pFVar39->field_0x18 = 0;
    *(undefined8 *)&pFVar39->field_0x20 = 0;
    *(undefined8 *)&pFVar39->field_0x28 = 0;
    *(undefined8 *)&pFVar39->field_0x30 = 0;
    *(undefined8 *)&pFVar39->field_0x38 = 0;
    *(undefined8 *)&pFVar39->field_0x40 = 0;
    *(undefined8 *)&pFVar39->field_0x48 = 0;
    *(undefined8 *)&pFVar39->field_0x50 = 0;
    local_5f38 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar39);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_5738,(FSlot *)&local_5f38);
  pFVar34 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_5738);
  if (local_5fe0 != (undefined4 *)&pFVar34->field_0x50) {
    *(undefined4 *)&pFVar34->field_0x50 = 2;
    pFVar34->field_0x54 = 1;
  }
  pFVar56 = pFVar25;
  if (pFVar34 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar56 = pFVar34;
  }
  pFVar34 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar56->field_0x18,__real_42080000,0.0,0.0,0.0);
  pFVar40 = STextBlock::FArguments::FArguments(&local_13e8);
  pFVar27 = FText::AsLocalizable_Advanced_LocText
                      (&local_5db0,L"CustomTextFilter",L"FilterLabelText",L"Filter Label");
  FText::FText(&local_5ca0.Value,pFVar27);
  local_5ca0.bIsSet = true;
  local_5ca0.Getter._16_8_ = 0;
  local_5ca0.Getter._0_8_ = 0;
  local_5ca0.Getter._8_8_ = 0;
  pFVar40 = STextBlock::FArguments::Text(pFVar40,&local_5ca0);
  pFVar27 = FText::AsLocalizable_Advanced_LocText
                      (&local_5ae0,L"CustomTextFilter",L"FilterLabelTooltip",
                       L"Display name of the filter");
  FText::FText(&local_5c70.Value,pFVar27);
  local_5c70.bIsSet = true;
  local_5c70.Getter._16_8_ = 0;
  local_5c70.Getter._0_8_ = 0;
  local_5c70.Getter._8_8_ = 0;
  pFVar40 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                      ((TSlateBaseNamedArgs<STextBlock> *)pFVar40,&local_5c70);
  FLLMScope::FLLMScope(&local_61b4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5f40 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5f48,&local_5f40,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_59a8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
             ,0x6d,&local_61d2);
  FMemScope::~FMemScope(&local_5f48);
  FLLMScope::~FLLMScope(&local_61b4);
  pTVar41 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_59a8,&local_5af0,pFVar40);
  local_60b0 = pTVar41->Object;
  local_60a8.ReferenceController = (pTVar41->SharedReferenceCount).ReferenceController;
  if (local_60a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60a8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_60a8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_60a8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_60a8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6018 = local_60a8.ReferenceController;
  if ((STextBlock **)&pFVar34->field_0x8 != &local_60b0) {
    *(STextBlock **)&pFVar34->field_0x8 = local_60b0;
    local_60b0 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar34->field_0x10,&local_60a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60a8.ReferenceController);
  local_60a0 = SHorizontalBox::FArguments::operator+(pFVar20,pFVar34);
  pFVar39 = ::operator_new(0x58);
  if (pFVar39 != (FSlot *)0x0) {
    *(undefined8 *)pFVar39 = 0;
    *(undefined8 *)&pFVar39->field_0x8 = 0;
    *(undefined8 *)&pFVar39->field_0x10 = 0;
    *(undefined8 *)&pFVar39->field_0x18 = 0;
    *(undefined8 *)&pFVar39->field_0x20 = 0;
    *(undefined8 *)&pFVar39->field_0x28 = 0;
    *(undefined8 *)&pFVar39->field_0x30 = 0;
    *(undefined8 *)&pFVar39->field_0x38 = 0;
    *(undefined8 *)&pFVar39->field_0x40 = 0;
    *(undefined8 *)&pFVar39->field_0x48 = 0;
    *(undefined8 *)&pFVar39->field_0x50 = 0;
    pFVar25 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar39);
  }
  local_5f70 = pFVar25;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_5480,(FSlot *)&local_5f70);
  pFVar25 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_5480);
  fVar14 = __real_41a80000;
  pFVar25 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar25->field_0x18,__real_41a80000,0.0,0.0,0.0);
  pFVar42 = SBox::FArguments::FArguments(&local_38e0);
  local_5ee0.Value.Size = __real_440b0000;
  if (this->bEnableColorEditing != false) {
    local_5ee0.Value.Size = __real_437e0000;
  }
  local_5ee0.bIsSet = true;
  local_5ee0.Getter._16_8_ = 0;
  local_5ee0.Getter._0_8_ = 0;
  local_5ee0.Getter._8_8_ = 0;
  pFVar42 = SBox::FArguments::WidthOverride(pFVar42,&local_5ee0);
  pFVar43 = SEditableTextBox::FArguments::FArguments(&local_7d0);
  local_80 = (undefined ***)0x0;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SCustomTextFilterDialog::Construct'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`SCustomTextFilterDialog::Construct'::__l2::<lambda_1>,FText>::
                Call;
  local_90 = this;
  pFVar43 = SEditableTextBox::FArguments::Text_Lambda
                      (pFVar43,(TFunction<FText___cdecl(void)> *)local_a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar43->_OnTextChanged,
             (FWriteAccessScope *)&local_5cc0);
  local_5ca8 = &(pFVar43->_OnTextChanged).field_0x8;
  puVar44 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_5ca8);
  if (puVar44 != (undefined8 *)0x0) {
    *puVar44 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar45 = FDelegateHandle::GenerateNewID();
    puVar44[2] = uVar45;
    *puVar44 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::`2'::<lambda_2>_>
                ::_vftable_;
    puVar44[3] = this;
  }
  if (local_5cc0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5cc0.Accessor,&local_5cc0);
  }
  FLLMScope::FLLMScope(&local_61b0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5f50 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5f58,&local_5f50,true);
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
            (&local_5e58,"SEditableTextBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
             ,0x79,&local_61d1);
  FMemScope::~FMemScope(&local_5f58);
  FLLMScope::~FLLMScope(&local_61b0);
  if (local_5e58._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5e58._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5e58._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_5918 = (this->FilterLabelTextBox).Object;
  pTStack_5910 = (this->FilterLabelTextBox).SharedReferenceCount.ReferenceController;
  (this->FilterLabelTextBox).Object = local_5e58._Widget.Object;
  (this->FilterLabelTextBox).SharedReferenceCount.ReferenceController =
       local_5e58._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_5910);
  pTVar46 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5e58,&local_5b00,pFVar43);
  pTVar3 = (pTVar46->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar46->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6088 = (pFVar42->_Content).Widget.Object;
  pTStack_6080 = (pFVar42->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar42->_Content).Widget.Object = (SWidget *)pSVar4;
  (pFVar42->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_6080);
  FLLMScope::FLLMScope(&local_61ac,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5f80 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5f88,&local_5f80,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_59c0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
             ,0x76,&local_61d0);
  FMemScope::~FMemScope(&local_5f88);
  FLLMScope::~FLLMScope(&local_61ac);
  pTVar47 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_59c0,&local_5b10,pFVar42);
  local_6188.SharedReferenceCount.ReferenceController =
       (pTVar47->SharedReferenceCount).ReferenceController;
  local_6188.Object = (SWidget *)pTVar47->Object;
  if (local_6188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar25 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar25,&local_6188);
  pFVar20 = SHorizontalBox::FArguments::operator+(local_60a0,pFVar25);
  pFVar39 = ::operator_new(0x58);
  if (pFVar39 == (FSlot *)0x0) {
    local_5f90 = (FSlot *)0x0;
  }
  else {
    *(undefined8 *)pFVar39 = 0;
    *(undefined8 *)&pFVar39->field_0x8 = 0;
    *(undefined8 *)&pFVar39->field_0x10 = 0;
    *(undefined8 *)&pFVar39->field_0x18 = 0;
    *(undefined8 *)&pFVar39->field_0x20 = 0;
    *(undefined8 *)&pFVar39->field_0x28 = 0;
    *(undefined8 *)&pFVar39->field_0x30 = 0;
    *(undefined8 *)&pFVar39->field_0x38 = 0;
    *(undefined8 *)&pFVar39->field_0x40 = 0;
    *(undefined8 *)&pFVar39->field_0x48 = 0;
    *(undefined8 *)&pFVar39->field_0x50 = 0;
    local_5f90 = SHorizontalBox::FSlot::FSlot(pFVar39);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_5568,(FSlot *)&local_5f90);
  pFVar25 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_5568);
  if (local_5fd8 != (undefined4 *)&pFVar25->field_0x50) {
    *(undefined4 *)&pFVar25->field_0x50 = 2;
    pFVar25->field_0x54 = 1;
  }
  pFVar34 = (FSlotArguments *)0x0;
  if (pFVar25 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar34 = pFVar25;
  }
  pFVar25 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar34->field_0x18,fVar14,0.0,0.0,0.0);
  pFVar40 = STextBlock::FArguments::FArguments(&local_1940);
  local_6037 = 1;
  local_6038 = (uchar)EVisibility::Collapsed;
  if (this->bEnableColorEditing != false) {
    local_6038 = (uchar)EVisibility::Visible;
  }
  local_6020 = 0;
  local_6030 = (undefined1  [8])0x0;
  pvStack_6028 = (void *)0x0;
  *(uchar *)&pFVar40->_padding_ = local_6038;
  *(undefined1 *)((longlong)&pFVar40->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar40->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6030);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6030);
  if (pvStack_6028 != (void *)0x0) {
    FMemory::Free(pvStack_6028);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6030);
  pFVar27 = FText::AsLocalizable_Advanced_LocText
                      (&local_5b20,L"CustomTextFilter",L"FilterColorText",L"Color");
  FText::FText(&local_5c40.Value,pFVar27);
  local_5c40.bIsSet = true;
  local_5c40.Getter._16_8_ = 0;
  local_5c40.Getter._0_8_ = 0;
  local_5c40.Getter._8_8_ = 0;
  pFVar40 = STextBlock::FArguments::Text(pFVar40,&local_5c40);
  pFVar27 = FText::AsLocalizable_Advanced_LocText
                      (&local_5b30,L"CustomTextFilter",L"FilterColorTooltip",
                       L"Display color of the filter button");
  FText::FText(&local_5c10.Value,pFVar27);
  local_5c10.bIsSet = true;
  local_5c10.Getter._16_8_ = 0;
  local_5c10.Getter._0_8_ = 0;
  local_5c10.Getter._8_8_ = 0;
  pFVar40 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                      ((TSlateBaseNamedArgs<STextBlock> *)pFVar40,&local_5c10);
  FLLMScope::FLLMScope(&local_61a8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5f98 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6100,&local_5f98,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_59d8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
             ,0x8b,&local_61cf);
  FMemScope::~FMemScope(&local_6100);
  FLLMScope::~FLLMScope(&local_61a8);
  pTVar41 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_59d8,&local_5b40,pFVar40);
  local_5f68.Object = (SWidget *)pTVar41->Object;
  local_5f68.SharedReferenceCount.ReferenceController =
       (pTVar41->SharedReferenceCount).ReferenceController;
  if (local_5f68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5f68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5f68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar25 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar25,&local_5f68);
  local_60e0 = SHorizontalBox::FArguments::operator+(pFVar20,pFVar25);
  pFVar25 = SHorizontalBox::Slot((FSlotArguments *)local_5270);
  pFVar25 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar25);
  local_60a0 = (FArguments *)
               TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar25->field_0x18,fVar14,0.0,0.0,0.0);
  pFVar48 = SColorBlock::FArguments::FArguments(&local_3598);
  local_6057 = 1;
  local_6058 = (uchar)EVisibility::Collapsed;
  if (this->bEnableColorEditing != false) {
    local_6058 = (uchar)EVisibility::Visible;
  }
  local_6040 = 0;
  local_6050 = (undefined1  [8])0x0;
  pvStack_6048 = (void *)0x0;
  pFVar48->field_0x88 = local_6058;
  pFVar48->field_0x89 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar48->field_0x90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6050);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6050);
  if (pvStack_6048 != (void *)0x0) {
    FMemory::Free(pvStack_6048);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6050);
  local_e0 = (undefined ***)0x0;
  local_f8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SCustomTextFilterDialog::Construct'::`2'::<lambda_3>,0,0>::
              _vftable_;
  local_108 = UE::Core::Private::Function::
              TFunctionRefCaller<`SCustomTextFilterDialog::Construct'::__l2::<lambda_3>,FLinearColor>
              ::Call;
  (pFVar48->_Color).bIsSet = true;
  local_f0 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar48->_Color).Getter,
             (FWriteAccessScope *)&local_5d20);
  local_5d08 = &(pFVar48->_Color).Getter.field_0x8;
  puVar44 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_5d08);
  if (puVar44 != (undefined8 *)0x0) {
    *puVar44 = &
               ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar45 = FDelegateHandle::GenerateNewID();
    puVar44[2] = uVar45;
    *puVar44 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUFLinearColor__XZ____V__6B_
    ;
    puVar44[4] = local_108;
    puVar44[9] = 0;
    if (local_108 != (code *)0x0) {
      pppuVar57 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar57 = local_e0;
      }
      (*(code *)**pppuVar57)();
    }
  }
  if (local_5d20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d20.Accessor,&local_5d20);
  }
  dVar16 = _UNK_15076bb98;
  dVar15 = ___xmm_40100000000000004010000000000000;
  local_5e88 = ___xmm_40100000000000004010000000000000;
  dStack_5e80 = _UNK_15076bb98;
  local_5e78 = 1;
  local_5e70 = (undefined1  [8])0x0;
  pvStack_5e68 = (void *)0x0;
  local_5e60 = 0;
  local_5e98 = ___xmm_40100000000000004010000000000000;
  dStack_5e90 = _UNK_15076bb98;
  (pFVar48->_CornerRadius).Value.field0_0x0._s_0.X = ___xmm_40100000000000004010000000000000;
  (pFVar48->_CornerRadius).Value.field0_0x0._s_0.Y = dVar16;
  (pFVar48->_CornerRadius).Value.field0_0x0._s_0.Z = dVar15;
  (pFVar48->_CornerRadius).Value.field0_0x0._s_0.W = dVar16;
  (pFVar48->_CornerRadius).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar48->_CornerRadius).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5e70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5e70);
  if (pvStack_5e68 != (void *)0x0) {
    FMemory::Free(pvStack_5e68);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5e70);
  dVar15 = _UNK_1509eced8;
  local_5f00 = 1;
  local_5ee8 = 0;
  local_5f10 = ___xmm_40360000000000004051800000000000;
  dStack_5f08 = _UNK_1509eced8;
  local_5ef8 = (undefined1  [8])0x0;
  pvStack_5ef0 = (void *)0x0;
  (pFVar48->_Size).Value.field0_0x0._s_0.X = ___xmm_40360000000000004051800000000000;
  (pFVar48->_Size).Value.field0_0x0._s_0.Y = dVar15;
  (pFVar48->_Size).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar48->_Size).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5ef8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5ef8);
  if (pvStack_5ef0 != (void *)0x0) {
    FMemory::Free(pvStack_5ef0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5ef8);
  local_6078 = 0x103;
  local_6060 = 0;
  local_6070 = (undefined1  [8])0x0;
  pvStack_6068 = (void *)0x0;
  (pFVar48->_AlphaDisplayMode).Value = Ignore;
  (pFVar48->_AlphaDisplayMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar48->_AlphaDisplayMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6070);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6070);
  if (pvStack_6068 != (void *)0x0) {
    FMemory::Free(pvStack_6068);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6070);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar48->_OnMouseButtonDown,
             (FWriteAccessScope *)&local_5d00);
  local_5ce8 = &(pFVar48->_OnMouseButtonDown).field_0x8;
  puVar44 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_5ce8);
  FVar59 = local_5fa0;
  if (puVar44 != (undefined8 *)0x0) {
    uStack_60ec = local_5db0._12_4_;
    local_60f8 = (FName)ColorBlock_OnMouseButtonDown;
    uStack_60f0 = 0;
    pTVar49 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_5908);
    FVar59 = (FName)(pTVar49->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar49->Object;
    if (FVar59 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar59 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar59 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar59 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar59 + 8) + 1);
      UNLOCK();
    }
    *puVar44 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar45 = FDelegateHandle::GenerateNewID();
    puVar44[2] = uVar45;
    *puVar44 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSCustomTextFilterDialog___00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar44[3] = pSVar5;
    *(FName *)(puVar44 + 4) = FVar59;
    if (FVar59 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar59 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar59 + 0xc) + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar19 = true;
    *(FName *)(puVar44 + 5) = local_60f8;
    puVar44[6] = CONCAT44(uStack_60ec,uStack_60f0);
  }
  if (bVar19) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar59);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar59);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5908.SharedReferenceCount.ReferenceController);
  }
  if (local_5d00.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d00.Accessor,&local_5d00);
  }
  FLLMScope::FLLMScope(&local_61a4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_60f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_60e8,&local_60f8,true);
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorBlock,RequiredArgs::T0RequiredArgs>
            (&local_60d0,"SColorBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
             ,0x95,&local_61ce);
  FMemScope::~FMemScope(&local_60e8);
  FLLMScope::~FLLMScope(&local_61a4);
  if (local_60d0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_60d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_58f8 = (this->ColorBlock).Object;
  pTStack_58f0 = (this->ColorBlock).SharedReferenceCount.ReferenceController;
  (this->ColorBlock).Object = local_60d0._Widget.Object;
  (this->ColorBlock).SharedReferenceCount.ReferenceController =
       local_60d0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_58f0);
  pSVar50 = TSharedPtr<SColorBlock,1>::operator->(&local_60d0._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar50,(FSlateBaseNamedArgs *)pFVar48);
  pSVar50 = local_60d0._Widget.Object;
  SColorBlock::Construct(local_60d0._Widget.Object,pFVar48);
  pSVar51 = TSharedPtr<SColorBlock,1>::operator->(&local_60d0._Widget);
  SWidget::CacheVolatility((SWidget *)pSVar51);
  pSVar51 = TSharedPtr<SColorBlock,1>::operator->(&local_60d0._Widget);
  pbVar2 = (byte *)((longlong)&pSVar51->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_60d0._Widget.Object == (SColorBlock *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FVar17.ReferenceController = local_60d0._Widget.SharedReferenceCount.ReferenceController;
  local_60d0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_60d0._Widget.Object = (SColorBlock *)0x0;
  if ((pSVar50 == (SColorBlock *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_5e20.Object = (SWidget *)pSVar50;
  local_5e20.SharedReferenceCount.ReferenceController = FVar17.ReferenceController;
  if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar25 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_60a0,&local_5e20);
  pFVar20 = SHorizontalBox::FArguments::operator+(local_60e0,pFVar25);
  pTVar52 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_57e0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
                       ,0x65,&local_61cd);
  pTVar21 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar52,&local_5b50,pFVar20);
  pTVar6 = (pTVar21->SharedReferenceCount).ReferenceController;
  local_5e10.Object = (SWidget *)pTVar21->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5e10.SharedReferenceCount.ReferenceController = pTVar6;
  pFVar38 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_60d8,&local_5e10);
  local_60f8 = (FName)SVerticalBox::FArguments::operator+((FArguments *)local_60b8,pFVar38);
  pFVar38 = SVerticalBox::Slot((FSlotArguments *)local_5358);
  pFVar38 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar38);
  local_60e8 = (FMemScope)
               TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar38->field_0x18,0.0,fVar14,0.0,0.0);
  pFVar20 = SHorizontalBox::FArguments::FArguments(&local_4b08);
  pFVar25 = SHorizontalBox::Slot((FSlotArguments *)local_4fb8);
  pFVar25 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar25);
  if (local_5fd0 != (undefined4 *)&pFVar25->field_0x50) {
    *(undefined4 *)&pFVar25->field_0x50 = 2;
    pFVar25->field_0x54 = 1;
  }
  pFVar34 = (FSlotArguments *)0x0;
  if (pFVar25 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar34 = pFVar25;
  }
  pFVar25 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar34->field_0x18,__real_41f80000,0.0,0.0,0.0);
  pFVar40 = STextBlock::FArguments::FArguments(&local_1e98);
  pFVar27 = FText::AsLocalizable_Advanced_LocText
                      (&local_5868,L"CustomTextFilter",L"FilterStringText",L"Filter String");
  FText::FText(&local_5be0.Value,pFVar27);
  local_5be0.bIsSet = true;
  local_5be0.Getter._16_8_ = 0;
  local_5be0.Getter._0_8_ = 0;
  local_5be0.Getter._8_8_ = 0;
  pFVar40 = STextBlock::FArguments::Text(pFVar40,&local_5be0);
  pFVar27 = FText::AsLocalizable_Advanced_LocText
                      (&local_5878,L"CustomTextFilter",L"FilterStringTooltip",
                       L"String literal to query for");
  FText::FText(&local_5bb0.Value,pFVar27);
  local_5bb0.bIsSet = true;
  local_5bb0.Getter._16_8_ = 0;
  local_5bb0.Getter._0_8_ = 0;
  local_5bb0.Getter._8_8_ = 0;
  pFVar40 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                      ((TSlateBaseNamedArgs<STextBlock> *)pFVar40,&local_5bb0);
  this_02 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_5810,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
                       ,0xae,&local_61cc);
  pTVar41 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_5888,pFVar40);
  local_5e00.Object = (SWidget *)pTVar41->Object;
  local_6100 = (FMemScope)(pTVar41->SharedReferenceCount).ReferenceController;
  if (local_6100 != (FMemScope)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_6100 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_6100 + 8) + 1);
    UNLOCK();
  }
  local_5e00.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_6100;
  pFVar25 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar25,&local_5e00);
  local_60e0 = SHorizontalBox::FArguments::operator+(pFVar20,pFVar25);
  pFVar25 = SHorizontalBox::Slot((FSlotArguments *)local_50a0);
  pFVar25 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar25);
  local_60d8 = (FSlotArguments *)
               TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar25->field_0x18,fVar14,0.0,0.0,0.0);
  pFVar42 = SBox::FArguments::FArguments(&local_3c20);
  local_5ec0.Value.Size = 556.0;
  local_5ec0.bIsSet = true;
  local_5ec0.Getter._0_8_ = 0;
  local_5ec0.Getter._8_8_ = 0;
  local_5ec0.Getter._16_8_ = 0;
  local_60b8 = SBox::FArguments::WidthOverride(pFVar42,&local_5ec0);
  pFVar43 = SEditableTextBox::FArguments::FArguments(&local_e90);
  local_b0 = (undefined ***)0x0;
  local_c8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`SCustomTextFilterDialog::Construct'::`2'::<lambda_4>,0,0>::
              _vftable_;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`SCustomTextFilterDialog::Construct'::__l2::<lambda_4>,FText>::
                Call;
  local_c0 = this;
  pFVar43 = SEditableTextBox::FArguments::Text_Lambda
                      (pFVar43,(TFunction<FText___cdecl(void)> *)local_d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar43->_OnTextChanged,
             (FWriteAccessScope *)&local_5ce0);
  local_5cc8 = &(pFVar43->_OnTextChanged).field_0x8;
  puVar44 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_5cc8);
  if (puVar44 != (undefined8 *)0x0) {
    *puVar44 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar45 = FDelegateHandle::GenerateNewID();
    puVar44[2] = uVar45;
    *puVar44 = &TBaseFunctorDelegateInstance<void___cdecl(FText_const_&),FDefaultDelegateUserPolicy,`SCustomTextFilterDialog::Construct'::`2'::<lambda_5>_>
                ::_vftable_;
    puVar44[3] = this;
  }
  if (local_5ce0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5ce0.Accessor,&local_5ce0);
  }
  this_03 = MakeTDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>
                      (&local_5828,"SEditableTextBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
                       ,0xba,&local_61cb);
  pTVar46 = TSlateDecl<SEditableTextBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_5898,pFVar43);
  pTVar7 = (pTVar46->SharedReferenceCount).ReferenceController;
  local_5df0.Object = (SWidget *)pTVar46->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5df0.SharedReferenceCount.ReferenceController = pTVar7;
  pFVar42 = SBox::FArguments::operator[](local_60b8,&local_5df0);
  this_04 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_5840,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
                       ,0xb7,&local_61ca);
  pTVar47 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(this_04,&local_58a8,pFVar42);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_5dc0,pTVar47);
  pFVar25 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_60d8,&local_5dc0);
  pFVar20 = SHorizontalBox::FArguments::operator+(local_60e0,pFVar25);
  pTVar52 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_5858,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
                       ,0xa7,&local_61c9);
  pTVar21 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar52,&local_58b8,pFVar20);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_5dd0,pTVar21);
  pFVar38 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_60e8,&local_5dd0);
  pFVar53 = SVerticalBox::FArguments::operator+((FArguments *)local_60f8,pFVar38);
  pFVar38 = SVerticalBox::Slot((FSlotArguments *)local_5188);
  pFVar38 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                      ((FSlotArgumentsMixin *)&pFVar38->field_0x48,VAlign_Bottom);
  pFVar38 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar38->field_0x18,0.0,0.0,0.0,fVar60);
  pTVar21 = TSharedPtr<SHorizontalBox,1>::ToSharedRef(&local_6118,&local_58c8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_5de0,pTVar21);
  pFVar38 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar38,&local_5de0);
  pFVar53 = SVerticalBox::FArguments::operator+(pFVar53,pFVar38);
  FLLMScope::FLLMScope(&local_61a0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5fa8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5f78,&local_5fa8,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_59f0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
             ,0x5e,&local_61c8);
  FMemScope::~FMemScope(&local_5f78);
  FLLMScope::~FLLMScope(&local_61a0);
  pTVar54 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_59f0,&local_58d8,pFVar53);
  pFVar35 = local_5fc0;
  pTVar8 = (pTVar54->SharedReferenceCount).ReferenceController;
  local_6008 = pTVar54->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (local_5fc0->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_5fc0->_Content).Widget.Object = (SWidget *)local_6008;
  (local_5fc0->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar8;
  pTStack_6000 = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  FLLMScope::FLLMScope(&local_619c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5fb8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5fb0,&local_5fb8,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_5a08,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolWidgets\\Private\\Filters\\SCustomTextFilterDialog.cpp"
             ,0x5b,local_61c7);
  FMemScope::~FMemScope(&local_5fb0);
  FLLMScope::~FLLMScope(&local_619c);
  pTVar55 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_5a08,&local_58e8,pFVar35);
  plVar58 = &this->_padding_;
  local_61c0 = pTVar55->Object;
  pTVar9 = (pTVar55->SharedReferenceCount).ReferenceController;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar58);
  }
  else {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar58);
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (TReferenceControllerBase<1> *)this->_padding_;
  local_5ff8 = local_61c0;
  this->_padding_ = (longlong)local_61c0;
  this->_padding_ = (longlong)pTVar9;
  pTStack_5ff0 = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a08._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_59f0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5de0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58c8.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_5130);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5158);
  if ((void *)local_5158._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5158._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5158);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5178);
  if (local_5188[0] != (undefined8 *)0x0) {
    (**(code **)*local_5188[0])(local_5188[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5dd0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5858._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5dc0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5840._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5898.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5828._Widget.SharedReferenceCount.ReferenceController);
  if (local_d8[0] != (code *)0x0) {
    pppuVar57 = &local_c8;
    if (local_b0 != (undefined ***)0x0) {
      pppuVar57 = local_b0;
    }
    (*(code *)(*pppuVar57)[2])();
  }
  SEditableTextBox::FArguments::~FArguments(&local_e90);
  SBox::FArguments::~FArguments(&local_3c20);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_5048);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5070);
  if ((void *)local_5070._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5070._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5070);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5090);
  if (local_50a0[0] != (undefined8 *)0x0) {
    (**(code **)*local_50a0[0])(local_50a0[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6100);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5888.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5810._Widget.SharedReferenceCount.ReferenceController);
  if (local_5878.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5878.TextData.Reference + 0x10))();
  }
  if (local_5868.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5868.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_1e98);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_4f60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4f88);
  if ((void *)local_4f88._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_4f88._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4f88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4fa8);
  if (local_4fb8[0] != (undefined8 *)0x0) {
    (**(code **)*local_4fb8[0])(local_4fb8[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_4b08._Slots.AllocatorInstance.Data,local_4b08._Slots.ArrayNum);
  if ((FSlotArguments *)local_4b08._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_4b08._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4b08);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_5300);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5328);
  if ((void *)local_5328._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5328._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5328);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5348);
  if (local_5358[0] != (undefined8 *)0x0) {
    (**(code **)*local_5358[0])(local_5358[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b50.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_57e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60d0._Widget.SharedReferenceCount.ReferenceController);
  if (local_108 != (code *)0x0) {
    pppuVar57 = &local_f8;
    if (local_e0 != (undefined ***)0x0) {
      pppuVar57 = local_e0;
    }
    (*(code *)(*pppuVar57)[2])();
  }
  SColorBlock::FArguments::~FArguments(&local_3598);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_5218);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5240);
  if ((void *)local_5240._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5240._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5240);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5260);
  if (local_5270[0] != (undefined8 *)0x0) {
    (**(code **)*local_5270[0])(local_5270[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5f68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b40.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_59d8._Widget.SharedReferenceCount.ReferenceController);
  if (local_5b30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5b30.TextData.Reference + 0x10))();
  }
  if (local_5b20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5b20.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_1940);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_5510);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5538);
  if ((void *)local_5538._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5538._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5538);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5558);
  if (local_5568[0] != (undefined8 *)0x0) {
    (**(code **)*local_5568[0])(local_5568[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6188.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b10.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_59c0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b00.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e58._Widget.SharedReferenceCount.ReferenceController);
  if (local_a8[0] != (code *)0x0) {
    pppuVar57 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar57 = local_80;
    }
    (*(code *)(*pppuVar57)[2])();
  }
  SEditableTextBox::FArguments::~FArguments(&local_7d0);
  SBox::FArguments::~FArguments(&local_38e0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_5428);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5450);
  if ((void *)local_5450._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5450._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5450);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5470);
  if (local_5480[0] != (undefined8 *)0x0) {
    (**(code **)*local_5480[0])(local_5480[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6018);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5af0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_59a8._Widget.SharedReferenceCount.ReferenceController);
  if (local_5ae0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5ae0.TextData.Reference + 0x10))();
  }
  if (local_5db0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_5db0.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_13e8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_56e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5708);
  if ((void *)local_5708._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5708._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5708);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5728);
  if (local_5738[0] != (undefined8 *)0x0) {
    (**(code **)*local_5738[0])(local_5738[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_4900._Slots.AllocatorInstance.Data,local_4900._Slots.ArrayNum);
  if ((FSlotArguments *)local_4900._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_4900._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_4900);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_55f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5620);
  if ((void *)local_5620._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_5620._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5620);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5640);
  if (local_5650[0] != (undefined8 *)0x0) {
    (**(code **)*local_5650[0])(local_5650[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_46f8._Slots.AllocatorInstance.Data,local_46f8._Slots.ArrayNum);
  if ((FSlotArguments *)local_46f8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_46f8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_46f8);
  SBorder::FArguments::~FArguments(&local_3238);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6118.SharedReferenceCount.ReferenceController);
  return;
}

// HandleColorValueChanged @ 142db2ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SCustomTextFilterDialog::HandleColorValueChanged
          (SCustomTextFilterDialog *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->FilterData).FilterColor.field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->FilterData).FilterColor.field0_0x0 + 8) = uVar1;
  return;
}

// OnCancelButtonClicked @ 142dbc320

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCustomTextFilterDialog::OnCancelButtonClicked
          (SCustomTextFilterDialog *this,FReply *__return_storage_ptr__)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCancelClicked,
             &local_28);
  if ((*(int *)&(this->OnCancelClicked).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnCancelClicked).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnCreateFilterButtonClicked @ 142dbc660

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCustomTextFilterDialog::OnCreateFilterButtonClicked
          (SCustomTextFilterDialog *this,FReply *__return_storage_ptr__,bool param_1)

{
  longlong *plVar1;
  bool bVar2;
  FReadAccessScope local_28;
  
  bVar2 = CheckFilterValidity(this);
  if (!bVar2) {
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCreateFilter,
             &local_28);
  if ((*(int *)&(this->OnCreateFilter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnCreateFilter).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,&this->FilterData,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnDeleteButtonClicked @ 142dbca00

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCustomTextFilterDialog::OnDeleteButtonClicked
          (SCustomTextFilterDialog *this,FReply *__return_storage_ptr__)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnDeleteFilter,
             &local_28);
  if ((*(int *)&(this->OnDeleteFilter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnDeleteFilter).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnModifyButtonClicked @ 142dc1870

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SCustomTextFilterDialog::OnModifyButtonClicked
          (SCustomTextFilterDialog *this,FReply *__return_storage_ptr__)

{
  longlong *plVar1;
  bool bVar2;
  FReadAccessScope local_28;
  
  bVar2 = CheckFilterValidity(this);
  if (!bVar2) {
    FReply::FReply(__return_storage_ptr__,true);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnModifyFilter,
             &local_28);
  if ((*(int *)&(this->OnModifyFilter).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnModifyFilter).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,&this->FilterData);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

