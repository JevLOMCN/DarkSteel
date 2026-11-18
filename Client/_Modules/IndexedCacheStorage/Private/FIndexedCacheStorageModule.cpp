// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IndexedCacheStorage
// Functions: 2

// StartupModule @ 144563a20

void __thiscall
Experimental::FIndexedCacheStorageModule::StartupModule(FIndexedCacheStorageModule *this)

{
  FIndexedCacheStorageManager *this_00;
  
  this_00 = FIndexedCacheStorageManager::Get();
  FIndexedCacheStorageManager::Initialize(this_00);
  return;
}

// ShutdownModule @ 144563a40

void __thiscall
Experimental::FIndexedCacheStorageModule::ShutdownModule(FIndexedCacheStorageModule *this)

{
  return;
}

