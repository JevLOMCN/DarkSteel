// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 52

// HighlightText<SDrawPrimitiveDebugger> @ 146cfeec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
STextBlock::FArguments::HighlightText<SDrawPrimitiveDebugger>
          (FArguments *this,SDrawPrimitiveDebugger *param_1,pmf_0141a4eb *param_2)

{
  pmf_0141a4eb local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<FText>::Bind<SDrawPrimitiveDebugger>(&this->_HighlightText,param_1,&local_18);
  return this;
}

// InitialText<SDrawPrimitiveDebugger> @ 146cfef00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SSearchBox::FArguments::InitialText<SDrawPrimitiveDebugger>
          (FArguments *this,SDrawPrimitiveDebugger *param_1,pmf_0141a4eb *param_2)

{
  pmf_0141a4eb local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<FText>::Bind<SDrawPrimitiveDebugger>(&this->_InitialText,param_1,&local_18);
  return this;
}

// IsChecked<SDrawPrimitiveDebuggerListViewRow> @ 146cff3a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SCheckBox::FArguments::IsChecked<SDrawPrimitiveDebuggerListViewRow>
          (FArguments *this,SDrawPrimitiveDebuggerListViewRow *param_1,pmf_b4ea238d *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  TSharedRef<SWidget_const_,1> *pTVar4;
  ulong64 uVar5;
  TStatId *pTVar6;
  TStatId *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  pTVar7 = (TStatId *)0x0;
  (this->_IsChecked).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsChecked).Getter,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->_IsChecked).Getter.field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_30);
  if (puVar3 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    pTVar8 = (pTVar4->SharedReferenceCount).ReferenceController;
    pTVar6 = &pTVar4->Object[-1].StatID;
    if (pTVar4->Object == (SWidget *)0x0) {
      pTVar6 = pTVar7;
    }
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar5;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSDrawPrimitiveDebuggerListViewRow___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = pTVar6;
    puVar3[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (TStatId *)0x3;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar7 & 2) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (((ulonglong)pTVar7 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return this;
}

// IsChecked<SPrimitiveDebuggerDetailView> @ 146cff510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SCheckBox::FArguments::IsChecked<SPrimitiveDebuggerDetailView>
          (FArguments *this,SPrimitiveDebuggerDetailView *param_1,pmf_04c88d14 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_IsChecked).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_IsChecked).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_IsChecked).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSPrimitiveDebuggerDetailView___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// MaxSliderValue<SPrimitiveDebuggerDetailView> @ 146d002e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<int>::FArguments::MaxSliderValue<SPrimitiveDebuggerDetailView>
          (FArguments *this,SPrimitiveDebuggerDetailView *param_1,pmf_213a92dc *param_2)

{
  pmf_213a92dc local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<TOptional<int>_>::Bind<SPrimitiveDebuggerDetailView>
            (&this->_MaxSliderValue,param_1,&local_18);
  return this;
}

// MaxValue<SPrimitiveDebuggerDetailView> @ 146d00320

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<int>::FArguments::MaxValue<SPrimitiveDebuggerDetailView>
          (FArguments *this,SPrimitiveDebuggerDetailView *param_1,pmf_213a92dc *param_2)

{
  pmf_213a92dc local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<TOptional<int>_>::Bind<SPrimitiveDebuggerDetailView>
            (&this->_MaxValue,param_1,&local_18);
  return this;
}

