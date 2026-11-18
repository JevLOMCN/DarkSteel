// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FDownsamplePassInputs @ 145194fa0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FDownsamplePassInputs * __thiscall
FDownsamplePassInputs::FDownsamplePassInputs(FDownsamplePassInputs *this)

{
  this->Name = (wchar_t *)0x0;
  this->UserSuppliedOutput = (IPooledRenderTarget *)0x0;
  (this->SceneColor).TextureSRV = (FRDGTextureSRV *)0x0;
  (this->SceneColor).ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->SceneColor).ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->Quality = Low;
  this->Flags = None;
  this->FormatOverride = PF_Unknown;
  return this;
}

