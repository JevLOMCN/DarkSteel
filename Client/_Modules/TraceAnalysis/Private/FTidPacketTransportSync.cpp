// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 1

// ~FTidPacketTransportSync @ 14d3928a0

void __thiscall
UE::Trace::FTidPacketTransportSync::~FTidPacketTransportSync(FTidPacketTransportSync *this)

{
  *(undefined ***)this = &___7FTidPacketTransport_Trace_UE__6B_;
  DestructItems<UE::Trace::FTidPacketTransport::FThreadStream,int>
            (*(FThreadStream **)&this->field_0x18,*(int *)&this->field_0x20);
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  *(undefined ***)this = &___7FTransport_Trace_UE__6B_;
  return;
}

