// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 37

// Construct<FLiveLinkRoleProjectSetting> @ 14cff3b40

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkRoleProjectSetting>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FLiveLinkRoleProjectSetting> @ 14cff3b60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkRoleProjectSetting>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FLiveLinkRoleProjectSetting> @ 14cff3b80

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkRoleProjectSetting>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
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

// Copy<FLiveLinkRoleProjectSetting> @ 14cff3ba0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkRoleProjectSetting>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = param_1;
    do {
      puVar3 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar6);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar6 = *puVar3;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[1]);
      }
      puVar6[1] = puVar3[1];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[2] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[2]);
      }
      pFVar1 = (ForAnyElementType *)(puVar6 + 3);
      puVar6[2] = puVar3[2];
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 3)) {
        iVar4 = *(int *)(puVar3 + 4);
        piVar2 = (int *)((longlong)puVar6 + 0x24);
        pFVar5 = ((ForAnyElementType *)(puVar3 + 3))->Data;
        *(int *)(puVar6 + 4) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<TSubclassOf<ULiveLinkFramePreProcessor>,TSubclassOf<ULiveLinkFramePreProcessor>,int>
                    (pFVar1->Data,(TSubclassOf<ULiveLinkFramePreProcessor> *)pFVar5,iVar4);
        }
      }
      param_3 = param_3 + -1;
      puVar6 = puVar6 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FProviderPollResult> @ 14cff59e0

void __cdecl UE::CoreUObject::Private::Construct<FProviderPollResult>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x39) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  return;
}

// ConstructForTests<FProviderPollResult> @ 14cff5a50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FProviderPollResult>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// Destruct<FProviderPollResult> @ 14cff5af0

void __cdecl UE::CoreUObject::Private::Destruct<FProviderPollResult>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  return;
}

// Copy<FProviderPollResult> @ 14cff5b50

bool __cdecl
UE::CoreUObject::Private::Copy<FProviderPollResult>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)((longlong)param_1 + lVar3);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
      *(undefined1 *)((longlong)param_1 + 0x38) = *(undefined1 *)((longlong)param_2 + 0x38);
      *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)((longlong)param_1 + 0x40),
                  (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)((longlong)param_2 + 0x40));
      param_2 = (void *)((longlong)param_2 + 0x90);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x90);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkRetargetAssetReference> @ 14cff6d30

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkRetargetAssetReference>(void *param_1)

{
  return;
}

// ConstructForTests<FLiveLinkRetargetAssetReference> @ 14cff6d50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkRetargetAssetReference>(void *param_1)

{
  return;
}

// Construct<FLiveLinkVirtualSubjectBoneAttachment> @ 14cff7040

void __cdecl
UE::CoreUObject::Private::Construct<FLiveLinkVirtualSubjectBoneAttachment>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x40) = dVar2;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  FText::FText((FText *)((longlong)param_1 + 0x50));
  return;
}

// ConstructForTests<FLiveLinkVirtualSubjectBoneAttachment> @ 14cff70b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkVirtualSubjectBoneAttachment>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar1;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x40) = dVar2;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  FText::FText((FText *)((longlong)param_1 + 0x50));
  return;
}

// Destruct<FLiveLinkVirtualSubjectBoneAttachment> @ 14cff7100

void __cdecl
UE::CoreUObject::Private::Destruct<FLiveLinkVirtualSubjectBoneAttachment>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 0x50) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cff710c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 0x50) + 0x10))();
    return;
  }
  return;
}

