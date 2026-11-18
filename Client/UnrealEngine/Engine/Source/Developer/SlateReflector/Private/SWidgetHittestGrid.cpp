// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 33

// <lambda_invoker_cdecl> @ 142de1f80

bool __cdecl `SWidgetHittestGrid::Construct'::__l2::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  return !GSlateHitTestGridDebugging;
}

// <lambda_invoker_cdecl> @ 142de1fa0

bool __cdecl `SWidgetHittestGrid::Construct'::__l2::<lambda_2>::<lambda_invoker_cdecl>(void)

{
  return !GSlateHitTestGridDebugging;
}

// ~SWidgetHittestGrid @ 142e14fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidgetHittestGrid::~SWidgetHittestGrid(SWidgetHittestGrid *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  ITextData *pIVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  
  this->_padding_ = (longlong)&___7SWidgetHittestGrid__6B_;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FHittestGrid::OnFindNextFocusableWidgetExecuted,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FSlateDebugging::PaintDebugElements,this);
  pTVar3 = (this->NavigationRuleWidgetWidget).WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->NavigationFromResult).WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->NavigationFromWidget).WeakReferenceCount.ReferenceController;
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
  pIVar4 = (this->NavigationBoundaryRule).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar4 = (this->NavigationRuleWidget).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar4 = (this->NavigationUserIndex).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar4 = (this->NavigationDirection).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar4 = (this->NavigationResult).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar4 = (this->NavigationFrom).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  DestructItems<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,int>
            ((TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)
             (this->IntermediateResultNodesRoot).AllocatorInstance.Data,
             (this->IntermediateResultNodesRoot).ArrayNum);
  pFVar5 = (this->IntermediateResultNodesRoot).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NavigationIntermediateResultTree).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->WindowToDisplay).WeakReferenceCount.ReferenceController;
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
  pTVar3 = (this->ReflectorWidget).WeakReferenceCount.ReferenceController;
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnVisualizeWidget);
  pvVar6 = *(void **)&(this->OnVisualizeWidget).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnVisualizeWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnWidgetSelected);
  pvVar6 = *(void **)&(this->OnWidgetSelected).field_0x8;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWidgetSelected);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 142e19670

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`SWidgetHittestGrid::GetFlagsMenuContent'::__l2::<lambda_1>::operator()
          (void *this,FText *param_1,EDisplayGridFlags param_2)

{
  longlong lVar1;
  SWidget *pSVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 *puVar6;
  TSharedRef<SWidget_const_,1> *pTVar7;
  ulong64 uVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FUIAction *pFVar10;
  FSlateIcon *pFVar11;
  FText *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FName local_res10;
  FDestructionSentinel local_208;
  code *local_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined1 local_1e0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1d8;
  ForAnyElementType FStack_1d0;
  ulonglong local_1c8;
  undefined1 local_1c0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a8;
  ForAnyElementType FStack_1a0;
  ulonglong local_198;
  undefined1 local_190 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_178;
  ForAnyElementType FStack_170;
  ulonglong local_168;
  undefined1 local_160 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  ForAnyElementType FStack_140;
  ulonglong local_138;
  FDestructionSentinel local_130;
  FDelegateAllocation *local_118;
  undefined1 local_110 [8];
  FDelegateAllocation local_108;
  undefined1 local_f8 [8];
  FDelegateAllocation local_f0;
  FBaseMenuBuilder *local_e0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_d8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  FSlateIcon local_58;
  
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_res8 = 0;
  local_e0 = *(FBaseMenuBuilder **)((longlong)this + 8);
  local_1e0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_1e0[1] = false;
  local_1c8 = 0;
  local_1d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1d0.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_160);
  lVar1 = *(longlong *)this;
  local_160[0x10] = false;
  local_138 = 0;
  local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_140.Data = (FScriptContainerElement *)0x0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_110 = (undefined1  [8])0x0;
  local_108.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_108.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_110,
             (FWriteAccessScope *)&local_130);
  local_118 = &local_108;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_108);
  if (puVar6 == (undefined8 *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_1e4 = local_208.Accessor._4_4_;
    local_1f0 = SWidgetHittestGrid::HandleIsDisplayFlagsButtonChecked;
    uStack_1e8 = 0;
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)(lVar1 + 8),
                        (TSharedRef<SWidget_const_,1> *)&local_208);
    pTVar13 = (pTVar7->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar7->Object;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__W4EDisplayGridFlags_FHittestGrid____6B_
    ;
    *(EDisplayGridFlags *)(puVar6 + 1) = param_2;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetHittestGrid___00__A6A_NXZUFDefaultDelegateUserPolicy__W4EDisplayGridFlags_FHittestGrid____6B_
    ;
    puVar6[3] = pSVar2;
    puVar6[4] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    puVar6[5] = local_1f0;
    puVar6[6] = CONCAT44(uStack_1e4,uStack_1e8);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_208.Accessor._4_4_,local_208.Accessor._0_4_));
  }
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  if (local_130.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
  }
  lVar1 = *(longlong *)this;
  local_d8._16_8_ = 0;
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_f8 = (undefined1  [8])0x0;
  local_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_f0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
             (FWriteAccessScope *)&local_130);
  local_118 = &local_f0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x38,&local_f0);
  if (puVar6 == (undefined8 *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_1e4 = local_208.Accessor._4_4_;
    local_1f0 = SWidgetHittestGrid::HandleDisplayFlagsButtonClicked;
    uStack_1e8 = 0;
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)(lVar1 + 8),
                        (TSharedRef<SWidget,1> *)&local_208);
    pTVar13 = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar9->Object;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__W4EDisplayGridFlags_FHittestGrid____6B_
    ;
    *(EDisplayGridFlags *)(puVar6 + 1) = param_2;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar8;
    *puVar6 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetHittestGrid___00__A6AXXZUFDefaultDelegateUserPolicy__W4EDisplayGridFlags_FHittestGrid____6B_
    ;
    puVar6[3] = pSVar2;
    puVar6[4] = pTVar13;
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar6[5] = local_1f0;
    puVar6[6] = CONCAT44(uStack_1e4,uStack_1e8);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)
               CONCAT44(local_208.Accessor._4_4_,local_208.Accessor._0_4_));
  }
  if (local_130.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
  }
  pFVar10 = FUIAction::FUIAction
                      ((FUIAction *)local_c0,
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_f8,
                       &local_d8,
                       (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_110,
                       RepeatDisabled);
  pFVar11 = FSlateIcon::FSlateIcon(&local_58);
  pFVar12 = FText::GetEmpty();
  local_190._0_8_ = (pFVar12->TextData).Reference;
  if ((ITextData *)local_190._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_190._0_8_ + 8))(local_190._0_8_,&local_res8);
  }
  local_190._8_4_ = pFVar12->Flags;
  local_1c0._0_8_ = (param_1->TextData).Reference;
  local_168 = 0;
  local_190[0x10] = true;
  local_178.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_170.Data = (FScriptContainerElement *)0x0;
  if ((ITextData *)local_1c0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1c0._0_8_ + 8))(local_1c0._0_8_,&local_res8);
  }
  local_1c0._8_4_ = param_1->Flags;
  local_1c0[0x10] = true;
  local_198 = 0;
  local_1a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1a0.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            (local_e0,(TAttribute<FText> *)local_1c0,(TAttribute<FText> *)local_190,pFVar11,pFVar10,
             (FName)0x0,Check,local_res10,(TAttribute<FText> *)local_160,
             (TAttribute<EVisibility> *)local_1e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1a8,(FWriteAccessScope *)&local_208);
  if (((int)local_198 != 0) && (FStack_1a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a0,0,0,0x10);
    local_198 = local_198 & 0xffffffff00000000;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_208.Accessor._4_4_,local_208.Accessor._0_4_),&local_208);
  }
  if (FStack_1a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a8.AccessDetector);
  if ((ITextData *)local_1c0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1c0._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_178,(FWriteAccessScope *)&local_208);
  if (((int)local_168 != 0) && (FStack_170.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_170.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_170,0,0,0x10);
    local_168 = local_168 & 0xffffffff00000000;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_208.Accessor._4_4_,local_208.Accessor._0_4_),&local_208);
  }
  if (FStack_170.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_170.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_178.AccessDetector);
  if ((ITextData *)local_190._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_190._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  if ((void *)local_78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
  if ((void *)local_90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
  if ((void *)local_a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c0);
  if ((void *)local_c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_148,(FWriteAccessScope *)&local_208);
  if (((int)local_138 != 0) && (FStack_140.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_140.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_140,0,0,0x10);
    local_138 = local_138 & 0xffffffff00000000;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_208.Accessor._4_4_,local_208.Accessor._0_4_),&local_208);
  }
  if (FStack_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_140.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
  if ((ITextData *)local_160._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_160._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1d8,(FWriteAccessScope *)&local_208);
  if (((int)local_1c8 != 0) && (FStack_1d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d0,0,0,0x10);
    local_1c8 = local_1c8 & 0xffffffff00000000;
  }
  if (local_208.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_208.Accessor._4_4_,local_208.Accessor._0_4_),&local_208);
  }
  if (FStack_1d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1d8.AccessDetector);
  return;
}

// Construct @ 142e46700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetHittestGrid::Construct
          (SWidgetHittestGrid *this,FArguments *param_1,TSharedPtr<SWidget_const_,1> *param_2)

{
  atomic<int> *paVar1;
  FWeakReferencer<1> *pFVar2;
  atomic<int> aVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  FSlotArguments *pFVar15;
  FArguments *pFVar16;
  ISlateStyle *pIVar17;
  FName *pFVar18;
  FArguments *pFVar19;
  FSlot *pFVar20;
  SWidget *pSVar21;
  FSlotArguments *pFVar22;
  FArguments *pFVar23;
  FText *pFVar24;
  TSharedRef<STextBlock,1> *pTVar25;
  FSizeParam *pFVar26;
  FArguments *pFVar27;
  undefined8 *puVar28;
  ulong64 uVar29;
  FArguments *pFVar30;
  TSharedRef<SBox,1> *pTVar31;
  TSharedRef<SComboButton,1> *pTVar32;
  FArguments *pFVar33;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar34;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *pTVar35;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> *pTVar36;
  TSharedRef<SCheckBox,1> *pTVar37;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SHorizontalBox,1> *pTVar38;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar39;
  TSharedRef<SBorder,1> *pTVar40;
  FArguments *pFVar41;
  TAttribute<FSlateBrush_const_*> *pTVar42;
  TSharedRef<SWidget,1> *pTVar43;
  FArguments *pFVar44;
  TAttribute<ESelectionMode::Type> *pTVar45;
  FArguments *pFVar46;
  TAttribute<FText> *pTVar47;
  FArguments *pFVar48;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SHeaderRow,1> *pTVar49;
  TSharedPtr<SHeaderRow,1> *pTVar50;
  TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar51;
  TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
  *pTVar52;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SVerticalBox,1> *pTVar53;
  undefined ***pppuVar54;
  SWidget *pSVar55;
  wchar_t *pwVar56;
  wchar_t *pwVar57;
  undefined1 auStackY_6d48 [32];
  code *local_6d18;
  TReferenceControllerBase<1> *pTStack_6d10;
  undefined2 local_6d08;
  undefined2 uStack_6d06;
  TSharedRef<SWidget,1> local_6cf8;
  FName local_6ce8;
  TSharedRef<SWidget,1> local_6ce0;
  TSharedRef<SWidget,1> local_6cc8;
  T0RequiredArgs local_6cb8;
  T0RequiredArgs local_6cb7;
  T0RequiredArgs local_6cb6;
  T0RequiredArgs local_6cb5;
  T0RequiredArgs local_6cb4;
  T0RequiredArgs local_6cb3;
  T0RequiredArgs local_6cb2;
  T0RequiredArgs local_6cb1;
  T0RequiredArgs local_6cb0;
  T0RequiredArgs local_6caf;
  T0RequiredArgs local_6cae;
  T0RequiredArgs local_6cad;
  T0RequiredArgs local_6cac;
  T0RequiredArgs local_6cab;
  T0RequiredArgs local_6caa;
  T0RequiredArgs local_6ca9;
  T0RequiredArgs local_6ca8;
  T0RequiredArgs local_6ca7;
  T0RequiredArgs local_6ca6 [14];
  TSharedRef<SWidget,1> local_6c98;
  TSharedRef<SWidget,1> local_6c88;
  undefined1 local_6c78 [8];
  ForAnyElementType local_6c70;
  int local_6c68;
  FString local_6c60;
  SComboButton *local_6c50;
  FSharedReferencer<1> local_6c48;
  STextBlock *local_6c40;
  FSharedReferencer<1> local_6c38 [2];
  TReferenceControllerBase<1> *local_6c28;
  undefined4 uStack_6c20;
  uint uStack_6c1c;
  STextBlock *local_6c18;
  SWidget *pSStack_6c10;
  SBox *local_6c08;
  TReferenceControllerBase<1> *pTStack_6c00;
  SBox *local_6bf8;
  TReferenceControllerBase<1> *pTStack_6bf0;
  STextBlock *local_6be8;
  SWidget *pSStack_6be0;
  STextBlock *local_6bd8;
  TReferenceControllerBase<1> *pTStack_6bd0;
  STextBlock *local_6bc8;
  TReferenceControllerBase<1> *pTStack_6bc0;
  SBox *local_6bb8;
  TReferenceControllerBase<1> *pTStack_6bb0;
  FSlateBrush *local_6ba8;
  undefined1 local_6ba0;
  undefined1 local_6b98 [8];
  ForAnyElementType FStack_6b90;
  ulonglong local_6b88;
  FText local_6b80;
  bool local_6b70;
  undefined1 local_6b68 [8];
  ForAnyElementType FStack_6b60;
  ulonglong local_6b58;
  FLinearColor_u_0 local_6b50;
  uint local_6b40;
  undefined1 local_6b3c;
  undefined1 local_6b38 [8];
  ForAnyElementType FStack_6b30;
  ulonglong local_6b28;
  FLinearColor_u_0 local_6b20;
  uint local_6b10;
  undefined1 local_6b0c;
  undefined1 local_6b08 [8];
  ForAnyElementType FStack_6b00;
  ulonglong local_6af8;
  undefined8 local_6af0;
  undefined8 uStack_6ae8;
  undefined1 local_6ae0;
  undefined1 local_6ad8 [8];
  ForAnyElementType FStack_6ad0;
  ulonglong local_6ac8;
  undefined8 local_6ac0;
  undefined8 uStack_6ab8;
  undefined1 local_6ab0;
  undefined1 local_6aa8 [8];
  ForAnyElementType FStack_6aa0;
  ulonglong local_6a98;
  undefined8 local_6a90;
  undefined8 uStack_6a88;
  undefined1 local_6a80;
  undefined1 local_6a78 [8];
  ForAnyElementType FStack_6a70;
  ulonglong local_6a68;
  undefined8 local_6a60;
  undefined8 uStack_6a58;
  undefined1 local_6a50;
  undefined1 local_6a48 [8];
  ForAnyElementType FStack_6a40;
  ulonglong local_6a38;
  TSharedRef<SWidget,1> local_6a30;
  TReferenceControllerBase<1> *local_6a18;
  undefined4 uStack_6a10;
  uint uStack_6a0c;
  TReferenceControllerBase<1> *local_6a08;
  TSharedPtr<SWidget_const_,1> *local_6a00;
  FDestructionSentinel local_69f8;
  FDestructionSentinel local_69e0;
  longlong *local_69c8;
  undefined4 local_69c0 [2];
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_69b8;
  FLinearColor_u_0 local_69a0;
  undefined1 local_6990;
  undefined1 local_698c;
  undefined8 local_6988;
  undefined8 uStack_6980;
  undefined8 local_6978;
  FLinearColor_u_0 local_6970;
  undefined2 local_6960;
  undefined2 uStack_695e;
  undefined1 local_695c;
  undefined8 local_6958;
  undefined8 uStack_6950;
  undefined8 local_6948;
  FLinearColor_u_0 local_6940;
  bool local_6930;
  undefined3 uStack_692f;
  undefined1 local_692c;
  undefined8 local_6928;
  undefined8 uStack_6920;
  undefined8 local_6918;
  TAttribute<FText> local_6910;
  TAttribute<FText> local_68e0;
  TAttribute<FMargin> local_68b0;
  TAttribute<FText> local_6880;
  TAttribute<FText> local_6850;
  TAttribute<FMargin> local_6820;
  TAttribute<FText> local_67f0;
  FText local_67c0;
  FText local_67b0;
  TSharedRef<SComboButton,1> local_67a0;
  TSharedRef<SBox,1> local_6790;
  TSharedRef<STextBlock,1> local_6780;
  FText local_6770;
  TSharedRef<SComboButton,1> local_6760;
  TSharedRef<SBox,1> local_6750;
  TSharedRef<STextBlock,1> local_6740;
  TSharedRef<STextBlock,1> local_6730;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_6720;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_6708;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_66f0;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_66d8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_66c0;
  FName local_66a8;
  TSharedRef<SVerticalBox,1> local_66a0;
  TSharedRef<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
  local_6690;
  TSharedRef<SHeaderRow,1> local_6680;
  FText local_6670;
  FText local_6660;
  FText local_6650;
  FText local_6640;
  TSharedRef<SBorder,1> local_6630;
  TSharedRef<SWidget,1> local_6620;
  TSharedRef<SBorder,1> local_6610;
  TSharedRef<SHorizontalBox,1> local_6600;
  TSharedRef<SCheckBox,1> local_65f0;
  TSharedRef<SBox,1> local_65e0;
  TSharedRef<STextBlock,1> local_65d0;
  FText local_65c0;
  FText local_65b0;
  TSharedRef<SCheckBox,1> local_65a0;
  TSharedRef<SBox,1> local_6590;
  TSharedRef<STextBlock,1> local_6580;
  undefined1 local_6570 [16];
  undefined1 local_6560 [32];
  undefined1 local_6540 [24];
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_6528;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_6510;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_64f8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_64e0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_64c8;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_64b0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_6498;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6480;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_6468;
  TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
  local_6450;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> local_6438;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_6420;
  undefined1 local_6408 [32];
  TAttribute<FSlateBrush_const_*> local_63e8;
  undefined1 local_63c0 [72];
  undefined4 local_6378;
  undefined1 local_6374;
  TOptional<FSizeParam> local_6368;
  FSlotArguments local_62d8;
  TAttribute<FText> local_61f0;
  TAttribute<FText> local_61c0;
  TAttribute<FText> local_6190;
  TAttribute<FText> local_6160;
  FSlotArguments local_6130;
  FSlotArguments local_6048;
  FSlotArguments local_5f60;
  FSlotArguments local_5e78;
  FSlotArguments local_5d90;
  FSlotArguments local_5ca8;
  FArguments local_5bc0;
  FArguments local_59b8;
  FArguments local_57b0;
  FArguments local_5538;
  FArguments local_50c0;
  FArguments local_4c48;
  FArguments local_47d0;
  FArguments local_4358;
  FArguments local_4020;
  FArguments local_3ce8;
  FArguments local_39a8;
  FArguments local_3668;
  FArguments local_3328;
  FArguments local_2fe8;
  FArguments local_2c08;
  FArguments local_2828;
  FArguments local_2448;
  FArguments local_2068;
  FArguments local_1b10;
  FArguments local_1630;
  FArguments local_10d8;
  FArguments local_b80;
  FArguments local_628;
  code *local_c8 [2];
  undefined **local_b8;
  code *local_b0;
  undefined ***local_a0;
  code *local_98 [2];
  undefined **local_88;
  code *local_80;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_6d48;
  local_6a00 = param_2;
  TDelegate<void___cdecl(TSharedPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnWidgetSelected,&param_1->_OnWidgetSelected);
  pSVar21 = (SWidget *)0x0;
  if (&param_1->_OnVisualizeWidget != &this->OnVisualizeWidget) {
    local_6c78 = (undefined1  [8])0x0;
    local_6c70.Data = (FScriptContainerElement *)0x0;
    local_6c68 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnVisualizeWidget,(FReadAccessScope *)&local_69b8);
    if ((*(int *)&(param_1->_OnVisualizeWidget).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(param_1->_OnVisualizeWidget).field_0x8, plVar4 != (longlong *)0x0))
    {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_6c78);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_69b8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnVisualizeWidget,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6c78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6c78,
               (FWriteAccessScope *)&local_69f8);
    if ((local_6c68 != 0) && (local_6c70.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_6c70.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_6c70,0,0,0x10);
      local_6c68 = 0;
    }
    if (local_69f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_69f8.Accessor,&local_69f8);
    }
    if (local_6c70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c70.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_6c78);
  }
  (this->ReflectorWidget).Object = param_2->Object;
  pTVar5 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar5 != (this->ReflectorWidget).WeakReferenceCount.ReferenceController) {
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (this->ReflectorWidget).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    (this->ReflectorWidget).WeakReferenceCount.ReferenceController = pTVar5;
  }
  this->DisplayGridFlags = None;
  pwVar57 = L"";
  this->bDisplayAllWindows = false;
  this->bVisualizeOnNavigation = false;
  this->bRejectWidgetReflectorEvent = false;
  pwVar56 = L"";
  local_6ce0.Object = (SWidget *)((ulonglong)local_6ce0.Object._4_4_ << 0x20);
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar56 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance;
  }
  ::FString::FString(&local_6c60,pwVar56);
  bVar14 = FConfigCacheIni::GetInt
                     (GConfig,L"WidgetReflector.Hittestgrid",L"DisplayGridFlag",(int *)&local_6ce0,
                      &local_6c60);
  if ((FName)local_6c60.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_6c60.Data.AllocatorInstance.Data);
  }
  if (bVar14) {
    this->DisplayGridFlags = (EDisplayGridFlags)local_6ce0.Object;
  }
  pwVar56 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar56 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_6c60,pwVar56);
  FConfigCacheIni::GetBool
            (GConfig,L"WidgetReflector.Hittestgrid",L"bVisualizeOnNavigation",
             &this->bVisualizeOnNavigation,&local_6c60);
  if ((FName)local_6c60.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_6c60.Data.AllocatorInstance.Data);
  }
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar57 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_6c60,pwVar57);
  FConfigCacheIni::GetBool
            (GConfig,L"WidgetReflector.Hittestgrid",L"bRejectWidgetReflectorEvent",
             &this->bRejectWidgetReflectorEvent,&local_6c60);
  if ((FName)local_6c60.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_6c60.Data.AllocatorInstance.Data);
  }
  local_6cc8.Object = (SWidget *)SVerticalBox::FArguments::FArguments(&local_59b8);
  pFVar15 = SVerticalBox::Slot(&local_5e78);
  local_6a30.Object = (SWidget *)SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar15);
  pFVar16 = SBorder::FArguments::FArguments(&local_2828);
  pIVar17 = FAppStyle::Get();
  pcVar7 = *(code **)((longlong)*pIVar17 + 0x50);
  pFVar18 = ::FName::FName(&local_66a8,"ToolPanel.GroupBorder");
  local_6ba8 = (FSlateBrush *)(*pcVar7)(pIVar17,*pFVar18,0,0);
  local_6ba0 = 1;
  local_6b88 = 0;
  local_6b98 = (undefined1  [8])0x0;
  FStack_6b90.Data = (FScriptContainerElement *)0x0;
  (pFVar16->_BorderImage).Value = local_6ba8;
  (pFVar16->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6b98);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6b98,
             (FWriteAccessScope *)&local_6d18);
  if (((int)local_6b88 != 0) && (FStack_6b90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6b90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6b90,0,0,0x10);
    local_6b88 = local_6b88 & 0xffffffff00000000;
  }
  if (local_6d08._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_6d10,(FDestructionSentinel *)&local_6d18);
  }
  if (FStack_6b90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6b90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6b98);
  fVar8 = __real_40800000;
  pFVar16 = SBorder::FArguments::Padding(pFVar16,__real_40800000);
  pFVar19 = SHorizontalBox::FArguments::FArguments(&local_5bc0);
  pFVar20 = ::operator_new(0x58);
  if (pFVar20 != (FSlot *)0x0) {
    *(undefined8 *)pFVar20 = 0;
    *(undefined8 *)&pFVar20->field_0x8 = 0;
    *(undefined8 *)&pFVar20->field_0x10 = 0;
    *(undefined8 *)&pFVar20->field_0x18 = 0;
    *(undefined8 *)&pFVar20->field_0x20 = 0;
    *(undefined8 *)&pFVar20->field_0x28 = 0;
    *(undefined8 *)&pFVar20->field_0x30 = 0;
    *(undefined8 *)&pFVar20->field_0x38 = 0;
    *(undefined8 *)&pFVar20->field_0x40 = 0;
    *(undefined8 *)&pFVar20->field_0x48 = 0;
    *(undefined8 *)&pFVar20->field_0x50 = 0;
    pSVar21 = (SWidget *)SHorizontalBox::FSlot::FSlot(pFVar20);
  }
  local_6ce0.Object = pSVar21;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_62d8,(FSlot *)&local_6ce0);
  local_62d8._80_4_ = 2;
  local_62d8._84_1_ = 1;
  pFVar22 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_62d8);
  pFVar23 = STextBlock::FArguments::FArguments(&local_2068);
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_69f8,L"SWidgetHittestGrid",L"DisplayLabel",L"Display: ");
  FText::FText(&local_6b80,pFVar24);
  local_6b70 = true;
  local_6b58 = 0;
  local_6b68 = (undefined1  [8])0x0;
  FStack_6b60.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar23->_Text).Value,&local_6b80);
  (pFVar23->_Text).bIsSet = local_6b70;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6b68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6b68,
             (FWriteAccessScope *)&local_6d18);
  if (((int)local_6b58 != 0) && (FStack_6b60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6b60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6b60,0,0,0x10);
    local_6b58 = local_6b58 & 0xffffffff00000000;
  }
  if (local_6d08._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_6d10,(FDestructionSentinel *)&local_6d18);
  }
  if (FStack_6b60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6b60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6b68);
  if (local_6b80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6b80.TextData.Reference + 0x10))();
  }
  local_6b40 = local_6b40 & 0xffffff00;
  local_6b3c = 1;
  local_6b50 = FLinearColor::White.field0_0x0;
  local_6b28 = 0;
  local_6b38 = (undefined1  [8])0x0;
  FStack_6b30.Data = (FScriptContainerElement *)0x0;
  (pFVar23->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (pFVar23->_ColorAndOpacity).Value.ColorUseRule = (undefined1)local_6b40;
  (pFVar23->_ColorAndOpacity).Value.ColorTableId = local_6b40._1_1_;
  *(undefined2 *)&(pFVar23->_ColorAndOpacity).Value.field_0x12 = local_6b40._2_2_;
  (pFVar23->_ColorAndOpacity).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6b38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6b38,
             (FWriteAccessScope *)&local_6d18);
  if (((int)local_6b28 != 0) && (FStack_6b30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6b30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6b30,0,0,0x10);
    local_6b28 = local_6b28 & 0xffffffff00000000;
  }
  if (local_6d08._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_6d10,(FDestructionSentinel *)&local_6d18);
  }
  if (FStack_6b30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6b30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6b38);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_6ce0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_6ce8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_6cf8,&local_6ce8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_69b8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0x90,&local_6cb8);
  FMemScope::~FMemScope((FMemScope *)&local_6cf8);
  FLLMScope::~FLLMScope((FLLMScope *)&local_6ce0);
  pTVar25 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_69b8,&local_6730,pFVar23);
  local_6c40 = pTVar25->Object;
  local_6c38[0].ReferenceController = (pTVar25->SharedReferenceCount).ReferenceController;
  if (local_6c38[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6c38[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_6c38[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_6c38[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_6c38[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6a08 = local_6c38[0].ReferenceController;
  if ((STextBlock **)&pFVar22->field_0x8 != &local_6c40) {
    *(STextBlock **)&pFVar22->field_0x8 = local_6c40;
    local_6c40 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar22->field_0x10,local_6c38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6c38[0].ReferenceController);
  pFVar19 = SHorizontalBox::FArguments::operator+(pFVar19,pFVar22);
  pFVar20 = ::operator_new(0x58);
  if (pFVar20 == (FSlot *)0x0) {
    local_6cf8.Object = (SWidget *)0x0;
  }
  else {
    *(undefined8 *)pFVar20 = 0;
    *(undefined8 *)&pFVar20->field_0x8 = 0;
    *(undefined8 *)&pFVar20->field_0x10 = 0;
    *(undefined8 *)&pFVar20->field_0x18 = 0;
    *(undefined8 *)&pFVar20->field_0x20 = 0;
    *(undefined8 *)&pFVar20->field_0x28 = 0;
    *(undefined8 *)&pFVar20->field_0x30 = 0;
    *(undefined8 *)&pFVar20->field_0x38 = 0;
    *(undefined8 *)&pFVar20->field_0x40 = 0;
    *(undefined8 *)&pFVar20->field_0x48 = 0;
    *(undefined8 *)&pFVar20->field_0x50 = 0;
    local_6cf8.Object = (SWidget *)SHorizontalBox::FSlot::FSlot(pFVar20);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_63c0,(FSlot *)&local_6cf8);
  pFVar26 = (FSizeParam *)FAuto::FAuto((FAuto *)local_6570);
  TOptional<FSizeParam>::operator=(&local_6368,pFVar26);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6540);
  if ((void *)local_6540._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6540._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6540);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6560);
  if ((void *)local_6560._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6560._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6560);
  local_6378 = 1;
  local_6374 = 1;
  pFVar22 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)(local_63c0 + 0x18),fVar8,0.0,0.0,0.0);
  pFVar27 = SComboButton::FArguments::FArguments(&local_4358);
  uStack_6ae8 = _UNK_150a07f98;
  local_6af0 = ___xmm_4000000040c000004000000040c00000;
  pFVar27->_HAlign = HAlign_Center;
  pFVar27->_VAlign = VAlign_Center;
  uVar13 = ___xmm_4000000040c000004000000040c00000;
  local_6ae0 = 1;
  local_6ac8 = 0;
  local_6ad8 = (undefined1  [8])0x0;
  FStack_6ad0.Data = (FScriptContainerElement *)0x0;
  ___xmm_4000000040c000004000000040c00000 = (undefined4)local_6af0;
  _UNK_150a07f94 = SUB84(local_6af0,4);
  uVar9 = _UNK_150a07f94;
  (pFVar27->_ContentPadding).Value.Left = (float)___xmm_4000000040c000004000000040c00000;
  ___xmm_4000000040c000004000000040c00000 = uVar13;
  uVar13 = _UNK_150a07f98;
  (pFVar27->_ContentPadding).Value.Top = (float)uVar9;
  _UNK_150a07f98 = (undefined4)uStack_6ae8;
  _UNK_150a07f9c = SUB84(uStack_6ae8,4);
  uVar9 = _UNK_150a07f9c;
  (pFVar27->_ContentPadding).Value.Right = (float)_UNK_150a07f98;
  _UNK_150a07f98 = uVar13;
  (pFVar27->_ContentPadding).Value.Bottom = (float)uVar9;
  (pFVar27->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6ad8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6ad8,
             (FWriteAccessScope *)&local_6d18);
  if (((int)local_6ac8 != 0) && (FStack_6ad0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6ad0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6ad0,0,0,0x10);
    local_6ac8 = local_6ac8 & 0xffffffff00000000;
  }
  if (local_6d08._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_6d10,(FDestructionSentinel *)&local_6d18);
  }
  if (FStack_6ad0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6ad0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6ad8);
  local_a0 = (undefined ***)0x0;
  local_b8 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_b0 = `SWidgetHittestGrid::Construct'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_c8[0] = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  *(undefined1 *)((longlong)&pFVar27->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar27->_padding_,
             (FWriteAccessScope *)&local_69e0);
  local_69c8 = &pFVar27->_padding_;
  puVar28 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_69c8);
  if (puVar28 != (undefined8 *)0x0) {
    *puVar28 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar29 = FDelegateHandle::GenerateNewID();
    puVar28[2] = uVar29;
    *puVar28 = &
               ___7__TBaseFunctorDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_NXZ____V__6B_
    ;
    puVar28[4] = local_c8[0];
    puVar28[9] = 0;
    if (local_c8[0] != (code *)0x0) {
      pppuVar54 = &local_b8;
      if (local_a0 != (undefined ***)0x0) {
        pppuVar54 = local_a0;
      }
      (*(code *)**pppuVar54)();
    }
  }
  if (local_69e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_69e0.Accessor,&local_69e0);
  }
  uStack_6c20 = 0;
  local_6c28 = (TReferenceControllerBase<1> *)GetDisplayMenuContent;
  pTStack_6d10 = (TReferenceControllerBase<1> *)((ulonglong)uStack_6c1c << 0x20);
  local_6d18 = GetDisplayMenuContent;
  pFVar27 = SComboButton::FArguments::OnGetMenuContent<SWidgetHittestGrid>
                      (pFVar27,this,(pmf_b128713c *)&local_6d18);
  pFVar30 = SBox::FArguments::FArguments(&local_3328);
  uVar13 = _UNK_150925088;
  local_6ab0 = 1;
  local_6a98 = 0;
  local_6ac0 = ___xmm_00000000408000000000000040800000;
  uStack_6ab8 = _UNK_150925088;
  local_6aa8 = (undefined1  [8])0x0;
  FStack_6aa0.Data = (FScriptContainerElement *)0x0;
  uVar9 = _UNK_150925084;
  (pFVar30->_Padding).Value.Left = (float)___xmm_00000000408000000000000040800000;
  uVar12 = _UNK_150925088;
  (pFVar30->_Padding).Value.Top = (float)uVar9;
  _UNK_150925088 = (undefined4)uVar13;
  _UNK_15092508c = SUB84(uVar13,4);
  uVar9 = _UNK_15092508c;
  (pFVar30->_Padding).Value.Right = (float)_UNK_150925088;
  _UNK_150925088 = uVar12;
  (pFVar30->_Padding).Value.Bottom = (float)uVar9;
  (pFVar30->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6aa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6aa8,
             (FWriteAccessScope *)&local_6d18);
  if (((int)local_6a98 != 0) && (FStack_6aa0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6aa0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6aa0,0,0,0x10);
    local_6a98 = local_6a98 & 0xffffffff00000000;
  }
  if (local_6d08._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_6d10,(FDestructionSentinel *)&local_6d18);
  }
  if (FStack_6aa0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6aa0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6aa8);
  pFVar23 = STextBlock::FArguments::FArguments(&local_628);
  uStack_6c20 = 0;
  local_6c28 = (TReferenceControllerBase<1> *)GetDisplayButtonText;
  pTStack_6d10 = (TReferenceControllerBase<1> *)((ulonglong)uStack_6c1c << 0x20);
  local_6d18 = GetDisplayButtonText;
  (pFVar23->_Text).bIsSet = true;
  TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SWidgetHittestGrid>
            ((TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(pFVar23->_Text).Getter,this,(pmf_42f7b9ee *)&local_6d18);
  local_6b10 = local_6b10 & 0xffffff00;
  local_6af8 = 0;
  local_6b0c = 1;
  local_6b20 = FLinearColor::White.field0_0x0;
  local_6b08 = (undefined1  [8])0x0;
  FStack_6b00.Data = (FScriptContainerElement *)0x0;
  (pFVar23->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (pFVar23->_ColorAndOpacity).Value.ColorUseRule = (undefined1)local_6b10;
  (pFVar23->_ColorAndOpacity).Value.ColorTableId = local_6b10._1_1_;
  *(undefined2 *)&(pFVar23->_ColorAndOpacity).Value.field_0x12 = local_6b10._2_2_;
  (pFVar23->_ColorAndOpacity).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6b08);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6b08,
             (FWriteAccessScope *)&local_6d18);
  if (((int)local_6af8 != 0) && (FStack_6b00.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6b00.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6b00,0,0,0x10);
    local_6af8 = local_6af8 & 0xffffffff00000000;
  }
  if (local_6d08._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_6d10,(FDestructionSentinel *)&local_6d18);
  }
  if (FStack_6b00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6b00.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6b08);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_6ce0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_6cf8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_6ce8,(FName *)&local_6cf8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_69e0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0xa5,&local_6cb7);
  FMemScope::~FMemScope((FMemScope *)&local_6ce8);
  FLLMScope::~FLLMScope((FLLMScope *)&local_6ce0);
  pTVar25 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_69e0,
                       &local_6740,pFVar23);
  local_6bc8 = pTVar25->Object;
  local_6c28 = (pTVar25->SharedReferenceCount).ReferenceController;
  if (local_6c28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_6c28->SharedReferenceCount = (atomic<int>)((int)local_6c28->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    local_6c28->SharedReferenceCount = (atomic<int>)((int)local_6c28->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar30->_Content).Widget.Object = (SWidget *)local_6bc8;
  (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController = local_6c28;
  pTStack_6bc0 = local_6c28;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_6ce0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_6cf8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_6ce8,(FName *)&local_6cf8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_66c0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0xa2,&local_6cb6);
  FMemScope::~FMemScope((FMemScope *)&local_6ce8);
  FLLMScope::~FLLMScope((FLLMScope *)&local_6ce0);
  pTVar31 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_66c0,&local_6750,pFVar30);
  local_6bf8 = pTVar31->Object;
  pTStack_6bf0 = (pTVar31->SharedReferenceCount).ReferenceController;
  if (pTStack_6bf0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_6bf0->SharedReferenceCount = (atomic<int>)((int)pTStack_6bf0->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTStack_6bf0->SharedReferenceCount = (atomic<int>)((int)pTStack_6bf0->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar27->_ButtonContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar27->_ButtonContent).Widget.Object = (SWidget *)local_6bf8;
  (pFVar27->_ButtonContent).Widget.SharedReferenceCount.ReferenceController = pTStack_6bf0;
  local_6bc8 = (STextBlock *)pTStack_6bf0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_6ce0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_6cf8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_6ce8,(FName *)&local_6cf8,true);
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>
            (&local_66d8,"SComboButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0x9a,&local_6cb5);
  FMemScope::~FMemScope((FMemScope *)&local_6ce8);
  FLLMScope::~FLLMScope((FLLMScope *)&local_6ce0);
  pTVar32 = TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_66d8,&local_6760,pFVar27);
  local_6c50 = pTVar32->Object;
  local_6c48.ReferenceController = (pTVar32->SharedReferenceCount).ReferenceController;
  if (local_6c48.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6c48.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_6c48.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_6c48.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_6c48.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6bf8 = (SBox *)local_6c48.ReferenceController;
  if ((SComboButton **)&pFVar22->field_0x8 != &local_6c50) {
    *(SComboButton **)&pFVar22->field_0x8 = local_6c50;
    local_6c50 = (SComboButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar22->field_0x10,&local_6c48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6c48.ReferenceController);
  pFVar19 = SHorizontalBox::FArguments::operator+(pFVar19,pFVar22);
  pFVar20 = ::operator_new(0x58);
  pSVar21 = (SWidget *)0x0;
  if (pFVar20 != (FSlot *)0x0) {
    *(undefined8 *)pFVar20 = 0;
    *(undefined8 *)&pFVar20->field_0x8 = 0;
    *(undefined8 *)&pFVar20->field_0x10 = 0;
    *(undefined8 *)&pFVar20->field_0x18 = 0;
    *(undefined8 *)&pFVar20->field_0x20 = 0;
    *(undefined8 *)&pFVar20->field_0x28 = 0;
    *(undefined8 *)&pFVar20->field_0x30 = 0;
    *(undefined8 *)&pFVar20->field_0x38 = 0;
    *(undefined8 *)&pFVar20->field_0x40 = 0;
    *(undefined8 *)&pFVar20->field_0x48 = 0;
    *(undefined8 *)&pFVar20->field_0x50 = 0;
    pSVar21 = (SWidget *)SHorizontalBox::FSlot::FSlot(pFVar20);
  }
  local_6cf8.Object = pSVar21;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_6048,(FSlot *)&local_6cf8);
  pSVar21 = (SWidget *)SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_6048);
  pFVar2 = &(pSVar21->PersistentState).PaintParent.WeakReferenceCount;
  if ((FWeakReferencer<1> *)local_69c0 != pFVar2) {
    *(undefined4 *)&pFVar2->ReferenceController = 1;
    *(undefined1 *)
     ((longlong)&(pSVar21->PersistentState).PaintParent.WeakReferenceCount.ReferenceController + 4)
         = 1;
  }
  pSVar55 = (SWidget *)0x0;
  if (pFVar2 != (FWeakReferencer<1> *)0x0) {
    pSVar55 = pSVar21;
  }
  pFVar22 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pSVar55->FastPathProxyHandle,fVar8,0.0,0.0,0.0);
  pFVar27 = SComboButton::FArguments::FArguments(&local_4020);
  uStack_6a88 = _UNK_150a07f98;
  local_6a90 = ___xmm_4000000040c000004000000040c00000;
  pFVar27->_HAlign = HAlign_Center;
  pFVar27->_VAlign = VAlign_Center;
  uVar13 = ___xmm_4000000040c000004000000040c00000;
  local_6a80 = 1;
  local_6a68 = 0;
  local_6a78 = (undefined1  [8])0x0;
  FStack_6a70.Data = (FScriptContainerElement *)0x0;
  ___xmm_4000000040c000004000000040c00000 = (undefined4)local_6a90;
  _UNK_150a07f94 = SUB84(local_6a90,4);
  uVar9 = _UNK_150a07f94;
  (pFVar27->_ContentPadding).Value.Left = (float)___xmm_4000000040c000004000000040c00000;
  ___xmm_4000000040c000004000000040c00000 = uVar13;
  uVar13 = _UNK_150a07f98;
  (pFVar27->_ContentPadding).Value.Top = (float)uVar9;
  _UNK_150a07f98 = (undefined4)uStack_6a88;
  _UNK_150a07f9c = SUB84(uStack_6a88,4);
  uVar9 = _UNK_150a07f9c;
  (pFVar27->_ContentPadding).Value.Right = (float)_UNK_150a07f98;
  _UNK_150a07f98 = uVar13;
  (pFVar27->_ContentPadding).Value.Bottom = (float)uVar9;
  (pFVar27->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar27->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6a78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6a78,
             (FWriteAccessScope *)&local_6d18);
  if (((int)local_6a68 != 0) && (FStack_6a70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6a70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6a70,0,0,0x10);
    local_6a68 = local_6a68 & 0xffffffff00000000;
  }
  if (local_6d08._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_6d10,(FDestructionSentinel *)&local_6d18);
  }
  if (FStack_6a70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6a70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6a78);
  local_70 = 0;
  local_88 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_80 = `SWidgetHittestGrid::Construct'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
  local_98[0] = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  pFVar27 = TSlateBaseNamedArgs<SComboButton>::IsEnabled_Lambda
                      ((TSlateBaseNamedArgs<SComboButton> *)pFVar27,
                       (TFunction<bool___cdecl(void)> *)local_98);
  uStack_6a10 = 0;
  local_6a18 = (TReferenceControllerBase<1> *)GetFlagsMenuContent;
  pTStack_6d10 = (TReferenceControllerBase<1> *)((ulonglong)uStack_6a0c << 0x20);
  local_6d18 = GetFlagsMenuContent;
  pFVar27 = SComboButton::FArguments::OnGetMenuContent<SWidgetHittestGrid>
                      (pFVar27,this,(pmf_b128713c *)&local_6d18);
  pFVar30 = SBox::FArguments::FArguments(&local_3668);
  uVar13 = _UNK_150925088;
  local_6a50 = 1;
  local_6a38 = 0;
  local_6a60 = ___xmm_00000000408000000000000040800000;
  uStack_6a58 = _UNK_150925088;
  local_6a48 = (undefined1  [8])0x0;
  FStack_6a40.Data = (FScriptContainerElement *)0x0;
  uVar9 = _UNK_150925084;
  (pFVar30->_Padding).Value.Left = (float)___xmm_00000000408000000000000040800000;
  uVar12 = _UNK_150925088;
  (pFVar30->_Padding).Value.Top = (float)uVar9;
  _UNK_150925088 = (undefined4)uVar13;
  _UNK_15092508c = SUB84(uVar13,4);
  uVar9 = _UNK_15092508c;
  (pFVar30->_Padding).Value.Right = (float)_UNK_150925088;
  _UNK_150925088 = uVar12;
  (pFVar30->_Padding).Value.Bottom = (float)uVar9;
  (pFVar30->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6a48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6a48,
             (FWriteAccessScope *)&local_6d18);
  if (((int)local_6a38 != 0) && (FStack_6a40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6a40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6a40,0,0,0x10);
    local_6a38 = local_6a38 & 0xffffffff00000000;
  }
  if (local_6d08._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_6d10,(FDestructionSentinel *)&local_6d18);
  }
  if (FStack_6a40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6a40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6a48);
  pFVar23 = STextBlock::FArguments::FArguments(&local_b80);
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_6770,L"SWidgetHittestGrid",L"DisplayFlagsLabel",L"Display Flags");
  FText::FText(&local_6910.Value,pFVar24);
  local_6910.bIsSet = true;
  local_6910.Getter._16_8_ = 0;
  local_6910.Getter._0_8_ = 0;
  local_6910.Getter._8_8_ = 0;
  pFVar23 = STextBlock::FArguments::Text(pFVar23,&local_6910);
  local_6990 = 0;
  local_6978 = 0;
  local_698c = 1;
  local_69a0 = FLinearColor::White.field0_0x0;
  local_6988 = 0;
  uStack_6980 = 0;
  pFVar23 = STextBlock::FArguments::ColorAndOpacity
                      (pFVar23,(TAttribute<FSlateColor> *)&local_69a0._s_0);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_6ce0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_6cf8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_6ce8,(FName *)&local_6cf8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_66f0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0xbc,&local_6cb4);
  FMemScope::~FMemScope((FMemScope *)&local_6ce8);
  FLLMScope::~FLLMScope((FLLMScope *)&local_6ce0);
  pTVar25 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_66f0,&local_6780,pFVar23);
  local_6bd8 = pTVar25->Object;
  pTStack_6bd0 = (pTVar25->SharedReferenceCount).ReferenceController;
  if (pTStack_6bd0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_6bd0->SharedReferenceCount = (atomic<int>)((int)pTStack_6bd0->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTStack_6bd0->SharedReferenceCount = (atomic<int>)((int)pTStack_6bd0->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar30->_Content).Widget.Object = (SWidget *)local_6bd8;
  (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController = pTStack_6bd0;
  local_6a18 = pTStack_6bd0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_6ce0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_6cf8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_6ce8,(FName *)&local_6cf8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_6708,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0xb9,&local_6cb3);
  FMemScope::~FMemScope((FMemScope *)&local_6ce8);
  FLLMScope::~FLLMScope((FLLMScope *)&local_6ce0);
  pTVar31 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_6708,&local_6790,pFVar30);
  local_6bb8 = pTVar31->Object;
  local_6bd8 = (STextBlock *)(pTVar31->SharedReferenceCount).ReferenceController;
  if (local_6bd8 != (STextBlock *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_6bd8)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_6bd8)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    ((TReferenceControllerBase<1> *)local_6bd8)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_6bd8)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar27->_ButtonContent).Widget.SharedReferenceCount.ReferenceController;
  (pFVar27->_ButtonContent).Widget.Object = (SWidget *)local_6bb8;
  (pFVar27->_ButtonContent).Widget.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_6bd8;
  pTStack_6bb0 = (TReferenceControllerBase<1> *)local_6bd8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_6ce0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_6cf8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_6ce8,(FName *)&local_6cf8,true);
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>
            (&local_6720,"SComboButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0xb1,&local_6cb2);
  FMemScope::~FMemScope((FMemScope *)&local_6ce8);
  FLLMScope::~FLLMScope((FLLMScope *)&local_6ce0);
  pTVar32 = TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_6720,&local_67a0,pFVar27);
  local_6c98.Object = (SWidget *)pTVar32->Object;
  local_6c98.SharedReferenceCount.ReferenceController =
       (pTVar32->SharedReferenceCount).ReferenceController;
  if (local_6c98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6c98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6c98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6bb8 = (SBox *)local_6c98.SharedReferenceCount.ReferenceController;
  pFVar22 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar22,&local_6c98);
  pFVar19 = SHorizontalBox::FArguments::operator+(pFVar19,pFVar22);
  pFVar20 = ::operator_new(0x58);
  if (pFVar20 == (FSlot *)0x0) {
    local_6cf8.Object = (SWidget *)0x0;
  }
  else {
    *(undefined8 *)pFVar20 = 0;
    *(undefined8 *)&pFVar20->field_0x8 = 0;
    *(undefined8 *)&pFVar20->field_0x10 = 0;
    *(undefined8 *)&pFVar20->field_0x18 = 0;
    *(undefined8 *)&pFVar20->field_0x20 = 0;
    *(undefined8 *)&pFVar20->field_0x28 = 0;
    *(undefined8 *)&pFVar20->field_0x30 = 0;
    *(undefined8 *)&pFVar20->field_0x38 = 0;
    *(undefined8 *)&pFVar20->field_0x40 = 0;
    *(undefined8 *)&pFVar20->field_0x48 = 0;
    *(undefined8 *)&pFVar20->field_0x50 = 0;
    local_6cf8.Object = (SWidget *)SHorizontalBox::FSlot::FSlot(pFVar20);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments(&local_6130,(FSlot *)&local_6cf8);
  pFVar22 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(&local_6130);
  pFVar22 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar22->field_0x18,__real_41000000,0.0,0.0,0.0);
  pFVar33 = SCheckBox::FArguments::FArguments(&local_2c08);
  local_6d08._0_1_ = true;
  local_6d08._1_1_ = 0;
  local_6960 = 2;
  uStack_695e = uStack_6d06;
  local_6970._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_6970._8_8_ = _UNK_15090c6d8;
  local_695c = 1;
  local_6958 = 0;
  uStack_6950 = 0;
  local_6948 = 0;
  pFVar33 = SCheckBox::FArguments::ForegroundColor
                      (pFVar33,(TAttribute<FSlateColor> *)&local_6970._s_0);
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_67b0,L"SWidgetHittestGrid",L"PickOnNavigateTooltip",
                       L"Attempt to pick the widget in the Widget Reflector when navigation via the hit test grid occurred."
                      );
  FText::FText(&local_68e0.Value,pFVar24);
  local_68e0.bIsSet = true;
  local_68e0.Getter._16_8_ = 0;
  local_68e0.Getter._0_8_ = 0;
  local_68e0.Getter._8_8_ = 0;
  pFVar33 = TSlateBaseNamedArgs<SCheckBox>::ToolTipText
                      ((TSlateBaseNamedArgs<SCheckBox> *)pFVar33,&local_68e0);
  local_6c98.SharedReferenceCount.ReferenceController =
       local_6c98.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_6c98.Object = (SWidget *)HandleGetVisualizeOnNavigationChecked;
  local_6d18 = HandleGetVisualizeOnNavigationChecked;
  pTStack_6d10 = local_6c98.SharedReferenceCount.ReferenceController;
  pFVar33 = SCheckBox::FArguments::IsChecked<SWidgetHittestGrid>
                      (pFVar33,this,(pmf_1ac8463d *)&local_6d18);
  local_6c98.SharedReferenceCount.ReferenceController =
       local_6c98.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_6c98.Object = (SWidget *)HandleVisualizeOnNavigationChanged;
  local_6d18 = HandleVisualizeOnNavigationChanged;
  pTStack_6d10 = local_6c98.SharedReferenceCount.ReferenceController;
  pFVar33 = SCheckBox::FArguments::OnCheckStateChanged<SWidgetHittestGrid>
                      (pFVar33,this,(pmf_e355da83 *)&local_6d18);
  pFVar30 = SBox::FArguments::FArguments(&local_39a8);
  uVar10 = _UNK_150925358;
  uVar13 = ___xmm_40000000408000004000000040800000;
  pFVar30->_VAlign = VAlign_Center;
  pFVar30->_HAlign = HAlign_Center;
  uVar11 = _UNK_150925358;
  uVar12 = ___xmm_40000000408000004000000040800000;
  ___xmm_40000000408000004000000040800000 = (float)uVar13;
  _UNK_150925354 = SUB84(uVar13,4);
  local_68b0.Value.Left = ___xmm_40000000408000004000000040800000;
  local_68b0.Value.Top = _UNK_150925354;
  _UNK_150925358 = (float)uVar10;
  _UNK_15092535c = SUB84(uVar10,4);
  local_68b0.Value.Right = _UNK_150925358;
  local_68b0.Value.Bottom = _UNK_15092535c;
  local_68b0.bIsSet = true;
  local_68b0.Getter._0_8_ = 0;
  local_68b0.Getter._8_8_ = 0;
  local_68b0.Getter._16_8_ = 0;
  ___xmm_40000000408000004000000040800000 = uVar12;
  _UNK_150925358 = uVar11;
  pFVar30 = SBox::FArguments::Padding(pFVar30,&local_68b0);
  pFVar23 = STextBlock::FArguments::FArguments(&local_10d8);
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_67c0,L"SWidgetHittestGrid",L"PickOnNavigate",
                       L"Visualize on Navigation");
  FText::FText(&local_6880.Value,pFVar24);
  local_6880.bIsSet = true;
  local_6880.Getter._16_8_ = 0;
  local_6880.Getter._0_8_ = 0;
  local_6880.Getter._8_8_ = 0;
  pFVar23 = STextBlock::FArguments::Text(pFVar23,&local_6880);
  pTVar34 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_6480,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0xd2,&local_6cb1);
  pTVar25 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar34,&local_6580,pFVar23);
  local_6be8 = pTVar25->Object;
  local_6c98.Object = (SWidget *)(pTVar25->SharedReferenceCount).ReferenceController;
  if (local_6c98.Object != (SWidget *)0x0) {
    LOCK();
    *(atomic<int> *)&(local_6c98.Object)->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&(local_6c98.Object)->_padding_ + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)&(local_6c98.Object)->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&(local_6c98.Object)->_padding_ + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar30->_Content).Widget.Object = (SWidget *)local_6be8;
  (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_6c98.Object;
  pSStack_6be0 = local_6c98.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar35 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_6498,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0xcd,&local_6cb0);
  pTVar31 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar35,&local_6590,pFVar30);
  local_6c08 = pTVar31->Object;
  pTStack_6c00 = (pTVar31->SharedReferenceCount).ReferenceController;
  if (pTStack_6c00 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_6c00->SharedReferenceCount = (atomic<int>)((int)pTStack_6c00->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTStack_6c00->SharedReferenceCount = (atomic<int>)((int)pTStack_6c00->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar33->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar33->_Content).Widget.Object = (SWidget *)local_6c08;
  (pFVar33->_Content).Widget.SharedReferenceCount.ReferenceController = pTStack_6c00;
  local_6be8 = (STextBlock *)pTStack_6c00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar36 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                      (&local_64b0,"SCheckBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,199,&local_6caf);
  pTVar37 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar36,&local_65a0,pFVar33);
  local_6c88.Object = (SWidget *)pTVar37->Object;
  local_6c88.SharedReferenceCount.ReferenceController =
       (pTVar37->SharedReferenceCount).ReferenceController;
  if (local_6c88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6c88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6c88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6c08 = (SBox *)local_6c88.SharedReferenceCount.ReferenceController;
  pFVar22 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar22,&local_6c88);
  pFVar19 = SHorizontalBox::FArguments::operator+(pFVar19,pFVar22);
  pFVar22 = SHorizontalBox::Slot(&local_5f60);
  pFVar22 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar22);
  pFVar22 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar22->field_0x18,__real_41000000,0.0,0.0,0.0);
  pFVar33 = SCheckBox::FArguments::FArguments(&local_2448);
  local_6d08 = 2;
  uVar9 = _local_6d08;
  local_6d08._0_1_ = SUB21(2,0);
  stack0xffffffffffff92f9 = SUB43(uVar9,1);
  local_6930 = local_6d08._0_1_;
  uStack_692f = stack0xffffffffffff92f9;
  local_6940._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_6940._8_8_ = _UNK_15090c6d8;
  local_692c = 1;
  local_6928 = 0;
  uStack_6920 = 0;
  local_6918 = 0;
  _local_6d08 = uVar9;
  pFVar33 = SCheckBox::FArguments::ForegroundColor
                      (pFVar33,(TAttribute<FSlateColor> *)&local_6940._s_0);
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_65b0,L"SWidgetHittestGrid",L"RejectWidgetReflectorTooltip",
                       L"Reject navigation event originated from the Widget Reflector.");
  FText::FText(&local_6850.Value,pFVar24);
  local_6850.bIsSet = true;
  local_6850.Getter._16_8_ = 0;
  local_6850.Getter._0_8_ = 0;
  local_6850.Getter._8_8_ = 0;
  pFVar33 = TSlateBaseNamedArgs<SCheckBox>::ToolTipText
                      ((TSlateBaseNamedArgs<SCheckBox> *)pFVar33,&local_6850);
  local_6c88.SharedReferenceCount.ReferenceController =
       local_6c88.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_6c88.Object = (SWidget *)HandleGetRejectWidgetReflectorChecked;
  local_6d18 = HandleGetRejectWidgetReflectorChecked;
  pTStack_6d10 = local_6c88.SharedReferenceCount.ReferenceController;
  pFVar33 = SCheckBox::FArguments::IsChecked<SWidgetHittestGrid>
                      (pFVar33,this,(pmf_1ac8463d *)&local_6d18);
  local_6c88.SharedReferenceCount.ReferenceController =
       local_6c88.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_6c88.Object = (SWidget *)HandleRejectWidgetReflectorChanged;
  local_6d18 = HandleRejectWidgetReflectorChanged;
  pTStack_6d10 = local_6c88.SharedReferenceCount.ReferenceController;
  pFVar33 = SCheckBox::FArguments::OnCheckStateChanged<SWidgetHittestGrid>
                      (pFVar33,this,(pmf_e355da83 *)&local_6d18);
  pFVar30 = SBox::FArguments::FArguments(&local_3ce8);
  uVar10 = _UNK_150925358;
  uVar13 = ___xmm_40000000408000004000000040800000;
  pFVar30->_VAlign = VAlign_Center;
  pFVar30->_HAlign = HAlign_Center;
  uVar11 = _UNK_150925358;
  uVar12 = ___xmm_40000000408000004000000040800000;
  ___xmm_40000000408000004000000040800000 = (float)uVar13;
  _UNK_150925354 = SUB84(uVar13,4);
  local_6820.Value.Left = ___xmm_40000000408000004000000040800000;
  local_6820.Value.Top = _UNK_150925354;
  _UNK_150925358 = (float)uVar10;
  _UNK_15092535c = SUB84(uVar10,4);
  local_6820.Value.Right = _UNK_150925358;
  local_6820.Value.Bottom = _UNK_15092535c;
  local_6820.bIsSet = true;
  local_6820.Getter._16_8_ = 0;
  local_6820.Getter._0_8_ = 0;
  local_6820.Getter._8_8_ = 0;
  ___xmm_40000000408000004000000040800000 = uVar12;
  _UNK_150925358 = uVar11;
  pFVar30 = SBox::FArguments::Padding(pFVar30,&local_6820);
  pFVar23 = STextBlock::FArguments::FArguments(&local_1630);
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_65c0,L"SWidgetHittestGrid",L"RejectWidgetReflector",
                       L"Reject Widget Reflector navigation events");
  FText::FText(&local_67f0.Value,pFVar24);
  local_67f0.bIsSet = true;
  local_67f0.Getter._16_8_ = 0;
  local_67f0.Getter._0_8_ = 0;
  local_67f0.Getter._8_8_ = 0;
  pFVar23 = STextBlock::FArguments::Text(pFVar23,&local_67f0);
  pTVar34 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_64c8,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0xe7,&local_6cae);
  pTVar25 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar34,&local_65d0,pFVar23);
  local_6c18 = pTVar25->Object;
  local_6c88.Object = (SWidget *)(pTVar25->SharedReferenceCount).ReferenceController;
  if (local_6c88.Object != (SWidget *)0x0) {
    LOCK();
    *(atomic<int> *)&(local_6c88.Object)->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&(local_6c88.Object)->_padding_ + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)&(local_6c88.Object)->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&(local_6c88.Object)->_padding_ + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar30->_Content).Widget.Object = (SWidget *)local_6c18;
  (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_6c88.Object;
  pSStack_6c10 = local_6c88.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar35 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_64e0,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0xe2,&local_6cad);
  pTVar31 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar35,&local_65e0,pFVar30);
  local_6cf8.Object = (SWidget *)pTVar31->Object;
  local_6cf8.SharedReferenceCount.ReferenceController =
       (pTVar31->SharedReferenceCount).ReferenceController;
  if (local_6cf8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6cf8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6cf8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_6cf8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6cf8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar33->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar33->_Content).Widget.Object = local_6cf8.Object;
  (pFVar33->_Content).Widget.SharedReferenceCount.ReferenceController =
       local_6cf8.SharedReferenceCount.ReferenceController;
  local_6c18 = (STextBlock *)local_6cf8.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar36 = MakeTDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
                      (&local_64f8,"SCheckBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0xdc,&local_6cac);
  pTVar37 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar36,&local_65f0,pFVar33);
  local_6cf8.Object = (SWidget *)pTVar37->Object;
  local_6cf8.SharedReferenceCount.ReferenceController =
       (pTVar37->SharedReferenceCount).ReferenceController;
  if ((FName)local_6cf8.SharedReferenceCount.ReferenceController != (FName)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_6cf8.SharedReferenceCount.ReferenceController + 8) =
         (atomic<int>)
         ((int)*(atomic<int> *)((longlong)local_6cf8.SharedReferenceCount.ReferenceController + 8) +
         1);
    UNLOCK();
  }
  local_6ce8 = (FName)local_6cf8.SharedReferenceCount.ReferenceController;
  pFVar22 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar22,&local_6cf8);
  pFVar19 = SHorizontalBox::FArguments::operator+(pFVar19,pFVar22);
  this_00 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_6510,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0x8a,&local_6cab);
  pTVar38 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_6600,pFVar19);
  pTVar5 = (pTVar38->SharedReferenceCount).ReferenceController;
  local_6cf8.Object = (SWidget *)pTVar38->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar16->_Content).Widget.Object = local_6cf8.Object;
  (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  local_6cf8.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pTVar39 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_6528,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0x86,&local_6caa);
  pTVar40 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar39,&local_6610,pFVar16);
  local_6ce0.Object = (SWidget *)pTVar40->Object;
  local_6cf8.Object = (SWidget *)(pTVar40->SharedReferenceCount).ReferenceController;
  if (local_6cf8.Object != (SWidget *)0x0) {
    LOCK();
    *(atomic<int> *)&(local_6cf8.Object)->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&(local_6cf8.Object)->_padding_ + 1);
    UNLOCK();
  }
  local_6ce0.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_6cf8.Object;
  pFVar15 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_6a30.Object,&local_6ce0);
  pFVar41 = SVerticalBox::FArguments::operator+((FArguments *)local_6cc8.Object,pFVar15);
  pFVar15 = SVerticalBox::Slot(&local_5ca8);
  pFVar15 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar15);
  pFVar16 = SBorder::FArguments::FArguments(&local_2fe8);
  pIVar17 = FAppStyle::Get();
  pcVar7 = *(code **)((longlong)*pIVar17 + 0x50);
  pFVar18 = ::FName::FName((FName *)&local_6c60,"ToolPanel.GroupBorder");
  local_6cc8.Object = (SWidget *)(*pcVar7)(pIVar17,*pFVar18,0,0);
  pTVar42 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                      (&local_63e8,(FSlateBrush **)&local_6cc8);
  pFVar16 = SBorder::FArguments::BorderImage(pFVar16,pTVar42);
  pFVar16 = SBorder::FArguments::Padding(pFVar16,fVar8);
  pTVar43 = ConstructNavigationDetail(this,&local_6620);
  pFVar16 = SBorder::FArguments::operator[](pFVar16,pTVar43);
  pTVar39 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_6420,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0xf2,&local_6ca9);
  pTVar40 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar39,&local_6630,pFVar16);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>
            ((TSharedRef<SWidget,1> *)&local_6d18,pTVar40);
  pFVar15 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar15,(TSharedRef<SWidget,1> *)&local_6d18);
  pFVar41 = SVerticalBox::FArguments::operator+(pFVar41,pFVar15);
  pFVar15 = SVerticalBox::Slot(&local_5d90);
  pFVar44 = SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FArguments
            ::FArguments(&local_1b10);
  pFVar44 = SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FArguments
            ::ListItemsSource(pFVar44,&this->IntermediateResultNodesRoot);
  local_6ce0.Object._0_4_ = 1;
  pTVar45 = TAttribute<enum_ESelectionMode::Type>::TAttribute<enum_ESelectionMode::Type>
                      (local_6408,(Type *)&local_6ce0);
  pFVar44 = SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FArguments
            ::SelectionMode(pFVar44,pTVar45);
  local_6cc8.SharedReferenceCount.ReferenceController._0_4_ = 0;
  local_6cc8.Object = (SWidget *)HandleWidgetHittestGridGenerateRow;
  pFVar44 = SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FArguments
            ::OnGenerateRow<SWidgetHittestGrid>(pFVar44,this,(pmf_30e561b9 *)&local_6cc8);
  local_6cc8.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       ((ulonglong)local_6cc8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  local_6cc8.Object = (SWidget *)HandleWidgetHittestGridSelectionChanged;
  pFVar44 = SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FArguments
            ::OnSelectionChanged<SWidgetHittestGrid>(pFVar44,this,(pmf_581cb65a *)&local_6cc8);
  pFVar46 = SHeaderRow::FArguments::FArguments(&local_57b0);
  SHeaderRow::FColumn::FArguments::FArguments(&local_5538);
  local_5538._ColumnId = WidgetHittestGridInternal::Header_Index;
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_6640,L"SWidgetHittestGrid",L"IndexHeader",L"Index");
  pTVar47 = TAttribute<FText>::TAttribute<FText>(&local_61f0,pFVar24);
  pFVar48 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_5538,pTVar47);
  local_6ce0.Object = (SWidget *)CONCAT35(local_6ce0.Object._5_3_,0x142200000);
  pFVar48 = SHeaderRow::FColumn::FArguments::FixedWidth(pFVar48,(TOptional<float>)&local_6ce0);
  pFVar46 = SHeaderRow::FArguments::operator+(pFVar46,pFVar48);
  SHeaderRow::FColumn::FArguments::FArguments(&local_47d0);
  local_47d0._ColumnId = WidgetHittestGridInternal::Header_WidgetName;
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_6650,L"SWidgetHittestGrid",L"WidgetNameHeader",L"Widget Name");
  pTVar47 = TAttribute<FText>::TAttribute<FText>(&local_61c0,pFVar24);
  pFVar48 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_47d0,pTVar47);
  pFVar46 = SHeaderRow::FArguments::operator+(pFVar46,pFVar48);
  SHeaderRow::FColumn::FArguments::FArguments(&local_4c48);
  local_4c48._ColumnId = WidgetHittestGridInternal::Header_Result;
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_6660,L"SWidgetHittestGrid",L"StateHeader",L"Result");
  pTVar47 = TAttribute<FText>::TAttribute<FText>(&local_6190,pFVar24);
  pFVar48 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_4c48,pTVar47);
  pFVar46 = SHeaderRow::FArguments::operator+(pFVar46,pFVar48);
  SHeaderRow::FColumn::FArguments::FArguments(&local_50c0);
  local_50c0._ColumnId = WidgetHittestGridInternal::Header_WidgetInfo;
  pFVar24 = FText::AsLocalizable_Advanced_LocText
                      (&local_6670,L"SWidgetHittestGrid",L"SourceHeader",L"Source");
  pTVar47 = TAttribute<FText>::TAttribute<FText>(&local_6160,pFVar24);
  pFVar48 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_50c0,pTVar47);
  pFVar46 = SHeaderRow::FArguments::operator+(pFVar46,pFVar48);
  this_01 = MakeTDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>
                      (&local_6438,"SHeaderRow",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0x103,&local_6ca8);
  pTVar49 = TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_6680,pFVar46);
  pTVar50 = TSharedPtr<SHeaderRow,1>::TSharedPtr<SHeaderRow,1><SHeaderRow>
                      ((TSharedPtr<SHeaderRow,1> *)local_6c78,pTVar49);
  pFVar44 = SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FArguments
            ::HeaderRow(pFVar44,pTVar50);
  pTVar51 = MakeTDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
                      (&local_6450,"SWidgetHittestGridTree",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0xfc,&local_6ca7);
  pTVar51 = TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
            ::Expose<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_>
                      (pTVar51,&this->NavigationIntermediateResultTree);
  pTVar52 = TSlateDecl<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,RequiredArgs::T0RequiredArgs>
            ::operator<<=(pTVar51,&local_6690,pFVar44);
  TSharedRef<SWidget,1>::
  TSharedRef<SWidget,1><SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_>
            (&local_6a30,pTVar52);
  pFVar15 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar15,&local_6a30);
  pFVar41 = SVerticalBox::FArguments::operator+(pFVar41,pFVar15);
  this_02 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_6468,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0x81,local_6ca6);
  pTVar53 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_66a0,pFVar41);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_6cc8,pTVar53);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_6cc8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6cc8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_66a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6468._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6a30.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6690.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6450._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6680.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6438._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_6670);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_50c0);
  FText::~FText(&local_6660);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_4c48);
  FText::~FText(&local_6650);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_47d0);
  FText::~FText(&local_6640);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_5538);
  SHeaderRow::FArguments::~FArguments(&local_57b0);
  SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FArguments::
  ~FArguments(&local_1b10);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5d90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_6d10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6630.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6420._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6620.SharedReferenceCount.ReferenceController);
  SBorder::FArguments::~FArguments(&local_2fe8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5ca8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6cf8.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6610.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6528._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6600.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6510._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6ce8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_65f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_64f8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6c18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_65e0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_64e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6c88.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_65d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_64c8._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_65c0);
  STextBlock::FArguments::~FArguments(&local_1630);
  SBox::FArguments::~FArguments(&local_3ce8);
  FText::~FText(&local_65b0);
  SCheckBox::FArguments::~FArguments(&local_2448);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5f60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6c08);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_65a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_64b0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6be8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6590.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6498._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6c98.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6580.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6480._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_67c0);
  STextBlock::FArguments::~FArguments(&local_10d8);
  SBox::FArguments::~FArguments(&local_39a8);
  FText::~FText(&local_67b0);
  SCheckBox::FArguments::~FArguments(&local_2c08);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6130);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6bb8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_67a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6720._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6bd8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6790.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6708._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6a18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6780.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_66f0._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_6770);
  STextBlock::FArguments::~FArguments(&local_b80);
  SBox::FArguments::~FArguments(&local_3668);
  TFunction<bool___cdecl(void)>::~TFunction<bool___cdecl(void)>
            ((TFunction<bool___cdecl(void)> *)local_98);
  SComboButton::FArguments::~FArguments(&local_4020);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6048);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6bf8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6760.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_66d8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6bc8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6750.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_66c0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6c28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6740.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_69e0.Accessor);
  STextBlock::FArguments::~FArguments(&local_628);
  SBox::FArguments::~FArguments(&local_3328);
  TFunction<bool___cdecl(void)>::~TFunction<bool___cdecl(void)>
            ((TFunction<bool___cdecl(void)> *)local_c8);
  SComboButton::FArguments::~FArguments(&local_4358);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_63c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6a08);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6730.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_69b8._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText((FText *)&local_69f8);
  STextBlock::FArguments::~FArguments(&local_2068);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_62d8);
  SHorizontalBox::FArguments::~FArguments(&local_5bc0);
  SBorder::FArguments::~FArguments(&local_2828);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5e78);
  SVerticalBox::FArguments::~FArguments(&local_59b8);
  SetPause(this,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_6a00->SharedReferenceCount).ReferenceController);
  return;
}

// ConstructNavigationDetail @ 142e53100

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SWidgetHittestGrid::ConstructNavigationDetail
          (SWidgetHittestGrid *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  SWidget *pSVar11;
  undefined8 uVar12;
  FArguments *pFVar13;
  FSlotArguments *pFVar14;
  FArguments *pFVar15;
  FText *pFVar16;
  TSharedRef<STextBlock,1> *pTVar17;
  FArguments *pFVar18;
  FArguments *pFVar19;
  TSharedRef<SHyperlink,1> *pTVar20;
  TSharedRef<SBox,1> *pTVar21;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *pTVar22;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar23;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> *this_00;
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SGridPanel,1> *pTVar24;
  T0RequiredArgs local_res8 [8];
  TSharedRef<SWidget,1> *local_res10;
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_68c8 [2];
  FName local_68c0;
  TSharedRef<SWidget,1> local_68b8;
  FDestructionSentinel local_68a8;
  T0RequiredArgs local_6888;
  T0RequiredArgs local_6887;
  T0RequiredArgs local_6886;
  T0RequiredArgs local_6885;
  T0RequiredArgs local_6884;
  T0RequiredArgs local_6883;
  T0RequiredArgs local_6882;
  T0RequiredArgs local_6881;
  T0RequiredArgs local_6880;
  T0RequiredArgs local_687f;
  T0RequiredArgs local_687e;
  T0RequiredArgs local_687d;
  T0RequiredArgs local_687c;
  T0RequiredArgs local_687b;
  T0RequiredArgs local_687a;
  T0RequiredArgs local_6879;
  T0RequiredArgs local_6878;
  T0RequiredArgs local_6877;
  T0RequiredArgs local_6876 [14];
  TSharedRef<SWidget,1> local_6868;
  TSharedRef<SWidget,1> local_6858;
  TWeakPtr<SWidget_const_,1> local_6848;
  TSharedRef<SWidget,1> local_6838;
  TWeakPtr<SWidget_const_,1> local_6828;
  STextBlock *local_6818;
  undefined8 uStack_6810;
  TSharedRef<SWidget,1> local_6808;
  STextBlock *local_67f8;
  FSharedReferencer<1> local_67f0;
  TReferenceControllerBase<1> *local_67e8;
  undefined4 uStack_67e0;
  uint uStack_67dc;
  TReferenceControllerBase<1> *local_67d8;
  undefined4 uStack_67d0;
  uint uStack_67cc;
  SBox *local_67c8;
  FSharedReferencer<1> local_67c0;
  STextBlock *local_67b8;
  FSharedReferencer<1> local_67b0;
  SBox *local_67a8;
  FSharedReferencer<1> local_67a0;
  STextBlock *local_6798;
  FSharedReferencer<1> local_6790;
  SBox *local_6788;
  FSharedReferencer<1> local_6780;
  FArguments *local_6778;
  STextBlock *local_6770;
  SWidget *pSStack_6768;
  STextBlock *local_6760;
  TReferenceControllerBase<1> *pTStack_6758;
  FText local_6750;
  bool local_6740;
  undefined1 local_6738 [8];
  ForAnyElementType FStack_6730;
  ulonglong local_6728;
  FText local_6720;
  bool local_6710;
  undefined1 local_6708 [8];
  ForAnyElementType FStack_6700;
  ulonglong local_66f8;
  FMargin local_66f0;
  undefined1 local_66e0;
  undefined1 local_66d8 [8];
  ForAnyElementType FStack_66d0;
  ulonglong local_66c8;
  FMargin local_66c0;
  undefined1 local_66b0;
  undefined1 local_66a8 [8];
  ForAnyElementType FStack_66a0;
  ulonglong local_6698;
  FMargin local_6690;
  undefined1 local_6680;
  undefined1 local_6678 [8];
  ForAnyElementType FStack_6670;
  ulonglong local_6668;
  TReferenceControllerBase<1> *local_6660;
  TReferenceControllerBase<1> *local_6658;
  TReferenceControllerBase<1> *local_6650;
  TAttribute<float> local_6648;
  TAttribute<float> local_6628;
  TAttribute<FText> local_6608;
  TAttribute<FMargin> local_65d8;
  TAttribute<FText> local_65a8;
  TAttribute<FMargin> local_6578;
  TAttribute<FMargin> local_6548;
  TAttribute<FText> local_6518;
  TAttribute<FMargin> local_64e8;
  TAttribute<FMargin> local_64b8;
  TAttribute<FText> local_6488;
  TAttribute<FMargin> local_6458;
  TSharedRef<STextBlock,1> local_6428;
  TSharedRef<STextBlock,1> local_6418;
  FText local_6408;
  TSharedRef<SBox,1> local_63f8;
  TSharedRef<SHyperlink,1> local_63e8;
  TSharedRef<STextBlock,1> local_63d8;
  FText local_63c8;
  TSharedRef<SBox,1> local_63b8;
  TSharedRef<SHyperlink,1> local_63a8;
  TSharedRef<STextBlock,1> local_6398;
  FText local_6388;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6378;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_6360;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6348;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_6330;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6318;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6300;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_62e8;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> local_62d0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_62b8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_62a0;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> local_6288;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6270;
  TSharedRef<SGridPanel,1> local_6258;
  TSharedRef<SBox,1> local_6248;
  TSharedRef<STextBlock,1> local_6238;
  TSharedRef<SBox,1> local_6228;
  TSharedRef<STextBlock,1> local_6218;
  FText local_6208;
  TSharedRef<SBox,1> local_61f8;
  TSharedRef<SHyperlink,1> local_61e8;
  TSharedRef<SBox,1> local_61d8;
  TSharedRef<STextBlock,1> local_61c8;
  FText local_61b8;
  TSharedRef<SBox,1> local_61a8;
  TSharedRef<STextBlock,1> local_6198;
  TSharedRef<SBox,1> local_6188;
  TSharedRef<STextBlock,1> local_6178;
  FText local_6168;
  TSharedRef<SBox,1> local_6158;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_6148;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_6130;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_6118;
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> local_6100;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_60e8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_60d0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_60b8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_60a0;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_6088;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> local_6070;
  FSlotArguments local_6058;
  FSlotArguments local_5fc0;
  FSlotArguments local_5f28;
  FSlotArguments local_5e90;
  FSlotArguments local_5df8;
  FSlotArguments local_5d60;
  FSlotArguments local_5cc8;
  FSlotArguments local_5c30;
  FSlotArguments local_5b98;
  FSlotArguments local_5b00;
  FSlotArguments local_5a68;
  FSlotArguments local_59d0;
  FArguments local_5938;
  FArguments local_5710;
  FArguments local_53f0;
  FArguments local_50d0;
  FArguments local_4db0;
  FArguments local_4a70;
  FArguments local_4730;
  FArguments local_43f0;
  FArguments local_40b0;
  FArguments local_3d70;
  FArguments local_3a30;
  FArguments local_36f0;
  FArguments local_33b0;
  FArguments local_3070;
  FArguments local_2b18;
  FArguments local_25c0;
  FArguments local_2068;
  FArguments local_1b10;
  FArguments local_15b8;
  FArguments local_1060;
  FArguments local_b08;
  FArguments local_5b0;
  undefined8 uStack_48;
  
  uStack_48 = 0x142e53123;
  local_res10 = __return_storage_ptr__;
  pFVar13 = SGridPanel::FArguments::FArguments(&local_5938);
  local_6628.Value = 0.5;
  local_6628.bIsSet = true;
  local_6628.Getter._16_8_ = 0;
  local_6628.Getter._0_8_ = 0;
  local_6628.Getter._8_8_ = 0;
  pFVar13 = SGridPanel::FArguments::FillColumn(pFVar13,1,&local_6628);
  local_6648.Value = 0.5;
  local_6648.bIsSet = true;
  local_6648.Getter._16_8_ = 0;
  local_6648.Getter._0_8_ = 0;
  local_6648.Getter._8_8_ = 0;
  pFVar13 = SGridPanel::FArguments::FillColumn(pFVar13,3,&local_6648);
  pFVar14 = SGridPanel::Slot(&local_59d0,0,0,(Layer)0x0);
  pFVar15 = STextBlock::FArguments::FArguments(&local_5b0);
  pFVar16 = FText::AsLocalizable_Advanced_LocText
                      (&local_6388,L"SWidgetHittestGrid",L"FromLabel",L"From: ");
  FText::FText(&local_6750,pFVar16);
  local_6740 = true;
  local_6728 = 0;
  local_6738 = (undefined1  [8])0x0;
  FStack_6730.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar15->_Text).Value,&local_6750);
  (pFVar15->_Text).bIsSet = local_6740;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6738);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6738,
             (FWriteAccessScope *)&local_68a8);
  if (((int)local_6728 != 0) && (FStack_6730.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6730.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6730,0,0,0x10);
    local_6728 = local_6728 & 0xffffffff00000000;
  }
  if (local_68a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68a8.Accessor,&local_68a8);
  }
  if (FStack_6730.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6730.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6738);
  if (local_6750.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6750.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_68c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_68c0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_68b8,&local_68c0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_6270,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0x154,local_res8);
  FMemScope::~FMemScope((FMemScope *)&local_68b8);
  FLLMScope::~FLLMScope(local_68c8);
  pTVar17 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_6270,&local_6398,pFVar15);
  local_67f8 = pTVar17->Object;
  local_67f0.ReferenceController = (pTVar17->SharedReferenceCount).ReferenceController;
  if (local_67f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_67f0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_67f0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_67f0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_67f0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6660 = local_67f0.ReferenceController;
  if ((STextBlock **)&pFVar14->_padding_ != &local_67f8) {
    pFVar14->_padding_ = (longlong)local_67f8;
    local_67f8 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar14->_padding_,&local_67f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_67f0.ReferenceController);
  pFVar13 = SGridPanel::FArguments::operator+(pFVar13,pFVar14);
  pFVar14 = SGridPanel::Slot(&local_5a68,1,0,(Layer)0x0);
  pFVar18 = SBox::FArguments::FArguments(&local_33b0);
  uVar9 = _UNK_150925078;
  uVar7 = ___xmm_00000000400000000000000040000000;
  pFVar18->_HAlign = HAlign_Left;
  pFVar18->_VAlign = VAlign_Center;
  uVar10 = _UNK_150925078;
  uVar12 = ___xmm_00000000400000000000000040000000;
  local_66e0 = 1;
  local_66c8 = 0;
  ___xmm_00000000400000000000000040000000 = (float)uVar7;
  _UNK_150925074 = SUB84(uVar7,4);
  local_66f0.Left = ___xmm_00000000400000000000000040000000;
  local_66f0.Top = _UNK_150925074;
  _UNK_150925078 = (float)uVar9;
  _UNK_15092507c = SUB84(uVar9,4);
  local_66f0.Right = _UNK_150925078;
  local_66f0.Bottom = _UNK_15092507c;
  local_66d8 = (undefined1  [8])0x0;
  FStack_66d0.Data = (FScriptContainerElement *)0x0;
  ___xmm_00000000400000000000000040000000 = (float)uVar7;
  _UNK_150925074 = SUB84(uVar7,4);
  fVar8 = _UNK_150925074;
  _UNK_150925078 = uVar10;
  (pFVar18->_Padding).Value.Left = ___xmm_00000000400000000000000040000000;
  ___xmm_00000000400000000000000040000000 = uVar12;
  uVar12 = _UNK_150925078;
  (pFVar18->_Padding).Value.Top = fVar8;
  _UNK_150925078 = (float)uVar9;
  _UNK_15092507c = SUB84(uVar9,4);
  fVar8 = _UNK_15092507c;
  (pFVar18->_Padding).Value.Right = _UNK_150925078;
  _UNK_150925078 = uVar12;
  (pFVar18->_Padding).Value.Bottom = fVar8;
  (pFVar18->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_66d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_66d8,
             (FWriteAccessScope *)&local_68a8);
  if (((int)local_66c8 != 0) && (FStack_66d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_66d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_66d0,0,0,0x10);
    local_66c8 = local_66c8 & 0xffffffff00000000;
  }
  if (local_68a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68a8.Accessor,&local_68a8);
  }
  if (FStack_66d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_66d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_66d8);
  pFVar19 = SHyperlink::FArguments::FArguments(&local_50d0);
  uStack_67d0 = 0;
  local_67d8 = (TReferenceControllerBase<1> *)GetNavigationFromText;
  local_68a8.Accessor = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_67cc << 0x20);
  local_68a8._0_8_ = GetNavigationFromText;
  (pFVar19->_Text).bIsSet = true;
  TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SWidgetHittestGrid>
            ((TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(pFVar19->_Text).Getter,this,(pmf_42f7b9ee *)&local_68a8);
  local_6828.Object = (this->NavigationFromWidget).Object;
  local_6828.WeakReferenceCount.ReferenceController =
       (this->NavigationFromWidget).WeakReferenceCount.ReferenceController;
  if (local_6828.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6828.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_6828.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  uStack_67d0 = 0;
  local_67d8 = (TReferenceControllerBase<1> *)HandleNavigationNavigate;
  local_68a8.Accessor = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_67cc << 0x20);
  local_68a8._0_8_ = HandleNavigationNavigate;
  pFVar19 = SHyperlink::FArguments::
            OnNavigate<SWidgetHittestGrid_const_,TWeakPtr<SWidget_const_,1>_>
                      (pFVar19,this,(pmf_33a77715 *)&local_68a8,&local_6828);
  FLLMScope::FLLMScope(local_68c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_68b8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_68c0,(FName *)&local_68b8,true);
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>
            (&local_6288,"SHyperlink",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0x15e,local_res18);
  FMemScope::~FMemScope((FMemScope *)&local_68c0);
  FLLMScope::~FLLMScope(local_68c8);
  pTVar20 = TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_6288,&local_63a8,pFVar19);
  local_6828.Object = (SWidget *)pTVar20->Object;
  local_6828.WeakReferenceCount.ReferenceController =
       (pTVar20->SharedReferenceCount).ReferenceController;
  if (local_6828.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6828.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6828.WeakReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_6828.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6828.WeakReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar18->_Content).Widget.Object = local_6828.Object;
  (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController =
       local_6828.WeakReferenceCount.ReferenceController;
  local_67d8 = local_6828.WeakReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FLLMScope::FLLMScope(local_68c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_68b8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_68c0,(FName *)&local_68b8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_62a0,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0x159,local_res20);
  FMemScope::~FMemScope((FMemScope *)&local_68c0);
  FLLMScope::~FLLMScope(local_68c8);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_62a0,&local_63b8,pFVar18);
  local_67c8 = pTVar21->Object;
  local_6828.Object = (SWidget *)(pTVar21->SharedReferenceCount).ReferenceController;
  if (local_6828.Object != (SWidget *)0x0) {
    LOCK();
    *(atomic<int> *)&(local_6828.Object)->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&(local_6828.Object)->_padding_ + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)&(local_6828.Object)->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&(local_6828.Object)->_padding_ + 1);
    UNLOCK();
  }
  local_67c0.ReferenceController = (TReferenceControllerBase<1> *)local_6828.Object;
  if ((SBox **)&pFVar14->_padding_ != &local_67c8) {
    pFVar14->_padding_ = (longlong)local_67c8;
    local_67c8 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar14->_padding_,&local_67c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_67c0.ReferenceController);
  pFVar13 = SGridPanel::FArguments::operator+(pFVar13,pFVar14);
  pFVar14 = SGridPanel::Slot(&local_5b00,0,1,(Layer)0x0);
  pFVar15 = STextBlock::FArguments::FArguments(&local_b08);
  pFVar16 = FText::AsLocalizable_Advanced_LocText
                      (&local_63c8,L"SWidgetHittestGrid",L"ToLabel",L"Result: ");
  FText::FText(&local_6720,pFVar16);
  local_6710 = true;
  local_66f8 = 0;
  local_6708 = (undefined1  [8])0x0;
  FStack_6700.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar15->_Text).Value,&local_6720);
  (pFVar15->_Text).bIsSet = local_6710;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6708);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6708,
             (FWriteAccessScope *)&local_68a8);
  if (((int)local_66f8 != 0) && (FStack_6700.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6700.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6700,0,0,0x10);
    local_66f8 = local_66f8 & 0xffffffff00000000;
  }
  if (local_68a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68a8.Accessor,&local_68a8);
  }
  if (FStack_6700.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6700.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6708);
  if (local_6720.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6720.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_68c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_68b8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_68c0,(FName *)&local_68b8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_62b8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0x165,&local_6888);
  FMemScope::~FMemScope((FMemScope *)&local_68c0);
  FLLMScope::~FLLMScope(local_68c8);
  pTVar17 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_62b8,&local_63d8,pFVar15);
  local_67b8 = pTVar17->Object;
  local_67b0.ReferenceController = (pTVar17->SharedReferenceCount).ReferenceController;
  if (local_67b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_67b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_67b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_67b0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_67b0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6650 = local_67b0.ReferenceController;
  if ((STextBlock **)&pFVar14->_padding_ != &local_67b8) {
    pFVar14->_padding_ = (longlong)local_67b8;
    local_67b8 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar14->_padding_,&local_67b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_67b0.ReferenceController);
  pFVar13 = SGridPanel::FArguments::operator+(pFVar13,pFVar14);
  pFVar14 = SGridPanel::Slot(&local_5b98,1,1,(Layer)0x0);
  pFVar18 = SBox::FArguments::FArguments(&local_36f0);
  pFVar18->_HAlign = HAlign_Left;
  pFVar18->_VAlign = VAlign_Center;
  uVar10 = _UNK_150925078;
  uVar12 = ___xmm_00000000400000000000000040000000;
  local_66b0 = 1;
  local_6698 = 0;
  ___xmm_00000000400000000000000040000000 = (float)uVar7;
  _UNK_150925074 = SUB84(uVar7,4);
  local_66c0.Left = ___xmm_00000000400000000000000040000000;
  local_66c0.Top = _UNK_150925074;
  _UNK_150925078 = (float)uVar9;
  _UNK_15092507c = SUB84(uVar9,4);
  local_66c0.Right = _UNK_150925078;
  local_66c0.Bottom = _UNK_15092507c;
  local_66a8 = (undefined1  [8])0x0;
  FStack_66a0.Data = (FScriptContainerElement *)0x0;
  ___xmm_00000000400000000000000040000000 = (float)uVar7;
  _UNK_150925074 = SUB84(uVar7,4);
  fVar8 = _UNK_150925074;
  _UNK_150925078 = uVar10;
  (pFVar18->_Padding).Value.Left = ___xmm_00000000400000000000000040000000;
  ___xmm_00000000400000000000000040000000 = uVar12;
  uVar12 = _UNK_150925078;
  (pFVar18->_Padding).Value.Top = fVar8;
  _UNK_150925078 = (float)uVar9;
  _UNK_15092507c = SUB84(uVar9,4);
  fVar8 = _UNK_15092507c;
  (pFVar18->_Padding).Value.Right = _UNK_150925078;
  _UNK_150925078 = uVar12;
  (pFVar18->_Padding).Value.Bottom = fVar8;
  (pFVar18->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_66a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_66a8,
             (FWriteAccessScope *)&local_68a8);
  if (((int)local_6698 != 0) && (FStack_66a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_66a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_66a0,0,0,0x10);
    local_6698 = local_6698 & 0xffffffff00000000;
  }
  if (local_68a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68a8.Accessor,&local_68a8);
  }
  if (FStack_66a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_66a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_66a8);
  pFVar19 = SHyperlink::FArguments::FArguments(&local_53f0);
  uStack_67e0 = 0;
  local_67e8 = (TReferenceControllerBase<1> *)GetNavigationResultText;
  local_68a8.Accessor = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_67dc << 0x20);
  local_68a8._0_8_ = GetNavigationResultText;
  (pFVar19->_Text).bIsSet = true;
  TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SWidgetHittestGrid>
            ((TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(pFVar19->_Text).Getter,this,(pmf_42f7b9ee *)&local_68a8);
  local_6848.Object = (this->NavigationFromResult).Object;
  local_6848.WeakReferenceCount.ReferenceController =
       (this->NavigationFromResult).WeakReferenceCount.ReferenceController;
  if (local_6848.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6848.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_6848.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_67e8 = (TReferenceControllerBase<1> *)HandleNavigationNavigate;
  uStack_67e0 = 0;
  local_68a8.Accessor = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_67dc << 0x20);
  local_68a8._0_8_ = HandleNavigationNavigate;
  pFVar19 = SHyperlink::FArguments::
            OnNavigate<SWidgetHittestGrid_const_,TWeakPtr<SWidget_const_,1>_>
                      (pFVar19,this,(pmf_33a77715 *)&local_68a8,&local_6848);
  FLLMScope::FLLMScope(local_68c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_68b8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_68c0,(FName *)&local_68b8,true);
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>
            (&local_62d0,"SHyperlink",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0x16f,&local_6887);
  FMemScope::~FMemScope((FMemScope *)&local_68c0);
  FLLMScope::~FLLMScope(local_68c8);
  pTVar20 = TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_62d0,&local_63e8,pFVar19);
  local_6848.Object = (SWidget *)pTVar20->Object;
  local_6848.WeakReferenceCount.ReferenceController =
       (pTVar20->SharedReferenceCount).ReferenceController;
  if (local_6848.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6848.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6848.WeakReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_6848.WeakReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6848.WeakReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar18->_Content).Widget.Object = local_6848.Object;
  (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController =
       local_6848.WeakReferenceCount.ReferenceController;
  local_67e8 = local_6848.WeakReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FLLMScope::FLLMScope(local_68c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_68b8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_68c0,(FName *)&local_68b8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_62e8,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0x16a,&local_6886);
  FMemScope::~FMemScope((FMemScope *)&local_68c0);
  FLLMScope::~FLLMScope(local_68c8);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_62e8,&local_63f8,pFVar18);
  local_67a8 = pTVar21->Object;
  local_6848.Object = (SWidget *)(pTVar21->SharedReferenceCount).ReferenceController;
  if (local_6848.Object != (SWidget *)0x0) {
    LOCK();
    *(atomic<int> *)&(local_6848.Object)->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&(local_6848.Object)->_padding_ + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)&(local_6848.Object)->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&(local_6848.Object)->_padding_ + 1);
    UNLOCK();
  }
  local_67a0.ReferenceController = (TReferenceControllerBase<1> *)local_6848.Object;
  if ((SBox **)&pFVar14->_padding_ != &local_67a8) {
    pFVar14->_padding_ = (longlong)local_67a8;
    local_67a8 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar14->_padding_,&local_67a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_67a0.ReferenceController);
  pFVar13 = SGridPanel::FArguments::operator+(pFVar13,pFVar14);
  pFVar14 = SGridPanel::Slot(&local_5c30,0,2,(Layer)0x0);
  pFVar15 = STextBlock::FArguments::FArguments(&local_1060);
  pFVar16 = FText::AsLocalizable_Advanced_LocText
                      (&local_6408,L"SWidgetHittestGrid",L"DirectionLabel",L"Direction: ");
  FText::FText(&local_6608.Value,pFVar16);
  local_6608.bIsSet = true;
  local_6608.Getter._16_8_ = 0;
  local_6608.Getter._0_8_ = 0;
  local_6608.Getter._8_8_ = 0;
  pFVar15 = STextBlock::FArguments::Text(pFVar15,&local_6608);
  FLLMScope::FLLMScope(local_68c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_68b8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_68c0,(FName *)&local_68b8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_6300,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0x176,&local_6885);
  FMemScope::~FMemScope((FMemScope *)&local_68c0);
  FLLMScope::~FLLMScope(local_68c8);
  pTVar17 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_6300,&local_6418,pFVar15);
  local_6798 = pTVar17->Object;
  local_6790.ReferenceController = (pTVar17->SharedReferenceCount).ReferenceController;
  if (local_6790.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6790.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_6790.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_6790.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_6790.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6658 = local_6790.ReferenceController;
  if ((STextBlock **)&pFVar14->_padding_ != &local_6798) {
    pFVar14->_padding_ = (longlong)local_6798;
    local_6798 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar14->_padding_,&local_6790);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6790.ReferenceController);
  pFVar13 = SGridPanel::FArguments::operator+(pFVar13,pFVar14);
  pFVar14 = SGridPanel::Slot(&local_5cc8,1,2,(Layer)0x0);
  pFVar18 = SBox::FArguments::FArguments(&local_3a30);
  pFVar18->_HAlign = HAlign_Left;
  pFVar18->_VAlign = VAlign_Center;
  uVar10 = _UNK_150925078;
  uVar12 = ___xmm_00000000400000000000000040000000;
  local_6680 = 1;
  local_6668 = 0;
  ___xmm_00000000400000000000000040000000 = (float)uVar7;
  _UNK_150925074 = SUB84(uVar7,4);
  local_6690.Left = ___xmm_00000000400000000000000040000000;
  local_6690.Top = _UNK_150925074;
  _UNK_150925078 = (float)uVar9;
  _UNK_15092507c = SUB84(uVar9,4);
  local_6690.Right = _UNK_150925078;
  local_6690.Bottom = _UNK_15092507c;
  local_6678 = (undefined1  [8])0x0;
  FStack_6670.Data = (FScriptContainerElement *)0x0;
  ___xmm_00000000400000000000000040000000 = (float)uVar7;
  _UNK_150925074 = SUB84(uVar7,4);
  fVar8 = _UNK_150925074;
  _UNK_150925078 = uVar10;
  (pFVar18->_Padding).Value.Left = ___xmm_00000000400000000000000040000000;
  ___xmm_00000000400000000000000040000000 = uVar12;
  uVar12 = _UNK_150925078;
  (pFVar18->_Padding).Value.Top = fVar8;
  _UNK_150925078 = (float)uVar9;
  _UNK_15092507c = SUB84(uVar9,4);
  fVar8 = _UNK_15092507c;
  (pFVar18->_Padding).Value.Right = _UNK_150925078;
  _UNK_150925078 = uVar12;
  (pFVar18->_Padding).Value.Bottom = fVar8;
  (pFVar18->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6678);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6678,
             (FWriteAccessScope *)&local_68a8);
  if (((int)local_6668 != 0) && (FStack_6670.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6670.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6670,0,0,0x10);
    local_6668 = local_6668 & 0xffffffff00000000;
  }
  if (local_68a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68a8.Accessor,&local_68a8);
  }
  if (FStack_6670.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6670.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6678);
  pFVar15 = STextBlock::FArguments::FArguments(&local_15b8);
  uStack_6810 = (TReferenceControllerBase<1> *)((ulonglong)uStack_6810._4_4_ << 0x20);
  local_6818 = (STextBlock *)GetNavigationDirectionText;
  local_68a8._0_8_ = GetNavigationDirectionText;
  local_68a8.Accessor = (FMRSWRecursiveAccessDetector *)uStack_6810;
  (pFVar15->_Text).bIsSet = true;
  TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SWidgetHittestGrid>
            ((TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(pFVar15->_Text).Getter,this,(pmf_42f7b9ee *)&local_68a8);
  FLLMScope::FLLMScope(local_68c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_68b8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_68c0,(FName *)&local_68b8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_6318,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0x180,&local_6884);
  FMemScope::~FMemScope((FMemScope *)&local_68c0);
  FLLMScope::~FLLMScope(local_68c8);
  pTVar17 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_6318,&local_6428,pFVar15);
  pTVar1 = (pTVar17->SharedReferenceCount).ReferenceController;
  local_6818 = pTVar17->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar18->_Content).Widget.Object = (SWidget *)local_6818;
  (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  uStack_6810 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FLLMScope::FLLMScope(local_68c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_68b8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_68c0,(FName *)&local_68b8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_6330,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0x17b,&local_6883);
  FMemScope::~FMemScope((FMemScope *)&local_68c0);
  FLLMScope::~FLLMScope(local_68c8);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_6330,&local_6158,pFVar18);
  pTVar2 = (pTVar21->SharedReferenceCount).ReferenceController;
  local_6788 = pTVar21->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6780.ReferenceController = pTVar2;
  if ((SBox **)&pFVar14->_padding_ != &local_6788) {
    pFVar14->_padding_ = (longlong)local_6788;
    local_6788 = (SBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar14->_padding_,&local_6780);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6780.ReferenceController);
  pFVar13 = SGridPanel::FArguments::operator+(pFVar13,pFVar14);
  pFVar14 = SGridPanel::Slot(&local_5d60,2,0,(Layer)0x0);
  pFVar18 = SBox::FArguments::FArguments(&local_3d70);
  pFVar18->_HAlign = HAlign_Left;
  pFVar18->_VAlign = VAlign_Center;
  uVar10 = _UNK_150925078;
  uVar12 = ___xmm_00000000400000000000000040000000;
  local_65d8.Getter._16_8_ = 0;
  ___xmm_00000000400000000000000040000000 = (float)uVar7;
  _UNK_150925074 = SUB84(uVar7,4);
  local_65d8.Value.Left = ___xmm_00000000400000000000000040000000;
  local_65d8.Value.Top = _UNK_150925074;
  _UNK_150925078 = (float)uVar9;
  _UNK_15092507c = SUB84(uVar9,4);
  local_65d8.Value.Right = _UNK_150925078;
  local_65d8.Value.Bottom = _UNK_15092507c;
  local_65d8.bIsSet = true;
  local_65d8.Getter._0_8_ = 0;
  local_65d8.Getter._8_8_ = 0;
  ___xmm_00000000400000000000000040000000 = uVar12;
  _UNK_150925078 = uVar10;
  pFVar18 = SBox::FArguments::Padding(pFVar18,&local_65d8);
  pFVar15 = STextBlock::FArguments::FArguments(&local_1b10);
  pFVar16 = FText::AsLocalizable_Advanced_LocText
                      (&local_6168,L"SWidgetHittestGrid",L"UserIndexLabel",L"User Index: ");
  FText::FText(&local_65a8.Value,pFVar16);
  local_65a8.bIsSet = true;
  local_65a8.Getter._16_8_ = 0;
  local_65a8.Getter._0_8_ = 0;
  local_65a8.Getter._8_8_ = 0;
  pFVar15 = STextBlock::FArguments::Text(pFVar15,&local_65a8);
  FLLMScope::FLLMScope(local_68c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_68b8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_68c0,(FName *)&local_68b8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_6348,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0x18c,&local_6882);
  FMemScope::~FMemScope((FMemScope *)&local_68c0);
  FLLMScope::~FLLMScope(local_68c8);
  pTVar17 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_6348,&local_6178,pFVar15);
  local_6760 = pTVar17->Object;
  local_6818 = (STextBlock *)(pTVar17->SharedReferenceCount).ReferenceController;
  if (local_6818 != (STextBlock *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_6818)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_6818)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    ((TReferenceControllerBase<1> *)local_6818)->SharedReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_6818)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar18->_Content).Widget.Object = (SWidget *)local_6760;
  (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_6818;
  pTStack_6758 = (TReferenceControllerBase<1> *)local_6818;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_68c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_68b8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_68c0,(FName *)&local_68b8,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_6360,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0x187,&local_6881);
  FMemScope::~FMemScope((FMemScope *)&local_68c0);
  FLLMScope::~FLLMScope(local_68c8);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_6360,&local_6188,pFVar18);
  local_6808.Object = (SWidget *)pTVar21->Object;
  local_6808.SharedReferenceCount.ReferenceController =
       (pTVar21->SharedReferenceCount).ReferenceController;
  if (local_6808.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6808.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6808.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6760 = (STextBlock *)local_6808.SharedReferenceCount.ReferenceController;
  pFVar14 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar14,&local_6808);
  pFVar13 = SGridPanel::FArguments::operator+(pFVar13,pFVar14);
  pFVar14 = SGridPanel::Slot(&local_5df8,3,0,(Layer)0x0);
  pFVar18 = SBox::FArguments::FArguments(&local_40b0);
  pFVar18->_HAlign = HAlign_Left;
  pFVar18->_VAlign = VAlign_Center;
  uVar10 = _UNK_150925078;
  uVar12 = ___xmm_00000000400000000000000040000000;
  local_6578.Getter._16_8_ = 0;
  ___xmm_00000000400000000000000040000000 = (float)uVar7;
  _UNK_150925074 = SUB84(uVar7,4);
  local_6578.Value.Left = ___xmm_00000000400000000000000040000000;
  local_6578.Value.Top = _UNK_150925074;
  _UNK_150925078 = (float)uVar9;
  _UNK_15092507c = SUB84(uVar9,4);
  local_6578.Value.Right = _UNK_150925078;
  local_6578.Value.Bottom = _UNK_15092507c;
  local_6578.bIsSet = true;
  local_6578.Getter._0_8_ = 0;
  local_6578.Getter._8_8_ = 0;
  ___xmm_00000000400000000000000040000000 = uVar12;
  _UNK_150925078 = uVar10;
  pFVar18 = SBox::FArguments::Padding(pFVar18,&local_6578);
  pFVar15 = STextBlock::FArguments::FArguments(&local_2068);
  local_6808.SharedReferenceCount.ReferenceController =
       local_6808.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_6808.Object = (SWidget *)GetNavigationUserIndexText;
  local_68a8._0_8_ = GetNavigationUserIndexText;
  local_68a8.Accessor =
       (FMRSWRecursiveAccessDetector *)local_6808.SharedReferenceCount.ReferenceController;
  (pFVar15->_Text).bIsSet = true;
  TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SWidgetHittestGrid>
            ((TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(pFVar15->_Text).Getter,this,(pmf_42f7b9ee *)&local_68a8);
  FLLMScope::FLLMScope(local_68c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_68b8.Object = (SWidget *)LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_68c0,(FName *)&local_68b8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_6378,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0x197,&local_6880);
  FMemScope::~FMemScope((FMemScope *)&local_68c0);
  FLLMScope::~FLLMScope(local_68c8);
  pTVar17 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_6378,&local_6198,pFVar15);
  local_6770 = pTVar17->Object;
  local_6808.Object = (SWidget *)(pTVar17->SharedReferenceCount).ReferenceController;
  if (local_6808.Object != (SWidget *)0x0) {
    LOCK();
    *(atomic<int> *)&(local_6808.Object)->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&(local_6808.Object)->_padding_ + 1);
    UNLOCK();
    LOCK();
    *(atomic<int> *)&(local_6808.Object)->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&(local_6808.Object)->_padding_ + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar18->_Content).Widget.Object = (SWidget *)local_6770;
  (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_6808.Object;
  pSStack_6768 = local_6808.Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar22 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_6118,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0x192,&local_687f);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar22,&local_61a8,pFVar18);
  local_6838.Object = (SWidget *)pTVar21->Object;
  local_6838.SharedReferenceCount.ReferenceController =
       (pTVar21->SharedReferenceCount).ReferenceController;
  if (local_6838.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6838.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_6838.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6770 = (STextBlock *)local_6838.SharedReferenceCount.ReferenceController;
  pFVar14 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar14,&local_6838);
  pFVar13 = SGridPanel::FArguments::operator+(pFVar13,pFVar14);
  local_68b8.Object = (SWidget *)SGridPanel::Slot(&local_5e90,2,1,(Layer)0x0);
  pFVar18 = SBox::FArguments::FArguments(&local_43f0);
  pFVar18->_HAlign = HAlign_Left;
  pFVar18->_VAlign = VAlign_Center;
  uVar10 = _UNK_150925078;
  uVar12 = ___xmm_00000000400000000000000040000000;
  ___xmm_00000000400000000000000040000000 = (float)uVar7;
  _UNK_150925074 = SUB84(uVar7,4);
  local_6548.Value.Left = ___xmm_00000000400000000000000040000000;
  local_6548.Value.Top = _UNK_150925074;
  _UNK_150925078 = (float)uVar9;
  _UNK_15092507c = SUB84(uVar9,4);
  local_6548.Value.Right = _UNK_150925078;
  local_6548.Value.Bottom = _UNK_15092507c;
  local_6548.bIsSet = true;
  local_6548.Getter._0_8_ = 0;
  local_6548.Getter._8_8_ = 0;
  local_6548.Getter._16_8_ = 0;
  ___xmm_00000000400000000000000040000000 = uVar12;
  _UNK_150925078 = uVar10;
  pFVar18 = SBox::FArguments::Padding(pFVar18,&local_6548);
  pFVar15 = STextBlock::FArguments::FArguments(&local_25c0);
  pFVar16 = FText::AsLocalizable_Advanced_LocText
                      (&local_61b8,L"SWidgetHittestGrid",L"RuleWidgetLabel",L"Rule Widget: ");
  FText::FText(&local_6518.Value,pFVar16);
  local_6518.bIsSet = true;
  local_6518.Getter._16_8_ = 0;
  local_6518.Getter._0_8_ = 0;
  local_6518.Getter._8_8_ = 0;
  pFVar15 = STextBlock::FArguments::Text(pFVar15,&local_6518);
  pTVar23 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_6130,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0x1a2,&local_687e);
  pTVar17 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar23,&local_61c8,pFVar15);
  pTVar3 = (pTVar17->SharedReferenceCount).ReferenceController;
  local_6838.Object = (SWidget *)pTVar17->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar18->_Content).Widget.Object = local_6838.Object;
  (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  local_6838.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar22 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_6148,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0x19d,&local_687d);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar22,&local_61d8,pFVar18);
  local_6868.Object = (SWidget *)pTVar21->Object;
  local_6868.SharedReferenceCount.ReferenceController =
       (pTVar21->SharedReferenceCount).ReferenceController;
  if ((SWidget *)local_6868.SharedReferenceCount.ReferenceController != (SWidget *)0x0) {
    LOCK();
    *(atomic<int> *)&((SWidget *)local_6868.SharedReferenceCount.ReferenceController)->_padding_ =
         (atomic<int>)
         ((int)*(atomic<int> *)
                &((SWidget *)local_6868.SharedReferenceCount.ReferenceController)->_padding_ + 1);
    UNLOCK();
  }
  local_6838.Object = (SWidget *)local_6868.SharedReferenceCount.ReferenceController;
  pFVar14 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_68b8.Object,&local_6868);
  local_68c0 = (FName)SGridPanel::FArguments::operator+(pFVar13,pFVar14);
  local_68b8.Object = (SWidget *)SGridPanel::Slot(&local_5f28,3,1,(Layer)0x0);
  pFVar18 = SBox::FArguments::FArguments(&local_4730);
  pFVar18->_HAlign = HAlign_Left;
  pFVar18->_VAlign = VAlign_Center;
  uVar10 = _UNK_150925078;
  uVar12 = ___xmm_00000000400000000000000040000000;
  ___xmm_00000000400000000000000040000000 = (float)uVar7;
  _UNK_150925074 = SUB84(uVar7,4);
  local_64e8.Value.Left = ___xmm_00000000400000000000000040000000;
  local_64e8.Value.Top = _UNK_150925074;
  _UNK_150925078 = (float)uVar9;
  _UNK_15092507c = SUB84(uVar9,4);
  local_64e8.Value.Right = _UNK_150925078;
  local_64e8.Value.Bottom = _UNK_15092507c;
  local_64e8.bIsSet = true;
  local_64e8.Getter._0_8_ = 0;
  local_64e8.Getter._8_8_ = 0;
  local_64e8.Getter._16_8_ = 0;
  ___xmm_00000000400000000000000040000000 = uVar12;
  _UNK_150925078 = uVar10;
  pFVar18 = SBox::FArguments::Padding(pFVar18,&local_64e8);
  pFVar19 = SHyperlink::FArguments::FArguments(&local_5710);
  local_6868.SharedReferenceCount.ReferenceController =
       local_6868.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_6868.Object = (SWidget *)GetNavigationRuleWidgetText;
  local_68a8._0_8_ = GetNavigationRuleWidgetText;
  local_68a8.Accessor =
       (FMRSWRecursiveAccessDetector *)local_6868.SharedReferenceCount.ReferenceController;
  (pFVar19->_Text).bIsSet = true;
  TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SWidgetHittestGrid>
            ((TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(pFVar19->_Text).Getter,this,(pmf_42f7b9ee *)&local_68a8);
  local_6858.Object = (this->NavigationRuleWidgetWidget).Object;
  local_6858.SharedReferenceCount.ReferenceController =
       (this->NavigationRuleWidgetWidget).WeakReferenceCount.ReferenceController;
  if (local_6858.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_6858.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_6858.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_6868.SharedReferenceCount.ReferenceController =
       local_6868.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_6868.Object = (SWidget *)HandleNavigationNavigate;
  local_68a8._0_8_ = HandleNavigationNavigate;
  local_68a8.Accessor =
       (FMRSWRecursiveAccessDetector *)local_6868.SharedReferenceCount.ReferenceController;
  pFVar19 = SHyperlink::FArguments::
            OnNavigate<SWidgetHittestGrid_const_,TWeakPtr<SWidget_const_,1>_>
                      (pFVar19,this,(pmf_33a77715 *)&local_68a8,
                       (TWeakPtr<SWidget_const_,1> *)&local_6858);
  this_00 = MakeTDecl<SHyperlink,RequiredArgs::T0RequiredArgs>
                      (&local_6070,"SHyperlink",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0x1ad,&local_687c);
  pTVar20 = TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_61e8,pFVar19);
  pTVar4 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_6868.Object = (SWidget *)pTVar20->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar18->_Content).Widget.Object = local_6868.Object;
  (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  local_6868.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar22 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_6088,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0x1a8,&local_687b);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar22,&local_61f8,pFVar18);
  local_6858.Object = (SWidget *)pTVar21->Object;
  local_6868.Object = (SWidget *)(pTVar21->SharedReferenceCount).ReferenceController;
  if (local_6868.Object != (SWidget *)0x0) {
    LOCK();
    *(atomic<int> *)&(local_6868.Object)->_padding_ =
         (atomic<int>)((int)*(atomic<int> *)&(local_6868.Object)->_padding_ + 1);
    UNLOCK();
  }
  local_6858.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_6868.Object;
  pFVar14 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_68b8.Object,&local_6858);
  local_6778 = (FArguments *)SGridPanel::FArguments::operator+((FArguments *)local_68c0,pFVar14);
  local_68c0 = (FName)SGridPanel::Slot(&local_5fc0,2,2,(Layer)0x0);
  pFVar18 = SBox::FArguments::FArguments(&local_4a70);
  pFVar18->_HAlign = HAlign_Left;
  pFVar18->_VAlign = VAlign_Center;
  uVar10 = _UNK_150925078;
  uVar12 = ___xmm_00000000400000000000000040000000;
  ___xmm_00000000400000000000000040000000 = (float)uVar7;
  _UNK_150925074 = SUB84(uVar7,4);
  local_64b8.Value.Left = ___xmm_00000000400000000000000040000000;
  local_64b8.Value.Top = _UNK_150925074;
  _UNK_150925078 = (float)uVar9;
  _UNK_15092507c = SUB84(uVar9,4);
  local_64b8.Value.Right = _UNK_150925078;
  local_64b8.Value.Bottom = _UNK_15092507c;
  local_64b8.bIsSet = true;
  local_64b8.Getter._0_8_ = 0;
  local_64b8.Getter._8_8_ = 0;
  local_64b8.Getter._16_8_ = 0;
  ___xmm_00000000400000000000000040000000 = uVar12;
  _UNK_150925078 = uVar10;
  local_68b8.Object = (SWidget *)SBox::FArguments::Padding(pFVar18,&local_64b8);
  pFVar15 = STextBlock::FArguments::FArguments(&local_2b18);
  pFVar16 = FText::AsLocalizable_Advanced_LocText
                      (&local_6208,L"SWidgetHittestGrid",L"BoundaryRuleLabel",L"Boundary Rule: ");
  FText::FText(&local_6488.Value,pFVar16);
  local_6488.bIsSet = true;
  local_6488.Getter._16_8_ = 0;
  local_6488.Getter._0_8_ = 0;
  local_6488.Getter._8_8_ = 0;
  pFVar15 = STextBlock::FArguments::Text(pFVar15,&local_6488);
  pTVar23 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_60a0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0x1b9,&local_687a);
  pTVar17 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar23,&local_6218,pFVar15);
  pSVar11 = local_68b8.Object;
  pTVar5 = (pTVar17->SharedReferenceCount).ReferenceController;
  local_6858.Object = (SWidget *)pTVar17->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (((TAlwaysValidWidget *)((longlong)local_68b8.Object + 0x230))->Widget).
           SharedReferenceCount.ReferenceController;
  (((TAlwaysValidWidget *)((longlong)local_68b8.Object + 0x230))->Widget).Object = local_6858.Object
  ;
  (((TAlwaysValidWidget *)((longlong)local_68b8.Object + 0x230))->Widget).SharedReferenceCount.
  ReferenceController = pTVar5;
  local_6858.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pTVar22 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_60b8,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0x1b4,&local_6879);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar22,&local_6228,(FArguments *)pSVar11);
  local_68b8.Object = (SWidget *)pTVar21->Object;
  local_68b8.SharedReferenceCount.ReferenceController =
       (pTVar21->SharedReferenceCount).ReferenceController;
  if ((SWidget *)local_68b8.SharedReferenceCount.ReferenceController != (SWidget *)0x0) {
    LOCK();
    *(atomic<int> *)&((SWidget *)local_68b8.SharedReferenceCount.ReferenceController)->_padding_ =
         (atomic<int>)
         ((int)*(atomic<int> *)
                &((SWidget *)local_68b8.SharedReferenceCount.ReferenceController)->_padding_ + 1);
    UNLOCK();
  }
  local_6858.Object = (SWidget *)local_68b8.SharedReferenceCount.ReferenceController;
  pFVar14 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_68c0,&local_68b8);
  local_68c0 = (FName)SGridPanel::FArguments::operator+((FArguments *)local_6778,pFVar14);
  local_68b8.Object = (SWidget *)SGridPanel::Slot(&local_6058,3,2,(Layer)0x0);
  pFVar18 = SBox::FArguments::FArguments(&local_4db0);
  pFVar18->_HAlign = HAlign_Left;
  pFVar18->_VAlign = VAlign_Center;
  uVar10 = _UNK_150925078;
  uVar12 = ___xmm_00000000400000000000000040000000;
  local_6458.Getter._16_8_ = 0;
  ___xmm_00000000400000000000000040000000 = (float)uVar7;
  _UNK_150925074 = SUB84(uVar7,4);
  local_6458.Value.Left = ___xmm_00000000400000000000000040000000;
  local_6458.Value.Top = _UNK_150925074;
  _UNK_150925078 = (float)uVar9;
  _UNK_15092507c = SUB84(uVar9,4);
  local_6458.Value.Right = _UNK_150925078;
  local_6458.Value.Bottom = _UNK_15092507c;
  local_6458.bIsSet = true;
  local_6458.Getter._0_8_ = 0;
  local_6458.Getter._8_8_ = 0;
  ___xmm_00000000400000000000000040000000 = uVar12;
  _UNK_150925078 = uVar10;
  local_6778 = SBox::FArguments::Padding(pFVar18,&local_6458);
  pFVar15 = STextBlock::FArguments::FArguments(&local_3070);
  local_68a8.Accessor =
       (FMRSWRecursiveAccessDetector *)((ulonglong)local_68a8.Accessor & 0xffffffff00000000);
  local_68a8._0_8_ = GetNavigationBoundaryRuleText;
  (pFVar15->_Text).bIsSet = true;
  TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy>::BindSP<SWidgetHittestGrid>
            ((TDelegateRegistration<FText___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(pFVar15->_Text).Getter,this,(pmf_42f7b9ee *)&local_68a8);
  pTVar23 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_60d0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0x1c4,&local_6878);
  pTVar17 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar23,&local_6238,pFVar15);
  pTVar6 = (pTVar17->SharedReferenceCount).ReferenceController;
  local_68a8._0_8_ = pTVar17->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68a8.Accessor = (FMRSWRecursiveAccessDetector *)pTVar6;
  pFVar18 = SBox::FArguments::operator[](local_6778,(TSharedRef<SWidget,1> *)&local_68a8);
  pTVar22 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_60e8,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0x1bf,&local_6877);
  pTVar21 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=(pTVar22,&local_6248,pFVar18);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>((TSharedRef<SWidget,1> *)&local_68a8,pTVar21);
  pFVar14 = TSlotBase<SGridPanel::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_68b8.Object,(TSharedRef<SWidget,1> *)&local_68a8);
  pFVar13 = SGridPanel::FArguments::operator+((FArguments *)local_68c0,pFVar14);
  this_01 = MakeTDecl<SGridPanel,RequiredArgs::T0RequiredArgs>
                      (&local_6100,"SGridPanel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
                       ,0x14e,local_6876);
  pTVar24 = TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_6258,pFVar13);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SGridPanel>(local_res10,pTVar24);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6258.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6100._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_68a8.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6248.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60e8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6238.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60d0._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_3070);
  SBox::FArguments::~FArguments(&local_4db0);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_6058);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6858.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6228.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60b8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6218.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60a0._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_6208);
  STextBlock::FArguments::~FArguments(&local_2b18);
  SBox::FArguments::~FArguments(&local_4a70);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5fc0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6868.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_61f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6088._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_61e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6070._Widget.SharedReferenceCount.ReferenceController);
  SHyperlink::FArguments::~FArguments(&local_5710);
  SBox::FArguments::~FArguments(&local_4730);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5f28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6838.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_61d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6148._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_61c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6130._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_61b8);
  STextBlock::FArguments::~FArguments(&local_25c0);
  SBox::FArguments::~FArguments(&local_43f0);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5e90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6770);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_61a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6118._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6808.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6198.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6378._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_2068);
  SBox::FArguments::~FArguments(&local_40b0);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5df8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6760);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6188.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6360._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6818);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6178.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6348._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_6168);
  STextBlock::FArguments::~FArguments(&local_1b10);
  SBox::FArguments::~FArguments(&local_3d70);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5d60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6330._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6428.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6318._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_15b8);
  SBox::FArguments::~FArguments(&local_3a30);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5cc8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6658);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6418.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6300._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_6408);
  STextBlock::FArguments::~FArguments(&local_1060);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5c30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6848.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_63f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_62e8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_67e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_63e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_62d0._Widget.SharedReferenceCount.ReferenceController);
  SHyperlink::FArguments::~FArguments(&local_53f0);
  SBox::FArguments::~FArguments(&local_36f0);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5b98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6650);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_63d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_62b8._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_63c8);
  STextBlock::FArguments::~FArguments(&local_b08);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5b00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6828.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_63b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_62a0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_67d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_63a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6288._Widget.SharedReferenceCount.ReferenceController);
  SHyperlink::FArguments::~FArguments(&local_50d0);
  SBox::FArguments::~FArguments(&local_33b0);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_5a68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6660);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6398.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6270._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_6388);
  STextBlock::FArguments::~FArguments(&local_5b0);
  SGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_59d0);
  TAttribute<float>::~TAttribute<float>(&local_6648);
  TAttribute<float>::~TAttribute<float>(&local_6628);
  SGridPanel::FArguments::~FArguments(&local_5938);
  return local_res10;
}

// GetDisplayButtonText @ 142e9b5f0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SWidgetHittestGrid::GetDisplayButtonText(SWidgetHittestGrid *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  TRefCountPtr<ITextData> TVar4;
  atomic<int> aVar5;
  FText *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SWindow *pSVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  if (this->bDisplayAllWindows != false) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    TVar4 = WidgetHittestGridText::DisplayAllHitTest.TextData;
    (__return_storage_ptr__->TextData).Reference =
         WidgetHittestGridText::DisplayAllHitTest.TextData.Reference;
    if (TVar4.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,local_res8);
    }
    __return_storage_ptr__->Flags = WidgetHittestGridText::DisplayAllHitTest.Flags;
    return __return_storage_ptr__;
  }
  pTVar7 = (this->WindowToDisplay).WeakReferenceCount.ReferenceController;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
LAB_142e9b660:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    TVar4 = WidgetHittestGridText::DisplayNone.TextData;
    (__return_storage_ptr__->TextData).Reference =
         WidgetHittestGridText::DisplayNone.TextData.Reference;
    if (TVar4.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar4.Reference + 8))(TVar4.Reference,local_res20);
    }
    __return_storage_ptr__->Flags = WidgetHittestGridText::DisplayNone.Flags;
    return __return_storage_ptr__;
  }
  aVar3 = pTVar7->SharedReferenceCount;
  do {
    if (aVar3 == (atomic<int>)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
      goto LAB_142e9b660;
    }
    LOCK();
    aVar5 = pTVar7->SharedReferenceCount;
    bVar10 = aVar3 == aVar5;
    if (bVar10) {
      pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
      aVar5 = aVar3;
    }
    UNLOCK();
    aVar3 = aVar5;
  } while (!bVar10);
  if ((this->WindowToDisplay).Object == (SWindow *)0x0) goto LAB_142e9b660;
  pTVar8 = (this->WindowToDisplay).WeakReferenceCount.ReferenceController;
  pSVar9 = (SWindow *)0x0;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142e9b6e4;
      }
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar10 = aVar3 == aVar5;
      if (bVar10) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar10);
    pSVar9 = (this->WindowToDisplay).Object;
    if (pSVar9 != (SWindow *)0x0) goto LAB_142e9b70a;
  }
LAB_142e9b6e4:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar10) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FText *)(*pcVar2)();
    return pFVar6;
  }
LAB_142e9b70a:
  pFVar6 = TAttribute<FText>::Get(&pSVar9->Title);
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar6->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
  }
  __return_storage_ptr__->Flags = pFVar6->Flags;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// GetDisplayMenuContent @ 142e9b780

/* WARNING: Removing unreachable block (ram,0x000142e9bc9d) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SWidgetHittestGrid::GetDisplayMenuContent
          (SWidgetHittestGrid *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  TSharedRef<SWindow,1> *pTVar13;
  ISlateStyle *pIVar14;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar15;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar16;
  FUIAction *pFVar17;
  FSlateIcon *pFVar18;
  FText *pFVar19;
  undefined8 *puVar20;
  TSharedRef<SWidget_const_,1> *pTVar21;
  ulong64 uVar22;
  TSharedRef<SWidget,1> *pTVar23;
  FName *pFVar24;
  FSlateApplication *this_00;
  ulonglong uVar25;
  TReferenceControllerBase<1> *pTVar26;
  ForAnyElementType FVar27;
  FName local_res18;
  FName local_res20;
  FDestructionSentinel local_528;
  undefined1 local_510 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_508;
  ForAnyElementType FStack_500;
  FDelegateAllocation *local_4f8;
  TSharedRef<SWidget_const_,1> local_4e8;
  undefined1 local_4d8 [8];
  undefined1 local_4d0 [8];
  ForAnyElementType FStack_4c8;
  ulonglong local_4c0;
  undefined1 local_4b8 [24];
  undefined1 local_4a0 [8];
  ForAnyElementType FStack_498;
  ulonglong local_490;
  undefined1 local_488 [24];
  undefined1 local_470 [8];
  ForAnyElementType FStack_468;
  ulonglong local_460;
  FName local_458;
  FText local_450;
  SWidget *local_440;
  undefined1 local_438 [8];
  FDelegateAllocation local_430;
  undefined1 local_420 [24];
  undefined1 local_408 [8];
  ForAnyElementType FStack_400;
  ulonglong local_3f8;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> local_3f0;
  TSharedPtr<FUICommandList_const_,1> local_3e0;
  undefined1 local_3d0 [8];
  FDelegateAllocation local_3c8;
  undefined1 local_3b8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3b0;
  ForAnyElementType FStack_3a8;
  ulonglong local_3a0;
  undefined1 local_398 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_390;
  ForAnyElementType FStack_388;
  ulonglong local_380;
  undefined1 local_378 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_370;
  ForAnyElementType FStack_368;
  ulonglong local_360;
  undefined1 local_358 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_350;
  ForAnyElementType FStack_348;
  ulonglong local_340;
  int local_338;
  bool local_334;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_330;
  ForAnyElementType FStack_328;
  ulonglong local_320;
  undefined1 local_318 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_310;
  ForAnyElementType FStack_308;
  ulonglong local_300;
  bool local_2f7;
  bool local_2f5;
  bool local_2f0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2e8;
  ForAnyElementType FStack_2e0;
  ulonglong local_2d8;
  TReferenceControllerBase<1> *local_2d0;
  FName local_2c8;
  FName local_2c0;
  TSharedRef<SWindow,1> *local_2b8;
  undefined1 local_2b0 [8];
  FDelegateAllocation local_2a8;
  undefined1 local_298 [16];
  FNameEntryId local_288;
  undefined1 local_278 [8];
  TReferenceControllerBase<1> *local_270;
  TReferenceControllerBase<1> *local_268;
  TSharedRef<SWindow,1> *local_260;
  undefined1 local_258 [24];
  undefined1 local_240 [24];
  undefined1 local_228 [24];
  undefined1 local_210 [32];
  FSlateIcon local_1f0;
  FMenuBuilder local_1d0;
  
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  pIVar14 = FAppStyle::Get();
  local_4e8.Object = (SWidget *)0x0;
  local_4e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3e0.Object = (FUICommandList *)0x0;
  local_3e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMenuBuilder::FMenuBuilder
            (&local_1d0,true,&local_3e0,(TSharedPtr<FExtender,1> *)&local_4e8,false,pIVar14,true,
             (FName)0x0,true);
  local_4d8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_4d8[1] = false;
  local_4c0 = 0;
  local_3e0.Object = (FUICommandList *)0x0;
  local_3e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_4d0 = (undefined1  [8])0x0;
  FStack_4c8.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_420);
  local_4e8.SharedReferenceCount.ReferenceController =
       local_4e8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_420[0x10] = false;
  local_4e8.Object = (SWidget *)HandleIsDisplayButtonChecked;
  local_3f8 = 0;
  local_408 = (undefined1  [8])0x0;
  FStack_400.Data = (FScriptContainerElement *)0x0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_458.ComparisonIndex.Value = 0;
  local_458.Number = 0;
  pTVar15 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SWidgetHittestGrid,TWeakPtr<SWindow,1>_&>
                      ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_510,this,
                       (pmf_e2f7c6a7 *)&local_4e8,(TWeakPtr<SWindow,1> *)&local_3e0);
  local_4e8.SharedReferenceCount.ReferenceController =
       local_4e8.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_430.DelegateSize = 0;
  local_430._12_4_ = 0;
  local_438 = (undefined1  [8])0x0;
  local_4e8.Object = (SWidget *)HandleDisplayButtonClicked;
  local_430.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  pTVar16 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SWidgetHittestGrid,TWeakPtr<SWindow,1>_&>
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_528,this,
                       (pmf_c38b6143 *)&local_4e8,(TWeakPtr<SWindow,1> *)&local_3e0);
  pFVar17 = FUIAction::FUIAction
                      ((FUIAction *)local_258,pTVar16,
                       (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_438,pTVar15
                       ,RepeatDisabled);
  pFVar18 = FSlateIcon::FSlateIcon((FSlateIcon *)local_298);
  pFVar19 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>((TAttribute<FText> *)local_488,pFVar19);
  local_4b8._0_8_ = WidgetHittestGridText::DisplayNone.TextData.Reference;
  if (WidgetHittestGridText::DisplayNone.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*WidgetHittestGridText::DisplayNone.TextData.Reference + 8))
              (WidgetHittestGridText::DisplayNone.TextData.Reference,&local_res18);
  }
  local_4b8._8_4_ = WidgetHittestGridText::DisplayNone.Flags;
  local_4b8[0x10] = true;
  local_490 = 0;
  local_4a0 = (undefined1  [8])0x0;
  FStack_498.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1d0,(TAttribute<FText> *)local_4b8,
             (TAttribute<FText> *)local_488,pFVar18,pFVar17,local_458,RadioButton,local_res20,
             (TAttribute<FText> *)local_420,(TAttribute<EVisibility> *)local_4d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a0);
  if (FStack_498.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_498.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4a0);
  if ((ITextData *)local_4b8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_4b8._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_470);
  if (FStack_468.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_468.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_470);
  if ((ITextData *)local_488._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_488._0_8_ + 0x10))();
  }
  FUIAction::~FUIAction((FUIAction *)local_258);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_408);
  if (FStack_400.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_400.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_408);
  if ((ITextData *)local_420._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_420._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4d0);
  if (FStack_4c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4d0);
  local_4d8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_4d8[1] = false;
  local_4c0 = 0;
  local_4d0 = (undefined1  [8])0x0;
  FStack_4c8.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_4b8);
  local_4b8[0x10] = false;
  local_490 = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_4a0 = (undefined1  [8])0x0;
  FStack_498.Data = (FScriptContainerElement *)0x0;
  local_458.ComparisonIndex.Value = 0;
  local_458.Number = 0;
  local_3d0 = (undefined1  [8])0x0;
  local_3c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3c8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3d0,
             (FWriteAccessScope *)local_510);
  local_4f8 = &local_3c8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,&local_3c8);
  pTVar26 = (TReferenceControllerBase<1> *)__return_storage_ptr__;
  if (puVar20 != (undefined8 *)0x0) {
    local_450._12_4_ = local_3c8.DelegateAllocator._4_4_;
    local_450.TextData.Reference = (ITextData *)HandleIsDisplayAllChecked;
    local_450.Flags = 0;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_4e8);
    pTVar26 = (pTVar21->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar21->Object;
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar20 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetHittestGrid___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pSVar3;
    puVar20[4] = pTVar26;
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar26->WeakReferenceCount = (atomic<int>)((int)pTVar26->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    puVar20[5] = local_450.TextData.Reference;
    puVar20[6] = CONCAT44(local_450._12_4_,local_450.Flags);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4e8.SharedReferenceCount.ReferenceController);
  }
  bVar7 = false;
  bVar6 = false;
  if (FStack_500.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_508.AccessDetector.State,
               (FDestructionSentinel *)local_510);
  }
  local_430._8_8_ = 0;
  local_438 = (undefined1  [8])0x0;
  local_430.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2b0 = (undefined1  [8])0x0;
  local_2a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2a8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b0,
             (FWriteAccessScope *)local_510);
  local_4f8 = &local_2a8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,&local_2a8);
  pTVar26 = (TReferenceControllerBase<1> *)__return_storage_ptr__;
  if (puVar20 != (undefined8 *)0x0) {
    local_450._12_4_ = local_3c8.DelegateAllocator._4_4_;
    local_450.TextData.Reference = (ITextData *)HandleDisplayAllClicked;
    local_450.Flags = 0;
    pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)&local_4e8);
    pTVar26 = (pTVar23->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar23->Object;
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar7 = true;
    *puVar20 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetHittestGrid___00__A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pSVar3;
    puVar20[4] = pTVar26;
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar26->WeakReferenceCount = (atomic<int>)((int)pTVar26->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar20[5] = local_450.TextData.Reference;
    puVar20[6] = CONCAT44(local_450._12_4_,local_450.Flags);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4e8.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  if (FStack_500.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_508.AccessDetector.State,
               (FDestructionSentinel *)local_510);
  }
  pFVar17 = FUIAction::FUIAction
                      ((FUIAction *)local_258,
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2b0,
                       (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_438,
                       (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_3d0,
                       RepeatDisabled);
  pFVar18 = FSlateIcon::FSlateIcon((FSlateIcon *)local_298);
  pFVar19 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>((TAttribute<FText> *)local_420,pFVar19);
  local_488._0_8_ = WidgetHittestGridText::DisplayAllHitTest.TextData.Reference;
  if (WidgetHittestGridText::DisplayAllHitTest.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*WidgetHittestGridText::DisplayAllHitTest.TextData.Reference + 8))
              (WidgetHittestGridText::DisplayAllHitTest.TextData.Reference,&local_res18);
  }
  local_488._8_4_ = WidgetHittestGridText::DisplayAllHitTest.Flags;
  local_488[0x10] = true;
  local_460 = 0;
  local_470 = (undefined1  [8])0x0;
  FStack_468.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_1d0,(TAttribute<FText> *)local_488,
             (TAttribute<FText> *)local_420,pFVar18,pFVar17,local_458,RadioButton,local_res20,
             (TAttribute<FText> *)local_4b8,(TAttribute<EVisibility> *)local_4d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_470,
             (FWriteAccessScope *)&local_528);
  if (((int)local_460 != 0) && (FStack_468.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_468.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_468,0,0,0x10);
    local_460 = local_460 & 0xffffffff00000000;
  }
  if (local_528.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_528.Accessor,&local_528);
  }
  if (FStack_468.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_468.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_470);
  if ((ITextData *)local_488._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_488._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_408);
  if (FStack_400.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_400.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_408);
  if ((ITextData *)local_420._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_420._0_8_ + 0x10))();
  }
  FUIAction::~FUIAction((FUIAction *)local_258);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a0);
  if (FStack_498.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_498.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4a0);
  if ((ITextData *)local_4b8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_4b8._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4d0);
  if (FStack_4c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_4c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4d0);
  memset(local_3b8,0,200);
  local_338 = 0;
  local_3a0 = 0;
  local_380 = 0;
  local_360 = 0;
  local_340 = 0;
  local_320 = 0;
  local_300 = 0;
  local_2d8 = 0;
  local_4f8 = (FDelegateAllocation *)0x0;
  local_3b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3a8.Data = (FScriptContainerElement *)0x0;
  local_398[0] = false;
  local_398[1] = false;
  local_390.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_388.Data = (FScriptContainerElement *)0x0;
  local_378[0] = false;
  local_378[1] = false;
  local_370.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_368.Data = (FScriptContainerElement *)0x0;
  local_358[0] = false;
  local_358[1] = false;
  local_350.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_348.Data = (FScriptContainerElement *)0x0;
  local_334 = false;
  local_330.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_328.Data = (FScriptContainerElement *)0x0;
  local_318[0] = Preferred;
  local_318[1] = false;
  local_310.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_308.Data = (FScriptContainerElement *)0x0;
  local_2f7 = false;
  local_2f5 = false;
  local_2f0 = false;
  local_2e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2e0.Data = (FScriptContainerElement *)0x0;
  local_510._0_2_ = 0x19;
  local_508.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_500.Data = (FScriptContainerElement *)0x0;
  pFVar19 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)&local_4e8,L"SWidgetHittestGrid",L"Windows",L"Windows");
  FText::FText((FText *)local_4b8,pFVar19);
  local_4b8[0x10] = true;
  local_490 = 0;
  local_4a0 = (undefined1  [8])0x0;
  FStack_498.Data = (FScriptContainerElement *)0x0;
  pFVar24 = ::FName::FName(&local_res18,"Windows");
  FMenuBuilder::BeginSection
            (&local_1d0,*pFVar24,(TAttribute<FText> *)local_4b8,(TAttribute<EVisibility> *)local_510
             ,(TAttribute<FMenuEntryResizeParams> *)local_3b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4a0);
  if (FStack_498.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_498.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4a0);
  if ((ITextData *)local_4b8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_4b8._0_8_ + 0x10))();
  }
  if (local_4e8.Object != (SWidget *)0x0) {
    (**(code **)((local_4e8.Object)->_padding_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_508,(FWriteAccessScope *)&local_528);
  if (((int)local_4f8 != 0) && (FStack_500.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_500.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_500,0,0,0x10);
    local_4f8 = (FDelegateAllocation *)((ulonglong)local_4f8 & 0xffffffff00000000);
  }
  if (local_528.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_528.Accessor,&local_528);
  }
  if (FStack_500.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_500.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_508.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2e8,(FWriteAccessScope *)&local_528);
  if (((int)local_2d8 != 0) && (FStack_2e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e0,0,0,0x10);
    local_2d8 = local_2d8 & 0xffffffff00000000;
  }
  if (local_528.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_528.Accessor,&local_528);
  }
  if (FStack_2e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2e8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_310,(FWriteAccessScope *)&local_528);
  if (((int)local_300 != 0) && (FStack_308.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_308.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_308,0,0,0x10);
    local_300 = local_300 & 0xffffffff00000000;
  }
  if (local_528.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_528.Accessor,&local_528);
  }
  if (FStack_308.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_308.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_310.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_330,(FWriteAccessScope *)&local_528);
  if (((int)local_320 != 0) && (FStack_328.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_328.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_328,0,0,0x10);
    local_320 = local_320 & 0xffffffff00000000;
  }
  if (local_528.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_528.Accessor,&local_528);
  }
  if (FStack_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_328.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_330.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_350,(FWriteAccessScope *)&local_528);
  if (((int)local_340 != 0) && (FStack_348.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_348.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_348,0,0,0x10);
    local_340 = local_340 & 0xffffffff00000000;
  }
  if (local_528.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_528.Accessor,&local_528);
  }
  if (FStack_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_348.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_350.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_370,(FWriteAccessScope *)&local_528);
  if (((int)local_360 != 0) && (FStack_368.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_368.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_368,0,0,0x10);
    local_360 = local_360 & 0xffffffff00000000;
  }
  if (local_528.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_528.Accessor,&local_528);
  }
  if (FStack_368.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_368.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_370.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_390,(FWriteAccessScope *)&local_528);
  if (((int)local_380 != 0) && (FStack_388.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_388.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_388,0,0,0x10);
    local_380 = local_380 & 0xffffffff00000000;
  }
  if (local_528.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_528.Accessor,&local_528);
  }
  if (FStack_388.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_388.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_390.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3b0,(FWriteAccessScope *)&local_528);
  if (((int)local_3a0 != 0) && (FStack_3a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a8,0,0,0x10);
    local_3a0 = local_3a0 & 0xffffffff00000000;
  }
  if (local_528.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_528.Accessor,&local_528);
  }
  if (FStack_3a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3b0.AccessDetector);
  local_3f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3f0.ArrayNum = 0;
  local_3f0.ArrayMax = 0;
  this_00 = FSlateApplication::Get();
  FSlateApplication::GetAllVisibleWindowsOrdered(this_00,&local_3f0);
  uVar25 = (ulonglong)local_3f0.ArrayNum;
  uVar12 = local_3c8.DelegateAllocator._4_4_;
  local_260 = (TSharedRef<SWindow,1> *)(local_3f0.AllocatorInstance.Data + uVar25 * 0x10);
  local_res20.ComparisonIndex.Value = local_3f0.ArrayNum;
  pTVar26 = (TReferenceControllerBase<1> *)__return_storage_ptr__;
  FVar27.Data = local_3f0.AllocatorInstance.Data;
  while( true ) {
    pTVar13 = local_260;
    local_2b8 = (TSharedRef<SWindow,1> *)FVar27.Data;
    if (local_3f0.ArrayNum != (int)uVar25) {
      `TCheckedPointerIterator<TSharedRef<SWindow,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res18);
    }
    if ((TSharedRef<SWindow,1> *)FVar27.Data == pTVar13) break;
    local_res18 = (FName)((TSharedRef<SWindow,1> *)FVar27.Data)->Object;
    pTVar4 = (((TSharedRef<SWindow,1> *)FVar27.Data)->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_4d8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_4d8[1] = false;
    local_4c0 = 0;
    local_4d0 = (undefined1  [8])0x0;
    FStack_4c8.Data = (FScriptContainerElement *)0x0;
    FText::FText((FText *)local_4b8);
    local_4b8[0x10] = false;
    local_490 = 0;
    local_2c8.ComparisonIndex.Value = 0;
    local_2c8.Number = 0;
    local_4a0 = (undefined1  [8])0x0;
    FStack_498.Data = (FScriptContainerElement *)0x0;
    local_2c0.ComparisonIndex.Value = 0;
    local_2c0.Number = 0;
    local_298._0_4_ = 0;
    local_298._4_4_ = 0;
    local_298._8_4_ = 0;
    local_298._12_4_ = 0;
    local_288.Value = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_298,
               (FWriteAccessScope *)local_510);
    local_4f8 = (FDelegateAllocation *)(local_298 + 8);
    puVar20 = UE::Core::Private::DelegateAllocate(0x40,(FDelegateAllocation *)(local_298 + 8));
    if (puVar20 != (undefined8 *)0x0) {
      local_3e0.Object = (FUICommandList *)HandleIsDisplayButtonChecked;
      local_3e0.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)((ulonglong)(uint)uVar12 << 0x20);
      pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                           (TSharedRef<SWidget_const_,1> *)local_2b0);
      local_440 = pTVar21->Object;
      pTVar5 = (pTVar21->SharedReferenceCount).ReferenceController;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar10 = true;
      bVar11 = true;
      bVar6 = true;
      *puVar20 = &
                 ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VSWindow___00____6B_
      ;
      *(FName *)(puVar20 + 1) = local_res18;
      puVar20[2] = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_2d0 = pTVar5;
      local_270 = pTVar5;
      uVar22 = FDelegateHandle::GenerateNewID();
      puVar20[3] = uVar22;
      *puVar20 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetHittestGrid___00__A6A_NXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VSWindow___00____6B_
      ;
      puVar20[4] = local_440;
      puVar20[5] = pTVar5;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar20[6] = local_3e0.Object;
      puVar20[7] = local_3e0.SharedReferenceCount.ReferenceController;
    }
    if (bVar10) {
      bVar10 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2d0)
      ;
    }
    if (bVar11) {
      bVar11 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_270)
      ;
    }
    if (bVar6) {
      bVar6 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_2a8.DelegateAllocator);
    }
    if (FStack_500.Data._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_508.AccessDetector.State,
                 (FDestructionSentinel *)local_510);
    }
    local_528.bDestroyed = false;
    local_528._17_7_ = 0;
    local_528.AccessType = Reader;
    local_528._4_4_ = 0;
    local_528.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    local_438 = (undefined1  [8])0x0;
    local_430.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_430._8_8_ = local_430._8_8_ & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_438,
               (FWriteAccessScope *)local_510);
    local_4f8 = &local_430;
    puVar20 = UE::Core::Private::DelegateAllocate(0x40,&local_430);
    if (puVar20 != (undefined8 *)0x0) {
      local_4e8.Object = (SWidget *)HandleDisplayButtonClicked;
      local_4e8.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)((ulonglong)(uint)uVar12 << 0x20);
      pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                           (TSharedRef<SWidget,1> *)local_3d0);
      pTVar26 = (pTVar23->SharedReferenceCount).ReferenceController;
      local_440 = pTVar23->Object;
      if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar7 = true;
      bVar9 = true;
      bVar8 = true;
      *puVar20 = &
                 ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VSWindow___00____6B_
      ;
      *(FName *)(puVar20 + 1) = local_res18;
      puVar20[2] = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_268 = pTVar26;
      uVar22 = FDelegateHandle::GenerateNewID();
      puVar20[3] = uVar22;
      *puVar20 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetHittestGrid___00__A6AXXZUFDefaultDelegateUserPolicy__V__TWeakPtr_VSWindow___00____6B_
      ;
      puVar20[4] = local_440;
      puVar20[5] = pTVar26;
      if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar26->WeakReferenceCount = (atomic<int>)((int)pTVar26->WeakReferenceCount + 1);
        UNLOCK();
      }
      puVar20[6] = local_4e8.Object;
      puVar20[7] = local_4e8.SharedReferenceCount.ReferenceController;
    }
    if (bVar7) {
      bVar7 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
    }
    if (bVar8) {
      bVar8 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_268)
      ;
    }
    if (bVar9) {
      bVar9 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_3c8.DelegateAllocator);
    }
    if (FStack_500.Data._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_508.AccessDetector.State,
                 (FDestructionSentinel *)local_510);
    }
    pFVar17 = FUIAction::FUIAction
                        ((FUIAction *)local_258,
                         (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_438,
                         (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&local_528,
                         (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_298,
                         RepeatDisabled);
    local_440 = (SWidget *)FSlateIcon::FSlateIcon(&local_1f0);
    pFVar19 = FText::GetEmpty();
    local_488._0_8_ = (pFVar19->TextData).Reference;
    if ((ITextData *)local_488._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_488._0_8_ + 8))(local_488._0_8_,local_278);
    }
    local_488._8_4_ = pFVar19->Flags;
    local_488[0x10] = true;
    local_460 = 0;
    local_470 = (undefined1  [8])0x0;
    FStack_468.Data = (FScriptContainerElement *)0x0;
    pFVar19 = TAttribute<FText>::Get((TAttribute<FText> *)((longlong)local_res18 + 0x378));
    local_450.TextData.Reference = (pFVar19->TextData).Reference;
    if (local_450.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_450.TextData.Reference + 8))
                (local_450.TextData.Reference,&local_458);
    }
    local_450.Flags = pFVar19->Flags;
    FText::FText((FText *)local_420,&local_450);
    local_420[0x10] = true;
    local_408 = (undefined1  [8])0x0;
    FStack_400.Data = (FScriptContainerElement *)0x0;
    local_3f8 = 0;
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)&local_1d0,(TAttribute<FText> *)local_420,
               (TAttribute<FText> *)local_488,(FSlateIcon *)local_440,pFVar17,local_2c0,RadioButton,
               local_2c8,(TAttribute<FText> *)local_4b8,(TAttribute<EVisibility> *)local_4d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_408,
               (FWriteAccessScope *)local_510);
    if (((int)local_3f8 != 0) && (FStack_400.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_400.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_400,0,0,0x10);
      local_3f8 = local_3f8 & 0xffffffff00000000;
    }
    if (FStack_500.Data._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_508.AccessDetector.State,
                 (FDestructionSentinel *)local_510);
    }
    if (FStack_400.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_400.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_408);
    if ((ITextData *)local_420._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_420._0_8_ + 0x10))();
    }
    if (local_450.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_450.TextData.Reference + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_470,
               (FWriteAccessScope *)local_510);
    if (((int)local_460 != 0) && (FStack_468.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_468.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_468,0,0,0x10);
      local_460 = local_460 & 0xffffffff00000000;
    }
    if (FStack_500.Data._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_508.AccessDetector.State,
                 (FDestructionSentinel *)local_510);
    }
    if (FStack_468.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_468.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_470);
    if ((ITextData *)local_488._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_488._0_8_ + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_210);
    if ((void *)local_210._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_210._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_210);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_228);
    if ((void *)local_228._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_228._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_228);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_240);
    if ((void *)local_240._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_240._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_240);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_258);
    if ((void *)local_258._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_258._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_258);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4a0,
               (FWriteAccessScope *)local_510);
    if (((int)local_490 != 0) && (FStack_498.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_498.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_498,0,0,0x10);
      local_490 = local_490 & 0xffffffff00000000;
    }
    if (FStack_500.Data._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_508.AccessDetector.State,
                 (FDestructionSentinel *)local_510);
    }
    if (FStack_498.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_498.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4a0);
    if ((ITextData *)local_4b8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_4b8._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4d0,
               (FWriteAccessScope *)local_510);
    if (((int)local_4c0 != 0) && (FStack_4c8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_4c8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4c8,0,0,0x10);
      local_4c0 = local_4c0 & 0xffffffff00000000;
    }
    if (FStack_500.Data._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_508.AccessDetector.State,
                 (FDestructionSentinel *)local_510);
    }
    if (FStack_4c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_4c8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_4d0);
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
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    FVar27.Data = (FScriptContainerElement *)(local_2b8 + 1);
    uVar25 = (ulonglong)local_res20 & 0xffffffff;
  }
  DestructItems<TSharedRef<SWindow,1>,int>
            ((TSharedRef<SWindow,1> *)local_3f0.AllocatorInstance.Data,local_3f0.ArrayNum);
  if ((TSharedRef<SWindow,1> *)local_3f0.AllocatorInstance.Data != (TSharedRef<SWindow,1> *)0x0) {
    FMemory::Free(local_3f0.AllocatorInstance.Data);
  }
  FMenuBuilder::EndSection(&local_1d0);
  FMenuBuilder::MakeWidget
            (&local_1d0,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_1d0);
  return __return_storage_ptr__;
}

