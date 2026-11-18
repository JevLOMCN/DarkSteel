// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 2

// Get @ 14d7a8e60

IMediaIOCoreModule * __cdecl IMediaIOCoreModule::Get(void)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  IModuleInterface *pIVar3;
  FName local_res8 [4];
  
  pFVar2 = ::FName::FName(local_res8,"MediaIOCore");
  FVar1 = *pFVar2;
  this = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this,FVar1);
  return (IMediaIOCoreModule *)pIVar3;
}

// IsAvailable @ 14d7b1570

bool __cdecl IMediaIOCoreModule::IsAvailable(void)

{
  bool bVar1;
  FModuleManager *this;
  FName *pFVar2;
  FName local_res8 [4];
  
  this = FModuleManager::Get();
  pFVar2 = ::FName::FName(local_res8,"MediaIOCore");
  bVar1 = FModuleManager::IsModuleLoaded(this,*pFVar2);
  return bVar1;
}

