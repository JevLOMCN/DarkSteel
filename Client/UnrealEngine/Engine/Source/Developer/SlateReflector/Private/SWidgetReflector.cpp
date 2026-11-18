// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 80

// SWidgetReflector @ 142e0be50

/* WARNING: Enum "Type": Some values do not have unique names */

SWidgetReflector * __thiscall
WidgetReflectorImpl::SWidgetReflector::SWidgetReflector(SWidgetReflector *this)

{
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&_vftable__for__SUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IWidgetReflector__;
  (this->TabManager).Object = (FTabManager *)0x0;
  (this->TabManager).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->SpawnedTabs = 0;
  *(undefined8 *)&(this->SpawnedTabs).field_0x8 = 0;
  *(undefined8 *)&(this->SpawnedTabs).field_0x20 = 0;
  *(undefined4 *)&(this->SpawnedTabs).field_0x28 = 0;
  *(undefined4 *)&(this->SpawnedTabs).field_0x2c = 0x80;
  *(undefined4 *)&(this->SpawnedTabs).field_0x34 = 0;
  *(undefined4 *)&(this->SpawnedTabs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SpawnedTabs).field_0x40 = 0;
  *(undefined4 *)&(this->SpawnedTabs).field_0x48 = 0;
  (this->ReflectorTree).Object = (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0;
  (this->ReflectorTree).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->HiddenReflectorTreeColumns).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HiddenReflectorTreeColumns).ArrayNum = 0;
  (this->HiddenReflectorTreeColumns).ArrayMax = 0;
  (this->BreadCrumb).Object = (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0;
  (this->BreadCrumb).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->SelectedNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedNodes).ArrayNum = 0;
  (this->SelectedNodes).ArrayMax = 0;
  (this->PickedWidgetPath).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PickedWidgetPath).ArrayNum = 0;
  (this->PickedWidgetPath).ArrayMax = 0;
  (this->ReflectorTreeRoot).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReflectorTreeRoot).ArrayNum = 0;
  (this->ReflectorTreeRoot).ArrayMax = 0;
  (this->FilteredTreeRoot).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredTreeRoot).ArrayNum = 0;
  (this->FilteredTreeRoot).ArrayMax = 0;
  (this->SnapshotData).Windows.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SnapshotData).Windows.ArrayNum = 0;
  (this->SnapshotData).Windows.ArrayMax = 0;
  (this->SnapshotData).NavigationSimulationData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SnapshotData).NavigationSimulationData.ArrayNum = 0;
  (this->SnapshotData).NavigationSimulationData.ArrayMax = 0;
  (this->SnapshotData).WindowTextureData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SnapshotData).WindowTextureData.ArrayNum = 0;
  (this->SnapshotData).WindowTextureData.ArrayMax = 0;
  (this->SnapshotData).WindowTextureBrushes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SnapshotData).WindowTextureBrushes.ArrayNum = 0;
  (this->SnapshotData).WindowTextureBrushes.ArrayMax = 0;
  (this->SnapshotData).EmptyNavigationSimulationData.SimulationData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SnapshotData).EmptyNavigationSimulationData.SimulationData.ArrayNum = 0;
  (this->SnapshotData).EmptyNavigationSimulationData.SimulationData.ArrayMax = 0;
  (this->WidgetSnapshotVisualizer).Object = (SWidgetSnapshotVisualizer *)0x0;
  (this->WidgetSnapshotVisualizer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AvailableSnapshotTargetsComboBox).Object =
       (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
  (this->AvailableSnapshotTargetsComboBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AvailableSnapshotTargets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvailableSnapshotTargets).ArrayNum = 0;
  (this->AvailableSnapshotTargets).ArrayMax = 0;
  (this->SelectedSnapshotTargetInstanceId).A = 0;
  (this->SelectedSnapshotTargetInstanceId).B = 0;
  (this->SelectedSnapshotTargetInstanceId).C = 0;
  (this->SelectedSnapshotTargetInstanceId).D = 0;
  (this->WidgetSnapshotService).Object = (FWidgetSnapshotService *)0x0;
  (this->WidgetSnapshotService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WidgetSnapshotNotificationPtr).Object = (SNotificationItem *)0x0;
  (this->WidgetSnapshotNotificationPtr).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RemoteSnapshotRequestId).A = 0;
  (this->RemoteSnapshotRequestId).B = 0;
  (this->RemoteSnapshotRequestId).C = 0;
  (this->RemoteSnapshotRequestId).D = 0;
  *(undefined8 *)&this->SourceAccessDelegate = 0;
  *(undefined8 *)&(this->SourceAccessDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->SourceAccessDelegate).field_0x10 = 0;
  *(undefined8 *)&this->AsseetAccessDelegate = 0;
  *(undefined8 *)&(this->AsseetAccessDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->AsseetAccessDelegate).field_0x10 = 0;
  (this->WidgetHittestGrid).Object = (SWidgetHittestGrid *)0x0;
  (this->WidgetHittestGrid).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->VisualCapture).VisualTrees = 0;
  *(undefined8 *)&(this->VisualCapture).VisualTrees.field_0x8 = 0;
  *(undefined8 *)&(this->VisualCapture).VisualTrees.field_0x20 = 0;
  *(undefined4 *)&(this->VisualCapture).VisualTrees.field_0x28 = 0;
  *(undefined4 *)&(this->VisualCapture).VisualTrees.field_0x2c = 0x80;
  *(undefined4 *)&(this->VisualCapture).VisualTrees.field_0x34 = 0;
  *(undefined4 *)&(this->VisualCapture).VisualTrees.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VisualCapture).VisualTrees.field_0x40 = 0;
  *(undefined4 *)&(this->VisualCapture).VisualTrees.field_0x48 = 0;
  (this->VisualCapture).bIsEnabled = false;
  (this->VisualCapture).WindowIsInvalidationRootCounter = 0;
  (this->VisualCapture).WidgetIsInvalidationRootCounter = 0;
  (this->VisualCapture).WidgetIsInvisibleToWidgetReflectorCounter = 0;
  return this;
}

// ~SWidgetReflector @ 142e15340

void __thiscall SWidgetReflector::~SWidgetReflector(SWidgetReflector *this)

{
  *(undefined ***)&this->field_0x2a8 = &___7IWidgetReflector__6B_;
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// ~SWidgetReflector @ 142e15360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall WidgetReflectorImpl::SWidgetReflector::~SWidgetReflector(SWidgetReflector *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  
  this->_padding_ = (longlong)&_vftable__for__SUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IWidgetReflector__;
  FVisualTreeCapture::Disable(&this->VisualCapture);
  *(undefined4 *)&(this->VisualCapture).VisualTrees.field_0x48 = 0;
  pvVar3 = *(void **)&(this->VisualCapture).VisualTrees.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VisualCapture);
  pTVar4 = (this->WidgetHittestGrid).WeakReferenceCount.ReferenceController;
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->AsseetAccessDelegate);
  pvVar3 = *(void **)&(this->AsseetAccessDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->AsseetAccessDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->SourceAccessDelegate);
  pvVar3 = *(void **)&(this->SourceAccessDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SourceAccessDelegate);
  pTVar4 = (this->WidgetSnapshotNotificationPtr).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetSnapshotService).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>
            ((TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)
             (this->AvailableSnapshotTargets).AllocatorInstance.Data,
             (this->AvailableSnapshotTargets).ArrayNum);
  pFVar5 = (this->AvailableSnapshotTargets).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AvailableSnapshotTargetsComboBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetSnapshotVisualizer).SharedReferenceCount.ReferenceController);
  FWidgetSnapshotData::~FWidgetSnapshotData(&this->SnapshotData);
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)
             (this->FilteredTreeRoot).AllocatorInstance.Data,(this->FilteredTreeRoot).ArrayNum);
  pFVar5 = (this->FilteredTreeRoot).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)
             (this->ReflectorTreeRoot).AllocatorInstance.Data,(this->ReflectorTreeRoot).ArrayNum);
  pFVar5 = (this->ReflectorTreeRoot).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)
             (this->PickedWidgetPath).AllocatorInstance.Data,(this->PickedWidgetPath).ArrayNum);
  pFVar5 = (this->PickedWidgetPath).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)(this->SelectedNodes).AllocatorInstance.Data,
             (this->SelectedNodes).ArrayNum);
  pFVar5 = (this->SelectedNodes).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BreadCrumb).SharedReferenceCount.ReferenceController);
  DestructItems<FString,int>
            ((FString *)(this->HiddenReflectorTreeColumns).AllocatorInstance.Data,
             (this->HiddenReflectorTreeColumns).ArrayNum);
  pFVar5 = (this->HiddenReflectorTreeColumns).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ReflectorTree).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->SpawnedTabs).field_0x48 = 0;
  pvVar3 = *(void **)&(this->SpawnedTabs).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakPtr<SDockTab,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakPtr<SDockTab,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakPtr<SDockTab,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SpawnedTabs);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TabManager).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IWidgetReflector__6B_;
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 142e18df0

/* WARNING: Enum "Type": Some values do not have unique names */

FTabSpawnerEntry * __thiscall
`WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()
          (void *this,FName *param_1,
          TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  longlong lVar1;
  FTabManager *this_00;
  code *pcVar2;
  bool bVar3;
  FTabSpawnerEntry *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  undefined1 local_b8 [8];
  FDelegateAllocation local_b0;
  undefined1 local_a0 [8];
  ForAnyElementType local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined1 local_80 [24];
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x2b0) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FTabSpawnerEntry *)(*pcVar2)();
      return pFVar4;
    }
  }
  this_00 = *(FTabManager **)(lVar1 + 0x2b0);
  local_88 = *(undefined8 *)this;
  local_90 = 0;
  local_a0 = (undefined1  [8])0x0;
  local_98.Data = (FScriptContainerElement *)0x0;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            ((TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
              *)local_80,param_2);
  local_b8 = (undefined1  [8])0x0;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_b0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x38,&local_b0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &TBaseFunctorDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,``WidgetReflectorImpl::SWidgetReflector::Construct'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar5[3] = local_88;
    TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                *)(puVar5 + 4),
               (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                *)local_80);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  pFVar4 = FTabManager::RegisterTabSpawner
                     (this_00,*param_1,
                      (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                       *)local_b8,
                      (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
                      local_a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b8,
             (FWriteAccessScope *)&local_68);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
  if ((void *)local_80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_80);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
             (FWriteAccessScope *)&local_50);
  if (((int)local_90 != 0) && (local_98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,0x10);
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a0);
  return pFVar4;
}

// operator() @ 142e1d360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_2>::operator()
          (void *this,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  SWidgetReflector *this_00;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar6 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar6->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142e1d396;
      }
      LOCK();
      aVar5 = pTVar6->SharedReferenceCount;
      bVar7 = aVar4 == aVar5;
      if (bVar7) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar7);
    this_00 = *(SWidgetReflector **)this;
    if (this_00 != (SWidgetReflector *)0x0) {
      piVar1 = &(this_00->SelectedNodes).ArrayMax;
      pTVar3 = (TSharedRef<FWidgetReflectorNodeBase,1> *)
               (this_00->SelectedNodes).AllocatorInstance.Data;
      iVar2 = (this_00->SelectedNodes).ArrayNum;
      if ((this_00->SelectedNodes).ArrayMax < 0) {
        DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar2);
        (this_00->SelectedNodes).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&(this_00->SelectedNodes).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar2);
        (this_00->SelectedNodes).ArrayNum = 0;
      }
      TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>::operator=
                (&this_00->PickedWidgetPath,param_1);
      WidgetReflectorImpl::SWidgetReflector::UpdateFilteredTreeRoot(this_00);
    }
  }
LAB_142e1d396:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// operator() @ 142e1d5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::__l2::<lambda_3>::operator()
          (void *this,ulong64 param_1)

{
  int *piVar1;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  SWidgetReflector *this_00;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  atomic<int> aVar8;
  atomic<int> aVar9;
  FScriptContainerElement *pFVar10;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar15;
  bool bVar16;
  undefined1 local_res8 [8];
  
  pTVar12 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar8 = pTVar12->SharedReferenceCount;
    do {
      if (aVar8 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142e1d62b;
      }
      LOCK();
      aVar9 = pTVar12->SharedReferenceCount;
      bVar16 = aVar8 == aVar9;
      if (bVar16) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
        aVar9 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar9;
    } while (!bVar16);
    this_00 = *(SWidgetReflector **)this;
    if (this_00 != (SWidgetReflector *)0x0) {
      pTVar11 = (TSharedRef<FWidgetReflectorNodeBase,1> *)
                (this_00->SelectedNodes).AllocatorInstance.Data;
      iVar3 = (this_00->SelectedNodes).ArrayNum;
      piVar1 = &(this_00->SelectedNodes).ArrayMax;
      if ((this_00->SelectedNodes).ArrayMax < 0) {
        DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar11,iVar3);
        (this_00->SelectedNodes).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&(this_00->SelectedNodes).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar11,iVar3);
        (this_00->SelectedNodes).ArrayNum = 0;
      }
      pTVar2 = &this_00->PickedWidgetPath;
      piVar1 = &(this_00->PickedWidgetPath).ArrayMax;
      pTVar11 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(pTVar2->AllocatorInstance).Data;
      iVar3 = (this_00->PickedWidgetPath).ArrayNum;
      if ((this_00->PickedWidgetPath).ArrayMax < 0) {
        DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar11,iVar3);
        (this_00->PickedWidgetPath).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar11,iVar3);
        (this_00->PickedWidgetPath).ArrayNum = 0;
      }
      iVar3 = (this_00->ReflectorTreeRoot).ArrayNum;
      pTVar11 = (TSharedRef<FWidgetReflectorNodeBase,1> *)
                (this_00->ReflectorTreeRoot).AllocatorInstance.Data;
      pTVar15 = pTVar11 + iVar3;
      while( true ) {
        if ((this_00->ReflectorTreeRoot).ArrayNum != iVar3) {
          `TCheckedPointerIterator<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pTVar11 == pTVar15) goto LAB_142e1d77e;
        WidgetReflectorNodeUtilsImpl::FindSnapshotWidget(param_1,pTVar11,pTVar2);
        iVar4 = (this_00->PickedWidgetPath).ArrayNum;
        if (0 < iVar4) break;
        pTVar11 = pTVar11 + 1;
      }
      pFVar13 = (pTVar2->AllocatorInstance).Data;
      lVar14 = (longlong)(iVar4 / 2);
      if (0 < iVar4 / 2) {
        pFVar10 = pFVar13 + (longlong)(iVar4 + -1) * 0x10;
        do {
          uVar5 = *(undefined8 *)(pFVar10 + 8);
          uVar6 = *(undefined8 *)pFVar13;
          uVar7 = *(undefined8 *)(pFVar13 + 8);
          *(undefined8 *)pFVar13 = *(undefined8 *)pFVar10;
          *(undefined8 *)(pFVar13 + 8) = uVar5;
          pFVar13 = pFVar13 + 0x10;
          *(undefined8 *)pFVar10 = uVar6;
          *(undefined8 *)(pFVar10 + 8) = uVar7;
          lVar14 = lVar14 + -1;
          pFVar10 = pFVar10 + -0x10;
        } while (lVar14 != 0);
      }
LAB_142e1d77e:
      WidgetReflectorImpl::SWidgetReflector::UpdateFilteredTreeRoot(this_00);
    }
  }
LAB_142e1d62b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return;
}

// CloseTab @ 142e31b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::CloseTab(SWidgetReflector *this,FName *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TWeakPtr<SDockTab,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar3 = TMapBase<FName,TWeakPtr<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SDockTab,1>,0>_>
           ::Find((TMapBase<FName,TWeakPtr<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SDockTab,1>,0>_>
                   *)&this->SpawnedTabs,*param_1);
  if (pTVar3 == (TWeakPtr<SDockTab,1> *)0x0) {
    return;
  }
  pTVar4 = (pTVar3->WeakReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142e31b60;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    if (pTVar3->Object != (SDockTab *)0x0) {
      SDockTab::RequestCloseTab(pTVar3->Object);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_142e31b60:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Construct @ 142e49380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::Construct(SWidgetReflector *this,FArguments *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<FTabManager,1> *this_00;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FWidgetSnapshotService *pFVar5;
  FStack *pFVar6;
  FSplitter *pFVar7;
  FLayoutNode *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  FGlobalTabmanager *this_01;
  FName FVar13;
  code *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  FLayout *this_02;
  bool bVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  FGuid *pFVar21;
  FArea *pFVar22;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar23;
  FArea *pFVar24;
  TSharedRef<FTabManager::FStack,1> *pTVar25;
  TSharedRef<FTabManager::FArea,1> *pTVar26;
  TSharedRef<FTabManager::FSplitter,1> *pTVar27;
  TSharedRef<FTabManager::FArea,1> *pTVar28;
  TSharedRef<FTabManager::FLayout,1> *pTVar29;
  TSharedRef<FGlobalTabmanager,1> *pTVar30;
  TSharedRef<FTabManager,1> *pTVar31;
  FTabManager *pFVar32;
  undefined8 *puVar33;
  ulong64 uVar34;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *pTVar35;
  FTabSpawnerEntry *pFVar36;
  FText *pFVar37;
  ISlateStyle *pIVar38;
  FName *pFVar39;
  FSlateReflectorModule *pFVar40;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *pTVar41;
  TSharedRef<FMultiBox,1> *pTVar42;
  FArguments *pFVar43;
  FArguments *pFVar44;
  FSlotArguments *pFVar45;
  TSharedPtr<SWidget,1> *this_03;
  TSharedRef<SWidget,1> *pTVar46;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SVerticalBox,1> *pTVar47;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SBorder,1> *pTVar48;
  longlong lVar49;
  wchar_t *pwVar50;
  FArea *pFVar51;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  uint local_res18 [2];
  SWidgetReflector *local_res20;
  undefined1 local_1168 [8];
  FDelegateAllocation local_1160;
  undefined1 local_1150 [8];
  FDelegateAllocation local_1148;
  TSharedRef<FTabManager::FLayout,1> local_1138;
  undefined8 local_1128;
  undefined8 local_1120;
  FLayout *local_1118;
  FName local_1110;
  undefined8 local_1108;
  FName local_1100;
  FName local_10f8;
  FName local_10f0;
  TSharedPtr<FTabManager,1> local_10e8;
  TSharedRef<SDockTab,1> local_10d8;
  SVerticalBox *local_10c8;
  TReferenceControllerBase<1> *pTStack_10c0;
  FSplitter *local_10b8;
  FArea *local_10b0;
  TReferenceControllerBase<1> *local_10a8;
  TReferenceControllerBase<1> *local_10a0;
  TReferenceControllerBase<1> *local_1098;
  TReferenceControllerBase<1> *local_1090;
  FName local_1088;
  FName local_1080;
  TRawPtrProxy<FTabManager::FLayout> local_1078;
  TSharedRef<FTabManager::FArea,1> local_1070;
  TSharedRef<SWidget,1> local_1058;
  TSharedRef<FTabManager::FLayout,1> local_1048;
  TRawPtrProxy<FTabManager::FArea> local_1038;
  TRawPtrProxy<FTabManager::FStack> local_1030;
  TRawPtrProxy<FTabManager::FSplitter> local_1028;
  TRawPtrProxy<FTabManager::FSplitter> local_1020;
  TRawPtrProxy<FTabManager::FStack> local_1018;
  undefined1 local_1010 [24];
  undefined1 local_ff8 [8];
  void *pvStack_ff0;
  undefined8 local_fe8;
  undefined1 local_fe0 [24];
  undefined1 local_fc8 [8];
  void *pvStack_fc0;
  undefined8 local_fb8;
  undefined1 local_fb0 [24];
  undefined1 local_f98 [8];
  void *pvStack_f90;
  undefined8 local_f88;
  FString local_f80;
  TSharedRef<FTabManager::FLayoutNode,1> local_f70;
  TSharedRef<FTabManager::FLayoutNode,1> local_f60;
  TSharedRef<FTabManager::FLayoutNode,1> local_f50;
  TSharedRef<FTabManager::FLayoutNode,1> local_f40;
  TSharedRef<FTabManager::FLayoutNode,1> local_f30;
  TSharedRef<FTabManager::FStack,1> local_f20;
  TSharedRef<FTabManager::FSplitter,1> local_f10;
  TSharedRef<FTabManager::FSplitter,1> local_f00;
  TSharedRef<FTabManager::FStack,1> local_ef0;
  TSharedPtr<FMultiBox,1> local_ee0;
  TSharedRef<SWidget,1> local_ed0;
  TSharedPtr<SWindow,1> local_ec0;
  FString local_eb0;
  FString local_ea0;
  TAttribute<FSlateBrush_const_*> local_e90;
  undefined1 local_e68 [24];
  undefined1 local_e50 [24];
  undefined1 local_e38 [24];
  undefined1 local_e20 [24];
  undefined1 local_e08 [24];
  FDestructionSentinel local_df0;
  undefined1 local_dd8 [24];
  undefined1 local_dc0 [24];
  FDestructionSentinel local_da8;
  undefined1 local_d90 [24];
  FLinearColor_u_0 local_d78;
  undefined1 local_d68;
  undefined1 local_d64;
  undefined8 local_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  FDestructionSentinel local_d48;
  FDelegateAllocation *local_d30;
  FDestructionSentinel local_d28;
  FDelegateAllocation *local_d10;
  TAttribute<FMargin> local_d08;
  TAttribute<FMargin> local_cd8;
  TSharedRef<FTabManager::FSplitter,1> local_ca8;
  TSharedRef<FTabManager::FStack,1> local_c98;
  TSharedRef<FTabManager::FStack,1> local_c88;
  TSharedRef<FTabManager::FStack,1> local_c78;
  TSharedRef<FTabManager::FStack,1> local_c68;
  TSharedRef<FTabManager::FStack,1> local_c58;
  TSharedRef<FTabManager::FSplitter,1> local_c48;
  TSharedRef<FTabManager::FStack,1> local_c38;
  TSharedRef<FTabManager::FArea,1> local_c28;
  TSharedRef<FTabManager::FStack,1> local_c18;
  TSharedRef<FTabManager,1> local_c08;
  code *local_bf8;
  longlong lStack_bf0;
  FText local_be8;
  code *local_bd8;
  longlong lStack_bd0;
  FText local_bc8;
  code *local_bb8;
  longlong lStack_bb0;
  FText local_ba8;
  code *local_b98;
  longlong lStack_b90;
  FText local_b88;
  code *local_b78;
  longlong lStack_b70;
  FText local_b68;
  code *local_b58;
  longlong lStack_b50;
  FText local_b48;
  TSharedPtr<FExtender,1> local_b38;
  TSharedPtr<FUICommandList_const_,1> local_b28;
  FText local_b18;
  code *local_b08;
  longlong lStack_b00;
  FText local_af8;
  code *local_ae8;
  longlong lStack_ae0;
  FText local_ad8;
  TSharedPtr<SWidget,1> local_ac8;
  TSharedRef<FMultiBox,1> local_ab8;
  TSharedRef<SBorder,1> local_aa8;
  TSharedRef<SVerticalBox,1> local_a98;
  TSharedRef<SWidget,1> local_a88;
  FName local_a78;
  FGuid local_a70;
  FName local_a60;
  FName local_a58;
  FName local_a50;
  FString local_a48;
  FString local_a38;
  FString local_a28;
  FString local_a18;
  FString local_a08;
  FWidgetSnapshotService *local_9f8;
  TReferenceControllerBase<1> *pTStack_9f0;
  TSharedRef<FTabManager::FLayoutNode,1> local_9e8;
  TSharedRef<FTabManager::FLayoutNode,1> local_9d8;
  TSharedRef<FTabManager::FLayoutNode,1> local_9c8;
  TSharedPtr<SWidget,1> local_9b8;
  TSharedRef<FTabManager::FLayoutNode,1> local_9a8;
  TSharedRef<FTabManager::FLayoutNode,1> local_998;
  TSharedRef<FTabManager::FLayoutNode,1> local_988;
  TSharedRef<FTabManager::FLayoutNode,1> local_978;
  TSharedRef<FTabManager::FLayoutNode,1> local_968;
  TSharedRef<FTabManager::FLayout,1> local_958;
  TSharedRef<FTabManager::FArea,1> local_948;
  TSharedRef<FTabManager::FSplitter,1> local_938;
  undefined1 local_928 [24];
  undefined1 local_910 [24];
  undefined1 local_8f8 [24];
  undefined1 local_8e0 [24];
  undefined1 local_8c8 [24];
  undefined1 local_8b0 [24];
  FBaseMenuBuilder local_898;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_838;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_820;
  FSlotArguments local_808;
  FSlotArguments local_720;
  FArguments local_638;
  FArguments local_430;
  undefined8 uStack_48;
  
  uStack_48 = 0x142e4939f;
  this->LastPickingMode = HitTesting;
  pTVar2 = &this->HiddenReflectorTreeColumns;
  pFVar20 = (FScriptContainerElement *)
            ::FName::ToString(&SReflectorTreeWidgetItem::NAME_Enabled,&local_a48);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar20) &&
      (pFVar20 < pFVar3 + (longlong)(this->HiddenReflectorTreeColumns).ArrayMax * 0x10)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar19 = (this->HiddenReflectorTreeColumns).ArrayNum;
  if (iVar19 == (this->HiddenReflectorTreeColumns).ArrayMax) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,
                        &(this->HiddenReflectorTreeColumns).ArrayMax);
  }
  lVar49 = (longlong)iVar19;
  (this->HiddenReflectorTreeColumns).ArrayNum = iVar19 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  pFVar51 = (FArea *)0x0;
  *(undefined8 *)(pFVar3 + lVar49 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar3 + lVar49 * 0x10) =
       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20->field_0x0)->AllocatorInstance).
       Data;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20->field_0x0)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  *(int *)(pFVar3 + lVar49 * 0x10 + 8) = *(int *)&pFVar20[8].field_0x0;
  *(int *)(pFVar3 + lVar49 * 0x10 + 0xc) = *(int *)&pFVar20[0xc].field_0x0;
  *(undefined8 *)&pFVar20[8].field_0x0 = 0;
  if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a48.Data.AllocatorInstance.Data);
  }
  pFVar20 = (FScriptContainerElement *)
            ::FName::ToString(&SReflectorTreeWidgetItem::NAME_Volatile,&local_a38);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar20) &&
      (pFVar20 < pFVar3 + (longlong)(this->HiddenReflectorTreeColumns).ArrayMax * 0x10)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar19 = (this->HiddenReflectorTreeColumns).ArrayNum;
  if (iVar19 == (this->HiddenReflectorTreeColumns).ArrayMax) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,
                        &(this->HiddenReflectorTreeColumns).ArrayMax);
  }
  lVar49 = (longlong)iVar19;
  (this->HiddenReflectorTreeColumns).ArrayNum = iVar19 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar49 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar3 + lVar49 * 0x10) =
       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20->field_0x0)->AllocatorInstance).
       Data;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20->field_0x0)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  *(int *)(pFVar3 + lVar49 * 0x10 + 8) = *(int *)&pFVar20[8].field_0x0;
  *(int *)(pFVar3 + lVar49 * 0x10 + 0xc) = *(int *)&pFVar20[0xc].field_0x0;
  *(undefined8 *)&pFVar20[8].field_0x0 = 0;
  if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a38.Data.AllocatorInstance.Data);
  }
  pFVar20 = (FScriptContainerElement *)
            ::FName::ToString(&SReflectorTreeWidgetItem::NAME_HasActiveTimer,&local_a28);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar20) &&
      (pFVar20 < pFVar3 + (longlong)(this->HiddenReflectorTreeColumns).ArrayMax * 0x10)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar19 = (this->HiddenReflectorTreeColumns).ArrayNum;
  if (iVar19 == (this->HiddenReflectorTreeColumns).ArrayMax) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,
                        &(this->HiddenReflectorTreeColumns).ArrayMax);
  }
  lVar49 = (longlong)iVar19;
  (this->HiddenReflectorTreeColumns).ArrayNum = iVar19 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar49 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar3 + lVar49 * 0x10) =
       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20->field_0x0)->AllocatorInstance).
       Data;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20->field_0x0)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  *(int *)(pFVar3 + lVar49 * 0x10 + 8) = *(int *)&pFVar20[8].field_0x0;
  *(int *)(pFVar3 + lVar49 * 0x10 + 0xc) = *(int *)&pFVar20[0xc].field_0x0;
  *(undefined8 *)&pFVar20[8].field_0x0 = 0;
  if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a28.Data.AllocatorInstance.Data);
  }
  pFVar20 = (FScriptContainerElement *)
            ::FName::ToString(&SReflectorTreeWidgetItem::NAME_ActualSize,&local_a18);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar20) &&
      (pFVar20 < pFVar3 + (longlong)(this->HiddenReflectorTreeColumns).ArrayMax * 0x10)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar19 = (this->HiddenReflectorTreeColumns).ArrayNum;
  if (iVar19 == (this->HiddenReflectorTreeColumns).ArrayMax) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,
                        &(this->HiddenReflectorTreeColumns).ArrayMax);
  }
  lVar49 = (longlong)iVar19;
  (this->HiddenReflectorTreeColumns).ArrayNum = iVar19 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar49 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar3 + lVar49 * 0x10) =
       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20->field_0x0)->AllocatorInstance).
       Data;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20->field_0x0)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  *(int *)(pFVar3 + lVar49 * 0x10 + 8) = *(int *)&pFVar20[8].field_0x0;
  *(int *)(pFVar3 + lVar49 * 0x10 + 0xc) = *(int *)&pFVar20[0xc].field_0x0;
  *(undefined8 *)&pFVar20[8].field_0x0 = 0;
  if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a18.Data.AllocatorInstance.Data);
  }
  pFVar20 = (FScriptContainerElement *)
            ::FName::ToString(&SReflectorTreeWidgetItem::NAME_LayerId,&local_a08);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= pFVar20) &&
      (pFVar20 < pFVar3 + (longlong)(this->HiddenReflectorTreeColumns).ArrayMax * 0x10)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar19 = (this->HiddenReflectorTreeColumns).ArrayNum;
  if (iVar19 == (this->HiddenReflectorTreeColumns).ArrayMax) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,
                        &(this->HiddenReflectorTreeColumns).ArrayMax);
  }
  lVar49 = (longlong)iVar19;
  (this->HiddenReflectorTreeColumns).ArrayNum = iVar19 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar49 * 0x10) = 0;
  *(FScriptContainerElement **)(pFVar3 + lVar49 * 0x10) =
       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20->field_0x0)->AllocatorInstance).
       Data;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20->field_0x0)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  *(int *)(pFVar3 + lVar49 * 0x10 + 8) = *(int *)&pFVar20[8].field_0x0;
  *(int *)(pFVar3 + lVar49 * 0x10 + 0xc) = *(int *)&pFVar20[0xc].field_0x0;
  *(undefined8 *)&pFVar20[8].field_0x0 = 0;
  if (local_a08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a08.Data.AllocatorInstance.Data);
  }
  pwVar50 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar50 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_eb0,pwVar50);
  bVar18 = FConfigCacheIni::DoesSectionExist(GConfig,L"WidgetReflector",&local_eb0);
  if (local_eb0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_eb0.Data.AllocatorInstance.Data);
  }
  if (bVar18) {
    pwVar50 = L"";
    local_res18[0] = 2;
    if (GEditorPerProjectIni.Data.ArrayNum != 0) {
      pwVar50 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_ea0,pwVar50);
    FConfigCacheIni::GetInt
              (GConfig,L"WidgetReflector",L"LastPickingMode",(int *)local_res18,&local_ea0);
    if (local_ea0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ea0.Data.AllocatorInstance.Data);
    }
    if ((3 < local_res18[0]) ||
       (this->LastPickingMode = (EWidgetPickingMode)local_res18[0],
       (EWidgetPickingMode)local_res18[0] == None)) {
      this->LastPickingMode = HitTesting;
    }
    pwVar50 = L"";
    if (GEditorPerProjectIni.Data.ArrayNum != 0) {
      pwVar50 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_f80,pwVar50);
    FConfigCacheIni::GetArray
              (GConfig,L"WidgetReflector",L"HiddenReflectorTreeColumns",pTVar2,&local_f80);
    if (local_f80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f80.Data.AllocatorInstance.Data);
    }
  }
  this->CurrentUIMode = Live;
  this->PickingMode = None;
  this->TimeOfScheduledSnapshot = -1.0;
  this->bFilterReflectorTreeRootWithUMG = false;
  this->SnapshotDelay = 0.0;
  this->bIsPendingDelayedSnapshot = false;
  this->bRequestNavigationSimulation = false;
  pTVar4 = (param_1->_WidgetSnapshotService).SharedReferenceCount.ReferenceController;
  pFVar5 = (param_1->_WidgetSnapshotService).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_9f8 = (this->WidgetSnapshotService).Object;
  pTStack_9f0 = (this->WidgetSnapshotService).SharedReferenceCount.ReferenceController;
  (this->WidgetSnapshotService).Object = pFVar5;
  (this->WidgetSnapshotService).SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_9f0);
  pFVar21 = FApp::GetInstanceId(&local_a70);
  uVar15 = pFVar21->B;
  uVar16 = pFVar21->C;
  uVar17 = pFVar21->D;
  (this->SelectedSnapshotTargetInstanceId).A = pFVar21->A;
  (this->SelectedSnapshotTargetInstanceId).B = uVar15;
  (this->SelectedSnapshotTargetInstanceId).C = uVar16;
  (this->SelectedSnapshotTargetInstanceId).D = uVar17;
  UpdateAvailableSnapshotTargets(this);
  ::FName::FName(&local_1088,"WidgetReflector_Layout_NoStats_v2");
  pFVar22 = ::operator_new(0x38);
  local_1078.Object = (FLayout *)pFVar51;
  if (pFVar22 != (FArea *)0x0) {
    pFVar22->_padding_ = 0;
    pFVar22->_padding_ = 0;
    ((TWeakPtr<FTabManager::FArea,1> *)&pFVar22->_padding_)->Object = (FArea *)0x0;
    ((FWeakReferencer<1> *)&pFVar22->_padding_)->ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (((TArray<TSharedRef<FTabManager::FArea,1>,TSizedDefaultAllocator<32>_> *)&pFVar22->_padding_)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pFVar22->_padding_ = 0;
    *(FName *)&pFVar22->_padding_ = local_1088;
    local_1078.Object = (FLayout *)pFVar22;
  }
  TSharedRef<FTabManager::FLayout,1>::TSharedRef<FTabManager::FLayout,1><FTabManager::FLayout>
            (&local_1138,&local_1078);
  local_1118 = local_1138.Object;
  pFVar22 = ::operator_new(0x98);
  local_1038.Object = pFVar51;
  if (pFVar22 != (FArea *)0x0) {
    pFVar22->_padding_ = 0;
    pFVar22->_padding_ = (longlong)&___7FArea_FTabManager__6B_;
    ((TWeakPtr<FTabManager::FArea,1> *)&pFVar22->_padding_)->Object = (FArea *)0x0;
    *(undefined4 *)&((FWeakReferencer<1> *)&pFVar22->_padding_)->ReferenceController = 0x3f800000;
    *(undefined4 *)
     &(((TArray<TSharedRef<FTabManager::FArea,1>,TSizedDefaultAllocator<32>_> *)&pFVar22->_padding_)
      ->AllocatorInstance).Data = 0;
    pFVar22->_padding_ = 0;
    *(FNameEntryId *)&pFVar22->_padding_ = 0;
    *(uint *)((longlong)&pFVar22->_padding_ + 4) = 0;
    pFVar22->WindowPlacement = Placement_Automatic;
    (pFVar22->UnscaledWindowPosition).field0_0x0._s_0.X = 0.0;
    (pFVar22->UnscaledWindowPosition).field0_0x0._s_0.Y = 0.0;
    (pFVar22->UnscaledWindowSize).field0_0x0._s_0.X = 0.0;
    (pFVar22->UnscaledWindowSize).field0_0x0._s_0.Y = 0.0;
    pFVar22->bIsMaximized = false;
    (pFVar22->ExtensionId).ComparisonIndex = 0;
    (pFVar22->ExtensionId).Number = 0;
    (pFVar22->ActivePanelDrawerTab).TabId.TabType.ComparisonIndex = 0;
    (pFVar22->ActivePanelDrawerTab).TabId.TabType.Number = 0;
    (pFVar22->ActivePanelDrawerTab).TabId.InstanceId = -1;
    (pFVar22->ActivePanelDrawerTab).TabId.Flags = SaveLayout;
    (pFVar22->ActivePanelDrawerTab).Size.MainContentCoefficient = 0.75;
    (pFVar22->ActivePanelDrawerTab).Size.PanelDrawerCoefficient = 0.25;
    (pFVar22->InactivePanelDrawerTabs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar22->InactivePanelDrawerTabs).ArrayNum = 0;
    (pFVar22->InactivePanelDrawerTabs).ArrayMax = 0;
    local_1038.Object = pFVar22;
  }
  TSharedRef<FTabManager::FArea,1>::TSharedRef<FTabManager::FArea,1><FTabManager::FArea>
            (&local_1070,&local_1038);
  (local_1070.Object)->WindowPlacement = Placement_NoWindow;
  *(undefined4 *)&(local_1070.Object)->_padding_ = 1;
  pTVar23 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayoutNode,1> *)
                       &(local_1070.Object)->_padding_,&local_9e8);
  pFVar22 = (FArea *)pTVar23->Object;
  pTVar4 = (pTVar23->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9e8.SharedReferenceCount.ReferenceController);
  pFVar24 = ::operator_new(0x50);
  local_1030.Object = (FStack *)pFVar51;
  if (pFVar24 != (FArea *)0x0) {
    pFVar24->_padding_ = 0;
    ((TWeakPtr<FTabManager::FArea,1> *)&pFVar24->_padding_)->Object = (FArea *)0x0;
    *(undefined4 *)&((FWeakReferencer<1> *)&pFVar24->_padding_)->ReferenceController = 0x3f800000;
    pFVar24->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
    (((TArray<TSharedRef<FTabManager::FArea,1>,TSizedDefaultAllocator<32>_> *)&pFVar24->_padding_)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pFVar24->_padding_ = 0;
    *(undefined1 *)&(((FName *)&pFVar24->_padding_)->ComparisonIndex).Value = 0;
    *(undefined8 *)&((FName *)&pFVar24->_padding_)->Number = 0;
    *(undefined4 *)&pFVar24->field_0x3c = 0xffffffff;
    *(undefined1 *)&(pFVar24->UnscaledWindowPosition).field0_0x0 = 1;
    *(undefined8 *)((longlong)&(pFVar24->UnscaledWindowPosition).field0_0x0._s_0.X + 4) = 0;
    local_1128 = 0;
    local_1030.Object = (FStack *)pFVar24;
  }
  TSharedRef<FTabManager::FStack,1>::TSharedRef<FTabManager::FStack,1><FTabManager::FStack>
            (&local_ef0,&local_1030);
  (local_ef0.Object)->bHideTabWell = true;
  pTVar23 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&(local_ef0.Object)->_padding_
                       ,&local_9d8);
  pFVar6 = (FStack *)pTVar23->Object;
  local_1090 = (pTVar23->SharedReferenceCount).ReferenceController;
  if (local_1090 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1090->SharedReferenceCount = (atomic<int>)((int)local_1090->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9d8.SharedReferenceCount.ReferenceController);
  pTVar25 = FTabManager::FStack::AddTab
                      (pFVar6,&local_c18,WidgetReflectorTabID::SlateOptions,OpenedTab);
  local_f70.Object = (FLayoutNode *)pTVar25->Object;
  local_f70.SharedReferenceCount.ReferenceController =
       (pTVar25->SharedReferenceCount).ReferenceController;
  if (local_f70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar26 = FTabManager::FArea::Split(pFVar22,&local_c28,&local_f70);
  local_10b0 = pTVar26->Object;
  pFVar22 = ::operator_new(0x38);
  local_1028.Object = (FSplitter *)pFVar51;
  if (pFVar22 != (FArea *)0x0) {
    pFVar22->_padding_ = 0;
    ((TWeakPtr<FTabManager::FArea,1> *)&pFVar22->_padding_)->Object = (FArea *)0x0;
    *(undefined4 *)&((FWeakReferencer<1> *)&pFVar22->_padding_)->ReferenceController = 0x3f800000;
    pFVar22->_padding_ = (longlong)&___7FSplitter_FTabManager__6B_;
    *(undefined4 *)
     &(((TArray<TSharedRef<FTabManager::FArea,1>,TSizedDefaultAllocator<32>_> *)&pFVar22->_padding_)
      ->AllocatorInstance).Data = 0;
    pFVar22->_padding_ = 0;
    *(FNameEntryId *)&pFVar22->_padding_ = 0;
    *(uint *)((longlong)&pFVar22->_padding_ + 4) = 0;
    local_1028.Object = (FSplitter *)pFVar22;
  }
  TSharedRef<FTabManager::FSplitter,1>::TSharedRef<FTabManager::FSplitter,1><FTabManager::FSplitter>
            (&local_f00,&local_1028);
  (local_f00.Object)->Orientation = Orient_Horizontal;
  pTVar23 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&(local_f00.Object)->_padding_
                       ,&local_9c8);
  local_10b8 = (FSplitter *)pTVar23->Object;
  local_1098 = (pTVar23->SharedReferenceCount).ReferenceController;
  if (local_1098 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1098->SharedReferenceCount = (atomic<int>)((int)local_1098->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9c8.SharedReferenceCount.ReferenceController);
  pFVar22 = ::operator_new(0x38);
  local_1020.Object = (FSplitter *)pFVar51;
  if (pFVar22 != (FArea *)0x0) {
    pFVar22->_padding_ = 0;
    ((TWeakPtr<FTabManager::FArea,1> *)&pFVar22->_padding_)->Object = (FArea *)0x0;
    *(undefined4 *)&((FWeakReferencer<1> *)&pFVar22->_padding_)->ReferenceController = 0x3f800000;
    pFVar22->_padding_ = (longlong)&___7FSplitter_FTabManager__6B_;
    *(undefined4 *)
     &(((TArray<TSharedRef<FTabManager::FArea,1>,TSizedDefaultAllocator<32>_> *)&pFVar22->_padding_)
      ->AllocatorInstance).Data = 0;
    pFVar22->_padding_ = 0;
    *(FNameEntryId *)&pFVar22->_padding_ = 0;
    *(uint *)((longlong)&pFVar22->_padding_ + 4) = 0;
    local_1020.Object = (FSplitter *)pFVar22;
  }
  TSharedRef<FTabManager::FSplitter,1>::TSharedRef<FTabManager::FSplitter,1><FTabManager::FSplitter>
            (&local_f10,&local_1020);
  (local_f10.Object)->Orientation = Orient_Vertical;
  pTVar23 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&(local_f10.Object)->_padding_
                       ,&local_9a8);
  pFVar7 = (FSplitter *)pTVar23->Object;
  local_10a0 = (pTVar23->SharedReferenceCount).ReferenceController;
  if (local_10a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10a0->SharedReferenceCount = (atomic<int>)((int)local_10a0->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9a8.SharedReferenceCount.ReferenceController);
  pFVar22 = ::operator_new(0x50);
  if (pFVar22 != (FArea *)0x0) {
    pFVar22->_padding_ = 0;
    ((TWeakPtr<FTabManager::FArea,1> *)&pFVar22->_padding_)->Object = (FArea *)0x0;
    *(undefined4 *)&((FWeakReferencer<1> *)&pFVar22->_padding_)->ReferenceController = 0x3f800000;
    pFVar22->_padding_ = (longlong)&___7FStack_FTabManager__6B_;
    (((TArray<TSharedRef<FTabManager::FArea,1>,TSizedDefaultAllocator<32>_> *)&pFVar22->_padding_)->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    pFVar22->_padding_ = 0;
    *(undefined1 *)&(((FName *)&pFVar22->_padding_)->ComparisonIndex).Value = 0;
    *(undefined8 *)&((FName *)&pFVar22->_padding_)->Number = 0;
    *(undefined4 *)&pFVar22->field_0x3c = 0xffffffff;
    *(undefined1 *)&(pFVar22->UnscaledWindowPosition).field0_0x0 = 1;
    *(undefined8 *)((longlong)&(pFVar22->UnscaledWindowPosition).field0_0x0._s_0.X + 4) = 0;
    local_1120 = 0;
    pFVar51 = pFVar22;
  }
  local_1018.Object = (FStack *)pFVar51;
  TSharedRef<FTabManager::FStack,1>::TSharedRef<FTabManager::FStack,1><FTabManager::FStack>
            (&local_f20,&local_1018);
  (local_f20.Object)->bHideTabWell = true;
  pTVar23 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&(local_f20.Object)->_padding_
                       ,&local_998);
  pFVar8 = pTVar23->Object;
  local_10a8 = (pTVar23->SharedReferenceCount).ReferenceController;
  if (local_10a8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10a8->SharedReferenceCount = (atomic<int>)((int)local_10a8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_998.SharedReferenceCount.ReferenceController);
  pFVar8->SizeCoefficient = 0.7;
  pTVar23 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar8->_padding_,&local_988)
  ;
  pTVar9 = (pTVar23->SharedReferenceCount).ReferenceController;
  pFVar6 = (FStack *)pTVar23->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_988.SharedReferenceCount.ReferenceController);
  pTVar25 = FTabManager::FStack::AddTab
                      (pFVar6,&local_c38,WidgetReflectorTabID::WidgetHierarchy,OpenedTab);
  local_f60.Object = (FLayoutNode *)pTVar25->Object;
  local_f60.SharedReferenceCount.ReferenceController =
       (pTVar25->SharedReferenceCount).ReferenceController;
  if (local_f60.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f60.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f60.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar27 = FTabManager::FSplitter::Split(pFVar7,&local_c48,&local_f60);
  pFVar7 = pTVar27->Object;
  pTVar25 = FTabManager::NewStack(&local_c58);
  pFVar6 = pTVar25->Object;
  pFVar6->bHideTabWell = true;
  pTVar23 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar6->_padding_,&local_978)
  ;
  pTVar10 = (pTVar23->SharedReferenceCount).ReferenceController;
  pFVar8 = pTVar23->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_978.SharedReferenceCount.ReferenceController);
  pFVar8->SizeCoefficient = 0.3;
  pTVar23 = TSharedFromThis<FTabManager::FLayoutNode,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayoutNode,1> *)&pFVar8->_padding_,&local_968)
  ;
  pTVar11 = (pTVar23->SharedReferenceCount).ReferenceController;
  pFVar6 = (FStack *)pTVar23->Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_968.SharedReferenceCount.ReferenceController);
  pTVar25 = FTabManager::FStack::AddTab
                      (pFVar6,&local_c68,WidgetReflectorTabID::SnapshotWidgetPicker,ClosedTab);
  pTVar25 = FTabManager::FStack::AddTab
                      (pTVar25->Object,&local_c78,WidgetReflectorTabID::WidgetEvents,ClosedTab);
  pTVar25 = FTabManager::FStack::AddTab
                      (pTVar25->Object,&local_c88,WidgetReflectorTabID::HittestGrid,ClosedTab);
  pTVar25 = FTabManager::FStack::AddTab
                      (pTVar25->Object,&local_c98,WidgetReflectorTabID::WidgetList,ClosedTab);
  local_f50.Object = (FLayoutNode *)pTVar25->Object;
  local_f50.SharedReferenceCount.ReferenceController =
       (pTVar25->SharedReferenceCount).ReferenceController;
  if (local_f50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar27 = FTabManager::FSplitter::Split(pFVar7,&local_ca8,&local_f50);
  local_f40.Object = (FLayoutNode *)pTVar27->Object;
  local_f40.SharedReferenceCount.ReferenceController =
       (pTVar27->SharedReferenceCount).ReferenceController;
  if (local_f40.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f40.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f40.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar27 = FTabManager::FSplitter::Split(local_10b8,&local_938,&local_f40);
  local_f30.Object = (FLayoutNode *)pTVar27->Object;
  local_f30.SharedReferenceCount.ReferenceController =
       (pTVar27->SharedReferenceCount).ReferenceController;
  if (local_f30.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f30.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f30.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar28 = FTabManager::FArea::Split(local_10b0,&local_948,&local_f30);
  this_02 = local_1118;
  pTVar26 = (TSharedRef<FTabManager::FArea,1> *)(local_1118->Areas).AllocatorInstance.Data;
  if (((pTVar26 <= pTVar28) && (pTVar28 < pTVar26 + (local_1118->Areas).ArrayMax)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar19 = (this_02->Areas).ArrayNum;
  piVar1 = &(this_02->Areas).ArrayMax;
  if (iVar19 == *piVar1) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this_02->Areas).AllocatorInstance,piVar1);
  }
  pFVar3 = (this_02->Areas).AllocatorInstance.Data;
  (this_02->Areas).ArrayNum = iVar19 + 1;
  *(FArea **)(pFVar3 + (longlong)iVar19 * 0x10) = pTVar28->Object;
  pTVar12 = (pTVar28->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar19 * 0x10 + 8) = pTVar12;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar29 = TSharedFromThis<FTabManager::FLayout,1>::AsShared
                      ((TSharedFromThis<FTabManager::FLayout,1> *)this_02,&local_958);
  local_1048.Object = pTVar29->Object;
  local_1048.SharedReferenceCount.ReferenceController =
       (pTVar29->SharedReferenceCount).ReferenceController;
  if (local_1048.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1048.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1048.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_958.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_948.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_938.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ca8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f20.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f10.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1098);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f00.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1090);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ef0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1070.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_1138.SharedReferenceCount.ReferenceController._4_4_,
                      local_1138.SharedReferenceCount.ReferenceController._0_4_));
  local_res20 = this;
  if (((param_1->_ParentTab).Object == (SDockTab *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InArgs._ParentTab.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                          ,0x25c,L""), bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pTVar30 = FGlobalTabmanager::Get();
  this_01 = pTVar30->Object;
  if (((param_1->_ParentTab).Object == (SDockTab *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  local_10d8.SharedReferenceCount.ReferenceController =
       (param_1->_ParentTab).SharedReferenceCount.ReferenceController;
  local_10d8.Object = (param_1->_ParentTab).Object;
  if (local_10d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_10d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_10d8.Object == (SDockTab *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar18)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pTVar31 = FGlobalTabmanager::NewTabManager(this_01,&local_c08,&local_10d8);
  local_10e8.SharedReferenceCount.ReferenceController =
       (pTVar31->SharedReferenceCount).ReferenceController;
  local_10e8.Object = pTVar31->Object;
  if (local_10e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_10e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->TabManager;
  if (this_00 != &local_10e8) {
    this_00->Object = local_10e8.Object;
    local_10e8.Object = (FTabManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TabManager).SharedReferenceCount,&local_10e8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c08.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10d8.SharedReferenceCount.ReferenceController);
  pFVar32 = TSharedPtr<FTabManager,1>::operator->(this_00);
  local_1168 = (undefined1  [8])0x0;
  local_1160.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1160.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1168,
             (FWriteAccessScope *)&local_d28);
  local_d10 = &local_1160;
  puVar33 = UE::Core::Private::DelegateAllocate(0x30,&local_1160);
  if (puVar33 != (undefined8 *)0x0) {
    *puVar33 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VFLayout_FTabManager___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar34 = FDelegateHandle::GenerateNewID();
    puVar33[2] = uVar34;
    puVar33[4] = HandleTabManagerPersistLayout;
    puVar33[5] = (ulonglong)local_a70.D << 0x20;
    *puVar33 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VSWidgetReflector_WidgetReflectorImpl____A6AXAEBV__TSharedRef_VFLayout_FTabManager___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar33[3] = this;
    if ((puVar33[4] == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("InUserObject != nullptr && MethodPtr != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                            ,0x1d8,L""), bVar18)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  if (local_d28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d28.Accessor,&local_d28);
  }
  FTabManager::SetOnPersistLayout
            (pFVar32,(TDelegate<void___cdecl(TSharedRef<FTabManager::FLayout,1>_const_&),FDefaultDelegateUserPolicy>
                      *)local_1168);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1168,
             (FWriteAccessScope *)&local_da8);
  if ((local_1160.DelegateSize != 0) &&
     (local_1160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1160.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1160,0,0,0x10);
    local_1160.DelegateSize = 0;
  }
  if (local_da8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_da8.Accessor,&local_da8);
  }
  if (local_1160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1160.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1168);
  lStack_bf0 = (ulonglong)local_a70.D << 0x20;
  local_bf8 = SpawnSlateOptionWidgetTab;
  pTVar35 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            ::CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      ((TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                        *)local_d90,this,(pmf_268844d5 *)&local_bf8);
  pFVar36 = `WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()
                      (&local_res20,&WidgetReflectorTabID::SlateOptions,pTVar35);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_be8,L"SWidgetReflector",L"OptionsTab",L"Toolbar");
  FTabSpawnerEntry::SetDisplayName(pFVar36,pFVar37);
  if (local_be8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_be8.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d90);
  if ((void *)local_d90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d90);
  lStack_bd0 = (ulonglong)local_a70.D << 0x20;
  local_bd8 = SpawnWidgetHierarchyTab;
  pTVar35 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            ::CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      ((TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                        *)local_e68,this,(pmf_268844d5 *)&local_bd8);
  pFVar36 = `WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()
                      (&local_res20,&WidgetReflectorTabID::WidgetHierarchy,pTVar35);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_bc8,L"SWidgetReflector",L"WidgetHierarchyTab",L"Widget Hierarchy");
  FTabSpawnerEntry::SetDisplayName(pFVar36,pFVar37);
  if (local_bc8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_bc8.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e68);
  if ((void *)local_e68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e68);
  lStack_bb0 = (ulonglong)local_a70.D << 0x20;
  local_bb8 = SpawnSnapshotWidgetPicker;
  pTVar35 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            ::CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      ((TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                        *)local_e50,this,(pmf_268844d5 *)&local_bb8);
  pFVar36 = `WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()
                      (&local_res20,&WidgetReflectorTabID::SnapshotWidgetPicker,pTVar35);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_ba8,L"SWidgetReflector",L"SnapshotWidgetPickerTab",
                       L"Snapshot Widget Picker");
  FTabSpawnerEntry::SetDisplayName(pFVar36,pFVar37);
  if (local_ba8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_ba8.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e50);
  if ((void *)local_e50._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e50._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e50);
  lStack_b90 = (ulonglong)local_a70.D << 0x20;
  local_b98 = SpawnWidgetEvents;
  pTVar35 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            ::CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      ((TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                        *)local_e38,this,(pmf_268844d5 *)&local_b98);
  pFVar36 = `WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()
                      (&local_res20,&WidgetReflectorTabID::WidgetEvents,pTVar35);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_b88,L"SWidgetReflector",L"WidgetEventsTab",L"Widget Events");
  FTabSpawnerEntry::SetDisplayName(pFVar36,pFVar37);
  if (local_b88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b88.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e38);
  if ((void *)local_e38._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e38._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e38);
  lStack_b70 = (ulonglong)local_a70.D << 0x20;
  local_b78 = SpawnWidgetHittestGrid;
  pTVar35 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            ::CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      ((TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                        *)local_e20,this,(pmf_268844d5 *)&local_b78);
  pFVar36 = `WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()
                      (&local_res20,&WidgetReflectorTabID::HittestGrid,pTVar35);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_b68,L"SWidgetReflector",L"HitTestGridTab",L"Hit Test Grid");
  FTabSpawnerEntry::SetDisplayName(pFVar36,pFVar37);
  if (local_b68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b68.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e20);
  if ((void *)local_e20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e20);
  lStack_b50 = (ulonglong)local_a70.D << 0x20;
  local_b58 = SpawnWidgetList;
  pTVar35 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            ::CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      ((TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                        *)local_e08,this,(pmf_268844d5 *)&local_b58);
  pFVar36 = `WidgetReflectorImpl::SWidgetReflector::Construct'::__l2::<lambda_1>::operator()
                      (&local_res20,&WidgetReflectorTabID::WidgetList,pTVar35);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_b48,L"SWidgetReflector",L"WidgetListTab",L"Widget List");
  FTabSpawnerEntry::SetDisplayName(pFVar36,pFVar37);
  if (local_b48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b48.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e08);
  if ((void *)local_e08._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e08._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e08);
  local_1110.ComparisonIndex.Value = 0;
  local_1110.Number = 0;
  pIVar38 = FAppStyle::Get();
  local_1108 = 0;
  local_b38.Object = (FExtender *)0x0;
  local_b38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b28.Object = (FUICommandList *)0x0;
  local_b28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            (&local_898,MenuBar,false,&local_b28,false,&local_b38,pIVar38,(FName)0x0,local_1110);
  local_898._padding_ = (longlong)&___7FMenuBarBuilder__6B_;
  ::FName::FName(&local_1080,"WindowMenuBar");
  *(ISlateStyle **)(local_898._padding_ + 0x60) = pIVar38;
  *(FName *)(local_898._padding_ + 0x68) = local_1080;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_1100.ComparisonIndex.Value = 0;
  local_1100.Number = 0;
  pFVar39 = ::FName::FName(&local_a78,"DemoMode");
  FVar13 = *pFVar39;
  pFVar40 = FSlateReflectorModule::GetModulePtr();
  lVar49 = (**(code **)((longlong)*pFVar40 + 0x80))(pFVar40);
  local_1150 = (undefined1  [8])0x0;
  local_1148.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1148.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1150,
             (FWriteAccessScope *)&local_d48);
  local_d30 = &local_1148;
  puVar33 = UE::Core::Private::DelegateAllocate(0x28,&local_1148);
  if (puVar33 != (undefined8 *)0x0) {
    *puVar33 = &
               ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar34 = FDelegateHandle::GenerateNewID();
    puVar33[2] = uVar34;
    *puVar33 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFInputEventVisualizer____A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar33[4] = FInputEventVisualizer::PopulateMenu;
    puVar33[3] = lVar49;
    if ((lVar49 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("InUserObject != nullptr && MethodPtr != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                            ,0x1d8,L""), bVar18)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  if (local_d48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d48.Accessor,&local_d48);
  }
  pFVar37 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>((TAttribute<FText> *)local_928,pFVar37);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_b18,L"SWidgetReflector",L"DemoModeLabel",L"Demo Mode");
  FText::FText((FText *)local_1010,pFVar37);
  local_1010[0x10] = true;
  local_fe8 = 0;
  local_ff8 = (undefined1  [8])0x0;
  pvStack_ff0 = (void *)0x0;
  FMenuBarBuilder::AddPullDownMenu
            ((FMenuBarBuilder *)&local_898,(TAttribute<FText> *)local_1010,
             (TAttribute<FText> *)local_928,
             (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)local_1150,FVar13
             ,local_1100);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ff8);
  if (pvStack_ff0 != (void *)0x0) {
    FMemory::Free(pvStack_ff0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ff8);
  if ((ITextData *)local_1010._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1010._0_8_ + 0x10))();
  }
  if (local_b18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b18.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_910);
  if ((void *)local_910._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_910._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_910);
  if ((ITextData *)local_928._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_928._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1150,
             (FWriteAccessScope *)&local_df0);
  if ((local_1148.DelegateSize != 0) &&
     (local_1148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1148.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1148,0,0,0x10);
    local_1148.DelegateSize = 0;
  }
  if (local_df0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_df0.Accessor,&local_df0);
  }
  if (local_1148.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1148.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1150);
  local_10f8.ComparisonIndex.Value = 0;
  local_10f8.Number = 0;
  pFVar39 = ::FName::FName(&local_a60,"Atlases");
  local_1138.SharedReferenceCount.ReferenceController._0_4_ = 0;
  FVar13 = *pFVar39;
  local_1138.Object = (FLayout *)HandlePullDownAtlasesMenu;
  lStack_b00 = (ulonglong)local_1138.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_b08 = HandlePullDownAtlasesMenu;
  pTVar41 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
            CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                       local_dd8,this,(pmf_c6dce37b *)&local_b08);
  pFVar37 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>((TAttribute<FText> *)local_8f8,pFVar37);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_af8,L"SWidgetReflector",L"AtlasesMenuLabel",L"Atlases");
  FText::FText((FText *)local_fe0,pFVar37);
  local_fe0[0x10] = true;
  local_fb8 = 0;
  local_fc8 = (undefined1  [8])0x0;
  pvStack_fc0 = (void *)0x0;
  FMenuBarBuilder::AddPullDownMenu
            ((FMenuBarBuilder *)&local_898,(TAttribute<FText> *)local_fe0,
             (TAttribute<FText> *)local_8f8,pTVar41,FVar13,local_10f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_fc8);
  if (pvStack_fc0 != (void *)0x0) {
    FMemory::Free(pvStack_fc0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_fc8);
  if ((ITextData *)local_fe0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_fe0._0_8_ + 0x10))();
  }
  if (local_af8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_af8.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_8e0);
  if ((void *)local_8e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_8e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8e0);
  if ((ITextData *)local_8f8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_8f8._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_dd8);
  if ((void *)local_dd8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_dd8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_dd8);
  local_10f0.ComparisonIndex.Value = 0;
  local_10f0.Number = 0;
  pFVar39 = ::FName::FName(&local_a58,"Window");
  local_1138.SharedReferenceCount.ReferenceController._0_4_ = 0;
  FVar13 = *pFVar39;
  local_1138.Object = (FLayout *)HandlePullDownWindowMenu;
  lStack_ae0 = (ulonglong)local_1138.SharedReferenceCount.ReferenceController._4_4_ << 0x20;
  local_ae8 = HandlePullDownWindowMenu;
  pTVar41 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
            CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                       local_dc0,this,(pmf_c6dce37b *)&local_ae8);
  pFVar37 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>((TAttribute<FText> *)local_8c8,pFVar37);
  pFVar37 = FText::AsLocalizable_Advanced_LocText
                      (&local_ad8,L"SWidgetReflector",L"WindowMenuLabel",L"Window");
  FText::FText((FText *)local_fb0,pFVar37);
  local_fb0[0x10] = true;
  local_f88 = 0;
  local_f98 = (undefined1  [8])0x0;
  pvStack_f90 = (void *)0x0;
  FMenuBarBuilder::AddPullDownMenu
            ((FMenuBarBuilder *)&local_898,(TAttribute<FText> *)local_fb0,
             (TAttribute<FText> *)local_8c8,pTVar41,FVar13,local_10f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f98);
  if (pvStack_f90 != (void *)0x0) {
    FMemory::Free(pvStack_f90);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f98);
  if ((ITextData *)local_fb0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_fb0._0_8_ + 0x10))();
  }
  if (local_ad8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_ad8.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_8b0);
  if ((void *)local_8b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_8b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8b0);
  if ((ITextData *)local_8c8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_8c8._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_dc0);
  if ((void *)local_dc0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_dc0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_dc0);
  FMultiBoxBuilder::MakeWidget
            ((FMultiBoxBuilder *)&local_898,&local_1058,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  pFVar32 = TSharedPtr<FTabManager,1>::operator->(this_00);
  local_ac8.Object = local_1058.Object;
  local_ac8.SharedReferenceCount.ReferenceController =
       local_1058.SharedReferenceCount.ReferenceController;
  if (local_1058.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1058.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1058.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar42 = FMultiBoxBuilder::GetMultiBox((FMultiBoxBuilder *)&local_898,&local_ab8);
  local_ee0.Object = pTVar42->Object;
  local_ee0.SharedReferenceCount.ReferenceController =
       (pTVar42->SharedReferenceCount).ReferenceController;
  if (local_ee0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_ee0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_ee0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FTabManager::SetMenuMultiBox(pFVar32,&local_ee0,&local_ac8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ab8.SharedReferenceCount.ReferenceController);
  pFVar43 = SBorder::FArguments::FArguments(&local_430);
  pIVar38 = FAppStyle::Get();
  pcVar14 = *(code **)((longlong)*pIVar38 + 0x50);
  pFVar39 = ::FName::FName(&local_a50,"ToolPanel.GroupBorder");
  local_e90.Value = (FSlateBrush *)(*pcVar14)(pIVar38,*pFVar39,0,0);
  local_e90.bIsSet = true;
  local_e90.Getter._16_8_ = 0;
  local_e90.Getter._0_8_ = 0;
  local_e90.Getter._8_8_ = 0;
  pFVar43 = SBorder::FArguments::BorderImage(pFVar43,&local_e90);
  local_d68 = 0;
  local_d64 = 1;
  local_d50 = 0;
  local_d78 = FLinearColor::Gray.field0_0x0;
  local_d60 = 0;
  uStack_d58 = 0;
  pFVar43 = SBorder::FArguments::BorderBackgroundColor
                      (pFVar43,(TAttribute<FSlateColor> *)&local_d78._s_0);
  pFVar44 = SVerticalBox::FArguments::FArguments(&local_638);
  pFVar45 = SVerticalBox::Slot(&local_720);
  pFVar45 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar45);
  local_d08.bIsSet = true;
  local_d08.Value.Left = ___xmm_00000000000000004080000000000000;
  local_d08.Value.Top = _UNK_150a07f54;
  local_d08.Value.Right = _UNK_150a07f58;
  local_d08.Value.Bottom = _UNK_150a07f5c;
  local_d08.Getter._16_8_ = 0;
  local_d08.Getter._0_8_ = 0;
  local_d08.Getter._8_8_ = 0;
  pFVar45 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar45->field_0x18,&local_d08);
  pFVar45 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar45,&local_1058);
  pFVar44 = SVerticalBox::FArguments::operator+(pFVar44,pFVar45);
  pFVar45 = SVerticalBox::Slot(&local_808);
  local_cd8.bIsSet = true;
  local_cd8.Value.Left = ___xmm_00000000000000004080000000000000;
  local_cd8.Value.Top = _UNK_150a07f54;
  local_cd8.Value.Right = _UNK_150a07f58;
  local_cd8.Value.Bottom = _UNK_150a07f5c;
  local_cd8.Getter._16_8_ = 0;
  local_cd8.Getter._0_8_ = 0;
  local_cd8.Getter._8_8_ = 0;
  pFVar45 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar45->field_0x18,&local_cd8);
  pFVar32 = TSharedPtr<FTabManager,1>::operator->(this_00);
  local_ec0.Object = (SWindow *)0x0;
  local_ec0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this_03 = FTabManager::RestoreFrom(pFVar32,&local_9b8,&local_1048,&local_ec0,false,Never);
  pTVar46 = TSharedPtr<SWidget,1>::ToSharedRef(this_03,&local_a88);
  pFVar45 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar45,pTVar46);
  pFVar44 = SVerticalBox::FArguments::operator+(pFVar44,pFVar45);
  this_04 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_820,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                       ,0x2a1,local_res8);
  pTVar47 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_a98,pFVar44);
  pTVar4 = (pTVar47->SharedReferenceCount).ReferenceController;
  local_10c8 = pTVar47->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (pFVar43->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar43->_Content).Widget.Object = (SWidget *)local_10c8;
  (pFVar43->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  pTStack_10c0 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  this_05 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_838,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                       ,0x29d,local_res10);
  pTVar48 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_05,&local_aa8,pFVar43);
  pTVar9 = (pTVar48->SharedReferenceCount).ReferenceController;
  local_ed0.Object = (SWidget *)pTVar48->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_ed0.SharedReferenceCount.ReferenceController = pTVar9;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_ed0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_aa8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_838._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_820._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ec0.SharedReferenceCount.ReferenceController);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_808);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_720);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_638._Slots);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_638);
  SBorder::FArguments::~FArguments(&local_430);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1058.SharedReferenceCount.ReferenceController);
  FMenuBarBuilder::~FMenuBarBuilder((FMenuBarBuilder *)&local_898);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1048.SharedReferenceCount.ReferenceController);
  return;
}

// CreateCrumbTrailForNode @ 142e6aa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142e6ab41) */
/* WARNING: Removing unreachable block (ram,0x000142e6ab4d) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::CreateCrumbTrailForNode
          (SWidgetReflector *this,TSharedRef<FWidgetReflectorNodeBase,1> *param_1)

{
  int iVar1;
  int iVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  FWidgetReflectorNodeBase *pFVar5;
  SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *this_00;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  TRefCountPtr<ITextData> TVar8;
  bool bVar9;
  uint uVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  ForElementType<FArrangedWidget> FVar13;
  ForAnyElementType FVar14;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar15;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar16;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar21;
  ulonglong uVar22;
  undefined1 auStackY_2f8 [32];
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> local_2a8;
  undefined1 local_298;
  undefined1 local_297 [7];
  SWidgetReflector *local_290;
  undefined1 local_288 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_270;
  ForAnyElementType FStack_268;
  ulonglong local_260;
  TSharedPtr<SWidget_const_,1> local_258;
  undefined1 local_248 [8];
  TReferenceControllerBase<1> *local_240;
  TSharedRef<FWidgetReflectorNodeBase,1> *local_238;
  FText local_230;
  SWidget *local_218;
  TReferenceControllerBase<1> *pTStack_210;
  FDestructionSentinel local_208;
  undefined1 local_1f0 [8];
  TReferenceControllerBase<1> *local_1e8;
  TReferenceControllerBase<1> *local_1d8;
  TSharedPtr<SWidget_const_,1> local_1c8;
  FWidgetPath local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_290 = this;
  local_238 = param_1;
  FWidgetPath::FWidgetPath(&local_1b8);
  plVar11 = (longlong *)(**(code **)(param_1->Object->_padding_ + 0x10))(param_1->Object,local_1f0);
  if ((*plVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar3 = (SWidget *)*plVar11;
  pTVar4 = (TReferenceControllerBase<1> *)plVar11[1];
  plVar11[1] = 0;
  *plVar11 = 0;
  local_240 = pTVar4;
  if ((pSVar3 == (SWidget *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e8);
  local_2a8.ArrayMax = 0;
  local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.ArrayNum = 0;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_258.Object = pSVar3;
  local_258.SharedReferenceCount.ReferenceController = pTVar4;
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)0x0,0);
  iVar1 = (this->ReflectorTreeRoot).ArrayNum;
  pTVar17 = (TSharedRef<FWidgetReflectorNodeBase,1> *)
            (this->ReflectorTreeRoot).AllocatorInstance.Data;
  pTVar21 = pTVar17 + iVar1;
  do {
    if ((this->ReflectorTreeRoot).ArrayNum != iVar1) {
      local_298 = 0;
      `TCheckedPointerIterator<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_298);
    }
    if (pTVar17 == pTVar21) goto LAB_142e6ae0b;
    plVar11 = (longlong *)(**(code **)(pTVar17->Object->_padding_ + 0x10))();
    bVar9 = (SWidget *)*plVar11 == local_258.Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1d8);
    if (bVar9) {
      if (((local_2a8.AllocatorInstance.Data <= pTVar17) &&
          (pTVar17 < (TSharedRef<FWidgetReflectorNodeBase,1> *)
                     (local_2a8.AllocatorInstance.Data + (longlong)local_2a8.ArrayMax * 0x10))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_2a8.ArrayNum == local_2a8.ArrayMax) {
        local_2a8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_2a8.AllocatorInstance,&local_2a8.ArrayMax);
      }
      iVar2 = local_2a8.ArrayNum + 1;
      *(FWidgetReflectorNodeBase **)
       &local_2a8.AllocatorInstance.Data[(longlong)local_2a8.ArrayNum * 0x10].field_0x0 =
           pTVar17->Object;
      pTVar4 = (pTVar17->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)
       (local_2a8.AllocatorInstance.Data + (longlong)local_2a8.ArrayNum * 0x10 + 8) = pTVar4;
      local_2a8.ArrayNum = iVar2;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    else {
      pFVar5 = pTVar17->Object;
      iVar2 = (pFVar5->ChildNodes).ArrayNum;
      pTVar15 = (TSharedRef<FWidgetReflectorNodeBase,1> *)
                (pFVar5->ChildNodes).AllocatorInstance.Data;
      pTVar16 = pTVar15 + iVar2;
      while( true ) {
        if ((pFVar5->ChildNodes).ArrayNum != iVar2) {
          local_297[0] = 0;
          `TCheckedPointerIterator<TSharedRef<FWidgetReflectorNodeBase,1>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_297);
        }
        this = local_290;
        if (pTVar15 == pTVar16) goto LAB_142e6adb2;
        WidgetReflectorNodeUtilsImpl::FindLiveWidget(&local_258,pTVar15,&local_2a8);
        if (0 < local_2a8.ArrayNum) break;
        pTVar15 = pTVar15 + 1;
      }
      if (((local_2a8.AllocatorInstance.Data <= pTVar17) &&
          (pTVar17 < (TSharedRef<FWidgetReflectorNodeBase,1> *)
                     (local_2a8.AllocatorInstance.Data + (longlong)local_2a8.ArrayMax * 0x10))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_2a8.ArrayNum == local_2a8.ArrayMax) {
        local_2a8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_2a8.AllocatorInstance,&local_2a8.ArrayMax);
      }
      lVar20 = (longlong)local_2a8.ArrayNum;
      local_2a8.ArrayNum = local_2a8.ArrayNum + 1;
      *(FWidgetReflectorNodeBase **)&local_2a8.AllocatorInstance.Data[lVar20 * 0x10].field_0x0 =
           pTVar17->Object;
      pTVar4 = (pTVar17->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(local_2a8.AllocatorInstance.Data + lVar20 * 0x10 + 8) =
           pTVar4;
      this = local_290;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
LAB_142e6adb2:
    if (0 < local_2a8.ArrayNum) {
      lVar20 = (longlong)(local_2a8.ArrayNum / 2);
      if (0 < local_2a8.ArrayNum / 2) {
        pFVar12 = local_2a8.AllocatorInstance.Data + (longlong)(local_2a8.ArrayNum + -1) * 0x10;
        FVar14.Data = local_2a8.AllocatorInstance.Data;
        do {
          pTVar4 = *(TReferenceControllerBase<1> **)(pFVar12 + 8);
          pFVar5 = ((TSharedRef<FWidgetReflectorNodeBase,1> *)FVar14.Data)->Object;
          pTVar7 = (((TSharedRef<FWidgetReflectorNodeBase,1> *)FVar14.Data)->SharedReferenceCount).
                   ReferenceController;
          ((TSharedRef<FWidgetReflectorNodeBase,1> *)FVar14.Data)->Object =
               *(FWidgetReflectorNodeBase **)&pFVar12->field_0x0;
          (((TSharedRef<FWidgetReflectorNodeBase,1> *)FVar14.Data)->SharedReferenceCount).
          ReferenceController = pTVar4;
          FVar14.Data = FVar14.Data + 0x10;
          *(FWidgetReflectorNodeBase **)&pFVar12->field_0x0 = pFVar5;
          *(TReferenceControllerBase<1> **)(pFVar12 + 8) = pTVar7;
          lVar20 = lVar20 + -1;
          pFVar12 = pFVar12 + -0x10;
        } while (lVar20 != 0);
      }
LAB_142e6ae0b:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_258.SharedReferenceCount.ReferenceController);
      if (((this->BreadCrumb).Object ==
           (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::ClearCrumbs
                ((this->BreadCrumb).Object,false);
      if (1 < local_2a8.ArrayNum) {
        uVar19 = 0;
        uVar22 = uVar19;
        if (0 < local_2a8.ArrayNum) {
          do {
            uVar18 = (uint)uVar19;
            uVar10 = 0;
            if ((int)uVar18 < local_2a8.ArrayNum) {
              uVar10 = ~uVar18 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (**(code **)(**(longlong **)(local_2a8.AllocatorInstance.Data + uVar22) + 0x10))
                      (*(longlong **)(local_2a8.AllocatorInstance.Data + uVar22),&local_218);
            pTVar4 = pTStack_210;
            local_1c8.Object = local_218;
            local_1c8.SharedReferenceCount.ReferenceController = pTStack_210;
            if (pTStack_210 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTStack_210->SharedReferenceCount =
                   (atomic<int>)((int)pTStack_210->SharedReferenceCount + 1);
              UNLOCK();
            }
            FWidgetReflectorNodeUtils::GetWidgetType(&local_230,&local_1c8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            if (((this->BreadCrumb).Object ==
                 (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_00 = (this->BreadCrumb).Object;
            uVar10 = 0;
            if ((int)uVar18 < local_2a8.ArrayNum) {
              uVar10 = ~uVar18 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            TVar8.Reference = local_230.TextData.Reference;
            pTVar17 = (TSharedRef<FWidgetReflectorNodeBase,1> *)
                      (local_2a8.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10);
            local_288._0_8_ = local_230.TextData.Reference;
            if (local_230.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_230.TextData.Reference + 8))
                        (local_230.TextData.Reference,local_248);
            }
            local_288._8_4_ = local_230.Flags;
            local_288[0x10] = true;
            local_260 = 0;
            local_270.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            FStack_268.Data = (FScriptContainerElement *)0x0;
            SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::PushCrumb
                      (this_00,(TAttribute<FText> *)local_288,pTVar17);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_270,(FWriteAccessScope *)&local_208);
            if (((int)local_260 != 0) && (FStack_268.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)FStack_268.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_268,0,0,0x10);
              local_260 = local_260 & 0xffffffff00000000;
            }
            if (local_208.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
            }
            if (FStack_268.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_268.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_270.AccessDetector);
            if ((ITextData *)local_288._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_288._0_8_ + 0x10))();
            }
            if (TVar8.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*TVar8.Reference + 0x10))(TVar8.Reference);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_210);
            uVar19 = (ulonglong)(uVar18 + 1);
            this = local_290;
            uVar22 = uVar22 + 0x10;
          } while ((int)(uVar18 + 1) < local_2a8.ArrayNum);
        }
      }
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
                ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_2a8.AllocatorInstance.Data,
                 local_2a8.ArrayNum);
      if ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_2a8.AllocatorInstance.Data !=
          (TSharedRef<FWidgetReflectorNodeBase,1> *)0x0) {
        FMemory::Free(local_2a8.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_240)
      ;
      if (local_1b8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_1b8.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar13 = (ForElementType<FArrangedWidget>)&local_1b8.Widgets.Array;
      if (local_1b8.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar13 = local_1b8.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar13,local_1b8.Widgets.Array.ArrayNum)
      ;
      if (local_1b8.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_1b8.Widgets.Array.AllocatorInstance.SecondaryData);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((local_238->SharedReferenceCount).ReferenceController);
      return;
    }
    pTVar17 = pTVar17 + 1;
  } while( true );
}

// DoesReflectorTreeHasSelectedItem @ 142e72810

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
WidgetReflectorImpl::SWidgetReflector::DoesReflectorTreeHasSelectedItem(SWidgetReflector *this)

{
  return 0 < (this->SelectedNodes).ArrayNum;
}

// DrawWidgetVisualization @ 142e72830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::DrawWidgetVisualization
          (SWidgetReflector *this,FPaintGeometry *param_1,FLinearColor *param_2,
          FSlateWindowElementList *param_3,int *param_4)

{
  float fVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0_s_0 TVar3;
  code *pcVar4;
  TVector2<double>_u_0 TVar5;
  double dVar6;
  TVector2<double> TVar7;
  bool bVar8;
  ISlateStyle *pIVar9;
  FName *pFVar10;
  FSlateBrush *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 local_88;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_80;
  TVector2<float>_u_0_s_0 local_70;
  FName local_68 [8];
  
  if (param_1->bUsingLegacyConstructor != 0) {
    fVar1 = param_1->DrawScale;
    TVar2 = (param_1->DrawPosition).field0_0x0;
    (param_1->AccumulatedRenderTransform).M.M[0][0] = fVar1;
    *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1) = 0;
    (param_1->AccumulatedRenderTransform).M.M[1][1] = fVar1;
    (param_1->AccumulatedRenderTransform).Trans.field0_0x0 = TVar2;
    local_70 = (param_1->DrawSize).field0_0x0._s_0;
    local_88._4_4_ = (__real_3f800000 / fVar1) * local_70.Y;
    local_88._0_4_ = (__real_3f800000 / fVar1) * local_70.X;
    (param_1->LocalSize).field0_0x0 = local_88;
  }
  TVar3 = (param_1->LocalSize).field0_0x0._s_0;
  local_88._0_4_ = TVar3.X;
  local_88._4_4_ = TVar3.Y;
  dVar6 = (double)(float)(undefined4)local_88;
  uVar14 = SUB84((double)(float)local_88._4_4_,0);
  uVar15 = (uint)((ulonglong)(double)(float)local_88._4_4_ >> 0x20);
  uVar12 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((double)CONCAT44(uVar13,uVar12) < __real_3e45798ee2308c3a ||
       (double)CONCAT44(uVar13,uVar12) == __real_3e45798ee2308c3a) ||
     (uVar12 = uVar14 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar13 = uVar15 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar13,uVar12) < __real_3e45798ee2308c3a ||
     (double)CONCAT44(uVar13,uVar12) == __real_3e45798ee2308c3a)) {
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,2,&local_80.AllocatorInstance,&local_80.ArrayNum,&local_80.ArrayMax);
    TVar7 = UE::Math::TVector2<double>::ZeroVector;
    if (local_80.ArrayNum < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(TVector2<double>_u_0 *)local_80.AllocatorInstance.Data =
         (TVector2<double>_u_0_s_0)TVar7.field0_0x0;
    if (local_80.ArrayNum < 2) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TVar5._8_4_ = uVar14;
    TVar5._s_0.X = dVar6;
    TVar5._12_4_ = uVar15;
    *(TVector2<double>_u_0 *)(local_80.AllocatorInstance.Data + 0x10) = TVar5;
    *param_4 = *param_4 + 1;
    FSlateDrawElement::MakeLines
              (param_3,*param_4,param_1,&local_80,None,param_2,true,__real_40000000);
    if ((TVector2<double>_u_0 *)local_80.AllocatorInstance.Data != (TVector2<double>_u_0 *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
  }
  else {
    pIVar9 = FAppStyle::Get();
    pcVar4 = *(code **)((longlong)*pIVar9 + 0x50);
    pFVar10 = ::FName::FName(local_68,L"Debug.Border");
    pFVar11 = (FSlateBrush *)(*pcVar4)(pIVar9,*pFVar10,0,0);
    *param_4 = *param_4 + 1;
    FSlateDrawElement::MakeBox(param_3,*param_4,param_1,pFVar11,None,param_2);
  }
  return;
}

// FilterSelectedToSetAsReflectorTreeRoot @ 142e83230

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> * __thiscall
WidgetReflectorImpl::SWidgetReflector::FilterSelectedToSetAsReflectorTreeRoot
          (SWidgetReflector *this,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  atomic<int> aVar8;
  int iVar9;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  ForAnyElementType FVar11;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  TReferenceControllerBase<1> *pTVar16;
  uint uVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *local_res20;
  TReferenceControllerBase<1> *local_58;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> local_50;
  
  pTVar18 = (TReferenceControllerBase<1> *)0x0;
  if (param_1->ArrayNum < 2) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = param_1->ArrayNum;
    __return_storage_ptr__->ArrayMax = param_1->ArrayMax;
    iVar9 = 0;
    pTVar12 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(param_1->AllocatorInstance).Data;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  else {
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    if (&local_50 != param_1) {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
                ((TSharedRef<FWidgetReflectorNodeBase,1> *)0x0,0);
      iVar9 = param_1->ArrayNum;
      pTVar12 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(param_1->AllocatorInstance).Data;
      local_50.ArrayNum = iVar9;
      if ((iVar9 == 0) && (local_50.ArrayMax == 0)) {
        local_50.ArrayNum = 0;
        local_50.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar9,local_50.ArrayMax,&local_50.AllocatorInstance,iVar9,
                   &local_50.ArrayMax);
        ConstructItems<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<FWidgetReflectorNodeBase,1>,int>
                  (local_50.AllocatorInstance.Data,pTVar12,iVar9);
      }
    }
    uVar17 = local_50.ArrayNum - 1;
    uVar6 = 0;
    if (-1 < (int)uVar17) {
      lVar15 = (longlong)(int)uVar17 << 4;
      do {
        uVar7 = 0;
        if ((int)uVar17 < local_50.ArrayNum) {
          uVar7 = ~uVar17 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *)
                    (*pcVar3)();
          return pTVar10;
        }
        lVar1 = *(longlong *)(local_50.AllocatorInstance.Data + lVar15);
        pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x60);
        pTVar13 = pTVar2;
        pTVar16 = pTVar18;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          aVar4 = pTVar2->SharedReferenceCount;
          do {
            pTVar13 = pTVar18;
            if (aVar4 == (atomic<int>)0x0) goto LAB_142e83377;
            LOCK();
            aVar8 = pTVar2->SharedReferenceCount;
            bVar5 = aVar4 == aVar8;
            if (bVar5) {
              pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
              aVar8 = aVar4;
            }
            UNLOCK();
            aVar4 = aVar8;
          } while (!bVar5);
          pTVar13 = pTVar2;
          pTVar16 = *(TReferenceControllerBase<1> **)(lVar1 + 0x58);
        }
LAB_142e83377:
        for (FVar11.Data = local_50.AllocatorInstance.Data;
            FVar11.Data != local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 0x10;
            FVar11.Data = FVar11.Data + 0x10) {
          if ((pTVar16 != (TReferenceControllerBase<1> *)0x0) &&
             (pTVar16 == *(TReferenceControllerBase<1> **)FVar11.Data)) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar13);
            uVar7 = uVar6;
            if ((int)uVar17 < local_50.ArrayNum) {
              uVar7 = ~uVar17 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar10 = (TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>
                         *)(*pcVar3)();
              return pTVar10;
            }
            pFVar14 = local_50.AllocatorInstance.Data + lVar15;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(pFVar14 + 8));
            iVar9 = (local_50.ArrayNum - uVar17) + -1;
            if (iVar9 != 0) {
              memmove(pFVar14,pFVar14 + 0x10,(longlong)iVar9 << 4);
            }
            iVar9 = local_50.ArrayNum + -1;
            local_50.ArrayNum = iVar9;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&local_50.AllocatorInstance,iVar9,&local_50.ArrayMax);
            goto LAB_142e833af;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
LAB_142e833af:
        lVar15 = lVar15 + -0x10;
        uVar17 = uVar17 - 1;
      } while (-1 < (int)uVar17);
    }
    if ((local_50.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *)
                (*pcVar3)();
      return pTVar10;
    }
    local_res20 = (TReferenceControllerBase<1> *)0x0;
    lVar15 = *(longlong *)local_50.AllocatorInstance.Data;
    local_58 = *(TReferenceControllerBase<1> **)(lVar15 + 0x60);
    if (local_58 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = local_58->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          local_58 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_142e8343a;
        }
        LOCK();
        aVar8 = local_58->SharedReferenceCount;
        bVar5 = aVar4 == aVar8;
        if (bVar5) {
          local_58->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar8 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar8;
      } while (!bVar5);
      local_res20 = *(TReferenceControllerBase<1> **)(lVar15 + 0x58);
    }
LAB_142e8343a:
    uVar17 = local_50.ArrayNum - 1;
    if (-1 < (int)uVar17) {
      lVar15 = (longlong)(int)uVar17 << 4;
      do {
        uVar7 = uVar6;
        if ((int)uVar17 < local_50.ArrayNum) {
          uVar7 = ~uVar17 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar10 = (TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *)
                    (*pcVar3)();
          return pTVar10;
        }
        lVar1 = *(longlong *)(local_50.AllocatorInstance.Data + lVar15);
        pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x60);
        pTVar13 = pTVar2;
        pTVar16 = pTVar18;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          aVar4 = pTVar2->SharedReferenceCount;
          do {
            pTVar13 = pTVar18;
            if (aVar4 == (atomic<int>)0x0) goto LAB_142e834d7;
            LOCK();
            aVar8 = pTVar2->SharedReferenceCount;
            bVar5 = aVar4 == aVar8;
            if (bVar5) {
              pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
              aVar8 = aVar4;
            }
            UNLOCK();
            aVar4 = aVar8;
          } while (!bVar5);
          pTVar13 = pTVar2;
          pTVar16 = *(TReferenceControllerBase<1> **)(lVar1 + 0x58);
        }
LAB_142e834d7:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        if (pTVar16 != local_res20) {
          uVar7 = uVar6;
          if ((int)uVar17 < local_50.ArrayNum) {
            uVar7 = ~uVar17 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar10 = (TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *)
                      (*pcVar3)();
            return pTVar10;
          }
          pFVar14 = local_50.AllocatorInstance.Data + lVar15;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(pFVar14 + 8));
          iVar9 = (local_50.ArrayNum - uVar17) + -1;
          if (iVar9 != 0) {
            memmove(pFVar14,pFVar14 + 0x10,(longlong)iVar9 << 4);
          }
          iVar9 = local_50.ArrayNum + -1;
          local_50.ArrayNum = iVar9;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&local_50.AllocatorInstance,iVar9,&local_50.ArrayMax);
        }
        lVar15 = lVar15 + -0x10;
        uVar17 = uVar17 - 1;
      } while (-1 < (int)uVar17);
    }
    FVar11.Data = local_50.AllocatorInstance.Data;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->AllocatorInstance).Data = FVar11.Data;
    __return_storage_ptr__->ArrayNum = local_50.ArrayNum;
    __return_storage_ptr__->ArrayMax = local_50.ArrayMax;
    local_50.ArrayNum = 0;
    local_50.ArrayMax = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
              ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_50.AllocatorInstance.Data,
               local_50.ArrayNum);
    if ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_50.AllocatorInstance.Data !=
        (TSharedRef<FWidgetReflectorNodeBase,1> *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
    iVar9 = param_1->ArrayNum;
    pTVar12 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(param_1->AllocatorInstance).Data;
  }
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar12,iVar9);
  pFVar14 = (param_1->AllocatorInstance).Data;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  return __return_storage_ptr__;
}

// GenerateToolTipForReflectorNode @ 142e905c0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IToolTip,1> * __thiscall
WidgetReflectorImpl::SWidgetReflector::GenerateToolTipForReflectorNode
          (SWidgetReflector *this,TSharedPtr<IToolTip,1> *__return_storage_ptr__,
          TWeakPtr<FWidgetReflectorNodeBase,1> *param_1)

{
  atomic<int> *paVar1;
  byte *pbVar2;
  atomic<int> aVar3;
  code *pcVar4;
  FWidgetReflectorNodeBase *pFVar5;
  SToolTip *pSVar6;
  FSharedReferencer<1> FVar7;
  SReflectorToolTipWidget *pSVar8;
  FSharedReferencer<1> FVar9;
  char cVar10;
  byte bVar11;
  atomic<int> aVar12;
  FSlateApplication *pFVar13;
  FText *pFVar14;
  undefined8 *puVar15;
  FArguments *pFVar16;
  FArguments *pFVar17;
  TSharedPtr<IToolTip,1> *pTVar18;
  IToolTip *pIVar19;
  TReferenceControllerBase<1> *pTVar20;
  bool bVar21;
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_628 [4];
  FLLMScope local_624;
  FLLMScope local_620 [2];
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> local_618;
  TSlateDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs> local_600;
  FName local_5e8;
  FMemScope local_5e0;
  FName local_5d8;
  FMemScope local_5d0;
  FWidgetReflectorNodeBase *local_5c8;
  TReferenceControllerBase<1> *pTStack_5c0;
  SWidget *local_5b8;
  TReferenceControllerBase<1> *pTStack_5b0;
  undefined1 local_5a8 [8];
  TReferenceControllerBase<1> *local_5a0;
  FText local_598;
  undefined1 local_588 [528];
  undefined1 local_378 [32];
  FSharedReferencer<1> local_358;
  FSharedReferencer<1> local_318;
  undefined1 local_2e8 [48];
  undefined1 local_2b8 [40];
  undefined1 local_290 [32];
  undefined1 local_270 [24];
  undefined1 local_258 [24];
  FArguments local_240;
  
  pTVar20 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar20->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar20 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142e9061c;
      }
      LOCK();
      aVar12 = pTVar20->SharedReferenceCount;
      bVar21 = aVar3 == aVar12;
      if (bVar21) {
        pTVar20->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar12 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar12;
    } while (!bVar21);
    pFVar5 = param_1->Object;
    if (pFVar5 != (FWidgetReflectorNodeBase *)0x0) {
      pFVar16 = SToolTip::FArguments::FArguments((FArguments *)local_588);
      pFVar17 = SReflectorToolTipWidget::FArguments::FArguments(&local_240);
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
      local_5c8 = (pFVar17->_WidgetInfoToVisualize).Object;
      pTStack_5c0 = (pFVar17->_WidgetInfoToVisualize).SharedReferenceCount.ReferenceController;
      (pFVar17->_WidgetInfoToVisualize).Object = pFVar5;
      (pFVar17->_WidgetInfoToVisualize).SharedReferenceCount.ReferenceController = pTVar20;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_5c0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
      FLLMScope::FLLMScope(&local_624,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
      ;
      local_5e8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_5e0,&local_5e8,true);
      TSlateDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SReflectorToolTipWidget,RequiredArgs::T0RequiredArgs>
                (&local_600,"SReflectorToolTipWidget",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                 ,0x57b,local_res20);
      FMemScope::~FMemScope(&local_5e0);
      FLLMScope::~FLLMScope(&local_624);
      pSVar8 = local_600._Widget.Object;
      if ((local_600._Widget.Object == (SReflectorToolTipWidget *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar4 = (code *)swi(3);
        pTVar18 = (TSharedPtr<IToolTip,1> *)(*pcVar4)();
        return pTVar18;
      }
      SWidget::SWidgetConstruct((SWidget *)local_600._Widget.Object,(FSlateBaseNamedArgs *)pFVar17);
      SReflectorToolTipWidget::Construct(local_600._Widget.Object,pFVar17);
      if ((local_600._Widget.Object == (SReflectorToolTipWidget *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar4 = (code *)swi(3);
        pTVar18 = (TSharedPtr<IToolTip,1> *)(*pcVar4)();
        return pTVar18;
      }
      if (((local_600._Widget.Object)->_padding_ & 0x10) == 0) {
        cVar10 = (**(code **)((local_600._Widget.Object)->_padding_ + 0x228))
                           (local_600._Widget.Object);
        bVar11 = 0;
        if (cVar10 != '\0') goto LAB_142e9083f;
      }
      else {
LAB_142e9083f:
        bVar11 = 0x20;
      }
      *(byte *)&(local_600._Widget.Object)->_padding_ =
           (byte)(local_600._Widget.Object)->_padding_ & 0xdf;
      *(byte *)&(local_600._Widget.Object)->_padding_ =
           (byte)(local_600._Widget.Object)->_padding_ | bVar11;
      if ((local_600._Widget.Object == (SReflectorToolTipWidget *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar4 = (code *)swi(3);
        pTVar18 = (TSharedPtr<IToolTip,1> *)(*pcVar4)();
        return pTVar18;
      }
      pbVar2 = (byte *)((longlong)&(local_600._Widget.Object)->_padding_ + 1);
      *pbVar2 = *pbVar2 | 4;
      if ((local_600._Widget.Object == (SReflectorToolTipWidget *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar21)) {
        pcVar4 = (code *)swi(3);
        pTVar18 = (TSharedPtr<IToolTip,1> *)(*pcVar4)();
        return pTVar18;
      }
      FVar9.ReferenceController = local_600._Widget.SharedReferenceCount.ReferenceController;
      local_600._Widget.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_600._Widget.Object = (SReflectorToolTipWidget *)0x0;
      if ((pSVar8 == (SReflectorToolTipWidget *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar21)) {
        pcVar4 = (code *)swi(3);
        pTVar18 = (TSharedPtr<IToolTip,1> *)(*pcVar4)();
        return pTVar18;
      }
      if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar9.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (FVar9.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_5b8 = (pFVar16->_Content).Widget.Object;
      pTStack_5b0 = (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController;
      (pFVar16->_Content).Widget.Object = (SWidget *)pSVar8;
      (pFVar16->_Content).Widget.SharedReferenceCount.ReferenceController =
           FVar9.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_5b0);
      FLLMScope::FLLMScope(local_620,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_5d8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_5d0,&local_5d8,true);
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>
                (&local_618,"SToolTip",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                 ,0x579,local_628);
      FMemScope::~FMemScope(&local_5d0);
      FLLMScope::~FLLMScope(local_620);
      pSVar6 = local_618._Widget.Object;
      if ((local_618._Widget.Object == (SToolTip *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar4 = (code *)swi(3);
        pTVar18 = (TSharedPtr<IToolTip,1> *)(*pcVar4)();
        return pTVar18;
      }
      SWidget::SWidgetConstruct((SWidget *)local_618._Widget.Object,(FSlateBaseNamedArgs *)pFVar16);
      SToolTip::Construct(local_618._Widget.Object,pFVar16);
      if ((local_618._Widget.Object == (SToolTip *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar4 = (code *)swi(3);
        pTVar18 = (TSharedPtr<IToolTip,1> *)(*pcVar4)();
        return pTVar18;
      }
      if (((local_618._Widget.Object)->_padding_ & 0x10) == 0) {
        cVar10 = (**(code **)((local_618._Widget.Object)->_padding_ + 0x228))
                           (local_618._Widget.Object);
        bVar11 = 0;
        if (cVar10 != '\0') goto LAB_142e90a23;
      }
      else {
LAB_142e90a23:
        bVar11 = 0x20;
      }
      *(byte *)&(local_618._Widget.Object)->_padding_ =
           (byte)(local_618._Widget.Object)->_padding_ & 0xdf;
      *(byte *)&(local_618._Widget.Object)->_padding_ =
           (byte)(local_618._Widget.Object)->_padding_ | bVar11;
      if ((local_618._Widget.Object == (SToolTip *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar4 = (code *)swi(3);
        pTVar18 = (TSharedPtr<IToolTip,1> *)(*pcVar4)();
        return pTVar18;
      }
      pbVar2 = (byte *)((longlong)&(local_618._Widget.Object)->_padding_ + 1);
      *pbVar2 = *pbVar2 | 4;
      if ((local_618._Widget.Object == (SToolTip *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar21)) {
        pcVar4 = (code *)swi(3);
        pTVar18 = (TSharedPtr<IToolTip,1> *)(*pcVar4)();
        return pTVar18;
      }
      FVar7.ReferenceController = local_618._Widget.SharedReferenceCount.ReferenceController;
      local_618._Widget.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_618._Widget.Object = (SToolTip *)0x0;
      if ((pSVar6 == (SToolTip *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar21)) {
        pcVar4 = (code *)swi(3);
        pTVar18 = (TSharedPtr<IToolTip,1> *)(*pcVar4)();
        return pTVar18;
      }
      pIVar19 = (IToolTip *)&pSVar6->_padding_;
      if (pSVar6 == (SToolTip *)0x0) {
        pIVar19 = (IToolTip *)0x0;
      }
      __return_storage_ptr__->Object = pIVar19;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar7.ReferenceController
      ;
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar9.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar9.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_600._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_240._WidgetInfoToVisualize.SharedReferenceCount.ReferenceController);
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_240);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_258);
      if ((void *)local_258._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_258._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_258);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_270);
      if ((void *)local_270._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_270._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_270);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_290);
      if ((void *)local_290._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_290._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_290);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2b8);
      if ((void *)local_2b8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_2b8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_2b8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e8);
      if ((void *)local_2e8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_2e8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_2e8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_318.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_358.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_378);
      if ((void *)local_378._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_378._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_378);
      if ((ITextData *)local_588._504_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_588._504_8_ + 0x10))();
      }
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_588);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
      pTVar20 = (param_1->WeakReferenceCount).ReferenceController;
      goto LAB_142e90692;
    }
  }
LAB_142e9061c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  pFVar13 = FSlateApplication::Get();
  pcVar4 = *(code **)(*(longlong *)pFVar13 + 0x128);
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_598,L"SWidgetReflector",L"MissingNode",L"The node is invalid.");
  puVar15 = (undefined8 *)(*pcVar4)(pFVar13,local_5a8,pFVar14);
  __return_storage_ptr__->Object = (IToolTip *)*puVar15;
  pTVar20 = (TReferenceControllerBase<1> *)puVar15[1];
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar20;
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_5a0);
  if (local_598.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_598.TextData.Reference + 0x10))();
  }
  pTVar20 = (param_1->WeakReferenceCount).ReferenceController;
LAB_142e90692:
  if (pTVar20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar20->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar20->_padding_ + 8))(pTVar20,1);
    }
  }
  return __return_storage_ptr__;
}

// GetSelectedSnapshotTargetDisplayName @ 142ea7b20

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
WidgetReflectorImpl::SWidgetReflector::GetSelectedSnapshotTargetDisplayName
          (SWidgetReflector *this,FText *__return_storage_ptr__)

{
  SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar1;
  FWidgetSnapshotTarget *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  ITextData *pIVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  pSVar1 = (this->AvailableSnapshotTargetsComboBox).Object;
  if (pSVar1 != (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    pFVar2 = (pSVar1->SelectedItem).Object;
    pTVar3 = (pSVar1->SelectedItem).SharedReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 != (FWidgetSnapshotTarget *)0x0) {
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar4 = (pFVar2->DisplayName).TextData.Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
      }
      __return_storage_ptr__->Flags = (pFVar2->DisplayName).Flags;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  pFVar5 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar4 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// HandleAvailableSnapshotComboSelectionChanged @ 142eadc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleAvailableSnapshotComboSelectionChanged
          (SWidgetReflector *this,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *param_1,
          Type param_2)

{
  FWidgetSnapshotTarget *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  pFVar1 = param_1->Object;
  if (pFVar1 != (FWidgetSnapshotTarget *)0x0) {
    uVar2 = (pFVar1->InstanceId).B;
    uVar3 = (pFVar1->InstanceId).C;
    uVar4 = (pFVar1->InstanceId).D;
    (this->SelectedSnapshotTargetInstanceId).A = (pFVar1->InstanceId).A;
    (this->SelectedSnapshotTargetInstanceId).B = uVar2;
    (this->SelectedSnapshotTargetInstanceId).C = uVar3;
    (this->SelectedSnapshotTargetInstanceId).D = uVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  (this->SelectedSnapshotTargetInstanceId).A = 0;
  (this->SelectedSnapshotTargetInstanceId).B = 0;
  (this->SelectedSnapshotTargetInstanceId).C = 0;
  (this->SelectedSnapshotTargetInstanceId).D = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleBreadcrumbDelimiterMenu @ 142eadf10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleBreadcrumbDelimiterMenu
          (SWidgetReflector *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<FWidgetReflectorNodeBase,1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  ISlateStyle *pIVar17;
  TSharedRef<SWidget,1> *pTVar18;
  FString *pFVar19;
  FText *pFVar20;
  undefined8 *puVar21;
  ulong64 uVar22;
  FUIAction *pFVar23;
  FSlateIcon *pFVar24;
  FText *pFVar25;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar26;
  ITextData *pIVar27;
  uint local_res18;
  ForAnyElementType local_448;
  int local_440;
  int local_43c;
  ForAnyElementType local_438;
  int local_430;
  int local_42c;
  longlong local_428;
  undefined8 local_420;
  ITextData *local_418;
  TReferenceControllerBase<1> *local_410;
  FName local_408;
  FName local_400;
  undefined1 local_3f8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3e0;
  ForAnyElementType FStack_3d8;
  ulonglong local_3d0;
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [8];
  void *pvStack_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8 [8];
  FDelegateAllocation local_3a0;
  undefined1 local_390 [24];
  undefined1 local_378 [8];
  void *pvStack_370;
  undefined8 local_368;
  undefined1 local_360 [4];
  undefined1 local_35c [4];
  undefined1 local_358 [4];
  undefined1 local_354 [4];
  SWidget *local_350;
  TReferenceControllerBase<1> *local_348;
  FText local_340;
  code *local_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  SWidget *local_320;
  TReferenceControllerBase<1> *local_318;
  undefined1 local_310 [24];
  undefined1 local_2f8 [8];
  void *pvStack_2f0;
  undefined8 local_2e8;
  TSharedRef<SWidget,1> local_2e0;
  FDestructionSentinel local_2d0;
  FDestructionSentinel local_2b8;
  FDelegateAllocation *local_2a0;
  TSharedPtr<FExtender,1> local_298;
  TSharedPtr<FUICommandList_const_,1> local_288;
  FText local_278;
  FString local_268;
  undefined1 local_258 [24];
  undefined1 local_240 [24];
  undefined1 local_228 [24];
  undefined1 local_210 [32];
  FSlateIcon local_1f0;
  FMenuBuilder local_1d0;
  
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  local_420 = 0;
  pIVar17 = FAppStyle::Get();
  local_298.Object = (FExtender *)0x0;
  local_298.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_288.Object = (FUICommandList *)0x0;
  local_288.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMenuBuilder::FMenuBuilder
            (&local_1d0,true,&local_288,&local_298,false,pIVar17,true,(FName)0x0,true);
  local_438.Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->Object->ChildNodes).ArrayNum;
  pTVar26 = (TSharedRef<FWidgetReflectorNodeBase,1> *)
            (param_1->Object->ChildNodes).AllocatorInstance.Data;
  local_430 = iVar2;
  if (iVar2 == 0) {
    local_42c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,&local_438,iVar2,&local_42c);
    ConstructItems<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<FWidgetReflectorNodeBase,1>,int>
              (local_438.Data,pTVar26,iVar2);
  }
  uVar13 = local_2e0.SharedReferenceCount.ReferenceController._4_4_;
  local_res18 = 0;
  if (0 < local_430) {
    local_428 = 0;
    do {
      lVar12 = local_428;
      uVar15 = 0;
      if ((int)local_res18 < local_430) {
        uVar15 = ~local_res18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        pTVar18 = (TSharedRef<SWidget,1> *)(*pcVar4)();
        return pTVar18;
      }
      (**(code **)(**(longlong **)(local_438.Data + lVar12) + 0x10))
                (*(longlong **)(local_438.Data + lVar12),&local_320);
      pTVar3 = local_318;
      if (local_318 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_318->SharedReferenceCount = (atomic<int>)((int)local_318->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_320 == (SWidget *)0x0) {
        bVar5 = true;
        pFVar25 = FText::GetEmpty();
        pIVar27 = (pFVar25->TextData).Reference;
        local_418 = pIVar27;
        local_340.TextData.Reference = pIVar27;
        if (pIVar27 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar27 + 8))(pIVar27,local_360);
        }
        pFVar20 = &local_340;
        local_340.Flags = pFVar25->Flags;
      }
      else {
        bVar7 = true;
        bVar6 = true;
        pFVar19 = SWidget::GetTypeAsString(local_320,&local_268);
        pFVar20 = FText::FromString(&local_278,pFVar19);
        pIVar27 = (pFVar20->TextData).Reference;
        local_418 = pIVar27;
      }
      if (pIVar27 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar27 + 8))(pIVar27,local_35c);
      }
      uVar15 = pFVar20->Flags;
      if ((bVar5) && (bVar5 = false, local_340.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_340.TextData.Reference + 0x10))();
      }
      if ((bVar6) && (bVar6 = false, local_278.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
      }
      if ((bVar7) &&
         (bVar7 = false, local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      local_448.Data = (FScriptContainerElement *)0x0;
      local_43c = 0;
      uVar16 = 0;
      if ((int)local_res18 < local_430) {
        uVar16 = ~local_res18 >> 0x1f;
      }
      local_440 = 0;
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        pTVar18 = (TSharedRef<SWidget,1> *)(*pcVar4)();
        return pTVar18;
      }
      pTVar26 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(local_438.Data + local_428);
      if (((local_448.Data <= pTVar26) &&
          (pTVar26 < (TSharedRef<FWidgetReflectorNodeBase,1> *)
                     (local_448.Data + (longlong)local_43c * 0x10))) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar4 = (code *)swi(3);
        pTVar18 = (TSharedRef<SWidget,1> *)(*pcVar4)();
        return pTVar18;
      }
      if (local_440 == local_43c) {
        local_440 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_448,&local_43c);
      }
      *(FWidgetReflectorNodeBase **)&local_448.Data[(longlong)local_440 * 0x10].field_0x0 =
           pTVar26->Object;
      pTVar3 = (pTVar26->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(local_448.Data + (longlong)local_440 * 0x10 + 8) = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3c8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
      local_3c8[1] = false;
      local_3b0 = 0;
      local_3c0 = (undefined1  [8])0x0;
      pvStack_3b8 = (void *)0x0;
      local_440 = local_440 + 1;
      FText::FText((FText *)local_310);
      local_310[0x10] = false;
      local_2e8 = 0;
      local_408.ComparisonIndex.Value = 0;
      local_408.Number = 0;
      local_2f8 = (undefined1  [8])0x0;
      pvStack_2f0 = (void *)0x0;
      local_400.ComparisonIndex.Value = 0;
      local_400.Number = 0;
      local_3a8 = (undefined1  [8])0x0;
      local_3a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_3a0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a8,
                 (FWriteAccessScope *)&local_2b8);
      local_2a0 = &local_3a0;
      puVar21 = UE::Core::Private::DelegateAllocate(0x40,&local_3a0);
      if (puVar21 != (undefined8 *)0x0) {
        local_330 = SetNodesAsReflectorTreeRoot;
        uStack_328 = 0;
        uStack_324 = uVar13;
        pTVar18 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_2e0);
        iVar2 = local_440;
        FVar11.Data = local_448.Data;
        local_350 = pTVar18->Object;
        pTVar3 = (pTVar18->SharedReferenceCount).ReferenceController;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar10 = true;
        bVar9 = true;
        bVar8 = true;
        *puVar21 = &
                   ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TArray_V__TSharedRef_VFWidgetReflectorNodeBase___00__V__TSizedDefaultAllocator__0CA_______6B_
        ;
        pFVar1 = (ForAnyElementType *)(puVar21 + 1);
        pFVar1->Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar21 + 2) = local_440;
        local_410 = pTVar3;
        local_348 = pTVar3;
        if (local_440 == 0) {
          *(int *)((longlong)puVar21 + 0x14) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,local_440,0,pFVar1,local_440,(int *)((longlong)puVar21 + 0x14));
          ConstructItems<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<FWidgetReflectorNodeBase,1>,int>
                    (pFVar1->Data,(TSharedRef<FWidgetReflectorNodeBase,1> *)FVar11.Data,iVar2);
        }
        uVar22 = FDelegateHandle::GenerateNewID();
        puVar21[3] = uVar22;
        *puVar21 = &
                   ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetReflector_WidgetReflectorImpl___00__A6AXXZUFDefaultDelegateUserPolicy__V__TArray_V__TSharedRef_VFWidgetReflectorNodeBase___00__V__TSizedDefaultAllocator__0CA_______6B_
        ;
        puVar21[4] = local_350;
        puVar21[5] = pTVar3;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
          UNLOCK();
        }
        puVar21[6] = local_330;
        puVar21[7] = CONCAT44(uStack_324,uStack_328);
        pIVar27 = local_418;
      }
      if (bVar8) {
        bVar8 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_410);
      }
      if (bVar9) {
        bVar9 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_348);
      }
      if (bVar10) {
        bVar10 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   CONCAT44(local_2e0.SharedReferenceCount.ReferenceController._4_4_,
                            local_2e0.SharedReferenceCount.ReferenceController._0_4_));
      }
      if (local_2b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b8.Accessor,&local_2b8);
      }
      pFVar23 = FUIAction::FUIAction
                          ((FUIAction *)local_258,
                           (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_3a8,
                           RepeatDisabled);
      pFVar24 = FSlateIcon::FSlateIcon(&local_1f0);
      pFVar25 = FText::GetEmpty();
      local_390._0_8_ = (pFVar25->TextData).Reference;
      if ((ITextData *)local_390._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_390._0_8_ + 8))(local_390._0_8_,local_358);
      }
      local_390._8_4_ = pFVar25->Flags;
      local_368 = 0;
      local_390[0x10] = true;
      local_378 = (undefined1  [8])0x0;
      pvStack_370 = (void *)0x0;
      local_3f8._0_8_ = pIVar27;
      if (pIVar27 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar27 + 8))(pIVar27,local_354);
      }
      local_3f8[0x10] = true;
      local_3e0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_3d8.Data = (FScriptContainerElement *)0x0;
      local_3d0 = 0;
      local_3f8._8_4_ = uVar15;
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)&local_1d0,(TAttribute<FText> *)local_3f8,
                 (TAttribute<FText> *)local_390,pFVar24,pFVar23,local_400,Button,local_408,
                 (TAttribute<FText> *)local_310,(TAttribute<EVisibility> *)local_3c8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_3e0,(FWriteAccessScope *)&local_2d0);
      if (((int)local_3d0 != 0) && (FStack_3d8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_3d8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3d8,0,0,0x10);
        local_3d0 = local_3d0 & 0xffffffff00000000;
      }
      if (local_2d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d0.Accessor,&local_2d0);
      }
      if (FStack_3d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_3d8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3e0.AccessDetector);
      if ((ITextData *)local_3f8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_3f8._0_8_ + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_378);
      if (pvStack_370 != (void *)0x0) {
        FMemory::Free(pvStack_370);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_378);
      if ((ITextData *)local_390._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_390._0_8_ + 0x10))();
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
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f8);
      if (pvStack_2f0 != (void *)0x0) {
        FMemory::Free(pvStack_2f0);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_2f8);
      if ((ITextData *)local_310._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_310._0_8_ + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c0);
      if (pvStack_3b8 != (void *)0x0) {
        FMemory::Free(pvStack_3b8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_3c0);
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
                ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_448.Data,local_440);
      if ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_448.Data !=
          (TSharedRef<FWidgetReflectorNodeBase,1> *)0x0) {
        FMemory::Free(local_448.Data);
      }
      if (pIVar27 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar27 + 0x10))(pIVar27);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_318)
      ;
      local_res18 = local_res18 + 1;
      local_428 = local_428 + 0x10;
    } while ((int)local_res18 < local_430);
  }
  FMenuBuilder::MakeWidget
            (&local_1d0,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_438.Data,local_430);
  if ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_438.Data !=
      (TSharedRef<FWidgetReflectorNodeBase,1> *)0x0) {
    FMemory::Free(local_438.Data);
  }
  FMenuBuilder::~FMenuBuilder(&local_1d0);
  return __return_storage_ptr__;
}

// HandleBreadcrumbOnClick @ 142eae800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleBreadcrumbOnClick
          (SWidgetReflector *this,TSharedRef<FWidgetReflectorNodeBase,1> *param_1)

{
  int *piVar1;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TSharedRef<FWidgetReflectorNodeBase,1> local_18;
  
  pTVar2 = &this->FilteredTreeRoot;
  piVar1 = &(this->FilteredTreeRoot).ArrayMax;
  iVar7 = (this->FilteredTreeRoot).ArrayNum;
  pTVar3 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(pTVar2->AllocatorInstance).Data;
  if ((this->FilteredTreeRoot).ArrayMax < 0) {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar7);
    (this->FilteredTreeRoot).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar7);
    (this->FilteredTreeRoot).ArrayNum = 0;
  }
  pTVar3 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + *piVar1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->FilteredTreeRoot).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->FilteredTreeRoot).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
  *(FWidgetReflectorNodeBase **)pFVar8 = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this->BreadCrumb).Object == (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0)
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::PopCrumb
            ((this->BreadCrumb).Object,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((this->ReflectorTree).Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142eae9a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->ReflectorTree).Object + 0x248))();
  return;
}

// HandleDisplayFontAtlases @ 142eaf060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleDisplayFontAtlases(SWidgetReflector *this)

{
  FName FVar1;
  FModuleManager *this_00;
  IModuleInterface *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&SlateReflectorModuleName,"SlateReflector");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar1 = SlateReflectorModuleName;
  this_00 = FModuleManager::Get();
  pIVar2 = FModuleManager::LoadModuleChecked(this_00,FVar1);
                    /* WARNING: Could not recover jumptable at 0x000142eaf0af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,*(code **)((longlong)*pIVar2 + 0x50));
  return;
}

// HandleDisplayTextureAtlases @ 142eaf0f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleDisplayTextureAtlases(SWidgetReflector *this)

{
  FName FVar1;
  FModuleManager *this_00;
  IModuleInterface *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&SlateReflectorModuleName,"SlateReflector");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar1 = SlateReflectorModuleName;
  this_00 = FModuleManager::Get();
  pIVar2 = FModuleManager::LoadModuleChecked(this_00,FVar1);
                    /* WARNING: Could not recover jumptable at 0x000142eaf13f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,*(code **)((longlong)*pIVar2 + 0x48));
  return;
}

// HandleGenerateAvailableSnapshotComboItemWidget @ 142eaffa0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleGenerateAvailableSnapshotComboItemWidget
          (SWidgetReflector *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *param_1)

{
  FWidgetSnapshotTarget *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FArguments *pFVar5;
  TSharedRef<SWidget,1> *pTVar6;
  TSharedRef<STextBlock,1> *pTVar7;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  undefined1 local_res20 [8];
  FText local_608;
  bool local_5f8;
  undefined1 local_5f0 [8];
  ForAnyElementType FStack_5e8;
  ulonglong local_5e0;
  FName local_5d8;
  FMemScope local_5d0;
  FDestructionSentinel local_5c8;
  TSharedRef<STextBlock,1> local_5b0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5a0;
  FArguments local_588;
  
  pFVar5 = STextBlock::FArguments::FArguments(&local_588);
  if (param_1->Object == (FWidgetSnapshotTarget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar1 = param_1->Object;
  local_608.TextData.Reference = (pFVar1->DisplayName).TextData.Reference;
  if (local_608.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_608.TextData.Reference + 8))
              (local_608.TextData.Reference,local_res20);
  }
  local_608.Flags = (pFVar1->DisplayName).Flags;
  local_5f8 = true;
  local_5e0 = 0;
  local_5f0 = (undefined1  [8])0x0;
  FStack_5e8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar5->_Text).Value,&local_608);
  (pFVar5->_Text).bIsSet = local_5f8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5f0,
             (FWriteAccessScope *)&local_5c8);
  if (((int)local_5e0 != 0) && (FStack_5e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5e8,0,0,0x10);
    local_5e0 = local_5e0 & 0xffffffff00000000;
  }
  if (local_5c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5c8.Accessor,&local_5c8);
  }
  if (FStack_5e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5f0);
  if (local_608.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_608.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_5d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_5d0,&local_5d8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_5a0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x7da,local_res10);
  FMemScope::~FMemScope(&local_5d0);
  FLLMScope::~FLLMScope(local_res18);
  pTVar7 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_5a0,&local_5b0,pFVar5);
  __return_storage_ptr__->Object = (SWidget *)pTVar7->Object;
  pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a0._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_588);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// HandleGetPickingButtonChecked @ 142eb0230

/* WARNING: Enum "Type": Some values do not have unique names */

ECheckBoxState __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleGetPickingButtonChecked(SWidgetReflector *this)

{
  return this->PickingMode != None;
}

// HandleGetPickingModeImage @ 142eb0250

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateIcon * __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleGetPickingModeImage
          (SWidgetReflector *this,FSlateIcon *__return_storage_ptr__)

{
  EWidgetPickingMode EVar1;
  FName *pFVar2;
  FName FVar3;
  FName local_res20;
  
  EVar1 = this->LastPickingMode;
  if ((EVar1 == None) ||
     (((FVar3 = WidgetReflectorIcon::FocusPicking, EVar1 != Focus &&
       (FVar3 = WidgetReflectorIcon::HitTestPicking, EVar1 != HitTesting)) &&
      (FVar3 = WidgetReflectorIcon::VisualPicking, EVar1 != Drawable)))) {
    pFVar2 = ::FName::FName(&local_res20,"Icon.Empty");
    FVar3 = *pFVar2;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&StyleSetName,L"WidgetReflectorStyleStyle");
    _Init_thread_footer(&::_TSS0);
  }
  FSlateIcon::FSlateIcon(__return_storage_ptr__,StyleSetName,FVar3,(FName)0x0,(FName)0x0);
  return __return_storage_ptr__;
}

// HandleGetPickingModeText @ 142eb0370

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleGetPickingModeText
          (SWidgetReflector *this,FText *__return_storage_ptr__)

{
  EWidgetPickingMode EVar1;
  TRefCountPtr<ITextData> TVar2;
  undefined1 local_res8 [32];
  
  if (this->PickingMode == None) {
    EVar1 = this->LastPickingMode;
    if (EVar1 == Focus) {
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      TVar2 = WidgetReflectorText::Focus.TextData;
      (__return_storage_ptr__->TextData).Reference = WidgetReflectorText::Focus.TextData.Reference;
      if (TVar2.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
      }
      __return_storage_ptr__->Flags = WidgetReflectorText::Focus.Flags;
      return __return_storage_ptr__;
    }
    if (EVar1 == HitTesting) {
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      TVar2 = WidgetReflectorText::HitTestPicking.TextData;
      (__return_storage_ptr__->TextData).Reference =
           WidgetReflectorText::HitTestPicking.TextData.Reference;
      if (TVar2.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
      }
      __return_storage_ptr__->Flags = WidgetReflectorText::HitTestPicking.Flags;
      return __return_storage_ptr__;
    }
    if (EVar1 == Drawable) {
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      TVar2 = WidgetReflectorText::VisualPicking.TextData;
      (__return_storage_ptr__->TextData).Reference =
           WidgetReflectorText::VisualPicking.TextData.Reference;
      if (TVar2.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
      }
      __return_storage_ptr__->Flags = WidgetReflectorText::VisualPicking.Flags;
      return __return_storage_ptr__;
    }
  }
  else if (this->PickingMode == Focus) {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    TVar2 = WidgetReflectorText::Focusing.TextData;
    (__return_storage_ptr__->TextData).Reference = WidgetReflectorText::Focusing.TextData.Reference;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
    }
    __return_storage_ptr__->Flags = WidgetReflectorText::Focusing.Flags;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  TVar2 = WidgetReflectorText::Picking.TextData;
  (__return_storage_ptr__->TextData).Reference = WidgetReflectorText::Picking.TextData.Reference;
  if (TVar2.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res8);
  }
  __return_storage_ptr__->Flags = WidgetReflectorText::Picking.Flags;
  return __return_storage_ptr__;
}

// HandleGetTakeSnapshotText @ 142eb04d0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleGetTakeSnapshotText
          (SWidgetReflector *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FText local_28;
  FText local_18;
  
  bVar1 = this->bIsPendingDelayedSnapshot;
  pwVar4 = L"Cancel Snapshot";
  pwVar3 = L"CancelSnapshotButtonText";
  pFVar2 = &local_18;
  if (bVar1 == false) {
    pwVar4 = L"Take Snapshot";
    pwVar3 = L"TakeSnapshotButtonText";
    pFVar2 = &local_28;
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText(pFVar2,L"SWidgetReflector",pwVar3,pwVar4);
  FText::FText(__return_storage_ptr__,pFVar2);
  if (((2U - (bVar1 != false) & 2) != 0) && (local_28.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if ((bVar1 != false) && (local_18.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// HandleHasPendingActions @ 142eb05b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleHasPendingActions(SWidgetReflector *this)

{
  return this->bIsPendingDelayedSnapshot == false;
}

// HandleIsBreadcrumbVisible @ 142eb0bc0

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleIsBreadcrumbVisible(SWidgetReflector *this)

{
  code *pcVar1;
  EVisibility EVar2;
  bool bVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  uchar *in_RDX;
  
  if ((this->BreadCrumb).Object == (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      TVar4.Value = (*pcVar1)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar4.Value;
    }
  }
  EVar2.Value.Value = EVisibility::Collapsed.Value.Value;
  if (0 < (((this->BreadCrumb).Object)->CrumbList).ArrayNum) {
    EVar2.Value.Value = EVisibility::Visible.Value.Value;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// HandleIsStartTreeWithUMGEnabled @ 142eb0cd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleIsStartTreeWithUMGEnabled(SWidgetReflector *this)

{
  return this->bFilterReflectorTreeRootWithUMG;
}

// HandlePickButtonClicked @ 142eb1ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandlePickButtonClicked
          (SWidgetReflector *this,EWidgetPickingMode param_1)

{
  EWidgetPickingMode EVar1;
  char cVar2;
  EWidgetPickingMode EVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  EVar1 = this->LastPickingMode;
  this->LastPickingMode = param_1;
  EVar3 = None;
  if (this->PickingMode != param_1) {
    EVar3 = param_1;
  }
  SetPickingMode(this,EVar3);
  cVar2 = (**(code **)(this->_padding_ + 0x20))();
  if (cVar2 != '\0') {
    SetUIMode(this,Live);
  }
  if (EVar1 != param_1) {
    pwVar5 = L"";
    pwVar4 = L"";
    if (GEditorPerProjectIni.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_18,pwVar4);
    FConfigCacheIni::SetArray
              (GConfig,L"WidgetReflector",L"HiddenReflectorTreeColumns",
               &this->HiddenReflectorTreeColumns,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (GEditorPerProjectIni.Data.ArrayNum != 0) {
      pwVar5 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_18,pwVar5);
    FConfigCacheIni::SetInt
              (GConfig,L"WidgetReflector",L"LastPickingMode",(uint)this->LastPickingMode,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// HandlePickingModeContextMenu @ 142eb1c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu
          (SWidgetReflector *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  EWidgetPickingMode EVar1;
  FName FVar2;
  ISlateStyle *pIVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
  FUIAction *pFVar7;
  FSlateIcon *pFVar8;
  FText *pFVar9;
  FName FVar10;
  int *piVar11;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  code *local_378;
  TReferenceControllerBase<1> *pTStack_370;
  bool local_368;
  FDelegateAllocation *local_360;
  undefined1 local_358 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_350;
  ForAnyElementType FStack_348;
  ulonglong local_340;
  undefined1 local_338 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_320;
  ForAnyElementType FStack_318;
  ulonglong local_310;
  undefined1 local_308 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f0;
  ForAnyElementType FStack_2e8;
  ulonglong local_2e0;
  undefined1 local_2d8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2c0;
  ForAnyElementType FStack_2b8;
  ulonglong local_2b0;
  undefined1 local_2a8 [8];
  FDelegateAllocation local_2a0;
  TSharedPtr<FUICommandList_const_,1> local_288;
  FMenuBuilder local_278;
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [32];
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_88;
  FSlateIcon local_70;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pIVar3 = FAppStyle::Get();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_378 = (code *)0x0;
  pTStack_370 = (TReferenceControllerBase<1> *)0x0;
  local_288.Object = (FUICommandList *)0x0;
  local_288.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)&local_278,Menu,true,&local_288,false,
             (TSharedPtr<FExtender,1> *)&local_378,pIVar3,(FName)0x0,(FName)0x0);
  local_278.CurrentSectionExtensionHook.ComparisonIndex.Value = 0;
  local_278.CurrentSectionExtensionHook.Number = 0;
  local_278._padding_ = (longlong)&___7FMenuBuilder__6B_;
  FText::FText(&local_278.CurrentSectionHeadingText);
  local_278.CurrentSectionVisibility.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_278.CurrentSectionVisibility.bIsSet = false;
  local_278.CurrentSectionVisibility.Getter._16_8_ = 0;
  local_278.CurrentSectionVisibility.Getter._0_8_ = 0;
  local_278.CurrentSectionVisibility.Getter._8_8_ = 0;
  memset(&local_278.CurrentSectionResizeParams,0,200);
  local_278.CurrentSectionResizeParams.Value.ClippingPriority.Value = 0;
  local_278.CurrentSectionResizeParams.Value.ClippingPriority.Getter._16_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.AllowClipping.Getter._16_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_278.CurrentSectionResizeParams.Getter._16_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.ClippingPriority.bIsSet = false;
  local_278.CurrentSectionResizeParams.Value.ClippingPriority.Getter._0_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.ClippingPriority.Getter._8_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.AllowClipping.Value = false;
  local_278.CurrentSectionResizeParams.Value.AllowClipping.bIsSet = false;
  local_278.CurrentSectionResizeParams.Value.AllowClipping.Getter._0_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.AllowClipping.Getter._8_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.VisibleInOverflow.Value = false;
  local_278.CurrentSectionResizeParams.Value.VisibleInOverflow.bIsSet = false;
  local_278.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.Wrapping.Allow.Value = false;
  local_278.CurrentSectionResizeParams.Value.Wrapping.Allow.bIsSet = false;
  local_278.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.Wrapping.Priority.Value = 0;
  local_278.CurrentSectionResizeParams.Value.Wrapping.Priority.bIsSet = false;
  local_278.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.Wrapping.Mode.Value = Preferred;
  local_278.CurrentSectionResizeParams.Value.Wrapping.Mode.bIsSet = false;
  local_278.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_278.CurrentSectionResizeParams.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_278.CurrentSectionResizeParams.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_278.CurrentSectionResizeParams.bIsSet = false;
  local_278.CurrentSectionResizeParams.Getter._0_8_ = 0;
  local_278.CurrentSectionResizeParams.Getter._8_8_ = 0;
  local_278.bSectionNeedsToBeApplied = false;
  local_278.bSearchable = true;
  local_278.bRecursivelySearchable = true;
  local_278.bIsEditing = false;
  FMenuBuilder::AddSearchWidget(&local_278);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  EVar1 = this->PickingMode;
  local_358[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_358[1] = false;
  local_340 = 0;
  local_350.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_348.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_2d8);
  local_2d8[0x10] = false;
  local_2b0 = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_2c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2b8.Data = (FScriptContainerElement *)0x0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_2a8 = (undefined1  [8])0x0;
  local_2a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a8,
             (FWriteAccessScope *)&local_378);
  local_360 = &local_2a0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_2a0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::`2'::<lambda_1>_>
               ::_vftable_;
    *(bool *)(puVar4 + 3) = EVar1 == Focus;
  }
  if (local_368 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_370,(FDestructionSentinel *)&local_378);
  }
  local_288.SharedReferenceCount.ReferenceController =
       local_288.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_288.Object = (FUICommandList *)HandlePickButtonClicked;
  local_378 = HandlePickButtonClicked;
  pTStack_370 = local_288.SharedReferenceCount.ReferenceController;
  local_res8.ComparisonIndex.Value._0_1_ = 1;
  pTVar6 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<WidgetReflectorImpl::SWidgetReflector,enum_WidgetReflectorImpl::EWidgetPickingMode>
                     (&local_88,this,(pmf_60356af4 *)&local_378,(EWidgetPickingMode *)&local_res8);
  pFVar7 = FUIAction::FUIAction
                     ((FUIAction *)local_f0,pTVar6,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_2a8,
                      RepeatDisabled);
  FVar2 = WidgetReflectorIcon::FocusPicking;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  if (*piVar11 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&StyleSetName,L"WidgetReflectorStyleStyle");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar8 = FSlateIcon::FSlateIcon(&local_70,StyleSetName,FVar2,local_res10,local_res8);
  pFVar9 = FText::GetEmpty();
  local_338._0_8_ = (pFVar9->TextData).Reference;
  if ((ITextData *)local_338._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_338._0_8_ + 8))(local_338._0_8_,&local_res8);
  }
  local_338._8_4_ = pFVar9->Flags;
  local_310 = 0;
  local_338[0x10] = true;
  local_308._0_8_ = WidgetReflectorText::Focus.TextData.Reference;
  local_320.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_318.Data = (FScriptContainerElement *)0x0;
  if (WidgetReflectorText::Focus.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*WidgetReflectorText::Focus.TextData.Reference + 8))
              (WidgetReflectorText::Focus.TextData.Reference,&local_res8);
  }
  local_308._8_4_ = WidgetReflectorText::Focus.Flags;
  local_308[0x10] = true;
  local_2e0 = 0;
  local_2f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_278,(TAttribute<FText> *)local_308,
             (TAttribute<FText> *)local_338,pFVar8,pFVar7,local_res20,Button,local_res18,
             (TAttribute<FText> *)local_2d8,(TAttribute<EVisibility> *)local_358);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2f0,(FWriteAccessScope *)&local_378);
  if (((int)local_2e0 != 0) && (FStack_2e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e8,0,0,0x10);
    local_2e0 = local_2e0 & 0xffffffff00000000;
  }
  if (local_368 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_370,(FDestructionSentinel *)&local_378);
  }
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f0.AccessDetector);
  if ((ITextData *)local_308._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_308._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_320,(FWriteAccessScope *)&local_378);
  if (((int)local_310 != 0) && (FStack_318.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_318.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_318,0,0,0x10);
    local_310 = local_310 & 0xffffffff00000000;
  }
  if (local_368 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_370,(FDestructionSentinel *)&local_378);
  }
  if (FStack_318.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_318.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_320.AccessDetector);
  if ((ITextData *)local_338._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_338._0_8_ + 0x10))();
  }
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d8);
  if ((void *)local_d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f0);
  if ((void *)local_f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2c0,(FWriteAccessScope *)&local_378);
  if (((int)local_2b0 != 0) && (FStack_2b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b8,0,0,0x10);
    local_2b0 = local_2b0 & 0xffffffff00000000;
  }
  if (local_368 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_370,(FDestructionSentinel *)&local_378);
  }
  if (FStack_2b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2c0.AccessDetector);
  if ((ITextData *)local_2d8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2d8._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_350,(FWriteAccessScope *)&local_378);
  if (((int)local_340 != 0) && (FStack_348.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_348.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_348,0,0,0x10);
    local_340 = local_340 & 0xffffffff00000000;
  }
  if (local_368 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_370,(FDestructionSentinel *)&local_378);
  }
  if (FStack_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_348.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_350.AccessDetector);
  EVar1 = this->PickingMode;
  local_358[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_358[1] = false;
  local_340 = 0;
  local_350.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_348.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_2d8);
  local_2d8[0x10] = false;
  local_2b0 = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_2c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2b8.Data = (FScriptContainerElement *)0x0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_2a8 = (undefined1  [8])0x0;
  local_2a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a8,
             (FWriteAccessScope *)&local_378);
  local_360 = &local_2a0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_2a0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::`2'::<lambda_2>_>
               ::_vftable_;
    *(bool *)(puVar4 + 3) = EVar1 == HitTesting;
  }
  if (local_368 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_370,(FDestructionSentinel *)&local_378);
  }
  local_288.SharedReferenceCount.ReferenceController =
       local_288.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_288.Object = (FUICommandList *)HandlePickButtonClicked;
  local_378 = HandlePickButtonClicked;
  pTStack_370 = local_288.SharedReferenceCount.ReferenceController;
  local_res8.ComparisonIndex.Value._0_1_ = 2;
  pTVar6 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<WidgetReflectorImpl::SWidgetReflector,enum_WidgetReflectorImpl::EWidgetPickingMode>
                     (&local_88,this,(pmf_60356af4 *)&local_378,(EWidgetPickingMode *)&local_res8);
  pFVar7 = FUIAction::FUIAction
                     ((FUIAction *)local_f0,pTVar6,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_2a8,
                      RepeatDisabled);
  FVar2 = WidgetReflectorIcon::HitTestPicking;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  if (*piVar11 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&StyleSetName,L"WidgetReflectorStyleStyle");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar8 = FSlateIcon::FSlateIcon(&local_70,StyleSetName,FVar2,local_res10,local_res8);
  pFVar9 = FText::GetEmpty();
  local_308._0_8_ = (pFVar9->TextData).Reference;
  if ((ITextData *)local_308._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_308._0_8_ + 8))(local_308._0_8_,&local_res8);
  }
  local_308._8_4_ = pFVar9->Flags;
  local_2e0 = 0;
  local_308[0x10] = true;
  local_338._0_8_ = WidgetReflectorText::HitTestPicking.TextData.Reference;
  local_2f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  if (WidgetReflectorText::HitTestPicking.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*WidgetReflectorText::HitTestPicking.TextData.Reference + 8))
              (WidgetReflectorText::HitTestPicking.TextData.Reference,&local_res8);
  }
  local_338._8_4_ = WidgetReflectorText::HitTestPicking.Flags;
  local_338[0x10] = true;
  local_310 = 0;
  local_320.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_318.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_278,(TAttribute<FText> *)local_338,
             (TAttribute<FText> *)local_308,pFVar8,pFVar7,local_res20,Button,local_res18,
             (TAttribute<FText> *)local_2d8,(TAttribute<EVisibility> *)local_358);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_320,(FWriteAccessScope *)&local_378);
  if (((int)local_310 != 0) && (FStack_318.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_318.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_318,0,0,0x10);
    local_310 = local_310 & 0xffffffff00000000;
  }
  if (local_368 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_370,(FDestructionSentinel *)&local_378);
  }
  if (FStack_318.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_318.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_320.AccessDetector);
  if ((ITextData *)local_338._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_338._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2f0,(FWriteAccessScope *)&local_378);
  if (((int)local_2e0 != 0) && (FStack_2e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e8,0,0,0x10);
    local_2e0 = local_2e0 & 0xffffffff00000000;
  }
  if (local_368 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_370,(FDestructionSentinel *)&local_378);
  }
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f0.AccessDetector);
  if ((ITextData *)local_308._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_308._0_8_ + 0x10))();
  }
  FUIAction::~FUIAction((FUIAction *)local_f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2c0,(FWriteAccessScope *)&local_378);
  if (((int)local_2b0 != 0) && (FStack_2b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b8,0,0,0x10);
    local_2b0 = local_2b0 & 0xffffffff00000000;
  }
  if (local_368 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_370,(FDestructionSentinel *)&local_378);
  }
  if (FStack_2b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2c0.AccessDetector);
  if ((ITextData *)local_2d8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2d8._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_350,(FWriteAccessScope *)&local_378);
  if (((int)local_340 != 0) && (FStack_348.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_348.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_348,0,0,0x10);
    local_340 = local_340 & 0xffffffff00000000;
  }
  if (local_368 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_370,(FDestructionSentinel *)&local_378);
  }
  if (FStack_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_348.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_350.AccessDetector);
  EVar1 = this->PickingMode;
  local_358[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_358[1] = false;
  local_340 = 0;
  local_350.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_348.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_308);
  local_308[0x10] = false;
  local_2e0 = 0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_2f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_2a8 = (undefined1  [8])0x0;
  local_2a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_2a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a8,
             (FWriteAccessScope *)&local_378);
  local_360 = &local_2a0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_2a0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandlePickingModeContextMenu'::`2'::<lambda_3>_>
               ::_vftable_;
    *(bool *)(puVar4 + 3) = EVar1 == Drawable;
  }
  if (local_368 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_370,(FDestructionSentinel *)&local_378);
  }
  pTStack_370 = (TReferenceControllerBase<1> *)((ulonglong)pTStack_370 & 0xffffffff00000000);
  local_378 = HandlePickButtonClicked;
  local_res8.ComparisonIndex.Value._0_1_ = 3;
  pTVar6 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<WidgetReflectorImpl::SWidgetReflector,enum_WidgetReflectorImpl::EWidgetPickingMode>
                     (&local_88,this,(pmf_60356af4 *)&local_378,(EWidgetPickingMode *)&local_res8);
  pFVar7 = FUIAction::FUIAction
                     ((FUIAction *)local_f0,pTVar6,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_2a8,
                      RepeatDisabled);
  FVar2 = WidgetReflectorIcon::VisualPicking;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FVar10 = FWidgetReflectorStyle::GetStyleSetName();
  pFVar8 = FSlateIcon::FSlateIcon(&local_70,*(FName *)FVar10,FVar2,(FName)0x0,(FName)0x0);
  pFVar9 = FText::GetEmpty();
  FText::FText((FText *)local_2d8,pFVar9);
  local_2b0 = 0;
  local_2d8[0x10] = true;
  local_338._0_8_ = WidgetReflectorText::VisualPicking.TextData.Reference;
  local_2c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2b8.Data = (FScriptContainerElement *)0x0;
  if (WidgetReflectorText::VisualPicking.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*WidgetReflectorText::VisualPicking.TextData.Reference + 8))
              (WidgetReflectorText::VisualPicking.TextData.Reference,&local_res8);
  }
  local_338._8_4_ = WidgetReflectorText::VisualPicking.Flags;
  local_338[0x10] = true;
  local_310 = 0;
  local_320.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_318.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_278,(TAttribute<FText> *)local_338,
             (TAttribute<FText> *)local_2d8,pFVar8,pFVar7,local_res20,Button,local_res18,
             (TAttribute<FText> *)local_308,(TAttribute<EVisibility> *)local_358);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_320,(FWriteAccessScope *)&local_378);
  if (((int)local_310 != 0) && (FStack_318.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_318.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_318,0,0,0x10);
    local_310 = local_310 & 0xffffffff00000000;
  }
  if (local_368 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_370,(FDestructionSentinel *)&local_378);
  }
  if (FStack_318.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_318.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_320.AccessDetector);
  if ((ITextData *)local_338._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_338._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2c0,(FWriteAccessScope *)&local_378);
  if (((int)local_2b0 != 0) && (FStack_2b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b8,0,0,0x10);
    local_2b0 = local_2b0 & 0xffffffff00000000;
  }
  if (local_368 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_370,(FDestructionSentinel *)&local_378);
  }
  if (FStack_2b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2c0.AccessDetector);
  if ((ITextData *)local_2d8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2d8._0_8_ + 0x10))();
  }
  FUIAction::~FUIAction((FUIAction *)local_f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2f0,(FWriteAccessScope *)&local_378);
  if (((int)local_2e0 != 0) && (FStack_2e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e8,0,0,0x10);
    local_2e0 = local_2e0 & 0xffffffff00000000;
  }
  if (local_368 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_370,(FDestructionSentinel *)&local_378);
  }
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f0.AccessDetector);
  if ((ITextData *)local_308._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_308._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_350,(FWriteAccessScope *)&local_378);
  if (((int)local_340 != 0) && (FStack_348.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_348.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_348,0,0,0x10);
    local_340 = local_340 & 0xffffffff00000000;
  }
  if (local_368 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_370,(FDestructionSentinel *)&local_378);
  }
  if (FStack_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_348.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_350.AccessDetector);
  FMenuBuilder::MakeWidget
            (&local_278,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_278);
  return __return_storage_ptr__;
}

// HandlePickingModeStateChanged @ 142eb2b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandlePickingModeStateChanged(SWidgetReflector *this)

{
  char cVar1;
  
  if (this->PickingMode == None) {
    SetPickingMode(this,this->LastPickingMode);
  }
  else {
    FVisualTreeCapture::Disable(&this->VisualCapture);
    this->PickingMode = None;
  }
  cVar1 = (**(code **)(this->_padding_ + 0x20))();
  if (cVar1 != '\0') {
    SetUIMode(this,Live);
    return;
  }
  return;
}

// HandlePullDownAtlasesMenu @ 142eb2bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandlePullDownAtlasesMenu
          (SWidgetReflector *this,FMenuBuilder *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  FUIAction *pFVar2;
  FSlateIcon *pFVar3;
  FText *pFVar4;
  undefined1 local_res18 [8];
  FName local_res20;
  undefined1 local_1c8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c0;
  ForAnyElementType FStack_1b8;
  ulonglong local_1b0;
  FDestructionSentinel local_1a8;
  FName local_188;
  FDestructionSentinel local_180;
  undefined1 local_168 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  ForAnyElementType FStack_148;
  ulonglong local_140;
  undefined1 local_138 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_120;
  ForAnyElementType FStack_118;
  ulonglong local_110;
  undefined1 local_108 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  ForAnyElementType FStack_e8;
  ulonglong local_e0;
  code *local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [32];
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_60;
  FSlateIcon local_48;
  
  local_1c8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_1c8[1] = false;
  local_1b0 = 0;
  local_1c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1b8.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_108);
  uStack_d0 = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_d0._4_4_ << 0x20);
  local_108[0x10] = false;
  local_d8 = HandleDisplayTextureAtlases;
  local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  pTVar1 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<WidgetReflectorImpl::SWidgetReflector>(&local_60,this,(pmf_e9d72271 *)&local_d8)
  ;
  pFVar2 = FUIAction::FUIAction((FUIAction *)local_c8,pTVar1,RepeatDisabled);
  pFVar3 = FSlateIcon::FSlateIcon(&local_48);
  pFVar4 = FText::GetEmpty();
  local_168._0_8_ = (pFVar4->TextData).Reference;
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 8))(local_168._0_8_,local_res18);
  }
  local_168._8_4_ = pFVar4->Flags;
  local_168[0x10] = true;
  local_140 = 0;
  local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_148.Data = (FScriptContainerElement *)0x0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_1a8,L"SWidgetReflector",L"DisplayTextureAtlases",
                      L"Display Texture Atlases");
  FText::FText((FText *)local_138,pFVar4);
  local_138[0x10] = true;
  local_110 = 0;
  local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_118.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_138,
             (TAttribute<FText> *)local_168,pFVar3,pFVar2,local_188,Button,local_res20,
             (TAttribute<FText> *)local_108,(TAttribute<EVisibility> *)local_1c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_180);
  if (((int)local_110 != 0) && (FStack_118.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_118.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_118,0,0,0x10);
    local_110 = local_110 & 0xffffffff00000000;
  }
  if (local_180.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
  }
  if (FStack_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_118.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
  if ((ITextData *)local_138._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_138._0_8_ + 0x10))();
  }
  if ((longlong *)local_1a8._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_1a8._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_180);
  if (((int)local_140 != 0) && (FStack_148.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_148.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_148,0,0,0x10);
    local_140 = local_140 & 0xffffffff00000000;
  }
  if (local_180.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
  }
  if (FStack_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
  if ((void *)local_80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_80);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
  if ((void *)local_98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
  if ((void *)local_b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
  if ((void *)local_c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f0,(FWriteAccessScope *)&local_180);
  if (((int)local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
    local_e0 = local_e0 & 0xffffffff00000000;
  }
  if (local_180.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
  }
  if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  if ((ITextData *)local_108._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_108._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c0,(FWriteAccessScope *)&local_180);
  if (((int)local_1b0 != 0) && (FStack_1b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1b8,0,0,0x10);
    local_1b0 = local_1b0 & 0xffffffff00000000;
  }
  if (local_180.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
  }
  if (FStack_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c0.AccessDetector);
  local_1c8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_1c8[1] = false;
  local_1b0 = 0;
  local_1c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1b8.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_138);
  uStack_d0 = (FMRSWRecursiveAccessDetector *)((ulonglong)uStack_d0 & 0xffffffff00000000);
  local_138[0x10] = false;
  local_d8 = HandleDisplayFontAtlases;
  local_1a8._0_8_ = HandleDisplayFontAtlases;
  local_1a8.Accessor = uStack_d0;
  local_120.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_188.ComparisonIndex.Value = 0;
  local_188.Number = 0;
  pTVar1 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<WidgetReflectorImpl::SWidgetReflector>
                     (&local_60,this,(pmf_e9d72271 *)&local_1a8);
  pFVar2 = FUIAction::FUIAction((FUIAction *)local_c8,pTVar1,RepeatDisabled);
  pFVar3 = FSlateIcon::FSlateIcon(&local_48);
  pFVar4 = FText::GetEmpty();
  local_168._0_8_ = (pFVar4->TextData).Reference;
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 8))(local_168._0_8_,local_res18);
  }
  local_168._8_4_ = pFVar4->Flags;
  local_168[0x10] = true;
  local_140 = 0;
  local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_148.Data = (FScriptContainerElement *)0x0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_180,L"SWidgetReflector",L"DisplayFontAtlases",
                      L"Display Font Atlases");
  FText::FText((FText *)local_108,pFVar4);
  local_108[0x10] = true;
  local_e0 = 0;
  local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_e8.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_108,
             (TAttribute<FText> *)local_168,pFVar3,pFVar2,local_188,Button,local_res20,
             (TAttribute<FText> *)local_138,(TAttribute<EVisibility> *)local_1c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f0,(FWriteAccessScope *)&local_1a8);
  if (((int)local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
    local_e0 = local_e0 & 0xffffffff00000000;
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  if ((ITextData *)local_108._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_108._0_8_ + 0x10))();
  }
  if ((longlong *)local_180._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_180._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_1a8);
  if (((int)local_140 != 0) && (FStack_148.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_148.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_148,0,0,0x10);
    local_140 = local_140 & 0xffffffff00000000;
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  if (FStack_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
  if ((ITextData *)local_168._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_168._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
  if ((void *)local_80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_80);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
  if ((void *)local_98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
  if ((void *)local_b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
  if ((void *)local_c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_120,(FWriteAccessScope *)&local_1a8);
  if (((int)local_110 != 0) && (FStack_118.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_118.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_118,0,0,0x10);
    local_110 = local_110 & 0xffffffff00000000;
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  if (FStack_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_118.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_120.AccessDetector);
  if ((ITextData *)local_138._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_138._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c0,(FWriteAccessScope *)&local_1a8);
  if (((int)local_1b0 != 0) && (FStack_1b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1b8,0,0,0x10);
    local_1b0 = local_1b0 & 0xffffffff00000000;
  }
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  if (FStack_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c0.AccessDetector);
  return;
}

// HandlePullDownWindowMenu @ 142eb33d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandlePullDownWindowMenu
          (SWidgetReflector *this,FMenuBuilder *param_1)

{
  FTabManager *this_00;
  TSharedRef<FWorkspaceItem,1> *pTVar1;
  TSharedRef<FWorkspaceItem,1> TStack_28;
  TSharedRef<FWorkspaceItem,1> TStack_18;
  
  this_00 = (this->TabManager).Object;
  if (this_00 == (FTabManager *)0x0) {
    return;
  }
  pTVar1 = TSharedPtr<FWorkspaceItem,1>::ToSharedRef(&this_00->LocalWorkspaceMenuRoot,&TStack_18);
  TStack_28.Object = pTVar1->Object;
  TStack_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  if (TStack_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FTabManager::PopulateTabSpawnerMenu(this_00,param_1,&TStack_28,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleReflectorTreeContextMenu @ 142eb33f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu
          (SWidgetReflector *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  int iVar1;
  bool bVar2;
  FSlateApplication *this_00;
  ISlateStyle *pIVar3;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar4;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar5;
  FUIAction *pFVar6;
  FSlateIcon *pFVar7;
  FText *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  undefined1 uVar11;
  undefined8 local_res8;
  FName local_res10;
  FName local_res18;
  undefined1 local_3b8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3b0;
  ForAnyElementType FStack_3a8;
  ulonglong local_3a0;
  FDestructionSentinel local_398;
  undefined1 local_380 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_368;
  ForAnyElementType FStack_360;
  ulonglong local_358;
  TSharedPtr<FExtender,1> local_348;
  undefined1 local_338 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_320;
  ForAnyElementType FStack_318;
  ulonglong local_310;
  undefined1 local_308 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f0;
  ForAnyElementType FStack_2e8;
  ulonglong local_2e0;
  code *local_2d8;
  TReferenceControllerBase<1> *pTStack_2d0;
  bool local_2c8;
  undefined1 local_2b8 [8];
  FDelegateAllocation FStack_2b0;
  FText local_298;
  undefined1 local_288 [24];
  undefined1 local_270 [24];
  undefined1 local_258 [24];
  undefined1 local_240 [32];
  FDestructionSentinel local_220;
  FDelegateAllocation *local_208;
  FMenuBuilder local_200;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_78;
  FSlateIcon local_60;
  
  this_00 = FSlateApplication::Get();
  FSlateApplication::CloseToolTip(this_00);
  local_res8 = 0;
  pIVar3 = FAppStyle::Get();
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_348.Object = (FExtender *)0x0;
  local_348.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2b8 = (undefined1  [8])0x0;
  FStack_2b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FBaseMenuBuilder::FBaseMenuBuilder
            ((FBaseMenuBuilder *)&local_200,Menu,true,
             (TSharedPtr<FUICommandList_const_,1> *)local_2b8,false,&local_348,pIVar3,(FName)0x0,
             (FName)0x0);
  local_200.CurrentSectionExtensionHook.ComparisonIndex.Value = 0;
  local_200.CurrentSectionExtensionHook.Number = 0;
  local_200._padding_ = (longlong)&___7FMenuBuilder__6B_;
  FText::FText(&local_200.CurrentSectionHeadingText);
  local_200.CurrentSectionVisibility.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_200.CurrentSectionVisibility.bIsSet = false;
  local_200.CurrentSectionVisibility.Getter._16_8_ = 0;
  local_200.CurrentSectionVisibility.Getter._0_8_ = 0;
  local_200.CurrentSectionVisibility.Getter._8_8_ = 0;
  memset(&local_200.CurrentSectionResizeParams,0,200);
  local_200.CurrentSectionResizeParams.Value.ClippingPriority.Value = 0;
  local_200.CurrentSectionResizeParams.Value.ClippingPriority.Getter._16_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.AllowClipping.Getter._16_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_200.CurrentSectionResizeParams.Getter._16_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.ClippingPriority.bIsSet = false;
  local_200.CurrentSectionResizeParams.Value.ClippingPriority.Getter._0_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.ClippingPriority.Getter._8_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.AllowClipping.Value = false;
  local_200.CurrentSectionResizeParams.Value.AllowClipping.bIsSet = false;
  local_200.CurrentSectionResizeParams.Value.AllowClipping.Getter._0_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.AllowClipping.Getter._8_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.VisibleInOverflow.Value = false;
  local_200.CurrentSectionResizeParams.Value.VisibleInOverflow.bIsSet = false;
  local_200.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.Wrapping.Allow.Value = false;
  local_200.CurrentSectionResizeParams.Value.Wrapping.Allow.bIsSet = false;
  local_200.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.Wrapping.Priority.Value = 0;
  local_200.CurrentSectionResizeParams.Value.Wrapping.Priority.bIsSet = false;
  local_200.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.Wrapping.Mode.Value = Preferred;
  local_200.CurrentSectionResizeParams.Value.Wrapping.Mode.bIsSet = false;
  local_200.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_200.CurrentSectionResizeParams.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_200.CurrentSectionResizeParams.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_200.CurrentSectionResizeParams.bIsSet = false;
  local_200.CurrentSectionResizeParams.Getter._0_8_ = 0;
  local_200.CurrentSectionResizeParams.Getter._8_8_ = 0;
  local_200.bSectionNeedsToBeApplied = false;
  local_200.bSearchable = true;
  local_200.bRecursivelySearchable = true;
  local_200.bIsEditing = false;
  FMenuBuilder::AddSearchWidget(&local_200);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  iVar1 = (this->ReflectorTreeRoot).ArrayNum;
  if (iVar1 == (this->FilteredTreeRoot).ArrayNum) {
    bVar2 = CompareItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
                      ((TSharedRef<FWidgetReflectorNodeBase,1> *)
                       (this->ReflectorTreeRoot).AllocatorInstance.Data,
                       (TSharedRef<FWidgetReflectorNodeBase,1> *)
                       (this->FilteredTreeRoot).AllocatorInstance.Data,iVar1);
    if (bVar2) {
      uVar11 = 0;
      goto LAB_142eb361a;
    }
  }
  uVar11 = 1;
LAB_142eb361a:
  local_3b8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_3b8[1] = false;
  local_3a0 = 0;
  local_3b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3a8.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_308);
  local_348.SharedReferenceCount.ReferenceController =
       local_348.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_308[0x10] = false;
  local_348.Object = (FExtender *)DoesReflectorTreeHasSelectedItem;
  local_2b8 = (undefined1  [8])DoesReflectorTreeHasSelectedItem;
  FStack_2b0.DelegateAllocator =
       (ForElementType<TAlignedBytes<16,16>_>)local_348.SharedReferenceCount.ReferenceController;
  local_2f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  local_2e0 = 0;
  local_res8 = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pTVar4 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<WidgetReflectorImpl::SWidgetReflector>
                     ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&local_220,this,
                      (pmf_579bee4b *)local_2b8);
  local_348.SharedReferenceCount.ReferenceController =
       local_348.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_348.Object = (FExtender *)SetNodesAsReflectorTreeRoot;
  local_2b8 = (undefined1  [8])SetNodesAsReflectorTreeRoot;
  FStack_2b0.DelegateAllocator =
       (ForElementType<TAlignedBytes<16,16>_>)local_348.SharedReferenceCount.ReferenceController;
  pTVar5 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<WidgetReflectorImpl::SWidgetReflector,TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_&>
                     (&local_78,this,(pmf_7631639f *)local_2b8,&this->SelectedNodes);
  pFVar6 = FUIAction::FUIAction((FUIAction *)local_288,pTVar5,pTVar4,RepeatDisabled);
  pFVar7 = FSlateIcon::FSlateIcon(&local_60);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_2d8,L"SWidgetReflector",L"SetAsRootTooltip",
                      L"Set selected node as the root of the graph");
  FText::FText((FText *)local_338,pFVar8);
  local_338[0x10] = true;
  local_310 = 0;
  local_320.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_318.Data = (FScriptContainerElement *)0x0;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_298,L"SWidgetReflector",L"SetAsRootLabel",L"Selected node as root");
  FText::FText((FText *)local_380,pFVar8);
  local_380[0x10] = true;
  local_358 = 0;
  local_368.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_360.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_200,(TAttribute<FText> *)local_380,
             (TAttribute<FText> *)local_338,pFVar7,pFVar6,(FName)0x0,Button,(FName)0x0,
             (TAttribute<FText> *)local_308,(TAttribute<EVisibility> *)local_3b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_368,(FWriteAccessScope *)&local_398);
  if (((int)local_358 != 0) && (FStack_360.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_360.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_360,0,0,0x10);
    local_358 = local_358 & 0xffffffff00000000;
  }
  if (local_398.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_398.Accessor,&local_398);
  }
  if (FStack_360.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_360.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_368.AccessDetector);
  if ((ITextData *)local_380._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_380._0_8_ + 0x10))();
  }
  if (local_298.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_320,(FWriteAccessScope *)&local_398);
  if (((int)local_310 != 0) && (FStack_318.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_318.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_318,0,0,0x10);
    local_310 = local_310 & 0xffffffff00000000;
  }
  if (local_398.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_398.Accessor,&local_398);
  }
  if (FStack_318.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_318.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_320.AccessDetector);
  if ((ITextData *)local_338._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_338._0_8_ + 0x10))();
  }
  if ((ITextData *)local_2d8 != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2d8 + 0x10))();
  }
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_270);
  if ((void *)local_270._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_270._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_270);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_288);
  if ((void *)local_288._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_288._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_288);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2f0,(FWriteAccessScope *)&local_398);
  if (((int)local_2e0 != 0) && (FStack_2e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e8,0,0,0x10);
    local_2e0 = local_2e0 & 0xffffffff00000000;
  }
  if (local_398.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_398.Accessor,&local_398);
  }
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f0.AccessDetector);
  if ((ITextData *)local_308._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_308._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3b0,(FWriteAccessScope *)&local_398);
  if (((int)local_3a0 != 0) && (FStack_3a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a8,0,0,0x10);
    local_3a0 = local_3a0 & 0xffffffff00000000;
  }
  if (local_398.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_398.Accessor,&local_398);
  }
  if (FStack_3a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3b0.AccessDetector);
  local_3b8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_3b8[1] = false;
  local_3a0 = 0;
  local_3b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3a8.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_380);
  local_348.SharedReferenceCount.ReferenceController =
       local_348.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_380[0x10] = false;
  local_348.Object = (FExtender *)HandleIsStartTreeWithUMGEnabled;
  local_2d8 = HandleIsStartTreeWithUMGEnabled;
  pTStack_2d0 = local_348.SharedReferenceCount.ReferenceController;
  local_368.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_360.Data = (FScriptContainerElement *)0x0;
  local_358 = 0;
  local_res8 = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  pTVar4 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<WidgetReflectorImpl::SWidgetReflector>
                     ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&local_78,this,
                      (pmf_579bee4b *)&local_2d8);
  local_348.SharedReferenceCount.ReferenceController =
       local_348.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_398.bDestroyed = false;
  local_398._17_7_ = 0;
  local_348.Object = (FExtender *)HandleStartTreeWithUMG;
  local_2d8 = HandleStartTreeWithUMG;
  pTStack_2d0 = local_348.SharedReferenceCount.ReferenceController;
  local_398.AccessType = Reader;
  local_398._4_4_ = 0;
  local_398.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  pTVar5 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<WidgetReflectorImpl::SWidgetReflector>
                     ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_220,this,
                      (pmf_e9d72271 *)&local_2d8);
  pFVar6 = FUIAction::FUIAction
                     ((FUIAction *)local_288,pTVar5,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&local_398,pTVar4,
                      RepeatDisabled);
  pFVar7 = FSlateIcon::FSlateIcon(&local_60);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_2b8,L"SWidgetReflector",L"ShowOnlyUMGTooltip",
                      L"Set UMG as the root of the graph");
  FText::FText((FText *)local_338,pFVar8);
  local_338[0x10] = true;
  local_310 = 0;
  local_320.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_318.Data = (FScriptContainerElement *)0x0;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_298,L"SWidgetReflector",L"ShowOnlyUMGLabel",L"UMG as root");
  FText::FText((FText *)local_308,pFVar8);
  local_308[0x10] = true;
  local_2e0 = 0;
  local_2f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_200,(TAttribute<FText> *)local_308,
             (TAttribute<FText> *)local_338,pFVar7,pFVar6,(FName)0x0,ToggleButton,(FName)0x0,
             (TAttribute<FText> *)local_380,(TAttribute<EVisibility> *)local_3b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2f0,(FWriteAccessScope *)&local_2d8);
  if (((int)local_2e0 != 0) && (FStack_2e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e8,0,0,0x10);
    local_2e0 = local_2e0 & 0xffffffff00000000;
  }
  if (local_2c8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_2d0,(FDestructionSentinel *)&local_2d8);
  }
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f0.AccessDetector);
  if ((ITextData *)local_308._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_308._0_8_ + 0x10))();
  }
  if (local_298.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_320,(FWriteAccessScope *)&local_2d8);
  if (((int)local_310 != 0) && (FStack_318.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_318.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_318,0,0,0x10);
    local_310 = local_310 & 0xffffffff00000000;
  }
  if (local_2c8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_2d0,(FDestructionSentinel *)&local_2d8);
  }
  if (FStack_318.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_318.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_320.AccessDetector);
  if ((ITextData *)local_338._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_338._0_8_ + 0x10))();
  }
  if ((atomic<unsigned___int64>)local_2b8 != (atomic<unsigned___int64>)0x0) {
    (**(code **)((longlong)*(ITextData *)local_2b8 + 0x10))();
  }
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_270);
  if ((void *)local_270._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_270._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_270);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_288);
  if ((void *)local_288._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_288._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_288);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_368,(FWriteAccessScope *)&local_2d8);
  if (((int)local_358 != 0) && (FStack_360.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_360.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_360,0,0,0x10);
    local_358 = local_358 & 0xffffffff00000000;
  }
  if (local_2c8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_2d0,(FDestructionSentinel *)&local_2d8);
  }
  if (FStack_360.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_360.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_368.AccessDetector);
  if ((ITextData *)local_380._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_380._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3b0,(FWriteAccessScope *)&local_2d8);
  if (((int)local_3a0 != 0) && (FStack_3a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a8,0,0,0x10);
    local_3a0 = local_3a0 & 0xffffffff00000000;
  }
  if (local_2c8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_2d0,(FDestructionSentinel *)&local_2d8);
  }
  if (FStack_3a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3b0.AccessDetector);
  local_3b8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_3b8[1] = false;
  local_3a0 = 0;
  local_res8 = 0;
  local_3b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3a8.Data = (FScriptContainerElement *)0x0;
  FMenuBuilder::AddMenuSeparator(&local_200,(FName)0x0,(TAttribute<EVisibility> *)local_3b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3b0,(FWriteAccessScope *)&local_398);
  if (((int)local_3a0 != 0) && (FStack_3a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a8,0,0,0x10);
    local_3a0 = local_3a0 & 0xffffffff00000000;
  }
  if (local_398.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_398.Accessor,&local_398);
  }
  if (FStack_3a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3b0.AccessDetector);
  local_3b8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_3b8[1] = false;
  local_3a0 = 0;
  local_3b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_3a8.Data = (FScriptContainerElement *)0x0;
  FText::FText((FText *)local_338);
  local_338[0x10] = false;
  local_310 = 0;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_320.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_318.Data = (FScriptContainerElement *)0x0;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_2b8 = (undefined1  [8])0x0;
  FStack_2b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_2b0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2b8,
             (FWriteAccessScope *)&local_220);
  local_208 = &FStack_2b0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x20,&FStack_2b0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenu'::`2'::<lambda_1>_>
               ::_vftable_;
    *(undefined1 *)(puVar9 + 3) = uVar11;
  }
  if (local_220.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_220.Accessor,&local_220);
  }
  local_348.SharedReferenceCount.ReferenceController =
       local_348.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
  local_348.Object = (FExtender *)HandleResetFilteredTreeRoot;
  local_2d8 = HandleResetFilteredTreeRoot;
  pTStack_2d0 = local_348.SharedReferenceCount.ReferenceController;
  pTVar5 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
           CreateSP<WidgetReflectorImpl::SWidgetReflector>
                     (&local_78,this,(pmf_e9d72271 *)&local_2d8);
  pFVar6 = FUIAction::FUIAction
                     ((FUIAction *)local_288,pTVar5,
                      (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_2b8,
                      RepeatDisabled);
  pFVar7 = FSlateIcon::FSlateIcon(&local_60);
  pFVar8 = FText::GetEmpty();
  local_380._0_8_ = (pFVar8->TextData).Reference;
  if ((ITextData *)local_380._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_380._0_8_ + 8))(local_380._0_8_,&local_res8);
  }
  local_380._8_4_ = pFVar8->Flags;
  local_380[0x10] = true;
  local_358 = 0;
  local_368.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_360.Data = (FScriptContainerElement *)0x0;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_298,L"SWidgetReflector",L"ResetRoot",L"Reset filter");
  FText::FText((FText *)local_308,pFVar8);
  local_308[0x10] = true;
  local_2e0 = 0;
  local_2f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_200,(TAttribute<FText> *)local_308,
             (TAttribute<FText> *)local_380,pFVar7,pFVar6,local_res18,Button,local_res10,
             (TAttribute<FText> *)local_338,(TAttribute<EVisibility> *)local_3b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2f0,(FWriteAccessScope *)&local_398);
  if (((int)local_2e0 != 0) && (FStack_2e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e8,0,0,0x10);
    local_2e0 = local_2e0 & 0xffffffff00000000;
  }
  if (local_398.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_398.Accessor,&local_398);
  }
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f0.AccessDetector);
  if ((ITextData *)local_308._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_308._0_8_ + 0x10))();
  }
  if (local_298.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_368,(FWriteAccessScope *)&local_398);
  if (((int)local_358 != 0) && (FStack_360.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_360.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_360,0,0,0x10);
    local_358 = local_358 & 0xffffffff00000000;
  }
  if (local_398.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_398.Accessor,&local_398);
  }
  if (FStack_360.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_360.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_368.AccessDetector);
  if ((ITextData *)local_380._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_380._0_8_ + 0x10))();
  }
  FUIAction::~FUIAction((FUIAction *)local_288);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_320,(FWriteAccessScope *)&local_398);
  if (((int)local_310 != 0) && (FStack_318.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_318.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_318,0,0,0x10);
    local_310 = local_310 & 0xffffffff00000000;
  }
  if (local_398.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_398.Accessor,&local_398);
  }
  if (FStack_318.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_318.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_320.AccessDetector);
  if ((ITextData *)local_338._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_338._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3b0,(FWriteAccessScope *)&local_398);
  if (((int)local_3a0 != 0) && (FStack_3a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a8,0,0,0x10);
    local_3a0 = local_3a0 & 0xffffffff00000000;
  }
  if (local_398.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_398.Accessor,&local_398);
  }
  if (FStack_3a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3b0.AccessDetector);
  FMenuBuilder::MakeWidget
            (&local_200,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_200);
  return __return_storage_ptr__;
}

// HandleReflectorTreeContextMenuPtr @ 142eb4380

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeContextMenuPtr
          (SWidgetReflector *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<SWidget,1> *pTVar2;
  TSharedRef<SWidget,1> local_18;
  
  pTVar2 = HandleReflectorTreeContextMenu(this,&local_18);
  __return_storage_ptr__->Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// HandleReflectorTreeGenerateRow @ 142eb43d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeGenerateRow
          (SWidgetReflector *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedRef<FWidgetReflectorNodeBase,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWidgetReflectorNodeBase *pFVar3;
  SReflectorTreeWidgetItem *pSVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  TSharedPtr<IToolTip,1> *pTVar10;
  TSlateDecl<SReflectorTreeWidgetItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar11;
  TSharedRef<ITableRow,1> *pTVar12;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> local_res8;
  undefined1 local_358 [8];
  ForAnyElementType local_350;
  int local_348;
  undefined1 local_340 [8];
  ForAnyElementType local_338;
  int local_330;
  IToolTip *local_328;
  FSharedReferencer<1> local_320;
  undefined1 local_318;
  undefined1 local_310 [8];
  ForAnyElementType FStack_308;
  ulonglong local_300;
  TWeakPtr<FWidgetReflectorNodeBase,1> local_2f8;
  FDestructionSentinel local_2e8;
  FDestructionSentinel local_2d0;
  FDestructionSentinel local_2b8;
  FWidgetReflectorNodeBase *local_2a0;
  TReferenceControllerBase<1> *pTStack_298;
  TSharedPtr<IToolTip,1> local_290;
  TSlateDecl<SReflectorTreeWidgetItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_280;
  undefined1 local_268 [520];
  undefined1 local_60 [24];
  undefined1 local_48 [32];
  
  pFVar9 = SReflectorTreeWidgetItem::FArguments::FArguments((FArguments *)local_268);
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a0 = (pFVar9->_WidgetInfoToVisualize).Object;
  pTStack_298 = (pFVar9->_WidgetInfoToVisualize).SharedReferenceCount.ReferenceController;
  (pFVar9->_WidgetInfoToVisualize).Object = pFVar3;
  (pFVar9->_WidgetInfoToVisualize).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_298);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_2f8.Object = param_1->Object;
  local_2f8.WeakReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_2f8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2f8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_2f8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = GenerateToolTipForReflectorNode(this,&local_290,&local_2f8);
  local_328 = pTVar10->Object;
  local_320.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
  (pTVar10->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar10->Object = (IToolTip *)0x0;
  local_318 = 1;
  local_300 = 0;
  local_310 = (undefined1  [8])0x0;
  FStack_308.Data = (FScriptContainerElement *)0x0;
  if ((IToolTip **)&pFVar9->_padding_ != &local_328) {
    pFVar9->_padding_ = (longlong)local_328;
    local_328 = (IToolTip *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar9->_padding_,&local_320);
  }
  *(undefined1 *)&pFVar9->_padding_ = local_318;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_310);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_310,
             (FWriteAccessScope *)&local_2e8);
  if (((int)local_300 != 0) && (FStack_308.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_308.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_308,0,0,0x10);
    local_300 = local_300 & 0xffffffff00000000;
  }
  if (local_2e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
  }
  if (FStack_308.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_308.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_310);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_320.ReferenceController);
  local_358 = (undefined1  [8])0x0;
  local_350.Data = (FScriptContainerElement *)0x0;
  local_348 = 0;
  TDelegate<bool___cdecl(FString_const_&,int,int),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(FString_const_&,int,int),FDefaultDelegateUserPolicy> *)
             local_358,&this->SourceAccessDelegate);
  TDelegate<bool___cdecl(FString_const_&,int,int),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar9->_SourceCodeAccessor,
             (TDelegate<bool___cdecl(FString_const_&,int,int),FDefaultDelegateUserPolicy> *)
             local_358);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_358,
             (FWriteAccessScope *)&local_2d0);
  if ((local_348 != 0) && (local_350.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_350.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_350,0,0,0x10);
    local_348 = 0;
  }
  if (local_2d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d0.Accessor,&local_2d0);
  }
  if (local_350.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_358);
  local_340 = (undefined1  [8])0x0;
  local_338.Data = (FScriptContainerElement *)0x0;
  local_330 = 0;
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_340,
             &this->AsseetAccessDelegate);
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar9->_AssetAccessor,
             (TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_340);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_340,
             (FWriteAccessScope *)&local_2b8);
  if ((local_330 != 0) && (local_338.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_338.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_338,0,0,0x10);
    local_330 = 0;
  }
  if (local_2b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b8.Accessor,&local_2b8);
  }
  if (local_338.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_340);
  local_res8.Arg0 = param_2;
  pTVar11 = MakeTDecl<SReflectorTreeWidgetItem,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                      (&local_280,"SReflectorTreeWidgetItem",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                       ,0x7ec,&local_res8);
  if ((pTVar11->_Widget).Object == (SReflectorTreeWidgetItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
      return pTVar12;
    }
  }
  SWidget::SWidgetConstruct
            ((SWidget *)&((pTVar11->_Widget).Object)->_padding_,(FSlateBaseNamedArgs *)pFVar9);
  SReflectorTreeWidgetItem::Construct((pTVar11->_Widget).Object,pFVar9,pTVar11->_RequiredArgs->Arg0)
  ;
  if ((pTVar11->_Widget).Object == (SReflectorTreeWidgetItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pSVar4 = (pTVar11->_Widget).Object;
  if ((pSVar4->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)(pSVar4->_padding_ + 0x228))(&pSVar4->_padding_);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_142eb4767;
  }
  bVar8 = 0x20;
LAB_142eb4767:
  *(byte *)&pSVar4->_padding_ = (byte)pSVar4->_padding_ & 0xdf;
  *(byte *)&pSVar4->_padding_ = (byte)pSVar4->_padding_ | bVar8;
  if ((pTVar11->_Widget).Object == (SReflectorTreeWidgetItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pbVar1 = (byte *)((longlong)&((pTVar11->_Widget).Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((pTVar11->_Widget).Object == (SReflectorTreeWidgetItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
      return pTVar12;
    }
  }
  pSVar4 = (pTVar11->_Widget).Object;
  pTVar2 = (pTVar11->_Widget).SharedReferenceCount.ReferenceController;
  (pTVar11->_Widget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar11->_Widget).Object = (SReflectorTreeWidgetItem *)0x0;
  if (pSVar4 == (SReflectorTreeWidgetItem *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar12 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
      return pTVar12;
    }
  }
  __return_storage_ptr__->Object = (ITableRow *)pSVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_290.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  if ((void *)local_48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
  if ((void *)local_60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_268._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_268);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// HandleReflectorTreeGetChildren @ 142eb48d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeGetChildren
          (SWidgetReflector *this,TSharedRef<FWidgetReflectorNodeBase,1> *param_1,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>::operator=
            (param_2,&param_1->Object->ChildNodes);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleReflectorTreeHiddenColumnsListChanged @ 142eb4900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeHiddenColumnsListChanged
          (SWidgetReflector *this)

{
  return;
}

// HandleReflectorTreeOnMouseClick @ 142eb4910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeOnMouseClick
          (SWidgetReflector *this,TSharedRef<FWidgetReflectorNodeBase,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FSlateApplication *this_00;
  byte local_res10;
  ForAnyElementType local_38;
  undefined8 local_30;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> local_28;
  
  this_00 = FSlateApplication::Get();
  FSlateApplication::GetModifierKeys(this_00);
  if (((local_res10 >> 4 & 1) != 0) && (0 < (this->SelectedNodes).ArrayNum)) {
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_38,(int *)((longlong)&local_30 + 4));
    FVar3.Data = local_38.Data;
    iVar1 = iVar4 + 1;
    local_30 = CONCAT44(local_30._4_4_,iVar1);
    *(FWidgetReflectorNodeBase **)&local_38.Data[(longlong)iVar4 * 0x10].field_0x0 = param_1->Object
    ;
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(local_38.Data + (longlong)iVar4 * 0x10 + 8) = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&local_28.AllocatorInstance,iVar1,&local_28.ArrayMax);
      ConstructItems<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<FWidgetReflectorNodeBase,1>,int>
                (local_28.AllocatorInstance.Data,
                 (TSharedRef<FWidgetReflectorNodeBase,1> *)FVar3.Data,iVar1);
    }
    SetNodesAsReflectorTreeRoot(this,&local_28);
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
              ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_38.Data,(int)local_30);
    if ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_38.Data !=
        (TSharedRef<FWidgetReflectorNodeBase,1> *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleReflectorTreeSelectionChanged @ 142eb4a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleReflectorTreeSelectionChanged
          (SWidgetReflector *this,TSharedPtr<FWidgetReflectorNodeBase,1> *param_1,Type param_2)

{
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  TSharedRef<FWidgetReflectorNodeBase,1> *local_18;
  int local_10;
  
  if ((this->ReflectorTree).Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar6 = &((this->ReflectorTree).Object)->field_0x588;
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)puVar6 + 0xd0))(puVar6,&local_18);
  pTVar1 = &this->SelectedNodes;
  if (pTVar1 != (TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *)puVar5
     ) {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
              ((TSharedRef<FWidgetReflectorNodeBase,1> *)(pTVar1->AllocatorInstance).Data,
               (this->SelectedNodes).ArrayNum);
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)*puVar5;
    *puVar5 = 0;
    (this->SelectedNodes).ArrayNum = *(int *)(puVar5 + 1);
    (this->SelectedNodes).ArrayMax = *(int *)((longlong)puVar5 + 0xc);
    puVar5[1] = 0;
  }
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(local_18,local_10);
  if (local_18 != (TSharedRef<FWidgetReflectorNodeBase,1> *)0x0) {
    FMemory::Free(local_18);
  }
  if (this->CurrentUIMode == Snapshot) {
    if ((this->WidgetSnapshotVisualizer).Object == (SWidgetSnapshotVisualizer *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SWidgetSnapshotVisualizer::SetSelectedWidgets((this->WidgetSnapshotVisualizer).Object,pTVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleRemoteSnapshotReceived @ 142eb4bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleRemoteSnapshotReceived
          (SWidgetReflector *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  TWeakPtr<SNotificationItem,1> *pTVar3;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  atomic<int> aVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar8;
  SNotificationItem *pSVar9;
  TReferenceControllerBase<1> *pTVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  atomic<int> aVar13;
  FText *pFVar14;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  bool bVar17;
  FText local_b8;
  undefined1 local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  ForAnyElementType FStack_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> local_78;
  FDestructionSentinel local_68;
  FText local_50;
  longlong local_40 [3];
  
  pTVar3 = &this->WidgetSnapshotNotificationPtr;
  pTVar7 = (this->WidgetSnapshotNotificationPtr).WeakReferenceCount.ReferenceController;
  pTVar16 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar7->SharedReferenceCount;
    do {
      pTVar16 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142eb4c21;
      LOCK();
      aVar13 = pTVar7->SharedReferenceCount;
      bVar17 = aVar5 == aVar13;
      if (bVar17) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar13 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar13;
    } while (!bVar17);
    pSVar9 = pTVar3->Object;
    pTVar16 = pTVar7;
    if (pSVar9 != (SNotificationItem *)0x0) {
      pcVar12 = *(code **)(*(longlong *)pSVar9 + 0x248);
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_50,L"SWidgetReflector",
                           L"RemoteWidgetSnapshotReceivedNotificationText",
                           L"Remote Widget Snapshot Data Received");
      FText::FText(&local_b8,pFVar14);
      local_a8 = 1;
      local_90 = 0;
      local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_98.Data = (FScriptContainerElement *)0x0;
      (*pcVar12)(pSVar9,&local_b8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a0,(FWriteAccessScope *)&local_68);
      if (((int)local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_98.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
        local_90 = local_90 & 0xffffffff00000000;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      if (FStack_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_98.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
      if (local_50.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
      }
      (**(code **)(*(longlong *)pSVar9 + 0x280))(pSVar9,2);
      (**(code **)(*(longlong *)pSVar9 + 0x288))(pSVar9);
      if (pTVar3 != (TWeakPtr<SNotificationItem,1> *)local_40) {
        pTVar10 = (this->WidgetSnapshotNotificationPtr).WeakReferenceCount.ReferenceController;
        pTVar3->Object = (SNotificationItem *)0x0;
        (this->WidgetSnapshotNotificationPtr).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar10->WeakReferenceCount;
          aVar5 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar5 == (atomic<int>)0x1) {
            (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
          }
        }
      }
    }
  }
LAB_142eb4c21:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  local_88 = 0;
  uStack_80 = 0;
  (this->RemoteSnapshotRequestId).A = 0;
  (this->RemoteSnapshotRequestId).B = 0;
  (this->RemoteSnapshotRequestId).C = 0;
  (this->RemoteSnapshotRequestId).D = 0;
  SetUIMode(this,Snapshot);
  FWidgetSnapshotData::LoadSnapshotFromBuffer(&this->SnapshotData,param_1);
  piVar1 = &(this->SelectedNodes).ArrayMax;
  pTVar8 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(this->SelectedNodes).AllocatorInstance.Data;
  iVar6 = (this->SelectedNodes).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar8,iVar6);
    (this->SelectedNodes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->SelectedNodes).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar8,iVar6);
    (this->SelectedNodes).ArrayNum = 0;
  }
  piVar1 = &(this->PickedWidgetPath).ArrayMax;
  pTVar8 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(this->PickedWidgetPath).AllocatorInstance.Data
  ;
  iVar6 = (this->PickedWidgetPath).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar8,iVar6);
    (this->PickedWidgetPath).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->PickedWidgetPath).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar8,iVar6);
    (this->PickedWidgetPath).ArrayNum = 0;
  }
  pTVar15 = FWidgetSnapshotData::GetWindowsRef(&this->SnapshotData,&local_78);
  pTVar4 = &this->FilteredTreeRoot;
  if (pTVar4 != pTVar15) {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
              ((TSharedRef<FWidgetReflectorNodeBase,1> *)(pTVar4->AllocatorInstance).Data,
               (this->FilteredTreeRoot).ArrayNum);
    pFVar11 = (pTVar4->AllocatorInstance).Data;
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar15->AllocatorInstance).Data;
    (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->FilteredTreeRoot).ArrayNum = pTVar15->ArrayNum;
    (this->FilteredTreeRoot).ArrayMax = pTVar15->ArrayMax;
    pTVar15->ArrayNum = 0;
    pTVar15->ArrayMax = 0;
  }
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ReflectorTreeRoot,pTVar4);
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_78.AllocatorInstance.Data,
             local_78.ArrayNum);
  if ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_78.AllocatorInstance.Data !=
      (TSharedRef<FWidgetReflectorNodeBase,1> *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (((this->ReflectorTree).Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  (**(code **)(*(longlong *)(this->ReflectorTree).Object + 0x248))();
  if (((this->WidgetSnapshotVisualizer).Object == (SWidgetSnapshotVisualizer *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  SWidgetSnapshotVisualizer::SnapshotDataUpdated((this->WidgetSnapshotVisualizer).Object);
  return;
}

// HandleResetFilteredTreeRoot @ 142eb4f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleResetFilteredTreeRoot(SWidgetReflector *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->BreadCrumb).Object == (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0)
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::ClearCrumbs
            ((this->BreadCrumb).Object,false);
  this->bFilterReflectorTreeRootWithUMG = false;
  UpdateFilteredTreeRoot(this);
  if ((this->ReflectorTree).Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb5005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->ReflectorTree).Object + 0x248))();
  return;
}

// HandleSnapshotOptionsTreeContextMenu @ 142eb5020

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu
          (SWidgetReflector *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SHorizontalBox *pSVar5;
  SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar6;
  code *pcVar7;
  bool bVar8;
  FArguments *pFVar9;
  FSlot *pFVar10;
  FSizeParam *pFVar11;
  FArguments *pFVar12;
  FText *pFVar13;
  TSharedRef<STextBlock,1> *pTVar14;
  FArguments *pFVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  TSharedRef<SSpinBox<float>,1> *pTVar18;
  TSharedRef<SHorizontalBox,1> *pTVar19;
  FSlot *pFVar20;
  FArguments *pFVar21;
  TSharedRef<SCheckBox,1> *pTVar22;
  FArguments *pFVar23;
  FSlotArguments *pFVar24;
  TSharedRef<SWidget,1> *pTVar25;
  TSharedRef<SVerticalBox,1> *pTVar26;
  undefined ***pppuVar27;
  undefined1 auStackY_27e8 [32];
  T0RequiredArgs local_27b8;
  T0RequiredArgs local_27b7;
  T0RequiredArgs local_27b6;
  T0RequiredArgs local_27b5;
  T0RequiredArgs local_27b4;
  T0RequiredArgs local_27b3;
  T0RequiredArgs local_27b2 [2];
  FLLMScope local_27b0;
  FLLMScope local_27ac;
  FLLMScope local_27a8;
  FLLMScope local_27a4;
  FLLMScope local_27a0;
  FLLMScope local_279c;
  FLLMScope local_2798 [2];
  float local_2790;
  undefined1 local_278c;
  undefined1 local_2788 [8];
  ForAnyElementType FStack_2780;
  ulonglong local_2778;
  FName local_2770;
  undefined4 local_2768;
  undefined1 local_2764;
  undefined1 local_2760;
  undefined1 local_2758 [8];
  ForAnyElementType FStack_2750;
  ulonglong local_2748;
  FText local_2740;
  bool local_2730;
  undefined1 local_2728 [8];
  ForAnyElementType FStack_2720;
  ulonglong local_2718;
  FText local_2710;
  bool local_2700;
  undefined1 local_26f8 [8];
  ForAnyElementType FStack_26f0;
  ulonglong local_26e8;
  FText local_26e0;
  undefined1 local_26d0;
  undefined1 local_26c8 [8];
  ForAnyElementType FStack_26c0;
  ulonglong local_26b8;
  FName local_26b0;
  FSharedReferencer<1> local_26a8;
  SHorizontalBox *local_26a0;
  FSharedReferencer<1> local_2698 [3];
  undefined1 local_2680;
  undefined1 local_2678 [8];
  ForAnyElementType FStack_2670;
  ulonglong local_2668;
  undefined8 local_2660;
  FSharedReferencer<1> local_2658;
  undefined8 local_2650;
  FSharedReferencer<1> local_2648;
  undefined8 local_2640;
  FSharedReferencer<1> local_2638;
  undefined8 local_2630;
  FSharedReferencer<1> local_2628;
  FMemScope local_2620;
  FMemScope local_2618;
  FMemScope local_2610;
  FSlot *local_2608;
  FMemScope local_2600;
  TSharedRef<SWidget,1> *local_25f8;
  FName local_25f0;
  FMemScope local_25e8;
  FName local_25e0;
  FSlot *local_25d8;
  FName local_25d0;
  FMemScope local_25c8;
  FName local_25c0;
  FSlot *local_25b8;
  FName local_25b0;
  FMemScope local_25a8;
  FSlot *local_25a0;
  FName local_2598;
  TSharedRef<SWidget,1> local_2590;
  FDestructionSentinel local_2580;
  FDestructionSentinel local_2568;
  FDestructionSentinel local_2550;
  FDestructionSentinel local_2538;
  FDestructionSentinel local_2520;
  FDestructionSentinel local_2508;
  FDestructionSentinel local_24f0;
  undefined1 *local_24d8;
  FDestructionSentinel local_24d0;
  undefined1 *local_24b8;
  FDestructionSentinel local_24b0;
  undefined1 *local_2498;
  FDestructionSentinel local_2490;
  undefined1 *local_2478;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2470;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_2458;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_2440;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_2428;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_2410;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_23f8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_23e0;
  TSharedRef<STextBlock,1> local_23c8;
  FText local_23b8;
  FText local_23a8;
  TSharedRef<SVerticalBox,1> local_2398;
  TSharedRef<SHorizontalBox,1> local_2388;
  TSharedRef<SSpinBox<float>,1> local_2378;
  TSharedRef<STextBlock,1> local_2368;
  FText local_2358;
  TSharedRef<SHorizontalBox,1> local_2348;
  TSharedRef<SCheckBox,1> local_2338;
  undefined1 local_2328 [16];
  undefined1 local_2318 [32];
  undefined1 local_22f8 [24];
  undefined1 local_22e0 [16];
  undefined1 local_22d0 [32];
  undefined1 local_22b0 [24];
  undefined8 *local_2298;
  SCheckBox *local_2290;
  FSharedReferencer<1> local_2288 [3];
  undefined1 local_2270;
  undefined1 local_2268 [24];
  undefined4 local_2250;
  undefined1 local_224c;
  FSlotArgumentsMixin local_2240;
  undefined8 *local_21b0;
  STextBlock *local_21a8;
  FSharedReferencer<1> local_21a0 [4];
  undefined1 local_2180 [32];
  undefined4 local_2160;
  undefined1 local_215c;
  FSlotArgumentsMixin local_2158;
  undefined8 *local_20c8;
  STextBlock *local_20c0;
  FSharedReferencer<1> local_20b8 [4];
  undefined1 local_2098 [32];
  undefined4 local_2078;
  undefined1 local_2074;
  FSlotArgumentsMixin local_2070;
  undefined8 *local_1fe0;
  SSpinBox<float> *local_1fd8;
  FSharedReferencer<1> local_1fd0 [4];
  undefined1 local_1fb0 [24];
  undefined4 local_1f98;
  undefined1 local_1f94;
  FSlotArgumentsMixin local_1f88;
  FArguments local_1ef8;
  FArguments local_1cf0;
  FArguments local_1ae8;
  FSlotArguments local_18e0;
  FSlotArguments local_17f8;
  FSlotArguments local_1710;
  FArguments local_1628;
  FArguments local_1248;
  FArguments local_cf0;
  FArguments local_798;
  code *local_98;
  undefined **local_88;
  SWidgetReflector *local_80;
  undefined ***local_70;
  code *local_68;
  undefined **local_58;
  SWidgetReflector *local_50;
  undefined ***local_40;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142eb504a;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_27e8;
  local_25f8 = __return_storage_ptr__;
  pFVar9 = SHorizontalBox::FArguments::FArguments(&local_1ef8);
  pFVar10 = ::operator_new(0x58);
  pFVar20 = (FSlot *)0x0;
  local_2608 = pFVar20;
  if (pFVar10 != (FSlot *)0x0) {
    *(undefined8 *)pFVar10 = 0;
    *(undefined8 *)&pFVar10->field_0x8 = 0;
    *(undefined8 *)&pFVar10->field_0x10 = 0;
    *(undefined8 *)&pFVar10->field_0x18 = 0;
    *(undefined8 *)&pFVar10->field_0x20 = 0;
    *(undefined8 *)&pFVar10->field_0x28 = 0;
    *(undefined8 *)&pFVar10->field_0x30 = 0;
    *(undefined8 *)&pFVar10->field_0x38 = 0;
    *(undefined8 *)&pFVar10->field_0x40 = 0;
    *(undefined8 *)&pFVar10->field_0x48 = 0;
    *(undefined8 *)&pFVar10->field_0x50 = 0;
    local_2608 = SHorizontalBox::FSlot::FSlot(pFVar10);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_21b0,(FSlot *)&local_2608);
  pFVar11 = (FSizeParam *)FAuto::FAuto((FAuto *)local_2328);
  TOptional<FSizeParam>::operator=(&local_2158._SizeParam,pFVar11);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_22f8);
  if ((void *)local_22f8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_22f8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_22f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2318);
  if ((void *)local_2318._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2318._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2318);
  local_2160 = 2;
  local_215c = 1;
  pFVar12 = STextBlock::FArguments::FArguments(&local_1248);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_2358,L"SWidgetReflector",L"DelayLabel",L"Delay");
  FText::FText(&local_2740,pFVar13);
  local_2730 = true;
  local_2718 = 0;
  local_2728 = (undefined1  [8])0x0;
  FStack_2720.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar12->_Text).Value,&local_2740);
  (pFVar12->_Text).bIsSet = local_2730;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2728);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2728,
             (FWriteAccessScope *)&local_2568);
  if (((int)local_2718 != 0) && (FStack_2720.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2720.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2720,0,0,0x10);
    local_2718 = local_2718 & 0xffffffff00000000;
  }
  if (local_2568.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2568.Accessor,&local_2568);
  }
  if (FStack_2720.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2720.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2728);
  if (local_2740.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2740.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_27b0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_25f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_25e8,&local_25f0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_2440,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x6ae,&local_27b8);
  FMemScope::~FMemScope(&local_25e8);
  FLLMScope::~FLLMScope(&local_27b0);
  pTVar14 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2440,&local_2368,pFVar12);
  pTVar1 = (pTVar14->SharedReferenceCount).ReferenceController;
  local_21a8 = pTVar14->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2660 = 0;
  local_2658.ReferenceController = pTVar1;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_21a0,&local_2658);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2658.ReferenceController);
  pFVar9 = SHorizontalBox::FArguments::operator+(pFVar9,(FSlotArguments *)&local_21b0);
  pFVar10 = ::operator_new(0x58);
  local_25d8 = pFVar20;
  if (pFVar10 != (FSlot *)0x0) {
    *(undefined8 *)pFVar10 = 0;
    *(undefined8 *)&pFVar10->field_0x8 = 0;
    *(undefined8 *)&pFVar10->field_0x10 = 0;
    *(undefined8 *)&pFVar10->field_0x18 = 0;
    *(undefined8 *)&pFVar10->field_0x20 = 0;
    *(undefined8 *)&pFVar10->field_0x28 = 0;
    *(undefined8 *)&pFVar10->field_0x30 = 0;
    *(undefined8 *)&pFVar10->field_0x38 = 0;
    *(undefined8 *)&pFVar10->field_0x40 = 0;
    *(undefined8 *)&pFVar10->field_0x48 = 0;
    *(undefined8 *)&pFVar10->field_0x50 = 0;
    local_25d8 = SHorizontalBox::FSlot::FSlot(pFVar10);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1fe0,(FSlot *)&local_25d8);
  local_1f98 = 3;
  local_1f94 = 1;
  pFVar15 = SSpinBox<float>::FArguments::FArguments(&local_798);
  local_2764 = 1;
  local_2768 = 0;
  local_2760 = 1;
  local_2748 = 0;
  local_2758 = (undefined1  [8])0x0;
  FStack_2750.Data = (FScriptContainerElement *)0x0;
  if ((TAttribute<TOptional<float>_> *)&local_2768 != &pFVar15->_MinValue) {
    (pFVar15->_MinValue).Value.TypedValue = 0.0;
    (pFVar15->_MinValue).Value.bIsSet = true;
  }
  (pFVar15->_MinValue).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_MinValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2758);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2758,
             (FWriteAccessScope *)&local_2550);
  if (((int)local_2748 != 0) && (FStack_2750.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2750.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2750,0,0,0x10);
    local_2748 = local_2748 & 0xffffffff00000000;
  }
  if (local_2550.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2550.Accessor,&local_2550);
  }
  if (FStack_2750.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2750.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2758);
  local_278c = 1;
  local_2790 = __real_42200000;
  local_2778 = 0;
  local_2788 = (undefined1  [8])0x0;
  FStack_2780.Data = (FScriptContainerElement *)0x0;
  (pFVar15->_MinDesiredWidth).Value = __real_42200000;
  (pFVar15->_MinDesiredWidth).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_MinDesiredWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2788);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2788,
             (FWriteAccessScope *)&local_2538);
  if (((int)local_2778 != 0) && (FStack_2780.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2780.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2780,0,0,0x10);
    local_2778 = local_2778 & 0xffffffff00000000;
  }
  if (local_2538.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2538.Accessor,&local_2538);
  }
  if (FStack_2780.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2780.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2788);
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_1>,float>
             ::Call;
  (pFVar15->_Value).bIsSet = true;
  local_80 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar15->_Value).Getter,
             (FWriteAccessScope *)&local_24f0);
  local_24d8 = &(pFVar15->_Value).Getter.field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_24d8);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &
               ___7__TBaseFunctorDelegateInstance___A6AMXZUFDefaultDelegateUserPolicy__V__TFunction___A6AMXZ____V__6B_
    ;
    puVar16[4] = local_98;
    puVar16[9] = 0;
    if (local_98 != (code *)0x0) {
      pppuVar27 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar27 = local_70;
      }
      (*(code *)**pppuVar27)();
    }
  }
  if (local_24f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_24f0.Accessor,&local_24f0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar15->_OnValueCommitted,
             (FWriteAccessScope *)&local_2490);
  local_2478 = &(pFVar15->_OnValueCommitted).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_2478);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &TBaseFunctorDelegateInstance<void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::`2'::<lambda_2>_>
                ::_vftable_;
    puVar16[3] = this;
  }
  if (local_2490.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2490.Accessor,&local_2490);
  }
  FLLMScope::FLLMScope(&local_27ac,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_25d0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_25c8,&local_25d0,true);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
            (&local_2458,"SSpinBox<float>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x6b4,&local_27b7);
  FMemScope::~FMemScope(&local_25c8);
  FLLMScope::~FLLMScope(&local_27ac);
  pTVar18 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2458,&local_2378,pFVar15);
  pTVar2 = (pTVar18->SharedReferenceCount).ReferenceController;
  local_1fd8 = pTVar18->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2650 = 0;
  local_2648.ReferenceController = pTVar2;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1fd0,&local_2648);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2648.ReferenceController);
  pFVar9 = SHorizontalBox::FArguments::operator+(pFVar9,(FSlotArguments *)&local_1fe0);
  FLLMScope::FLLMScope(&local_27a8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_25c0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2618,&local_25c0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_2470,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x6a9,&local_27b6);
  FMemScope::~FMemScope(&local_2618);
  FLLMScope::~FLLMScope(&local_27a8);
  pTVar19 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2470,&local_2388,pFVar9);
  pTVar3 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_2770 = (FName)pTVar19->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2388.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2470._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2378.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2458._Widget.SharedReferenceCount.ReferenceController);
  if (local_98 != (code *)0x0) {
    pppuVar27 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar27 = local_70;
    }
    (*(code *)(*pppuVar27)[2])();
  }
  SSpinBox<float>::FArguments::~FArguments(&local_798);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1f88);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fb0);
  if ((void *)local_1fb0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1fb0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1fb0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1fd0[0].ReferenceController);
  if (local_1fe0 != (undefined8 *)0x0) {
    (**(code **)*local_1fe0)(local_1fe0,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2368.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2440._Widget.SharedReferenceCount.ReferenceController);
  if (local_2358.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2358.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_1248);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2158);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2180);
  if ((void *)local_2180._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2180._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2180);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_21a0[0].ReferenceController);
  if (local_21b0 != (undefined8 *)0x0) {
    (**(code **)*local_21b0)(local_21b0,1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1ef8._Slots.AllocatorInstance.Data,local_1ef8._Slots.ArrayNum);
  if ((FSlotArguments *)local_1ef8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1ef8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1ef8);
  pFVar9 = SHorizontalBox::FArguments::FArguments(&local_1cf0);
  pFVar10 = ::operator_new(0x58);
  local_25b8 = pFVar20;
  if (pFVar10 != (FSlot *)0x0) {
    *(undefined8 *)pFVar10 = 0;
    *(undefined8 *)&pFVar10->field_0x8 = 0;
    *(undefined8 *)&pFVar10->field_0x10 = 0;
    *(undefined8 *)&pFVar10->field_0x18 = 0;
    *(undefined8 *)&pFVar10->field_0x20 = 0;
    *(undefined8 *)&pFVar10->field_0x28 = 0;
    *(undefined8 *)&pFVar10->field_0x30 = 0;
    *(undefined8 *)&pFVar10->field_0x38 = 0;
    *(undefined8 *)&pFVar10->field_0x40 = 0;
    *(undefined8 *)&pFVar10->field_0x48 = 0;
    *(undefined8 *)&pFVar10->field_0x50 = 0;
    local_25b8 = SHorizontalBox::FSlot::FSlot(pFVar10);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_20c8,(FSlot *)&local_25b8);
  pFVar11 = (FSizeParam *)FAuto::FAuto((FAuto *)local_22e0);
  TOptional<FSizeParam>::operator=(&local_2070._SizeParam,pFVar11);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_22b0);
  if ((void *)local_22b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_22b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_22b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_22d0);
  if ((void *)local_22d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_22d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_22d0);
  local_2078 = 2;
  local_2074 = 1;
  pFVar12 = STextBlock::FArguments::FArguments(&local_cf0);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_23a8,L"SWidgetReflector",L"NavigationEventSimulationLabel",
                       L"Navigation Event Simulation");
  FText::FText(&local_2710,pFVar13);
  local_2700 = true;
  local_26e8 = 0;
  local_26f8 = (undefined1  [8])0x0;
  FStack_26f0.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar12->_Text).Value,&local_2710);
  (pFVar12->_Text).bIsSet = local_2700;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_26f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_26f8,
             (FWriteAccessScope *)&local_2520);
  if (((int)local_26e8 != 0) && (FStack_26f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_26f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_26f0,0,0,0x10);
    local_26e8 = local_26e8 & 0xffffffff00000000;
  }
  if (local_2520.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2520.Accessor,&local_2520);
  }
  if (FStack_26f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_26f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_26f8);
  if (local_2710.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2710.TextData.Reference + 0x10))();
  }
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_23b8,L"SWidgetReflector",L"NavigationEventSimulationTooltip",
                       L"Build a simulation of all the possible Navigation Events that can occur in the windows."
                      );
  FText::FText(&local_26e0,pFVar13);
  local_26d0 = 1;
  local_26b8 = 0;
  local_26c8 = (undefined1  [8])0x0;
  FStack_26c0.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)pFVar12,&local_26e0);
  *(undefined1 *)&pFVar12->_padding_ = local_26d0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar12->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_26c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_26c8,
             (FWriteAccessScope *)&local_2508);
  if (((int)local_26b8 != 0) && (FStack_26c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_26c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_26c0,0,0,0x10);
    local_26b8 = local_26b8 & 0xffffffff00000000;
  }
  if (local_2508.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2508.Accessor,&local_2508);
  }
  if (FStack_26c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_26c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_26c8);
  if (local_26e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_26e0.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_27a4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_25b0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_25a8,&local_25b0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_23f8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x6c0,&local_27b5);
  FMemScope::~FMemScope(&local_25a8);
  FLLMScope::~FLLMScope(&local_27a4);
  pTVar14 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_23f8,&local_23c8,pFVar12);
  pTVar1 = (pTVar14->SharedReferenceCount).ReferenceController;
  local_20c0 = pTVar14->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2640 = 0;
  local_2638.ReferenceController = pTVar1;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_20b8,&local_2638);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2638.ReferenceController);
  pFVar9 = SHorizontalBox::FArguments::operator+(pFVar9,(FSlotArguments *)&local_20c8);
  pFVar10 = ::operator_new(0x58);
  if (pFVar10 != (FSlot *)0x0) {
    *(undefined8 *)pFVar10 = 0;
    *(undefined8 *)&pFVar10->field_0x8 = 0;
    *(undefined8 *)&pFVar10->field_0x10 = 0;
    *(undefined8 *)&pFVar10->field_0x18 = 0;
    *(undefined8 *)&pFVar10->field_0x20 = 0;
    *(undefined8 *)&pFVar10->field_0x28 = 0;
    *(undefined8 *)&pFVar10->field_0x30 = 0;
    *(undefined8 *)&pFVar10->field_0x38 = 0;
    *(undefined8 *)&pFVar10->field_0x40 = 0;
    *(undefined8 *)&pFVar10->field_0x48 = 0;
    *(undefined8 *)&pFVar10->field_0x50 = 0;
    pFVar20 = SHorizontalBox::FSlot::FSlot(pFVar10);
  }
  local_25a0 = pFVar20;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_2298,(FSlot *)&local_25a0);
  local_2680 = 1;
  local_2668 = 0;
  local_2698[1].ReferenceController =
       (TReferenceControllerBase<1> *)___xmm_00000000408000000000000040800000;
  local_2698[2].ReferenceController = (TReferenceControllerBase<1> *)_UNK_150925088;
  local_2270 = 1;
  local_2678 = (undefined1  [8])0x0;
  FStack_2670.Data = (FScriptContainerElement *)0x0;
  local_2288[1].ReferenceController =
       (TReferenceControllerBase<1> *)___xmm_00000000408000000000000040800000;
  local_2288[2].ReferenceController = (TReferenceControllerBase<1> *)_UNK_150925088;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2268,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2678);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2678,
             (FWriteAccessScope *)&local_2580);
  if (((int)local_2668 != 0) && (FStack_2670.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2670.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2670,0,0,0x10);
    local_2668 = local_2668 & 0xffffffff00000000;
  }
  if (local_2580.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2580.Accessor,&local_2580);
  }
  if (FStack_2670.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2670.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2678);
  local_2250 = 3;
  local_224c = 1;
  pFVar21 = SCheckBox::FArguments::FArguments(&local_1628);
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::__l2::<lambda_3>,enum_ECheckBoxState>
             ::Call;
  (pFVar21->_IsChecked).bIsSet = true;
  local_50 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_IsChecked).Getter
             ,(FWriteAccessScope *)&local_24d0);
  local_24b8 = &(pFVar21->_IsChecked).Getter.field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_24b8);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AW4ECheckBoxState__XZ____V__6B_
    ;
    puVar16[4] = local_68;
    puVar16[9] = 0;
    if (local_68 != (code *)0x0) {
      pppuVar27 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar27 = local_40;
      }
      (*(code *)**pppuVar27)();
    }
  }
  if (local_24d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_24d0.Accessor,&local_24d0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar21->_OnCheckStateChanged,(FWriteAccessScope *)&local_24b0);
  local_2498 = &(pFVar21->_OnCheckStateChanged).field_0x8;
  puVar16 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_2498);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &TBaseFunctorDelegateInstance<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::HandleSnapshotOptionsTreeContextMenu'::`2'::<lambda_4>_>
                ::_vftable_;
    puVar16[3] = this;
  }
  if (local_24b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_24b0.Accessor,&local_24b0);
  }
  FLLMScope::FLLMScope(&local_27a0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2598 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2620,&local_2598,true);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
            (&local_2410,"SCheckBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x6c8,&local_27b4);
  FMemScope::~FMemScope(&local_2620);
  FLLMScope::~FLLMScope(&local_27a0);
  pTVar22 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2410,&local_2338,pFVar21);
  pTVar2 = (pTVar22->SharedReferenceCount).ReferenceController;
  local_2290 = pTVar22->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2630 = 0;
  local_2628.ReferenceController = pTVar2;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_2288,&local_2628);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2628.ReferenceController);
  pFVar9 = SHorizontalBox::FArguments::operator+(pFVar9,(FSlotArguments *)&local_2298);
  FLLMScope::FLLMScope(&local_279c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_25e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2610,&local_25e0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_2428,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x6bb,&local_27b3);
  FMemScope::~FMemScope(&local_2610);
  FLLMScope::~FLLMScope(&local_279c);
  pTVar19 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_2428,&local_2348,pFVar9);
  pTVar4 = (pTVar19->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar19->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2348.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2428._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2338.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2410._Widget.SharedReferenceCount.ReferenceController);
  if (local_68 != (code *)0x0) {
    pppuVar27 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar27 = local_40;
    }
    (*(code *)(*pppuVar27)[2])();
  }
  SCheckBox::FArguments::~FArguments(&local_1628);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2240);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2268);
  if ((void *)local_2268._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2268._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2268);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2288[0].ReferenceController);
  if (local_2298 != (undefined8 *)0x0) {
    (**(code **)*local_2298)(local_2298,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23f8._Widget.SharedReferenceCount.ReferenceController);
  if (local_23b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_23b8.TextData.Reference + 0x10))();
  }
  if (local_23a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_23a8.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_cf0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_2070);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2098);
  if ((void *)local_2098._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_2098._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2098);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20b8[0].ReferenceController);
  if (local_20c8 != (undefined8 *)0x0) {
    (**(code **)*local_20c8)(local_20c8,1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1cf0._Slots.AllocatorInstance.Data,local_1cf0._Slots.ArrayNum);
  if ((FSlotArguments *)local_1cf0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1cf0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1cf0);
  pFVar23 = SVerticalBox::FArguments::FArguments(&local_1ae8);
  pFVar24 = SVerticalBox::Slot(&local_1710);
  pFVar24 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar24->field_0x18,__real_40000000);
  local_26b0 = local_2770;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_26a8.ReferenceController = pTVar3;
  if ((FName *)&pFVar24->field_0x8 != &local_26b0) {
    *(uint *)&pFVar24->field_0x8 = local_2770.ComparisonIndex.Value;
    *(uint *)&pFVar24->field_0xc = local_2770.Number;
    local_26b0.ComparisonIndex.Value = 0;
    local_26b0.Number = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar24->field_0x10,&local_26a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_26a8.ReferenceController);
  pFVar23 = SVerticalBox::FArguments::operator+(pFVar23,pFVar24);
  pFVar24 = SVerticalBox::Slot(&local_17f8);
  pFVar24 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar24->field_0x18,__real_40000000);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_26a0 = pSVar5;
  local_2698[0].ReferenceController = pTVar4;
  if ((SHorizontalBox **)&pFVar24->field_0x8 != &local_26a0) {
    *(SHorizontalBox **)&pFVar24->field_0x8 = pSVar5;
    local_26a0 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar24->field_0x10,local_2698);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2698[0].ReferenceController);
  pFVar23 = SVerticalBox::FArguments::operator+(pFVar23,pFVar24);
  pFVar24 = SVerticalBox::Slot(&local_18e0);
  pFVar24 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar24->field_0x18,__real_40000000);
  if (((this->AvailableSnapshotTargetsComboBox).Object ==
       (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar25 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar25;
  }
  pTVar1 = (this->AvailableSnapshotTargetsComboBox).SharedReferenceCount.ReferenceController;
  pSVar6 = (this->AvailableSnapshotTargetsComboBox).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar6 == (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pTVar25 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar25;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2590.Object = (SWidget *)pSVar6;
  local_2590.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar24 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar24,&local_2590);
  pFVar23 = SVerticalBox::FArguments::operator+(pFVar23,pFVar24);
  FLLMScope::FLLMScope(local_2798,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2770 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2600,&local_2770,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_23e0,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x6cd,local_27b2);
  FMemScope::~FMemScope(&local_2600);
  FLLMScope::~FLLMScope(local_2798);
  pTVar26 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_23e0,&local_2398,pFVar23);
  pTVar25 = local_25f8;
  local_25f8->Object = (SWidget *)pTVar26->Object;
  pTVar2 = (pTVar26->SharedReferenceCount).ReferenceController;
  (local_25f8->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2398.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_23e0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_18e0);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_17f8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_1710);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1ae8._Slots.AllocatorInstance.Data,local_1ae8._Slots.ArrayNum);
  if ((FSlotArguments *)local_1ae8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1ae8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1ae8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return pTVar25;
}

// HandleStartTreeWithUMG @ 142eb6790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleStartTreeWithUMG(SWidgetReflector *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->bFilterReflectorTreeRootWithUMG = this->bFilterReflectorTreeRootWithUMG == false;
  UpdateFilteredTreeRoot(this);
  if ((this->ReflectorTree).Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142eb67ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->ReflectorTree).Object + 0x248))();
  return;
}

// HandleTabManagerPersistLayout @ 142eb6800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleTabManagerPersistLayout
          (SWidgetReflector *this,TSharedRef<FTabManager::FLayout,1> *param_1)

{
  return;
}

// HandleTakeSnapshotButtonClicked @ 142eb6810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::HandleTakeSnapshotButtonClicked(SWidgetReflector *this)

{
  double dVar1;
  FSlateApplication *pFVar2;
  
  if (this->bIsPendingDelayedSnapshot != false) {
    this->bIsPendingDelayedSnapshot = false;
    this->TimeOfScheduledSnapshot = -1.0;
    return;
  }
  if (0.0 < this->SnapshotDelay) {
    this->bIsPendingDelayedSnapshot = true;
    pFVar2 = FSlateApplication::Get();
    dVar1 = (double)(**(code **)(*(longlong *)pFVar2 + 0x60))(pFVar2);
    this->TimeOfScheduledSnapshot = (double)this->SnapshotDelay + dVar1;
    return;
  }
  TakeSnapshot(this);
  return;
}

// IsInPickingMode @ 142ebb650

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall WidgetReflectorImpl::SWidgetReflector::IsInPickingMode(SWidgetReflector *this)

{
  return *(char *)((longlong)&this->_padding_ + 1) != '\0';
}

// IsShowingFocus @ 142ebf740

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall WidgetReflectorImpl::SWidgetReflector::IsShowingFocus(SWidgetReflector *this)

{
  return *(char *)((longlong)&this->_padding_ + 1) == '\x01';
}

// IsSnapshotTargetComboEnabled @ 142ebf760

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
WidgetReflectorImpl::SWidgetReflector::IsSnapshotTargetComboEnabled(SWidgetReflector *this)

{
  return false;
}

// IsTakeSnapshotButtonEnabled @ 142ebf770

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
WidgetReflectorImpl::SWidgetReflector::IsTakeSnapshotButtonEnabled(SWidgetReflector *this)

{
  if (((((this->SelectedSnapshotTargetInstanceId).D != 0 ||
        (this->SelectedSnapshotTargetInstanceId).C != 0) ||
       (this->SelectedSnapshotTargetInstanceId).B != 0) ||
       (this->SelectedSnapshotTargetInstanceId).A != 0) &&
     ((((this->RemoteSnapshotRequestId).D == 0 && (this->RemoteSnapshotRequestId).C == 0) &&
      (this->RemoteSnapshotRequestId).B == 0) && (this->RemoteSnapshotRequestId).A == 0)) {
    return true;
  }
  return false;
}

// IsVisualizingLayoutUnderCursor @ 142ebf7b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
WidgetReflectorImpl::SWidgetReflector::IsVisualizingLayoutUnderCursor(SWidgetReflector *this)

{
  char cVar1;
  
  cVar1 = *(char *)((longlong)&this->_padding_ + 1);
  if ((cVar1 != '\x02') && (cVar1 != '\x03')) {
    return false;
  }
  return true;
}

// LoadSettings @ 142ebfe10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall WidgetReflectorImpl::SWidgetReflector::LoadSettings(SWidgetReflector *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  uint local_res10 [2];
  FString local_18;
  
  pwVar3 = L"";
  pwVar2 = L"";
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  bVar1 = FConfigCacheIni::DoesSectionExist(GConfig,L"WidgetReflector",&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar1) {
    return;
  }
  pwVar2 = L"";
  local_res10[0] = 2;
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  FConfigCacheIni::GetInt
            (GConfig,L"WidgetReflector",L"LastPickingMode",(int *)local_res10,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_res10[0] < 4) {
    this->LastPickingMode = (EWidgetPickingMode)local_res10[0];
    if ((EWidgetPickingMode)local_res10[0] != None) goto LAB_142ebfef7;
  }
  else {
    this->LastPickingMode = None;
  }
  this->LastPickingMode = HitTesting;
LAB_142ebfef7:
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar3);
  FConfigCacheIni::GetArray
            (GConfig,L"WidgetReflector",L"HiddenReflectorTreeColumns",
             &this->HiddenReflectorTreeColumns,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// New @ 142ec4230

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidgetReflector,1> * __cdecl
SWidgetReflector::New(TSharedRef<SWidgetReflector,1> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  SWidgetReflector *pSVar6;
  TSharedRef<SWidgetReflector,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  pSVar6 = FMemory::Malloc(0x4f8,0);
  if (pSVar6 == (SWidgetReflector *)0x0) {
    pSVar6 = (SWidgetReflector *)0x0;
  }
  else {
    memset(pSVar6,0,0x4f8);
    pSVar6 = WidgetReflectorImpl::SWidgetReflector::SWidgetReflector(pSVar6);
    if ((((pSVar6 != (SWidgetReflector *)0x0) && (pSVar6->_padding_ != 0)) &&
        (pSVar6->_padding_ != 0)) && (0 < *(int *)(pSVar6->_padding_ + 8))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedRef<SWidgetReflector,1> *)(*pcVar4)();
        return pTVar7;
      }
    }
  }
  __return_storage_ptr__->Object = (SWidgetReflector *)pSVar6;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VSWidgetReflector_WidgetReflectorImpl__U__DefaultDeleter_VSWidgetReflector_WidgetReflectorImpl___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1]._padding_ = (longlong)pSVar6;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pSVar6 == (SWidgetReflector *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<SWidgetReflector,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  else if (((pSVar6->_padding_ == 0) || (pSVar6->_padding_ == 0)) ||
          (*(int *)(pSVar6->_padding_ + 8) < 1)) {
    pTVar8 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pSVar6->_padding_ = (longlong)pSVar6;
    if (pTVar8 != (TReferenceControllerBase<1> *)pSVar6->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pSVar6->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pSVar6->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  return __return_storage_ptr__;
}

// OnAvailableSnapshotTargetsChanged @ 142ec5d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::OnAvailableSnapshotTargetsChanged(SWidgetReflector *this)

{
  UpdateAvailableSnapshotTargets(this);
  UpdateSelectedSnapshotTarget(this);
  return;
}

// OnCancelPendingRemoteSnapshot @ 142ec6130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::OnCancelPendingRemoteSnapshot(SWidgetReflector *this)

{
  atomic<int> *paVar1;
  TWeakPtr<SNotificationItem,1> *pTVar2;
  FGuid *pFVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  FWidgetSnapshotService *pFVar6;
  SNotificationItem *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  atomic<int> aVar10;
  ulong64 uVar11;
  FText *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  FText local_88;
  longlong local_78 [2];
  FDestructionSentinel local_68;
  FText local_50;
  undefined1 local_40;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  pTVar2 = &this->WidgetSnapshotNotificationPtr;
  pTVar5 = (this->WidgetSnapshotNotificationPtr).WeakReferenceCount.ReferenceController;
  pTVar13 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar5->SharedReferenceCount;
    do {
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_142ec6185;
      LOCK();
      aVar10 = pTVar5->SharedReferenceCount;
      bVar14 = aVar4 == aVar10;
      if (bVar14) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar10 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar10;
    } while (!bVar14);
    pSVar7 = pTVar2->Object;
    pTVar13 = pTVar5;
    if (pSVar7 != (SNotificationItem *)0x0) {
      pcVar9 = *(code **)(*(longlong *)pSVar7 + 0x248);
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_88,L"SWidgetReflector",
                           L"RemoteWidgetSnapshotAbortedNotificationText",
                           L"Aborted Remote Widget Snapshot");
      FText::FText(&local_50,pFVar12);
      local_40 = 1;
      local_28 = 0;
      local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_30.Data = (FScriptContainerElement *)0x0;
      (*pcVar9)(pSVar7,&local_50);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_38,(FWriteAccessScope *)&local_68);
      if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_30.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
        local_28 = local_28 & 0xffffffff00000000;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      if (FStack_30.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_30.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
      if (local_50.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      (**(code **)(*(longlong *)pSVar7 + 0x280))(pSVar7,3);
      (**(code **)(*(longlong *)pSVar7 + 0x288))(pSVar7);
      if (pTVar2 != (TWeakPtr<SNotificationItem,1> *)local_78) {
        pTVar8 = (this->WidgetSnapshotNotificationPtr).WeakReferenceCount.ReferenceController;
        pTVar2->Object = (SNotificationItem *)0x0;
        (this->WidgetSnapshotNotificationPtr).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar8->WeakReferenceCount;
          aVar4 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar4 == (atomic<int>)0x1) {
            (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
          }
        }
      }
    }
  }
LAB_142ec6185:
  if (((this->WidgetSnapshotService).Object == (FWidgetSnapshotService *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar6 = (this->WidgetSnapshotService).Object;
  pFVar3 = &this->RemoteSnapshotRequestId;
  if (*(int *)&(pFVar6->PendingSnapshotResponseHandlers).field_0x8 !=
      *(int *)&(pFVar6->PendingSnapshotResponseHandlers).field_0x34) {
    uVar11 = CityHash64((char *)pFVar3,0x10);
    TSet<TTuple<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                         *)&pFVar6->PendingSnapshotResponseHandlers,(uint)uVar11,pFVar3);
  }
  pFVar3->A = 0;
  pFVar3->B = 0;
  (this->RemoteSnapshotRequestId).C = 0;
  (this->RemoteSnapshotRequestId).D = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  return;
}

// OnTabSpawned @ 142edec30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::OnTabSpawned
          (SWidgetReflector *this,FName *param_1,TSharedRef<SDockTab,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TWeakPtr<SDockTab,1> *pTVar7;
  SDockTab *local_28;
  TReferenceControllerBase<1> *local_20;
  FName *local_18;
  undefined8 *local_10;
  
  pTVar7 = TMapBase<FName,TWeakPtr<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SDockTab,1>,0>_>
           ::Find((TMapBase<FName,TWeakPtr<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SDockTab,1>,0>_>
                   *)&this->SpawnedTabs,*param_1);
  if (pTVar7 == (TWeakPtr<SDockTab,1> *)0x0) {
    local_28 = param_2->Object;
    local_20 = (param_2->SharedReferenceCount).ReferenceController;
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_20->WeakReferenceCount = (atomic<int>)((int)local_20->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_10 = &local_28;
    local_18 = param_1;
    TSet<TTuple<FName,TWeakPtr<SDockTab,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SDockTab,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TWeakPtr<SDockTab,1>_&&>_>
              ((TSet<TTuple<FName,TWeakPtr<SDockTab,1>_>,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SDockTab,1>,0>,FDefaultSetAllocator>
                *)&this->SpawnedTabs,
               (TPairInitializer<FName_const_&,TWeakPtr<SDockTab,1>_&&> *)&stack0x00000008,
               (bool *)&local_18);
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &local_20->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(local_20->_padding_ + 8))(local_20,1);
      }
    }
  }
  else {
    if (((pTVar7->Object != (SDockTab *)0x0) &&
        (pTVar3 = (pTVar7->WeakReferenceCount).ReferenceController,
        pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ExistingTab->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                         ,0x47a,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar7->Object = param_2->Object;
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    if (pTVar3 != (pTVar7->WeakReferenceCount).ReferenceController) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (pTVar7->WeakReferenceCount).ReferenceController;
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
      (pTVar7->WeakReferenceCount).ReferenceController = pTVar3;
    }
  }
  return;
}

// OnWidgetPicked @ 142ee0a10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall WidgetReflectorImpl::SWidgetReflector::OnWidgetPicked(SWidgetReflector *this)

{
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    FVisualTreeCapture::Disable((FVisualTreeCapture *)&this->_padding_);
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  }
  return;
}

// ReflectorNeedsToDrawIn @ 142ef5420

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
WidgetReflectorImpl::SWidgetReflector::ReflectorNeedsToDrawIn
          (SWidgetReflector *this,TSharedRef<SWindow,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  bVar2 = false;
  if ((0 < (int)this->_padding_) && (0 < (int)this->_padding_)) {
    if ((int)this->_padding_ < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    plVar4 = (longlong *)
             (**(code **)(**(longlong **)this->_padding_ + 0x10))
                       (*(longlong **)this->_padding_,local_18);
    if (((SWindow *)*plVar4 != (SWindow *)0x0) && ((SWindow *)*plVar4 == param_1->Object)) {
      bVar5 = true;
      bVar2 = true;
      goto LAB_142ef54b9;
    }
    bVar2 = true;
  }
  bVar5 = false;
LAB_142ef54b9:
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return bVar5;
}

// SaveSettings @ 142efa4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall WidgetReflectorImpl::SWidgetReflector::SaveSettings(SWidgetReflector *this)

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
  FConfigCacheIni::SetArray
            (GConfig,L"WidgetReflector",L"HiddenReflectorTreeColumns",
             &this->HiddenReflectorTreeColumns,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (GEditorPerProjectIni.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)GEditorPerProjectIni.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_18,pwVar2);
  FConfigCacheIni::SetInt
            (GConfig,L"WidgetReflector",L"LastPickingMode",(uint)this->LastPickingMode,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SelectLiveWidget @ 142f02eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::SelectLiveWidget
          (SWidgetReflector *this,TSharedPtr<SWidget_const_,1> *param_1)

{
  STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *pSVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  Type *pTVar5;
  uint uVar6;
  undefined1 *puVar7;
  ForAnyElementType FVar8;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar9;
  undefined1 local_res8 [8];
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> local_68;
  FWidgetReflectorNodeBase *local_58;
  TReferenceControllerBase<1> *local_50;
  TSharedRef<FWidgetReflectorNodeBase,1> local_48;
  TSharedRef<FWidgetReflectorNodeBase,1> local_38;
  
  bVar4 = false;
  if ((this->CurrentUIMode == Live) && (param_1->Object != (SWidget *)0x0)) {
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    FWidgetReflectorNodeUtils::FindLiveWidget(&this->ReflectorTreeRoot,param_1,&local_68);
    iVar3 = local_68.ArrayNum;
    if (0 < local_68.ArrayNum) {
      pTVar9 = (TSharedRef<FWidgetReflectorNodeBase,1> *)
               (local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 0x10);
      FVar8.Data = local_68.AllocatorInstance.Data;
      while( true ) {
        if (local_68.ArrayNum != iVar3) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TSharedRef<FWidgetReflectorNodeBase,1>,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res8);
        }
        pSVar1 = (this->ReflectorTree).Object;
        if ((TSharedRef<FWidgetReflectorNodeBase,1> *)FVar8.Data == pTVar9) break;
        if (pSVar1 == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        puVar7 = &((this->ReflectorTree).Object)->field_0x588;
        pcVar2 = *(code **)(*(longlong *)puVar7 + 0x50);
        local_58 = ((TSharedRef<FWidgetReflectorNodeBase,1> *)FVar8.Data)->Object;
        local_50 = (((TSharedRef<FWidgetReflectorNodeBase,1> *)FVar8.Data)->SharedReferenceCount).
                   ReferenceController;
        if (local_50 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar2)(puVar7,&local_58);
        FVar8.Data = FVar8.Data + 0x10;
      }
      if (pSVar1 == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pSVar1 = (this->ReflectorTree).Object;
      uVar6 = 0;
      if ((int)(local_68.ArrayNum - 1U) < local_68.ArrayNum) {
        uVar6 = ~(local_68.ArrayNum - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_48.Object =
           *(FWidgetReflectorNodeBase **)
            &local_68.AllocatorInstance.Data[(longlong)local_68.ArrayNum * 0x10 + -0x10].field_0x0;
      local_48.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)
            &local_68.AllocatorInstance.Data[(longlong)local_68.ArrayNum * 0x10 + -8].field_0x0;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::RequestScrollIntoView
                ((SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)pSVar1,&local_48,0);
      if ((this->ReflectorTree).Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0)
      {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pSVar1 = (this->ReflectorTree).Object;
      uVar6 = 0;
      if ((int)(local_68.ArrayNum - 1U) < local_68.ArrayNum) {
        uVar6 = ~(local_68.ArrayNum - 1U) >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_38.Object =
           *(FWidgetReflectorNodeBase **)
            &local_68.AllocatorInstance.Data[(longlong)local_68.ArrayNum * 0x10 + -0x10].field_0x0;
      local_38.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)
            &local_68.AllocatorInstance.Data[(longlong)local_68.ArrayNum * 0x10 + -8].field_0x0;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SetSelection
                ((SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)pSVar1,&local_38,Direct);
      bVar4 = true;
    }
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
              ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_68.AllocatorInstance.Data,
               local_68.ArrayNum);
    if ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_68.AllocatorInstance.Data !=
        (TSharedRef<FWidgetReflectorNodeBase,1> *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    if (bVar4) goto LAB_142f031d9;
  }
  if ((this->ReflectorTree).Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->ReflectorTree).Object;
  pTVar5 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar1->field_0x3e8);
  if ((*pTVar5 != None) && (*(int *)&pSVar1->field_0x810 != *(int *)&pSVar1->field_0x83c)) {
    (**(code **)(*(longlong *)&pSVar1->field_0x588 + 0x30))(&pSVar1->field_0x588);
    (**(code **)(*(longlong *)&pSVar1->field_0x588 + 0x40))(&pSVar1->field_0x588,3);
  }
LAB_142f031d9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetAssetAccessDelegate @ 142f036a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::SetAssetAccessDelegate
          (SWidgetReflector *this,
          TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&this->_padding_,
             param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetNodesAsReflectorTreeRoot @ 142f04430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::SetNodesAsReflectorTreeRoot
          (SWidgetReflector *this,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  FWidgetReflectorNodeBase *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  atomic<int> aVar10;
  bool bVar11;
  int iVar12;
  atomic<int> aVar13;
  TReferenceControllerBase<1> *pTVar14;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> local_58;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> local_48;
  TSharedRef<FWidgetReflectorNodeBase,1> local_38;
  
  iVar12 = param_1->ArrayNum;
  pTVar4 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(param_1->AllocatorInstance).Data;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = iVar12;
  if (iVar12 == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar12,0,&local_48.AllocatorInstance,iVar12,&local_48.ArrayMax);
    ConstructItems<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<FWidgetReflectorNodeBase,1>,int>
              (local_48.AllocatorInstance.Data,pTVar4,iVar12);
  }
  FilterSelectedToSetAsReflectorTreeRoot(this,&local_58,&local_48);
  if (0 < local_58.ArrayNum) {
    pTVar3 = &this->FilteredTreeRoot;
    piVar1 = &(this->FilteredTreeRoot).ArrayMax;
    pTVar4 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(pTVar3->AllocatorInstance).Data;
    iVar12 = (this->FilteredTreeRoot).ArrayNum;
    piVar2 = &(this->FilteredTreeRoot).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar4,iVar12);
      *piVar2 = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar4,iVar12);
      *piVar2 = 0;
    }
    if ((pTVar3 == &local_58) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (local_58.ArrayNum != 0) {
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,local_58.ArrayNum,&pTVar3->AllocatorInstance,piVar2,piVar1);
      ConstructItems<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<FWidgetReflectorNodeBase,1>,int>
                ((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 0x10,
                 (TSharedRef<FWidgetReflectorNodeBase,1> *)local_58.AllocatorInstance.Data,
                 local_58.ArrayNum);
    }
    if (((this->ReflectorTree).Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0)
       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (**(code **)(*(longlong *)(this->ReflectorTree).Object + 0x248))();
    if ((local_58.ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar5 = *(longlong *)local_58.AllocatorInstance.Data;
    pTVar6 = *(TReferenceControllerBase<1> **)(lVar5 + 0x60);
    pTVar14 = pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar10 = pTVar6->SharedReferenceCount;
      do {
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
        if (aVar10 == (atomic<int>)0x0) goto LAB_142f04652;
        LOCK();
        aVar13 = pTVar6->SharedReferenceCount;
        bVar11 = aVar10 == aVar13;
        if (bVar11) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
          aVar13 = aVar10;
        }
        UNLOCK();
        aVar10 = aVar13;
      } while (!bVar11);
      pFVar7 = *(FWidgetReflectorNodeBase **)(lVar5 + 0x58);
      pTVar14 = pTVar6;
      if (pFVar7 != (FWidgetReflectorNodeBase *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        local_38.Object = pFVar7;
        local_38.SharedReferenceCount.ReferenceController = pTVar6;
        CreateCrumbTrailForNode(this,&local_38);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        goto LAB_142f046d6;
      }
    }
LAB_142f04652:
    if (((this->BreadCrumb).Object ==
         (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::ClearCrumbs
              ((this->BreadCrumb).Object,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
LAB_142f046d6:
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_58.AllocatorInstance.Data,
             local_58.ArrayNum);
  if ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_58.AllocatorInstance.Data !=
      (TSharedRef<FWidgetReflectorNodeBase,1> *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  pFVar8 = (param_1->AllocatorInstance).Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

// SetPickingMode @ 142f04800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::SetPickingMode
          (SWidgetReflector *this,EWidgetPickingMode param_1)

{
  FVisualTreeCapture *this_00;
  code *pcVar1;
  bool bVar2;
  FSlateApplication *pFVar3;
  undefined1 local_38 [16];
  
  if (this->PickingMode != param_1) {
    this_00 = &this->VisualCapture;
    FVisualTreeCapture::Disable(this_00);
    this->PickingMode = param_1;
    if (param_1 == HitTesting) {
      TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
               *)this_00);
      return;
    }
    if (param_1 == Drawable) {
      if ((this->VisualCapture).bIsEnabled == false) {
        pFVar3 = FSlateApplication::Get();
        TMulticastDelegateRegistration<void___cdecl(SWindow_const_&),FDefaultDelegateUserPolicy>::
        AddRaw<FVisualTreeCapture>
                  ((TMulticastDelegateRegistration<void___cdecl(SWindow_const_&),FDefaultDelegateUserPolicy>
                    *)&pFVar3->WindowBeingDestroyedEvent,(FVisualTreeCapture *)&stack0x00000008,
                   (pmf_7b5a04c4)this_00);
        TMulticastDelegateRegistration<void___cdecl(FSlateWindowElementList_const_&),FDefaultDelegateUserPolicy>
        ::AddRaw<FVisualTreeCapture>
                  ((TMulticastDelegateRegistration<void___cdecl(FSlateWindowElementList_const_&),FDefaultDelegateUserPolicy>
                    *)&FSlateDebugging::BeginWindow,(FVisualTreeCapture *)&stack0x00000018,
                   (pmf_0818e570)this_00);
        TMulticastDelegateRegistration<void___cdecl(FSlateWindowElementList_const_&),FDefaultDelegateUserPolicy>
        ::AddRaw<FVisualTreeCapture>
                  ((TMulticastDelegateRegistration<void___cdecl(FSlateWindowElementList_const_&),FDefaultDelegateUserPolicy>
                    *)&FSlateDebugging::EndWindow,(FVisualTreeCapture *)&stack0x00000020,
                   (pmf_0818e570)this_00);
        TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
        ::AddRaw<FVisualTreeCapture>
                  ((TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FPaintArgs_const_&,FGeometry_const_&,FSlateRect_const_&,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                    *)&FSlateDebugging::BeginWidgetPaint,(FVisualTreeCapture *)local_38,
                   (pmf_f586e512)this_00);
        TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
        ::AddRaw<FVisualTreeCapture>
                  ((TMulticastDelegateRegistration<void___cdecl(SWidget_const_*,FSlateWindowElementList_const_&,int),FDefaultDelegateUserPolicy>
                    *)&FSlateDebugging::EndWidgetPaint,(FVisualTreeCapture *)(local_38 + 8),
                   (pmf_3824bdf4)this_00);
        TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
        ::AddRaw<FVisualTreeCapture>
                  ((TMulticastDelegateRegistration<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
                    *)&FSlateDebugging::ElementTypeAdded,
                   (FVisualTreeCapture *)&stack0xffffffffffffffd8,(pmf_d29daee2)this_00);
        (this->VisualCapture).bIsEnabled = true;
        (this->VisualCapture).WindowIsInvalidationRootCounter = 0;
        (this->VisualCapture).WidgetIsInvalidationRootCounter = 0;
        (this->VisualCapture).WidgetIsInvisibleToWidgetReflectorCounter = 0;
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4767386614496231561>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\VisualTreeCapture.cpp"
                           ,0x89,"bIsEnabled == false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  return;
}

// SetSourceAccessDelegate @ 142f05b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::SetSourceAccessDelegate
          (SWidgetReflector *this,
          TDelegate<bool___cdecl(FString_const_&,int,int),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<bool___cdecl(FString_const_&,int,int),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(FString_const_&,int,int),FDefaultDelegateUserPolicy> *)
             &this->_padding_,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetUIMode @ 142f05c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::SetUIMode
          (SWidgetReflector *this,EWidgetReflectorUIMode param_1)

{
  int *piVar1;
  int iVar2;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar3;
  FTabManager *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  atomic<int> aVar9;
  SWidgetSnapshotVisualizer *this_00;
  TWeakPtr<SDockTab,1> *pTVar10;
  FName local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (this->CurrentUIMode != param_1) {
    this->CurrentUIMode = param_1;
    piVar1 = &(this->SelectedNodes).ArrayMax;
    pTVar3 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(this->SelectedNodes).AllocatorInstance.Data;
    iVar2 = (this->SelectedNodes).ArrayNum;
    if ((this->SelectedNodes).ArrayMax < 0) {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar2);
      (this->SelectedNodes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->SelectedNodes).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar2);
      (this->SelectedNodes).ArrayNum = 0;
    }
    piVar1 = &(this->PickedWidgetPath).ArrayMax;
    pTVar3 = (TSharedRef<FWidgetReflectorNodeBase,1> *)
             (this->PickedWidgetPath).AllocatorInstance.Data;
    iVar2 = (this->PickedWidgetPath).ArrayNum;
    if ((this->PickedWidgetPath).ArrayMax < 0) {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar2);
      (this->PickedWidgetPath).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->PickedWidgetPath).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar2);
      (this->PickedWidgetPath).ArrayNum = 0;
    }
    piVar1 = &(this->ReflectorTreeRoot).ArrayMax;
    pTVar3 = (TSharedRef<FWidgetReflectorNodeBase,1> *)
             (this->ReflectorTreeRoot).AllocatorInstance.Data;
    iVar2 = (this->ReflectorTreeRoot).ArrayNum;
    if ((this->ReflectorTreeRoot).ArrayMax < 0) {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar2);
      (this->ReflectorTreeRoot).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->ReflectorTreeRoot).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar2);
      (this->ReflectorTreeRoot).ArrayNum = 0;
    }
    piVar1 = &(this->FilteredTreeRoot).ArrayMax;
    pTVar3 = (TSharedRef<FWidgetReflectorNodeBase,1> *)
             (this->FilteredTreeRoot).AllocatorInstance.Data;
    iVar2 = (this->FilteredTreeRoot).ArrayNum;
    if ((this->FilteredTreeRoot).ArrayMax < 0) {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar2);
      (this->FilteredTreeRoot).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->FilteredTreeRoot).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar2);
      (this->FilteredTreeRoot).ArrayNum = 0;
    }
    if (((this->ReflectorTree).Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (**(code **)(*(longlong *)(this->ReflectorTree).Object + 0x248))();
    if (this->CurrentUIMode == Snapshot) {
      if (((this->TabManager).Object == (FTabManager *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->TabManager).Object;
      local_20 = 0xffffffff;
      local_1c = 1;
      local_28 = WidgetReflectorTabID::SnapshotWidgetPicker;
      (**(code **)(pFVar4->_padding_ + 8))(pFVar4,local_18,&local_28,0);
    }
    else {
      FWidgetSnapshotData::Reset(&this->SnapshotData);
      if ((this->WidgetSnapshotVisualizer).Object != (SWidgetSnapshotVisualizer *)0x0) {
        this_00 = TSharedPtr<SWidgetSnapshotVisualizer,1>::operator->
                            (&this->WidgetSnapshotVisualizer);
        SWidgetSnapshotVisualizer::SnapshotDataUpdated(this_00);
      }
      pTVar10 = TMapBase<FName,TWeakPtr<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SDockTab,1>,0>_>
                ::Find((TMapBase<FName,TWeakPtr<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SDockTab,1>,0>_>
                        *)&this->SpawnedTabs,WidgetReflectorTabID::SnapshotWidgetPicker);
      if (pTVar10 == (TWeakPtr<SDockTab,1> *)0x0) goto LAB_142f05f13;
      pTVar5 = (pTVar10->WeakReferenceCount).ReferenceController;
      local_10 = pTVar5;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        aVar7 = pTVar5->SharedReferenceCount;
        do {
          local_10 = (TReferenceControllerBase<1> *)0x0;
          if (aVar7 == (atomic<int>)0x0) goto LAB_142f05f04;
          LOCK();
          aVar9 = pTVar5->SharedReferenceCount;
          bVar8 = aVar7 == aVar9;
          if (bVar8) {
            pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
            aVar9 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar9;
        } while (!bVar8);
        local_10 = pTVar5;
        if (pTVar10->Object != (SDockTab *)0x0) {
          SDockTab::RequestCloseTab(pTVar10->Object);
        }
      }
    }
LAB_142f05f04:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
LAB_142f05f13:
  if (((this->BreadCrumb).Object == (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0
      ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::ClearCrumbs
            ((this->BreadCrumb).Object,false);
  return;
}

// SetWidgetsToVisualize @ 142f06200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::SetWidgetsToVisualize
          (SWidgetReflector *this,FWidgetPath *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  FWidgetReflectorNodeBase *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FArrangedWidget *pFVar11;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar12;
  undefined8 *puVar13;
  FWidgetReflectorNodeBase *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedRef<FWidgetReflectorNodeBase,1> local_38;
  
  plVar4 = &this->_padding_;
  iVar10 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
              ((TSharedRef<FWidgetReflectorNodeBase,1> *)*plVar4,iVar10);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)plVar4,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
              ((TSharedRef<FWidgetReflectorNodeBase,1> *)*plVar4,iVar10);
    *(undefined4 *)&this->_padding_ = 0;
  }
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  pTVar12 = (TSharedRef<FWidgetReflectorNodeBase,1> *)this->_padding_;
  iVar10 = (int)this->_padding_;
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar12,iVar10);
    iVar10 = *piVar2;
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar10 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->_padding_,0,piVar2);
    }
  }
  else {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar12,iVar10);
    *(undefined4 *)&this->_padding_ = 0;
  }
  plVar5 = &this->_padding_;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  iVar10 = (int)this->_padding_;
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
              ((TSharedRef<FWidgetReflectorNodeBase,1> *)*plVar5,iVar10);
    iVar10 = *piVar2;
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar10 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)plVar5,0,piVar2);
    }
  }
  else {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
              ((TSharedRef<FWidgetReflectorNodeBase,1> *)*plVar5,iVar10);
    *(undefined4 *)&this->_padding_ = 0;
  }
  piVar3 = (int *)((longlong)&this->_padding_ + 4);
  pTVar12 = (TSharedRef<FWidgetReflectorNodeBase,1> *)this->_padding_;
  iVar10 = (int)this->_padding_;
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar12,iVar10);
    iVar10 = *piVar3;
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar10 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->_padding_,0,piVar3);
    }
  }
  else {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar12,iVar10);
    *(undefined4 *)&this->_padding_ = 0;
  }
  bVar9 = FWidgetPath::IsValid(param_1);
  if (bVar9) {
    pFVar11 = FArrangedChildren::operator[](&param_1->Widgets,0);
    pTVar12 = FWidgetReflectorNodeUtils::NewNodeTreeFrom(&local_38,Live,pFVar11);
    pTVar6 = (pTVar12->SharedReferenceCount).ReferenceController;
    pFVar7 = pTVar12->Object;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48 = pFVar7;
    local_40 = pTVar6;
    if (((FWidgetReflectorNodeBase **)*plVar4 <= &local_48) &&
       (&local_48 < (FWidgetReflectorNodeBase **)*plVar4 + (longlong)*piVar1 * 2)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar10 = (int)this->_padding_;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)plVar4,piVar1);
    }
    puVar13 = (undefined8 *)((longlong)iVar10 * 0x10 + *plVar4);
    *(int *)&this->_padding_ = iVar10 + 1;
    *puVar13 = local_48;
    puVar13[1] = local_40;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    iVar10 = (int)this->_padding_;
    if (*piVar2 < 0) {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
                ((TSharedRef<FWidgetReflectorNodeBase,1> *)*plVar5,iVar10);
      iVar10 = *piVar2;
      *(undefined4 *)&this->_padding_ = 0;
      if (iVar10 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)plVar5,0,piVar2);
      }
    }
    else {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
                ((TSharedRef<FWidgetReflectorNodeBase,1> *)*plVar5,iVar10);
      *(undefined4 *)&this->_padding_ = 0;
    }
    if ((param_1->Widgets).Array.ArrayNum != 0) {
      WidgetReflectorNodeUtilsImpl::FindLiveWidgetPath
                ((TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *)
                 plVar4,param_1,
                 (TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *)
                 plVar5,0);
    }
    UpdateFilteredTreeRoot((SWidgetReflector *)&this[-1]._padding_);
  }
  if (this->_padding_ == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142f06580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x248))();
  return;
}

// SpawnSlateOptionWidgetTab @ 142f07c70

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
WidgetReflectorImpl::SWidgetReflector::SpawnSlateOptionWidgetTab
          (SWidgetReflector *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,
          FSpawnTabArgs *param_1)

{
  code *pcVar1;
  SSlateOptions *pSVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  FArguments *pFVar7;
  FText *pFVar8;
  FSlateBaseNamedArgs *pFVar9;
  TSharedRef<SDockTab,1> *pTVar10;
  T0RequiredArgs local_res10 [16];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_708;
  FLLMScope local_704;
  TSlateDecl<SSlateOptions,RequiredArgs::T0RequiredArgs> local_700;
  FText local_6e8;
  bool local_6d8;
  undefined1 local_6d0 [8];
  ForAnyElementType FStack_6c8;
  ulonglong local_6c0;
  FName local_6b8;
  FMemScope local_6b0;
  FName local_6a8;
  FMemScope local_6a0;
  FDestructionSentinel local_698;
  SWidget *local_680;
  TReferenceControllerBase<1> *pTStack_678;
  FText local_670;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_660;
  FSlateBaseNamedArgs local_648;
  FArguments local_450;
  
  pFVar7 = SDockTab::FArguments::FArguments(&local_450);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_670,L"SWidgetReflector",L"ToolbarTab",L"Toolbar");
  FText::FText(&local_6e8,pFVar8);
  local_6d8 = true;
  local_6c0 = 0;
  local_6d0 = (undefined1  [8])0x0;
  FStack_6c8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar7->_Label).Value,&local_6e8);
  (pFVar7->_Label).bIsSet = local_6d8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6d0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6d0,
             (FWriteAccessScope *)&local_698);
  if (((int)local_6c0 != 0) && (FStack_6c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6c8,0,0,0x10);
    local_6c0 = local_6c0 & 0xffffffff00000000;
  }
  if (local_698.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_698.Accessor,&local_698);
  }
  if (FStack_6c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6d0);
  if (local_6e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6e8.TextData.Reference + 0x10))();
  }
  pFVar7->_ShouldAutosize = true;
  pFVar9 = (FSlateBaseNamedArgs *)SSlateOptions::FArguments::FArguments((FArguments *)&local_648);
  FLLMScope::FLLMScope(&local_708,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6b0,&local_6b8,true);
  TSlateDecl<SSlateOptions,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSlateOptions,RequiredArgs::T0RequiredArgs>
            (&local_700,"SSlateOptions",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x2e2,local_res10);
  FMemScope::~FMemScope(&local_6b0);
  FLLMScope::~FLLMScope(&local_708);
  pSVar2 = local_700._Widget.Object;
  if (local_700._Widget.Object == (SSlateOptions *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar10 = (TSharedRef<SDockTab,1> *)(*pcVar1)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_700._Widget.Object,pFVar9);
  (**(code **)(*(longlong *)local_700._Widget.Object + 0x248))(local_700._Widget.Object,pFVar9);
  if (local_700._Widget.Object == (SSlateOptions *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar10 = (TSharedRef<SDockTab,1> *)(*pcVar1)();
      return pTVar10;
    }
  }
  if ((local_700._Widget.Object)->bForceVolatile == '\0') {
    cVar5 = (**(code **)(*(longlong *)local_700._Widget.Object + 0x228))(local_700._Widget.Object);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_142f07eb6;
  }
  bVar6 = 0x20;
LAB_142f07eb6:
  (local_700._Widget.Object)->bCachedVolatile = '\0';
  (local_700._Widget.Object)->field_0x30 = (local_700._Widget.Object)->field_0x30 | bVar6;
  if (local_700._Widget.Object == (SSlateOptions *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar10 = (TSharedRef<SDockTab,1> *)(*pcVar1)();
      return pTVar10;
    }
  }
  (local_700._Widget.Object)->bIsDeclarativeSyntaxConstructionCompleted = '\x01';
  if (local_700._Widget.Object == (SSlateOptions *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar10 = (TSharedRef<SDockTab,1> *)(*pcVar1)();
      return pTVar10;
    }
  }
  FVar3.ReferenceController = local_700._Widget.SharedReferenceCount.ReferenceController;
  local_700._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_700._Widget.Object = (SSlateOptions *)0x0;
  if (pSVar2 == (SSlateOptions *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar10 = (TSharedRef<SDockTab,1> *)(*pcVar1)();
      return pTVar10;
    }
  }
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar3.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar3.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_680 = (pFVar7->_Content).Widget.Object;
  pTStack_678 = (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar7->_Content).Widget.Object = (SWidget *)pSVar2;
  (pFVar7->_Content).Widget.SharedReferenceCount.ReferenceController = FVar3.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_678);
  FLLMScope::FLLMScope(&local_704,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6a0,&local_6a8,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (&local_660,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x2de,local_res20);
  FMemScope::~FMemScope(&local_6a0);
  FLLMScope::~FLLMScope(&local_704);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_660,__return_storage_ptr__,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_660._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_700._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_648);
  if (local_670.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_670.TextData.Reference + 0x10))();
  }
  SDockTab::FArguments::~FArguments(&local_450);
  return __return_storage_ptr__;
}

// SpawnSnapshotWidgetPicker @ 142f08080

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker
          (SWidgetReflector *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,
          FSpawnTabArgs *param_1)

{
  byte *pbVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FName FVar5;
  code *pcVar6;
  SWidgetSnapshotVisualizer *pSVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  TSharedRef<SWidget,1> *pTVar12;
  FArguments *pFVar13;
  FText *pFVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  FArguments *pFVar17;
  TSharedRef<SDockTab,1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  SWidgetReflector *local_res8;
  TSharedRef<SDockTab,1> *local_res10;
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_7e8 [4];
  FLLMScope local_7e4;
  FArguments *local_7e0;
  FName local_7d8;
  TSlateDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs> local_7d0;
  FText local_7b8;
  bool local_7a8;
  undefined1 local_7a0 [8];
  ForAnyElementType FStack_798;
  ulonglong local_790;
  TReferenceControllerBase<1> *local_788;
  FMemScope local_780;
  FName local_778;
  FMemScope local_770;
  TSharedRef<SWidget,1> local_768;
  FDestructionSentinel local_758;
  FDestructionSentinel local_740;
  undefined1 *local_728;
  FDestructionSentinel local_720;
  undefined1 *local_708;
  FDestructionSentinel local_700;
  undefined1 *local_6e8;
  SWidgetSnapshotVisualizer *local_6e0;
  TReferenceControllerBase<1> *pTStack_6d8;
  SWidget *local_6d0;
  TReferenceControllerBase<1> *pTStack_6c8;
  FText local_6c0;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_6b0;
  undefined1 local_698 [512];
  undefined1 local_498 [24];
  undefined1 local_480 [24];
  FArguments local_468;
  
  local_res8 = this;
  local_res10 = __return_storage_ptr__;
  pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_768);
  pTVar4 = (pTVar12->SharedReferenceCount).ReferenceController;
  FVar5 = (FName)pTVar12->Object;
  local_788 = pTVar4;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_768.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_768.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_7d8 = FVar5;
  pFVar13 = SDockTab::FArguments::FArguments(&local_468);
  local_7e0 = pFVar13;
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_6c0,L"SWidgetReflector",L"SnapshotWidgetPickerTab",
                       L"Snapshot Widget Picker");
  FText::FText(&local_7b8,pFVar14);
  local_7a8 = true;
  local_790 = 0;
  local_7a0 = (undefined1  [8])0x0;
  FStack_798.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar13->_Label).Value,&local_7b8);
  (pFVar13->_Label).bIsSet = local_7a8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar13->_Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7a0,
             (FWriteAccessScope *)&local_758);
  if (((int)local_790 != 0) && (FStack_798.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_798.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_798,0,0,0x10);
    local_790 = local_790 & 0xffffffff00000000;
  }
  if (local_758.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_758.Accessor,&local_758);
  }
  if (FStack_798.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_798.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7a0);
  if (local_7b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7b8.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar13->_OnTabClosed,
             (FWriteAccessScope *)&local_740);
  local_728 = &(pFVar13->_OnTabClosed).field_0x8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_728);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedRef_VSDockTab___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &TBaseFunctorDelegateInstance<void___cdecl(TSharedRef<SDockTab,1>),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::`2'::<lambda_1>_>
                ::_vftable_;
    *(FName *)(puVar15 + 3) = FVar5;
    puVar15[4] = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_740.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_740.Accessor,&local_740);
  }
  pFVar17 = SWidgetSnapshotVisualizer::FArguments::FArguments((FArguments *)local_698);
  pFVar17->_SnapshotData = &local_res8->SnapshotData;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar17->_OnWidgetPathPicked
             ,(FWriteAccessScope *)&local_720);
  local_708 = &(pFVar17->_OnWidgetPathPicked).field_0x8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_708);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_V__TSharedRef_VFWidgetReflectorNodeBase___00__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::`2'::<lambda_2>_>
                ::_vftable_;
    *(FName *)(puVar15 + 3) = local_7d8;
    puVar15[4] = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_720.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_720.Accessor,&local_720);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar17->_OnSnapshotWidgetSelected,(FWriteAccessScope *)&local_700);
  local_6e8 = &(pFVar17->_OnSnapshotWidgetSelected).field_0x8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_6e8);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &___7__TCommonDelegateInstanceState___A6AX_K_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &TBaseFunctorDelegateInstance<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy,`WidgetReflectorImpl::SWidgetReflector::SpawnSnapshotWidgetPicker'::`2'::<lambda_3>_>
                ::_vftable_;
    *(FName *)(puVar15 + 3) = FVar5;
    puVar15[4] = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
  }
  if (local_700.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_700.Accessor,&local_700);
  }
  FLLMScope::FLLMScope(&local_7e4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_780,&local_7d8,true);
  TSlateDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWidgetSnapshotVisualizer,RequiredArgs::T0RequiredArgs>
            (&local_7d0,"SWidgetSnapshotVisualizer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x408,local_res20);
  FMemScope::~FMemScope(&local_780);
  FLLMScope::~FLLMScope(&local_7e4);
  if (local_7d0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_7d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_6e0 = (local_res8->WidgetSnapshotVisualizer).Object;
  pTStack_6d8 = (local_res8->WidgetSnapshotVisualizer).SharedReferenceCount.ReferenceController;
  (local_res8->WidgetSnapshotVisualizer).Object = local_7d0._Widget.Object;
  (local_res8->WidgetSnapshotVisualizer).SharedReferenceCount.ReferenceController =
       local_7d0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_6d8);
  pSVar7 = local_7d0._Widget.Object;
  if (local_7d0._Widget.Object == (SWidgetSnapshotVisualizer *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar18 = (TSharedRef<SDockTab,1> *)(*pcVar6)();
      return pTVar18;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_7d0._Widget.Object,(FSlateBaseNamedArgs *)pFVar17);
  SWidgetSnapshotVisualizer::Construct(local_7d0._Widget.Object,pFVar17);
  if (local_7d0._Widget.Object == (SWidgetSnapshotVisualizer *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar18 = (TSharedRef<SDockTab,1> *)(*pcVar6)();
      return pTVar18;
    }
  }
  if (((local_7d0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_7d0._Widget.Object)->_padding_ + 0x228))(local_7d0._Widget.Object);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_142f084d5;
  }
  bVar11 = 0x20;
LAB_142f084d5:
  *(byte *)&(local_7d0._Widget.Object)->_padding_ =
       (byte)(local_7d0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_7d0._Widget.Object)->_padding_ =
       (byte)(local_7d0._Widget.Object)->_padding_ | bVar11;
  if (local_7d0._Widget.Object == (SWidgetSnapshotVisualizer *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar18 = (TSharedRef<SDockTab,1> *)(*pcVar6)();
      return pTVar18;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_7d0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_7d0._Widget.Object == (SWidgetSnapshotVisualizer *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar18 = (TSharedRef<SDockTab,1> *)(*pcVar6)();
      return pTVar18;
    }
  }
  FVar8.ReferenceController = local_7d0._Widget.SharedReferenceCount.ReferenceController;
  local_7d0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_7d0._Widget.Object = (SWidgetSnapshotVisualizer *)0x0;
  if (pSVar7 == (SWidgetSnapshotVisualizer *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar18 = (TSharedRef<SDockTab,1> *)(*pcVar6)();
      return pTVar18;
    }
  }
  pTVar19 = pTVar4;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar19 = local_788;
  }
  local_6d0 = (local_7e0->_Content).Widget.Object;
  pTStack_6c8 = (local_7e0->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_7e0->_Content).Widget.Object = (SWidget *)pSVar7;
  (local_7e0->_Content).Widget.SharedReferenceCount.ReferenceController = FVar8.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_6c8);
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
  ;
  local_778 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_770,&local_778,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (&local_6b0,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x404,local_7e8);
  FMemScope::~FMemScope(&local_770);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
  pTVar18 = local_res10;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=(&local_6b0,local_res10,local_7e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6b0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7d0._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_480);
  if ((void *)local_480._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_480._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_480);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_498);
  if ((void *)local_498._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_498._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_498);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_698);
  if (local_6c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6c0.TextData.Reference + 0x10))();
  }
  SDockTab::FArguments::~FArguments(&local_468);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    LOCK();
    paVar2 = &pTVar4->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    LOCK();
    paVar2 = &pTVar19->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar19->_padding_ + 8))(pTVar19,1);
    }
  }
  return pTVar18;
}

// SpawnWidgetEvents @ 142f08780

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
WidgetReflectorImpl::SWidgetReflector::SpawnWidgetEvents
          (SWidgetReflector *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,
          FSpawnTabArgs *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FArguments *pFVar3;
  FText *pFVar4;
  FArguments *pFVar5;
  TSharedRef<SWidgetEventLog,1> *pTVar6;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [5];
  FName local_res20;
  SWidgetEventLog *local_718;
  undefined8 uStack_710;
  bool local_708;
  FText local_6f8;
  bool local_6e8;
  undefined1 local_6e0 [8];
  ForAnyElementType FStack_6d8;
  ulonglong local_6d0;
  T1RequiredArgs<TSharedRef<SWidget,1>_&&> local_6c8;
  TSharedRef<SWidgetEventLog,1> local_6c0;
  TSharedRef<SWidget,1> local_6b0;
  FText local_6a0;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_690;
  TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_> local_678;
  undefined1 local_660 [504];
  undefined1 local_468 [24];
  FArguments local_450;
  
  pFVar3 = SDockTab::FArguments::FArguments(&local_450);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_6a0,L"SWidgetReflector",L"WidgetEventsTab",L"Widget Events");
  FText::FText(&local_6f8,pFVar4);
  local_6e8 = true;
  local_6d0 = 0;
  local_6e0 = (undefined1  [8])0x0;
  FStack_6d8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar3->_Label).Value,&local_6f8);
  (pFVar3->_Label).bIsSet = local_6e8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar3->_Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6e0,
             (FWriteAccessScope *)&local_718);
  if (((int)local_6d0 != 0) && (FStack_6d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6d8,0,0,0x10);
    local_6d0 = local_6d0 & 0xffffffff00000000;
  }
  if (local_708 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)uStack_710,(FDestructionSentinel *)&local_718);
  }
  if (FStack_6d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6e0);
  if (local_6f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6f8.TextData.Reference + 0x10))();
  }
  pFVar5 = SWidgetEventLog::FArguments::FArguments((FArguments *)local_660);
  uStack_710 = (TReferenceControllerBase<1> *)((ulonglong)uStack_710._4_4_ << 0x20);
  local_718 = (SWidgetEventLog *)SelectLiveWidget;
  TDelegateRegistration<void___cdecl(TSharedPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::
  BindSP<WidgetReflectorImpl::SWidgetReflector>
            ((TDelegateRegistration<void___cdecl(TSharedPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>
              *)&pFVar5->_OnWidgetTokenActivated,this,(pmf_e45b1c14 *)&local_718);
  local_6c8.Arg0 =
       TSharedFromThis<SWidget,1>::AsShared
                 ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_6b0);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_718,&local_res20,true);
  TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>::
  TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
            (&local_678,"SWidgetEventLog",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x435,&local_6c8);
  FMemScope::~FMemScope((FMemScope *)&local_718);
  FLLMScope::~FLLMScope(local_res10);
  pTVar6 = TSlateDecl<SWidgetEventLog,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>::
           operator<<=(&local_678,&local_6c0,pFVar5);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  local_718 = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (pFVar3->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar3->_Content).Widget.Object = (SWidget *)local_718;
  (pFVar3->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  uStack_710 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_718,&local_res20,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (&local_690,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x432,local_res8);
  FMemScope::~FMemScope((FMemScope *)&local_718);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_690,__return_storage_ptr__,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_690._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_678._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6b0.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_468);
  if ((void *)local_468._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_468._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_468);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_660);
  if (local_6a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6a0.TextData.Reference + 0x10))();
  }
  SDockTab::FArguments::~FArguments(&local_450);
  return __return_storage_ptr__;
}

// SpawnWidgetHierarchyTab @ 142f08b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000142f090d1) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
WidgetReflectorImpl::SWidgetReflector::SpawnWidgetHierarchyTab
          (SWidgetReflector *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,
          FSpawnTabArgs *param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  STextBlock *pSVar6;
  FName FVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  TReferenceControllerBase<1> *pTVar12;
  ulonglong uVar13;
  FSharedReferencer<1> FVar14;
  bool bVar15;
  char cVar16;
  byte bVar17;
  int iVar18;
  TSharedRef<SDockTab,1> *pTVar19;
  FArguments *this_00;
  undefined8 *puVar20;
  TSharedRef<SWidget_const_,1> *pTVar21;
  ulong64 uVar22;
  FText *pFVar23;
  TSharedRef<SWidget,1> *pTVar24;
  FArguments *pFVar25;
  TSharedRef<STextBlock,1> *pTVar26;
  SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar27;
  SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar28;
  FName *pFVar29;
  FName FVar30;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *pTVar31;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar32;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar33;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar34;
  FUIAction *pFVar35;
  TAttribute<EMenuPlacement> *pTVar36;
  TAttribute<FText> *pTVar37;
  TAttribute<EVisibility> *pTVar38;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *pTVar39;
  TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *pTVar40;
  TAttribute<FMenuEntryResizeParams> *pTVar41;
  FSlateIcon *pFVar42;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *pTVar43;
  FArguments *pFVar44;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SSpacer,1> *pTVar45;
  ISlateStyle *pIVar46;
  FArguments *pFVar47;
  FArguments *pFVar48;
  FSlotArguments *pFVar49;
  FMargin *pFVar50;
  TAttribute<FMargin> *pTVar51;
  FArguments *pFVar52;
  FSlotArguments *pFVar53;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SHorizontalBox,1> *pTVar54;
  FArguments *pFVar55;
  FSlotArguments *pFVar56;
  FArguments *pFVar57;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SSeparator,1> *pTVar58;
  FArguments *pFVar59;
  TAttribute<FSlateBrush_const_*> *pTVar60;
  TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar61;
  TSharedRef<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *pTVar62;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *pTVar63;
  TSharedRef<SVerticalBox,1> *pTVar64;
  TAttribute<float> *pTVar65;
  FArguments *pFVar66;
  FArguments *pFVar67;
  FArguments *pFVar68;
  FArguments *pFVar69;
  TAttribute<bool> *pTVar70;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SHeaderRow,1> *pTVar71;
  TSharedPtr<SHeaderRow,1> *pTVar72;
  TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
  *pTVar73;
  TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *pTVar74;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SBorder,1> *pTVar75;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *this_06;
  wchar_t *pwVar76;
  FScriptContainerElement *pFVar77;
  FScriptContainerElement *pFVar78;
  SWidgetReflector *pSVar79;
  FArguments *local_res20;
  ulonglong uStack_7c90;
  bool local_7c88 [8];
  ForAnyElementType local_7c80;
  undefined8 local_7c78;
  FName local_7c70;
  undefined4 uStack_7c68;
  uint uStack_7c64;
  T0RequiredArgs local_7c60;
  T0RequiredArgs local_7c5f;
  T0RequiredArgs local_7c5e;
  T0RequiredArgs local_7c5d;
  T0RequiredArgs local_7c5c;
  T0RequiredArgs local_7c5b;
  T0RequiredArgs local_7c5a;
  T0RequiredArgs local_7c59;
  T0RequiredArgs local_7c58;
  T0RequiredArgs local_7c57;
  T0RequiredArgs local_7c56;
  T0RequiredArgs local_7c55;
  FLLMScope local_7c54;
  FLLMScope local_7c50;
  FName local_7c4c;
  float local_7c44;
  float local_7c40 [2];
  FName local_7c38;
  FText local_7c30;
  undefined1 local_7c20 [8];
  ForAnyElementType local_7c18;
  int local_7c10;
  TSlateDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
  local_7c08;
  undefined1 local_7bf0 [8];
  undefined1 local_7be8 [8];
  void *pvStack_7be0;
  undefined8 local_7bd8;
  undefined1 local_7bd0 [8];
  undefined1 local_7bc8 [8];
  void *pvStack_7bc0;
  undefined8 local_7bb8;
  undefined1 local_7bb0 [8];
  undefined1 local_7ba8 [8];
  void *pvStack_7ba0;
  undefined8 local_7b98;
  undefined1 local_7b90 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7b88;
  ForAnyElementType FStack_7b80;
  ulonglong local_7b78;
  int local_7b70;
  bool local_7b6c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7b68;
  ForAnyElementType FStack_7b60;
  ulonglong local_7b58;
  undefined1 local_7b50 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7b48;
  ForAnyElementType FStack_7b40;
  ulonglong local_7b38;
  bool local_7b2f;
  bool local_7b2d;
  bool local_7b28;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7b20;
  ForAnyElementType FStack_7b18;
  ulonglong local_7b10;
  undefined8 local_7b08;
  FName local_7b00;
  undefined8 local_7af8;
  undefined8 local_7af0;
  undefined8 local_7ae8;
  undefined8 local_7ae0;
  undefined8 local_7ad8;
  undefined8 local_7ad0;
  undefined8 local_7ac8;
  FName local_7ac0;
  undefined4 local_7ab8;
  undefined1 local_7ab4;
  undefined4 local_7ab0;
  undefined1 local_7aac;
  undefined4 local_7aa8;
  undefined1 local_7aa4;
  undefined4 local_7aa0;
  undefined1 local_7a9c;
  undefined4 local_7a98;
  undefined1 local_7a94;
  undefined4 local_7a90;
  undefined1 local_7a8c;
  undefined4 local_7a88;
  undefined1 local_7a84;
  undefined4 local_7a80;
  undefined1 local_7a7c;
  undefined4 local_7a78;
  undefined1 local_7a74;
  undefined4 local_7a70;
  undefined1 local_7a6c;
  undefined8 local_7a68;
  undefined8 local_7a60;
  FName local_7a58;
  FName local_7a50;
  FName local_7a48;
  SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *local_7a40;
  FSharedReferencer<1> local_7a38;
  undefined8 local_7a30;
  FTextBuilder local_7a28;
  undefined1 local_7a10 [8];
  FDelegateAllocation local_7a08;
  FText local_79f8;
  undefined1 local_79e8;
  undefined1 local_79e0 [8];
  void *pvStack_79d8;
  undefined8 local_79d0;
  FMemScope local_79c8;
  FMemScope local_79c0;
  FName local_79b8;
  FName local_79b0;
  FSlateBrush *local_79a8;
  FName local_79a0;
  undefined8 local_7998;
  FSharedReferencer<1> FStack_7990;
  FSlateBrush *local_7988;
  undefined1 local_7980 [24];
  undefined1 local_7968 [8];
  void *pvStack_7960;
  undefined8 local_7958;
  TAttribute<EVisibility> local_7950;
  undefined1 local_7930 [208];
  undefined1 local_7860 [8];
  void *pvStack_7858;
  undefined8 local_7850;
  TSharedRef<SWidget,1> local_7848;
  TSharedRef<SWidget,1> local_7838;
  TSharedRef<SWidget,1> local_7828;
  TSharedRef<SWidget,1> local_7818;
  TSharedRef<SWidget,1> local_7808;
  TArray<FName,TSizedDefaultAllocator<32>_> local_77f8;
  TSharedRef<SWidget,1> local_77e8;
  TSharedRef<SWidget,1> local_77d8;
  TAttribute<FMenuEntryResizeParams> local_77c8;
  undefined1 local_76e0 [24];
  FTextBuilder local_76c8;
  FDestructionSentinel local_76b0;
  FDestructionSentinel local_7698;
  FDestructionSentinel local_7680;
  FDestructionSentinel local_7668;
  undefined1 local_7650 [24];
  undefined1 local_7638 [24];
  undefined1 local_7620 [24];
  FDestructionSentinel local_7608;
  FDestructionSentinel local_75f0;
  undefined1 *local_75d8;
  FDestructionSentinel local_75d0;
  undefined1 *local_75b8;
  FDestructionSentinel local_75b0;
  FDelegateAllocation *local_7598;
  FDestructionSentinel local_7590;
  undefined1 *local_7578;
  FDestructionSentinel local_7570;
  longlong *local_7558;
  TAttribute<FText> local_7550;
  code *local_7518;
  ulonglong uStack_7510;
  TSharedRef<SWidget_const_,1> local_7508;
  code *local_74f8;
  longlong lStack_74f0;
  code *local_74e8;
  longlong lStack_74e0;
  TSharedPtr<FToolBarButtonBlock,1> local_74d8;
  FText local_74c8;
  code *local_74b8;
  longlong lStack_74b0;
  code *local_74a8;
  longlong lStack_74a0;
  FText local_7498;
  code *local_7488;
  longlong lStack_7480;
  code *local_7478;
  longlong lStack_7470;
  FText local_7468;
  FText local_7458;
  TSharedRef<SSpacer,1> local_7448;
  code *local_7438;
  longlong lStack_7430;
  code *local_7428;
  longlong lStack_7420;
  code *local_7418;
  longlong lStack_7410;
  TSharedPtr<FToolBarButtonBlock,1> local_7408;
  FText local_73f8;
  code *local_73e8;
  longlong lStack_73e0;
  code *local_73d8;
  longlong lStack_73d0;
  FText local_73c8;
  FText local_73b8;
  code *local_73a8;
  longlong lStack_73a0;
  code *local_7398;
  longlong lStack_7390;
  code *local_7388;
  longlong lStack_7380;
  code *local_7378;
  longlong lStack_7370;
  code *local_7368;
  longlong lStack_7360;
  code *local_7358;
  longlong lStack_7350;
  code *local_7348;
  longlong lStack_7340;
  code *local_7338;
  longlong lStack_7330;
  TSharedRef<SVerticalBox,1> local_7328;
  TSharedRef<SBorder,1> local_7318;
  TSharedRef<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> local_7308;
  TSharedRef<SHeaderRow,1> local_72f8;
  FText local_72e8;
  FText local_72d8;
  FText local_72c8;
  FText local_72b8;
  FText local_72a8;
  FText local_7298;
  FText local_7288;
  FText local_7278;
  FText local_7268;
  FText local_7258;
  FText local_7248;
  FText local_7238;
  FText local_7228;
  FText local_7218;
  FText local_7208;
  FText local_71f8;
  TSharedRef<SVerticalBox,1> local_71e8;
  TSharedRef<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> local_71d8;
  TSharedRef<SSeparator,1> local_71c8;
  TSharedRef<SHorizontalBox,1> local_71b8;
  TSharedRef<SWidget,1> local_71a8;
  code *local_7198;
  longlong lStack_7190;
  FName local_7188 [2];
  FName local_7178;
  FName local_7170 [2];
  FName local_7160;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_7158;
  undefined8 local_7140;
  undefined8 uStack_7138;
  undefined8 local_7130;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_7128;
  undefined8 local_7110;
  undefined8 uStack_7108;
  undefined8 local_7100;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_70f8;
  FTextBuilder local_70e0;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_70c8;
  undefined8 local_70b0;
  undefined8 uStack_70a8;
  undefined8 local_70a0;
  undefined8 local_7098;
  undefined8 uStack_7090;
  undefined8 local_7088;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_7080;
  FName local_7058;
  FName local_7050;
  TSharedPtr<FExtender,1> local_7048;
  TSharedPtr<FUICommandList_const_,1> local_7038;
  TSharedRef<SWidget_const_,1> local_7028;
  TSharedRef<SWidget_const_,1> local_7018;
  TSharedRef<SWidget,1> local_7008;
  TSharedRef<SWidget_const_,1> local_6ff8;
  TSharedRef<STextBlock,1> local_6fe8;
  FText local_6fd8;
  code *local_6fc8;
  longlong lStack_6fc0;
  undefined1 local_6fb8 [40];
  undefined1 local_6f90 [24];
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_6f78;
  TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
  local_6f60;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_6f48;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_6f30;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_6f18;
  TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs> local_6f00;
  TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
  local_6ee8;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> local_6ed0;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_6eb8;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> local_6ea0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> local_6e88;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_6e70;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_6e58;
  TAttribute<FText> local_6e40;
  TAttribute<FText> local_6e10;
  TAttribute<FText> local_6de0;
  TSharedPtr<SHeaderRow,1> local_6db0;
  FMargin local_6da0;
  FMargin local_6d90;
  TSharedRef<SWidget,1> local_6d80;
  FSlateIcon local_6d70;
  TAttribute<FText> local_6d50;
  TAttribute<FText> local_6d20;
  TAttribute<FText> local_6cf0;
  TAttribute<FText> local_6cc0;
  TAttribute<FText> local_6c90;
  FToolBarBuilder local_6c60;
  TAttribute<FSlateIcon> local_6b08;
  TAttribute<FSlateIcon> local_6ac8;
  TAttribute<FSlateIcon> local_6a88;
  TAttribute<FSlateIcon> local_6a48;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_6a08;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_69f0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_69d8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_69c0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_69a8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_6990;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_6978;
  undefined1 local_6960 [32];
  TAttribute<EVisibility> local_6940;
  undefined1 local_6920 [32];
  TAttribute<EVisibility> local_6900;
  FSlateIcon local_68e0;
  TAttribute<EVisibility> local_68c0;
  TAttribute<EVisibility> local_68a0;
  FSlateIcon local_6880;
  undefined1 local_6860 [32];
  TAttribute<EVisibility> local_6840;
  FSlateIcon local_6820;
  TAttribute<float> local_6800;
  TAttribute<float> local_67e0;
  TAttribute<bool> local_67c0;
  undefined8 *local_67a0 [2];
  TReferenceControllerBase<1> *local_6790;
  undefined1 local_6770 [40];
  FSlotArgumentsMixin local_6748;
  TAttribute<FSlateBrush_const_*> local_66b8;
  TAttribute<FSlateBrush_const_*> local_6690;
  undefined1 local_6668 [576];
  undefined1 local_6428 [48];
  undefined1 local_63f8 [48];
  FSharedReferencer<1> local_63c8;
  undefined1 local_63c0 [24];
  undefined1 local_63a8 [24];
  undefined1 local_6390 [32];
  FSharedReferencer<1> local_6370;
  FSharedReferencer<1> local_6360;
  TAttribute<FText> local_6308;
  TAttribute<FText> local_62d8;
  TAttribute<FText> local_62a8;
  TAttribute<FMargin> local_6278;
  TAttribute<FMargin> local_6248;
  TAttribute<FText> local_6218;
  TAttribute<FText> local_61e8;
  TAttribute<FText> local_61b8;
  TAttribute<FText> local_6188;
  TAttribute<FText> local_6158;
  TAttribute<FText> local_6128;
  TAttribute<FText> local_60f8;
  TAttribute<FText> local_60c8;
  TAttribute<FText> local_6098;
  TAttribute<FText> local_6068;
  TAttribute<FText> local_6038;
  TAttribute<FText> local_6008;
  TAttribute<FText> local_5fd8;
  TAttribute<FText> local_5fa8;
  TAttribute<FText> local_5f78;
  TAttribute<FText> local_5f48;
  TAttribute<FText> local_5f18;
  TAttribute<FText> local_5ee8;
  FUIAction local_5eb8;
  FUIAction local_5e50;
  FUIAction local_5de8;
  FUIAction local_5d80;
  FUIAction local_5d18;
  FArguments local_5cb0;
  FArguments local_5aa8;
  TAttribute<FMenuEntryResizeParams> local_58a0;
  TAttribute<FMenuEntryResizeParams> local_57b8;
  TAttribute<FMenuEntryResizeParams> local_56d0;
  FSlotArguments local_55e8;
  FSlotArguments local_5500;
  FSlotArguments local_5418;
  FSlotArguments local_5330;
  FSlotArguments local_5248;
  TAttribute<FMenuEntryResizeParams> local_5160;
  TAttribute<FMenuEntryResizeParams> local_5078;
  FArguments local_4f90;
  FArguments local_4d88;
  FArguments local_4b60;
  FArguments local_4928;
  FArguments local_46b0;
  FArguments local_4238;
  FArguments local_3dc0;
  FArguments local_3948;
  FArguments local_34d0;
  FArguments local_3058;
  FArguments local_2be0;
  FArguments local_2768;
  FArguments local_22f0;
  FArguments local_1e78;
  FArguments local_1a00;
  FArguments local_1588;
  FArguments local_1270;
  FArguments local_e90;
  FArguments local_a68;
  FArguments local_590;
  
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  local_res20 = (FArguments *)((ulonglong)local_res20 & 0xffffffff00000000);
  local_7048.Object = (FExtender *)0x0;
  local_7048.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_7038.Object = (FUICommandList *)0x0;
  local_7038.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FSlimHorizontalToolBarBuilder::FSlimHorizontalToolBarBuilder
            ((FSlimHorizontalToolBarBuilder *)&local_6c60,&local_7038,FMultiBoxCustomization::None,
             &local_7048,false);
  uVar2 = (this->HiddenReflectorTreeColumns).ArrayNum;
  local_7c80.Data = (FScriptContainerElement *)0x0;
  local_7c78 = 0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar2,&local_7c80,0,(int *)((longlong)&local_7c78 + 4));
  }
  iVar3 = (this->HiddenReflectorTreeColumns).ArrayNum;
  pFVar77 = (this->HiddenReflectorTreeColumns).AllocatorInstance.Data;
  pFVar78 = pFVar77 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->HiddenReflectorTreeColumns).ArrayNum != iVar3) {
      local_res20 = (FArguments *)((ulonglong)local_res20 & 0xffffffffffffff00);
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res20);
    }
    if (pFVar77 == pFVar78) break;
    if (*(int *)(pFVar77 + 8) == 0) {
      pwVar76 = L"";
    }
    else {
      pwVar76 = *(wchar_t **)pFVar77;
    }
    ::FName::FName(&local_7c4c,pwVar76);
    if (((local_7c80.Data <= &local_7c4c) &&
        (&local_7c4c < (FName *)(local_7c80.Data + (longlong)local_7c78._4_4_ * 8))) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar8 = (code *)swi(3);
      pTVar19 = (TSharedRef<SDockTab,1> *)(*pcVar8)();
      return pTVar19;
    }
    iVar18 = (int)local_7c78;
    if ((int)local_7c78 == local_7c78._4_4_) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_7c80,(int *)((longlong)&local_7c78 + 4));
    }
    pFVar77 = pFVar77 + 0x10;
    local_7c78 = CONCAT44(local_7c78._4_4_,iVar18 + 1);
    *(FName *)(local_7c80.Data + (longlong)iVar18 * 8) = local_7c4c;
  }
  this_00 = SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FArguments::
            FArguments((FArguments *)local_6668);
  *(undefined1 *)((longlong)&this_00->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
             (FWriteAccessScope *)&local_7570);
  local_7558 = &this_00->_padding_;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_7558);
  pSVar79 = this;
  if (puVar20 != (undefined8 *)0x0) {
    uStack_7c64 = local_7c30._12_4_;
    local_7c70 = (FName)IsSnapshotTargetComboEnabled;
    uStack_7c68 = 0;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_7028);
    pSVar79 = (SWidgetReflector *)(pTVar21->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar21->Object;
    if (pSVar79 != (SWidgetReflector *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar79->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar79->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar79->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar79->_padding_ + 1);
      UNLOCK();
    }
    *puVar20 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetReflector_WidgetReflectorImpl___00__A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pSVar4;
    puVar20[4] = pSVar79;
    if (pSVar79 != (SWidgetReflector *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar79->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar79->_padding_)[1] + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar10 = true;
    bVar9 = true;
    *(FName *)(puVar20 + 5) = local_7c70;
    puVar20[6] = CONCAT44(uStack_7c64,uStack_7c68);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar79);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar79);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7028.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  if (local_7570.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7570.Accessor,&local_7570);
  }
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_6fd8,L"SWidgetReflector",L"ChooseSnapshotTargetToolTipText",
                       L"Choose Snapshot Target");
  FText::FText(&local_79f8,pFVar23);
  local_79e8 = 1;
  local_79d0 = 0;
  local_79e0 = (undefined1  [8])0x0;
  pvStack_79d8 = (void *)0x0;
  FText::operator=((FText *)this_00,&local_79f8);
  *(undefined1 *)&this_00->_padding_ = local_79e8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_79e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_79e0);
  if (pvStack_79d8 != (void *)0x0) {
    FMemory::Free(pvStack_79d8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_79e0);
  if (local_79f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_79f8.TextData.Reference + 0x10))();
  }
  this_00->_OptionsSource_ArrayPointer =
       (TArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSizedDefaultAllocator<32>_>
        *)0x0;
  this_00->_OptionsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
  local_7998 = 0;
  FStack_7990.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this_00->_OptionsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
       *)&local_7998) {
    (this_00->_OptionsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this_00->_OptionsSource_SharedObservableArray).SharedReferenceCount,&FStack_7990);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_7990.ReferenceController);
  this_00->_OptionsSource_ArrayPointer = &this->AvailableSnapshotTargets;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->_OnGenerateWidget,
             (FWriteAccessScope *)&local_7590);
  local_7578 = &(this_00->_OnGenerateWidget).field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_7578);
  pSVar79 = this;
  if (puVar20 != (undefined8 *)0x0) {
    uStack_7c64 = local_7c30._12_4_;
    local_7c70 = (FName)HandleGenerateAvailableSnapshotComboItemWidget;
    uStack_7c68 = 0;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_7018);
    pSVar79 = (SWidgetReflector *)(pTVar21->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar21->Object;
    if (pSVar79 != (SWidgetReflector *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar79->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar79->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar79->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar79->_padding_ + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar11 = true;
    bVar10 = true;
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetReflector_WidgetReflectorImpl___00__A6A_AV__TSharedRef_VSWidget___00__V__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pSVar4;
    puVar20[4] = pSVar79;
    if (pSVar79 != (SWidgetReflector *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar79->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar79->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar20 + 5) = local_7c70;
    puVar20[6] = CONCAT44(uStack_7c64,uStack_7c68);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar79);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar79);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7018.SharedReferenceCount.ReferenceController);
  }
  bVar10 = false;
  bVar9 = false;
  if (local_7590.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7590.Accessor,&local_7590);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_75f0);
  local_75d8 = &(this_00->_OnSelectionChanged).field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_75d8);
  pSVar79 = this;
  if (puVar20 != (undefined8 *)0x0) {
    uStack_7c64 = local_7c30._12_4_;
    local_7c70 = (FName)HandleAvailableSnapshotComboSelectionChanged;
    uStack_7c68 = 0;
    pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_7008);
    pSVar79 = (SWidgetReflector *)(pTVar24->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar24->Object;
    if (pSVar79 != (SWidgetReflector *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar79->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar79->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar79->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar79->_padding_ + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar10 = true;
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetReflector_WidgetReflectorImpl___00__A6AXV__TSharedPtr_UFWidgetSnapshotTarget_WidgetReflectorImpl___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pSVar4;
    puVar20[4] = pSVar79;
    if (pSVar79 != (SWidgetReflector *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar79->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar79->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar20 + 5) = local_7c70;
    puVar20[6] = CONCAT44(uStack_7c64,uStack_7c68);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar79);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7008.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  if (local_75f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_75f0.Accessor,&local_75f0);
  }
  pFVar25 = STextBlock::FArguments::FArguments(&local_590);
  (pFVar25->_Text).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar25->_Text).Getter,
             (FWriteAccessScope *)&local_75d0);
  local_75b8 = &(pFVar25->_Text).Getter.field_0x8;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_75b8);
  pSVar79 = this;
  if (puVar20 != (undefined8 *)0x0) {
    uStack_7c64 = local_7c30._12_4_;
    local_7c70 = (FName)GetSelectedSnapshotTargetDisplayName;
    uStack_7c68 = 0;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_6ff8);
    pSVar79 = (SWidgetReflector *)(pTVar21->SharedReferenceCount).ReferenceController;
    local_7c38 = (FName)pTVar21->Object;
    if (pSVar79 != (SWidgetReflector *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar79->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar79->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar79->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar79->_padding_ + 1);
      UNLOCK();
    }
    bVar9 = true;
    bVar11 = true;
    bVar10 = true;
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetReflector_WidgetReflectorImpl___00__A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    *(FName *)(puVar20 + 3) = local_7c38;
    puVar20[4] = pSVar79;
    if (pSVar79 != (SWidgetReflector *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar79->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar79->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FName *)(puVar20 + 5) = local_7c70;
    puVar20[6] = CONCAT44(uStack_7c64,uStack_7c68);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar79);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar79);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6ff8.SharedReferenceCount.ReferenceController);
  }
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  if (local_75d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_75d0.Accessor,&local_75d0);
  }
  FLLMScope::FLLMScope(&local_7c54,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7c38 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_79c8,&local_7c38,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_7158,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x2fa,&local_7c60);
  FMemScope::~FMemScope(&local_79c8);
  FLLMScope::~FLLMScope(&local_7c54);
  pTVar26 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_7158,&local_6fe8,pFVar25);
  pTVar5 = (pTVar26->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar26->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = (this_00->_Content).Widget.SharedReferenceCount.ReferenceController;
  (this_00->_Content).Widget.Object = (SWidget *)pSVar6;
  (this_00->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  FLLMScope::FLLMScope(&local_7c50,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_7c70 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_79c0,&local_7c70,true);
  TSlateDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,RequiredArgs::T0RequiredArgs>
            (&local_7c08,"SComboBox<TSharedPtr<FWidgetSnapshotTarget>>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x2f3,&local_7c5f);
  FMemScope::~FMemScope(&local_79c0);
  FLLMScope::~FLLMScope(&local_7c50);
  pSVar27 = TSharedPtr<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
            operator->(&local_7c08._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar27,(FSlateBaseNamedArgs *)this_00);
  pSVar27 = local_7c08._Widget.Object;
  SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::Construct
            (local_7c08._Widget.Object,this_00);
  pSVar28 = TSharedPtr<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
            operator->(&local_7c08._Widget);
  if ((pSVar28->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)(pSVar28->_padding_ + 0x228))(pSVar28);
    bVar17 = 0;
    if (cVar16 == '\0') goto LAB_142f093dd;
  }
  bVar17 = 0x20;
LAB_142f093dd:
  *(byte *)&pSVar28->_padding_ = (byte)pSVar28->_padding_ & 0xdf;
  *(byte *)&pSVar28->_padding_ = (byte)pSVar28->_padding_ | bVar17;
  pSVar28 = TSharedPtr<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
            operator->(&local_7c08._Widget);
  pbVar1 = (byte *)((longlong)&pSVar28->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_7c08._Widget.Object ==
       (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TSharedRef<SDockTab,1> *)(*pcVar8)();
    return pTVar19;
  }
  FVar14.ReferenceController = local_7c08._Widget.SharedReferenceCount.ReferenceController;
  local_7c08._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_7c08._Widget.Object =
       (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
  if ((pSVar27 == (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    pTVar19 = (TSharedRef<SDockTab,1> *)(*pcVar8)();
    return pTVar19;
  }
  local_7a40 = pSVar27;
  local_7a38.ReferenceController = FVar14.ReferenceController;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->AvailableSnapshotTargetsComboBox !=
      (TSharedPtr<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1> *)
      &local_7a40) {
    (this->AvailableSnapshotTargetsComboBox).Object = pSVar27;
    local_7a40 = (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AvailableSnapshotTargetsComboBox).SharedReferenceCount,&local_7a38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7a38.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6fe8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7158._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_590);
  if (local_6fd8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6fd8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6360.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6370.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6390);
  if ((void *)local_6390._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6390._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6390);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_63a8);
  if ((void *)local_63a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_63a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_63a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_63c0);
  if ((void *)local_63c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_63c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_63c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_63c8.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_63f8);
  if ((void *)local_63f8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_63f8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_63f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6428);
  if ((void *)local_6428._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6428._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6428);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6668._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_6668);
  local_7a68 = 0;
  local_7a60 = 0;
  pFVar29 = ::FName::FName(local_7188,"Icon.Empty");
  FVar7 = *pFVar29;
  FVar30 = FWidgetReflectorStyle::GetStyleSetName();
  FSlateIcon::FSlateIcon(&local_6d70,*(FName *)FVar30,FVar7,(FName)0x0,(FName)0x0);
  memset(local_7bf0,0,200);
  local_7b70 = 0;
  local_7bd8 = 0;
  local_7bb8 = 0;
  local_7b98 = 0;
  local_7b78 = 0;
  local_7b58 = 0;
  local_7b38 = 0;
  local_7b10 = 0;
  local_7be8 = (undefined1  [8])0x0;
  pvStack_7be0 = (void *)0x0;
  local_7bd0[0] = false;
  local_7bd0[1] = false;
  local_7bc8 = (undefined1  [8])0x0;
  pvStack_7bc0 = (void *)0x0;
  local_7bb0[0] = false;
  local_7bb0[1] = false;
  local_7ba8 = (undefined1  [8])0x0;
  pvStack_7ba0 = (void *)0x0;
  local_7b90[0] = false;
  local_7b90[1] = false;
  local_7b88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_7b80.Data = (FScriptContainerElement *)0x0;
  local_7b6c = false;
  local_7b68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_7b60.Data = (FScriptContainerElement *)0x0;
  local_7b50[0] = Preferred;
  local_7b50[1] = false;
  local_7b48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_7b40.Data = (FScriptContainerElement *)0x0;
  local_7b2f = false;
  local_7b2d = false;
  local_7b28 = false;
  local_7b20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_7b18.Data = (FScriptContainerElement *)0x0;
  pFVar29 = ::FName::FName(&local_7178,"Picking");
  FToolBarBuilder::BeginSection
            (&local_6c60,*pFVar29,true,(TAttribute<FMenuEntryResizeParams> *)local_7bf0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_7b20,(FWriteAccessScope *)&local_7698);
  if (((int)local_7b10 != 0) && (FStack_7b18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7b18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7b18,0,0,0x10);
    local_7b10 = local_7b10 & 0xffffffff00000000;
  }
  if (local_7698.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7698.Accessor,&local_7698);
  }
  if (FStack_7b18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7b18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7b20.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_7b48,(FWriteAccessScope *)&local_76b0);
  if (((int)local_7b38 != 0) && (FStack_7b40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7b40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7b40,0,0,0x10);
    local_7b38 = local_7b38 & 0xffffffff00000000;
  }
  if (local_76b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_76b0.Accessor,&local_76b0);
  }
  if (FStack_7b40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7b40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7b48.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_7b68,(FWriteAccessScope *)&local_7680);
  if (((int)local_7b58 != 0) && (FStack_7b60.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7b60.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7b60,0,0,0x10);
    local_7b58 = local_7b58 & 0xffffffff00000000;
  }
  if (local_7680.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7680.Accessor,&local_7680);
  }
  if (FStack_7b60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7b60.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7b68.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_7b88,(FWriteAccessScope *)&local_7668);
  if (((int)local_7b78 != 0) && (FStack_7b80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7b80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7b80,0,0,0x10);
    local_7b78 = local_7b78 & 0xffffffff00000000;
  }
  if (local_7668.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7668.Accessor,&local_7668);
  }
  if (FStack_7b80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7b80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7b88.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7ba8);
  if (pvStack_7ba0 != (void *)0x0) {
    FMemory::Free(pvStack_7ba0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7ba8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7bc8);
  if (pvStack_7bc0 != (void *)0x0) {
    FMemory::Free(pvStack_7bc0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7bc8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7be8);
  if (pvStack_7be0 != (void *)0x0) {
    FMemory::Free(pvStack_7be0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7be8);
  local_7a28.Lines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7a28.Lines.ArrayNum = 0;
  local_7a28.Lines.ArrayMax = 0;
  local_7a28.IndentCount = 0;
  memset(local_7930,0,200);
  local_7930._128_4_ = 0;
  local_7930._24_8_ = 0;
  local_7930._56_8_ = 0;
  local_7930._88_8_ = 0;
  local_7930._120_8_ = 0;
  local_7930._152_8_ = 0;
  local_7930._184_8_ = 0;
  local_7850 = 0;
  local_7930._8_8_ = 0;
  local_7930._16_8_ = 0;
  local_7930[0x20] = false;
  local_7930[0x21] = false;
  local_7930._40_8_ = 0;
  local_7930._48_8_ = 0;
  local_7930[0x40] = false;
  local_7930[0x41] = false;
  local_7930._72_8_ = 0;
  local_7930._80_8_ = 0;
  local_7930[0x60] = false;
  local_7930[0x61] = false;
  local_7930._104_8_ = 0;
  local_7930._112_8_ = 0;
  local_7930[0x84] = false;
  local_7930._136_8_ = 0;
  local_7930._144_8_ = 0;
  local_7930[0xa0] = Preferred;
  local_7930[0xa1] = false;
  local_7930._168_8_ = 0;
  local_7930._176_8_ = 0;
  local_7930[0xc1] = false;
  local_7930[0xc3] = false;
  local_7930[200] = false;
  local_7860 = (undefined1  [8])0x0;
  pvStack_7858 = (void *)0x0;
  FText::FText(&local_7550.Value);
  uVar13 = (ulonglong)pTVar12 >> 0x20;
  uStack_7c90 = uVar13 << 0x20;
  local_7550.bIsSet = false;
  local_7550.Getter._16_8_ = 0;
  local_6fc8 = HandleGetPickingModeImage;
  lStack_6fc0 = uStack_7c90;
  local_7550.Getter._0_8_ = 0;
  local_7550.Getter._8_8_ = 0;
  local_7950.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
  local_7950.bIsSet = false;
  local_7950.Getter._0_8_ = 0;
  local_7950.Getter._8_8_ = 0;
  local_7950.Getter._16_8_ = 0;
  local_7a58.ComparisonIndex.Value = 0;
  local_7a58.Number = 0;
  pTVar31 = TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      ((TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *)local_7620,
                       this,(pmf_eac39b8d *)&local_6fc8);
  FSlateIcon::FSlateIcon((FSlateIcon *)local_6fb8);
  local_6fb8[0x20] = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6f90,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar31);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7620);
  if ((void *)local_7620._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_7620._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7620);
  pFVar23 = FTextBuilder::ToText(&local_7a28,&local_74c8);
  FText::FText((FText *)local_7980,pFVar23);
  uStack_7c90 = uVar13 << 0x20;
  local_7980[0x10] = true;
  local_7518 = HandleGetPickingModeText;
  uStack_7510 = uStack_7c90;
  local_7968 = (undefined1  [8])0x0;
  pvStack_7960 = (void *)0x0;
  local_7958 = 0;
  pTVar32 = TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_7c20,this,
                       (pmf_87606559 *)&local_7518);
  FText::FText((FText *)local_7650);
  local_7650[0x10] = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7638,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar32);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7c20,
             (FWriteAccessScope *)&local_7608);
  if ((local_7c10 != 0) && (local_7c18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_7c18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_7c18,0,0,0x10);
    local_7c10 = 0;
  }
  if (local_7608.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7608.Accessor,&local_7608);
  }
  if (local_7c18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7c18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7c20);
  local_7a50.ComparisonIndex.Value = 0;
  local_7a50.Number = 0;
  local_7a10 = (undefined1  [8])0x0;
  local_7a08.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_7a08.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7a10,
             (FWriteAccessScope *)&local_75b0);
  local_7598 = &local_7a08;
  puVar20 = UE::Core::Private::DelegateAllocate(0x38,&local_7a08);
  pSVar79 = this;
  if (puVar20 != (undefined8 *)0x0) {
    uStack_7c90 = (ulonglong)(uint)local_7c30._12_4_ << 0x20;
    pTVar21 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_7508);
    pSVar79 = (SWidgetReflector *)(pTVar21->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar21->Object;
    if (pSVar79 != (SWidgetReflector *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar79->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar79->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar79->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar79->_padding_ + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar10 = true;
    bVar9 = true;
    *puVar20 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar20[2] = uVar22;
    *puVar20 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSWidgetReflector_WidgetReflectorImpl___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar20[3] = pSVar4;
    puVar20[4] = pSVar79;
    if (pSVar79 != (SWidgetReflector *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar79->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar79->_padding_)[1] + 1);
      UNLOCK();
    }
    puVar20[5] = HandleGetPickingButtonChecked;
    puVar20[6] = uStack_7c90;
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar79);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar79);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7508.SharedReferenceCount.ReferenceController);
  }
  if (local_75b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_75b0.Accessor,&local_75b0);
  }
  uVar13 = uStack_7c90 >> 0x20;
  uStack_7c90 = uVar13 << 0x20;
  local_74f8 = HandleHasPendingActions;
  lStack_74f0 = uStack_7c90;
  pTVar33 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      (&local_6a08,this,(pmf_579bee4b *)&local_74f8);
  uStack_7c90 = uVar13 << 0x20;
  local_74e8 = HandlePickingModeStateChanged;
  lStack_74e0 = uStack_7c90;
  pTVar34 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      (&local_69f0,this,(pmf_e9d72271 *)&local_74e8);
  pFVar35 = FUIAction::FUIAction
                      (&local_5d18,pTVar34,pTVar33,
                       (TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *)
                       local_7a10,RepeatDisabled);
  FToolBarBuilder::AddToolBarButton
            (&local_6c60,&local_74d8,pFVar35,local_7a50,(TAttribute<FText> *)local_7650,
             (TAttribute<FText> *)local_7980,(TAttribute<FSlateIcon> *)local_6fb8,ToggleButton,
             local_7a58,&local_7950,&local_7550,(TAttribute<FMenuEntryResizeParams> *)local_7930);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_74d8.SharedReferenceCount.ReferenceController);
  FUIAction::~FUIAction(&local_5d18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7638);
  if ((void *)local_7638._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_7638._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7638);
  if ((ITextData *)local_7650._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_7650._0_8_ + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7968);
  if (pvStack_7960 != (void *)0x0) {
    FMemory::Free(pvStack_7960);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7968);
  if ((ITextData *)local_7980._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_7980._0_8_ + 0x10))();
  }
  if (local_74c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_74c8.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6f90);
  if ((void *)local_6f90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6f90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6f90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7860);
  if (pvStack_7858 != (void *)0x0) {
    FMemory::Free(pvStack_7858);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7860);
  FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_7930);
  memset(&local_77c8,0,200);
  local_77c8.Value.Wrapping.Priority.Value = 0;
  local_77c8.Value.ClippingPriority.Getter._16_8_ = 0;
  local_77c8.Value.AllowClipping.Getter._16_8_ = 0;
  local_77c8.Value.VisibleInOverflow.Getter._16_8_ = 0;
  local_77c8.Value.Wrapping.Allow.Getter._16_8_ = 0;
  local_77c8.Value.Wrapping.Priority.Getter._16_8_ = 0;
  local_77c8.Value.Wrapping.Mode.Getter._16_8_ = 0;
  local_77c8.Value.ClippingPriority.Getter._0_8_ = 0;
  local_77c8.Value.ClippingPriority.Getter._8_8_ = 0;
  local_77c8.Value.AllowClipping.Value = false;
  local_77c8.Value.AllowClipping.bIsSet = false;
  local_77c8.Value.AllowClipping.Getter._0_8_ = 0;
  local_77c8.Value.AllowClipping.Getter._8_8_ = 0;
  local_77c8.Value.VisibleInOverflow.Value = false;
  local_77c8.Value.VisibleInOverflow.bIsSet = false;
  local_77c8.Value.VisibleInOverflow.Getter._0_8_ = 0;
  local_77c8.Value.VisibleInOverflow.Getter._8_8_ = 0;
  local_77c8.Value.Wrapping.Allow.Value = false;
  local_77c8.Value.Wrapping.Allow.bIsSet = false;
  local_77c8.Value.Wrapping.Allow.Getter._0_8_ = 0;
  local_77c8.Value.Wrapping.Allow.Getter._8_8_ = 0;
  local_77c8.Value.Wrapping.Priority.bIsSet = false;
  local_77c8.Value.Wrapping.Priority.Getter._0_8_ = 0;
  local_77c8.Value.Wrapping.Priority.Getter._8_8_ = 0;
  local_77c8.Value.Wrapping.Mode.Value = Preferred;
  local_77c8.Value.Wrapping.Mode.bIsSet = false;
  local_77c8.Value.Wrapping.Mode.Getter._0_8_ = 0;
  local_77c8.Value.Wrapping.Mode.Getter._8_8_ = 0;
  local_77c8.Value.Wrapping.VerticalOverflowBehavior.bIsSet = false;
  local_77c8.Value.Wrapping.ForceNewLine.bIsSet = false;
  local_77c8.bIsSet = false;
  local_77c8.Getter._0_8_ = 0;
  local_77c8.Getter._8_8_ = 0;
  local_77c8.Getter._16_8_ = 0;
  TDelegate<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMenuEntryResizeParams___cdecl(void),FDefaultDelegateUserPolicy>(&local_77c8.Getter);
  pTVar36 = TAttribute<enum_EMenuPlacement>::TAttribute<enum_EMenuPlacement>(local_6960);
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_6128);
  pTVar38 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_6940);
  local_7a48.ComparisonIndex.Value = 0;
  local_7a48.Number = 0;
  TAttribute<FSlateIcon>::TAttribute<FSlateIcon><FSlateIcon>(&local_6ac8,&local_6d70);
  pFVar23 = FTextBuilder::ToText(&local_7a28,&local_7498);
  TAttribute<FText>::TAttribute<FText>(&local_6d20,pFVar23);
  pFVar23 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>(&local_6d50,pFVar23);
  uStack_7c90 = uVar13 << 0x20;
  local_74b8 = HandlePickingModeContextMenu;
  lStack_74b0 = uStack_7c90;
  pTVar39 = TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      (&local_6ed0,this,(pmf_8d3aa059 *)&local_74b8);
  local_7130 = 0;
  local_7140 = 0;
  uStack_7138 = 0;
  pTVar40 = TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>(&local_7140);
  uStack_7c90 = uVar13 << 0x20;
  local_74a8 = HandleHasPendingActions;
  lStack_74a0 = uStack_7c90;
  pTVar33 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      (&local_69d8,this,(pmf_579bee4b *)&local_74a8);
  local_7128._16_8_ = 0;
  local_7128._0_8_ = 0;
  local_7128._8_8_ = 0;
  pTVar34 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_7128);
  pFVar35 = FUIAction::FUIAction(&local_5eb8,pTVar34,pTVar33,pTVar40,RepeatDisabled);
  FToolBarBuilder::AddComboButton
            (&local_6c60,pFVar35,pTVar39,&local_6d50,&local_6d20,&local_6ac8,true,local_7a48,pTVar38
             ,pTVar37,pTVar36,Button,&local_77c8);
  FUIAction::~FUIAction(&local_5eb8);
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>(&local_6ed0);
  TAttribute<FText>::~TAttribute<FText>(&local_6d50);
  TAttribute<FText>::~TAttribute<FText>(&local_6d20);
  FText::~FText(&local_7498);
  TAttribute<FSlateIcon>::~TAttribute<FSlateIcon>(&local_6ac8);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_77c8);
  FTextBuilder::~FTextBuilder(&local_7a28);
  FToolBarBuilder::EndSection(&local_6c60);
  pTVar41 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_5160);
  pFVar29 = ::FName::FName(local_7170,"Filter");
  FToolBarBuilder::BeginSection(&local_6c60,*pFVar29,true,pTVar41);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_5160);
  FTextBuilder::FTextBuilder(&local_70e0);
  pTVar41 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_5078);
  pTVar36 = TAttribute<enum_EMenuPlacement>::TAttribute<enum_EMenuPlacement>(local_6920);
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_5f48);
  pTVar38 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_6900);
  FVar7 = WidgetReflectorIcon::Filter;
  local_7b00.ComparisonIndex.Value = 0;
  local_7b00.Number = 0;
  local_7a30 = 0;
  local_7b08 = 0;
  FVar30 = FWidgetReflectorStyle::GetStyleSetName();
  pFVar42 = FSlateIcon::FSlateIcon(&local_68e0,*(FName *)FVar30,FVar7,(FName)0x0,(FName)0x0);
  TAttribute<FSlateIcon>::TAttribute<FSlateIcon>(&local_6a88,pFVar42);
  pFVar23 = FTextBuilder::ToText(&local_70e0,&local_7458);
  TAttribute<FText>::TAttribute<FText>(&local_6cc0,pFVar23);
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_7468,L"SWidgetReflector",L"FilterLabel",L"Filter");
  TAttribute<FText>::TAttribute<FText>(&local_6cf0,pFVar23);
  uStack_7c90 = uVar13 << 0x20;
  local_7488 = HandleReflectorTreeContextMenu;
  lStack_7480 = uStack_7c90;
  pTVar39 = TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      ((TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
                       local_76e0,this,(pmf_8d3aa059 *)&local_7488);
  local_7100 = 0;
  local_7110 = 0;
  uStack_7108 = 0;
  pTVar40 = TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>(&local_7110);
  uStack_7c90 = uVar13 << 0x20;
  local_7478 = HandleHasPendingActions;
  lStack_7470 = uStack_7c90;
  pTVar33 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      (&local_69c0,this,(pmf_579bee4b *)&local_7478);
  local_70f8._16_8_ = 0;
  local_70f8._0_8_ = 0;
  local_70f8._8_8_ = 0;
  pTVar34 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_70f8);
  pFVar35 = FUIAction::FUIAction(&local_5e50,pTVar34,pTVar33,pTVar40,RepeatDisabled);
  FToolBarBuilder::AddComboButton
            (&local_6c60,pFVar35,pTVar39,&local_6cf0,&local_6cc0,&local_6a88,false,local_7b00,
             pTVar38,pTVar37,pTVar36,Button,pTVar41);
  FUIAction::~FUIAction(&local_5e50);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_76e0);
  if ((void *)local_76e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_76e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_76e0);
  TAttribute<FText>::~TAttribute<FText>(&local_6cf0);
  FText::~FText(&local_7468);
  TAttribute<FText>::~TAttribute<FText>(&local_6cc0);
  FText::~FText(&local_7458);
  TAttribute<FSlateIcon>::~TAttribute<FSlateIcon>(&local_6a88);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_5078);
  FTextBuilder::~FTextBuilder(&local_70e0);
  FToolBarBuilder::EndSection(&local_6c60);
  pTVar38 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_68c0);
  local_70c8._16_8_ = 0;
  local_70c8._0_8_ = 0;
  local_70c8._8_8_ = 0;
  pTVar43 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&local_70c8);
  local_7af8 = 0;
  pFVar44 = SSpacer::FArguments::FArguments(&local_4d88);
  this_01 = MakeTDecl<SSpacer,RequiredArgs::T0RequiredArgs>
                      (&local_6eb8,"SSpacer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                       ,0x336,&local_7c5e);
  pTVar45 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_7448,pFVar44);
  pTVar24 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpacer>(&local_6d80,pTVar45);
  FToolBarBuilder::AddWidget(&local_6c60,pTVar24,(FName)0x0,true,HAlign_Right,pTVar43,pTVar38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7448.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6eb8._Widget.SharedReferenceCount.ReferenceController);
  SSpacer::FArguments::~FArguments(&local_4d88);
  pTVar41 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_58a0);
  pFVar29 = ::FName::FName(&local_7160,"Option");
  FToolBarBuilder::BeginSection(&local_6c60,*pFVar29,true,pTVar41);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_58a0);
  FTextBuilder::FTextBuilder(&local_76c8);
  pTVar41 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_57b8);
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_6308);
  pTVar38 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_68a0);
  FVar7 = WidgetReflectorIcon::TakeSnapshot;
  local_7ae0 = 0;
  local_7af0 = 0;
  local_7ae8 = 0;
  FVar30 = FWidgetReflectorStyle::GetStyleSetName();
  pFVar42 = FSlateIcon::FSlateIcon(&local_6880,*(FName *)FVar30,FVar7,(FName)0x0,(FName)0x0);
  TAttribute<FSlateIcon>::TAttribute<FSlateIcon>(&local_6b08,pFVar42);
  pFVar23 = FTextBuilder::ToText(&local_76c8,&local_73f8);
  TAttribute<FText>::TAttribute<FText>(&local_6e40,pFVar23);
  uStack_7c90 = uVar13 << 0x20;
  local_7438 = HandleGetTakeSnapshotText;
  lStack_7430 = uStack_7c90;
  pTVar32 = TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      (&local_6ea0,this,(pmf_87606559 *)&local_7438);
  TAttribute<FText>::Create(&local_6c90,pTVar32);
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>(&local_6ea0);
  local_7ad8 = 0;
  local_70b0 = 0;
  uStack_70a8 = 0;
  local_70a0 = 0;
  pTVar40 = TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>(&local_70b0);
  uStack_7c90 = uVar13 << 0x20;
  local_7428 = IsTakeSnapshotButtonEnabled;
  lStack_7420 = uStack_7c90;
  pTVar33 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      (&local_69a8,this,(pmf_579bee4b *)&local_7428);
  uStack_7c90 = uVar13 << 0x20;
  local_7418 = HandleTakeSnapshotButtonClicked;
  lStack_7410 = uStack_7c90;
  pTVar34 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      (&local_6990,this,(pmf_e9d72271 *)&local_7418);
  pFVar35 = FUIAction::FUIAction(&local_5de8,pTVar34,pTVar33,pTVar40,RepeatDisabled);
  FToolBarBuilder::AddToolBarButton
            (&local_6c60,&local_7408,pFVar35,(FName)0x0,&local_6c90,&local_6e40,&local_6b08,Button,
             (FName)0x0,pTVar38,pTVar37,pTVar41);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7408.SharedReferenceCount.ReferenceController);
  FUIAction::~FUIAction(&local_5de8);
  TAttribute<FText>::~TAttribute<FText>(&local_6c90);
  TAttribute<FText>::~TAttribute<FText>(&local_6e40);
  FText::~FText(&local_73f8);
  TAttribute<FSlateIcon>::~TAttribute<FSlateIcon>(&local_6b08);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_57b8);
  pTVar41 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_56d0);
  pTVar36 = TAttribute<enum_EMenuPlacement>::TAttribute<enum_EMenuPlacement>(local_6860);
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_62d8);
  pTVar38 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_6840);
  FVar7 = WidgetReflectorIcon::Ellipsis;
  local_7ac0.ComparisonIndex.Value = 0;
  local_7ac0.Number = 0;
  local_7ad0 = 0;
  local_7ac8 = 0;
  FVar30 = FWidgetReflectorStyle::GetStyleSetName();
  pFVar42 = FSlateIcon::FSlateIcon(&local_6820,*(FName *)FVar30,FVar7,(FName)0x0,(FName)0x0);
  TAttribute<FSlateIcon>::TAttribute<FSlateIcon>(&local_6a48,pFVar42);
  pFVar23 = FTextBuilder::ToText(&local_76c8,&local_73b8);
  TAttribute<FText>::TAttribute<FText>(&local_6e10,pFVar23);
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_73c8,L"SWidgetReflector",L"OptionsLabel",L"Options");
  TAttribute<FText>::TAttribute<FText>(&local_6de0,pFVar23);
  uStack_7c90 = uVar13 << 0x20;
  local_73e8 = HandleSnapshotOptionsTreeContextMenu;
  lStack_73e0 = uStack_7c90;
  pTVar39 = TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      (&local_6e88,this,(pmf_8d3aa059 *)&local_73e8);
  local_7088 = 0;
  local_7098 = 0;
  uStack_7090 = 0;
  pTVar40 = TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>(&local_7098);
  uStack_7c90 = uVar13 << 0x20;
  local_73d8 = HandleHasPendingActions;
  lStack_73d0 = uStack_7c90;
  pTVar33 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      (&local_6978,this,(pmf_579bee4b *)&local_73d8);
  local_7080._16_8_ = 0;
  local_7080._0_8_ = 0;
  local_7080._8_8_ = 0;
  pTVar34 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&local_7080);
  pFVar35 = FUIAction::FUIAction(&local_5d80,pTVar34,pTVar33,pTVar40,RepeatDisabled);
  FToolBarBuilder::AddComboButton
            (&local_6c60,pFVar35,pTVar39,&local_6de0,&local_6e10,&local_6a48,false,local_7ac0,
             pTVar38,pTVar37,pTVar36,Button,pTVar41);
  FUIAction::~FUIAction(&local_5d80);
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>(&local_6e88);
  TAttribute<FText>::~TAttribute<FText>(&local_6de0);
  FText::~FText(&local_73c8);
  TAttribute<FText>::~TAttribute<FText>(&local_6e10);
  FText::~FText(&local_73b8);
  TAttribute<FSlateIcon>::~TAttribute<FSlateIcon>(&local_6a48);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_56d0);
  FTextBuilder::~FTextBuilder(&local_76c8);
  FToolBarBuilder::EndSection(&local_6c60);
  ::FName::FName(&local_79b8,"SlimToolBar");
  pIVar46 = FAppStyle::Get();
  FMultiBoxBuilder::SetStyle((FMultiBoxBuilder *)&local_6c60,pIVar46,&local_79b8);
  pFVar47 = SDockTab::FArguments::FArguments(&local_e90);
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_7c30,L"SWidgetReflector",L"WidgetHierarchyTab",L"Widget Hierarchy");
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_62a8,pFVar23);
  local_res20 = SDockTab::FArguments::Label(pFVar47,pTVar37);
  pFVar48 = SVerticalBox::FArguments::FArguments(&local_5aa8);
  pFVar49 = SVerticalBox::Slot((FSlotArguments *)local_67a0);
  pFVar49 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar49);
  pFVar50 = FMargin::FMargin(&local_6d90,0.0,__real_40000000);
  pTVar51 = TAttribute<FMargin>::TAttribute<FMargin>(&local_6278,pFVar50);
  pFVar49 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar49->field_0x18,pTVar51);
  pFVar52 = SHorizontalBox::FArguments::FArguments(&local_5cb0);
  pFVar53 = SHorizontalBox::Slot(&local_5248);
  pTVar24 = FMultiBoxBuilder::MakeWidget
                      ((FMultiBoxBuilder *)&local_6c60,&local_71a8,
                       (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                        *)0x0);
  pFVar53 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar53,pTVar24);
  pFVar52 = SHorizontalBox::FArguments::operator+(pFVar52,pFVar53);
  this_02 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_6f30,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                       ,0x375,&local_7c5d);
  pTVar54 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_71b8,pFVar52);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_7828,pTVar54);
  pFVar49 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar49,&local_7828);
  pFVar48 = SVerticalBox::FArguments::operator+(pFVar48,pFVar49);
  pFVar49 = SVerticalBox::Slot(&local_5330);
  pFVar49 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar49);
  pFVar50 = FMargin::FMargin(&local_6da0,__real_40000000,__real_40000000);
  pTVar51 = TAttribute<FMargin>::TAttribute<FMargin>(&local_6248,pFVar50);
  pFVar49 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar49->field_0x18,pTVar51);
  pFVar55 = SVerticalBox::FArguments::FArguments(&local_4f90);
  uStack_7c90 = uVar13 << 0x20;
  local_73a8 = HandleIsBreadcrumbVisible;
  lStack_73a0 = uStack_7c90;
  pFVar55 = TSlateBaseNamedArgs<SVerticalBox>::Visibility<WidgetReflectorImpl::SWidgetReflector>
                      ((TSlateBaseNamedArgs<SVerticalBox> *)pFVar55,this,(pmf_b169e8f8 *)&local_73a8
                      );
  pFVar56 = SVerticalBox::Slot(&local_5418);
  pFVar56 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar56);
  pFVar57 = SSeparator::FArguments::FArguments(&local_4b60);
  pFVar57->_Thickness = 5.0;
  this_03 = MakeTDecl<SSeparator,RequiredArgs::T0RequiredArgs>
                      (&local_6f48,"SSeparator",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                       ,0x385,&local_7c5c);
  pTVar58 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_71c8,pFVar57);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSeparator>(&local_7838,pTVar58);
  pFVar56 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar56,&local_7838);
  pFVar55 = SVerticalBox::FArguments::operator+(pFVar55,pFVar56);
  pFVar56 = SVerticalBox::Slot(&local_5500);
  pFVar59 = SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::FArguments
                      (&local_1588);
  ::FName::FName(&local_79b0,"SimpleButton");
  pIVar46 = FAppStyle::Get();
  pFVar59 = SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::ButtonStyle
                      (pFVar59,pIVar46,&local_79b0,(char *)0x0);
  pIVar46 = FAppStyle::Get();
  pcVar8 = *(code **)((longlong)*pIVar46 + 0x50);
  pFVar29 = ::FName::FName(&local_7058,"Icons.ChevronRight");
  local_79a8 = (FSlateBrush *)(*pcVar8)(pIVar46,*pFVar29,0);
  pTVar60 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                      (&local_66b8,&local_79a8);
  pFVar59 = SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::DelimiterImage
                      (pFVar59,pTVar60);
  ::FName::FName(&local_79a0,"NormalText");
  pIVar46 = FAppStyle::Get();
  pFVar59 = SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::TextStyle
                      (pFVar59,pIVar46,&local_79a0,(char *)0x0);
  uStack_7c90 = uVar13 << 0x20;
  local_7398 = HandleBreadcrumbOnClick;
  lStack_7390 = uStack_7c90;
  pFVar59 = SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::
            OnCrumbClicked<WidgetReflectorImpl::SWidgetReflector>
                      (pFVar59,this,(pmf_ae3c1f48 *)&local_7398);
  uStack_7c90 = uVar13 << 0x20;
  local_7388 = HandleBreadcrumbDelimiterMenu;
  lStack_7380 = uStack_7c90;
  pFVar59 = SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::
            GetCrumbMenuContent<WidgetReflectorImpl::SWidgetReflector>
                      (pFVar59,this,(pmf_af14f270 *)&local_7388);
  pTVar61 = MakeTDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                      (&local_6f60,"SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase>>",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                       ,0x389,&local_7c5b);
  pTVar61 = TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
            ::Expose<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>_>
                      (pTVar61,&this->BreadCrumb);
  pTVar62 = TSlateDecl<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
            ::operator<<=(pTVar61,&local_71d8,pFVar59);
  TSharedRef<SWidget,1>::
  TSharedRef<SWidget,1><SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>_>
            (&local_7848,pTVar62);
  pFVar56 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar56,&local_7848);
  pFVar55 = SVerticalBox::FArguments::operator+(pFVar55,pFVar56);
  pTVar63 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_6f78,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                       ,0x380,&local_7c5a);
  pTVar64 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar63,&local_71e8,pFVar55);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_7808,pTVar64);
  pFVar49 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar49,&local_7808);
  pFVar48 = SVerticalBox::FArguments::operator+(pFVar48,pFVar49);
  pFVar49 = SVerticalBox::Slot(&local_55e8);
  local_7c44 = 1.0;
  pTVar65 = TAttribute<float>::TAttribute<float>(&local_6800,&local_7c44);
  pFVar49 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar49,pTVar65);
  pFVar66 = SBorder::FArguments::FArguments(&local_1270);
  pFVar66 = SBorder::FArguments::Padding(pFVar66,0.0);
  pIVar46 = FAppStyle::Get();
  pcVar8 = *(code **)((longlong)*pIVar46 + 0x50);
  pFVar29 = ::FName::FName(&local_7050,"ToolPanel.GroupBorder");
  local_7988 = (FSlateBrush *)(*pcVar8)(pIVar46,*pFVar29,0);
  pTVar60 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                      (&local_6690,&local_7988);
  pFVar66 = SBorder::FArguments::BorderImage(pFVar66,pTVar60);
  pFVar67 = STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::FArguments(&local_a68);
  pFVar67 = STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::TreeItemsSource
                      (pFVar67,&this->FilteredTreeRoot);
  uStack_7c90 = uVar13 << 0x20;
  local_7378 = HandleReflectorTreeGenerateRow;
  lStack_7370 = uStack_7c90;
  pFVar67 = STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::
            OnGenerateRow<WidgetReflectorImpl::SWidgetReflector>
                      (pFVar67,this,(pmf_289c4fe7 *)&local_7378);
  uStack_7c90 = uVar13 << 0x20;
  local_7198 = HandleReflectorTreeGetChildren;
  lStack_7190 = uStack_7c90;
  pFVar67 = STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::
            OnGetChildren<WidgetReflectorImpl::SWidgetReflector>
                      (pFVar67,this,(pmf_869891fd *)&local_7198);
  uStack_7c90 = uVar13 << 0x20;
  local_7368 = HandleReflectorTreeSelectionChanged;
  lStack_7360 = uStack_7c90;
  pFVar67 = STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::
            OnSelectionChanged<WidgetReflectorImpl::SWidgetReflector>
                      (pFVar67,this,(pmf_df119bca *)&local_7368);
  uStack_7c90 = uVar13 << 0x20;
  local_7358 = HandleReflectorTreeContextMenuPtr;
  lStack_7350 = uStack_7c90;
  pFVar67 = STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::
            OnContextMenuOpening<WidgetReflectorImpl::SWidgetReflector>
                      (pFVar67,this,(pmf_add3f3de *)&local_7358);
  uStack_7c90 = uVar13 << 0x20;
  local_7348 = HandleReflectorTreeOnMouseClick;
  lStack_7340 = uStack_7c90;
  pFVar67 = STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::
            OnMouseButtonClick<WidgetReflectorImpl::SWidgetReflector>
                      (pFVar67,this,(pmf_40475fd2 *)&local_7348);
  pFVar67->_HighlightParentNodesForSelection = true;
  pFVar68 = SHeaderRow::FArguments::FArguments(&local_4928);
  pFVar68->_CanSelectGeneratedColumn = true;
  local_77f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FName,TSizedDefaultAllocator<32>_>::CopyToEmpty<FName,int>
            (&local_77f8,(FName *)local_7c80.Data,(int)local_7c78,0);
  pFVar68 = SHeaderRow::FArguments::HiddenColumnsList(pFVar68,&local_77f8);
  uStack_7c90 = uVar13 << 0x20;
  local_7338 = HandleReflectorTreeHiddenColumnsListChanged;
  lStack_7330 = uStack_7c90;
  pFVar68 = SHeaderRow::FArguments::
            OnHiddenColumnsListChanged<WidgetReflectorImpl::SWidgetReflector>
                      (pFVar68,this,(pmf_e9d72271 *)&local_7338);
  SHeaderRow::FColumn::FArguments::FArguments(&local_1a00);
  local_1a00._ColumnId = SReflectorTreeWidgetItem::NAME_WidgetName;
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_71f8,L"SWidgetReflector",L"WidgetName",L"Widget Name");
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_6218,pFVar23);
  pFVar69 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_1a00,pTVar37);
  local_7c40[0] = 1.0;
  pTVar65 = TAttribute<float>::TAttribute<float>(&local_67e0,local_7c40);
  pFVar69 = SHeaderRow::FColumn::FArguments::FillWidth(pFVar69,pTVar65);
  local_7c88[0] = true;
  pTVar70 = TAttribute<bool>::TAttribute<bool>(&local_67c0,local_7c88);
  pFVar69 = SHeaderRow::FColumn::FArguments::ShouldGenerateWidget(pFVar69,pTVar70);
  pFVar68 = SHeaderRow::FArguments::operator+(pFVar68,pFVar69);
  SHeaderRow::FColumn::FArguments::FArguments(&local_1e78);
  local_1e78._ColumnId = SReflectorTreeWidgetItem::NAME_ForegroundColor;
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_7208,L"SWidgetReflector",L"ForegroundColor",L"FG");
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_5f78,pFVar23);
  pFVar69 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_1e78,pTVar37);
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_7218,L"SWidgetReflector",L"ForegroundColorToolTip",L"Foreground Color"
                      );
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_5fa8,pFVar23);
  pFVar69 = SHeaderRow::FColumn::FArguments::DefaultTooltip(pFVar69,pTVar37);
  local_7a70 = 0x41c00000;
  local_7a6c = 1;
  pFVar69 = SHeaderRow::FColumn::FArguments::FixedWidth(pFVar69,(TOptional<float>)&local_7a70);
  pFVar68 = SHeaderRow::FArguments::operator+(pFVar68,pFVar69);
  SHeaderRow::FColumn::FArguments::FArguments(&local_22f0);
  local_22f0._ColumnId = SReflectorTreeWidgetItem::NAME_Visibility;
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_7228,L"SWidgetReflector",L"Visibility",L"Visibility");
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_5fd8,pFVar23);
  pFVar69 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_22f0,pTVar37);
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_7238,L"SWidgetReflector",L"VisibilityTooltip",L"Visibility");
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_60c8,pFVar23);
  pFVar69 = SHeaderRow::FColumn::FArguments::DefaultTooltip(pFVar69,pTVar37);
  local_7ab8 = 0x42fa0000;
  local_7ab4 = 1;
  pFVar69 = SHeaderRow::FColumn::FArguments::FillSized(pFVar69,(TOptional<float>)&local_7ab8);
  pFVar68 = SHeaderRow::FArguments::operator+(pFVar68,pFVar69);
  SHeaderRow::FColumn::FArguments::FArguments(&local_2768);
  local_2768._ColumnId = SReflectorTreeWidgetItem::NAME_Enabled;
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_7248,L"SWidgetReflector",L"Enabled",L"Enabled");
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_6038,pFVar23);
  pFVar69 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_2768,pTVar37);
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_7258,L"SWidgetReflector",L"EnabledToolTip",L"Enabled");
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_6098,pFVar23);
  pFVar69 = SHeaderRow::FColumn::FArguments::DefaultTooltip(pFVar69,pTVar37);
  local_7ab0 = 0x42700000;
  local_7aac = 1;
  pFVar69 = SHeaderRow::FColumn::FArguments::FillSized(pFVar69,(TOptional<float>)&local_7ab0);
  pFVar68 = SHeaderRow::FArguments::operator+(pFVar68,pFVar69);
  SHeaderRow::FColumn::FArguments::FArguments(&local_2be0);
  local_2be0._ColumnId = SReflectorTreeWidgetItem::NAME_Focusable;
  pFVar23 = FText::AsLocalizable_Advanced_LocText(&local_7268,L"SWidgetReflector",L"Focus",L"Focus")
  ;
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_6068,pFVar23);
  pFVar69 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_2be0,pTVar37);
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_7278,L"SWidgetReflector",L"FocusableTooltip",
                       L"Focusability (Note that for hit-test directional navigation to work it must be Focusable and \"Visible\"!)"
                      );
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_5ee8,pFVar23);
  pFVar69 = SHeaderRow::FColumn::FArguments::DefaultTooltip(pFVar69,pTVar37);
  local_7aa8 = 0x42700000;
  local_7aa4 = 1;
  pFVar69 = SHeaderRow::FColumn::FArguments::FillSized(pFVar69,(TOptional<float>)&local_7aa8);
  pFVar68 = SHeaderRow::FArguments::operator+(pFVar68,pFVar69);
  SHeaderRow::FColumn::FArguments::FArguments(&local_3058);
  local_3058._ColumnId = SReflectorTreeWidgetItem::NAME_HasActiveTimer;
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_7288,L"SWidgetReflector",L"HasActiveTimer",L"Timer");
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_5f18,pFVar23);
  pFVar69 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_3058,pTVar37);
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_7298,L"SWidgetReflector",L"HasActiveTimerTooltip",L"Has Active Timer")
  ;
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_61e8,pFVar23);
  pFVar69 = SHeaderRow::FColumn::FArguments::DefaultTooltip(pFVar69,pTVar37);
  local_7aa0 = 0x42700000;
  local_7a9c = 1;
  pFVar69 = SHeaderRow::FColumn::FArguments::FillSized(pFVar69,(TOptional<float>)&local_7aa0);
  pFVar68 = SHeaderRow::FArguments::operator+(pFVar68,pFVar69);
  SHeaderRow::FColumn::FArguments::FArguments(&local_34d0);
  local_34d0._ColumnId = SReflectorTreeWidgetItem::NAME_Clipping;
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_72a8,L"SWidgetReflector",L"Clipping",L"Clipping");
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_61b8,pFVar23);
  pFVar69 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_34d0,pTVar37);
  local_7a98 = 0x42c80000;
  local_7a94 = 1;
  pFVar69 = SHeaderRow::FColumn::FArguments::FillSized(pFVar69,(TOptional<float>)&local_7a98);
  pFVar68 = SHeaderRow::FArguments::operator+(pFVar68,pFVar69);
  SHeaderRow::FColumn::FArguments::FArguments(&local_3948);
  local_3948._ColumnId = SReflectorTreeWidgetItem::NAME_LayerId;
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_72b8,L"SWidgetReflector",L"LayerId",L"LayerId");
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_6188,pFVar23);
  pFVar69 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_3948,pTVar37);
  local_7a90 = 0x420c0000;
  local_7a8c = 1;
  pFVar69 = SHeaderRow::FColumn::FArguments::FillSized(pFVar69,(TOptional<float>)&local_7a90);
  pFVar68 = SHeaderRow::FArguments::operator+(pFVar68,pFVar69);
  SHeaderRow::FColumn::FArguments::FArguments(&local_3dc0);
  local_3dc0._ColumnId = SReflectorTreeWidgetItem::NAME_ActualSize;
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_72c8,L"SWidgetReflector",L"ActualSize",L"Size");
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_6158,pFVar23);
  pFVar69 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_3dc0,pTVar37);
  local_7a88 = 0x42c80000;
  local_7a84 = 1;
  pFVar69 = SHeaderRow::FColumn::FArguments::FillSized(pFVar69,(TOptional<float>)&local_7a88);
  pFVar68 = SHeaderRow::FArguments::operator+(pFVar68,pFVar69);
  SHeaderRow::FColumn::FArguments::FArguments(&local_4238);
  local_4238._ColumnId = SReflectorTreeWidgetItem::NAME_WidgetInfo;
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_72d8,L"SWidgetReflector",L"Source",L"Source");
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_6008,pFVar23);
  pFVar69 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_4238,pTVar37);
  local_7a80 = 0x43480000;
  local_7a7c = 1;
  pFVar69 = SHeaderRow::FColumn::FArguments::FillSized(pFVar69,(TOptional<float>)&local_7a80);
  pFVar68 = SHeaderRow::FArguments::operator+(pFVar68,pFVar69);
  SHeaderRow::FColumn::FArguments::FArguments(&local_46b0);
  local_46b0._ColumnId = SReflectorTreeWidgetItem::NAME_Address;
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_72e8,L"SWidgetReflector",L"Address",L"Address");
  pTVar37 = TAttribute<FText>::TAttribute<FText>(&local_60f8,pFVar23);
  pFVar69 = SHeaderRow::FColumn::FArguments::DefaultLabel(&local_46b0,pTVar37);
  local_7a78 = 0x432a0000;
  local_7a74 = 1;
  pFVar69 = SHeaderRow::FColumn::FArguments::FillSized(pFVar69,(TOptional<float>)&local_7a78);
  pFVar68 = SHeaderRow::FArguments::operator+(pFVar68,pFVar69);
  this_04 = MakeTDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>
                      (&local_6f00,"SHeaderRow",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                       ,0x3a4,&local_7c59);
  pTVar71 = TSlateDecl<SHeaderRow,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_72f8,pFVar68);
  pTVar72 = TSharedPtr<SHeaderRow,1>::TSharedPtr<SHeaderRow,1><SHeaderRow>(&local_6db0,pTVar71);
  pFVar67 = STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::HeaderRow
                      (pFVar67,pTVar72);
  pTVar73 = MakeTDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
                      (&local_6ee8,"SReflectorTree",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                       ,0x39a,&local_7c58);
  pTVar73 = TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
            ::Expose<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>_>
                      (pTVar73,&this->ReflectorTree);
  pTVar74 = TSlateDecl<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,RequiredArgs::T0RequiredArgs>
            ::operator<<=(pTVar73,&local_7308,pFVar67);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>_>
            (&local_7818,pTVar74);
  pFVar66 = SBorder::FArguments::operator[](pFVar66,&local_7818);
  this_05 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_6f18,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                       ,0x395,&local_7c57);
  pTVar75 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_05,&local_7318,pFVar66);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_77d8,pTVar75);
  pFVar49 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)pFVar49,&local_77d8);
  pFVar48 = SVerticalBox::FArguments::operator+(pFVar48,pFVar49);
  pTVar63 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_6e58,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                       ,0x36f,&local_7c56);
  pTVar64 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar63,&local_7328,pFVar48);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_77e8,pTVar64);
  pFVar47 = SDockTab::FArguments::operator[](local_res20,&local_77e8);
  this_06 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                      (&local_6e70,"SDockTab",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
                       ,0x36a,&local_7c55);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (this_06,__return_storage_ptr__,pFVar47);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6e70._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_77e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7328.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6e58._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_77d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7318.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6f18._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7818.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7308.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6ee8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_72f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6f00._Widget.SharedReferenceCount.ReferenceController);
  FText::~FText(&local_72e8);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_46b0);
  FText::~FText(&local_72d8);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_4238);
  FText::~FText(&local_72c8);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_3dc0);
  FText::~FText(&local_72b8);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_3948);
  FText::~FText(&local_72a8);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_34d0);
  FText::~FText(&local_7298);
  FText::~FText(&local_7288);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_3058);
  FText::~FText(&local_7278);
  FText::~FText(&local_7268);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_2be0);
  FText::~FText(&local_7258);
  FText::~FText(&local_7248);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_2768);
  FText::~FText(&local_7238);
  FText::~FText(&local_7228);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_22f0);
  FText::~FText(&local_7218);
  FText::~FText(&local_7208);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_1e78);
  FText::~FText(&local_71f8);
  SHeaderRow::FColumn::FArguments::~FArguments(&local_1a00);
  SHeaderRow::FArguments::~FArguments(&local_4928);
  STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::~FArguments(&local_a68);
  SBorder::FArguments::~FArguments(&local_1270);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_55e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7808.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_71e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6f78._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7848.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_71d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6f60._Widget.SharedReferenceCount.ReferenceController);
  SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::FArguments::~FArguments(&local_1588);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5500);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7838.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_71c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6f48._Widget.SharedReferenceCount.ReferenceController);
  SSeparator::FArguments::~FArguments(&local_4b60);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5418);
  SVerticalBox::FArguments::~FArguments(&local_4f90);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5330);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7828.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_71b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6f30._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_71a8.SharedReferenceCount.ReferenceController);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_5248);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_5cb0._Slots.AllocatorInstance.Data,local_5cb0._Slots.ArrayNum);
  if ((FSlotArguments *)local_5cb0._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_5cb0._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_5cb0);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_6748);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6770);
  if ((void *)local_6770._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6770._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6770);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_6790);
  if (local_67a0[0] != (undefined8 *)0x0) {
    (**(code **)*local_67a0[0])(local_67a0[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_5aa8._Slots.AllocatorInstance.Data,local_5aa8._Slots.ArrayNum);
  if ((FSlotArguments *)local_5aa8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_5aa8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_5aa8);
  if (local_7c30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7c30.TextData.Reference + 0x10))();
  }
  SDockTab::FArguments::~FArguments(&local_e90);
  UpdateSelectedSnapshotTarget(this);
  if ((FName *)local_7c80.Data != (FName *)0x0) {
    FMemory::Free(local_7c80.Data);
  }
  FToolBarBuilder::~FToolBarBuilder(&local_6c60);
  return __return_storage_ptr__;
}

// SpawnWidgetHittestGrid @ 142f0c030

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
WidgetReflectorImpl::SWidgetReflector::SpawnWidgetHittestGrid
          (SWidgetReflector *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,
          FSpawnTabArgs *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FMemScope FVar8;
  FText *pFVar9;
  FArguments *pFVar10;
  undefined8 *puVar11;
  TSharedRef<SWidget,1> *pTVar12;
  ulong64 uVar13;
  longlong lVar14;
  TSharedRef<SWidgetHittestGrid,1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FLLMScope local_res10 [2];
  FName local_res20;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_768;
  FMemScope local_748;
  SWidgetHittestGrid *local_740;
  TReferenceControllerBase<1> *local_738;
  bool local_730;
  FText local_728;
  bool local_718;
  undefined1 local_710 [8];
  ForAnyElementType FStack_708;
  ulonglong local_700;
  T1RequiredArgs<TSharedRef<SWidget,1>_&&> local_6f8;
  FText local_6f0;
  FDestructionSentinel local_6e0;
  undefined1 *local_6c8;
  TSharedRef<SWidgetHittestGrid,1> local_6c0;
  TSharedRef<SWidget,1> local_6b0;
  undefined1 local_6a0 [16];
  undefined1 local_690 [504];
  undefined1 local_498 [24];
  undefined1 local_480 [24];
  FArguments local_468;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  local_res8 = 0;
  FVar8 = (FMemScope)SDockTab::FArguments::FArguments(&local_468);
  local_748 = FVar8;
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_6f0,L"SWidgetReflector",L"HitTestGridTab",L"Hit Test Grid");
  FText::FText(&local_728,pFVar9);
  local_718 = true;
  local_700 = 0;
  local_710 = (undefined1  [8])0x0;
  FStack_708.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)((longlong)FVar8 + 0x260),&local_728);
  *(bool *)((longlong)FVar8 + 0x270) = local_718;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar8 + 0x278),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_710);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_710,
             (FWriteAccessScope *)&local_740);
  if (((int)local_700 != 0) && (FStack_708.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_708.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_708,0,0,0x10);
    local_700 = local_700 & 0xffffffff00000000;
  }
  if (local_730 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_738,(FDestructionSentinel *)&local_740);
  }
  if (FStack_708.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_708.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_710);
  if (local_728.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_728.TextData.Reference + 0x10))();
  }
  pFVar10 = SWidgetHittestGrid::FArguments::FArguments((FArguments *)local_690);
  local_768._Widget.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)
       ((ulonglong)local_768._Widget.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
  local_768._Widget.Object = (SDockTab *)SelectLiveWidget;
  TDelegateRegistration<void___cdecl(TSharedPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::
  BindSP<WidgetReflectorImpl::SWidgetReflector>
            ((TDelegateRegistration<void___cdecl(TSharedPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>
              *)&pFVar10->_OnWidgetSelected,this,(pmf_e45b1c14 *)&local_768);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnVisualizeWidget,
             (FWriteAccessScope *)&local_6e0);
  local_6c8 = &(pFVar10->_OnVisualizeWidget).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_6c8);
  if (puVar11 == (undefined8 *)0x0) {
    pTVar16 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    local_768._Widget.Object = (SDockTab *)_vcall__56__flat______;
    local_768._Widget.SharedReferenceCount.ReferenceController._4_4_ = local_6f0._12_4_;
    local_768._Widget.SharedReferenceCount.ReferenceController._0_4_ = 0x2a8;
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,
                         (TSharedRef<SWidget,1> *)&local_740);
    pTVar16 = (pTVar12->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar12->Object;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBVFWidgetPath___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar13;
    *puVar11 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetReflector_WidgetReflectorImpl___00__A6AXAEBVFWidgetPath___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[3] = pSVar3;
    puVar11[4] = pTVar16;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar16->WeakReferenceCount = (atomic<int>)((int)pTVar16->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    puVar11[5] = local_768._Widget.Object;
    puVar11[6] = local_768._Widget.SharedReferenceCount.ReferenceController;
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_738);
  }
  if (local_6e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6e0.Accessor,&local_6e0);
  }
  local_6f8.Arg0 =
       TSharedFromThis<SWidget,1>::AsShared
                 ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_6b0);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_768,&local_res20,true);
  TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>::
  TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
            ((TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
              *)&local_740,"SWidgetHittestGrid",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x43f,&local_6f8);
  FMemScope::~FMemScope((FMemScope *)&local_768);
  FLLMScope::~FLLMScope(local_res10);
  if (local_738 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_738->WeakReferenceCount = (atomic<int>)((int)local_738->WeakReferenceCount + 1);
    UNLOCK();
  }
  if (&this->WidgetHittestGrid == (TWeakPtr<SWidgetHittestGrid,1> *)local_6a0) {
    if (local_738 == (TReferenceControllerBase<1> *)0x0) goto LAB_142f0c3af;
    LOCK();
    paVar1 = &local_738->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 != (atomic<int>)0x1) goto LAB_142f0c3af;
    lVar14 = local_738->_padding_;
    pTVar16 = local_738;
  }
  else {
    pTVar16 = (this->WidgetHittestGrid).WeakReferenceCount.ReferenceController;
    (this->WidgetHittestGrid).Object = local_740;
    (this->WidgetHittestGrid).WeakReferenceCount.ReferenceController = local_738;
    if (pTVar16 == (TReferenceControllerBase<1> *)0x0) goto LAB_142f0c3af;
    LOCK();
    paVar1 = &pTVar16->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 != (atomic<int>)0x1) goto LAB_142f0c3af;
    lVar14 = pTVar16->_padding_;
  }
  (**(code **)(lVar14 + 8))(pTVar16,1);
LAB_142f0c3af:
  pTVar15 = TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>::
            operator<<=((TSlateDecl<SWidgetHittestGrid,RequiredArgs::T1RequiredArgs<TSharedRef<SWidget,1>_&&>_>
                         *)&local_740,&local_6c0,pFVar10);
  FVar8 = local_748;
  pTVar16 = (pTVar15->SharedReferenceCount).ReferenceController;
  local_768._Widget.Object = (SDockTab *)pTVar15->Object;
  if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar16->SharedReferenceCount = (atomic<int>)((int)pTVar16->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = ((FSharedReferencer<1> *)((longlong)local_748 + 0x200))->ReferenceController;
  (((TAlwaysValidWidget *)((longlong)local_748 + 0x1f8))->Widget).Object =
       (SWidget *)local_768._Widget.Object;
  ((FSharedReferencer<1> *)((longlong)local_748 + 0x200))->ReferenceController = pTVar16;
  local_768._Widget.SharedReferenceCount.ReferenceController = pTVar16;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_748,&local_res20,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (&local_768,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x43c,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_748);
  FLLMScope::~FLLMScope(local_res10);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_768,__return_storage_ptr__,(FArguments *)FVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_768._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_738);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6b0.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_480);
  if ((void *)local_480._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_480._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_480);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_498);
  if ((void *)local_498._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_498._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_498);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_690);
  if (local_6f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6f0.TextData.Reference + 0x10))();
  }
  SDockTab::FArguments::~FArguments(&local_468);
  return __return_storage_ptr__;
}

// SpawnWidgetList @ 142f0c580

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __thiscall
WidgetReflectorImpl::SWidgetReflector::SpawnWidgetList
          (SWidgetReflector *this,TSharedRef<SDockTab,1> *__return_storage_ptr__,
          FSpawnTabArgs *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  SWidgetList *pSVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FArguments *pFVar8;
  FText *pFVar9;
  FArguments *pFVar10;
  TSharedRef<SDockTab,1> *pTVar11;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [16];
  FLLMScope local_res20 [2];
  FLLMScope local_748 [2];
  TSlateDecl<SWidgetList,RequiredArgs::T0RequiredArgs> local_740;
  FText local_728;
  bool local_718;
  undefined1 local_710 [8];
  ForAnyElementType FStack_708;
  ulonglong local_700;
  FName local_6f8;
  FMemScope local_6f0;
  FName local_6e8;
  FMemScope local_6e0;
  FDestructionSentinel local_6d8;
  SWidget *local_6c0;
  TReferenceControllerBase<1> *pTStack_6b8;
  FText local_6b0;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_6a0;
  undefined1 local_688 [504];
  undefined1 local_490 [24];
  undefined1 local_478 [24];
  FArguments local_460;
  
  pFVar8 = SDockTab::FArguments::FArguments(&local_460);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_6b0,L"SWidgetReflector",L"WidgetListTab",L"Widget List");
  FText::FText(&local_728,pFVar9);
  local_718 = true;
  local_700 = 0;
  local_710 = (undefined1  [8])0x0;
  FStack_708.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar8->_Label).Value,&local_728);
  (pFVar8->_Label).bIsSet = local_718;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_710);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_710,
             (FWriteAccessScope *)&local_6d8);
  if (((int)local_700 != 0) && (FStack_708.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_708.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_708,0,0,0x10);
    local_700 = local_700 & 0xffffffff00000000;
  }
  if (local_6d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6d8.Accessor,&local_6d8);
  }
  if (FStack_708.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_708.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_710);
  if (local_728.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_728.TextData.Reference + 0x10))();
  }
  pFVar10 = SWidgetList::FArguments::FArguments((FArguments *)local_688);
  TDelegate<bool___cdecl(FString_const_&,int,int),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar10->_OnAccessSource,&this->SourceAccessDelegate);
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar10->_OnAccessAsset,&this->AsseetAccessDelegate);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6f0,&local_6f8,true);
  TSlateDecl<SWidgetList,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWidgetList,RequiredArgs::T0RequiredArgs>
            (&local_740,"SWidgetList",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x44c,local_res8);
  FMemScope::~FMemScope(&local_6f0);
  FLLMScope::~FLLMScope(local_res20);
  pSVar3 = local_740._Widget.Object;
  if (local_740._Widget.Object == (SWidgetList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_740._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  SWidgetList::Construct(local_740._Widget.Object,pFVar10);
  if (local_740._Widget.Object == (SWidgetList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  if (((local_740._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)((local_740._Widget.Object)->_padding_ + 0x228))(local_740._Widget.Object);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_142f0c7e7;
  }
  bVar7 = 0x20;
LAB_142f0c7e7:
  *(byte *)&(local_740._Widget.Object)->_padding_ =
       (byte)(local_740._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_740._Widget.Object)->_padding_ =
       (byte)(local_740._Widget.Object)->_padding_ | bVar7;
  if (local_740._Widget.Object == (SWidgetList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_740._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_740._Widget.Object == (SWidgetList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  FVar4.ReferenceController = local_740._Widget.SharedReferenceCount.ReferenceController;
  local_740._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_740._Widget.Object = (SWidgetList *)0x0;
  if (pSVar3 == (SWidgetList *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar11 = (TSharedRef<SDockTab,1> *)(*pcVar2)();
      return pTVar11;
    }
  }
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6c0 = (pFVar8->_Content).Widget.Object;
  pTStack_6b8 = (pFVar8->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar8->_Content).Widget.Object = (SWidget *)pSVar3;
  (pFVar8->_Content).Widget.SharedReferenceCount.ReferenceController = FVar4.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_6b8);
  FLLMScope::FLLMScope(local_748,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6e8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6e0,&local_6e8,true);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
            (&local_6a0,"SDockTab",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflector.cpp"
             ,0x449,local_res10);
  FMemScope::~FMemScope(&local_6e0);
  FLLMScope::~FLLMScope(local_748);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (&local_6a0,__return_storage_ptr__,pFVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6a0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_740._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_478);
  if ((void *)local_478._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_478._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_478);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_490);
  if ((void *)local_490._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_490._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_490);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_688);
  if (local_6b0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6b0.TextData.Reference + 0x10))();
  }
  SDockTab::FArguments::~FArguments(&local_460);
  return __return_storage_ptr__;
}

// TakeSnapshot @ 142f0cc80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall WidgetReflectorImpl::SWidgetReflector::TakeSnapshot(SWidgetReflector *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  uint *puVar3;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  TWeakPtr<SNotificationItem,1> *this_00;
  atomic<int> aVar5;
  int iVar6;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  SWidgetHittestGrid *pSVar9;
  FWidgetSnapshotService *pFVar10;
  SWidget *pSVar11;
  FMessageEndpoint *this_01;
  code *pcVar12;
  undefined8 uVar13;
  atomic<int> aVar14;
  int iVar15;
  FGuid *pFVar16;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar17;
  FText *pFVar18;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_02;
  longlong lVar19;
  FSlateNotificationManager *this_03;
  TSharedPtr<SNotificationItem,1> *pTVar20;
  undefined8 *puVar21;
  TSharedRef<SWidget,1> *pTVar22;
  ulong64 uVar23;
  UPackage *pUVar24;
  SNotificationItem *pSVar25;
  SNotificationItem *pSVar26;
  SNotificationItem *pSVar27;
  TReferenceControllerBase<1> *pTVar28;
  SNotificationItem *pSVar29;
  TReferenceControllerBase<1> *pTVar30;
  bool bVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_res10 [8];
  TPairInitializer<FGuid_const_&,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_const_&>
  local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4c8;
  FDelegateAllocation local_4c0;
  code *local_4a8;
  undefined4 uStack_4a0;
  uint uStack_49c;
  FText local_498;
  undefined1 local_488;
  undefined1 local_480 [8];
  ForAnyElementType FStack_478;
  ulonglong local_470;
  FText local_468;
  undefined1 local_458;
  undefined1 local_450 [8];
  ForAnyElementType FStack_448;
  ulonglong local_440;
  FText local_438;
  undefined1 local_428;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_420;
  ForAnyElementType FStack_418;
  ulonglong local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined1 local_3f8 [24];
  undefined1 local_3e0 [24];
  TRefCountPtr<ITextData> local_3c8;
  uint local_3c0;
  bool local_3b8;
  undefined1 local_3b0 [24];
  undefined1 local_398 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_380;
  ForAnyElementType FStack_378;
  ulonglong local_370;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_368;
  ForAnyElementType FStack_360;
  ulonglong local_358;
  EVisibility local_350;
  EVisibility local_34f;
  EVisibility local_34e;
  EVisibility local_34d;
  FTimespan local_348;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> local_340;
  uint *local_330;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *local_328;
  TWeakPtr<SNotificationItem,1> local_320;
  FDestructionSentinel local_310;
  FDestructionSentinel local_2f8;
  FDestructionSentinel local_2e0;
  FDestructionSentinel local_2c8;
  FDestructionSentinel local_2b0;
  FDestructionSentinel local_298;
  FDestructionSentinel local_280;
  FDelegateAllocation *local_268;
  FText local_260;
  code *local_248;
  longlong lStack_240;
  FText local_238;
  FText local_228;
  TSharedPtr<SNotificationItem,1> local_218;
  TSharedRef<SWidget,1> local_208;
  FText local_1f8;
  FGuid local_1e8;
  FGuid local_1d8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_1c8;
  FNotificationInfo local_1b0;
  
  pSVar29 = (SNotificationItem *)0x0;
  local_res8 = 0;
  pFVar16 = FApp::GetInstanceId(&local_1e8);
  if ((((this->SelectedSnapshotTargetInstanceId).D == pFVar16->D &&
       (this->SelectedSnapshotTargetInstanceId).C == pFVar16->C) &&
      (this->SelectedSnapshotTargetInstanceId).B == pFVar16->B) &&
      pFVar16->A == (this->SelectedSnapshotTargetInstanceId).A) {
    SetUIMode(this,Snapshot);
    pSVar27 = (SNotificationItem *)(this->WidgetHittestGrid).WeakReferenceCount.ReferenceController;
    pSVar25 = pSVar27;
    if (pSVar27 != (SNotificationItem *)0x0) {
      aVar5 = *(atomic<int> *)&pSVar27->field_0x8;
      do {
        pSVar25 = pSVar29;
        if (aVar5 == (atomic<int>)0x0) goto LAB_142f0cd13;
        LOCK();
        aVar14 = *(atomic<int> *)&pSVar27->field_0x8;
        bVar31 = aVar5 == aVar14;
        if (bVar31) {
          *(atomic<int> *)&pSVar27->field_0x8 = (atomic<int>)((int)aVar5 + 1);
          aVar14 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar14;
      } while (!bVar31);
      pSVar9 = (this->WidgetHittestGrid).Object;
      pSVar25 = pSVar27;
      if (pSVar9 != (SWidgetHittestGrid *)0x0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FHittestGrid::OnFindNextFocusableWidgetExecuted,pSVar9);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FSlateDebugging::PaintDebugElements,pSVar9);
      }
    }
LAB_142f0cd13:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar25);
    FWidgetSnapshotData::TakeSnapshot(&this->SnapshotData,this->bRequestNavigationSimulation);
    piVar1 = &(this->SelectedNodes).ArrayMax;
    pTVar7 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(this->SelectedNodes).AllocatorInstance.Data;
    iVar6 = (this->SelectedNodes).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar7,iVar6);
      (this->SelectedNodes).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->SelectedNodes).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar7,iVar6);
      (this->SelectedNodes).ArrayNum = 0;
    }
    piVar1 = &(this->PickedWidgetPath).ArrayMax;
    pTVar7 = (TSharedRef<FWidgetReflectorNodeBase,1> *)
             (this->PickedWidgetPath).AllocatorInstance.Data;
    iVar6 = (this->PickedWidgetPath).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar7,iVar6);
      (this->PickedWidgetPath).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->PickedWidgetPath).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar7,iVar6);
      (this->PickedWidgetPath).ArrayNum = 0;
    }
    pTVar17 = FWidgetSnapshotData::GetWindowsRef(&this->SnapshotData,&local_340);
    pTVar4 = &this->FilteredTreeRoot;
    if (pTVar4 != pTVar17) {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
                ((TSharedRef<FWidgetReflectorNodeBase,1> *)(pTVar4->AllocatorInstance).Data,
                 (this->FilteredTreeRoot).ArrayNum);
      pFVar8 = (pTVar4->AllocatorInstance).Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (pTVar4->AllocatorInstance).Data = (pTVar17->AllocatorInstance).Data;
      (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->FilteredTreeRoot).ArrayNum = pTVar17->ArrayNum;
      (this->FilteredTreeRoot).ArrayMax = pTVar17->ArrayMax;
      pTVar17->ArrayNum = 0;
      pTVar17->ArrayMax = 0;
    }
    TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>::operator=
              (&this->ReflectorTreeRoot,pTVar4);
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
              ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_340.AllocatorInstance.Data,
               local_340.ArrayNum);
    if ((TSharedRef<FWidgetReflectorNodeBase,1> *)local_340.AllocatorInstance.Data !=
        (TSharedRef<FWidgetReflectorNodeBase,1> *)0x0) {
      FMemory::Free(local_340.AllocatorInstance.Data);
    }
    if (((this->ReflectorTree).Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0)
       && (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar31)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    (**(code **)(*(longlong *)(this->ReflectorTree).Object + 0x248))();
    if (((this->WidgetSnapshotVisualizer).Object == (SWidgetSnapshotVisualizer *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    SWidgetSnapshotVisualizer::SnapshotDataUpdated((this->WidgetSnapshotVisualizer).Object);
    pSVar27 = (SNotificationItem *)(this->WidgetHittestGrid).WeakReferenceCount.ReferenceController;
    pSVar25 = pSVar27;
    if (pSVar27 != (SNotificationItem *)0x0) {
      aVar5 = *(atomic<int> *)&pSVar27->field_0x8;
      do {
        pSVar25 = pSVar29;
        if (aVar5 == (atomic<int>)0x0) goto LAB_142f0cf21;
        LOCK();
        aVar14 = *(atomic<int> *)&pSVar27->field_0x8;
        bVar31 = aVar5 == aVar14;
        if (bVar31) {
          *(atomic<int> *)&pSVar27->field_0x8 = (atomic<int>)((int)aVar5 + 1);
          aVar14 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar14;
      } while (!bVar31);
      pSVar9 = (this->WidgetHittestGrid).Object;
      pSVar25 = pSVar27;
      if (pSVar9 != (SWidgetHittestGrid *)0x0) {
        SWidgetHittestGrid::SetPause(pSVar9,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar27);
        return;
      }
    }
LAB_142f0cf21:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar25);
    return;
  }
  pFVar18 = FText::AsLocalizable_Advanced_LocText
                      (&local_260,L"SWidgetReflector",L"RemoteWidgetSnapshotPendingNotificationText"
                       ,L"Waiting for Remote Widget Snapshot Data");
  FNotificationInfo::FNotificationInfo(&local_1b0,pFVar18);
  if (local_260.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_260.TextData.Reference + 0x10))();
  }
  uStack_4a0 = 0;
  local_4a8 = OnCancelPendingRemoteSnapshot;
  lStack_240 = (ulonglong)uStack_49c << 0x20;
  local_248 = OnCancelPendingRemoteSnapshot;
  this_02 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<WidgetReflectorImpl::SWidgetReflector>
                      (&local_1c8,this,(pmf_e9d72271 *)&local_248);
  pFVar18 = FText::AsLocalizable_Advanced_LocText
                      (&local_228,L"SWidgetReflector",L"CancelPendingSnapshotButtonToolTipText",
                       L"Cancel the pending widget snapshot request.");
  FText::FText(&local_468,pFVar18);
  local_458 = 1;
  local_440 = 0;
  local_450 = (undefined1  [8])0x0;
  FStack_448.Data = (FScriptContainerElement *)0x0;
  pFVar18 = FText::AsLocalizable_Advanced_LocText
                      (&local_238,L"SWidgetReflector",L"CancelPendingSnapshotButtonText",L"Cancel");
  FText::FText(&local_498,pFVar18);
  local_470 = 0;
  local_488 = 1;
  local_3f8._0_8_ = local_498.TextData.Reference;
  local_480 = (undefined1  [8])0x0;
  FStack_478.Data = (FScriptContainerElement *)0x0;
  if (local_498.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_498.TextData.Reference + 8))
              (local_498.TextData.Reference,&local_res8);
  }
  local_3f8._8_4_ = local_498.Flags;
  local_3f8[0x10] = local_488;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_3e0,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_480);
  local_3c8.Reference = local_468.TextData.Reference;
  if (local_468.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_468.TextData.Reference + 8))
              (local_468.TextData.Reference,local_res10);
  }
  local_3c0 = local_468.Flags;
  local_3b8 = (bool)local_458;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_3b0,
             (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_450);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_398,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_02);
  local_350 = (EVisibility)EVisibility::Collapsed.Value.Value;
  local_34f = (EVisibility)EVisibility::Visible.Value.Value;
  local_34e = (EVisibility)(EVisibility)EVisibility::Collapsed.Value.Value;
  local_34d = (EVisibility)(EVisibility)EVisibility::Collapsed.Value.Value;
  local_380.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_378.Data = (FScriptContainerElement *)0x0;
  local_370 = 0;
  local_368.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_360.Data = (FScriptContainerElement *)0x0;
  local_358 = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_02);
  if (*(void **)&this_02->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this_02->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_02);
  if (((local_1b0.ButtonDetails.AllocatorInstance.Data <= (FScriptContainerElement *)local_3f8) &&
      ((FScriptContainerElement *)local_3f8 <
       local_1b0.ButtonDetails.AllocatorInstance.Data +
       (longlong)local_1b0.ButtonDetails.ArrayMax * 0xb0)) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar31)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (local_1b0.ButtonDetails.ArrayNum == local_1b0.ButtonDetails.ArrayMax) {
    local_1b0.ButtonDetails.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x8b0,&local_1b0.ButtonDetails.AllocatorInstance,
                    &local_1b0.ButtonDetails.ArrayMax);
  }
  lVar19 = (longlong)local_1b0.ButtonDetails.ArrayNum;
  local_1b0.ButtonDetails.ArrayNum = local_1b0.ButtonDetails.ArrayNum + 1;
  FNotificationButtonInfo::FNotificationButtonInfo
            ((FNotificationButtonInfo *)
             (local_1b0.ButtonDetails.AllocatorInstance.Data + lVar19 * 0xb0),
             (FNotificationButtonInfo *)local_3f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_368,(FWriteAccessScope *)&local_310);
  if (((int)local_358 != 0) && (FStack_360.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_360.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_360,0,0,0x10);
    local_358 = local_358 & 0xffffffff00000000;
  }
  if (local_310.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_310.Accessor,&local_310);
  }
  if (FStack_360.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_360.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_368.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_380,(FWriteAccessScope *)&local_2f8);
  if (((int)local_370 != 0) && (FStack_378.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_378.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_378,0,0,0x10);
    local_370 = local_370 & 0xffffffff00000000;
  }
  if (local_2f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f8.Accessor,&local_2f8);
  }
  if (FStack_378.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_378.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_380.AccessDetector);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_398);
  if ((void *)local_398._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_398._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_398);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b0);
  if ((void *)local_3b0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3b0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3b0);
  if (local_3c8.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3c8.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3e0);
  if ((void *)local_3e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3e0);
  if ((ITextData *)local_3f8._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_3f8._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_480,
             (FWriteAccessScope *)&local_2e0);
  if (((int)local_470 != 0) && (FStack_478.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_478.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_478,0,0,0x10);
    local_470 = local_470 & 0xffffffff00000000;
  }
  if (local_2e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e0.Accessor,&local_2e0);
  }
  if (FStack_478.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_478.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_480);
  if (local_498.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_498.TextData.Reference + 0x10))();
  }
  if (local_238.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_450,
             (FWriteAccessScope *)&local_2c8);
  if (((int)local_440 != 0) && (FStack_448.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_448.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_448,0,0,0x10);
    local_440 = local_440 & 0xffffffff00000000;
  }
  if (local_2c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c8.Accessor,&local_2c8);
  }
  if (FStack_448.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_448.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_450);
  if (local_468.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_468.TextData.Reference + 0x10))();
  }
  if (local_228.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
  }
  local_1b0.bFireAndForget = false;
  this_03 = FSlateNotificationManager::Get();
  pTVar20 = FSlateNotificationManager::AddNotification(this_03,&local_218,&local_1b0);
  this_00 = &this->WidgetSnapshotNotificationPtr;
  this_00->Object = pTVar20->Object;
  pTVar30 = (pTVar20->SharedReferenceCount).ReferenceController;
  if (pTVar30 != (this->WidgetSnapshotNotificationPtr).WeakReferenceCount.ReferenceController) {
    if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar30->WeakReferenceCount = (atomic<int>)((int)pTVar30->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar28 = (this->WidgetSnapshotNotificationPtr).WeakReferenceCount.ReferenceController;
    if (pTVar28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar28->WeakReferenceCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)(pTVar28->_padding_ + 8))(pTVar28,1);
      }
    }
    (this->WidgetSnapshotNotificationPtr).WeakReferenceCount.ReferenceController = pTVar30;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218.SharedReferenceCount.ReferenceController);
  if (((this_00->Object == (SNotificationItem *)0x0) ||
      (pTVar30 = (this->WidgetSnapshotNotificationPtr).WeakReferenceCount.ReferenceController,
      pTVar30 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar30->SharedReferenceCount < 1))
  goto LAB_142f0d5d4;
  pSVar27 = (SNotificationItem *)
            (this->WidgetSnapshotNotificationPtr).WeakReferenceCount.ReferenceController;
  pSVar25 = pSVar29;
  pSVar26 = pSVar27;
  if (pSVar27 == (SNotificationItem *)0x0) {
LAB_142f0d595:
    bVar31 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    pSVar27 = pSVar26;
    if (bVar31) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  else {
    iVar6 = *(int *)&pSVar27->field_0x8;
    do {
      pSVar26 = pSVar29;
      if (iVar6 == 0) goto LAB_142f0d595;
      LOCK();
      iVar15 = *(int *)&pSVar27->field_0x8;
      bVar31 = iVar6 == iVar15;
      if (bVar31) {
        *(int *)&pSVar27->field_0x8 = iVar6 + 1;
        iVar15 = iVar6;
      }
      UNLOCK();
      iVar6 = iVar15;
    } while (!bVar31);
    pSVar25 = this_00->Object;
    pSVar26 = pSVar27;
    if (pSVar25 == (SNotificationItem *)0x0) goto LAB_142f0d595;
  }
  (**(code **)(*(longlong *)&pSVar25->field_0x0 + 0x280))(pSVar25,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar27);
LAB_142f0d5d4:
  if (((this->WidgetSnapshotService).Object == (FWidgetSnapshotService *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar31)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar10 = (this->WidgetSnapshotService).Object;
  local_4c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_4c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_4c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4c8,(FWriteAccessScope *)&local_280);
  local_268 = &local_4c0;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,&local_4c0);
  if (puVar21 == (undefined8 *)0x0) {
    pTVar30 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_c,local_res8);
  }
  else {
    uStack_49c = local_1e8.D;
    local_4a8 = HandleRemoteSnapshotReceived;
    uStack_4a0 = 0;
    pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_208);
    pTVar30 = (pTVar22->SharedReferenceCount).ReferenceController;
    pSVar11 = pTVar22->Object;
    if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_EV__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar23;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSWidgetReflector_WidgetReflectorImpl___00__A6AXAEBV__TArray_EV__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar21[3] = pSVar11;
    puVar21[4] = pTVar30;
    if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar30->WeakReferenceCount = (atomic<int>)((int)pTVar30->WeakReferenceCount + 1);
      UNLOCK();
    }
    pSVar29 = (SNotificationItem *)&DAT_00000007;
    puVar21[5] = local_4a8;
    puVar21[6] = CONCAT44(uStack_49c,uStack_4a0);
  }
  if (((ulonglong)pSVar29 & 4) != 0) {
    pSVar29 = (SNotificationItem *)(ulonglong)((uint)pSVar29 & 0xfffffffb);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
  }
  if (((ulonglong)pSVar29 & 2) != 0) {
    pSVar29 = (SNotificationItem *)(ulonglong)((uint)pSVar29 & 0xfffffffd);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar30);
  }
  if (((ulonglong)pSVar29 & 1) != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.SharedReferenceCount.ReferenceController);
  }
  if (local_280.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_280.Accessor,&local_280);
  }
  if ((pFVar10->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    local_408 = 0;
    uStack_400 = 0;
    local_408._0_4_ = 0;
    local_408._4_4_ = 0;
    uStack_400._0_4_ = 0;
    uStack_400._4_4_ = 0;
    uVar32 = (uint)local_408;
    uVar33 = local_408._4_4_;
    uVar34 = (uint)uStack_400;
    uVar35 = uStack_400._4_4_;
  }
  else {
    puVar21 = FMemory::Malloc(0x20,0);
    puVar21[2] = 0;
    puVar21[3] = 0;
    puVar3 = (uint *)(puVar21 + 2);
    *puVar21 = 0;
    puVar21[1] = 0;
    uVar13 = *(undefined8 *)&(this->SelectedSnapshotTargetInstanceId).C;
    *puVar21 = *(undefined8 *)&this->SelectedSnapshotTargetInstanceId;
    puVar21[1] = uVar13;
    pFVar16 = FGuid::NewGuid(&local_1d8);
    uVar32 = pFVar16->B;
    uVar13 = *(undefined8 *)&pFVar16->C;
    local_328 = &local_4c8;
    puVar3[0] = pFVar16->A;
    puVar3[1] = uVar32;
    puVar21[3] = uVar13;
    local_330 = puVar3;
    TSet<TTuple<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FGuid_const_&,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_const_&>_>
              ((TSet<TTuple<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                *)&pFVar10->PendingSnapshotResponseHandlers,&local_res18,(bool *)&local_330);
    if (((pFVar10->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar31)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    this_01 = (pFVar10->MessageEndpoint).Object;
    local_res18.Value =
         (TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *)0x2bca2875f4373fff;
    local_348.Ticks = 0;
    if (Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar24 = Z_Construct_UPackage__Script_SlateReflector();
      Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshotRequest,(UObject *)pUVar24,
                           L"WidgetSnapshotRequest");
    }
    FMessageEndpoint::Publish
              (this_01,puVar21,
               Z_Registration_Info_UScriptStruct_FWidgetSnapshotRequest.OuterSingleton,Network,
               &local_348,(FDateTime *)&local_res18.Value);
    uVar32 = *puVar3;
    uVar33 = *(uint *)((longlong)puVar21 + 0x14);
    uVar34 = *(uint *)(puVar21 + 3);
    uVar35 = *(uint *)((longlong)puVar21 + 0x1c);
  }
  (this->RemoteSnapshotRequestId).A = uVar32;
  (this->RemoteSnapshotRequestId).B = uVar33;
  (this->RemoteSnapshotRequestId).C = uVar34;
  (this->RemoteSnapshotRequestId).D = uVar35;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4c8,(FWriteAccessScope *)&local_2b0);
  if ((local_4c0.DelegateSize != 0) &&
     (local_4c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_4c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_4c0,0,0,0x10);
    local_4c0.DelegateSize = 0;
  }
  if (local_2b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b0.Accessor,&local_2b0);
  }
  if (local_4c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_4c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4c8.AccessDetector);
  if ((((this->RemoteSnapshotRequestId).D == 0 && (this->RemoteSnapshotRequestId).C == 0) &&
      (this->RemoteSnapshotRequestId).B == 0) && (this->RemoteSnapshotRequestId).A == 0) {
    pTVar30 = (this->WidgetSnapshotNotificationPtr).WeakReferenceCount.ReferenceController;
    pTVar28 = pTVar30;
    if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar30->SharedReferenceCount;
      do {
        pTVar28 = (TReferenceControllerBase<1> *)0x0;
        if (aVar5 == (atomic<int>)0x0) goto LAB_142f0d931;
        LOCK();
        aVar14 = pTVar30->SharedReferenceCount;
        bVar31 = aVar5 == aVar14;
        if (bVar31) {
          pTVar30->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar14 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar14;
      } while (!bVar31);
      pSVar29 = this_00->Object;
      pTVar28 = pTVar30;
      if (pSVar29 != (SNotificationItem *)0x0) {
        pcVar12 = *(code **)(*(longlong *)pSVar29 + 0x248);
        pFVar18 = FText::AsLocalizable_Advanced_LocText
                            (&local_1f8,L"SWidgetReflector",
                             L"RemoteWidgetSnapshotFailedNotificationText",
                             L"Remote Widget Snapshot Failed");
        FText::FText(&local_438,pFVar18);
        local_428 = 1;
        local_410 = 0;
        local_420.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_418.Data = (FScriptContainerElement *)0x0;
        (*pcVar12)(pSVar29,&local_438);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_420,(FWriteAccessScope *)&local_298);
        if (((int)local_410 != 0) && (FStack_418.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_418.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_418,0,0,0x10)
          ;
          local_410 = local_410 & 0xffffffff00000000;
        }
        if (local_298.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
        }
        if (FStack_418.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_418.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_420.AccessDetector);
        if (local_438.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
        }
        if (local_1f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
        }
        (**(code **)(*(longlong *)pSVar29 + 0x280))(pSVar29,3);
        (**(code **)(*(longlong *)pSVar29 + 0x288))(pSVar29);
        local_320.Object = (SNotificationItem *)0x0;
        local_320.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        TWeakPtr<SNotificationItem,1>::operator=(this_00,&local_320);
        if (local_320.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          paVar2 = &(local_320.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar5 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar5 == (atomic<int>)0x1) {
            (**(code **)((local_320.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_320.WeakReferenceCount.ReferenceController,1);
          }
        }
      }
    }
LAB_142f0d931:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar28);
  }
  FNotificationInfo::~FNotificationInfo(&local_1b0);
  return;
}

// Tick @ 142f0e760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::Tick
          (SWidgetReflector *this,FGeometry *param_1,double param_2,float param_3)

{
  FSlateApplication *pFVar1;
  double dVar2;
  
  if (this->bIsPendingDelayedSnapshot != false) {
    pFVar1 = FSlateApplication::Get();
    dVar2 = (double)(**(code **)(*(longlong *)pFVar1 + 0x60))(pFVar1);
    if (this->TimeOfScheduledSnapshot <= dVar2 && dVar2 != this->TimeOfScheduledSnapshot) {
      this->bIsPendingDelayedSnapshot = false;
      this->TimeOfScheduledSnapshot = -1.0;
      TakeSnapshot(this);
      return;
    }
  }
  return;
}

// UpdateAvailableSnapshotTargets @ 142f12970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::UpdateAvailableSnapshotTargets(SWidgetReflector *this)

{
  int *piVar1;
  TArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FText *pFVar7;
  FGuid *pFVar8;
  FWidgetSnapshotTarget *pFVar9;
  FScriptContainerElement *pFVar10;
  FWidgetSnapshotTarget *pFVar11;
  undefined1 local_res8 [8];
  TRawPtrProxy<WidgetReflectorImpl::FWidgetSnapshotTarget> local_res10;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> local_78;
  FString local_68;
  FText local_58;
  FGuid local_48;
  FText local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  
  pTVar2 = &this->AvailableSnapshotTargets;
  piVar1 = &(this->AvailableSnapshotTargets).ArrayMax;
  pTVar3 = (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)
           (pTVar2->AllocatorInstance).Data;
  iVar6 = (this->AvailableSnapshotTargets).ArrayNum;
  if ((this->AvailableSnapshotTargets).ArrayMax < 0) {
    DestructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>(pTVar3,iVar6);
    (this->AvailableSnapshotTargets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>(pTVar3,iVar6);
    (this->AvailableSnapshotTargets).ArrayNum = 0;
  }
  pFVar11 = (FWidgetSnapshotTarget *)0x0;
  FText::FText(&local_38);
  local_28 = 0;
  uStack_20 = 0;
  FWindowsPlatformProcess::GetCurrentProcessId();
  FWindowsPlatformProcess::ComputerName();
  ::FString::PrintfImpl(&local_68,L"%s-%i");
  pFVar7 = FText::FromString(&local_58,&local_68);
  FText::operator=(&local_38,pFVar7);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar8 = FApp::GetInstanceId(&local_48);
  local_28._0_4_ = pFVar8->A;
  local_28._4_4_ = pFVar8->B;
  uStack_20._0_4_ = pFVar8->C;
  uStack_20._4_4_ = pFVar8->D;
  pFVar9 = ::operator_new(0x20);
  if (pFVar9 != (FWidgetSnapshotTarget *)0x0) {
    (pFVar9->DisplayName).TextData.Reference = local_38.TextData.Reference;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 8))
                (local_38.TextData.Reference,local_res8);
    }
    (pFVar9->DisplayName).Flags = local_38.Flags;
    (pFVar9->InstanceId).A = (undefined4)local_28;
    (pFVar9->InstanceId).B = local_28._4_4_;
    (pFVar9->InstanceId).C = (undefined4)uStack_20;
    (pFVar9->InstanceId).D = uStack_20._4_4_;
    pFVar11 = pFVar9;
  }
  local_res10.Object = pFVar11;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>::
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1><WidgetReflectorImpl::FWidgetSnapshotTarget>
            (&local_78,&local_res10);
  pTVar3 = (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)
           (pTVar2->AllocatorInstance).Data;
  if (((pTVar3 <= &local_78) && (&local_78 < pTVar3 + *piVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (this->AvailableSnapshotTargets).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->AvailableSnapshotTargets).ArrayNum = iVar6 + 1;
  pFVar10 = (pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(FWidgetSnapshotTarget **)pFVar10 = local_78.Object;
  *(TReferenceControllerBase<1> **)(pFVar10 + 8) = local_78.SharedReferenceCount.ReferenceController
  ;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_78.Object = (FWidgetSnapshotTarget *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// UpdateFilteredTreeRoot @ 142f12b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::UpdateFilteredTreeRoot(SWidgetReflector *this)

{
  int *piVar1;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar5;
  
  pTVar2 = &this->FilteredTreeRoot;
  piVar1 = &(this->FilteredTreeRoot).ArrayMax;
  pTVar5 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(pTVar2->AllocatorInstance).Data;
  iVar4 = (this->FilteredTreeRoot).ArrayNum;
  if ((this->FilteredTreeRoot).ArrayMax < 0) {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar5,iVar4);
    (this->FilteredTreeRoot).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar5,iVar4);
    (this->FilteredTreeRoot).ArrayNum = 0;
  }
  pTVar3 = &this->ReflectorTreeRoot;
  if (this->bFilterReflectorTreeRootWithUMG == false) {
    if (pTVar2 != pTVar3) {
      DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
                ((TSharedRef<FWidgetReflectorNodeBase,1> *)(pTVar2->AllocatorInstance).Data,
                 (this->FilteredTreeRoot).ArrayNum);
      iVar4 = (this->ReflectorTreeRoot).ArrayNum;
      pTVar5 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(pTVar3->AllocatorInstance).Data;
      (this->FilteredTreeRoot).ArrayNum = iVar4;
      if ((iVar4 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
        ConstructItems<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<FWidgetReflectorNodeBase,1>,int>
                  ((pTVar2->AllocatorInstance).Data,pTVar5,iVar4);
      }
    }
  }
  else {
    WidgetReflectorRecursive::FindNodeWithReflectionData(pTVar3,pTVar2);
  }
  VisualizeAsTree(this,&this->PickedWidgetPath);
  return;
}

// UpdateSelectedSnapshotTarget @ 142f13810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::UpdateSelectedSnapshotTarget(SWidgetReflector *this)

{
  FGuid *pFVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  FWidgetSnapshotTarget *pFVar8;
  SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *this_00;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> local_38;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> local_28;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> local_18;
  
  if ((this->AvailableSnapshotTargetsComboBox).Object !=
      (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
    pFVar10 = (this->AvailableSnapshotTargets).AllocatorInstance.Data;
    pFVar1 = &this->SelectedSnapshotTargetInstanceId;
    pFVar11 = pFVar10 + (longlong)(this->AvailableSnapshotTargets).ArrayNum * 0x10;
    for (; pFVar10 != pFVar11; pFVar10 = pFVar10 + 0x10) {
      if ((*(longlong *)pFVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)pFVar10;
      if (((*(uint *)(lVar2 + 0x1c) == (this->SelectedSnapshotTargetInstanceId).D &&
           *(uint *)(lVar2 + 0x18) == (this->SelectedSnapshotTargetInstanceId).C) &&
          *(uint *)(lVar2 + 0x14) == (this->SelectedSnapshotTargetInstanceId).B) &&
          *(uint *)(lVar2 + 0x10) == pFVar1->A) {
        if (((this->AvailableSnapshotTargetsComboBox).Object ==
             (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_38.Object = *(FWidgetSnapshotTarget **)pFVar10;
        this_00 = (this->AvailableSnapshotTargetsComboBox).Object;
        local_38.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar10 + 8);
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar9 = &local_38;
        goto LAB_142f139e1;
      }
    }
    if ((this->AvailableSnapshotTargets).ArrayNum < 1) {
      pFVar1->A = 0;
      pFVar1->B = 0;
      (this->SelectedSnapshotTargetInstanceId).C = 0;
      (this->SelectedSnapshotTargetInstanceId).D = 0;
      this_00 = TSharedPtr<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
                operator->(&this->AvailableSnapshotTargetsComboBox);
      pTVar9 = &local_18;
      local_18.Object = (FWidgetSnapshotTarget *)0x0;
      local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pFVar8 = TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>::operator->
                         ((TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)
                          (this->AvailableSnapshotTargets).AllocatorInstance.Data);
      uVar4 = (pFVar8->InstanceId).B;
      uVar5 = (pFVar8->InstanceId).C;
      uVar6 = (pFVar8->InstanceId).D;
      pFVar1->A = (pFVar8->InstanceId).A;
      pFVar1->B = uVar4;
      (this->SelectedSnapshotTargetInstanceId).C = uVar5;
      (this->SelectedSnapshotTargetInstanceId).D = uVar6;
      this_00 = TSharedPtr<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>::
                operator->(&this->AvailableSnapshotTargetsComboBox);
      if (((this->AvailableSnapshotTargets).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (this->AvailableSnapshotTargets).AllocatorInstance.Data;
      local_28.Object = *(FWidgetSnapshotTarget **)pFVar10;
      local_28.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar10 + 8);
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar9 = &local_28;
    }
LAB_142f139e1:
    SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::SetSelectedItem
              (this_00,pTVar9);
  }
  return;
}

// Visualize @ 142f17c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
WidgetReflectorImpl::SWidgetReflector::Visualize
          (SWidgetReflector *this,FWidgetPath *param_1,FSlateWindowElementList *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  FVisualTreeSnapshot *this_00;
  code *pcVar3;
  TVector2<float> TVar4;
  uint uVar5;
  float afVar6 [2];
  float afVar7 [2];
  float afVar8 [2];
  float afVar9 [2];
  EVisibility EVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FDeprecateSlateVector2D FVar15;
  SWindow *pSVar16;
  TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_> *pTVar17;
  FSlateApplication *pFVar18;
  undefined8 *puVar19;
  TSharedRef<SWidget_const_,1> *pTVar20;
  FWidgetPath *pFVar21;
  TReferenceControllerBase<1> *pTVar22;
  ForElementType<FArrangedWidget> FVar23;
  uint uVar24;
  undefined1 auStackY_468 [32];
  longlong local_430;
  TVector2<float>_u_0_s_0 local_428;
  int local_420 [2];
  float local_418;
  float fStack_414;
  undefined8 local_410;
  FLinearColor_u_0 local_408;
  SWindow *local_3f8;
  TReferenceControllerBase<1> *local_3f0;
  TSharedPtr<SWidget_const_,1> local_3e8;
  TVector2<float>_u_0_s_0 local_3cc;
  undefined1 local_3bc [20];
  TTransform2<float> local_3a8;
  TTransform2<float> local_390;
  TSharedRef<SWidget_const_,1> local_378;
  TVector2<float>_u_0 local_368;
  undefined4 local_360;
  undefined8 local_35c;
  undefined8 local_354;
  TTransform2<float> local_34c;
  byte local_334;
  FWidgetPath local_330;
  FWidgetPath local_1d0;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_468;
  bVar12 = FWidgetPath::IsValid(param_1);
  pTVar22 = (TReferenceControllerBase<1> *)0x0;
  if (((!bVar12) && (0 < (int)this->_padding_)) && (0 < (int)this->_padding_)) {
    if (((int)this->_padding_ < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      iVar13 = (*pcVar3)();
      return iVar13;
    }
    (**(code **)(**(longlong **)this->_padding_ + 0x10))(*(longlong **)this->_padding_,&local_3f8);
    pTVar11 = local_3f0;
    if (local_3f8 != (SWindow *)0x0) {
      if (local_3f0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_3f0->SharedReferenceCount = (atomic<int>)((int)local_3f0->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_3f8 == (SWindow *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        iVar13 = (*pcVar3)();
        return iVar13;
      }
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_3f8 == (SWindow *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        iVar13 = (*pcVar3)();
        return iVar13;
      }
      afVar8 = _UNK_15076b188;
      afVar6 = ___xmm_3f80000000000000000000003f800000;
      uVar5 = __xmm_80000000800000008000000080000000;
      iVar13 = (int)this->_padding_;
      local_420[0] = param_3;
      if (0 < iVar13) {
        local_430 = 0;
        do {
          uVar24 = (uint)pTVar22;
          uVar14 = 0;
          if ((int)uVar24 < iVar13) {
            uVar14 = ~uVar24 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            iVar13 = (*pcVar3)();
            return iVar13;
          }
          lVar1 = this->_padding_;
          lVar2 = *(longlong *)(local_430 + lVar1);
          local_354 = *(undefined8 *)(lVar2 + 8);
          local_360 = *(undefined4 *)(lVar2 + 0x10);
          local_368 = (TVector2<float>_u_0)
                      *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)(lVar2 + 0x14))->_s_0;
          local_334 = (*(byte *)(lVar2 + 0x3c) & 1) * '\x02' | local_334 & 0xfc;
          local_35c = 0;
          local_34c.M.M[0] = *(float (*) [2])(lVar2 + 0x24);
          local_34c.M.M[1] = *(float (*) [2])(lVar2 + 0x2c);
          local_34c.Trans.field0_0x0 = *(TVector2<float>_u_0 *)(lVar2 + 0x34);
          FVar15 = SWindow::GetPositionInScreen(local_3f8);
          afVar9 = _UNK_15076b188;
          afVar7 = ___xmm_3f80000000000000000000003f800000;
          local_428.Y = (float)(*(uint *)((longlong)FVar15 + 4) ^ uVar5);
          local_428.X = (float)(*(uint *)FVar15 ^ uVar5);
          local_3cc = local_428;
          local_3a8.Trans.field0_0x0._s_0 = (TVector2<float>_u_0)local_428;
          ___xmm_3f80000000000000000000003f800000 = afVar6[0];
          _UNK_15076b184 = afVar6[1];
          local_3a8.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
          local_3a8.M.M[0][1] = _UNK_15076b184;
          _UNK_15076b188 = afVar8[0];
          _UNK_15076b18c = afVar8[1];
          local_3a8.M.M[1][0] = _UNK_15076b188;
          local_3a8.M.M[1][1] = _UNK_15076b18c;
          ___xmm_3f80000000000000000000003f800000 = afVar7;
          _UNK_15076b188 = afVar9;
          Concatenate<TTransform2<float>_>(&local_390,&local_34c,&local_3a8);
          local_34c.M.M[0][0] = local_390.M.M[0][0];
          local_34c.M.M[0][1] = local_390.M.M[0][1];
          local_34c.M.M[1][0] = local_390.M.M[1][0];
          local_34c.M.M[1][1] = local_390.M.M[1][1];
          local_408._s_0.R = local_368._s_0.X;
          local_418 = local_3cc.X + local_408._s_0.R;
          local_34c.Trans.field0_0x0 = local_390.Trans.field0_0x0;
          local_408._s_0.G = local_368._s_0.Y;
          fStack_414 = local_3cc.Y + local_408._s_0.G;
          local_368._s_0.Y = fStack_414;
          local_368._s_0.X = local_418;
          lVar1 = *(longlong *)(local_430 + lVar1);
          local_408._0_8_ = *(undefined8 *)(lVar1 + 0x68);
          local_408._8_8_ = *(undefined8 *)(lVar1 + 0x70);
          DrawWidgetVisualization
                    ((SWidgetReflector *)&this[-1]._padding_,(FPaintGeometry *)&local_368._s_0,
                     (FLinearColor *)&local_408._s_0,param_2,local_420);
          local_430 = local_430 + 0x10;
          pTVar22 = (TReferenceControllerBase<1> *)(ulonglong)(uVar24 + 1);
          iVar13 = (int)this->_padding_;
        } while ((int)(uVar24 + 1) < iVar13);
      }
      param_3 = local_420[0];
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      pTVar22 = local_3f0;
      goto LAB_142f17f66;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_3f0);
  }
  bVar12 = FWidgetPath::ContainsWidget(param_1,(SWidget *)this->_padding_);
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x03') {
    if (bVar12) {
      return param_3;
    }
    (**(code **)(this->_padding_ + 0x38))(this,param_1);
    iVar13 = VisualizePickAsRectangles
                       ((SWidgetReflector *)&this[-1]._padding_,param_1,param_2,param_3);
    return iVar13;
  }
  pSVar16 = FSlateWindowElementList::GetPaintWindow(param_2);
  pTVar17 = TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_>,TDefaultMapHashableKeyFuncs<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>,0>,FDefaultSetAllocator>
                    *)&this->_padding_,pSVar16);
  if (pTVar17 != (TTuple<SWindow_const_*,TSharedPtr<FVisualTreeSnapshot,1>_> *)0x0) {
    pTVar22 = *(TReferenceControllerBase<1> **)&pTVar17->field_0x10;
    this_00 = *(FVisualTreeSnapshot **)&pTVar17->field_0x8;
    if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FVisualTreeSnapshot *)0x0) {
      pFVar18 = FSlateApplication::Get();
      puVar19 = (undefined8 *)(**(code **)(*(longlong *)pFVar18 + 0x68))(pFVar18,local_3bc);
      local_410 = *puVar19;
      pSVar16 = FSlateWindowElementList::GetPaintWindow(param_2);
      FVar15 = SWindow::GetPositionInScreen(pSVar16);
      local_418 = (float)local_410 - *(float *)FVar15;
      fStack_414 = local_410._4_4_ - *(float *)((longlong)FVar15 + 4);
      TVar4.field0_0x0._s_0.Y = fStack_414;
      TVar4.field0_0x0._s_0.X = local_418;
      FVisualTreeSnapshot::Pick(this_00,&local_3e8,TVar4);
      if (local_3e8.Object == (SWidget *)0x0) {
        pcVar3 = *(code **)(this->_padding_ + 0x38);
        pFVar21 = FWidgetPath::FWidgetPath(&local_1d0);
        (*pcVar3)(this,pFVar21);
        if (local_1d0.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1d0.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar23 = (ForElementType<FArrangedWidget>)&local_1d0.Widgets.Array;
        if (local_1d0.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar23 = local_1d0.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar23,local_1d0.Widgets.Array.ArrayNum);
        local_330.Widgets.Array.AllocatorInstance.SecondaryData =
             local_1d0.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      else {
        FWidgetPath::FWidgetPath(&local_330,param_1);
        pFVar18 = FSlateApplication::Get();
        EVar10 = EVisibility::All;
        pcVar3 = *(code **)(*(longlong *)pFVar18 + 0x20);
        pTVar20 = TSharedPtr<SWidget_const_,1>::ToSharedRef(&local_3e8,&local_378);
        (*pcVar3)(pFVar18,pTVar20,&local_330,EVar10.Value.Value);
        if (!bVar12) {
          (**(code **)(this->_padding_ + 0x38))(this,&local_330);
          iVar13 = VisualizePickAsRectangles
                             ((SWidgetReflector *)&this[-1]._padding_,&local_330,param_2,param_3);
          if (local_330.VirtualPointerPositions.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_330.VirtualPointerPositions.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_330.TopLevelWindow.SharedReferenceCount.ReferenceController);
          FVar23 = (ForElementType<FArrangedWidget>)&local_330.Widgets.Array;
          if (local_330.Widgets.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FVar23 = local_330.Widgets.Array.AllocatorInstance.SecondaryData;
          }
          DestructItems<FArrangedWidget,int>
                    ((FArrangedWidget *)FVar23,local_330.Widgets.Array.ArrayNum);
          if (local_330.Widgets.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FMemory::Free((void *)local_330.Widgets.Array.AllocatorInstance.SecondaryData);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3e8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar22);
          return iVar13;
        }
        if (local_330.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_330.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_330.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar23 = (ForElementType<FArrangedWidget>)&local_330.Widgets.Array;
        if (local_330.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar23 = local_330.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar23,local_330.Widgets.Array.ArrayNum);
      }
      if (local_330.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_330.Widgets.Array.AllocatorInstance.SecondaryData);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3e8.SharedReferenceCount.ReferenceController);
    }
  }
LAB_142f17f66:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  return param_3;
}

// VisualizeAsTree @ 142f18230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
WidgetReflectorImpl::SWidgetReflector::VisualizeAsTree
          (SWidgetReflector *this,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TSharedPtr<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *pTVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *pSVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  undefined8 local_58;
  longlong local_50;
  TSharedRef<FWidgetReflectorNodeBase,1> local_48;
  TSharedRef<FWidgetReflectorNodeBase,1> local_38 [2];
  
  fVar7 = __real_3f800000;
  iVar2 = param_1->ArrayNum;
  pTVar1 = &this->ReflectorTree;
  if (iVar2 < 1) {
    if (pTVar1->Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::ClearSelection
              ((SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)pTVar1->Object);
    return;
  }
  uVar12 = 0;
  uVar13 = uVar12;
  do {
    uVar11 = (uint)uVar12;
    uVar9 = 0;
    if ((int)uVar11 < iVar2) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar3 = (param_1->AllocatorInstance).Data;
    lVar4 = *(longlong *)(pFVar3 + uVar13);
    fVar14 = (float)(int)uVar11 / (float)param_1->ArrayNum;
    *(float *)(lVar4 + 0x68) = fVar7 - fVar14;
    *(float *)(lVar4 + 0x6c) = fVar14;
    *(undefined4 *)(lVar4 + 0x70) = 0;
    *(undefined4 *)(lVar4 + 0x74) = 0x3f800000;
    if (pTVar1->Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    puVar10 = &pTVar1->Object->field_0x588;
    pcVar6 = *(code **)(*(longlong *)puVar10 + 0x50);
    local_58 = *(undefined8 *)(pFVar3 + uVar13);
    local_50 = *(longlong *)(pFVar3 + uVar13 + 8);
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    (*pcVar6)(puVar10,&local_58,1);
    iVar2 = param_1->ArrayNum;
    uVar12 = (ulonglong)(uVar11 + 1);
    uVar13 = uVar13 + 0x10;
  } while ((int)(uVar11 + 1) < iVar2);
  if (pTVar1->Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pSVar5 = pTVar1->Object;
  uVar11 = param_1->ArrayNum - 1;
  uVar9 = 0;
  if ((int)uVar11 < param_1->ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  local_48.Object =
       *(FWidgetReflectorNodeBase **)(pFVar3 + (longlong)param_1->ArrayNum * 0x10 + -0x10);
  local_48.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)param_1->ArrayNum * 0x10 + -8);
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::RequestScrollIntoView
            ((SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)pSVar5,&local_48,0);
  if (pTVar1->Object == (STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pSVar5 = pTVar1->Object;
  uVar11 = param_1->ArrayNum - 1;
  uVar9 = 0;
  if ((int)uVar11 < param_1->ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  local_38[0].Object =
       *(FWidgetReflectorNodeBase **)(pFVar3 + (longlong)param_1->ArrayNum * 0x10 + -0x10);
  local_38[0].SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)param_1->ArrayNum * 0x10 + -8);
  if (local_38[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SetSelection
            ((SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)pSVar5,local_38,Direct);
  return;
}

// VisualizePickAsRectangles @ 142f18590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
WidgetReflectorImpl::SWidgetReflector::VisualizePickAsRectangles
          (SWidgetReflector *this,FWidgetPath *param_1,FSlateWindowElementList *param_2,int param_3)

{
  float (*pafVar1) [2];
  ForElementType<FArrangedWidget> FVar2;
  code *pcVar3;
  float fVar4;
  uint uVar5;
  float afVar6 [2];
  float afVar7 [2];
  TVector2<float>_u_0 TVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FDeprecateSlateVector2D FVar12;
  ForElementType<FArrangedWidget> FVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStackY_168 [32];
  int local_138 [2];
  uint local_130;
  uint uStack_12c;
  undefined8 local_128;
  float local_120;
  float fStack_11c;
  FLinearColor_u_0 local_118;
  undefined8 local_104;
  TTransform2<float> local_f0;
  TTransform2<float> local_d8;
  TVector2<float>_u_0 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  TTransform2<float> local_a4;
  byte local_8c;
  ulonglong local_88;
  
  afVar7 = _UNK_15076b188;
  afVar6 = ___xmm_3f80000000000000000000003f800000;
  uVar5 = __xmm_80000000800000008000000080000000;
  fVar4 = __real_3f800000;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar14 = 0;
  if (0 < (param_1->Widgets).Array.ArrayNum) {
    lVar15 = 0;
    local_138[0] = param_3;
    do {
      uVar10 = 0;
      if ((int)uVar14 < (param_1->Widgets).Array.ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        iVar11 = (*pcVar3)();
        return iVar11;
      }
      FVar2 = (param_1->Widgets).Array.AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FArrangedWidget>)&(param_1->Widgets).Array;
      if (FVar2 != (ForElementType<FArrangedWidget>)0x0) {
        FVar13 = FVar2;
      }
      local_c0 = (TVector2<float>_u_0)
                 *(TVector2<float>_u_0 *)
                  &((TVector2<float>_u_0 *)(lVar15 + 0xc + (longlong)FVar13))->_s_0;
      local_ac = *(undefined8 *)(lVar15 + (longlong)FVar13);
      fVar16 = (float)(int)uVar14 / (float)(param_1->Widgets).Array.ArrayNum;
      local_b8 = *(undefined4 *)(lVar15 + 8 + (longlong)FVar13);
      local_8c = (*(byte *)(lVar15 + 0x34 + (longlong)FVar13) & 1) * '\x02' | local_8c & 0xfc;
      local_b4 = 0;
      pafVar1 = (float (*) [2])(lVar15 + 0x1c + (longlong)FVar13);
      local_a4.M.M[0] = *pafVar1;
      local_a4.M.M[1] = pafVar1[1];
      local_a4.Trans.field0_0x0 = *(TVector2<float>_u_0 *)(lVar15 + 0x2c + (longlong)FVar13);
      if (((param_1->TopLevelWindow).Object == (SWindow *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        iVar11 = (*pcVar3)();
        return iVar11;
      }
      FVar12 = SWindow::GetPositionInScreen((param_1->TopLevelWindow).Object);
      local_130 = *(uint *)FVar12 ^ uVar5;
      uStack_12c = *(uint *)((longlong)FVar12 + 4) ^ uVar5;
      local_104._4_4_ = uStack_12c;
      local_104._0_4_ = local_130;
      local_f0.M.M[0] = afVar6;
      local_f0.M.M[1] = afVar7;
      local_f0.Trans.field0_0x0 = local_104;
      Concatenate<TTransform2<float>_>(&local_d8,&local_a4,&local_f0);
      local_128 = local_c0._s_0;
      TVar8._s_0 = local_128;
      local_a4.M.M[0][0] = local_d8.M.M[0][0];
      local_a4.M.M[0][1] = local_d8.M.M[0][1];
      local_a4.M.M[1][0] = local_d8.M.M[1][0];
      local_a4.M.M[1][1] = local_d8.M.M[1][1];
      local_118._s_0.B = 0.0;
      local_128._0_4_ = local_c0._s_0.X;
      local_120 = (float)(undefined4)local_104 + (float)local_128;
      local_a4.Trans.field0_0x0 = local_d8.Trans.field0_0x0;
      local_128._4_4_ = local_c0._s_0.Y;
      fStack_11c = (float)local_104._4_4_ + local_128._4_4_;
      local_118._s_0.R = fVar4 - fVar16;
      local_118._s_0.A = 1.0;
      local_c0._s_0.Y = fStack_11c;
      local_c0._s_0.X = local_120;
      local_128 = TVar8._s_0;
      local_118._s_0.G = fVar16;
      DrawWidgetVisualization
                (this,(FPaintGeometry *)&local_c0._s_0,(FLinearColor *)&local_118._s_0,param_2,
                 local_138);
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x48;
      param_3 = local_138[0];
    } while ((int)uVar14 < (param_1->Widgets).Array.ArrayNum);
  }
  return param_3;
}

// VisualizeSelectedNodesAsRectangles @ 142f18850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
WidgetReflectorImpl::SWidgetReflector::VisualizeSelectedNodesAsRectangles
          (SWidgetReflector *this,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedRef<SWindow,1> *param_2,FSlateWindowElementList *param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  float afVar5 [2];
  float afVar6 [2];
  bool bVar7;
  uint uVar8;
  int iVar9;
  FDeprecateSlateVector2D FVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStackY_138 [32];
  FLinearColor_u_0 local_f8;
  undefined8 local_e4;
  TTransform2<float> local_d0;
  TTransform2<float> local_b8;
  TVector2<float>_u_0 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  TTransform2<float> local_84;
  byte local_6c;
  ulonglong local_68;
  
  afVar6 = _UNK_15076b188;
  afVar5 = ___xmm_3f80000000000000000000003f800000;
  uVar4 = __xmm_80000000800000008000000080000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar11 = 0;
  iVar9 = param_1->ArrayNum;
  if (0 < iVar9) {
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar11 < iVar9) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        iVar9 = (*pcVar3)();
        return iVar9;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      lVar2 = *(longlong *)(pFVar1 + lVar12);
      local_8c = *(undefined8 *)(lVar2 + 8);
      local_98 = *(undefined4 *)(lVar2 + 0x10);
      local_a0 = (TVector2<float>_u_0)
                 *(TVector2<float>_u_0 *)&((TVector2<float>_u_0 *)(lVar2 + 0x14))->_s_0;
      local_6c = (*(byte *)(lVar2 + 0x3c) & 1) * '\x02' | local_6c & 0xfc;
      local_94 = 0;
      local_84.M.M[0] = *(float (*) [2])(lVar2 + 0x24);
      local_84.M.M[1] = *(float (*) [2])(lVar2 + 0x2c);
      local_84.Trans.field0_0x0 = *(TVector2<float>_u_0 *)(lVar2 + 0x34);
      FVar10 = SWindow::GetPositionInScreen(param_2->Object);
      local_e4._4_4_ = *(uint *)((longlong)FVar10 + 4) ^ uVar4;
      local_e4._0_4_ = *(uint *)FVar10 ^ uVar4;
      local_d0.M.M[0] = afVar5;
      local_d0.M.M[1] = afVar6;
      local_d0.Trans.field0_0x0 = local_e4;
      Concatenate<TTransform2<float>_>(&local_b8,&local_84,&local_d0);
      local_84.M.M[0][0] = local_b8.M.M[0][0];
      local_84.M.M[0][1] = local_b8.M.M[0][1];
      local_84.M.M[1][0] = local_b8.M.M[1][0];
      local_84.M.M[1][1] = local_b8.M.M[1][1];
      local_f8._s_0.R = local_a0._s_0.X;
      local_84.Trans.field0_0x0 = local_b8.Trans.field0_0x0;
      local_f8._s_0.G = local_a0._s_0.Y;
      local_a0._s_0.Y = (float)local_e4._4_4_ + local_f8._s_0.G;
      local_a0._s_0.X = (float)(undefined4)local_e4 + local_f8._s_0.R;
      lVar2 = *(longlong *)(pFVar1 + lVar12);
      local_f8._0_8_ = *(undefined8 *)(lVar2 + 0x68);
      local_f8._8_8_ = *(undefined8 *)(lVar2 + 0x70);
      DrawWidgetVisualization
                (this,(FPaintGeometry *)&local_a0._s_0,(FLinearColor *)&local_f8._s_0,param_3,
                 &param_4);
      iVar9 = param_1->ArrayNum;
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar11 < iVar9);
  }
  return param_4;
}

