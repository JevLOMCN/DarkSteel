// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 50

// DefaultLabel<SEventsTree> @ 148d4d960

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SHeaderRow::FColumn::FArguments::DefaultLabel<SEventsTree>
          (FArguments *this,SEventsTree *param_1,pmf_55a27154 *param_2)

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
  (this->_DefaultLabel).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_DefaultLabel).Getter
             ,(FWriteAccessScope *)&local_38);
  local_20 = &(this->_DefaultLabel).Getter.field_0x8;
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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEventsTree___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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

// OnClicked<SBarVisualizer> @ 148d52910

FArguments * __thiscall
SButton::FArguments::OnClicked<SBarVisualizer>
          (FArguments *this,SBarVisualizer *param_1,pmf_f85b6f02 *param_2)

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
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// OnClicked<SBarVisualizer,TSharedPtr<FVisualizerEvent,1>_> @ 148d52a40

FArguments * __thiscall
SButton::FArguments::OnClicked<SBarVisualizer,TSharedPtr<FVisualizerEvent,1>_>
          (FArguments *this,SBarVisualizer *param_1,pmf_13e63e3d *param_2,
          TSharedPtr<FVisualizerEvent,1> *param_3)

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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->_OnClicked).field_0x8;
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFVisualizerEvent___00____6B_
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFVisualizerEvent___00____6B_
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

// OnClicked<SProfileVisualizer> @ 148d52bb0

FArguments * __thiscall
SButton::FArguments::OnClicked<SProfileVisualizer>
          (FArguments *this,SProfileVisualizer *param_1,pmf_cc36586c *param_2)

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
              ___7__TBaseSPMethodDelegateInstance__0A_VSProfileVisualizer___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
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

// OnEventSelectionChanged<SProfileVisualizer> @ 148d52ce0

FArguments * __thiscall
SEventsTree::FArguments::OnEventSelectionChanged<SProfileVisualizer>
          (FArguments *this,SProfileVisualizer *param_1,pmf_4443d42f *param_2)

{
  pmf_4443d42f local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
  BindSP<SProfileVisualizer>
            ((TDelegateRegistration<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
              *)&this->_OnEventSelectionChanged,param_1,&local_18);
  return this;
}

// OnGenerateRow<SBarVisualizer> @ 148d52d20

FArguments * __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::OnGenerateRow<SBarVisualizer>
          (FArguments *this,SBarVisualizer *param_1,pmf_fb59e4ce *param_2)

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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFVisualizerEvent___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFVisualizerEvent___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// OnGenerateRow<SEventsTree> @ 148d52e50

FArguments * __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::OnGenerateRow<SEventsTree>
          (FArguments *this,SEventsTree *param_1,pmf_141d3f0a *param_2)

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
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFVisualizerEvent___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFVisualizerEvent___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
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

// OnGeometryChanged<SBarVisualizer> @ 148d52f80

FArguments * __thiscall
SGraphBar::FArguments::OnGeometryChanged<SBarVisualizer>
          (FArguments *this,SBarVisualizer *param_1,pmf_6f6f182e *param_2)

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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGeometryChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnGeometryChanged).field_0x8;
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
              ___7__TCommonDelegateInstanceState___A6AXUFGeometry___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXUFGeometry___ZUFDefaultDelegateUserPolicy____V__6B_
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

// OnGetChildren<SEventsTree> @ 148d530b0

FArguments * __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::OnGetChildren<SEventsTree>
          (FArguments *this,SEventsTree *param_1,pmf_7c10923e *param_2)

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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGetChildren,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnGetChildren).field_0x8;
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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__AEAV__TArray_V__TSharedPtr_UFVisualizerEvent___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__AEAV__TArray_V__TSharedPtr_UFVisualizerEvent___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
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

// OnMouseButtonDown<SBarVisualizer,TSharedPtr<FVisualizerEvent,1>_> @ 148d531e0

FArguments * __thiscall
SBorder::FArguments::OnMouseButtonDown<SBarVisualizer,TSharedPtr<FVisualizerEvent,1>_>
          (FArguments *this,SBarVisualizer *param_1,pmf_413261ac *param_2,
          TSharedPtr<FVisualizerEvent,1> *param_3)

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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDown,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->_OnMouseButtonDown).field_0x8;
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
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFVisualizerEvent___00____6B_
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
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFVisualizerEvent___00____6B_
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

// OnSelectionChanged<SBarVisualizer> @ 148d53350

