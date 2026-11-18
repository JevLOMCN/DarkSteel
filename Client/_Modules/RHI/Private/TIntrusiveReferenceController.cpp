// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 4

// DestroyObject @ 145c39800

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FVisualizerEvent,1>::DestroyObject
          (TIntrusiveReferenceController<FVisualizerEvent,1> *this)

{
  void *pvVar1;
  
  DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
            (*(TSharedPtr<FVisualizerEvent,1> **)((this->ObjectStorage).Pad + 0x48),
             *(int *)((this->ObjectStorage).Pad + 0x50));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x40));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 145c55780

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::RHI::GPUProfiler::FEventStream,1>::
DestroyObject(TIntrusiveReferenceController<UE::RHI::GPUProfiler::FEventStream,1> *this)

{
  UE::RHI::GPUProfiler::FEventStream::~FEventStream((FEventStream *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 145c994a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPipelineStateAsync::FCompletionState,1>::
DestroyObject(TIntrusiveReferenceController<FPipelineStateAsync::FCompletionState,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1);
  }
  puVar4 = *(undefined8 **)(this->ObjectStorage).Pad;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145c994e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 145c99500

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRHIResourceStats,1>::DestroyObject
          (TIntrusiveReferenceController<FRHIResourceStats,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x20);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