// OnCheckStateChanged<SDrawPrimitiveDebugger,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> @ 146d00360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SCheckBox::FArguments::
OnCheckStateChanged<SDrawPrimitiveDebugger,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
          (FArguments *this,SDrawPrimitiveDebugger *param_1,pmf_8bde18e5 *param_2,
          TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_3)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  TSharedRef<SWidget,1> *pTVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_58;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  uVar3 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)&param_2->field_0x8;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->_OnCheckStateChanged).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)local_30);
  if (puVar8 == (undefined8 *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_58);
    pTVar11 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar9->Object;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V__TSharedPtr___CBUFPrimitiveInfo_FViewDebugInfo___00____6B_
    ;
    puVar8[1] = param_3->Object;
    pTVar2 = (param_3->SharedReferenceCount).ReferenceController;
    puVar8[2] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar8[3] = uVar10;
    *puVar8 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSDrawPrimitiveDebugger___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__V__TSharedPtr___CBUFPrimitiveInfo_FViewDebugInfo___00____6B_
    ;
    puVar8[4] = pSVar1;
    puVar8[5] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    puVar8[6] = uVar3;
    puVar8[7] = uVar4;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// OnCheckStateChanged<SPrimitiveDebuggerDetailView> @ 146d004d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SCheckBox::FArguments::OnCheckStateChanged<SPrimitiveDebuggerDetailView>
          (FArguments *this,SPrimitiveDebuggerDetailView *param_1,pmf_ce3dd58c *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SPrimitiveDebuggerDetailView,1> local_68;
  TSharedPtr<SPrimitiveDebuggerDetailView,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnCheckStateChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SPrimitiveDebuggerDetailView *)pTVar7->Object;
    local_68.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSPrimitiveDebuggerDetailView___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = local_58.Object;
    puVar6[4] = local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar6[5] = uVar1;
    puVar6[6] = uVar2;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
  }
  if (bVar3) {
    TSharedPtr<SPrimitiveDebuggerDetailView,1>::~TSharedPtr<SPrimitiveDebuggerDetailView,1>
              (&local_58);
  }
  if (bVar4) {
    TSharedRef<SPrimitiveDebuggerDetailView,1>::~TSharedRef<SPrimitiveDebuggerDetailView,1>
              (&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnClicked<SDrawPrimitiveDebugger> @ 146d00630

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnClicked<SDrawPrimitiveDebugger>
          (FArguments *this,SDrawPrimitiveDebugger *param_1,pmf_2f43fd8f *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnClicked).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSDrawPrimitiveDebugger___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnGenerateRow<SDrawPrimitiveDebugger> @ 146d00760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::
OnGenerateRow<SDrawPrimitiveDebugger>
          (FArguments *this,SDrawPrimitiveDebugger *param_1,pmf_9517392f *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnGenerateRow).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr___CBUFPrimitiveInfo_FViewDebugInfo___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSDrawPrimitiveDebugger___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr___CBUFPrimitiveInfo_FViewDebugInfo___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnSelectionChanged<SDrawPrimitiveDebugger> @ 146d00890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::
OnSelectionChanged<SDrawPrimitiveDebugger>
          (FArguments *this,SDrawPrimitiveDebugger *param_1,pmf_9865df2d *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnSelectionChanged).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr___CBUFPrimitiveInfo_FViewDebugInfo___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSDrawPrimitiveDebugger___00__A6AXV__TSharedPtr___CBUFPrimitiveInfo_FViewDebugInfo___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnTextChanged<SDrawPrimitiveDebugger> @ 146d009c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SSearchBox::FArguments::OnTextChanged<SDrawPrimitiveDebugger>
          (FArguments *this,SDrawPrimitiveDebugger *param_1,pmf_e1d26a6b *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnTextChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnTextChanged).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSDrawPrimitiveDebugger___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnTextCommitted<SDrawPrimitiveDebugger> @ 146d00af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SSearchBox::FArguments::OnTextCommitted<SDrawPrimitiveDebugger>
          (FArguments *this,SDrawPrimitiveDebugger *param_1,pmf_7f3b84af *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnTextCommitted,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnTextCommitted).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSDrawPrimitiveDebugger___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnValueChanged<SPrimitiveDebuggerDetailView> @ 146d00c20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<int>::FArguments::OnValueChanged<SPrimitiveDebuggerDetailView>
          (FArguments *this,SPrimitiveDebuggerDetailView *param_1,pmf_d4321e53 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SPrimitiveDebuggerDetailView,1> local_68;
  TSharedPtr<SPrimitiveDebuggerDetailView,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnValueChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar6 != (undefined8 *)0x0) {
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    local_68.Object = (SPrimitiveDebuggerDetailView *)pTVar7->Object;
    local_68.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_;
    local_58.Object = local_68.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_68.SharedReferenceCount.ReferenceController;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSPrimitiveDebuggerDetailView___00__A6AXH_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = local_58.Object;
    puVar6[4] = local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar6[5] = uVar1;
    puVar6[6] = uVar2;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
  }
  if (bVar3) {
    TSharedPtr<SPrimitiveDebuggerDetailView,1>::~TSharedPtr<SPrimitiveDebuggerDetailView,1>
              (&local_58);
  }
  if (bVar4) {
    TSharedRef<SPrimitiveDebuggerDetailView,1>::~TSharedRef<SPrimitiveDebuggerDetailView,1>
              (&local_68);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// Text<SPrimitiveDebuggerDetailView_const_> @ 146d01610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
STextBlock::FArguments::Text<SPrimitiveDebuggerDetailView_const_>
          (FArguments *this,SPrimitiveDebuggerDetailView *param_1,pmf_da1fa645 *param_2)

{
  SWidget *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  TSharedRef<SWidget_const_,1> *pTVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  uint uStackX_c;
  TSharedRef<SWidget_const_,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  (this->_Text).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Text).Getter.field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_20);
  if (puVar7 == (undefined8 *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&param_1->_padding_,&local_48);
    pTVar10 = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSPrimitiveDebuggerDetailView___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar7[3] = pSVar1;
    puVar7[4] = pTVar10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    puVar7[5] = uVar2;
    puVar7[6] = uVar3;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// Value<SPrimitiveDebuggerDetailView> @ 146d01810

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<int>::FArguments::Value<SPrimitiveDebuggerDetailView>
          (FArguments *this,SPrimitiveDebuggerDetailView *param_1,pmf_213a92dc *param_2)

{
  pmf_213a92dc local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TAttribute<TOptional<int>_>::Bind<SPrimitiveDebuggerDetailView>(&this->_Value,param_1,&local_18);
  return this;
}

// FArguments @ 146d03030

FArguments * __thiscall
SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::FArguments
          (FArguments *this)

{
  float fVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  ISlateStyle *pIVar4;
  FName *pFVar5;
  FTableViewStyle *pFVar6;
  FScrollBarStyle *pFVar7;
  longlong lVar8;
  FName local_res8;
  FName local_res10;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res8,"ListView");
  pFVar6 = (FTableViewStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FTableViewStyle::TypeName,*pFVar5,0,1);
  if (pFVar6 == (FTableViewStyle *)0x0) {
    pFVar6 = FTableViewStyle::GetDefault();
  }
  this->_ListViewStyle = pFVar6;
  this->_bEnableShadowBoxStyle = false;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateRow = 0;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGeneratePinnedRow = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshRow = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEntryInitialized).field_0x10 = 0;
  *(undefined8 *)&this->_OnEntryInitialized = 0;
  *(undefined8 *)&(this->_OnEntryInitialized).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnRowReleased = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x8 = 0;
  *(undefined8 *)&this->_OnListViewScrolled = 0;
  *(undefined8 *)&(this->_OnListViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnListViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  (this->_ListItemsSource_SharedObservableArray).Object =
       (TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0;
  (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 0.0;
  (this->_ItemHeight).bIsSet = false;
  this->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_> *)
       0x0;
  this->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x8 = 0;
  (this->_MaxPinnedItems).Value = 6;
  (this->_MaxPinnedItems).bIsSet = true;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemsRebuilt = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDoubleClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x8 = 0;
  (this->_SelectionMode).Value = Multi;
  (this->_SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x8 = 0;
  (this->_HeaderRow).Object = (SHeaderRow *)0x0;
  (this->_HeaderRow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_FixedLineScrollOffset).bIsSet = false;
  (this->_ScrollbarVisibility).Value = (TEnumAsByte<EVisibility::Private>)0x19;
  (this->_ScrollbarVisibility).bIsSet = false;
  this->_ClearSelectionOnClick = true;
  this->_Orientation = Orient_Vertical;
  this->_EnableAnimatedScrolling = false;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter = 0;
  *(undefined8 *)&(this->_ScrollbarVisibility).Getter.field_0x8 = 0;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_AllowOverscroll = Yes;
  pIVar4 = FAppStyle::Get();
  pFVar5 = ::FName::FName(&local_res10,"ScrollBar");
  pFVar7 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar4 + 0xa0))(pIVar4,FScrollBarStyle::TypeName,*pFVar5,0,1);
  if (pFVar7 == (FScrollBarStyle *)0x0) {
    pFVar7 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar7;
  this->_PreventThrottling = false;
  pTVar2 = GlobalScrollAmount.Ref;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar8 = 4;
    if (!bVar3) goto LAB_146d0331d;
  }
  lVar8 = 0;
LAB_146d0331d:
  fVar1 = *(float *)((longlong)pTVar2->ShadowedValue + lVar8);
  (this->_IsFocusable).Value = true;
  (this->_IsFocusable).bIsSet = true;
  this->_WheelScrollMultiplier = fVar1;
  this->_HandleSpacebarSelection = false;
  this->_NavigationScrollOffset = 0.5;
  (this->_ScrollBarPadding).Left = 0.0;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x8 = 0;
  (this->_ScrollBarPadding).Top = 0.0;
  (this->_ScrollBarPadding).Right = 0.0;
  (this->_ScrollBarPadding).Bottom = 0.0;
  *(undefined8 *)&(this->_IsFocusable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IsFocusable).Getter = 0;
  this->_ReturnFocusToSelection = false;
  this->_ClearScrollVelocityOnSelection = true;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  *(undefined8 *)&this->_OnKeyDownHandler = 0;
  *(undefined8 *)&(this->_OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->_OnKeyDownHandler).field_0x10 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 146d033e0

FArguments * __thiscall
STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::FArguments
          (FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TableView.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  this->_Style = pFVar5;
  pIVar3 = FAppStyle::Get();
  this->_ExpanderStyleSet = pIVar3;
  *(undefined8 *)&this->_OnCanAcceptDrop = 0;
  *(undefined8 *)&(this->_OnCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnAcceptDrop = 0;
  *(undefined8 *)&(this->_OnAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnPaintDropIndicator = 0;
  *(undefined8 *)&(this->_OnPaintDropIndicator).field_0x8 = 0;
  *(undefined4 *)&(this->_OnPaintDropIndicator).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragDetected = 0;
  *(undefined8 *)&(this->_OnDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragEnter = 0;
  *(undefined8 *)&(this->_OnDragEnter).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragLeave = 0;
  *(undefined8 *)&(this->_OnDragLeave).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->_OnDrop = 0;
  *(undefined8 *)&(this->_OnDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDrop).field_0x10 = 0;
  (this->_Padding).Value.Left = 0.0;
  (this->_Padding).Value.Top = 0.0;
  (this->_Padding).Value.Right = 0.0;
  (this->_Padding).Value.Bottom = 0.0;
  (this->_Padding).bIsSet = true;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  this->_ShowSelection = true;
  this->_ShowWires = false;
  this->_bAllowPreselectedItemActivation = false;
  this->_SignalSelectionMode = Deferred;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 146d03550

FArguments * __thiscall SDrawPrimitiveDebugger::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 146d03570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall SDrawPrimitiveDebuggerListViewRow::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_DrawPrimitiveDebugger).Object = (SDrawPrimitiveDebugger *)0x0;
  (this->_DrawPrimitiveDebugger).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_RowDataPtr).Object = (FPrimitiveInfo *)0x0;
  (this->_RowDataPtr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// FArguments @ 146d035b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall SPrimitiveDebuggerDetailView::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_PrimitiveDebugger).Object = (SDrawPrimitiveDebugger *)0x0;
  (this->_PrimitiveDebugger).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FArguments @ 146d04630

void __thiscall
SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::~FArguments
          (FArguments *this)

{
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
            (&this->_OnKeyDownHandler);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  TAttribute<bool>::~TAttribute<bool>(&this->_IsFocusable);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&this->_ScrollbarVisibility);
  TSharedPtr<SScrollBar,1>::~TSharedPtr<SScrollBar,1>(&this->_ExternalScrollbar);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_HeaderRow).SharedReferenceCount);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnItemsRebuilt);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
            (&this->_OnContextMenuOpening);
  TAttribute<int>::~TAttribute<int>(&this->_MaxPinnedItems);
  TAttribute<float>::~TAttribute<float>(&this->_ItemHeight);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_ListItemsSource_SharedObservableArray).SharedReferenceCount);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnListViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEntryInitialized);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 146d04840

