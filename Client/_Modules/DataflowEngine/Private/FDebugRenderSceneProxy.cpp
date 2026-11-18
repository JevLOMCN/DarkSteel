// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// GetMemoryFootprint @ 1462dd5a0

uint __thiscall FDebugRenderSceneProxy::GetMemoryFootprint(FDebugRenderSceneProxy *this)

{
  uint uVar1;
  
  uVar1 = GetAllocatedSize(this);
  return uVar1 + 0x3a0;
}

