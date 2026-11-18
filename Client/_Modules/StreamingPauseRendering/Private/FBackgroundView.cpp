// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamingPauseRendering
// Functions: 3

// GetSize @ 146c844b0

TIntPoint<int> __thiscall FBackgroundView::GetSize(FBackgroundView *this)

{
  TIntPoint<int>_u_0 in_RDX;
  
  *(TIntPoint<int>_u_0 *)in_RDX = (this->Size).field0_0x0;
  return (TIntPoint<int>)in_RDX;
}

// GetViewportRenderTargetTexture @ 146c844f0

FSlateShaderResource * __thiscall
FBackgroundView::GetViewportRenderTargetTexture(FBackgroundView *this)

{
  return (FSlateShaderResource *)this->RenderTarget;
}

// RequiresVsync @ 146c845f0

bool __thiscall FBackgroundView::RequiresVsync(FBackgroundView *this)

{
  return false;
}

