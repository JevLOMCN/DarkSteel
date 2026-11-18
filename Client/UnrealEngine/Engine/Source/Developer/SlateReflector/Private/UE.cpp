// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 54

// Construct<FWidgetSnapshotResponse> @ 142ddf960

void __cdecl UE::CoreUObject::Private::Construct<FWidgetSnapshotResponse>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FWidgetSnapshotResponse> @ 142ddf980

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWidgetSnapshotResponse>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FWidgetSnapshotResponse> @ 142ddf9a0

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetSnapshotResponse>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FWidgetSnapshotResponse> @ 142ddf9c0

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetSnapshotResponse>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined8 uVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + lVar6 + 0x10);
      pFVar5 = (ForAnyElementType *)((longlong)param_1 + 0x10);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      if (pFVar5 != pFVar4) {
        iVar2 = *(int *)((longlong)param_1 + lVar6 + 0x18);
        piVar1 = (int *)((longlong)param_1 + 0x1c);
        _Src = pFVar4->Data;
        *(int *)((longlong)param_1 + 0x18) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar2,*piVar1,pFVar5,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar2);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWidgetSnapshotRequest> @ 142ddfaa0

void __cdecl UE::CoreUObject::Private::Construct<FWidgetSnapshotRequest>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FWidgetSnapshotRequest> @ 142ddfac0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWidgetSnapshotRequest>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FWidgetSnapshotRequest> @ 142ddfae0

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetSnapshotRequest>(void *param_1)

{
  return;
}

// Copy<FWidgetSnapshotRequest> @ 142ddfaf0

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetSnapshotRequest>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<int,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<int,1>_>_*_&> @ 142deebe0