// GetFlagsMenuContent @ 142e9ce70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SWidgetHittestGrid::GetFlagsMenuContent
          (SWidgetHittestGrid *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  ISlateStyle *pIVar1;
  FText *pFVar2;
  longlong *local_1c8;
  FMRSWRecursiveAccessDetector *pFStack_1c0;
  bool local_1b8;
  TSharedPtr<FExtender,1> local_1b0;
  undefined1 local_1a0 [128];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  ForAnyElementType FStack_118;
  ulonglong local_110;
  int local_108;
  bool local_104;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_100;
  ForAnyElementType FStack_f8;
  ulonglong local_f0;
  undefined1 local_e8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e0;
  ForAnyElementType FStack_d8;
  ulonglong local_d0;
  undefined1 local_c8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  ForAnyElementType FStack_b8;
  ulonglong local_b0;
  undefined1 local_a8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  ForAnyElementType FStack_98;
  ulonglong local_90;
  int local_88;
  bool local_84;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType FStack_78;
  ulonglong local_70;
  undefined1 local_68 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  ForAnyElementType FStack_58;
  ulonglong local_50;
  bool local_47;
  bool local_45;
  bool local_40;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  undefined4 local_20;
  
  pIVar1 = FAppStyle::Get();
  local_1b0.Object = (FExtender *)0x0;
  local_1b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1c8 = (longlong *)0x0;
  pFStack_1c0 = (FMRSWRecursiveAccessDetector *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)local_1a0,Menu,true,
             (TSharedPtr<FUICommandList_const_,1> *)&local_1c8,false,&local_1b0,pIVar1,(FName)0x0,
             (FName)0x0);
  local_1a0._96_4_ = 0;
  local_1a0._100_4_ = 0;
  local_1a0._0_8_ = &___7FMenuBuilder__6B_;
  FText::FText((FText *)(local_1a0 + 0x68));
  local_1a0[0x78] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_1a0[0x79] = false;
  local_110 = 0;
  local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_118.Data = (FScriptContainerElement *)0x0;
  memset(&local_108,0,200);
  local_108 = 0;
  local_f0 = 0;
  local_d0 = 0;
  local_b0 = 0;
  local_90 = 0;
  local_70 = 0;
  local_50 = 0;
  local_28 = 0;
  local_104 = false;
  local_100.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_f8.Data = (FScriptContainerElement *)0x0;
  local_e8[0] = false;
  local_e8[1] = false;
  local_e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_d8.Data = (FScriptContainerElement *)0x0;
  local_c8[0] = false;
  local_c8[1] = false;
  local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  local_a8[0] = false;
  local_a8[1] = false;
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_98.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_84 = false;
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  local_68[0] = Preferred;
  local_68[1] = false;
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_58.Data = (FScriptContainerElement *)0x0;
  local_47 = false;
  local_45 = false;
  local_40 = false;
  local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  local_20._0_1_ = false;
  local_20._1_1_ = true;
  local_20._2_1_ = true;
  local_20._3_1_ = false;
  FMenuBuilder::AddSearchWidget((FMenuBuilder *)local_1a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_1b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_1a0;
  local_1b0.Object = (FExtender *)this;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_1c8,L"SWidgetHittestGrid",L"HideDisabledWidget",
                      L"Hide Disabled Widgets");
  `SWidgetHittestGrid::GetFlagsMenuContent'::__l2::<lambda_1>::operator()
            (&local_1b0,pFVar2,HideDisabledWidgets);
  if ((FUICommandList *)local_1c8 != (FUICommandList *)0x0) {
    (**(code **)(*local_1c8 + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_1c8,L"SWidgetHittestGrid",
                      L"HideUnsupportedKeyboardFocusWidget",
                      L"Hide Unsupported Keyboard Focus Widgets");
  `SWidgetHittestGrid::GetFlagsMenuContent'::__l2::<lambda_1>::operator()
            (&local_1b0,pFVar2,HideUnsupportedKeyboardFocusWidgets);
  if ((FUICommandList *)local_1c8 != (FUICommandList *)0x0) {
    (**(code **)(*local_1c8 + 0x10))();
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_1c8,L"SWidgetHittestGrid",L"PaintwithFocusBrush",
                      L"Paint with Focus Brush");
  `SWidgetHittestGrid::GetFlagsMenuContent'::__l2::<lambda_1>::operator()
            (&local_1b0,pFVar2,UseFocusBrush);
  if ((FUICommandList *)local_1c8 != (FUICommandList *)0x0) {
    (**(code **)(*local_1c8 + 0x10))();
  }
  FMenuBuilder::MakeWidget
            ((FMenuBuilder *)local_1a0,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_38,(FWriteAccessScope *)&local_1c8);
  if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_1b8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_1c0,(FDestructionSentinel *)&local_1c8)
    ;
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_1c8);
  if (((int)local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,0x10);
    local_50 = local_50 & 0xffffffff00000000;
  }
  if (local_1b8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_1c0,(FDestructionSentinel *)&local_1c8)
    ;
  }
  if (FStack_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)&local_1c8);
  if (((int)local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
    local_70 = local_70 & 0xffffffff00000000;
  }
  if (local_1b8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_1c0,(FDestructionSentinel *)&local_1c8)
    ;
  }
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a0,(FWriteAccessScope *)&local_1c8);
  if (((int)local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_1b8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_1c0,(FDestructionSentinel *)&local_1c8)
    ;
  }
  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_1c8);
  if (((int)local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
    local_b0 = local_b0 & 0xffffffff00000000;
  }
  if (local_1b8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_1c0,(FDestructionSentinel *)&local_1c8)
    ;
  }
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_e0,(FWriteAccessScope *)&local_1c8);
  if (((int)local_d0 != 0) && (FStack_d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d8,0,0,0x10);
    local_d0 = local_d0 & 0xffffffff00000000;
  }
  if (local_1b8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_1c0,(FDestructionSentinel *)&local_1c8)
    ;
  }
  if (FStack_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_100,(FWriteAccessScope *)&local_1c8);
  if (((int)local_f0 != 0) && (FStack_f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f8,0,0,0x10);
    local_f0 = local_f0 & 0xffffffff00000000;
  }
  if (local_1b8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_1c0,(FDestructionSentinel *)&local_1c8)
    ;
  }
  if (FStack_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_100.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_1c8);
  if (((int)local_110 != 0) && (FStack_118.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_118.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_118,0,0,0x10);
    local_110 = local_110 & 0xffffffff00000000;
  }
  if (local_1b8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(pFStack_1c0,(FDestructionSentinel *)&local_1c8)
    ;
  }
  if (FStack_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_118.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
  if ((ITextData *)local_1a0._104_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1a0._104_8_ + 0x10))();
  }
  local_1a0._0_8_ = &___7FMultiBoxBuilder__6B_;
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_1a0._40_8_,local_1a0._48_4_);
  if ((TSharedPtr<FExtender,1> *)local_1a0._40_8_ != (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free((void *)local_1a0._40_8_);
  }
  DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
            ((TSharedPtr<FUICommandList_const_,1> *)local_1a0._24_8_,local_1a0._32_4_);
  if ((TSharedPtr<FUICommandList_const_,1> *)local_1a0._24_8_ !=
      (TSharedPtr<FUICommandList_const_,1> *)0x0) {
    FMemory::Free((void *)local_1a0._24_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1a0._16_8_);
  return __return_storage_ptr__;
}

// GetNavigationBoundaryRuleText @ 142ea04d0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SWidgetHittestGrid::GetNavigationBoundaryRuleText
          (SWidgetHittestGrid *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->NavigationBoundaryRule).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->NavigationBoundaryRule).Flags;
  return __return_storage_ptr__;
}

// GetNavigationDirectionText @ 142ea0520

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SWidgetHittestGrid::GetNavigationDirectionText
          (SWidgetHittestGrid *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->NavigationDirection).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->NavigationDirection).Flags;
  return __return_storage_ptr__;
}

// GetNavigationFromText @ 142ea0570

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SWidgetHittestGrid::GetNavigationFromText(SWidgetHittestGrid *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->NavigationFrom).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->NavigationFrom).Flags;
  return __return_storage_ptr__;
}

// GetNavigationResultText @ 142ea05c0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SWidgetHittestGrid::GetNavigationResultText(SWidgetHittestGrid *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->NavigationResult).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->NavigationResult).Flags;
  return __return_storage_ptr__;
}

// GetNavigationRuleWidgetText @ 142ea0610

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SWidgetHittestGrid::GetNavigationRuleWidgetText
          (SWidgetHittestGrid *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->NavigationRuleWidget).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->NavigationRuleWidget).Flags;
  return __return_storage_ptr__;
}

// GetNavigationUserIndexText @ 142ea0700

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
SWidgetHittestGrid::GetNavigationUserIndexText
          (SWidgetHittestGrid *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->NavigationUserIndex).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->NavigationUserIndex).Flags;
  return __return_storage_ptr__;
}

// HandleDisplayAllClicked @ 142eaef40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidgetHittestGrid::HandleDisplayAllClicked(SWidgetHittestGrid *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 local_18 [2];
  
  if (&this->WindowToDisplay != (TWeakPtr<SWindow,1> *)local_18) {
    pTVar3 = (this->WindowToDisplay).WeakReferenceCount.ReferenceController;
    (this->WindowToDisplay).Object = (SWindow *)0x0;
    (this->WindowToDisplay).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
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
  }
  this->bDisplayAllWindows = true;
  return;
}

// HandleDisplayButtonClicked @ 142eaefa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetHittestGrid::HandleDisplayButtonClicked
          (SWidgetHittestGrid *this,TWeakPtr<SWindow,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWindow *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  pSVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->WindowToDisplay).WeakReferenceCount.ReferenceController;
  (this->WindowToDisplay).Object = pSVar4;
  (this->WindowToDisplay).WeakReferenceCount.ReferenceController = pTVar3;
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
  this->bDisplayAllWindows = false;
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
  return;
}

// HandleDisplayFlagsButtonClicked @ 142eaf040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetHittestGrid::HandleDisplayFlagsButtonClicked
          (SWidgetHittestGrid *this,EDisplayGridFlags param_1)

{
  this->DisplayGridFlags = this->DisplayGridFlags ^ param_1;
  SaveSettings(this);
  return;
}

// HandleDrawDebuggerVisual @ 142eaf180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetHittestGrid::HandleDrawDebuggerVisual
          (SWidgetHittestGrid *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateWindowElementList *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  SWindow *pSVar3;
  FHittestGrid *this_00;
  SWindow *pSVar4;
  SWindow *pSVar5;
  bool bVar6;
  
  if (!GSlateHitTestGridDebugging) {
    pSVar4 = (SWindow *)0x0;
    pSVar3 = (SWindow *)(this->WindowToDisplay).WeakReferenceCount.ReferenceController;
    pSVar5 = pSVar3;
    if (pSVar3 != (SWindow *)0x0) {
      iVar1 = (int)pSVar3->_padding_;
      do {
        pSVar5 = pSVar4;
        if (iVar1 == 0) goto LAB_142eaf1d6;
        LOCK();
        iVar2 = (int)pSVar3->_padding_;
        bVar6 = iVar1 == iVar2;
        if (bVar6) {
          *(int *)&pSVar3->_padding_ = iVar1 + 1;
          iVar2 = iVar1;
        }
        UNLOCK();
        iVar1 = iVar2;
      } while (!bVar6);
      pSVar4 = (this->WindowToDisplay).Object;
      pSVar5 = pSVar3;
    }
LAB_142eaf1d6:
    if ((this->bDisplayAllWindows != false) ||
       ((pSVar4 != (SWindow *)0x0 &&
        (pSVar3 = FSlateWindowElementList::GetPaintWindow(param_3), pSVar4 == pSVar3)))) {
      *param_4 = *param_4 + 1;
      pSVar3 = FSlateWindowElementList::GetPaintWindow(param_3);
      this_00 = SWindow::GetHittestGrid(pSVar3);
      FHittestGrid::DisplayGrid(this_00,*param_4,param_2,param_3,this->DisplayGridFlags);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar5);
  }
  return;
}

// HandleFindNextFocusableWidget @ 142eaf2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
SWidgetHittestGrid::HandleFindNextFocusableWidget
          (SWidgetHittestGrid *this,FHittestGrid *param_1,
          FDebuggingFindNextFocusableWidgetArgs *param_2)

{
  atomic<int> *paVar1;
  int *piVar2;
  TArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  atomic<int> aVar4;
  EUINavigation EVar5;
  EUINavigationRule EVar6;
  SWidget *pSVar7;
  code *pcVar8;
  TReferenceControllerBase<1> *pTVar9;
  ITextData *pIVar10;
  TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *pTVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  EVisibility EVar16;
  FSharedReferencer<1> FVar17;
  FDebuggingFindNextFocusableWidgetArgs *pFVar18;
  SWidgetHittestGrid *pSVar19;
  char cVar20;
  atomic<int> aVar21;
  int iVar22;
  TSharedRef<SWidget_const_,1> *pTVar23;
  FSlateApplication *pFVar24;
  FText *pFVar25;
  FText *pFVar26;
  UEnum *pUVar27;
  ulonglong uVar28;
  TReferenceControllerBase<1> *pTVar29;
  longlong *plVar30;
  ForElementType<FArrangedWidget> FVar31;
  FScriptContainerElement *pFVar32;
  ITextData *pIVar33;
  TReferenceControllerBase<1> *pTVar34;
  SWidget *pSVar35;
  TRefCountPtr<ITextData> TVar36;
  FScriptContainerElement *pFVar37;
  FScriptContainerElement *pFVar38;
  int iVar39;
  bool bVar40;
  undefined1 auStackY_348 [32];
  undefined1 local_2f8 [8];
  TReferenceControllerBase<1> *local_2f0;
  TReferenceControllerBase<1> *pTStack_2e8;
  uint local_2e0;
  SWidget *local_2d8;
  FSharedReferencer<1> local_2d0;
  undefined8 local_2c8;
  FSharedReferencer<1> local_2c0;
  undefined1 local_2b8 [4];
  undefined1 local_2b4 [4];
  undefined1 local_2b0 [8];
  FDebuggingFindNextFocusableWidgetArgs *local_2a8;
  SWidgetHittestGrid *local_2a0;
  TSharedRef<SWidget_const_,1> local_298;
  FText local_288;
  SWidget *local_278;
  TReferenceControllerBase<1> *local_270;
  TSharedPtr<SWidget_const_,1> local_268;
  FText local_258;
  TSharedPtr<FCulture,1> local_248;
  TSharedPtr<SWidget_const_,1> local_238;
  FText local_228;
  TSharedRef<SWidget_const_,1> local_218;
  FText local_208;
  FText local_1f8;
  FText local_1e8;
  FText local_1d8;
  FReadAccessScope local_1c8;
  FWidgetPath local_1b0;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_2e0 = 0;
  local_2a8 = param_2;
  local_2a0 = this;
  if (this->bRejectWidgetReflectorEvent != false) {
    pTVar34 = (this->ReflectorWidget).WeakReferenceCount.ReferenceController;
    if (pTVar34 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar34->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          pTVar34 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142eaf312;
        }
        LOCK();
        aVar21 = pTVar34->SharedReferenceCount;
        bVar40 = aVar4 == aVar21;
        if (bVar40) {
          pTVar34->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar21 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar21;
      } while (!bVar40);
      pSVar35 = (this->ReflectorWidget).Object;
      if (pSVar35 != (SWidget *)0x0) {
        local_2d0.ReferenceController =
             (param_2->StartingWidget).Widget.SharedReferenceCount.ReferenceController;
        pSVar7 = (param_2->StartingWidget).Widget.Object;
        if (local_2d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_2d0.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_2d0.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        while ((local_2d8 = pSVar7, pSVar7 != (SWidget *)0x0 &&
               (cVar20 = (**(code **)(pSVar7->_padding_ + 0x208))(pSVar7), cVar20 == '\0'))) {
          if (pSVar35 == pSVar7) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2d0.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar34);
            return;
          }
          if ((pSVar7 == (SWidget *)0x0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar40)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_2c0.ReferenceController =
               (pSVar7->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
          local_2d8 = (SWidget *)0x0;
          if (local_2c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            aVar4 = (local_2c0.ReferenceController)->SharedReferenceCount;
            do {
              if (aVar4 == (atomic<int>)0x0) {
                local_2c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                goto LAB_142eaf42b;
              }
              LOCK();
              aVar21 = (local_2c0.ReferenceController)->SharedReferenceCount;
              bVar40 = aVar4 == aVar21;
              if (bVar40) {
                (local_2c0.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)aVar4 + 1);
                aVar21 = aVar4;
              }
              UNLOCK();
              aVar4 = aVar21;
            } while (!bVar40);
            local_2d8 = (pSVar7->ParentWidgetPtr).Object;
            LOCK();
            (local_2c0.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_2c0.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
LAB_142eaf42b:
          FVar17.ReferenceController = local_2c0.ReferenceController;
          local_2c8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_2d0,&local_2c0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2c0.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar17.ReferenceController);
          pSVar7 = local_2d8;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2d0.ReferenceController);
      }
    }
LAB_142eaf312:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar34);
  }
  if ((this->bVisualizeOnNavigation != false) &&
     (bVar40 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                         ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnVisualizeWidget),
     bVar40)) {
    if ((param_2->Result).Object == (SWidget *)0x0) {
      local_298.SharedReferenceCount.ReferenceController =
           (param_2->StartingWidget).Widget.SharedReferenceCount.ReferenceController;
      pSVar35 = (param_2->StartingWidget).Widget.Object;
      if (local_298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar23 = &local_298;
      bVar15 = false;
      bVar40 = true;
      local_298.Object = pSVar35;
    }
    else {
      pTVar23 = TSharedPtr<SWidget_const_,1>::ToSharedRef(&param_2->Result,&local_218);
      bVar15 = true;
      bVar40 = false;
      pSVar35 = pTVar23->Object;
    }
    pTVar34 = (pTVar23->SharedReferenceCount).ReferenceController;
    if (pTVar34 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar34->SharedReferenceCount = (atomic<int>)((int)pTVar34->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (bVar40) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_298.SharedReferenceCount.ReferenceController);
    }
    if (bVar15) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_218.SharedReferenceCount.ReferenceController);
    }
    FWidgetPath::FWidgetPath(&local_1b0);
    pFVar24 = FSlateApplication::Get();
    EVar16 = EVisibility::Visible;
    pcVar8 = *(code **)(*(longlong *)pFVar24 + 0x20);
    if (pTVar34 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar34->SharedReferenceCount = (atomic<int>)((int)pTVar34->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_278 = pSVar35;
    local_270 = pTVar34;
    cVar20 = (*pcVar8)(pFVar24,&local_278,&local_1b0,EVar16.Value.Value);
    if (cVar20 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnVisualizeWidget,
                 &local_1c8);
      if (*(int *)&(this->OnVisualizeWidget).field_0x10 == 0) {
        plVar30 = (longlong *)0x0;
      }
      else {
        plVar30 = *(longlong **)&(this->OnVisualizeWidget).field_0x8;
      }
      (**(code **)(*plVar30 + 0x60))(plVar30,&local_1b0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_1c8);
    }
    if (local_1b0.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_1b0.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b0.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar31 = (ForElementType<FArrangedWidget>)&local_1b0.Widgets.Array;
    if (local_1b0.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar31 = local_1b0.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar31,local_1b0.Widgets.Array.ArrayNum);
    if (local_1b0.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_1b0.Widgets.Array.AllocatorInstance.SecondaryData);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar34);
  }
  pTVar34 = (param_2->StartingWidget).Widget.SharedReferenceCount.ReferenceController;
  local_268.Object = (param_2->StartingWidget).Widget.Object;
  if (pTVar34 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar34->SharedReferenceCount = (atomic<int>)((int)pTVar34->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_268.SharedReferenceCount.ReferenceController = pTVar34;
  pFVar25 = FWidgetReflectorNodeUtils::GetWidgetTypeAndShortName(&local_208,&local_268);
  FText::operator=(&this->NavigationFrom,pFVar25);
  if (local_208.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar34);
  (this->NavigationFromWidget).Object = (param_2->StartingWidget).Widget.Object;
  pTVar34 = (param_2->StartingWidget).Widget.SharedReferenceCount.ReferenceController;
  if (pTVar34 != (this->NavigationFromWidget).WeakReferenceCount.ReferenceController) {
    if (pTVar34 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar34->WeakReferenceCount = (atomic<int>)((int)pTVar34->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar9 = (this->NavigationFromWidget).WeakReferenceCount.ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar9->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
      }
    }
    (this->NavigationFromWidget).WeakReferenceCount.ReferenceController = pTVar34;
  }
  if ((param_2->Result).Object == (SWidget *)0x0) {
    bVar15 = false;
    bVar40 = true;
    pFVar25 = FText::GetEmpty();
    pIVar33 = (pFVar25->TextData).Reference;
    local_288.TextData.Reference = pIVar33;
    if (pIVar33 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar33 + 8))(pIVar33,local_2b8);
    }
    pFVar26 = &local_288;
    local_288.Flags = pFVar25->Flags;
    TVar36.Reference = pIVar33;
  }
  else {
    bVar15 = true;
    bVar40 = false;
    pFVar26 = FWidgetReflectorNodeUtils::GetWidgetTypeAndShortName(&local_1f8,&param_2->Result);
    pIVar33 = (pFVar26->TextData).Reference;
    TVar36.Reference = local_288.TextData.Reference;
  }
  pIVar10 = (this->NavigationResult).TextData.Reference;
  if (pIVar10 != pIVar33) {
    (this->NavigationResult).TextData.Reference = pIVar33;
    if (pIVar33 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar33 + 8))(pIVar33,local_2b4);
    }
    if (pIVar10 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar10 + 0x10))(pIVar10);
    }
  }
  (this->NavigationResult).Flags = pFVar26->Flags;
  if ((bVar40) && (TVar36.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*TVar36.Reference + 0x10))(TVar36.Reference);
  }
  if ((bVar15) && (local_1f8.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
  }
  (this->NavigationFromResult).Object = (param_2->Result).Object;
  pTVar34 = (param_2->Result).SharedReferenceCount.ReferenceController;
  if (pTVar34 != (this->NavigationFromResult).WeakReferenceCount.ReferenceController) {
    if (pTVar34 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar34->WeakReferenceCount = (atomic<int>)((int)pTVar34->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar9 = (this->NavigationFromResult).WeakReferenceCount.ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar9->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
      }
    }
    (this->NavigationFromResult).WeakReferenceCount.ReferenceController = pTVar34;
  }
  EVar5 = param_2->Direction;
  pUVar27 = StaticEnum<enum_EUINavigation>();
  if ((pUVar27 == (UEnum *)0x0) &&
     (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                         ("EnumClass != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                          ,0xd13,L""), bVar40)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  UEnum::GetDisplayNameTextByValue(pUVar27,&local_258,(ulonglong)EVar5);
  FText::operator=(&this->NavigationDirection,&local_258);
  if (local_258.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
  }
  local_248.Object = (FCulture *)0x0;
  local_248.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar25 = FText::AsNumber(&local_1e8,param_2->UserIndex,(FNumberFormattingOptions *)0x0,&local_248
                           );
  FText::operator=(&this->NavigationUserIndex,pFVar25);
  if (local_1e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
  pTVar34 = (param_2->RuleWidget).Widget.SharedReferenceCount.ReferenceController;
  local_238.Object = (param_2->RuleWidget).Widget.Object;
  if (pTVar34 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar34->SharedReferenceCount = (atomic<int>)((int)pTVar34->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_238.SharedReferenceCount.ReferenceController = pTVar34;
  pFVar25 = FWidgetReflectorNodeUtils::GetWidgetTypeAndShortName(&local_1d8,&local_238);
  FText::operator=(&this->NavigationRuleWidget,pFVar25);
  if (local_1d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar34);
  (this->NavigationRuleWidgetWidget).Object = (param_2->RuleWidget).Widget.Object;
  pTVar34 = (param_2->RuleWidget).Widget.SharedReferenceCount.ReferenceController;
  if (pTVar34 != (this->NavigationRuleWidgetWidget).WeakReferenceCount.ReferenceController) {
    if (pTVar34 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar34->WeakReferenceCount = (atomic<int>)((int)pTVar34->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar9 = (this->NavigationRuleWidgetWidget).WeakReferenceCount.ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar9->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
      }
    }
    (this->NavigationRuleWidgetWidget).WeakReferenceCount.ReferenceController = pTVar34;
  }
  EVar6 = (param_2->NavigationReply).BoundaryRule;
  pUVar27 = StaticEnum<enum_EUINavigationRule>();
  if ((pUVar27 == (UEnum *)0x0) &&
     (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                         ("EnumClass != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                          ,0xd13,L""), bVar40)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  UEnum::GetDisplayNameTextByValue(pUVar27,&local_228,(ulonglong)EVar6);
  FText::operator=(&this->NavigationBoundaryRule,&local_228);
  if (local_228.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
  }
  pTVar3 = &this->IntermediateResultNodesRoot;
  piVar2 = &(this->IntermediateResultNodesRoot).ArrayMax;
  pTVar11 = (TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)
            (pTVar3->AllocatorInstance).Data;
  iVar39 = (this->IntermediateResultNodesRoot).ArrayNum;
  if ((this->IntermediateResultNodesRoot).ArrayMax < 0) {
    DestructItems<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,int>
              (pTVar11,iVar39);
    (this->IntermediateResultNodesRoot).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,int>
              (pTVar11,iVar39);
    (this->IntermediateResultNodesRoot).ArrayNum = 0;
  }
  pFVar18 = local_2a8;
  pTVar9 = _UNK_150651568;
  pTVar34 = ___xmm_00000000000000000000000000000010;
  local_2e0 = (param_2->IntermediateResults).ArrayNum;
  uVar28 = (ulonglong)(int)local_2e0;
  iVar39 = 1;
  pFVar38 = (param_2->IntermediateResults).AllocatorInstance.Data;
  pFVar37 = pFVar38 + uVar28 * 0x20;
  while( true ) {
    if ((pFVar18->IntermediateResults).ArrayNum != (int)uVar28) {
      local_2f8[0] = 0;
      `TCheckedPointerIterator<FHittestGrid::FDebuggingFindNextFocusableWidgetArgs::FWidgetResult_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_2f8);
    }
    pSVar19 = local_2a0;
    if (pFVar38 == pFVar37) {
      if (((local_2a0->NavigationIntermediateResultTree).Object ==
           (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar40)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (**(code **)(((pSVar19->NavigationIntermediateResultTree).Object)->_padding_ + 0x250))();
      return;
    }
    pTVar29 = ::operator_new(0x38);
    if (pTVar29 == (TReferenceControllerBase<1> *)0x0) {
      local_2f0 = pTVar34;
      pTStack_2e8 = pTVar9;
    }
    else {
      pTVar29->SharedReferenceCount = (atomic<int>)0x1;
      pTVar29->WeakReferenceCount = (atomic<int>)0x1;
      pTVar29->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFIntermediateResultNode_WidgetHittestGridInternal___00_SharedPointerInternals__6B_
      ;
      *(undefined8 *)((longlong)&pTVar29[2]._padding_ + 4) = 0;
      *(undefined8 *)&pTVar29[2].WeakReferenceCount = 0;
      *(undefined4 *)((longlong)&pTVar29[3]._padding_ + 4) = 0;
      pTVar29[1]._padding_ = 0;
      pTVar29[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar29[1].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar29[2]._padding_ = 0xffffffff;
      FText::FText((FText *)&pTVar29[2].SharedReferenceCount);
      local_2f0 = pTVar29 + 1;
      pTStack_2e8 = pTVar29;
      if ((local_2f0 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar40)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pTVar29 = local_2f0;
    local_2f0->_padding_ = *(longlong *)pFVar38;
    lVar12 = *(longlong *)(pFVar38 + 8);
    lVar13._0_4_ = local_2f0->SharedReferenceCount;
    lVar13._4_4_ = local_2f0->WeakReferenceCount;
    if (lVar12 != lVar13) {
      if (lVar12 != 0) {
        LOCK();
        *(int *)(lVar12 + 0xc) = *(int *)(lVar12 + 0xc) + 1;
        UNLOCK();
      }
      plVar30 = *(longlong **)&local_2f0->SharedReferenceCount;
      if (plVar30 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar30 + 0xc);
        iVar22 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar22 == 1) {
          (**(code **)(*plVar30 + 8))(plVar30,1);
        }
      }
      pTVar29->SharedReferenceCount = (atomic<int>)(int)lVar12;
      pTVar29->WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar12 >> 0x20);
    }
    pTVar29 = local_2f0;
    *(int *)&local_2f0[1]._padding_ = iVar39;
    plVar30 = *(longlong **)(pFVar38 + 0x10);
    plVar14 = *(longlong **)&local_2f0[1].SharedReferenceCount;
    if (plVar14 != plVar30) {
      *(longlong **)&local_2f0[1].SharedReferenceCount = plVar30;
      if (plVar30 != (longlong *)0x0) {
        (**(code **)(*plVar30 + 8))(plVar30,local_2b0);
      }
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    *(undefined4 *)&pTVar29[2]._padding_ = *(undefined4 *)(pFVar38 + 0x18);
    pFVar32 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar32 <= (FScriptContainerElement *)&local_2f0) &&
        ((FScriptContainerElement *)&local_2f0 <
         pFVar32 + (longlong)(this->IntermediateResultNodesRoot).ArrayMax * 0x10)) &&
       (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar40)) break;
    iVar22 = (this->IntermediateResultNodesRoot).ArrayNum;
    if (iVar22 == (this->IntermediateResultNodesRoot).ArrayMax) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar3->AllocatorInstance,
                          &(this->IntermediateResultNodesRoot).ArrayMax);
    }
    (this->IntermediateResultNodesRoot).ArrayNum = iVar22 + 1;
    pFVar32 = (pTVar3->AllocatorInstance).Data + (longlong)iVar22 * 0x10;
    *(TReferenceControllerBase<1> **)pFVar32 = local_2f0;
    *(TReferenceControllerBase<1> **)(pFVar32 + 8) = pTStack_2e8;
    if (pTStack_2e8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_2e8->SharedReferenceCount = (atomic<int>)((int)pTStack_2e8->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar39 = iVar39 + 1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2e8)
    ;
    uVar28 = (ulonglong)local_2e0;
    pFVar38 = pFVar38 + 0x20;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// HandleGetRejectWidgetReflectorChecked @ 142eb04b0

/* WARNING: Enum "Type": Some values do not have unique names */

ECheckBoxState __thiscall
SWidgetHittestGrid::HandleGetRejectWidgetReflectorChecked(SWidgetHittestGrid *this)

{
  return this->bRejectWidgetReflectorEvent != false;
}

// HandleGetVisualizeOnNavigationChecked @ 142eb0590

/* WARNING: Enum "Type": Some values do not have unique names */

ECheckBoxState __thiscall
SWidgetHittestGrid::HandleGetVisualizeOnNavigationChecked(SWidgetHittestGrid *this)

{
  return this->bVisualizeOnNavigation != false;
}

// HandleIsDisplayAllChecked @ 142eb0c40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SWidgetHittestGrid::HandleIsDisplayAllChecked(SWidgetHittestGrid *this)

{
  return this->bDisplayAllWindows;
}

// HandleIsDisplayButtonChecked @ 142eb0c50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SWidgetHittestGrid::HandleIsDisplayButtonChecked
          (SWidgetHittestGrid *this,TWeakPtr<SWindow,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  if (this->bDisplayAllWindows == false) {
    bVar4 = TWeakPtr<SWindow,1>::UEOpEquals<SWindow>(param_1,&this->WindowToDisplay);
    if (bVar4) {
      bVar4 = true;
      goto LAB_142eb0c80;
    }
  }
  bVar4 = false;
LAB_142eb0c80:
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
  return bVar4;
}

// HandleIsDisplayFlagsButtonChecked @ 142eb0cc0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
SWidgetHittestGrid::HandleIsDisplayFlagsButtonChecked
          (SWidgetHittestGrid *this,EDisplayGridFlags param_1)

{
  return (this->DisplayGridFlags & param_1) != None;
}

// HandleNavigationNavigate @ 142eb1160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetHittestGrid::HandleNavigationNavigate
          (SWidgetHittestGrid *this,TWeakPtr<SWidget_const_,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TSharedPtr<SWidget_const_,1> local_18;
  
  pTVar5 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142eb1190;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    pSVar3 = param_1->Object;
    if (pSVar3 != (SWidget *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      local_18.Object = pSVar3;
      local_18.SharedReferenceCount.ReferenceController = pTVar5;
      TDelegate<void___cdecl(TSharedPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::
      ExecuteIfBound(&this->OnWidgetSelected,&local_18);
    }
  }
LAB_142eb1190:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar5 = (param_1->WeakReferenceCount).ReferenceController;
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
  return;
}

// HandleRejectWidgetReflectorChanged @ 142eb4ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetHittestGrid::HandleRejectWidgetReflectorChanged
          (SWidgetHittestGrid *this,ECheckBoxState param_1)

{
  if (this->bRejectWidgetReflectorEvent != (param_1 == Checked)) {
    this->bRejectWidgetReflectorEvent = param_1 == Checked;
    SaveSettings(this);
    return;
  }
  return;
}

// HandleVisualizeOnNavigationChanged @ 142eb68e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetHittestGrid::HandleVisualizeOnNavigationChanged
          (SWidgetHittestGrid *this,ECheckBoxState param_1)

{
  if (this->bVisualizeOnNavigation != (param_1 == Checked)) {
    this->bVisualizeOnNavigation = param_1 == Checked;
    SaveSettings(this);
    return;
  }
  return;
}

// HandleWidgetHittestGridGenerateRow @ 142eb6bd0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
SWidgetHittestGrid::HandleWidgetHittestGridGenerateRow
          (SWidgetHittestGrid *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  FIntermediateResultNode *pFVar1;
  code *pcVar2;
  SIntermediateResultNode *pSVar3;
  bool bVar4;
  FArguments *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<ITableRow,1> *pTVar7;
  TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FLLMScope local_res10 [2];
  FName local_res18;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_res20;
  TSlateDecl<WidgetHittestGridInternal::SIntermediateResultNode,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_2a8;
  FMemScope local_290;
  undefined8 local_288;
  FSharedReferencer<1> local_280;
  TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> local_278;
  FIntermediateResultNode *local_268;
  TReferenceControllerBase<1> *pTStack_260;
  TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1> local_258;
  FArguments local_248;
  
  pFVar5 = WidgetHittestGridInternal::SIntermediateResultNode::FArguments::FArguments(&local_248);
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar1 = param_1->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_268 = (pFVar5->_NodeToVisualize).Object;
  pTStack_260 = (pFVar5->_NodeToVisualize).SharedReferenceCount.ReferenceController;
  (pFVar5->_NodeToVisualize).Object = pFVar1;
  (pFVar5->_NodeToVisualize).SharedReferenceCount.ReferenceController = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_260);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  local_res20.Arg0 = param_2;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_290,&local_res18,true);
  local_2a8._RequiredArgs = &local_res20;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_2a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x478);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VSIntermediateResultNode_WidgetHittestGridInternal___00_SharedPointerInternals__6B_
    ;
    memset(pTVar6 + 1,0,0x468);
    STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
    STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
              ((STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)
               (pTVar6 + 1));
    pTVar6[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x41]._padding_ = 0;
    pTVar6[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x42]._padding_ = 0;
    pTVar6[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar6[0x44]._padding_ + 4) = 0x80;
    pTVar6[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar6[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar6[0x46]._padding_ = 0;
    pTVar6[1]._padding_ =
         (longlong)&WidgetHittestGridInternal::SIntermediateResultNode::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar6[1].SharedReferenceCount =
         &WidgetHittestGridInternal::SIntermediateResultNode::_vftable__for__SBorder__;
    pTVar6[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[0x47]._padding_ = 0;
    pTVar9 = pTVar6;
  }
  TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1>::
  TSharedRef<WidgetHittestGridInternal::SIntermediateResultNode,1>
            (&local_278,(SIntermediateResultNode *)(pTVar9 + 1),pTVar9);
  local_280.ReferenceController = local_278.SharedReferenceCount.ReferenceController;
  if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a8._Widget.Object = local_278.Object;
  local_288 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_2a8._Widget.SharedReferenceCount,&local_280);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278.SharedReferenceCount.ReferenceController);
  pSVar3 = local_2a8._Widget.Object;
  if ((local_2a8._Widget.Object == (SIntermediateResultNode *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedRef<ITableRow,1> *)(*pcVar2)();
    return pTVar7;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pSVar3->_padding_,"WidgetHittestGridInternal::SIntermediateResultNode",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetHittestGrid.cpp"
             ,0x2b2,0x468);
  FMemScope::~FMemScope(&local_290);
  FLLMScope::~FLLMScope(local_res10);
  pTVar8 = TSlateDecl<WidgetHittestGridInternal::SIntermediateResultNode,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
           ::operator<<=(&local_2a8,&local_258,pFVar5);
  __return_storage_ptr__->Object = (ITableRow *)pTVar8->Object;
  pTVar9 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248._NodeToVisualize.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_248);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// HandleWidgetHittestGridSelectionChanged @ 142eb6ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetHittestGrid::HandleWidgetHittestGridSelectionChanged
          (SWidgetHittestGrid *this,
          TSharedPtr<WidgetHittestGridInternal::FIntermediateResultNode,1> *param_1,Type param_2)

