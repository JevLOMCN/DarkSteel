// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// ~FMutableImageOperationData @ 14ac0cb00

void __thiscall
FMutableImageOperationData::~FMutableImageOperationData(FMutableImageOperationData *this)

{
  longlong *plVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CounterTaskLock);
  if (*(longlong *)&this->RescheduleCallback != 0) {
    plVar1 = *(longlong **)&(this->RescheduleCallback).field_0x28;
    plVar4 = (longlong *)&(this->RescheduleCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  LOCK();
  `public:_static_struct_std::atomic<__int64>&___ptr64___cdecl_UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter::Get(void)'
  ::__l2::Counter =
       (atomic<__int64>)
       ((longlong)
        `public:_static_struct_std::atomic<__int64>&___ptr64___cdecl_UE::Mutable::Private::MemoryCounters::FPrefetchMemoryCounter::Get(void)'
        ::__l2::Counter - (this->AllocatedMemory).AllocatorInstance.AllocSize);
  UNLOCK();
  UE::Mutable::Private::FGlobalMemoryCounter::Update
            (-(this->AllocatedMemory).AllocatorInstance.AllocSize);
  pvVar2 = (void *)(this->AllocatedMemory).AllocatorInstance._padding_;
  (this->AllocatedMemory).AllocatorInstance.AllocSize = 0;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar3 = (this->Levels).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Result).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UpdateContext).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->RequestedImage).ConstantImagesNeededToGenerate.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TRegistry<UE::Mutable::Private::FGeneratedImageKey,UE::Mutable::Private::FGeneratedImageData>::
  FHandle::~FHandle(&(this->RequestedImage).ImageID);
  return;
}

