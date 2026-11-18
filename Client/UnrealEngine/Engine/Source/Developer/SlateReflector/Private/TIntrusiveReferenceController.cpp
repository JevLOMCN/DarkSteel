// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 52

// DestroyObject @ 142ddf850

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWidgetSnapshotService,1>::DestroyObject
          (TIntrusiveReferenceController<FWidgetSnapshotService,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x10));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 142de0630

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNavigationSimulationLiveList,1>::
DestroyObject(TIntrusiveReferenceController<SNavigationSimulationLiveList,1> *this)

{
  SNavigationSimulationLiveList::~SNavigationSimulationLiveList
            ((SNavigationSimulationLiveList *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142de0680

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAtlasVisualizer,1>::DestroyObject
          (TIntrusiveReferenceController<SAtlasVisualizer,1> *this)

{
  SAtlasVisualizer::~SAtlasVisualizer((SAtlasVisualizer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e700a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<WidgetHittestGridInternal::FIntermediateResultNode,1>::DestroyObject
          (TIntrusiveReferenceController<WidgetHittestGridInternal::FIntermediateResultNode,1> *this
          )

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x18);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000142e700dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 142e700f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNavigationSimulationWidgetNode,1>::
DestroyObject(TIntrusiveReferenceController<FNavigationSimulationWidgetNode,1> *this)

{
  FNavigationSimulationWidgetNode::~FNavigationSimulationWidgetNode
            ((FNavigationSimulationWidgetNode *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70100

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWidgetListEntry,1>::DestroyObject
          (TIntrusiveReferenceController<FWidgetListEntry,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x68);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x58));
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)((this->ObjectStorage).Pad + 0x48));
  return;
}

// DestroyObject @ 142e70140

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
              *this)

{
  SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>::
  ~SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>
            ((SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70150

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SComboBox<TSharedPtr<int,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<SComboBox<TSharedPtr<int,1>_>,1> *this)

{
  SComboBox<TSharedPtr<int,1>_>::~SComboBox<TSharedPtr<int,1>_>
            ((SComboBox<TSharedPtr<int,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70160

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                *this)

{
  SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
  ~SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
            ((SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70170

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *this
          )

{
  SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
  ~SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>
            ((SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70180

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SComboRow<TSharedPtr<int,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<SComboRow<TSharedPtr<int,1>_>,1> *this)

{
  STableRow<TSharedPtr<int,1>_>::~STableRow<TSharedPtr<int,1>_>
            ((STableRow<TSharedPtr<int,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70190

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<SComboRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                *this)

{
  STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
  ~STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
            ((STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 142e701a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<SComboRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *this
          )

{
  STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
  ~STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>
            ((STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e701b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SListView<TSharedPtr<int,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<int,1>_>,1> *this)

{
  SListView<TSharedPtr<int,1>_>::~SListView<TSharedPtr<int,1>_>
            ((SListView<TSharedPtr<int,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e701c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>
              *this)

{
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
  ~SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>
            ((SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e701d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                *this)

{
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
  ~SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
            ((SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 142e701e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *this
          )

{
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
  ~SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>
            ((SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e701f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                *this)

{
  SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
  ~SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
            ((SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSpinBox<float>,1>::DestroyObject
          (TIntrusiveReferenceController<SSpinBox<float>,1> *this)

{
  SSpinBox<float>::~SSpinBox<float>((SSpinBox<float> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70210

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STableRow<TSharedPtr<int,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STableRow<TSharedPtr<int,1>_>,1> *this)

{
  STableRow<TSharedPtr<int,1>_>::~STableRow<TSharedPtr<int,1>_>
            ((STableRow<TSharedPtr<int,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70220

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>
              *this)

{
  STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
  ~STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>
            ((STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70230

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                *this)

{
  STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
  ~STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
            ((STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70240

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1> *this
          )

{
  STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>::
  ~STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>
            ((STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70250

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                *this)

{
  STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
  ~STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
            ((STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70260

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *this
          )

{
  STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>::
  ~STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>
            ((STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70270

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>,1> *this
          )

{
  STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>::
  ~STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_>
            ((STreeView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70280

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<int,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<int,1>_>,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
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
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 142e702d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,1>
                *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
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
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 142e70320

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,1>
                *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
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
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 142e70370

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FWidgetReflectorNodeBase,1>_>,1>
              *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
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
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 142e703c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,1>
                *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
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
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 142e70410

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<FWidgetReflectorNodeBase,1>_>,1>
              *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
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
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISlateMetaData__6B_;
  return;
}

// DestroyObject @ 142e70460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMessageEndpoint,1>::DestroyObject
          (TIntrusiveReferenceController<FMessageEndpoint,1> *this)

{
  FMessageEndpoint::~FMessageEndpoint((FMessageEndpoint *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70470

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FVisualTreeSnapshot,1>::DestroyObject
          (TIntrusiveReferenceController<FVisualTreeSnapshot,1> *this)

{
  FVisualTreeSnapshot::~FVisualTreeSnapshot((FVisualTreeSnapshot *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70480

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAtlasVisualizerPanel,1>::DestroyObject
          (TIntrusiveReferenceController<SAtlasVisualizerPanel,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x2b0);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x290);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FSlotBase::~FSlotBase((FSlotBase *)((this->ObjectStorage).Pad + 600));
  FChildren::~FChildren((FChildren *)((this->ObjectStorage).Pad + 0x238));
  SPanel::~SPanel((SPanel *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 142e704e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SNavigationSimulationListInternal::SDetailView,1>::DestroyObject
          (TIntrusiveReferenceController<SNavigationSimulationListInternal::SDetailView,1> *this)

{
  SNavigationSimulationListInternal::SDetailView::~SDetailView((SDetailView *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e704f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SGridPanel,1>::DestroyObject
          (TIntrusiveReferenceController<SGridPanel,1> *this)

{
  SGridPanel::~SGridPanel((SGridPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70500

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<WidgetHittestGridInternal::SIntermediateResultNode,1>::DestroyObject
          (TIntrusiveReferenceController<WidgetHittestGridInternal::SIntermediateResultNode,1> *this
          )

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x460));
  (this->ObjectStorage).Pad[0x450] = '\0';
  (this->ObjectStorage).Pad[0x451] = '\0';
  (this->ObjectStorage).Pad[0x452] = '\0';
  (this->ObjectStorage).Pad[0x453] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x448);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x408));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x400));
  STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
  ~STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
            ((STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70570

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SNavigationSimulationListInternal::SListElement,1>::DestroyObject
          (TIntrusiveReferenceController<SNavigationSimulationListInternal::SListElement,1> *this)

{
  void *pvVar1;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x460));
  (this->ObjectStorage).Pad[0x450] = '\0';
  (this->ObjectStorage).Pad[0x451] = '\0';
  (this->ObjectStorage).Pad[0x452] = '\0';
  (this->ObjectStorage).Pad[0x453] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x448);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x408));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x400));
  STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::
  ~STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>
            ((STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e705e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,1>
::DestroyObject(TIntrusiveReferenceController<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,1>
                *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c0));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70620

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNavigationSimulationSnapshotList,1>::
DestroyObject(TIntrusiveReferenceController<SNavigationSimulationSnapshotList,1> *this)

{
  SNavigationSimulationSnapshotList::~SNavigationSimulationSnapshotList
            ((SNavigationSimulationSnapshotList *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70630

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SReflectorToolTipWidget,1>::DestroyObject
          (TIntrusiveReferenceController<SReflectorToolTipWidget,1> *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 0x2b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b0));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70670

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SReflectorTreeWidgetItem,1>::DestroyObject
          (TIntrusiveReferenceController<SReflectorTreeWidgetItem,1> *this)

{
  SReflectorTreeWidgetItem::~SReflectorTreeWidgetItem
            ((SReflectorTreeWidgetItem *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70680

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SScrollableSnapshotImage,1>::DestroyObject
          (TIntrusiveReferenceController<SScrollableSnapshotImage,1> *this)

{
  SScrollableSnapshotImage::~SScrollableSnapshotImage
            ((SScrollableSnapshotImage *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70690

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSlateOptions,1>::DestroyObject
          (TIntrusiveReferenceController<SSlateOptions,1> *this)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e706a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SUniformGridPanel,1>::DestroyObject
          (TIntrusiveReferenceController<SUniformGridPanel,1> *this)

{
  SUniformGridPanel::~SUniformGridPanel((SUniformGridPanel *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e706b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SViewport,1>::DestroyObject
          (TIntrusiveReferenceController<SViewport,1> *this)

{
  SViewport::~SViewport((SViewport *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e706c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWidgetEventLog,1>::DestroyObject
          (TIntrusiveReferenceController<SWidgetEventLog,1> *this)

{
  SWidgetEventLog::~SWidgetEventLog((SWidgetEventLog *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e706d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWidgetHittestGrid,1>::DestroyObject
          (TIntrusiveReferenceController<SWidgetHittestGrid,1> *this)

{
  SWidgetHittestGrid::~SWidgetHittestGrid((SWidgetHittestGrid *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e706e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWidgetList,1>::DestroyObject
          (TIntrusiveReferenceController<SWidgetList,1> *this)

{
  SWidgetList::~SWidgetList((SWidgetList *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e706f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWidgetListRow,1>::DestroyObject
          (TIntrusiveReferenceController<SWidgetListRow,1> *this)

{
  SWidgetListRow::~SWidgetListRow((SWidgetListRow *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 142e70700

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SWidgetSnapshotVisualizer,1>::DestroyObject
          (TIntrusiveReferenceController<SWidgetSnapshotVisualizer,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2d8));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2c8));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x2b8));
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)&this->ObjectStorage);
  return;
}

