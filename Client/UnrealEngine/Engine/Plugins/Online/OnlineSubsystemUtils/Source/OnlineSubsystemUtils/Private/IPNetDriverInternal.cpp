// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 2

// IsLongRecvError @ 14ec81900

bool __cdecl IPNetDriverInternal::IsLongRecvError(ESocketErrors param_1)

{
  return param_1 == SE_ENETDOWN;
}

// ShouldSleepOnWaitError @ 14ec98520

bool __cdecl IPNetDriverInternal::ShouldSleepOnWaitError(ESocketErrors param_1)

{
  if ((param_1 < SE_NO_RECOVERY) && ((0x2000000000081U >> ((ulonglong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return false;
}

