// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// ClearFilter @ 146f9c730

void __thiscall FCrowdAgentData::ClearFilter(FCrowdAgentData *this)

{
  dtQuerySpecialLinkFilter *local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = (dtQuerySpecialLinkFilter *)0x0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != (FCrowdAgentData *)&stack0xffffffffffffffe8) {
    (this->LinkFilter).Object = (dtQuerySpecialLinkFilter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LinkFilter).SharedReferenceCount,&stack0xfffffffffffffff0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

