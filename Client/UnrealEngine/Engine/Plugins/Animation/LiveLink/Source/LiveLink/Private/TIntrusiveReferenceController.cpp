// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 29

// DestroyObject @ 14d0397b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkDebugUIEntry,1>::DestroyObject
          (TIntrusiveReferenceController<FLiveLinkDebugUIEntry,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d0397d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14d0397e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkDefaultVirtualSubjectSource,1>::
DestroyObject(TIntrusiveReferenceController<FLiveLinkDefaultVirtualSubjectSource,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ILiveLinkSource__6B_;
  return;
}

// DestroyObject @ 14d039800

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>::DestroyObject
          (TIntrusiveReferenceController<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14d039810

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FProviderPollResult,1>::DestroyObject
          (TIntrusiveReferenceController<FProviderPollResult,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x88] = '\0';
  (this->ObjectStorage).Pad[0x89] = '\0';
  (this->ObjectStorage).Pad[0x8a] = '\0';
  (this->ObjectStorage).Pad[0x8b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x80);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x40));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// DestroyObject @ 14d039870

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FLiveLinkLogInstance::FRepeatableMessageData,1>::DestroyObject
          (TIntrusiveReferenceController<FLiveLinkLogInstance::FRepeatableMessageData,1> *this)

{
  return;
}

// DestroyObject @ 14d039880

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateColorBrush,1>::DestroyObject
          (TIntrusiveReferenceController<FSlateColorBrush,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7FSlateBrush__6B_;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0xa0));
  return;
}

// DestroyObject @ 14d0398a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> *this)

