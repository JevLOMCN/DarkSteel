// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// ~FShaderCodeLibraryCleanup @ 145e43710

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FShaderCodeLibraryPluginUnmountedCallback'::__l2::FShaderCodeLibraryCleanup::
~FShaderCodeLibraryCleanup(void *this)

{
  *(undefined ***)this =
       &`FShaderCodeLibraryPluginUnmountedCallback'::`2'::FShaderCodeLibraryCleanup::_vftable_;
  if (FShaderLibrariesCollection::Impl != (FShaderLibrariesCollection *)0x0) {
    FShaderLibrariesCollection::CloseLibrary
              (FShaderLibrariesCollection::Impl,(FString *)((longlong)this + 8));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  *(undefined ***)this = &___7FDeferredCleanupInterface__6B_;
  return;
}

