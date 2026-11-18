// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 3

// GetPlatformFile @ 142a3aba0

IPlatformFile * __thiscall FPakFileModule::GetPlatformFile(FPakFileModule *this)

{
  code *pcVar1;
  bool bVar2;
  IPlatformFile *pIVar3;
  
  if ((this->Singleton).Ptr != (IPlatformFile *)0x0) {
    return (this->Singleton).Ptr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Singleton.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\PakFileModule.cpp"
                     ,0x10,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IPlatformFile *)(*pcVar1)();
    return pIVar3;
  }
  return (this->Singleton).Ptr;
}

// StartupModule @ 142a3abf0

void __thiscall FPakFileModule::StartupModule(FPakFileModule *this)

{
  IPlatformFile *pIVar1;
  FName FVar2;
  FPakPlatformFile *this_00;
  FPakPlatformFile *pFVar3;
  FName *pFVar4;
  FModuleManager *this_01;
  FName local_res8 [4];
  
  this_00 = ::operator_new(0x108);
  pFVar3 = (FPakPlatformFile *)0x0;
  if (this_00 != (FPakPlatformFile *)0x0) {
    pFVar3 = FPakPlatformFile::FPakPlatformFile(this_00);
  }
  pIVar1 = (this->Singleton).Ptr;
  (this->Singleton).Ptr = (IPlatformFile *)pFVar3;
  if (pIVar1 != (IPlatformFile *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pFVar4 = ::FName::FName(local_res8,L"RSA");
  FVar2 = *pFVar4;
  this_01 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(this_01,FVar2);
  return;
}

// ShutdownModule @ 142a3ac60

void __thiscall FPakFileModule::ShutdownModule(FPakFileModule *this)

{
  FPlatformFileManager *pFVar1;
  wchar_t *pwVar2;
  IPlatformFile *pIVar3;
  
  if ((this->Singleton).Ptr != (IPlatformFile *)0x0) {
    pFVar1 = FPlatformFileManager::Get();
    pwVar2 = (wchar_t *)(**(code **)((longlong)*(this->Singleton).Ptr + 0x70))();
    pIVar3 = FPlatformFileManager::FindPlatformFile(pFVar1,pwVar2);
    if (pIVar3 != (IPlatformFile *)0x0) {
      pFVar1 = FPlatformFileManager::Get();
      FPlatformFileManager::RemovePlatformFile(pFVar1,(this->Singleton).Ptr);
    }
  }
  pIVar3 = (this->Singleton).Ptr;
  if (pIVar3 != (IPlatformFile *)0x0) {
    (this->Singleton).Ptr = (IPlatformFile *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000142a3accb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar3)(pIVar3,1);
    return;
  }
  return;
}