FArguments * __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::OnSelectionChanged<SBarVisualizer>
          (FArguments *this,SBarVisualizer *param_1,pmf_638d7d14 *param_2)

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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
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

// OnSelectionChanged<SBarVisualizer,int> @ 148d53480

FArguments * __thiscall
SGraphBar::FArguments::OnSelectionChanged<SBarVisualizer,int>
          (FArguments *this,SBarVisualizer *param_1,pmf_2b730662 *param_2,int param_3)

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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar7 + 1) = param_3;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSBarVisualizer___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy__H__6B_
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

// OnSelectionChanged<SEventsTree> @ 148d535c0

FArguments * __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::OnSelectionChanged<SEventsTree>
          (FArguments *this,SEventsTree *param_1,pmf_1b9035a8 *param_2)

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
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXV__TSharedPtr_UFVisualizerEvent___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
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

// OnTextChanged<SEventsTree> @ 148d536f0

FArguments * __thiscall
SSearchBox::FArguments::OnTextChanged<SEventsTree>
          (FArguments *this,SEventsTree *param_1,pmf_5d6d12bc *param_2)

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
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXAEBVFText___ZUFDefaultDelegateUserPolicy____V__6B_
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

// OnTextCommitted<SEventsTree> @ 148d53820

FArguments * __thiscall
SSearchBox::FArguments::OnTextCommitted<SEventsTree>
          (FArguments *this,SEventsTree *param_1,pmf_e285a096 *param_2)

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
              ___7__TBaseSPMethodDelegateInstance__0A_VSEventsTree___00__A6AXAEBVFText__W4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
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

// OnUserScrolled<SBarVisualizer> @ 148d53950

FArguments * __thiscall
SScrollBar::FArguments::OnUserScrolled<SBarVisualizer>
          (FArguments *this,SBarVisualizer *param_1,pmf_4138e457 *param_2)

{
  pmf_4138e457 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::BindSP<SBarVisualizer>
            ((TDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
             &this->_OnUserScrolled,param_1,&local_18);
  return this;
}

// OnValueChanged<SBarVisualizer> @ 148d53990

FArguments * __thiscall
SSlider::FArguments::OnValueChanged<SBarVisualizer>
          (FArguments *this,SBarVisualizer *param_1,pmf_4138e457 *param_2)

{
  pmf_4138e457 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  TDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::BindSP<SBarVisualizer>
            ((TDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
             &this->_OnValueChanged,param_1,&local_18);
  return this;
}

// Text<SBarVisualizer> @ 148d53d90

FArguments * __thiscall
STextBlock::FArguments::Text<SBarVisualizer>
          (FArguments *this,SBarVisualizer *param_1,pmf_e17c53d8 *param_2)

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
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBarVisualizer___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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

// Text<SEventItem> @ 148d53ed0

FArguments * __thiscall
STextBlock::FArguments::Text<SEventItem>(FArguments *this,SEventItem *param_1,pmf_8f5c8254 *param_2)

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
  (this->_Text).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Text).Getter,
             (FWriteAccessScope *)&local_48);
  local_30 = &(this->_Text).Getter.field_0x8;
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
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar5;
    *puVar3 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSEventItem___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
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

// Value<SBarVisualizer> @ 148d54040

FArguments * __thiscall
SSlider::FArguments::Value<SBarVisualizer>
          (FArguments *this,SBarVisualizer *param_1,pmf_a517a715 *param_2)

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
  (this->_Value).bIsSet = true;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_Value).Getter.field_0x8;
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
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar9;
    *puVar7 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSBarVisualizer___00__A6AMXZUFDefaultDelegateUserPolicy____V__6B_
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

// FArguments @ 148d561b0

