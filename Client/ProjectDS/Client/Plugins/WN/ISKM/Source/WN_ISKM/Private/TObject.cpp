// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 1

// ~TObject<FWN_ISKM_OneFrameBatchElement> @ 14a83f7f0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FWN_ISKM_OneFrameBatchElement>::~TObject<FWN_ISKM_OneFrameBatchElement>
          (TObject<FWN_ISKM_OneFrameBatchElement> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_UFWN_ISKM_OneFrameBatchElement_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  if (*(void **)&this[2].field_0x8 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)&this[2].field_0x8);
  }
  if (*(FRHIResource **)(this + 2) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)(this + 2));
  }
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  return;
}