void __thiscall
STableRow<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::~FArguments
          (FArguments *this)

{
  TAlwaysValidWidget::~TAlwaysValidWidget(&this->_Content);
  TAttribute<FMargin>::~TAttribute<FMargin>(&this->_Padding);
  TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>(&this->_OnDrop);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>(&this->_OnDragLeave);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>(&this->_OnDragEnter);
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
            (&this->_OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// operator= @ 146d05df0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SHeaderRow::FColumn::FArguments::operator=(FArguments *this,FArguments *param_1)

{
  FSlateBaseNamedArgs::operator=((FSlateBaseNamedArgs *)this,(FSlateBaseNamedArgs *)param_1);
  this->_ColumnId = param_1->_ColumnId;
  TAttribute<FText>::operator=(&this->_DefaultLabel,&param_1->_DefaultLabel);
  TAttribute<FText>::operator=(&this->_DefaultTooltip,&param_1->_DefaultTooltip);
  TSharedPtr<IToolTip,1>::operator=(&(this->_ToolTip).Value,&(param_1->_ToolTip).Value);
  (this->_ToolTip).bIsSet = (param_1->_ToolTip).bIsSet;
  TDelegate<TSharedPtr<IToolTip,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->_ToolTip).Getter,&(param_1->_ToolTip).Getter);
  TAttribute<float>::operator=(&this->_FillWidth,&param_1->_FillWidth);
  TOptional<float>::operator=(&this->_FixedWidth,&param_1->_FixedWidth);
  TAttribute<float>::operator=(&this->_ManualWidth,&param_1->_ManualWidth);
  TOptional<float>::operator=(&this->_FillSized,&param_1->_FillSized);
  TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::operator=
            (&this->_OnWidthChanged,&param_1->_OnWidthChanged);
  this->_MinSize = param_1->_MinSize;
  TSharedRef<SWidget,1>::operator=(&(this->_HeaderContent).Widget,&(param_1->_HeaderContent).Widget)
  ;
  this->_HAlignHeader = param_1->_HAlignHeader;
  this->_VAlignHeader = param_1->_VAlignHeader;
  TOptional<FMargin>::operator=(&this->_HeaderContentPadding,&param_1->_HeaderContentPadding);
  this->_HeaderComboVisibility = param_1->_HeaderComboVisibility;
  TSharedRef<SWidget,1>::operator=(&(this->_MenuContent).Widget,&(param_1->_MenuContent).Widget);
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->_OnGetMenuContent,&param_1->_OnGetMenuContent);
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=(&this->_OnColumnSplitterDoubleClick,&param_1->_OnColumnSplitterDoubleClick);
  this->_HAlignCell = param_1->_HAlignCell;
  this->_VAlignCell = param_1->_VAlignCell;
  (this->_InitialSortMode).Value = (param_1->_InitialSortMode).Value;
  (this->_InitialSortMode).bIsSet = (param_1->_InitialSortMode).bIsSet;
  TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->_InitialSortMode).Getter,&(param_1->_InitialSortMode).Getter);
  (this->_SortMode).Value = (param_1->_SortMode).Value;
  (this->_SortMode).bIsSet = (param_1->_SortMode).bIsSet;
  TDelegate<enum_EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->_SortMode).Getter,&(param_1->_SortMode).Getter);
  (this->_SortPriority).Value = (param_1->_SortPriority).Value;
  (this->_SortPriority).bIsSet = (param_1->_SortPriority).bIsSet;
  TDelegate<enum_EColumnSortPriority::Type___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->_SortPriority).Getter,&(param_1->_SortPriority).Getter);
  (this->_IsSorting).Value = (param_1->_IsSorting).Value;
  (this->_IsSorting).bIsSet = (param_1->_IsSorting).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->_IsSorting).Getter,&(param_1->_IsSorting).Getter);
  (this->_CanManuallySort).Value = (param_1->_CanManuallySort).Value;
  (this->_CanManuallySort).bIsSet = (param_1->_CanManuallySort).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->_CanManuallySort).Getter,&(param_1->_CanManuallySort).Getter);
  TDelegate<void___cdecl(enum_EColumnSortPriority::Type,FName_const_&,enum_EColumnSortMode::Type),FDefaultDelegateUserPolicy>
  ::operator=(&this->_OnSort,&param_1->_OnSort);
  (this->_ShouldGenerateWidget).Value = (param_1->_ShouldGenerateWidget).Value;
  (this->_ShouldGenerateWidget).bIsSet = (param_1->_ShouldGenerateWidget).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->_ShouldGenerateWidget).Getter,&(param_1->_ShouldGenerateWidget).Getter);
  (this->_ShouldGenerateEmptyWidgetForSpacing).Value =
       (param_1->_ShouldGenerateEmptyWidgetForSpacing).Value;
  (this->_ShouldGenerateEmptyWidgetForSpacing).bIsSet =
       (param_1->_ShouldGenerateEmptyWidgetForSpacing).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->_ShouldGenerateEmptyWidgetForSpacing).Getter,
             &(param_1->_ShouldGenerateEmptyWidgetForSpacing).Getter);
  this->_OverflowPolicy = param_1->_OverflowPolicy;
  return this;
}

