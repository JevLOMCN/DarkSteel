// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 50

// Image<SSidebarButton> @ 142d58f00

FArguments * __thiscall
SImage::FArguments::Image<SSidebarButton>
          (FArguments *this,SSidebarButton *param_1,pmf_49ec6536 *param_2)

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
  (this->_Image).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Image).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Image).Getter.field_0x8;
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
              ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSidebarButton___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
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

// IsChecked<SSidebarButton> @ 142d59630

FArguments * __thiscall
SCheckBox::FArguments::IsChecked<SSidebarButton>
          (FArguments *this,SSidebarButton *param_1,pmf_5660de24 *param_2)

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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSSidebarButton___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
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

// OnCheckStateChanged<SSidebarButton> @ 142d5a950

FArguments * __thiscall
SCheckBox::FArguments::OnCheckStateChanged<SSidebarButton>
          (FArguments *this,SSidebarButton *param_1,pmf_c439c63c *param_2)

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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnCheckStateChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnCheckStateChanged).field_0x8;
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
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSSidebarButton___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
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

// OnClicked<SCustomTextFilterDialog> @ 142d5aa80

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnClicked<SCustomTextFilterDialog>
          (FArguments *this,SCustomTextFilterDialog *param_1,pmf_3ad0ec8c *param_2)

{
  pmf_3ad0ec8c local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<SCustomTextFilterDialog>
            ((TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_OnClicked,param_1,&local_18);
  return this;
}

// OnClicked<SCustomTextFilterDialog> @ 142d5aac0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SPrimaryButton::FArguments::OnClicked<SCustomTextFilterDialog>
          (FArguments *this,SCustomTextFilterDialog *param_1,pmf_3ad0ec8c *param_2)

{
  pmf_3ad0ec8c local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<SCustomTextFilterDialog>
            ((TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_OnClicked,param_1,&local_18);
  return this;
}

// OnClicked<SCustomTextFilterDialog,bool> @ 142d5ab00

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnClicked<SCustomTextFilterDialog,bool>
          (FArguments *this,SCustomTextFilterDialog *param_1,pmf_c06f9b70 *param_2,bool param_3)

{
  bool local_res20 [8];
  pmf_c06f9b70 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_res20[0] = param_3;
  TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<SCustomTextFilterDialog,bool_&>
            ((TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_OnClicked,param_1,&local_18,local_res20);
  return this;
}

// OnClicked<SCustomTextFilterDialog,bool> @ 142d5ab40

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SPrimaryButton::FArguments::OnClicked<SCustomTextFilterDialog,bool>
          (FArguments *this,SCustomTextFilterDialog *param_1,pmf_c06f9b70 *param_2,bool param_3)

{
  bool local_res20 [8];
  pmf_c06f9b70 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_res20[0] = param_3;
  TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
  BindSP<SCustomTextFilterDialog,bool_&>
            ((TDelegateRegistration<FReply___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->_OnClicked,param_1,&local_18,local_res20);
  return this;
}

// OnGetContextMenuContent<SSidebar,TSharedRef<FSidebarDrawer,1>_> @ 142d5ab80

FArguments * __thiscall
SSidebarButton::FArguments::OnGetContextMenuContent<SSidebar,TSharedRef<FSidebarDrawer,1>_>
          (FArguments *this,SSidebar *param_1,pmf_97f62f56 *param_2,
          TSharedRef<FSidebarDrawer,1> *param_3)

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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->_OnGetContextMenuContent,(FWriteAccessScope *)&local_48);
  local_30 = &(this->_OnGetContextMenuContent).field_0x8;
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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__V__TSharedRef_VFSidebarDrawer___00____6B_
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSSidebar___00__A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy__V__TSharedRef_VFSidebarDrawer___00____6B_
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

// FArguments @ 142d607c0

FArguments * __thiscall SListView<TSharedPtr<FText,1>_>::FArguments::FArguments(FArguments *this)

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
       (TObservableArray<TSharedPtr<FText,1>_> *)0x0;
  (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 0.0;
  (this->_ItemHeight).bIsSet = false;
  this->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FText,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_ListItemsSource_ObservableArrayPointer = (TObservableArray<TSharedPtr<FText,1>_> *)0x0;
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
    if (!bVar3) goto LAB_142d60aad;
  }
  lVar8 = 0;
LAB_142d60aad:
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

// FArguments @ 142d60b70

FArguments * __thiscall
SListView<TSharedRef<CheckBoxList::FItemPair,1>_>::FArguments::FArguments(FArguments *this)

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
       (TObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0;
  (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 0.0;
  (this->_ItemHeight).bIsSet = false;
  this->_ListItemsSource_ArrayPointer =
       (TArray<TSharedRef<CheckBoxList::FItemPair,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0;
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
    if (!bVar3) goto LAB_142d60e5d;
  }
  lVar8 = 0;
LAB_142d60e5d:
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

// FArguments @ 142d60f20

FArguments * __thiscall STableRow<TSharedPtr<FText,1>_>::FArguments::FArguments(FArguments *this)

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

// FArguments @ 142d61090

FArguments * __thiscall
STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::FArguments::FArguments(FArguments *this)

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

// FArguments @ 142d61200

FArguments * __thiscall SActionButton::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_ActionButtonType).Value = Default;
  (this->_ActionButtonType).bIsSet = false;
  this->_ActionButtonStyle = (FActionButtonStyle *)0x0;
  *(undefined8 *)&(this->_ActionButtonType).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ActionButtonType).Getter = 0;
  *(undefined8 *)&(this->_ActionButtonType).Getter.field_0x8 = 0;
  (this->_ButtonContentPadding).bIsSet = false;
  this->_ButtonStyle = (FButtonStyle *)0x0;
  this->_IconButtonStyle = (FButtonStyle *)0x0;
  (this->_ButtonContentPadding).Value.Left = 0.0;
  (this->_ButtonContentPadding).Value.Top = 0.0;
  (this->_ButtonContentPadding).Value.Right = 0.0;
  (this->_ButtonContentPadding).Value.Bottom = 0.0;
  *(undefined8 *)&(this->_ButtonContentPadding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ButtonContentPadding).Getter = 0;
  *(undefined8 *)&(this->_ButtonContentPadding).Getter.field_0x8 = 0;
  this->_ComboButtonStyle = (FComboButtonStyle *)0x0;
  (this->_HasDownArrow).bIsSet = false;
  (this->_HorizontalContentAlignment).bIsSet = false;
  FText::FText(&(this->_Text).Value);
  (this->_Text).bIsSet = false;
  *(undefined8 *)&(this->_Text).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Text).Getter = 0;
  *(undefined8 *)&(this->_Text).Getter.field_0x8 = 0;
  this->_TextBlockStyle = (FTextBlockStyle *)0x0;
  (this->_Icon).Value = (FSlateBrush *)0x0;
  (this->_Icon).bIsSet = false;
  *(undefined8 *)&(this->_Icon).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Icon).Getter = 0;
  *(undefined8 *)&(this->_Icon).Getter.field_0x8 = 0;
  (this->_IconColorAndOpacity).Value.ColorUseRule = UseColor_Specified;
  (this->_IconColorAndOpacity).bIsSet = false;
  *(undefined8 *)&(this->_IconColorAndOpacity).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->_IconColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->_IconColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->_IconColorAndOpacity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IconColorAndOpacity).Getter = 0;
  *(undefined8 *)&(this->_IconColorAndOpacity).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnClicked = 0;
  *(undefined8 *)&(this->_OnClicked).field_0x8 = 0;
  *(undefined4 *)&(this->_OnClicked).field_0x10 = 0;
  (this->_MenuContent).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_MenuContent).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  *(undefined8 *)&this->_OnGetMenuContent = 0;
  *(undefined8 *)&(this->_OnGetMenuContent).field_0x8 = 0;
  *(undefined4 *)&(this->_OnGetMenuContent).field_0x10 = 0;
  *(undefined8 *)&this->_OnComboBoxOpened = 0;
  *(undefined8 *)&(this->_OnComboBoxOpened).field_0x8 = 0;
  *(undefined4 *)&(this->_OnComboBoxOpened).field_0x10 = 0;
  *(undefined8 *)&this->_OnMenuOpenChanged = 0;
  *(undefined8 *)&(this->_OnMenuOpenChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnMenuOpenChanged).field_0x10 = 0;
  return this;
}

