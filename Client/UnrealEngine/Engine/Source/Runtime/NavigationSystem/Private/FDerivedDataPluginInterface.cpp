// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 4

// ~FDerivedDataPluginInterface @ 146d78110

void __thiscall
FDerivedDataPluginInterface::~FDerivedDataPluginInterface(FDerivedDataPluginInterface *this)

{
  *this = (FDerivedDataPluginInterface)&___7FDerivedDataPluginInterface__6B_;
  return;
}

// GetCustomThreadPool @ 146d9a3a0

FQueuedThreadPool * __thiscall
FDerivedDataPluginInterface::GetCustomThreadPool(FDerivedDataPluginInterface *this)

{
  return GThreadPool;
}

// GetDebugContextString @ 146d9a850

FString * __thiscall
FDerivedDataPluginInterface::GetDebugContextString
          (FDerivedDataPluginInterface *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Unknown Context");
  return __return_storage_ptr__;
}

// IsDeterministic @ 146da4880

bool __thiscall FDerivedDataPluginInterface::IsDeterministic(FDerivedDataPluginInterface *this)

{
  return false;
}

