// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// ~FPerTile @ 14ddcb500

void __thiscall
UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile::~FPerTile(FPerTile *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FSceneViewStateReference,int>
            ((FSceneViewStateReference *)(this->SceneViewStates).AllocatorInstance.Data,
             (this->SceneViewStates).ArrayNum);
  pFVar1 = (this->SceneViewStates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