FObservableArrayPointer<TSharedPtr<int,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<int,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<int,1>_>_*_&>
          (FObservableArrayPointer<TSharedPtr<int,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>_*_&> @ 142deec00

FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_>_*_&>
          (FObservableArrayPointer<TSharedPtr<FNavigationSimulationWidgetNode,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_*_&> @ 142deec20

FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_*_&>
          (FObservableArrayPointer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>_*_&> @ 142deec40

FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_>_*_&>
          (FObservableArrayPointer<TSharedPtr<FWidgetReflectorNodeBase,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_*_&> @ 142deec60

FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_*_&>
          (FObservableArrayPointer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>_*_&> @ 142deec80

FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_>_*_&>
          (FObservableArrayPointer<TSharedRef<FWidgetReflectorNodeBase,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<int,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<int,1>_>_*_&> @ 142deeca0

FSharedObservableArray<TSharedPtr<int,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<int,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<int,1>_>_*_&>
          (FSharedObservableArray<TSharedPtr<int,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>_*_&> @ 142deecc0

FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_>_*_&>
          (FSharedObservableArray<TSharedPtr<FNavigationSimulationWidgetNode,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_*_&> @ 142deece0

FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_*_&>
          (FSharedObservableArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>_*_&> @ 142deed00

FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_>_*_&>
          (FSharedObservableArray<TSharedPtr<FWidgetReflectorNodeBase,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_*_&> @ 142deed20

FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_*_&>
          (FSharedObservableArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_>_*_&> @ 142deed40

FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_>_*_&>
          (FSharedObservableArray<TSharedRef<FWidgetReflectorNodeBase,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>_*_&> @ 142deed60

SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>,SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_>_*_&>
          (SBreadcrumbTrail<TSharedRef<FWidgetReflectorNodeBase,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SComboBox<TSharedPtr<int,1>_>,SComboBox<TSharedPtr<int,1>_>_*_&> @ 142deed80

SComboBox<TSharedPtr<int,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SComboBox<TSharedPtr<int,1>_>,SComboBox<TSharedPtr<int,1>_>_*_&>
          (SComboBox<TSharedPtr<int,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_*_&> @ 142deeda0

SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_*_&>
          (SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>_*_&> @ 142deedc0

SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>,SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>_*_&>
          (SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>_*_&> @ 142deede0

SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>_*_&>
          (SMultiColumnTableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>,SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>_*_&> @ 142deee00

SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>,SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_>_*_&>
          (SMultiColumnTableRow<TSharedPtr<FWidgetListEntry,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_*_&> @ 142deee20

SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_*_&>
          (SMultiColumnTableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>_*_&> @ 142deee40

SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>_*_&>
          (SMultiColumnTableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<int,1>_>,STableRow<TSharedPtr<int,1>_>_*_&> @ 142deee60

STableRow<TSharedPtr<int,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<int,1>_>,STableRow<TSharedPtr<int,1>_>_*_&>
          (STableRow<TSharedPtr<int,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>_*_&> @ 142deee80

STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>,STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_>_*_&>
          (STableRow<TSharedPtr<FNavigationSimulationWidgetNode,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<FWidgetListEntry,1>_>,STableRow<TSharedPtr<FWidgetListEntry,1>_>_*_&> @ 142deeea0

STableRow<TSharedPtr<FWidgetListEntry,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<FWidgetListEntry,1>_>,STableRow<TSharedPtr<FWidgetListEntry,1>_>_*_&>
          (STableRow<TSharedPtr<FWidgetListEntry,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_*_&> @ 142deeec0

STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_*_&>
          (STableRow<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>_*_&> @ 142deeee0

STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>,STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_>_*_&>
          (STableRow<TSharedPtr<FWidgetReflectorNodeBase,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_*_&> @ 142deef00

STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_*_&>
          (STableRow<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>_*_&> @ 142deef20

STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>,STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_>_*_&>
          (STableRow<TSharedRef<FWidgetReflectorNodeBase,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FInputEventVisualizer,FInputEventVisualizer_*_&> @ 142deef40

FInputEventVisualizer * __cdecl
UE::Core::Private::DereferenceIfNecessary<FInputEventVisualizer,FInputEventVisualizer_*_&>
          (FInputEventVisualizer **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FSlateReflectorModuleImpl,FSlateReflectorModuleImpl_*_&> @ 142deef60

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateReflectorModuleImpl * __cdecl
UE::Core::Private::DereferenceIfNecessary<FSlateReflectorModuleImpl,FSlateReflectorModuleImpl_*_&>
          (FSlateReflectorModuleImpl **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FVisualTreeCapture,FVisualTreeCapture_*_&> @ 142deef80

FVisualTreeCapture * __cdecl
UE::Core::Private::DereferenceIfNecessary<FVisualTreeCapture,FVisualTreeCapture_*_&>
          (FVisualTreeCapture **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SAtlasVisualizer,SAtlasVisualizer_*_&> @ 142deefa0

SAtlasVisualizer * __cdecl
UE::Core::Private::DereferenceIfNecessary<SAtlasVisualizer,SAtlasVisualizer_*_&>
          (SAtlasVisualizer **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SNavigationSimulationListInternal::SDetailView,SNavigationSimulationListInternal::SDetailView_*_&> @ 142deefc0

SDetailView * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SNavigationSimulationListInternal::SDetailView,SNavigationSimulationListInternal::SDetailView_*_&>
          (SDetailView **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget_*_&> @ 142deefe0

SListViewPinnedRowWidget * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget,SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::SListViewPinnedRowWidget_*_&>
          (SListViewPinnedRowWidget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SNavigationSimulationListBase,SNavigationSimulationListBase_*_&> @ 142def000

SNavigationSimulationListBase * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SNavigationSimulationListBase,SNavigationSimulationListBase_*_&>
          (SNavigationSimulationListBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SReflectorToolTipWidget,SReflectorToolTipWidget_*_&> @ 142def020

SReflectorToolTipWidget * __cdecl
UE::Core::Private::DereferenceIfNecessary<SReflectorToolTipWidget,SReflectorToolTipWidget_*_&>
          (SReflectorToolTipWidget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SReflectorTreeWidgetItem,SReflectorTreeWidgetItem_*_&> @ 142def040

SReflectorTreeWidgetItem * __cdecl
UE::Core::Private::DereferenceIfNecessary<SReflectorTreeWidgetItem,SReflectorTreeWidgetItem_*_&>
          (SReflectorTreeWidgetItem **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SScrollableSnapshotImage,SScrollableSnapshotImage_*_&> @ 142def060

SScrollableSnapshotImage * __cdecl
UE::Core::Private::DereferenceIfNecessary<SScrollableSnapshotImage,SScrollableSnapshotImage_*_&>
          (SScrollableSnapshotImage **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSlateOptions,SSlateOptions_*_&> @ 142def080

SSlateOptions * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSlateOptions,SSlateOptions_*_&>(SSlateOptions **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SWidgetEventLog,SWidgetEventLog_*_&> @ 142def0a0

SWidgetEventLog * __cdecl
UE::Core::Private::DereferenceIfNecessary<SWidgetEventLog,SWidgetEventLog_*_&>
          (SWidgetEventLog **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SWidgetHittestGrid,SWidgetHittestGrid_*_&> @ 142def0c0

/* WARNING: Enum "Type": Some values do not have unique names */

SWidgetHittestGrid * __cdecl
UE::Core::Private::DereferenceIfNecessary<SWidgetHittestGrid,SWidgetHittestGrid_*_&>
          (SWidgetHittestGrid **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SWidgetListRow,SWidgetListRow_*_&> @ 142def0e0

SWidgetListRow * __cdecl
UE::Core::Private::DereferenceIfNecessary<SWidgetListRow,SWidgetListRow_*_&>
          (SWidgetListRow **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<WidgetReflectorImpl::SWidgetReflector,WidgetReflectorImpl::SWidgetReflector_*_&> @ 142def100

/* WARNING: Enum "Type": Some values do not have unique names */

SWidgetReflector * __cdecl
UE::Core::Private::
DereferenceIfNecessary<WidgetReflectorImpl::SWidgetReflector,WidgetReflectorImpl::SWidgetReflector_*_&>
          (SWidgetReflector **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SWidgetSnapshotVisualizer,SWidgetSnapshotVisualizer_*_&> @ 142def120

SWidgetSnapshotVisualizer * __cdecl
UE::Core::Private::DereferenceIfNecessary<SWidgetSnapshotVisualizer,SWidgetSnapshotVisualizer_*_&>
          (SWidgetSnapshotVisualizer **param_1)

{
  return *param_1;
}

// MakeTupleIndicies<unsigned_char,14,std::integer_sequence<unsigned_char,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_> @ 142dfa450

TTuple<unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char>
* __cdecl UE::Slate::
          MakeTupleIndicies<unsigned_char,14,std::integer_sequence<unsigned_char,0,1,2,3,4,5,6,7,8,9,10,11,12,13>_>
                    (TTuple<unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char>
                     *__return_storage_ptr__)

{
  *(undefined4 *)__return_storage_ptr__ = 0x3020100;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = 0x7060504;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0xb0a0908;
  *(undefined2 *)&__return_storage_ptr__->field_0xc = 0xd0c;
  return __return_storage_ptr__;
}

// MakeTupleIndiciesInner<unsigned_char,0,1,2,3,4,5,6,7,8,9,10,11,12,13> @ 142dfa480

TTuple<unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char>
* __cdecl UE::Slate::MakeTupleIndiciesInner<unsigned_char,0,1,2,3,4,5,6,7,8,9,10,11,12,13>
                    (TTuple<unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char,unsigned_char>
                     *__return_storage_ptr__,
                    integer_sequence<unsigned_char,0,1,2,3,4,5,6,7,8,9,10,11,12,13> param_1)

{
  *(undefined4 *)__return_storage_ptr__ = 0x3020100;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = 0x7060504;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0xb0a0908;
  *(undefined2 *)&__return_storage_ptr__->field_0xc = 0xd0c;
  return __return_storage_ptr__;
}

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationSimulationWidgetNodeItem>_> @ 142dfbdd0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationSimulationWidgetNodeItem>_>
          (uint param_1,uint param_2,ForElementType<FNavigationSimulationWidgetNodeItem> *param_3,
          int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_4;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FNavigationSimulationWidgetNodeItem>::ResizeAllocation
              (param_3,uVar2,(int)uVar6,uVar7);
    *param_4 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

