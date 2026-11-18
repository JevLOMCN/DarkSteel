// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 1

// DestroyObject @ 14cfebf60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLiveLinkProvider,1>::DestroyObject
          (TIntrusiveReferenceController<FLiveLinkProvider,1> *this)

{
  FLiveLinkProvider::~FLiveLinkProvider((FLiveLinkProvider *)&this->ObjectStorage);
  return;
}

