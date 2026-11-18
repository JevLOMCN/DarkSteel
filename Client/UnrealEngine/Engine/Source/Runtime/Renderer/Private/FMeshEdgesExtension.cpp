// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// PostCreateSceneRenderer @ 144f1de80

void __thiscall
FMeshEdgesExtension::PostCreateSceneRenderer
          (FMeshEdgesExtension *this,FSceneViewFamily *param_1,ISceneRenderer *param_2)

{
  RenderMeshEdges((FSceneViewFamily *)(param_2 + 0x17));
  return;
}