{
  FIntermediateResultNode *pFVar1;
  SWidget *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TSharedPtr<SWidget_const_,1> local_18;
  
  pFVar1 = param_1->Object;
  if (pFVar1 != (FIntermediateResultNode *)0x0) {
    pTVar5 = (pFVar1->Widget).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar5->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar5 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142eb6ee0;
        }
        LOCK();
        aVar4 = pTVar5->SharedReferenceCount;
        bVar6 = aVar3 == aVar4;
        if (bVar6) {
          pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar4 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar4;
      } while (!bVar6);
      pSVar2 = (pFVar1->Widget).Object;
      if (pSVar2 != (SWidget *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        local_18.Object = pSVar2;
        local_18.SharedReferenceCount.ReferenceController = pTVar5;
        TDelegate<void___cdecl(TSharedPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::
        ExecuteIfBound(&this->OnWidgetSelected,&local_18);
      }
    }
LAB_142eb6ee0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// LoadSettings @ 142ebfcc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidgetHittestGrid::LoadSettings(SWidgetHittestGrid *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  EDisplayGridFlags local_res8 [2];
  FString local_18;
  
  pwVar3 = L"";
  local_res8[0] = None;
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  bVar1 = FConfigCacheIni::GetInt
                    (GConfig,L"WidgetReflector.Hittestgrid",L"DisplayGridFlag",(int *)local_res8,
                     &local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    this->DisplayGridFlags = local_res8[0];
  }
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  FConfigCacheIni::GetBool
            (GConfig,L"WidgetReflector.Hittestgrid",L"bVisualizeOnNavigation",
             &this->bVisualizeOnNavigation,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar3);
  FConfigCacheIni::GetBool
            (GConfig,L"WidgetReflector.Hittestgrid",L"bRejectWidgetReflectorEvent",
             &this->bRejectWidgetReflectorEvent,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SaveSettings @ 142efa3a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidgetHittestGrid::SaveSettings(SWidgetHittestGrid *this)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  pwVar2 = L"";
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetInt
            (GConfig,L"WidgetReflector.Hittestgrid",L"DisplayGridFlag",this->DisplayGridFlags,
             &local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar1 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar1);
  FConfigCacheIni::SetBool
            (GConfig,L"WidgetReflector.Hittestgrid",L"bVisualizeOnNavigation",
             this->bVisualizeOnNavigation,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  FConfigCacheIni::SetBool
            (GConfig,L"WidgetReflector.Hittestgrid",L"bRejectWidgetReflectorEvent",
             this->bRejectWidgetReflectorEvent,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetPause @ 142f04750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidgetHittestGrid::SetPause(SWidgetHittestGrid *this,bool param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FHittestGrid::OnFindNextFocusableWidgetExecuted,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FSlateDebugging::PaintDebugElements,this);
  if (!param_1) {
    TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
    ::AddRaw<SWidgetHittestGrid>
              ((TMulticastDelegateRegistration<void___cdecl(FPaintArgs_const_&,FGeometry_const_&,FSlateWindowElementList_&,int_&),FDefaultDelegateUserPolicy>
                *)&FSlateDebugging::PaintDebugElements,(SWidgetHittestGrid *)&stack0x00000018,
               (pmf_fef42b74 *)this);
    TMulticastDelegateRegistration<void___cdecl(FHittestGrid_const_*,FHittestGrid::FDebuggingFindNextFocusableWidgetArgs_const_&),FDefaultDelegateUserPolicy>
    ::AddRaw<SWidgetHittestGrid>
              ((TMulticastDelegateRegistration<void___cdecl(FHittestGrid_const_*,FHittestGrid::FDebuggingFindNextFocusableWidgetArgs_const_&),FDefaultDelegateUserPolicy>
                *)&FHittestGrid::OnFindNextFocusableWidgetExecuted,
               (SWidgetHittestGrid *)&stack0x00000018,(pmf_0de7ed57 *)this);
  }
  return;
}