// FArguments @ 142d613b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArguments * __thiscall SCustomDialog::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  longlong *this_00;
  double dVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  FSharedReferencer<1> FVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_88 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  ForAnyElementType FStack_60;
  ulonglong local_58;
  FText local_50;
  bool local_40;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  FDestructionSentinel local_20;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  FText::FText(&this->_Title);
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar5 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  (this->_Buttons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_Buttons).ArrayNum = 0;
  (this->_Buttons).ArrayMax = 0;
  *(undefined8 *)&this->_OnClosed = 0;
  *(undefined8 *)&(this->_OnClosed).field_0x8 = 0;
  *(undefined4 *)&(this->_OnClosed).field_0x10 = 0;
  SWindow::FArguments::FArguments(&this->_WindowArguments);
  (this->_Icon).Value = (FSlateBrush *)0x0;
  (this->_Icon).bIsSet = true;
  this->_AutoCloseOnButtonPress = true;
  *(undefined8 *)&(this->_Icon).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Icon).Getter = 0;
  *(undefined8 *)&(this->_Icon).Getter.field_0x8 = 0;
  (this->_IconDesiredSizeOverride).Value.bIsSet = false;
  (this->_IconDesiredSizeOverride).bIsSet = false;
  *(undefined8 *)&(this->_IconDesiredSizeOverride).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IconDesiredSizeOverride).Getter = 0;
  *(undefined8 *)&(this->_IconDesiredSizeOverride).Getter.field_0x8 = 0;
  this->_HAlignIcon = HAlign_Left;
  this->_VAlignIcon = VAlign_Center;
  (this->_BeforeButtons).Widget.Object = SNullWidget::NullWidget.Object;
  FVar5 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_BeforeButtons).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar5.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  uVar4 = _UNK_1509253f8;
  uVar7 = ___xmm_40800000408000004080000040800000;
  this->_HAlignButtonBox = HAlign_Fill;
  uVar6 = ___xmm_40800000408000004080000040800000;
  this->_VAlignButtonBox = VAlign_Fill;
  ___xmm_40800000408000004080000040800000 = (undefined4)uVar7;
  _UNK_1509253f4 = SUB84(uVar7,4);
  uVar3 = _UNK_1509253f4;
  (this->_RootPadding).Value.Left = (float)___xmm_40800000408000004080000040800000;
  ___xmm_40800000408000004080000040800000 = uVar6;
  uVar7 = _UNK_1509253f8;
  (this->_RootPadding).Value.Top = (float)uVar3;
  _UNK_1509253f8 = (undefined4)uVar4;
  _UNK_1509253fc = SUB84(uVar4,4);
  uVar3 = _UNK_1509253fc;
  (this->_RootPadding).Value.Right = (float)_UNK_1509253f8;
  _UNK_1509253f8 = uVar7;
  (this->_RootPadding).Value.Bottom = (float)uVar3;
  (this->_RootPadding).bIsSet = true;
  *(undefined8 *)&(this->_RootPadding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_RootPadding).Getter = 0;
  *(undefined8 *)&(this->_RootPadding).Getter.field_0x8 = 0;
  (this->_ButtonAreaPadding).Value.Left = 20.0;
  (this->_ButtonAreaPadding).Value.Top = 16.0;
  (this->_ButtonAreaPadding).Value.Right = 0.0;
  (this->_ButtonAreaPadding).Value.Bottom = 0.0;
  local_88[0] = local_88[0] | 1;
  (this->_ButtonAreaPadding).bIsSet = true;
  *(undefined8 *)&(this->_ButtonAreaPadding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ButtonAreaPadding).Getter = 0;
  *(undefined8 *)&(this->_ButtonAreaPadding).Getter.field_0x8 = 0;
  (this->_ContentAreaPadding).bIsSet = false;
  *(undefined8 *)&(this->_ContentAreaPadding).Getter.field_0x8 = 0;
  (this->_ContentAreaPadding).Value.Left = 0.0;
  (this->_ContentAreaPadding).Value.Top = 0.0;
  (this->_ContentAreaPadding).Value.Right = 0.0;
  (this->_ContentAreaPadding).Value.Bottom = 0.0;
  *(undefined8 *)&(this->_ContentAreaPadding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ContentAreaPadding).Getter = 0;
  this->_UseScrollBox = true;
  this->_ScrollBoxMaxHeight = 300.0;
  this->_HAlignContent = HAlign_Left;
  this->_VAlignContent = VAlign_Center;
  uVar3 = UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X;
  dVar2 = (double)UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y;
  *(undefined8 *)&this->_OnCancelHotkeyPressed = 0;
  *(undefined8 *)&(this->_OnCancelHotkeyPressed).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCancelHotkeyPressed).field_0x10 = 0;
  *(undefined8 *)&this->_OnConfirmHotkeyPressed = 0;
  *(undefined8 *)&(this->_OnConfirmHotkeyPressed).field_0x8 = 0;
  *(undefined4 *)&(this->_OnConfirmHotkeyPressed).field_0x10 = 0;
  *(undefined8 *)&this->_GetWidgetToFocusOnActivate = 0;
  *(undefined8 *)&(this->_GetWidgetToFocusOnActivate).field_0x8 = 0;
  *(undefined4 *)&(this->_GetWidgetToFocusOnActivate).field_0x10 = 0;
  (this->_DialogContent).Object = (SWidget *)0x0;
  (this->_ClientSize).field0_0x0._s_0.Y = dVar2;
  (this->_ClientSize).field0_0x0._s_0.X = (double)(float)uVar3;
  (this->_DialogContent).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_88[1] = Auto;
  local_88[2] = Auto;
  FText::FText((FText *)(local_88 + 8));
  local_88[0x18] = false;
  local_58 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_60.Data = (FScriptContainerElement *)0x0;
  FText::FText(&local_50);
  local_40 = false;
  this_00 = &this->_padding_;
  local_28 = 0;
  local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  if ((longlong *)local_88 != this_00) {
    if ((char)this->_padding_ != '\0') {
      FAccessibleWidgetData::~FAccessibleWidgetData((FAccessibleWidgetData *)this_00);
    }
    FAccessibleWidgetData::FAccessibleWidgetData
              ((FAccessibleWidgetData *)this_00,(FAccessibleWidgetData *)local_88);
    *(undefined1 *)&this->_padding_ = 1;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_38,(FWriteAccessScope *)&local_20);
  if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_20);
  if (((int)local_58 != 0) && (FStack_60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_60,0,0,0x10);
    local_58 = local_58 & 0xffffffff00000000;
  }
  if (local_20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
  }
  if (FStack_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  if ((ITextData *)local_88._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_88._8_8_ + 0x10))();
  }
  return this;
}

// FArguments @ 142d61770

FArguments * __thiscall UE::ToolWidgets::SDraggableBox::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
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
  (this->_IsDraggable).Value = true;
  (this->_IsDraggable).bIsSet = true;
  *(undefined8 *)&(this->_IsDraggable).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_IsDraggable).Getter = 0;
  *(undefined8 *)&(this->_IsDraggable).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnUserDraggedToNewPosition = 0;
  *(undefined8 *)&(this->_OnUserDraggedToNewPosition).field_0x8 = 0;
  *(undefined4 *)&(this->_OnUserDraggedToNewPosition).field_0x10 = 0;
  return this;
}

// FArguments @ 142d617f0

