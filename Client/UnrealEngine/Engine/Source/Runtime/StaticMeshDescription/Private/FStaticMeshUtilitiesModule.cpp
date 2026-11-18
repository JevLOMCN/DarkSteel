// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 2

// StartupModule @ 14435f6e0

void __thiscall FStaticMeshUtilitiesModule::StartupModule(FStaticMeshUtilitiesModule *this)

{
  FModuleManager *this_00;
  FName *pFVar1;
  FName local_res10 [3];
  
  this_00 = FModuleManager::Get();
  pFVar1 = ::FName::FName(local_res10,"GeometryProcessingInterfaces");
  FModuleManager::LoadModule(this_00,*pFVar1,None);
  return;
}

// ShutdownModule @ 14435f720

void __thiscall FStaticMeshUtilitiesModule::ShutdownModule(FStaticMeshUtilitiesModule *this)

{
  return;
}

