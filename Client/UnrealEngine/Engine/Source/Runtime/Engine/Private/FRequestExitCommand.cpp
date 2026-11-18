// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Update @ 14885fb30

bool __thiscall FRequestExitCommand::Update(FRequestExitCommand *this)

{
  FOutputDeviceRedirector *this_00;
  
  this_00 = GetGlobalLogSingleton();
  FOutputDeviceRedirector::FlushThreadedLogs(this_00,None);
  FWindowsPlatformMisc::RequestExitWithStatus(false,'\0',(wchar_t *)0x0);
  return true;
}