FArguments * __thiscall SDrawerOverlay::FArguments::FArguments(FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
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
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  *(undefined8 *)&this->_OnTargetHeightChanged = 0;
  *(undefined8 *)&(this->_OnTargetHeightChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnTargetHeightChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnDismissComplete = 0;
  *(undefined8 *)&(this->_OnDismissComplete).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDismissComplete).field_0x10 = 0;
  *(undefined4 *)&this->_ShadowOffset = 0x41200000;
  *(undefined4 *)&(this->_ShadowOffset).field_0x4 = 0x41a00000;
  return this;
}

// FArguments @ 142d61880

FArguments * __thiscall SFilterSearchBoxImpl::FArguments::FArguments(FArguments *this)

{
  FText *pFVar1;
  FText local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"CustomTextFilter",L"SearchHint",L"Search");
  FText::FText(&(this->_HintText).Value,pFVar1);
  (this->_HintText).bIsSet = true;
  *(undefined8 *)&(this->_HintText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HintText).Getter = 0;
  *(undefined8 *)&(this->_HintText).Getter.field_0x8 = 0;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  FText::FText(&(this->_InitialText).Value);
  (this->_InitialText).bIsSet = false;
  *(undefined8 *)&(this->_InitialText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_InitialText).Getter = 0;
  *(undefined8 *)&(this->_InitialText).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnTextChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnTextChanged = 0;
  *(undefined8 *)&(this->_OnTextChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnTextCommitted).field_0x10 = 0;
  *(undefined8 *)&this->_OnTextCommitted = 0;
  *(undefined8 *)&(this->_OnTextCommitted).field_0x8 = 0;
  (this->_DelayChangeNotificationsWhileTyping).Value = true;
  (this->_DelayChangeNotificationsWhileTyping).bIsSet = true;
  *(undefined8 *)&(this->_DelayChangeNotificationsWhileTyping).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_DelayChangeNotificationsWhileTyping).Getter = 0;
  *(undefined8 *)&(this->_DelayChangeNotificationsWhileTyping).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnKeyDownHandler = 0;
  *(undefined8 *)&(this->_OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->_OnKeyDownHandler).field_0x10 = 0;
  *(undefined8 *)&this->_OnSaveSearchClicked = 0;
  *(undefined8 *)&(this->_OnSaveSearchClicked).field_0x8 = 0;
  *(undefined4 *)&(this->_OnSaveSearchClicked).field_0x10 = 0;
  *(undefined8 *)&this->_OnSearchHistoryClicked = 0;
  *(undefined8 *)&(this->_OnSearchHistoryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->_OnSearchHistoryClicked).field_0x10 = 0;
  *(undefined8 *)&this->_GetSearchHistoryVisibility = 0;
  *(undefined8 *)&(this->_GetSearchHistoryVisibility).field_0x8 = 0;
  *(undefined4 *)&(this->_GetSearchHistoryVisibility).field_0x10 = 0;
  return this;
}

// FArguments @ 142d619d0

FArguments * __thiscall CheckBoxList::SItemPair::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  *(undefined8 *)&this->_OnCheckUpdated = 0;
  *(undefined8 *)&(this->_OnCheckUpdated).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCheckUpdated).field_0x10 = 0;
  return this;
}

// FArguments @ 142d61a10

FArguments * __thiscall SPrimaryButton::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  FText::FText(&(this->_Text).Value);
  (this->_Text).bIsSet = false;
  *(undefined8 *)&(this->_Text).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Text).Getter = 0;
  *(undefined8 *)&(this->_Text).Getter.field_0x8 = 0;
  (this->_Icon).Value = (FSlateBrush *)0x0;
  (this->_Icon).bIsSet = false;
  *(undefined8 *)&(this->_Icon).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Icon).Getter = 0;
  *(undefined8 *)&(this->_Icon).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnClicked = 0;
  *(undefined8 *)&(this->_OnClicked).field_0x8 = 0;
  *(undefined4 *)&(this->_OnClicked).field_0x10 = 0;
  return this;
}

// FArguments @ 142d61aa0

FArguments * __thiscall SRichTextBlock::FArguments::FArguments(FArguments *this)

{
  ISlateStyle *pIVar1;
  FName *pFVar2;
  FTextBlockStyle *pFVar3;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  FText::FText(&(this->_Text).Value);
  (this->_Text).bIsSet = false;
  *(undefined8 *)&(this->_Text).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Text).Getter = 0;
  *(undefined8 *)&(this->_Text).Getter.field_0x8 = 0;
  FText::FText(&(this->_HighlightText).Value);
  (this->_HighlightText).bIsSet = false;
  *(undefined8 *)&(this->_HighlightText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HighlightText).Getter = 0;
  *(undefined8 *)&(this->_HighlightText).Getter.field_0x8 = 0;
  (this->_WrapTextAt).Value = 0.0;
  (this->_WrapTextAt).bIsSet = true;
  *(undefined8 *)&(this->_WrapTextAt).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_WrapTextAt).Getter = 0;
  *(undefined8 *)&(this->_WrapTextAt).Getter.field_0x8 = 0;
  (this->_AutoWrapText).Value = false;
  (this->_AutoWrapText).bIsSet = true;
  *(undefined8 *)&(this->_AutoWrapText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_AutoWrapText).Getter = 0;
  *(undefined8 *)&(this->_AutoWrapText).Getter.field_0x8 = 0;
  (this->_WrappingPolicy).Value = DefaultWrapping;
  (this->_WrappingPolicy).bIsSet = true;
  *(undefined8 *)&(this->_WrappingPolicy).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_WrappingPolicy).Getter = 0;
  *(undefined8 *)&(this->_WrappingPolicy).Getter.field_0x8 = 0;
  (this->_TransformPolicy).Value = None;
  (this->_TransformPolicy).bIsSet = true;
  *(undefined8 *)&(this->_TransformPolicy).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_TransformPolicy).Getter = 0;
  *(undefined8 *)&(this->_TransformPolicy).Getter.field_0x8 = 0;
  (this->_Marshaller).Object = (FRichTextLayoutMarshaller *)0x0;
  (this->_Marshaller).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->_CreateSlateTextLayout = 0;
  *(undefined8 *)&(this->_CreateSlateTextLayout).field_0x8 = 0;
  *(undefined4 *)&(this->_CreateSlateTextLayout).field_0x10 = 0;
  pIVar1 = FAppStyle::Get();
  this->_DecoratorStyleSet = pIVar1;
  pIVar1 = FAppStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,"NormalText");
  pFVar3 = (FTextBlockStyle *)
           (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,FTextBlockStyle::TypeName,*pFVar2,0,1);
  if (pFVar3 == (FTextBlockStyle *)0x0) {
    pFVar3 = FTextBlockStyle::GetDefault();
  }
  this->_TextStyle = pFVar3;
  (this->_Margin).Value.Left = 0.0;
  (this->_Margin).Value.Top = 0.0;
  (this->_Margin).Value.Right = 0.0;
  (this->_Margin).Value.Bottom = 0.0;
  (this->_Margin).bIsSet = true;
  *(undefined8 *)&(this->_Margin).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Margin).Getter = 0;
  *(undefined8 *)&(this->_Margin).Getter.field_0x8 = 0;
  (this->_LineHeightPercentage).Value = 1.0;
  (this->_LineHeightPercentage).bIsSet = true;
  *(undefined8 *)&(this->_LineHeightPercentage).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_LineHeightPercentage).Getter = 0;
  *(undefined8 *)&(this->_LineHeightPercentage).Getter.field_0x8 = 0;
  (this->_ApplyLineHeightToBottomLine).Value = true;
  (this->_ApplyLineHeightToBottomLine).bIsSet = true;
  *(undefined8 *)&(this->_ApplyLineHeightToBottomLine).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ApplyLineHeightToBottomLine).Getter = 0;
  *(undefined8 *)&(this->_ApplyLineHeightToBottomLine).Getter.field_0x8 = 0;
  (this->_Justification).Value = Left;
  (this->_Justification).bIsSet = true;
  *(undefined8 *)&(this->_Justification).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Justification).Getter = 0;
  *(undefined8 *)&(this->_Justification).Getter.field_0x8 = 0;
  (this->_TextShapingMethod).bIsSet = false;
  (this->_TextFlowDirection).bIsSet = false;
  (this->_Decorators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_Decorators).ArrayNum = 0;
  (this->_Decorators).ArrayMax = 0;
  (this->_Parser).Object = (IRichTextMarkupParser *)0x0;
  (this->_Parser).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->_OverflowPolicy).bIsSet = false;
  (this->_MinDesiredWidth).Value = 0.0;
  (this->_MinDesiredWidth).bIsSet = false;
  *(undefined8 *)&(this->_MinDesiredWidth).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinDesiredWidth).Getter = 0;
  *(undefined8 *)&(this->_MinDesiredWidth).Getter.field_0x8 = 0;
  (this->InlineDecorators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InlineDecorators).ArrayNum = 0;
  (this->InlineDecorators).ArrayMax = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 4;
  return this;
}

