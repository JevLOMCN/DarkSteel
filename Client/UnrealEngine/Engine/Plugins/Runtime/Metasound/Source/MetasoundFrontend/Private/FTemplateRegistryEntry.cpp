// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// ~FTemplateRegistryEntry @ 14ae5c6d0

void __thiscall
`Metasound::Frontend::RegisterNodeTemplate'::__l2::FTemplateRegistryEntry::~FTemplateRegistryEntry
          (void *this)

{
  if (*(void **)((longlong)this + 0xc0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xc0));
  }
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  DestructItems<FMetasoundFrontendClassInput,int>
            (*(FMetasoundFrontendClassInput **)((longlong)this + 0xa0),
             *(int *)((longlong)this + 0xa8));
  if (*(void **)((longlong)this + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xa0));
    return;
  }
  return;
}

// GetClassInfo @ 14ae74840

FNodeClassInfo * __thiscall
`Metasound::Frontend::RegisterNodeTemplate'::__l2::FTemplateRegistryEntry::GetClassInfo(void *this)

{
  return (FNodeClassInfo *)((longlong)this + 8);
}

// GetFrontendClass @ 14ae75960

FMetasoundFrontendClass * __thiscall
`Metasound::Frontend::RegisterNodeTemplate'::__l2::FTemplateRegistryEntry::GetFrontendClass
          (void *this)

{
  return (FMetasoundFrontendClass *)((longlong)this + 0x50);
}