{
  SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::~SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_>
            ((SListView<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d0398b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
                *this)

{
  SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
  ~SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>
            ((SListView<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14d0398c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>::DestroyObject
          (TIntrusiveReferenceController<STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1> *this)

{
  STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>::~STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_>
            ((STableRow<TSharedPtr<FLiveLinkDebugUIEntry,1>_> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d0398d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
                *this)

{
  STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>::
  ~STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>
            ((STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_> *)
             &this->ObjectStorage);
  return;
}

// DestroyObject @ 14d0398e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>::
DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FLiveLinkDebugUIEntry,1>_>,1>
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

// DestroyObject @ 14d039930

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
::DestroyObject(TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>
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

// DestroyObject @ 14d039980

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<ULiveLinkAnimationAxisSwitchPreProcessor::FLiveLinkAnimationAxisSwitchPreProcessorWorker,1>
::DestroyObject(TIntrusiveReferenceController<ULiveLinkAnimationAxisSwitchPreProcessor::FLiveLinkAnimationAxisSwitchPreProcessorWorker,1>
                *this)

{
  return;
}

// DestroyObject @ 14d039990

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<ULiveLinkAnimationFrameInterpolationProcessor::FLiveLinkAnimationFrameInterpolationProcessorWorker,1>
::DestroyObject(TIntrusiveReferenceController<ULiveLinkAnimationFrameInterpolationProcessor::FLiveLinkAnimationFrameInterpolationProcessorWorker,1>
                *this)

{
  return;
}

// DestroyObject @ 14d0399a0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<ULiveLinkAnimationRoleToTransform::FLiveLinkAnimationRoleToTransformWorker,1>
::DestroyObject(TIntrusiveReferenceController<ULiveLinkAnimationRoleToTransform::FLiveLinkAnimationRoleToTransformWorker,1>
                *this)

{
  return;
}

// DestroyObject @ 14d0399b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker,1>
::DestroyObject(TIntrusiveReferenceController<ULiveLinkBasicFrameInterpolationProcessor::FLiveLinkBasicFrameInterpolationProcessorWorker,1>
                *this)

{
  return;
}

// DestroyObject @ 14d0399c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkBroadcastSource,1>::DestroyObject
          (TIntrusiveReferenceController<FLiveLinkBroadcastSource,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ILiveLinkSource__6B_;
  return;
}

// DestroyObject @ 14d0399e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<ULiveLinkLocatorAxisSwitchPreProcessor::FLiveLinkLocatorAxisSwitchPreProcessorWorker,1>
::DestroyObject(TIntrusiveReferenceController<ULiveLinkLocatorAxisSwitchPreProcessor::FLiveLinkLocatorAxisSwitchPreProcessorWorker,1>
                *this)

{
  return;
}

// DestroyObject @ 14d0399f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkMessageBusSource,1>::DestroyObject
          (TIntrusiveReferenceController<FLiveLinkMessageBusSource,1> *this)

{
  longlong *plVar1;
  void *pvVar2;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 0x80));
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 0x58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  pvVar2 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  *(undefined ***)(this->ObjectStorage).Pad = &___7ILiveLinkSource__6B_;
  return;
}

// DestroyObject @ 14d039a60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkSkeletonRemapperWorker,1>::
DestroyObject(TIntrusiveReferenceController<FLiveLinkSkeletonRemapperWorker,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x50] = '\0';
  (this->ObjectStorage).Pad[0x51] = '\0';
  (this->ObjectStorage).Pad[0x52] = '\0';
  (this->ObjectStorage).Pad[0x53] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14d039aa0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkTimedDataInput,1>::DestroyObject
          (TIntrusiveReferenceController<FLiveLinkTimedDataInput,1> *this)

{
  FLiveLinkTimedDataInput::~FLiveLinkTimedDataInput((FLiveLinkTimedDataInput *)&this->ObjectStorage)
  ;
  return;
}

// DestroyObject @ 14d039ab0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<ULiveLinkTransformAxisSwitchPreProcessor::FLiveLinkTransformAxisSwitchPreProcessorWorker,1>
::DestroyObject(TIntrusiveReferenceController<ULiveLinkTransformAxisSwitchPreProcessor::FLiveLinkTransformAxisSwitchPreProcessorWorker,1>
                *this)

{
  return;
}

// DestroyObject @ 14d039ac0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<ULiveLinkTransformDeadbandPreProcessor::FLiveLinkTransformDeadbandPreProcessorWorker,1>
::DestroyObject(TIntrusiveReferenceController<ULiveLinkTransformDeadbandPreProcessor::FLiveLinkTransformDeadbandPreProcessorWorker,1>
                *this)

{
  return;
}

// DestroyObject @ 14d039ad0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<ULiveLinkTransformRoleToAnimation::FLiveLinkTransformRoleToAnimationWorker,1>
::DestroyObject(TIntrusiveReferenceController<ULiveLinkTransformRoleToAnimation::FLiveLinkTransformRoleToAnimationWorker,1>
                *this)

{
  return;
}

// DestroyObject @ 14d039ae0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkVirtualSubjectSource,1>::
DestroyObject(TIntrusiveReferenceController<FLiveLinkVirtualSubjectSource,1> *this)

{
  *(undefined ***)(this->ObjectStorage).Pad = &___7ILiveLinkSource__6B_;
  return;
}

// DestroyObject @ 14d039b00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateStyleSet,1>::DestroyObject
          (TIntrusiveReferenceController<FSlateStyleSet,1> *this)

{
  FSlateStyleSet::~FSlateStyleSet((FSlateStyleSet *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d039b10

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SLiveLinkDebugView,1>::DestroyObject
          (TIntrusiveReferenceController<SLiveLinkDebugView,1> *this)

{
  SLiveLinkDebugView::~SLiveLinkDebugView((SLiveLinkDebugView *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d039b20

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SLiveLinkMessageBusSourceFactory,1>::
DestroyObject(TIntrusiveReferenceController<SLiveLinkMessageBusSourceFactory,1> *this)

{
  SLiveLinkMessageBusSourceFactory::~SLiveLinkMessageBusSourceFactory
            ((SLiveLinkMessageBusSourceFactory *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d039b30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SProviderPollRow,1>::DestroyObject
          (TIntrusiveReferenceController<SProviderPollRow,1> *this)

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
  STableRow<TSharedPtr<FProviderPollResult,1>_>::~STableRow<TSharedPtr<FProviderPollResult,1>_>
            ((STableRow<TSharedPtr<FProviderPollResult,1>_> *)&this->ObjectStorage);
  return;
}

