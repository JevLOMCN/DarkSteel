// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCommonParser
// Functions: 3

// StartupModule @ 14e66b1c0

void __thiscall FInterchangeCommonParserModule::StartupModule(FInterchangeCommonParserModule *this)

{
  return;
}

// Get @ 14e66f560

FInterchangeCommonParserModule * __cdecl FInterchangeCommonParserModule::Get(void)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  IModuleInterface *pIVar3;
  FName local_res8 [4];
  
  pFVar2 = ::FName::FName(local_res8,L"InterchangeCommonParser");
  FVar1 = *pFVar2;
  this = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this,FVar1);
  return (FInterchangeCommonParserModule *)pIVar3;
}

// IsAvailable @ 14e66fbc0

bool __cdecl FInterchangeCommonParserModule::IsAvailable(void)

{
  bool bVar1;
  FModuleManager *this;
  FName *pFVar2;
  FName local_res8 [4];
  
  this = FModuleManager::Get();
  pFVar2 = ::FName::FName(local_res8,L"InterchangeCommonParser");
  bVar1 = FModuleManager::IsModuleLoaded(this,*pFVar2);
  return bVar1;
}