FArguments * __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::FArguments(FArguments *this)

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
       (TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
  (this->_ListItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 0.0;
  (this->_ItemHeight).bIsSet = false;
  this->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
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
    if (!bVar3) goto LAB_148d5649d;
  }
  lVar8 = 0;
LAB_148d5649d:
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

// FArguments @ 148d56560

FArguments * __thiscall
STableRow<TSharedPtr<FVisualizerEvent,1>_>::FArguments::FArguments(FArguments *this)

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

// FArguments @ 148d566d0

FArguments * __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::FArguments(FArguments *this)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableViewStyle *pFVar5;
  FScrollBarStyle *pFVar6;
  longlong lVar7;
  FName local_res8;
  FName local_res10;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TreeView");
  pFVar5 = (FTableViewStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableViewStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableViewStyle *)0x0) {
    pFVar5 = FTableViewStyle::GetDefault();
  }
  this->_TreeViewStyle = pFVar5;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateRow = 0;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGeneratePinnedRow = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshRow = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x8 = 0;
  *(undefined8 *)&this->_OnRowReleased = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnTreeViewScrolled = 0;
  *(undefined8 *)&(this->_OnTreeViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnTreeViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&(this->_OnGetChildren).field_0x10 = 0;
  *(undefined8 *)&this->_OnGetChildren = 0;
  *(undefined8 *)&(this->_OnGetChildren).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSetExpansionRecursive).field_0x10 = 0;
  *(undefined8 *)&this->_OnSetExpansionRecursive = 0;
  *(undefined8 *)&(this->_OnSetExpansionRecursive).field_0x8 = 0;
  (this->_TreeItemsSource_SharedObservableArray).Object =
       (TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
  (this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 0.0;
  (this->_ItemHeight).bIsSet = false;
  this->_TreeItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_TreeItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
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
  *(undefined8 *)&(this->_OnExpansionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnExpansionChanged = 0;
  *(undefined8 *)&(this->_OnExpansionChanged).field_0x8 = 0;
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
  this->_ClearSelectionOnClick = true;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_EnableAnimatedScrolling = false;
  (this->_FixedLineScrollOffset).bIsSet = false;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  this->_AllowOverscroll = Yes;
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res10,"ScrollBar");
  pFVar6 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FScrollBarStyle::TypeName,*pFVar4,0,1);
  if (pFVar6 == (FScrollBarStyle *)0x0) {
    pFVar6 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar6;
  this->_PreventThrottling = false;
  pTVar1 = GlobalScrollAmount.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar7 = 4;
    if (!bVar2) goto LAB_148d569be;
  }
  lVar7 = 0;
LAB_148d569be:
  this->_WheelScrollMultiplier = *(float *)((longlong)pTVar1->ShadowedValue + lVar7);
  this->_ShadowBoxStyle = (FScrollBoxStyle *)0x0;
  this->_bEnableShadowBoxStyle = false;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  this->_ReturnFocusToSelection = false;
  (this->_ShouldStackHierarchyHeaders).Value = false;
  (this->_ShouldStackHierarchyHeaders).bIsSet = true;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  this->_AllowInvisibleItemSelection = false;
  this->_HighlightParentNodesForSelection = false;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter = 0;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnKeyDownHandler = 0;
  *(undefined8 *)&(this->_OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->_OnKeyDownHandler).field_0x10 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 148d56a70

FArguments * __thiscall SBarVisualizer::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_ProfileData).Value.Object = (FVisualizerEvent *)0x0;
  (this->_ProfileData).Value.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ProfileData).bIsSet = false;
  *(undefined8 *)&(this->_ProfileData).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ProfileData).Getter = 0;
  *(undefined8 *)&(this->_ProfileData).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnBarGraphSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnBarGraphSelectionChanged = 0;
  *(undefined8 *)&(this->_OnBarGraphSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnBarGraphExpansionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnBarGraphExpansionChanged = 0;
  *(undefined8 *)&(this->_OnBarGraphExpansionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnBarEventSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnBarEventSelectionChanged = 0;
  *(undefined8 *)&(this->_OnBarEventSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnBarGraphContextMenu).field_0x10 = 0;
  *(undefined8 *)&this->_OnBarGraphContextMenu = 0;
  *(undefined8 *)&(this->_OnBarGraphContextMenu).field_0x8 = 0;
  return this;
}

// FArguments @ 148d56b10

FArguments * __thiscall SEventItem::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_EventDuration).bIsSet = true;
  (this->_EventName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_EventName).Data.ArrayNum = 0;
  (this->_EventName).Data.ArrayMax = 0;
  (this->_EventDuration).Value = 0.0;
  *(undefined8 *)&(this->_EventDuration).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_EventDuration).Getter = 0;
  *(undefined8 *)&(this->_EventDuration).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 148d56b60

FArguments * __thiscall SEventsTree::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_ProfileData).Value.Object = (FVisualizerEvent *)0x0;
  (this->_ProfileData).Value.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ProfileData).bIsSet = false;
  *(undefined8 *)&(this->_ProfileData).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ProfileData).Getter = 0;
  *(undefined8 *)&(this->_ProfileData).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnEventSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnEventSelectionChanged = 0;
  *(undefined8 *)&(this->_OnEventSelectionChanged).field_0x8 = 0;
  return this;
}