// AllowSpin @ 146d09a10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall SNumericEntryBox<int>::FArguments::AllowSpin(FArguments *this,bool param_1)

{
  this->_AllowSpin = param_1;
  return this;
}

// AllowWheel @ 146d09a20

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall SNumericEntryBox<int>::FArguments::AllowWheel(FArguments *this,bool param_1)

{
  this->_AllowWheel = param_1;
  return this;
}

// BodyContent @ 146d09b90

NamedSlotProperty<SExpandableArea::FArguments> * __thiscall
SExpandableArea::FArguments::BodyContent
          (FArguments *this,NamedSlotProperty<SExpandableArea::FArguments> *__return_storage_ptr__)

{
  __return_storage_ptr__->OwnerDeclaration = this;
  __return_storage_ptr__->SlotContent = &this->_BodyContent;
  return __return_storage_ptr__;
}

// ConsumeMouseWheel @ 146d0f2a0

FArguments * __thiscall
SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::ConsumeMouseWheel
          (FArguments *this,EConsumeMouseWheel param_1)

{
  this->_ConsumeMouseWheel = param_1;
  return this;
}

// ConsumeMouseWheel @ 146d0f2b0

FArguments * __thiscall
SScrollBox::FArguments::ConsumeMouseWheel(FArguments *this,EConsumeMouseWheel param_1)

