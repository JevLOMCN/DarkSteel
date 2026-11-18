// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// ~TObject<FLandscapeElementParamArray> @ 145f7be80

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FLandscapeElementParamArray>::~TObject<FLandscapeElementParamArray>
          (TObject<FLandscapeElementParamArray> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFLandscapeElementParamArray_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  DestructItems<FLandscapeBatchElementParams,int>
            (*(FLandscapeBatchElementParams **)&this[1].field_0x8,*(int *)(this + 2));
  if (*(void **)&this[1].field_0x8 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)&this[1].field_0x8);
  }
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  return;
}

