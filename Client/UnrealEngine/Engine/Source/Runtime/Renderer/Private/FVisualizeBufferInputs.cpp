// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FVisualizeBufferInputs @ 145295e70

/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FVisualizeBufferInputs * __thiscall
FVisualizeBufferInputs::FVisualizeBufferInputs(FVisualizeBufferInputs *this)

{
  (this->OverrideOutput)._padding_ = 0;
  (this->OverrideOutput)._padding_ = 0;
  (this->OverrideOutput)._padding_ = 0;
  (this->OverrideOutput).LoadAction = ENoAction;
  (this->SceneColor).Texture = (FRDGTexture *)0x0;
  (this->SceneColor).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SceneColor).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Tiles).DataPtr = (FVisualizeBufferTile *)0x0;
  (this->Tiles).ArrayNum = 0;
  return this;
}