// FArguments @ 142d61d10

FArguments * __thiscall SSidebarButton::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  *(undefined8 *)&this->_OnPressed = 0;
  *(undefined8 *)&(this->_OnPressed).field_0x8 = 0;
  *(undefined4 *)&(this->_OnPressed).field_0x10 = 0;
  *(undefined8 *)&this->_OnPinToggled = 0;
  *(undefined8 *)&(this->_OnPinToggled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnPinToggled).field_0x10 = 0;
  *(undefined8 *)&this->_OnDockToggled = 0;
  *(undefined8 *)&(this->_OnDockToggled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDockToggled).field_0x10 = 0;
  *(undefined8 *)&this->_OnGetContextMenuContent = 0;
  *(undefined8 *)&(this->_OnGetContextMenuContent).field_0x8 = 0;
  *(undefined4 *)&(this->_OnGetContextMenuContent).field_0x10 = 0;
  return this;
}

// FArguments @ 142d61d80

FArguments * __thiscall SSidebarButtonText::FArguments::FArguments(FArguments *this)

{
  ISlateStyle *pIVar1;
  FName *pFVar2;
  FTextBlockStyle *pFVar3;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  FText::FText(&(this->_Text).Value);
  (this->_Text).bIsSet = false;
  *(undefined8 *)&(this->_Text).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Text).Getter = 0;
  *(undefined8 *)&(this->_Text).Getter.field_0x8 = 0;
  pIVar1 = FAppStyle::Get();
  pFVar2 = ::FName::FName(&local_res8,L"NormalText");
  pFVar3 = (FTextBlockStyle *)
           (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,FTextBlockStyle::TypeName,*pFVar2,0,1);
  if (pFVar3 == (FTextBlockStyle *)0x0) {
    pFVar3 = FTextBlockStyle::GetDefault();
  }
  this->_TextStyle = pFVar3;
  (this->_AngleDegrees).Value = 0.0;
  (this->_AngleDegrees).bIsSet = true;
  *(undefined8 *)&(this->_AngleDegrees).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_AngleDegrees).Getter = 0;
  *(undefined8 *)&(this->_AngleDegrees).Getter.field_0x8 = 0;
  (this->_OverflowPolicy).bIsSet = false;
  return this;
}

// FArguments @ 142d61e50

FArguments * __thiscall SSidebarDrawer::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this->_ShadowOffset = (FDeprecateSlateVector2D)0x4100000041000000;
  *(undefined8 *)&this->_OnDrawerSizeChanged = 0;
  *(undefined8 *)&(this->_OnDrawerSizeChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDrawerSizeChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnDrawerFocused = 0;
  *(undefined8 *)&(this->_OnDrawerFocused).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDrawerFocused).field_0x10 = 0;
  *(undefined8 *)&this->_OnDrawerFocusLost = 0;
  *(undefined8 *)&(this->_OnDrawerFocusLost).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDrawerFocusLost).field_0x10 = 0;
  *(undefined8 *)&this->_OnOpenAnimationFinish = 0;
  *(undefined8 *)&(this->_OnOpenAnimationFinish).field_0x8 = 0;
  *(undefined4 *)&(this->_OnOpenAnimationFinish).field_0x10 = 0;
  *(undefined8 *)&this->_OnCloseAnimationFinish = 0;
  *(undefined8 *)&(this->_OnCloseAnimationFinish).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCloseAnimationFinish).field_0x10 = 0;
  this->_ExpanderHandleSize = 5.0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 142d61f00

FArguments * __thiscall SSidebarDrawerContent::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 142d61f20

FArguments * __thiscall SWidgetSwitcher::FArguments::FArguments(FArguments *this)

{
  FDestructionSentinel local_48;
  uchar local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_WidgetIndex).bIsSet = true;
  (this->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_Slots).ArrayNum = 0;
  (this->_Slots).ArrayMax = 0;
  (this->_WidgetIndex).Value = 0;
  *(undefined8 *)&(this->_WidgetIndex).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_WidgetIndex).Getter = 0;
  *(undefined8 *)&(this->_WidgetIndex).Getter.field_0x8 = 0;
  local_30 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  *(TEnumAsByte<EVisibility::Private> *)&this->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  local_2f = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// FArguments @ 142d62030

