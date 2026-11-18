// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 1

// ~TObject<FDynamicPrimitiveUniformBuffer> @ 146c669b0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FDynamicPrimitiveUniformBuffer>::~TObject<FDynamicPrimitiveUniformBuffer>
          (TObject<FDynamicPrimitiveUniformBuffer> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FDynamicPrimitiveUniformBuffer::~FDynamicPrimitiveUniformBuffer
            ((FDynamicPrimitiveUniformBuffer *)(this + 1));
  return;
}

