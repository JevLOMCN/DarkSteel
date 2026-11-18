// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsLog
// Functions: 1

// DestroyObject @ 14ea17b60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAnalyticsProviderLog,1>::DestroyObject
          (TIntrusiveReferenceController<FAnalyticsProviderLog,1> *this)

{
  FAnalyticsProviderLog::~FAnalyticsProviderLog((FAnalyticsProviderLog *)&this->ObjectStorage);
  return;
}

