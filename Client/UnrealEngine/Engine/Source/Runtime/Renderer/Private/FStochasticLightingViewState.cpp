// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetGPUSizeBytes @ 1454f6730

ulong64 __thiscall
FStochasticLightingViewState::GetGPUSizeBytes(FStochasticLightingViewState *this,bool param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar1 = GetRenderTargetGPUSizeBytes(&this->SceneNormalHistory,param_1);
  uVar2 = GetRenderTargetGPUSizeBytes(&this->SceneDepthHistory,param_1);
  return uVar2 + uVar1;
}