FArguments * __thiscall SWindow::FArguments::FArguments(FArguments *this,FArguments *param_1)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  bool bVar2;
  ITextData *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_res8 [8];
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs
            ((FSlateBaseNamedArgs *)this,(FSlateBaseNamedArgs *)param_1);
  this->_Type = param_1->_Type;
  this->_Style = param_1->_Style;
  (this->_Title).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_1->_Title).Value.TextData.Reference;
  (this->_Title).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  pTVar1 = &(this->_Title).Getter;
  (this->_Title).Value.Flags = (param_1->_Title).Value.Flags;
  (this->_Title).bIsSet = (param_1->_Title).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->_Title).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->_Title).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->_Title).Getter);
  this->_bDragAnywhere = param_1->_bDragAnywhere;
  this->_AutoCenter = param_1->_AutoCenter;
  this->_ScreenPosition = param_1->_ScreenPosition;
  this->_ClientSize = param_1->_ClientSize;
  this->_AdjustInitialSizeAndPositionForDPIScale = param_1->_AdjustInitialSizeAndPositionForDPIScale
  ;
  (this->_SupportsTransparency).Value = (param_1->_SupportsTransparency).Value;
  this->_InitialOpacity = param_1->_InitialOpacity;
  this->_IsInitiallyMaximized = param_1->_IsInitiallyMaximized;
  this->_IsInitiallyMinimized = param_1->_IsInitiallyMinimized;
  this->_SizingRule = param_1->_SizingRule;
  this->_IsPopupWindow = param_1->_IsPopupWindow;
  this->_IsTopmostWindow = param_1->_IsTopmostWindow;
  this->_FocusWhenFirstShown = param_1->_FocusWhenFirstShown;
  this->_FocusUserIndex = param_1->_FocusUserIndex;
  this->_ActivationPolicy = param_1->_ActivationPolicy;
  this->_UseOSWindowBorder = param_1->_UseOSWindowBorder;
  this->_HasCloseButton = param_1->_HasCloseButton;
  this->_SupportsMaximize = param_1->_SupportsMaximize;
  this->_SupportsMinimize = param_1->_SupportsMinimize;
  bVar2 = param_1->_ShouldPreserveAspectRatio;
  (this->_MinWidth).bIsSet = false;
  this->_ShouldPreserveAspectRatio = bVar2;
  bVar2 = (param_1->_MinWidth).bIsSet;
  (this->_MinWidth).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->_MinWidth).TypedValue = (param_1->_MinWidth).TypedValue;
  }
  (this->_MinHeight).bIsSet = false;
  bVar2 = (param_1->_MinHeight).bIsSet;
  (this->_MinHeight).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->_MinHeight).TypedValue = (param_1->_MinHeight).TypedValue;
  }
  (this->_MaxWidth).bIsSet = false;
  bVar2 = (param_1->_MaxWidth).bIsSet;
  (this->_MaxWidth).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->_MaxWidth).TypedValue = (param_1->_MaxWidth).TypedValue;
  }
  (this->_MaxHeight).bIsSet = false;
  bVar2 = (param_1->_MaxHeight).bIsSet;
  (this->_MaxHeight).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->_MaxHeight).TypedValue = (param_1->_MaxHeight).TypedValue;
  }
  this->_CreateTitleBar = param_1->_CreateTitleBar;
  this->_SaneWindowPlacement = param_1->_SaneWindowPlacement;
  fVar5 = (param_1->_LayoutBorder).Top;
  fVar6 = (param_1->_LayoutBorder).Right;
  fVar7 = (param_1->_LayoutBorder).Bottom;
  (this->_LayoutBorder).Left = (param_1->_LayoutBorder).Left;
  (this->_LayoutBorder).Top = fVar5;
  (this->_LayoutBorder).Right = fVar6;
  (this->_LayoutBorder).Bottom = fVar7;
  fVar5 = (param_1->_UserResizeBorder).Top;
  fVar6 = (param_1->_UserResizeBorder).Right;
  fVar7 = (param_1->_UserResizeBorder).Bottom;
  (this->_UserResizeBorder).Left = (param_1->_UserResizeBorder).Left;
  (this->_UserResizeBorder).Top = fVar5;
  (this->_UserResizeBorder).Right = fVar6;
  (this->_UserResizeBorder).Bottom = fVar7;
  this->_bManualManageDPI = param_1->_bManualManageDPI;
  (this->_Content).Widget.Object = (param_1->_Content).Widget.Object;
  pTVar4 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->_CloseButtonToolTipText).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_1->_CloseButtonToolTipText).Value.TextData.Reference;
  (this->_CloseButtonToolTipText).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  pTVar1 = &(this->_CloseButtonToolTipText).Getter;
  (this->_CloseButtonToolTipText).Value.Flags = (param_1->_CloseButtonToolTipText).Value.Flags;
  (this->_CloseButtonToolTipText).bIsSet = (param_1->_CloseButtonToolTipText).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->_CloseButtonToolTipText).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->_CloseButtonToolTipText).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->_CloseButtonToolTipText).Getter);
  return this;
}

// FArguments @ 142d62330

FArguments * __thiscall SWrapBox::FArguments::FArguments(FArguments *this)

{
  TVector2<double> TVar1;
  FDestructionSentinel local_48;
  uchar local_30;
  undefined1 local_2f;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_PreferredSize).Value = 100.0;
  (this->_PreferredSize).bIsSet = true;
  (this->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_Slots).ArrayNum = 0;
  (this->_Slots).ArrayMax = 0;
  *(undefined8 *)&(this->_PreferredSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_PreferredSize).Getter = 0;
  *(undefined8 *)&(this->_PreferredSize).Getter.field_0x8 = 0;
  (this->_HAlign).Value = HAlign_Left;
  (this->_HAlign).bIsSet = true;
  *(undefined8 *)&(this->_HAlign).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HAlign).Getter = 0;
  *(undefined8 *)&(this->_HAlign).Getter.field_0x8 = 0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->_UseAllottedSize = false;
  this->_Orientation = Orient_Horizontal;
  (this->_InnerSlotPadding).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  local_30 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  *(TEnumAsByte<EVisibility::Private> *)&this->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  local_2f = 1;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_48);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return this;
}

// ~FArguments @ 142d65660

void __thiscall SListView<TSharedPtr<FText,1>_>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnKeyDownHandler);
  pvVar1 = *(void **)&(this->_OnKeyDownHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEnteredBadState);
  pvVar1 = *(void **)&(this->_OnEnteredBadState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  pvVar1 = *(void **)&(this->_OnItemToString_Debug).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemToString_Debug);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IsFocusable).Getter);
  pvVar1 = *(void **)&(this->_IsFocusable).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ScrollbarVisibility).Getter);
  pvVar1 = *(void **)&(this->_ScrollbarVisibility).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ScrollbarVisibility).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ExternalScrollbar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_HeaderRow).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter);
  pvVar1 = *(void **)&(this->_SelectionMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectionMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  pvVar1 = *(void **)&(this->_OnIsSelectableOrNavigable).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  pvVar1 = *(void **)&(this->_OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonDoubleClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemsRebuilt);
  pvVar1 = *(void **)&(this->_OnItemsRebuilt).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening);
  pvVar1 = *(void **)&(this->_OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxPinnedItems).Getter);
  pvVar1 = *(void **)&(this->_MaxPinnedItems).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemHeight).Getter);
  pvVar1 = *(void **)&(this->_ItemHeight).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemHeight).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnFinishedScrolling);
  pvVar1 = *(void **)&(this->_OnFinishedScrolling).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  pvVar1 = *(void **)&(this->_OnItemScrolledIntoView).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnListViewScrolled);
  pvVar1 = *(void **)&(this->_OnListViewScrolled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnListViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowReleased);
  pvVar1 = *(void **)&(this->_OnRowReleased).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEntryInitialized);
  pvVar1 = *(void **)&(this->_OnEntryInitialized).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEntryInitialized);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshRow);
  pvVar1 = *(void **)&(this->_OnRefreshRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGeneratePinnedRow);
  pvVar1 = *(void **)&(this->_OnGeneratePinnedRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow);
  pvVar1 = *(void **)&(this->_OnGenerateRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142d65a30

void __thiscall
SListView<TSharedRef<CheckBoxList::FItemPair,1>_>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnKeyDownHandler);
  pvVar1 = *(void **)&(this->_OnKeyDownHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEnteredBadState);
  pvVar1 = *(void **)&(this->_OnEnteredBadState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  pvVar1 = *(void **)&(this->_OnItemToString_Debug).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemToString_Debug);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IsFocusable).Getter);
  pvVar1 = *(void **)&(this->_IsFocusable).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IsFocusable).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ScrollbarVisibility).Getter);
  pvVar1 = *(void **)&(this->_ScrollbarVisibility).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ScrollbarVisibility).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ExternalScrollbar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_HeaderRow).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter);
  pvVar1 = *(void **)&(this->_SelectionMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectionMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  pvVar1 = *(void **)&(this->_OnIsSelectableOrNavigable).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  pvVar1 = *(void **)&(this->_OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonDoubleClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemsRebuilt);
  pvVar1 = *(void **)&(this->_OnItemsRebuilt).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening);
  pvVar1 = *(void **)&(this->_OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxPinnedItems).Getter);
  pvVar1 = *(void **)&(this->_MaxPinnedItems).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemHeight).Getter);
  pvVar1 = *(void **)&(this->_ItemHeight).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemHeight).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnFinishedScrolling);
  pvVar1 = *(void **)&(this->_OnFinishedScrolling).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  pvVar1 = *(void **)&(this->_OnItemScrolledIntoView).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnListViewScrolled);
  pvVar1 = *(void **)&(this->_OnListViewScrolled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnListViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowReleased);
  pvVar1 = *(void **)&(this->_OnRowReleased).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEntryInitialized);
  pvVar1 = *(void **)&(this->_OnEntryInitialized).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEntryInitialized);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshRow);
  pvVar1 = *(void **)&(this->_OnRefreshRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGeneratePinnedRow);
  pvVar1 = *(void **)&(this->_OnGeneratePinnedRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow);
  pvVar1 = *(void **)&(this->_OnGenerateRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142d65e00

void __thiscall STableRow<TSharedPtr<FText,1>_>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Content).Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter);
  pvVar1 = *(void **)&(this->_Padding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Padding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDrop);
  pvVar1 = *(void **)&(this->_OnDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragLeave);
  pvVar1 = *(void **)&(this->_OnDragLeave).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragEnter);
  pvVar1 = *(void **)&(this->_OnDragEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragDetected);
  pvVar1 = *(void **)&(this->_OnDragDetected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnPaintDropIndicator);
  pvVar1 = *(void **)&(this->_OnPaintDropIndicator).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnAcceptDrop);
  pvVar1 = *(void **)&(this->_OnAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCanAcceptDrop);
  pvVar1 = *(void **)&(this->_OnCanAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142d65f80

void __thiscall
STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Content).Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter);
  pvVar1 = *(void **)&(this->_Padding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Padding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDrop);
  pvVar1 = *(void **)&(this->_OnDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragLeave);
  pvVar1 = *(void **)&(this->_OnDragLeave).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragEnter);
  pvVar1 = *(void **)&(this->_OnDragEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragDetected);
  pvVar1 = *(void **)&(this->_OnDragDetected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnPaintDropIndicator);
  pvVar1 = *(void **)&(this->_OnPaintDropIndicator).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnAcceptDrop);
  pvVar1 = *(void **)&(this->_OnAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCanAcceptDrop);
  pvVar1 = *(void **)&(this->_OnCanAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142d66100

void __thiscall SActionButton::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMenuOpenChanged);
  pvVar1 = *(void **)&(this->_OnMenuOpenChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMenuOpenChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnComboBoxOpened);
  pvVar1 = *(void **)&(this->_OnComboBoxOpened).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnComboBoxOpened);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGetMenuContent);
  pvVar1 = *(void **)&(this->_OnGetMenuContent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGetMenuContent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_MenuContent).Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked);
  pvVar1 = *(void **)&(this->_OnClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IconColorAndOpacity).Getter);
  pvVar1 = *(void **)&(this->_IconColorAndOpacity).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IconColorAndOpacity).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Icon).Getter);
  pvVar1 = *(void **)&(this->_Icon).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Icon).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter);
  pvVar1 = *(void **)&(this->_Text).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Text).Getter);
  pIVar2 = (this->_Text).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ButtonContentPadding).Getter);
  pvVar1 = *(void **)&(this->_ButtonContentPadding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ButtonContentPadding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ActionButtonType).Getter);
  pvVar1 = *(void **)&(this->_ActionButtonType).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ActionButtonType).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142d662c0

