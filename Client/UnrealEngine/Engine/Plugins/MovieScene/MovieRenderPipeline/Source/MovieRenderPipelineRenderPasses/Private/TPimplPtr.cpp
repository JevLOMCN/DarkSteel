// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// ~TPimplPtr<FSceneViewStateSystemMemoryMirror,0> @ 14ddc9b10

void __thiscall
TPimplPtr<FSceneViewStateSystemMemoryMirror,0>::~TPimplPtr<FSceneViewStateSystemMemoryMirror,0>
          (TPimplPtr<FSceneViewStateSystemMemoryMirror,0> *this)

{
  if (this->Ptr != (FSceneViewStateSystemMemoryMirror *)0x0) {
    (*(code *)this->Ptr[-1].TemporaryTextures.AllocatorInstance.Data)();
  }
  return;
}