// FArguments @ 148d56bc0

FArguments * __thiscall SGraphBar::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&this->_OnGeometryChanged = 0;
  *(undefined8 *)&(this->_OnGeometryChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnGeometryChanged).field_0x10 = 0;
  return this;
}

// FArguments @ 148d56c10

FArguments * __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget::FArguments::FArguments
          (FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 148d56c30

FArguments * __thiscall SProfileVisualizer::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_LayoutString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_LayoutString).Data.ArrayNum = 0;
  (this->_LayoutString).Data.ArrayMax = 0;
  (this->_ProfileData).Object = (FVisualizerEvent *)0x0;
  (this->_ProfileData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  FText::FText(&this->_ProfilerType);
  FText::FText(&this->_HeaderMessageText);
  return this;
}

// FArguments @ 148d56c90

FArguments * __thiscall STimeline::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this->_MinValue = 0.0;
  this->_MaxValue = 1.0;
  this->_FixedLabelSpacing = 1.0;
  return this;
}

// ~FArguments @ 148d57f80

void __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::~FArguments(FArguments *this)

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
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
            (&this->_OnSelectionChanged);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
            (&this->_OnMouseButtonDoubleClick);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
            (&this->_OnMouseButtonClick);
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
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
            (&this->_OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 148d58190

void __thiscall
STableRow<TSharedPtr<FVisualizerEvent,1>_>::FArguments::~FArguments(FArguments *this)

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

// ~FArguments @ 148d58260

void __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::~FArguments(FArguments *this)

{
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
            (&this->_OnKeyDownHandler);
  TAttribute<bool>::~TAttribute<bool>(&this->_ShouldStackHierarchyHeaders);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  TSharedPtr<SScrollBar,1>::~TSharedPtr<SScrollBar,1>(&this->_ExternalScrollbar);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_HeaderRow).SharedReferenceCount);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnExpansionChanged);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
            (&this->_OnSelectionChanged);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
            (&this->_OnMouseButtonDoubleClick);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
            (&this->_OnMouseButtonClick);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnItemsRebuilt);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
            (&this->_OnContextMenuOpening);
  TAttribute<int>::~TAttribute<int>(&this->_MaxPinnedItems);
  TAttribute<float>::~TAttribute<float>(&this->_ItemHeight);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSetExpansionRecursive);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGetChildren);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnTreeViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowReleased);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
            (&this->_OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 148d58480

void __thiscall SBarVisualizer::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnBarGraphContextMenu);
  pvVar1 = *(void **)&(this->_OnBarGraphContextMenu).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnBarGraphContextMenu);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnBarEventSelectionChanged);
  pvVar1 = *(void **)&(this->_OnBarEventSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnBarEventSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnBarGraphExpansionChanged);
  pvVar1 = *(void **)&(this->_OnBarGraphExpansionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnBarGraphExpansionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnBarGraphSelectionChanged);
  pvVar1 = *(void **)&(this->_OnBarGraphSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnBarGraphSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ProfileData).Getter);
  pvVar1 = *(void **)&(this->_ProfileData).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ProfileData).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ProfileData).Value.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 148d58580

void __thiscall SEventsTree::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEventSelectionChanged);
  pvVar1 = *(void **)&(this->_OnEventSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEventSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ProfileData).Getter);
  pvVar1 = *(void **)&(this->_ProfileData).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ProfileData).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ProfileData).Value.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 148d58610

void __thiscall STimeline::FArguments::~FArguments(FArguments *this)

{
  TSlateBaseNamedArgs<STimeline>::~TSlateBaseNamedArgs<STimeline>
            ((TSlateBaseNamedArgs<STimeline> *)this);
  return;
}

// operator[] @ 148d59660

FArguments * __thiscall
STableRow<TSharedPtr<FVisualizerEvent,1>_>::FArguments::operator[]
          (FArguments *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this->_Content).Widget.Object = pSVar2;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// HeaderRow @ 148d7f1c0

FArguments * __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::HeaderRow
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

// ListItemsSource @ 148d80250

