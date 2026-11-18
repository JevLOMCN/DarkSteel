// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Start @ 1419ab830

bool __cdecl FTraceServerControls::Start(void)

{
  bool bVar1;
  
  bVar1 = LaunchTraceServerCommand(Fork,true);
  return bVar1;
}

// Stop @ 1419ac5e0

bool __cdecl FTraceServerControls::Stop(void)

{
  bool bVar1;
  
  bVar1 = LaunchTraceServerCommand(Kill,false);
  return bVar1;
}

