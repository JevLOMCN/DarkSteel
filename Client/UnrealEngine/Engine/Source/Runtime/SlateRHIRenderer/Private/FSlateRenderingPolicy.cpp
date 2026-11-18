// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 3

// ~FSlateRenderingPolicy @ 145fea4d0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRenderingPolicy::~FSlateRenderingPolicy(FSlateRenderingPolicy *this)

{
  this->_padding_ = (longlong)&___7FSlateRenderingPolicy__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FontServices).SharedReferenceCount.ReferenceController);
  return;
}

// AddSceneAt @ 145fef930

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateRenderingPolicy::AddSceneAt(FSlateRenderingPolicy *this,FSceneInterface *param_1,int param_2)

{
  return;
}

// ClearScenes @ 145ff7420

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateRenderingPolicy::ClearScenes(FSlateRenderingPolicy *this)

{
  return;
}