{
  this->_ConsumeMouseWheel = param_1;
  return this;
}

// Delta @ 146d14880

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<int>::FArguments::Delta(FArguments *this,TAttribute<int> *param_1)

{
  (this->_Delta).Value = param_1->Value;
  (this->_Delta).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Delta).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// DrawPrimitiveDebugger @ 146d15440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SDrawPrimitiveDebuggerListViewRow::FArguments::DrawPrimitiveDebugger
          (FArguments *this,TWeakPtr<SDrawPrimitiveDebugger,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SDrawPrimitiveDebugger *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  pSVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->_DrawPrimitiveDebugger).WeakReferenceCount.ReferenceController;
  (this->_DrawPrimitiveDebugger).Object = pSVar4;
  (this->_DrawPrimitiveDebugger).WeakReferenceCount.ReferenceController = pTVar3;
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
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
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
  return this;
}

// ExternalScrollbar @ 146d17c80

FArguments * __thiscall
SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::ExternalScrollbar
          (FArguments *this,TSharedPtr<SScrollBar,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SScrollBar *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController;
  (this->_ExternalScrollbar).Object = pSVar2;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// HAlign @ 146d22890

FArguments * __thiscall SCheckBox::FArguments::HAlign(FArguments *this,EHorizontalAlignment param_1)

{
  this->_HAlign = param_1;
  return this;
}

// HeaderContent @ 146d238a0

NamedSlotProperty<SExpandableArea::FArguments> * __thiscall
SExpandableArea::FArguments::HeaderContent
          (FArguments *this,NamedSlotProperty<SExpandableArea::FArguments> *__return_storage_ptr__)

{
  __return_storage_ptr__->OwnerDeclaration = this;
  __return_storage_ptr__->SlotContent = &this->_HeaderContent;
  return __return_storage_ptr__;
}

// HeaderRow @ 146d238c0

FArguments * __thiscall
SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::HeaderRow
          (FArguments *this,TSharedPtr<SHeaderRow,1> *param_1)

{
  SHeaderRow *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedPtr<SHeaderRow,1> local_18;
  
  pSVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = (this->_HeaderRow).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->_HeaderRow).SharedReferenceCount.ReferenceController;
  (this->_HeaderRow).Object = pSVar1;
  (this->_HeaderRow).SharedReferenceCount.ReferenceController = pTVar2;
  TSharedPtr<SHeaderRow,1>::~TSharedPtr<SHeaderRow,1>(&local_18);
  TSharedPtr<SHeaderRow,1>::~TSharedPtr<SHeaderRow,1>(param_1);
  return this;
}

