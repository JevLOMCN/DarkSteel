// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Flush @ 147ebc7b0

void __thiscall
FMaterialCacheVirtualTextureRenderProxy::Flush
          (FMaterialCacheVirtualTextureRenderProxy *this,FSceneInterface *param_1)

{
  IRendererModule *pIVar1;
  longlong *plVar2;
  
  pIVar1 = GetRendererModule();
  plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x138))(pIVar1);
                    /* WARNING: Could not recover jumptable at 0x000147ebc7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,param_1,(this->PrimitiveCID).PrimIDValue,&this->TagGuid);
  return;
}

