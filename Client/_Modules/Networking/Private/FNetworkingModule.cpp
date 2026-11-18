// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Networking
// Functions: 3

// StartupModule @ 143119020

void __thiscall FNetworkingModule::StartupModule(FNetworkingModule *this)

{
  FName *pFVar1;
  FName local_res10 [3];
  
  pFVar1 = ::FName::FName(local_res10,L"WINDOWS");
  FIPv4Endpoint::CachedSocketSubsystem = ISocketSubsystem::Get(pFVar1);
  return;
}

// ShutdownModule @ 143119050

void __thiscall FNetworkingModule::ShutdownModule(FNetworkingModule *this)

{
  return;
}

// SupportsDynamicReloading @ 143119060

bool __thiscall FNetworkingModule::SupportsDynamicReloading(FNetworkingModule *this)

{
  return false;
}