FArguments * __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::ListItemsSource
          (FArguments *this,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1> local_18;
  
  this->_ListItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_ListItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
  local_18.Object = (TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_ListItemsSource_SharedObservableArray != &local_18) {
    (this->_ListItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_ListItemsSource_SharedObservableArray).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_18)
  ;
  this->_ListItemsSource_ArrayPointer = param_1;
  return this;
}

// MakeListItemsSource @ 148d813a0

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FVisualizerEvent,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FVisualizerEvent,1>_>_>_>
 __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::MakeListItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *pTVar2;
  STableViewBase *pSVar3;
  FObservableArrayPointer<TSharedPtr<FVisualizerEvent,1>_> *this_00;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1> *pTVar4;
  FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_> *this_01;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *in_R8;
  TSharedRef<STableViewBase,1> local_38;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1> local_18;
  
  if (this->_ListItemsSource_ArrayPointer ==
      (TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this->_ListItemsSource_ObservableArrayPointer ==
        (TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
      if ((this->_ListItemsSource_SharedObservableArray).Object ==
          (TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
      }
      else {
        pTVar4 = TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>
                 ::ToSharedRef(&this->_ListItemsSource_SharedObservableArray,&local_18);
        this_01 = ::operator_new(0x30);
        if (this_01 == (FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
          pSVar3 = (STableViewBase *)0x0;
        }
        else {
          local_38.Object = (STableViewBase *)pTVar4->Object;
          local_38.SharedReferenceCount.ReferenceController =
               (pTVar4->SharedReferenceCount).ReferenceController;
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = (STableViewBase *)*in_R8;
          local_28.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          if (local_28.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pSVar3 = (STableViewBase *)
                   UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_>::
                   FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_>
                             (this_01,&local_28,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>
                               *)&local_38);
        }
        param_1->Object = pSVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      }
      goto LAB_148d814f5;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 != (FObservableArrayPointer<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
      local_38.Object = (STableViewBase *)*in_R8;
      pTVar2 = this->_ListItemsSource_ObservableArrayPointer;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar3 = (STableViewBase *)
               UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FVisualizerEvent,1>_>::
               FObservableArrayPointer<TSharedPtr<FVisualizerEvent,1>_>(this_00,&local_38,pTVar2);
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_148d814f5;
    }
  }
  else {
    pSVar3 = ::operator_new(0x10);
    if (pSVar3 != (STableViewBase *)0x0) {
      pTVar1 = this->_ListItemsSource_ArrayPointer;
      *(undefined ***)pSVar3 =
           &___7__FArrayPointer_V__TSharedPtr_UFVisualizerEvent___00___ItemsSource_Slate_UE__6B_;
      *(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> **)&pSVar3->field_0x8 =
           pTVar1;
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_148d814f5;
    }
  }
  pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = (STableViewBase *)0x0;
LAB_148d814f5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FVisualizerEvent,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FVisualizerEvent,1>_>_>_>
          )(IItemsSource<TSharedPtr<FVisualizerEvent,1>_> *)param_1;
}

// MakeTreeItemsSource @ 148d82440

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FVisualizerEvent,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FVisualizerEvent,1>_>_>_>
 __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::MakeTreeItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *pTVar2;
  STableViewBase *pSVar3;
  FObservableArrayPointer<TSharedPtr<FVisualizerEvent,1>_> *this_00;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1> *pTVar4;
  FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_> *this_01;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *in_R8;
  TSharedRef<STableViewBase,1> local_38;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1> local_18;
  
  if (this->_TreeItemsSource_ArrayPointer ==
      (TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    if (this->_TreeItemsSource_ObservableArrayPointer ==
        (TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
      if ((this->_TreeItemsSource_SharedObservableArray).Object ==
          (TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
      }
      else {
        pTVar4 = TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>
                 ::ToSharedRef(&this->_TreeItemsSource_SharedObservableArray,&local_18);
        this_01 = ::operator_new(0x30);
        if (this_01 == (FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
          pSVar3 = (STableViewBase *)0x0;
        }
        else {
          local_38.Object = (STableViewBase *)pTVar4->Object;
          local_38.SharedReferenceCount.ReferenceController =
               (pTVar4->SharedReferenceCount).ReferenceController;
          if (local_38.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = (STableViewBase *)*in_R8;
          local_28.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          if (local_28.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pSVar3 = (STableViewBase *)
                   UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_>::
                   FSharedObservableArray<TSharedPtr<FVisualizerEvent,1>_>
                             (this_01,&local_28,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>
                               *)&local_38);
        }
        param_1->Object = pSVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      }
      goto LAB_148d82595;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 != (FObservableArrayPointer<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
      local_38.Object = (STableViewBase *)*in_R8;
      pTVar2 = this->_TreeItemsSource_ObservableArrayPointer;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar3 = (STableViewBase *)
               UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FVisualizerEvent,1>_>::
               FObservableArrayPointer<TSharedPtr<FVisualizerEvent,1>_>(this_00,&local_38,pTVar2);
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_148d82595;
    }
  }
  else {
    pSVar3 = ::operator_new(0x10);
    if (pSVar3 != (STableViewBase *)0x0) {
      pTVar1 = this->_TreeItemsSource_ArrayPointer;
      *(undefined ***)pSVar3 =
           &___7__FArrayPointer_V__TSharedPtr_UFVisualizerEvent___00___ItemsSource_Slate_UE__6B_;
      *(TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> **)&pSVar3->field_0x8 =
           pTVar1;
      pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar3;
      goto LAB_148d82595;
    }
  }
  pTVar5 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = (STableViewBase *)0x0;
LAB_148d82595:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FVisualizerEvent,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FVisualizerEvent,1>_>_>_>
          )(IItemsSource<TSharedPtr<FVisualizerEvent,1>_> *)param_1;
}

// MaxValue @ 148d825c0

FArguments * __thiscall STimeline::FArguments::MaxValue(FArguments *this,float param_1)

{
  this->_MaxValue = param_1;
  return this;
}

// MenuContent @ 148d825e0

/* WARNING: Enum "Type": Some values do not have unique names */

NamedSlotProperty<SHeaderRow::FColumn::FArguments> * __thiscall
SHeaderRow::FColumn::FArguments::MenuContent
          (FArguments *this,
          NamedSlotProperty<SHeaderRow::FColumn::FArguments> *__return_storage_ptr__)

{
  __return_storage_ptr__->OwnerDeclaration = this;
  __return_storage_ptr__->SlotContent = &this->_MenuContent;
  return __return_storage_ptr__;
}

// MinValue @ 148d82600

FArguments * __thiscall STimeline::FArguments::MinValue(FArguments *this,float param_1)

{
  this->_MinValue = param_1;
  return this;
}

// OnSort @ 148d8a060

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SHeaderRow::FColumn::FArguments::OnSort
          (FArguments *this,
          TDelegate<void___cdecl(EColumnSortPriority::Type,FName_const_&,EColumnSortMode::Type),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSort,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return this;
}

// ProfileData @ 148d8daf0

FArguments * __thiscall
SEventsTree::FArguments::ProfileData
          (FArguments *this,TAttribute<TSharedPtr<FVisualizerEvent,1>_> *param_1)

{
  FSharedReferencer<1> *pFVar1;
  void *pvVar2;
  TDelegate<TSharedPtr<FVisualizerEvent,1>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  
  pFVar1 = &(param_1->Value).SharedReferenceCount;
  if (&this->_ProfileData != param_1) {
    (this->_ProfileData).Value.Object = (param_1->Value).Object;
    (param_1->Value).Object = (FVisualizerEvent *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_ProfileData).Value.SharedReferenceCount,pFVar1);
  }
  this_00 = &param_1->Getter;
  (this->_ProfileData).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ProfileData).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar2 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar1->ReferenceController);
  return this;
}

// SelectionMode @ 148d91080

FArguments * __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::SelectionMode
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

// SelectionMode @ 148d910d0

FArguments * __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::SelectionMode
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

// SortMode @ 148d91d20

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SHeaderRow::FColumn::FArguments::SortMode
          (FArguments *this,TAttribute<EColumnSortMode::Type> *param_1)

{
  TDelegate<EColumnSortMode::Type___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_SortMode).Value = param_1->Value;
  (this->_SortMode).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SortMode).Getter,
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

// TreeItemsSource @ 148d92c30

FArguments * __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::TreeItemsSource
          (FArguments *this,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1> local_18;
  
  this->_TreeItemsSource_ArrayPointer =
       (TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *)0x0;
  this->_TreeItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
  local_18.Object = (TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_TreeItemsSource_SharedObservableArray != &local_18) {
    (this->_TreeItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount,
               &local_18.SharedReferenceCount);
  }
  TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_18)
  ;
  this->_TreeItemsSource_ArrayPointer = param_1;
  return this;
}

