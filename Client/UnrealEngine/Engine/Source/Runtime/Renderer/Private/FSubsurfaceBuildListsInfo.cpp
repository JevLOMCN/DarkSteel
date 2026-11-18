// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FSubsurfaceBuildListsInfo @ 1456dd230

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FSubsurfaceBuildListsInfo * __thiscall
`ClassifySSSTiles'::__l24::FSubsurfaceBuildListsInfo::FSubsurfaceBuildListsInfo
          (void *this,ETileType param_1,FRDGBuffer *param_2,FRDGBuffer *param_3)

{
  if (param_1 == AFIS) {
    *(undefined1 *)((longlong)this + 8) = 0;
    *(wchar_t **)this = L"SSS(AFIS)";
    *(FRDGBuffer **)((longlong)this + 0x10) = param_2;
    *(FRDGBuffer **)((longlong)this + 0x18) = param_3;
    return this;
  }
  if (param_1 == SEPARABLE) {
    *(undefined1 *)((longlong)this + 8) = 1;
    *(wchar_t **)this = L"SSS(Separable)";
    *(FRDGBuffer **)((longlong)this + 0x10) = param_2;
    *(FRDGBuffer **)((longlong)this + 0x18) = param_3;
    return this;
  }
  if (param_1 == PASSTHROUGH) {
    *(undefined1 *)((longlong)this + 8) = 2;
    *(wchar_t **)this = L"SSS(Passthrough)";
    *(FRDGBuffer **)((longlong)this + 0x10) = param_2;
    *(FRDGBuffer **)((longlong)this + 0x18) = param_3;
    return this;
  }
  if (param_1 != AllNonPassthrough) {
    if (param_1 != All) {
      *(ETileType *)((longlong)this + 8) = param_1;
      *(wchar_t **)this = L"Unknown";
      *(FRDGBuffer **)((longlong)this + 0x10) = param_2;
      *(FRDGBuffer **)((longlong)this + 0x18) = param_3;
      return this;
    }
    *(undefined1 *)((longlong)this + 8) = 4;
    *(wchar_t **)this = L"SSS(All)";
    *(FRDGBuffer **)((longlong)this + 0x10) = param_2;
    *(FRDGBuffer **)((longlong)this + 0x18) = param_3;
    return this;
  }
  *(undefined1 *)((longlong)this + 8) = 3;
  *(wchar_t **)this = L"SSS(All,NonPassthrough)";
  *(FRDGBuffer **)((longlong)this + 0x10) = param_2;
  *(FRDGBuffer **)((longlong)this + 0x18) = param_3;
  return this;
}

