// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 5

// ~FSlateShaderResource @ 145fea4f0

void __thiscall FSlateShaderResource::~FSlateShaderResource(FSlateShaderResource *this)

{
  this->DestroyState = 0x84;
  this->_padding_ = (longlong)&___7FSlateShaderResource__6B_;
  return;
}

// CheckForStaleResources @ 145ff6dd0

void __thiscall FSlateShaderResource::CheckForStaleResources(FSlateShaderResource *this)

{
  return;
}

// GetUsedSlatePostBuffers @ 1460197f0

ESlatePostRT __thiscall FSlateShaderResource::GetUsedSlatePostBuffers(FSlateShaderResource *this)

{
  return None;
}

// IsResourceValid @ 14601b780

bool __thiscall FSlateShaderResource::IsResourceValid(FSlateShaderResource *this)

{
  return true;
}

// RequiresVirtualTextureFeedback @ 146022d20

bool __thiscall FSlateShaderResource::RequiresVirtualTextureFeedback(FSlateShaderResource *this)

{
  return false;
}

