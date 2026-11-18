// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StudioTelemetry
// Functions: 1

// DestroyObject @ 14ea1aaa0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnalyticsProviderBroadcast,1>::DestroyObject
          (TIntrusiveReferenceController<FAnalyticsProviderBroadcast,1> *this)

{
  FAnalyticsProviderBroadcast::~FAnalyticsProviderBroadcast
            ((FAnalyticsProviderBroadcast *)&this->ObjectStorage);
  return;
}