// InitiallyCollapsed @ 146d239a0

FArguments * __thiscall
SExpandableArea::FArguments::InitiallyCollapsed(FArguments *this,bool param_1)

{
  this->_InitiallyCollapsed = param_1;
  return this;
}

// Justification @ 146d24930

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<int>::FArguments::Justification
          (FArguments *this,TAttribute<ETextJustify::Type> *param_1)

{
  (this->_Justification).Value = param_1->Value;
  (this->_Justification).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// ListItemsSource @ 146d24a90

FArguments * __thiscall
SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::ListItemsSource
          (FArguments *this,
          TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
  local_18;
  
  this->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_> *)
       0x0;
  this->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0;
  local_18.Object = (TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_ListItemsSource_SharedObservableArray != &local_18) {
    (this->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_ListItemsSource_SharedObservableArray).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
  ::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
            (&local_18);
  this->_ListItemsSource_ArrayPointer = param_1;
  return this;
}

// MakeListItemsSource @ 146d27470

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>_>_>
 __thiscall
SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::MakeListItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *pTVar3;
  STableViewBase *pSVar4;
  FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this_00;
  FSharedObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *this_01;
  longlong *in_R8;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<STableViewBase,1> local_18;
  
  if (this->_ListItemsSource_ArrayPointer ==
      (TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_> *)0x0
     ) {
    if (this->_ListItemsSource_ObservableArrayPointer ==
        (TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
      pSVar4 = (STableViewBase *)(this->_ListItemsSource_SharedObservableArray).Object;
      if (pSVar4 == (STableViewBase *)0x0) {
        pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      else {
        pTVar2 = (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.
                 ReferenceController;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        this_01 = ::operator_new(0x30);
        if (this_01 ==
            (FSharedObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
          pSVar4 = (STableViewBase *)0x0;
        }
        else {
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_18.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          local_18.Object = (STableViewBase *)*in_R8;
          if (local_18.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = pSVar4;
          local_28.SharedReferenceCount.ReferenceController = pTVar2;
          pSVar4 = (STableViewBase *)
                   UE::Slate::ItemsSource::
                   FSharedObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
                   FSharedObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
                             (this_01,&local_18,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,1>
                               *)&local_28);
        }
        param_1->Object = pSVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)in_R8[1]);
      }
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>_>_>
              )(IItemsSource<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)param_1;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 !=
        (FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)0x0) {
      local_28.Object = (STableViewBase *)*in_R8;
      pTVar3 = this->_ListItemsSource_ObservableArrayPointer;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar4 = (STableViewBase *)
               UE::Slate::ItemsSource::
               FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::
               FObservableArrayPointer<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>
                         (this_00,&local_28,pTVar3);
      goto LAB_146d274db;
    }
  }
  else {
    pSVar4 = ::operator_new(0x10);
    if (pSVar4 != (STableViewBase *)0x0) {
      pTVar1 = this->_ListItemsSource_ArrayPointer;
      *(undefined ***)pSVar4 =
           &
           ___7__FArrayPointer_V__TSharedPtr___CBUFPrimitiveInfo_FViewDebugInfo___00___ItemsSource_Slate_UE__6B_
      ;
      *(TArray<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>,TSizedDefaultAllocator<32>_> **)
       &pSVar4->field_0x8 = pTVar1;
      pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>_>_>
              )(IItemsSource<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)param_1;
    }
  }
  pSVar4 = (STableViewBase *)0x0;
LAB_146d274db:
  pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = pSVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>_>_>
          )(IItemsSource<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_> *)param_1;
}

