// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 3

// ~IInterfaceRegistryEntry @ 14b3523b0

void __thiscall
Metasound::Frontend::IInterfaceRegistryEntry::~IInterfaceRegistryEntry
          (IInterfaceRegistryEntry *this)

{
  return;
}

// IsDeprecated @ 14b3c82a0

bool __thiscall
Metasound::Frontend::IInterfaceRegistryEntry::IsDeprecated(IInterfaceRegistryEntry *this)

{
  return false;
}

// UpdateRootGraphInterface @ 14b3e66a0

bool __thiscall
Metasound::Frontend::IInterfaceRegistryEntry::UpdateRootGraphInterface
          (IInterfaceRegistryEntry *this,
          TSharedRef<Metasound::Frontend::IDocumentController,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

