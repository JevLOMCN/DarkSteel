// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// ~ConstructionValues @ 14ddcaa70

void __thiscall FSceneViewFamily::ConstructionValues::~ConstructionValues(ConstructionValues *this)

{
  ForElementType<unsigned_int> FVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SceneTexturesCaptureInfo).SharedReferenceCount.ReferenceController);
  FVar1 = (this->EngineShowFlags).CustomShowFlags.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return;
}