void __thiscall SCustomDialog::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_DialogContent).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_GetWidgetToFocusOnActivate);
  pvVar1 = *(void **)&(this->_GetWidgetToFocusOnActivate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_GetWidgetToFocusOnActivate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnConfirmHotkeyPressed);
  pvVar1 = *(void **)&(this->_OnConfirmHotkeyPressed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnConfirmHotkeyPressed);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCancelHotkeyPressed);
  pvVar1 = *(void **)&(this->_OnCancelHotkeyPressed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnCancelHotkeyPressed);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ContentAreaPadding).Getter);
  pvVar1 = *(void **)&(this->_ContentAreaPadding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ContentAreaPadding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ButtonAreaPadding).Getter);
  pvVar1 = *(void **)&(this->_ButtonAreaPadding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ButtonAreaPadding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_RootPadding).Getter);
  pvVar1 = *(void **)&(this->_RootPadding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_RootPadding).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_BeforeButtons).Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_IconDesiredSizeOverride).Getter);
  pvVar1 = *(void **)&(this->_IconDesiredSizeOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_IconDesiredSizeOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Icon).Getter);
  pvVar1 = *(void **)&(this->_Icon).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Icon).Getter);
  SWindow::FArguments::~FArguments(&this->_WindowArguments);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnClosed);
  pvVar1 = *(void **)&(this->_OnClosed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnClosed);
  DestructItems<SCustomDialog::FButton,int>
            ((FButton *)(this->_Buttons).AllocatorInstance.Data,(this->_Buttons).ArrayNum);
  pFVar2 = (this->_Buttons).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Content).Widget.SharedReferenceCount.ReferenceController);
  pIVar3 = (this->_Title).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142d664c0

void __thiscall SFilterSearchBoxImpl::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_GetSearchHistoryVisibility);
  pvVar1 = *(void **)&(this->_GetSearchHistoryVisibility).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_GetSearchHistoryVisibility);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSearchHistoryClicked);
  pvVar1 = *(void **)&(this->_OnSearchHistoryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSearchHistoryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSaveSearchClicked);
  pvVar1 = *(void **)&(this->_OnSaveSearchClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSaveSearchClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnKeyDownHandler);
  pvVar1 = *(void **)&(this->_OnKeyDownHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_DelayChangeNotificationsWhileTyping).Getter);
  pvVar1 = *(void **)&(this->_DelayChangeNotificationsWhileTyping).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_DelayChangeNotificationsWhileTyping).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnTextCommitted);
  pvVar1 = *(void **)&(this->_OnTextCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnTextCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnTextChanged);
  pvVar1 = *(void **)&(this->_OnTextChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnTextChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_InitialText).Getter);
  pvVar1 = *(void **)&(this->_InitialText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_InitialText).Getter);
  pIVar2 = (this->_InitialText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HintText).Getter);
  pvVar1 = *(void **)&(this->_HintText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_HintText).Getter);
  pIVar2 = (this->_HintText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142d66680

void __thiscall SPrimaryButton::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked);
  pvVar1 = *(void **)&(this->_OnClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Icon).Getter);
  pvVar1 = *(void **)&(this->_Icon).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Icon).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter);
  pvVar1 = *(void **)&(this->_Text).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Text).Getter);
  pIVar2 = (this->_Text).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 142d66740

void __thiscall SRichTextBlock::FArguments::~FArguments(FArguments *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  DestructItems<TSharedRef<ITextDecorator,1>,int>
            ((TSharedRef<ITextDecorator,1> *)(this->InlineDecorators).AllocatorInstance.Data,
             (this->InlineDecorators).ArrayNum);
  pFVar1 = (this->InlineDecorators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinDesiredWidth).Getter);
  pvVar2 = *(void **)&(this->_MinDesiredWidth).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinDesiredWidth).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Parser).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<ITextDecorator,1>,int>
            ((TSharedRef<ITextDecorator,1> *)(this->_Decorators).AllocatorInstance.Data,
             (this->_Decorators).ArrayNum);
  pFVar1 = (this->_Decorators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Justification).Getter);
  pvVar2 = *(void **)&(this->_Justification).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Justification).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ApplyLineHeightToBottomLine).Getter);
  pvVar2 = *(void **)&(this->_ApplyLineHeightToBottomLine).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ApplyLineHeightToBottomLine).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_LineHeightPercentage).Getter);
  pvVar2 = *(void **)&(this->_LineHeightPercentage).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_LineHeightPercentage).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Margin).Getter);
  pvVar2 = *(void **)&(this->_Margin).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Margin).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_CreateSlateTextLayout);
  pvVar2 = *(void **)&(this->_CreateSlateTextLayout).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_CreateSlateTextLayout);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Marshaller).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_TransformPolicy).Getter);
  pvVar2 = *(void **)&(this->_TransformPolicy).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_TransformPolicy).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WrappingPolicy).Getter);
  pvVar2 = *(void **)&(this->_WrappingPolicy).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_WrappingPolicy).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AutoWrapText).Getter);
  pvVar2 = *(void **)&(this->_AutoWrapText).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AutoWrapText).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WrapTextAt).Getter);
  pvVar2 = *(void **)&(this->_WrapTextAt).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_WrapTextAt).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HighlightText).Getter);
  pvVar2 = *(void **)&(this->_HighlightText).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_HighlightText).Getter);
  pIVar3 = (this->_HighlightText).Value.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter);
  pvVar2 = *(void **)&(this->_Text).Getter.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Text).Getter);
  pIVar3 = (this->_Text).Value.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// operator= @ 142d68d80

