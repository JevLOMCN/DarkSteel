// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 5

// GetGroupName @ 14d39ca40

char * __thiscall UE::Trace::IAnalyzer::FThreadInfo::GetGroupName(FThreadInfo *this)

{
  char *pcVar1;
  
  pcVar1 = "";
  if (0 < *(int *)(this + 0x28)) {
    pcVar1 = *(char **)(this + 0x20);
  }
  return pcVar1;
}

// GetId @ 14d39cab0

uint __thiscall UE::Trace::IAnalyzer::FThreadInfo::GetId(FThreadInfo *this)

{
  return *(uint *)(this + 0x38);
}

// GetName @ 14d39cea0

char * __thiscall UE::Trace::IAnalyzer::FThreadInfo::GetName(FThreadInfo *this)

{
  if (*(int *)(this + 0x18) < 1) {
    return (char *)0x0;
  }
  return *(char **)(this + 0x10);
}

// GetSortHint @ 14d39e4a0

int __thiscall UE::Trace::IAnalyzer::FThreadInfo::GetSortHint(FThreadInfo *this)

{
  return *(int *)(this + 0x40);
}

// GetSystemId @ 14d39f500

uint __thiscall UE::Trace::IAnalyzer::FThreadInfo::GetSystemId(FThreadInfo *this)

{
  return *(uint *)(this + 0x3c);
}