// Copy<FLiveLinkVirtualSubjectBoneAttachment> @ 14cff7160

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkVirtualSubjectBoneAttachment>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    lVar8 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar8 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
      uVar7 = *(undefined8 *)((longlong)param_2 + 0x28);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x40);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x44);
      *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x38);
      *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0x40) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x44) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
      plVar2 = *(longlong **)((longlong)param_2 + 0x50);
      plVar3 = *(longlong **)((longlong)param_1 + 0x50);
      if (plVar3 != plVar2) {
        *(longlong **)((longlong)param_1 + 0x50) = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,local_res18);
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      puVar1 = (undefined4 *)((longlong)param_2 + 0x58);
      param_2 = (void *)((longlong)param_2 + 0x60);
      *(undefined4 *)((longlong)param_1 + 0x58) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x60);
    } while (param_3 != 0);
  }
  return true;
}

// DeleterFunc<FApplyToClientPollingOperation> @ 14cffc870

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FApplyToClientPollingOperation>(void *param_1)

{
  ::operator_delete(param_1,0x30);
  return;
}

// DereferenceIfNecessary<FLiveLinkDebugUIEntry,FLiveLinkDebugUIEntry_*_&> @ 14cffc880

FLiveLinkDebugUIEntry * __cdecl
UE::Core::Private::DereferenceIfNecessary<FLiveLinkDebugUIEntry,FLiveLinkDebugUIEntry_*_&>
          (FLiveLinkDebugUIEntry **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>_*_&> @ 14cffc8a0

FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_>_*_&>
          (FObservableArrayPointer<TSharedPtr<FLiveLinkDebugUIEntry,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_*_&> @ 14cffc8c0

FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_*_&>
          (FObservableArrayPointer<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>_*_&> @ 14cffc8e0

FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_>_*_&>
          (FSharedObservableArray<TSharedPtr<FLiveLinkDebugUIEntry,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_*_&> @ 14cffc900

FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_*_&>
          (FSharedObservableArray<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_>,SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_>_*_&> @ 14cffc920

SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_>,SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_>_*_&>
          (SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>_*_&> @ 14cffc940

STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>_*_&>
          (STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_*_&> @ 14cffc960

STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_*_&>
          (STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<FProviderPollResult,1>_>,STableRow<TSharedPtr<FProviderPollResult,1>_>_*_&> @ 14cffc980

STableRow<TSharedPtr<FProviderPollResult,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<FProviderPollResult,1>_>,STableRow<TSharedPtr<FProviderPollResult,1>_>_*_&>
          (STableRow<TSharedPtr<FProviderPollResult,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FLiveLinkClient,FLiveLinkClient_*_&> @ 14cffc9a0

FLiveLinkClient * __cdecl
UE::Core::Private::DereferenceIfNecessary<FLiveLinkClient,FLiveLinkClient_*_&>
          (FLiveLinkClient **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FLiveLinkDebugCommand,FLiveLinkDebugCommand_*_&> @ 14cffc9c0

FLiveLinkDebugCommand * __cdecl
UE::Core::Private::DereferenceIfNecessary<FLiveLinkDebugCommand,FLiveLinkDebugCommand_*_&>
          (FLiveLinkDebugCommand **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FLiveLinkModule,FLiveLinkModule_*_&> @ 14cffc9e0

/* WARNING: Enum "Type": Some values do not have unique names */

FLiveLinkModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FLiveLinkModule,FLiveLinkModule_*_&>
          (FLiveLinkModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FLiveLinkMotionController,FLiveLinkMotionController_*_&> @ 14cffca00

FLiveLinkMotionController * __cdecl
UE::Core::Private::DereferenceIfNecessary<FLiveLinkMotionController,FLiveLinkMotionController_*_&>
          (FLiveLinkMotionController **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FLiveLinkSourceCollection,FLiveLinkSourceCollection_*_&> @ 14cffca20

FLiveLinkSourceCollection * __cdecl
UE::Core::Private::DereferenceIfNecessary<FLiveLinkSourceCollection,FLiveLinkSourceCollection_*_&>
          (FLiveLinkSourceCollection **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SLiveLinkDebugView,SLiveLinkDebugView_*_&> @ 14cffca40

SLiveLinkDebugView * __cdecl
UE::Core::Private::DereferenceIfNecessary<SLiveLinkDebugView,SLiveLinkDebugView_*_&>
          (SLiveLinkDebugView **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SLiveLinkMessageBusSourceFactory,SLiveLinkMessageBusSourceFactory_*_&> @ 14cffca60

SLiveLinkMessageBusSourceFactory * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SLiveLinkMessageBusSourceFactory,SLiveLinkMessageBusSourceFactory_*_&>
          (SLiveLinkMessageBusSourceFactory **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<ULiveLinkCustomTimeStep,ULiveLinkCustomTimeStep_*_&> @ 14cffca80

ULiveLinkCustomTimeStep * __cdecl
UE::Core::Private::DereferenceIfNecessary<ULiveLinkCustomTimeStep,ULiveLinkCustomTimeStep_*_&>
          (ULiveLinkCustomTimeStep **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<ULiveLinkMessageBusSourceFactory,ULiveLinkMessageBusSourceFactory_*_&> @ 14cffcaa0

ULiveLinkMessageBusSourceFactory * __cdecl
UE::Core::Private::
DereferenceIfNecessary<ULiveLinkMessageBusSourceFactory,ULiveLinkMessageBusSourceFactory_*_&>
          (ULiveLinkMessageBusSourceFactory **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<ULiveLinkTimeSynchronizationSource,ULiveLinkTimeSynchronizationSource_*_&> @ 14cffcac0

ULiveLinkTimeSynchronizationSource * __cdecl
UE::Core::Private::
DereferenceIfNecessary<ULiveLinkTimeSynchronizationSource,ULiveLinkTimeSynchronizationSource_*_&>
          (ULiveLinkTimeSynchronizationSource **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<ULiveLinkTimecodeProvider,ULiveLinkTimecodeProvider_*_&> @ 14cffcae0

ULiveLinkTimecodeProvider * __cdecl
UE::Core::Private::DereferenceIfNecessary<ULiveLinkTimecodeProvider,ULiveLinkTimecodeProvider_*_&>
          (ULiveLinkTimecodeProvider **param_1)

{
  return *param_1;
}

// GetMessagingStatistics @ 14d0500f0

INetworkMessagingExtension * __cdecl UE::LiveLinkHub::Private::GetMessagingStatistics(void)

{
  bool bVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  INetworkMessagingExtension *pIVar5;
  undefined1 local_res8 [8];
  
  pIVar3 = IModularFeatures::Get();
  bVar1 = IsInGameThread();
  if (bVar1) {
    iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))
                      (pIVar3,INetworkMessagingExtension::ModularFeatureName);
    if (0 < iVar2) {
      lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))
                        (pIVar3,INetworkMessagingExtension::ModularFeatureName,0);
      pIVar5 = (INetworkMessagingExtension *)(lVar4 + -8);
      if (lVar4 == 0) {
        pIVar5 = (INetworkMessagingExtension *)0x0;
      }
      return pIVar5;
    }
  }
  else {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3);
    iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))
                      (pIVar3,INetworkMessagingExtension::ModularFeatureName);
    if (0 < iVar2) {
      lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))
                        (pIVar3,INetworkMessagingExtension::ModularFeatureName,0);
      pIVar5 = (INetworkMessagingExtension *)(lVar4 + -8);
      if (lVar4 == 0) {
        pIVar5 = (INetworkMessagingExtension *)0x0;
      }
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      return pIVar5;
    }
    (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
  }
  `UE::LiveLinkHub::Private::GetMessagingStatistics'::__l2::<lambda_2>::operator()(local_res8);
  return (INetworkMessagingExtension *)0x0;
}

// operator() @ 150579740

bool __thiscall
`UE::LiveLinkHub::Private::GetMessagingStatistics'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7808434007951015972>);
  if (bVar2) {
    ::FName::ToString(&INetworkMessagingExtension::ModularFeatureName,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7808434007951015972>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505797a8;
    }
  }
  bVar2 = false;
LAB_1505797a8:
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