FArguments * __thiscall SWindow::FArguments::operator=(FArguments *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FSlateBaseNamedArgs::operator=((FSlateBaseNamedArgs *)this,(FSlateBaseNamedArgs *)param_1);
  this->_Type = param_1->_Type;
  this->_Style = param_1->_Style;
  TAttribute<FText>::operator=(&this->_Title,&param_1->_Title);
  this->_bDragAnywhere = param_1->_bDragAnywhere;
  this->_AutoCenter = param_1->_AutoCenter;
  this->_ScreenPosition = param_1->_ScreenPosition;
  this->_ClientSize = param_1->_ClientSize;
  this->_AdjustInitialSizeAndPositionForDPIScale = param_1->_AdjustInitialSizeAndPositionForDPIScale
  ;
  (this->_SupportsTransparency).Value = (param_1->_SupportsTransparency).Value;
  this->_InitialOpacity = param_1->_InitialOpacity;
  this->_IsInitiallyMaximized = param_1->_IsInitiallyMaximized;
  this->_IsInitiallyMinimized = param_1->_IsInitiallyMinimized;
  this->_SizingRule = param_1->_SizingRule;
  this->_IsPopupWindow = param_1->_IsPopupWindow;
  this->_IsTopmostWindow = param_1->_IsTopmostWindow;
  this->_FocusWhenFirstShown = param_1->_FocusWhenFirstShown;
  this->_FocusUserIndex = param_1->_FocusUserIndex;
  this->_ActivationPolicy = param_1->_ActivationPolicy;
  this->_UseOSWindowBorder = param_1->_UseOSWindowBorder;
  this->_HasCloseButton = param_1->_HasCloseButton;
  this->_SupportsMaximize = param_1->_SupportsMaximize;
  this->_SupportsMinimize = param_1->_SupportsMinimize;
  this->_ShouldPreserveAspectRatio = param_1->_ShouldPreserveAspectRatio;
  if (&param_1->_MinWidth != &this->_MinWidth) {
    if ((param_1->_MinWidth).bIsSet == false) {
      if ((this->_MinWidth).bIsSet != false) {
        (this->_MinWidth).bIsSet = false;
      }
    }
    else {
      (this->_MinWidth).TypedValue = (param_1->_MinWidth).TypedValue;
      (this->_MinWidth).bIsSet = true;
    }
  }
  if (&param_1->_MinHeight != &this->_MinHeight) {
    if ((param_1->_MinHeight).bIsSet == false) {
      if ((this->_MinHeight).bIsSet != false) {
        (this->_MinHeight).bIsSet = false;
      }
    }
    else {
      (this->_MinHeight).TypedValue = (param_1->_MinHeight).TypedValue;
      (this->_MinHeight).bIsSet = true;
    }
  }
  if (&param_1->_MaxWidth != &this->_MaxWidth) {
    if ((param_1->_MaxWidth).bIsSet == false) {
      if ((this->_MaxWidth).bIsSet != false) {
        (this->_MaxWidth).bIsSet = false;
      }
    }
    else {
      (this->_MaxWidth).TypedValue = (param_1->_MaxWidth).TypedValue;
      (this->_MaxWidth).bIsSet = true;
    }
  }
  if (&param_1->_MaxHeight != &this->_MaxHeight) {
    if ((param_1->_MaxHeight).bIsSet == false) {
      if ((this->_MaxHeight).bIsSet != false) {
        (this->_MaxHeight).bIsSet = false;
      }
    }
    else {
      (this->_MaxHeight).TypedValue = (param_1->_MaxHeight).TypedValue;
      (this->_MaxHeight).bIsSet = true;
    }
  }
  this->_CreateTitleBar = param_1->_CreateTitleBar;
  this->_SaneWindowPlacement = param_1->_SaneWindowPlacement;
  fVar4 = (param_1->_LayoutBorder).Top;
  fVar5 = (param_1->_LayoutBorder).Right;
  fVar6 = (param_1->_LayoutBorder).Bottom;
  (this->_LayoutBorder).Left = (param_1->_LayoutBorder).Left;
  (this->_LayoutBorder).Top = fVar4;
  (this->_LayoutBorder).Right = fVar5;
  (this->_LayoutBorder).Bottom = fVar6;
  fVar4 = (param_1->_UserResizeBorder).Top;
  fVar5 = (param_1->_UserResizeBorder).Right;
  fVar6 = (param_1->_UserResizeBorder).Bottom;
  (this->_UserResizeBorder).Left = (param_1->_UserResizeBorder).Left;
  (this->_UserResizeBorder).Top = fVar4;
  (this->_UserResizeBorder).Right = fVar5;
  (this->_UserResizeBorder).Bottom = fVar6;
  this->_bManualManageDPI = param_1->_bManualManageDPI;
  pTVar1 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar2 = (param_1->_Content).Widget.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this->_Content).Widget.Object = pSVar2;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TAttribute<FText>::operator=(&this->_CloseButtonToolTipText,&param_1->_CloseButtonToolTipText);
  return this;
}

// operator+ @ 142d697f0

FArguments * __thiscall
SWidgetSwitcher::FArguments::operator+(FArguments *this,FSlotArguments *param_1)

{
  int *piVar1;
  TArray<TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FSlotArguments *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FArguments *pFVar7;
  
  pTVar2 = &this->_Slots;
  pFVar3 = (FSlotArguments *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->_Slots).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FArguments *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (this->_Slots).ArrayNum;
  piVar1 = &(this->_Slots).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->_Slots).ArrayNum = iVar6 + 1;
  TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments::FSlotArguments
            ((FSlotArguments *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x58),param_1);
  return this;
}

// IconBrush @ 142db4f30

FArguments * __thiscall SCustomDialog::FArguments::IconBrush(FArguments *this,FName param_1)

