// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateNullRenderer
// Functions: 4

// GetSlateTexture @ 146c84ae0

FSlateShaderResource * __thiscall FSlateFontAtlasNull::GetSlateTexture(FSlateFontAtlasNull *this)

{
  return (FSlateShaderResource *)&NullFontTexture;
}

// GetEngineTexture @ 146c84af0

FTextureResource * __thiscall FSlateFontAtlasNull::GetEngineTexture(FSlateFontAtlasNull *this)

{
  return (FTextureResource *)&NullFontTexture.field_0x10;
}

// ConditionalUpdateTexture @ 146c84b00

void __thiscall FSlateFontAtlasNull::ConditionalUpdateTexture(FSlateFontAtlasNull *this)

{
  return;
}

// ReleaseResources @ 146c84b10

void __thiscall FSlateFontAtlasNull::ReleaseResources(FSlateFontAtlasNull *this)

{
  return;
}

