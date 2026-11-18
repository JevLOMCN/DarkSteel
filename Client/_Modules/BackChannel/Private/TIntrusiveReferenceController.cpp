// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 1

// DestroyObject @ 14e7f58a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FBackChannelOSCMessage,1>::DestroyObject
          (TIntrusiveReferenceController<FBackChannelOSCMessage,1> *this)

{
  FBackChannelOSCMessage::~FBackChannelOSCMessage((FBackChannelOSCMessage *)&this->ObjectStorage);
  return;
}

