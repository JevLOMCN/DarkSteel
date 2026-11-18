// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 5

// StartupModule @ 14ed0a7f0

void __thiscall FOnlineSubsystemNullModule::StartupModule(FOnlineSubsystemNullModule *this)

{
  FOnlineFactoryNull *pFVar1;
  FName *pFVar2;
  FOnlineSubsystemModule *pFVar3;
  FName local_res8 [4];
  
  pFVar1 = ::operator_new(8);
  if (pFVar1 != (FOnlineFactoryNull *)0x0) {
    *pFVar1 = (FOnlineFactoryNull)&___7FOnlineFactoryNull__6B_;
  }
  this->NullFactory = pFVar1;
  pFVar2 = ::FName::FName(local_res8,"OnlineSubsystem");
  pFVar3 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar2);
  (**(code **)(pFVar3->_padding_ + 0x78))(pFVar3,NULL_SUBSYSTEM,this->NullFactory);
  return;
}

// ShutdownModule @ 14ed0a860

void __thiscall FOnlineSubsystemNullModule::ShutdownModule(FOnlineSubsystemNullModule *this)

{
  FOnlineFactoryNull *pFVar1;
  FName *pFVar2;
  FOnlineSubsystemModule *pFVar3;
  FName local_res8 [4];
  
  pFVar2 = ::FName::FName(local_res8,"OnlineSubsystem");
  pFVar3 = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>(*pFVar2);
  (**(code **)(pFVar3->_padding_ + 0x80))(pFVar3,NULL_SUBSYSTEM);
  pFVar1 = this->NullFactory;
  if (pFVar1 != (FOnlineFactoryNull *)0x0) {
    (**(code **)*pFVar1)(pFVar1,1);
  }
  this->NullFactory = (FOnlineFactoryNull *)0x0;
  return;
}

// SupportsDynamicReloading @ 14ed0a8c0

bool __thiscall
FOnlineSubsystemNullModule::SupportsDynamicReloading(FOnlineSubsystemNullModule *this)

{
  return false;
}

// SupportsAutomaticShutdown @ 14ed0a8d0

bool __thiscall
FOnlineSubsystemNullModule::SupportsAutomaticShutdown(FOnlineSubsystemNullModule *this)

{
  return false;
}

// ~FOnlineSubsystemNullModule @ 14ed13020

void __thiscall
FOnlineSubsystemNullModule::~FOnlineSubsystemNullModule(FOnlineSubsystemNullModule *this)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  return;
}