// MinSliderValue @ 146d27800

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<int>::FArguments::MinSliderValue
          (FArguments *this,TAttribute<TOptional<int>_> *param_1)

{
  if (param_1 != &this->_MinSliderValue) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->_MinSliderValue).Value.bIsSet != false) {
        (this->_MinSliderValue).Value.bIsSet = false;
      }
    }
    else {
      (this->_MinSliderValue).Value.TypedValue = (param_1->Value).TypedValue;
      (this->_MinSliderValue).Value.bIsSet = true;
    }
  }
  (this->_MinSliderValue).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSliderValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(param_1);
  return this;
}

// MinValue @ 146d27870

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<int>::FArguments::MinValue(FArguments *this,TAttribute<TOptional<int>_> *param_1)

{
  if (param_1 != &this->_MinValue) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->_MinValue).Value.bIsSet != false) {
        (this->_MinValue).Value.bIsSet = false;
      }
    }
    else {
      (this->_MinValue).Value.TypedValue = (param_1->Value).TypedValue;
      (this->_MinValue).Value.bIsSet = true;
    }
  }
  (this->_MinValue).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(param_1);
  return this;
}

// Orientation @ 146d2bf90

FArguments * __thiscall
SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::Orientation
          (FArguments *this,EOrientation param_1)

{
  this->_Orientation = param_1;
  return this;
}

// Orientation @ 146d2bfa0

