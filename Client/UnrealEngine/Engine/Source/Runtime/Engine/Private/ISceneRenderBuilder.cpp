// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Create @ 14851fcb0

TUniquePtr<ISceneRenderBuilder,TDefaultDelete<ISceneRenderBuilder>_> __cdecl
ISceneRenderBuilder::Create(FSceneInterface *param_1)

{
  IRendererModule *pIVar1;
  
  pIVar1 = GetRendererModule();
  (**(code **)((longlong)*pIVar1 + 600))(pIVar1,param_1);
  return (TUniquePtr<ISceneRenderBuilder,TDefaultDelete<ISceneRenderBuilder>_>)
         (ISceneRenderBuilder *)param_1;
}

