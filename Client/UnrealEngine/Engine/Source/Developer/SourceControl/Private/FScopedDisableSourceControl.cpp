// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 2

// FScopedDisableSourceControl @ 146aff130

FScopedDisableSourceControl * __thiscall
FScopedDisableSourceControl::FScopedDisableSourceControl
          (FScopedDisableSourceControl *this,bool param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FScopedDisableSourceControl *pFVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  IModuleInterface *pIVar6;
  FName local_res8;
  
  this->bDisabled = param_1;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlModule.cpp"
                       ,0x2e,
                       L"FScopedDisableSourceControl should only be used from the game thread!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FScopedDisableSourceControl *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (this->bDisabled != false) {
    pFVar5 = ::FName::FName(&local_res8,"SourceControl");
    FVar1 = *pFVar5;
    this_00 = FModuleManager::Get();
    pIVar6 = FModuleManager::LoadModuleChecked(this_00,FVar1);
    *(char *)(pIVar6 + 0xe) = *(char *)(pIVar6 + 0xe) + '\x01';
  }
  return this;
}

// ~FScopedDisableSourceControl @ 146b00d60

void __thiscall
FScopedDisableSourceControl::~FScopedDisableSourceControl(FScopedDisableSourceControl *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FModuleManager *this_00;
  IModuleInterface *pIVar5;
  FName local_res8 [4];
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SourceControl\\Private\\SourceControlModule.cpp"
                       ,0x37,
                       L"FScopedDisableSourceControl should only be used from the game thread!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->bDisabled != false) {
    pFVar4 = ::FName::FName(local_res8,"SourceControl");
    FVar1 = *pFVar4;
    this_00 = FModuleManager::Get();
    pIVar5 = FModuleManager::LoadModuleChecked(this_00,FVar1);
    *(char *)(pIVar5 + 0xe) = *(char *)(pIVar5 + 0xe) + -1;
  }
  return;
}