{
  bool bVar1;
  ISlateStyle *pIVar2;
  FName *local_res8;
  FName local_res10;
  FDestructionSentinel local_48;
  FSlateBrush *local_30;
  undefined1 local_28;
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  local_res10 = param_1;
  pIVar2 = FAppStyle::Get();
  local_30 = (FSlateBrush *)(**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,local_res10,0,0);
  if (local_30 == (FSlateBrush *)0x0) {
    local_res8 = &local_res10;
    bVar1 = `SCustomDialog::FArguments::IconBrush'::__l3::<lambda_1>::operator()(&local_res8);
    if (!bVar1) {
      return this;
    }
  }
  local_10 = 0;
  local_28 = 1;
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  (this->_Icon).Value = local_30;
  (this->_Icon).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Icon).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_48);
  if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = local_10 & 0xffffffff00000000;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  return this;
}

// MakeListItemsSource @ 142db8c00

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FText,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FText,1>_>_>_>
 __thiscall
SListView<TSharedPtr<FText,1>_>::FArguments::MakeListItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<TSharedPtr<FText,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TObservableArray<TSharedPtr<FText,1>_> *pTVar3;
  STableViewBase *pSVar4;
  FObservableArrayPointer<TSharedPtr<FText,1>_> *this_00;
  FSharedObservableArray<TSharedPtr<FText,1>_> *this_01;
  longlong *in_R8;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<STableViewBase,1> local_18;
  
  if (this->_ListItemsSource_ArrayPointer ==
      (TArray<TSharedPtr<FText,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this->_ListItemsSource_ObservableArrayPointer ==
        (TObservableArray<TSharedPtr<FText,1>_> *)0x0) {
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
        if (this_01 == (FSharedObservableArray<TSharedPtr<FText,1>_> *)0x0) {
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
                   UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FText,1>_>::
                   FSharedObservableArray<TSharedPtr<FText,1>_>
                             (this_01,&local_18,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FText,1>_>,1>
                               *)&local_28);
        }
        param_1->Object = pSVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)in_R8[1]);
      }
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FText,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FText,1>_>_>_>
              )(IItemsSource<TSharedPtr<FText,1>_> *)param_1;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 != (FObservableArrayPointer<TSharedPtr<FText,1>_> *)0x0) {
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
               UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FText,1>_>::
               FObservableArrayPointer<TSharedPtr<FText,1>_>(this_00,&local_28,pTVar3);
      goto LAB_142db8c6b;
    }
  }
  else {
    pSVar4 = ::operator_new(0x10);
    if (pSVar4 != (STableViewBase *)0x0) {
      pTVar1 = this->_ListItemsSource_ArrayPointer;
      *(undefined ***)pSVar4 =
           &___7__FArrayPointer_V__TSharedPtr_VFText___00___ItemsSource_Slate_UE__6B_;
      *(TArray<TSharedPtr<FText,1>,TSizedDefaultAllocator<32>_> **)&pSVar4->field_0x8 = pTVar1;
      pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FText,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FText,1>_>_>_>
              )(IItemsSource<TSharedPtr<FText,1>_> *)param_1;
    }
  }
  pSVar4 = (STableViewBase *)0x0;
LAB_142db8c6b:
  pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = pSVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FText,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FText,1>_>_>_>
          )(IItemsSource<TSharedPtr<FText,1>_> *)param_1;
}

// MakeListItemsSource @ 142db8db0

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedRef<CheckBoxList::FItemPair,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedRef<CheckBoxList::FItemPair,1>_>_>_>
 __thiscall
SListView<TSharedRef<CheckBoxList::FItemPair,1>_>::FArguments::MakeListItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<TSharedRef<CheckBoxList::FItemPair,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_> *pTVar3;
  STableViewBase *pSVar4;
  FObservableArrayPointer<TSharedRef<CheckBoxList::FItemPair,1>_> *this_00;
  FSharedObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_> *this_01;
  longlong *in_R8;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<STableViewBase,1> local_18;
  
  if (this->_ListItemsSource_ArrayPointer ==
      (TArray<TSharedRef<CheckBoxList::FItemPair,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this->_ListItemsSource_ObservableArrayPointer ==
        (TObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) {
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
        if (this_01 == (FSharedObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) {
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
                   FSharedObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_>::
                   FSharedObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_>
                             (this_01,&local_18,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedRef<CheckBoxList::FItemPair,1>_>,1>
                               *)&local_28);
        }
        param_1->Object = pSVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)in_R8[1]);
      }
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedRef<CheckBoxList::FItemPair,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedRef<CheckBoxList::FItemPair,1>_>_>_>
              )(IItemsSource<TSharedRef<CheckBoxList::FItemPair,1>_> *)param_1;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 != (FObservableArrayPointer<TSharedRef<CheckBoxList::FItemPair,1>_> *)0x0) {
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
               FObservableArrayPointer<TSharedRef<CheckBoxList::FItemPair,1>_>::
               FObservableArrayPointer<TSharedRef<CheckBoxList::FItemPair,1>_>
                         (this_00,&local_28,pTVar3);
      goto LAB_142db8e1b;
    }
  }
  else {
    pSVar4 = ::operator_new(0x10);
    if (pSVar4 != (STableViewBase *)0x0) {
      pTVar1 = this->_ListItemsSource_ArrayPointer;
      *(undefined ***)pSVar4 =
           &
           ___7__FArrayPointer_V__TSharedRef_UFItemPair_CheckBoxList___00___ItemsSource_Slate_UE__6B_
      ;
      *(TArray<TSharedRef<CheckBoxList::FItemPair,1>,TSizedDefaultAllocator<32>_> **)
       &pSVar4->field_0x8 = pTVar1;
      pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedRef<CheckBoxList::FItemPair,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedRef<CheckBoxList::FItemPair,1>_>_>_>
              )(IItemsSource<TSharedRef<CheckBoxList::FItemPair,1>_> *)param_1;
    }
  }
  pSVar4 = (STableViewBase *)0x0;
LAB_142db8e1b:
  pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = pSVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedRef<CheckBoxList::FItemPair,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedRef<CheckBoxList::FItemPair,1>_>_>_>
          )(IItemsSource<TSharedRef<CheckBoxList::FItemPair,1>_> *)param_1;
}

// MaxDesiredHeight @ 142dbabf0

FArguments * __thiscall
SBox::FArguments::MaxDesiredHeight(FArguments *this,TAttribute<FOptionalSize> *param_1)

{
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_MaxDesiredHeight).Value.Size = (param_1->Value).Size;
  (this->_MaxDesiredHeight).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxDesiredHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// PressedPaddingOverride @ 142dccc50

FArguments * __thiscall
SButton::FArguments::PressedPaddingOverride(FArguments *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (param_1->Value).Top;
  fVar3 = (param_1->Value).Right;
  fVar4 = (param_1->Value).Bottom;
  this_00 = &param_1->Getter;
  (this->_PressedPaddingOverride).Value.Left = (param_1->Value).Left;
  (this->_PressedPaddingOverride).Value.Top = fVar2;
  (this->_PressedPaddingOverride).Value.Right = fVar3;
  (this->_PressedPaddingOverride).Value.Bottom = fVar4;
  (this->_PressedPaddingOverride).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_PressedPaddingOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Style @ 142dda270

FArguments * __thiscall
SCheckBox::FArguments::Style(FArguments *this,ISlateStyle *param_1,FName *param_2,char *param_3)

{
  code *pcVar1;
  FName FVar2;
  FString *pFVar3;
  FCheckBoxStyle *pFVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res10 = *param_2;
  pcVar1 = *(code **)((longlong)*param_1 + 0xa0);
  FVar2 = local_res10;
  if (param_3 != (char *)0x0) {
    ::FString::FString(&local_28,param_3);
    pFVar3 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_38,pFVar3,&local_28);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2 = local_res8;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2 = local_res8;
    }
  }
  local_res8 = FVar2;
  pFVar4 = (FCheckBoxStyle *)(*pcVar1)(param_1,FCheckBoxStyle::TypeName,local_res8,0,1);
  if (pFVar4 == (FCheckBoxStyle *)0x0) {
    pFVar4 = FCheckBoxStyle::GetDefault();
  }
  this->_Style = pFVar4;
  return this;
}

// Text @ 142dda680

FArguments * __thiscall SActionButton::FArguments::Text(FArguments *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=(&(this->_Text).Value,&param_1->Value);
  (this->_Text).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// Text @ 142dda710

FArguments * __thiscall SButton::FArguments::Text(FArguments *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=(&(this->_Text).Value,&param_1->Value);
  (this->_Text).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// Text @ 142dda7a0

FArguments * __thiscall
SPrimaryButton::FArguments::Text(FArguments *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=(&(this->_Text).Value,&param_1->Value);
  (this->_Text).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// Text @ 142dda830

FArguments * __thiscall
SRichTextBlock::FArguments::Text(FArguments *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=(&(this->_Text).Value,&param_1->Value);
  (this->_Text).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// Text_Lambda @ 142dda8c0

FArguments * __thiscall
SEditableTextBox::FArguments::Text_Lambda(FArguments *this,TFunction<FText___cdecl(void)> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  (this->_Text).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_Text).Getter.field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AVFText__XZ____V__6B_
    ;
    lVar1 = *(longlong *)param_1;
    puVar2[4] = lVar1;
    puVar2[9] = 0;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)&param_1->field_0x10;
      if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)&param_1->field_0x28;
      }
      (**(code **)*puVar2)();
    }
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// operator() @ 15049a150

bool __thiscall `SCustomDialog::FArguments::IconBrush'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1328414993602838549>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1328414993602838549>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15049a1b7;
    }
  }
  bVar2 = false;
LAB_15049a1b7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

