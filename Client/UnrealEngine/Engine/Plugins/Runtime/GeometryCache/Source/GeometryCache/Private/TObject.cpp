// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 1

// ~TObject<FGeometryCacheVertexFactoryUserDataWrapper> @ 14ca08790

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FGeometryCacheVertexFactoryUserDataWrapper>::
~TObject<FGeometryCacheVertexFactoryUserDataWrapper>
          (TObject<FGeometryCacheVertexFactoryUserDataWrapper> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFGeometryCacheVertexFactoryUserDataWrapper_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FGeometryCacheVertexFactoryUserData::~FGeometryCacheVertexFactoryUserData
            ((FGeometryCacheVertexFactoryUserData *)&this[1].field_0x8);
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  return;
}

