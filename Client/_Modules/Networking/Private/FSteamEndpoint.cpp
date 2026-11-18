// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Networking
// Functions: 1

// ToString @ 14311a2f0

FString * __thiscall FSteamEndpoint::ToString(FSteamEndpoint *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"0x%llX:%i");
  return __return_storage_ptr__;
}

