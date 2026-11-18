// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CCSAIServicePlugin
// Functions: 1

// DestroyObject @ 14ac86d30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCCSAITCPClient,1>::DestroyObject
          (TIntrusiveReferenceController<FCCSAITCPClient,1> *this)

{
  FCCSAITCPClient::~FCCSAITCPClient((FCCSAITCPClient *)&this->ObjectStorage);
  return;
}

