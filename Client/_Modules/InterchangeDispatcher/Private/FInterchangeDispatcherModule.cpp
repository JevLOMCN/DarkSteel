// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 3

// StartupModule @ 14e6604e0

void __thiscall FInterchangeDispatcherModule::StartupModule(FInterchangeDispatcherModule *this)

{
  return;
}

// Get @ 14e664dd0

FInterchangeDispatcherModule * __cdecl FInterchangeDispatcherModule::Get(void)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  IModuleInterface *pIVar3;
  FName local_res8 [4];
  
  pFVar2 = ::FName::FName(local_res8,L"InterchangeDispatcher");
  FVar1 = *pFVar2;
  this = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this,FVar1);
  return (FInterchangeDispatcherModule *)pIVar3;
}

// IsAvailable @ 14e6663d0

bool __cdecl FInterchangeDispatcherModule::IsAvailable(void)

{
  bool bVar1;
  FModuleManager *this;
  FName *pFVar2;
  FName local_res8 [4];
  
  this = FModuleManager::Get();
  pFVar2 = ::FName::FName(local_res8,L"InterchangeDispatcher");
  bVar1 = FModuleManager::IsModuleLoaded(this,*pFVar2);
  return bVar1;
}