FArguments * __thiscall SScrollBar::FArguments::Orientation(FArguments *this,EOrientation param_1)

{
  this->_Orientation = param_1;
  return this;
}

// Orientation @ 146d2bfb0

FArguments * __thiscall SScrollBox::FArguments::Orientation(FArguments *this,EOrientation param_1)

{
  this->_Orientation = param_1;
  return this;
}

// OverflowPolicy @ 146d2bfc0

FArguments * __thiscall
STextBlock::FArguments::OverflowPolicy(FArguments *this,TOptional<ETextOverflowPolicy> param_1)

{
  undefined6 in_register_00000012;
  
  if ((TOptional<ETextOverflowPolicy> *)CONCAT62(in_register_00000012,param_1) !=
      &this->_OverflowPolicy) {
    if (*(char *)(CONCAT62(in_register_00000012,param_1) + 1) == '\0') {
      if ((this->_OverflowPolicy).bIsSet != false) {
        (this->_OverflowPolicy).bIsSet = false;
        return this;
      }
    }
    else {
      (this->_OverflowPolicy).TypedValue =
           *(ETextOverflowPolicy *)CONCAT62(in_register_00000012,param_1);
      (this->_OverflowPolicy).bIsSet = true;
    }
  }
  return this;
}

// Padding @ 146d2c000

FArguments * __thiscall
SExpandableArea::FArguments::Padding(FArguments *this,TAttribute<FMargin> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_1->Value).Top;
  fVar2 = (param_1->Value).Right;
  fVar3 = (param_1->Value).Bottom;
  (this->_Padding).Value.Left = (param_1->Value).Left;
  (this->_Padding).Value.Top = fVar1;
  (this->_Padding).Value.Right = fVar2;
  (this->_Padding).Value.Bottom = fVar3;
  (this->_Padding).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return this;
}

// PrimitiveDebugger @ 146d2c500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SPrimitiveDebuggerDetailView::FArguments::PrimitiveDebugger
          (FArguments *this,TWeakPtr<SDrawPrimitiveDebugger,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SDrawPrimitiveDebugger *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  pSVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->_PrimitiveDebugger).WeakReferenceCount.ReferenceController;
  (this->_PrimitiveDebugger).Object = pSVar4;
  (this->_PrimitiveDebugger).WeakReferenceCount.ReferenceController = pTVar3;
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
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
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
  return this;
}

// ResizeMode @ 146d30cd0

FArguments * __thiscall SHeaderRow::FArguments::ResizeMode(FArguments *this,Type param_1)

{
  this->_ResizeMode = param_1;
  return this;
}

// RowDataPtr @ 146d30cf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FArguments * __thiscall
SDrawPrimitiveDebuggerListViewRow::FArguments::RowDataPtr
          (FArguments *this,TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FPrimitiveInfo *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_RowDataPtr).SharedReferenceCount.ReferenceController;
  (this->_RowDataPtr).Object = pFVar2;
  (this->_RowDataPtr).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// SelectionMode @ 146d31f90

FArguments * __thiscall
SListView<TSharedPtr<FViewDebugInfo::FPrimitiveInfo_const_,1>_>::FArguments::SelectionMode
          (FArguments *this,TAttribute<ESelectionMode::Type> *param_1)

{
  (this->_SelectionMode).Value = param_1->Value;
  (this->_SelectionMode).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TAttribute<enum_ESelectionMode::Type>::~TAttribute<enum_ESelectionMode::Type>(param_1);
  return this;
}

// UndeterminedString @ 146d33e00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<int>::FArguments::UndeterminedString(FArguments *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->_UndeterminedString).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->_UndeterminedString).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->_UndeterminedString).Flags = param_1->Flags;
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return this;
}

// WheelStep @ 146d37120

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<int>::FArguments::WheelStep(FArguments *this,TAttribute<TOptional<int>_> *param_1)

{
  if (param_1 != &this->_WheelStep) {
    if ((param_1->Value).bIsSet == false) {
      if ((this->_WheelStep).Value.bIsSet != false) {
        (this->_WheelStep).Value.bIsSet = false;
      }
    }
    else {
      (this->_WheelStep).Value.TypedValue = (param_1->Value).TypedValue;
      (this->_WheelStep).Value.bIsSet = true;
    }
  }
  (this->_WheelStep).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WheelStep).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TAttribute<TOptional<int>_>::~TAttribute<TOptional<int>_>(param_1);
  return this;
}

