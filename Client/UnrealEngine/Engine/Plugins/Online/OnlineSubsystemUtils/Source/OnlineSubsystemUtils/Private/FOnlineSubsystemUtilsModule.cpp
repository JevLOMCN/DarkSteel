// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 5

// FOnlineSubsystemUtilsModule @ 14ec526f0

FOnlineSubsystemUtilsModule * __thiscall
FOnlineSubsystemUtilsModule::FOnlineSubsystemUtilsModule(FOnlineSubsystemUtilsModule *this)

{
  this->_padding_ = (longlong)&___7FOnlineSubsystemUtilsModule__6B_;
  (this->SubsystemUtils).Ptr = (IOnlineSubsystemUtils *)0x0;
  (this->OnlineServicesUtils).Ptr = (IOnlineServicesEngineUtils *)0x0;
  return this;
}

// ~FOnlineSubsystemUtilsModule @ 14ec56270

void __thiscall
FOnlineSubsystemUtilsModule::~FOnlineSubsystemUtilsModule(FOnlineSubsystemUtilsModule *this)

{
  IOnlineServicesEngineUtils *pIVar1;
  IOnlineSubsystemUtils *pIVar2;
  
  this->_padding_ = (longlong)&___7FOnlineSubsystemUtilsModule__6B_;
  pIVar1 = (this->OnlineServicesUtils).Ptr;
  if (pIVar1 != (IOnlineServicesEngineUtils *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar2 = (this->SubsystemUtils).Ptr;
  if (pIVar2 != (IOnlineSubsystemUtils *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  return;
}

// ShutdownModule @ 14ec98a80

void __thiscall FOnlineSubsystemUtilsModule::ShutdownModule(FOnlineSubsystemUtilsModule *this)

{
  IOnlineSubsystemUtils *pIVar1;
  IOnlineServicesEngineUtils *pIVar2;
  
  pIVar1 = (this->SubsystemUtils).Ptr;
  if (pIVar1 != (IOnlineSubsystemUtils *)0x0) {
    (this->SubsystemUtils).Ptr = (IOnlineSubsystemUtils *)0x0;
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pIVar2 = (this->OnlineServicesUtils).Ptr;
  if (pIVar2 != (IOnlineServicesEngineUtils *)0x0) {
    (this->OnlineServicesUtils).Ptr = (IOnlineServicesEngineUtils *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014ec98ac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar2)(pIVar2,1);
    return;
  }
  return;
}

// StartupModule @ 14ec993a0

void __thiscall FOnlineSubsystemUtilsModule::StartupModule(FOnlineSubsystemUtilsModule *this)

{
  IOnlineSubsystemUtils *pIVar1;
  IOnlineServicesEngineUtils *pIVar2;
  FOnlineSubsystemUtils *this_00;
  pmf_59cbca1a this_01;
  pmf_e1fe90f6 pVar3;
  FDelegateHandle FVar4;
  pmf_e1fe90f6 pVar5;
  
  this_00 = ::operator_new(0x120);
  pVar5 = (pmf_e1fe90f6)0x0;
  this_01 = (pmf_59cbca1a)pVar5;
  if (this_00 != (FOnlineSubsystemUtils *)0x0) {
    this_01 = (pmf_59cbca1a)FOnlineSubsystemUtils::FOnlineSubsystemUtils(this_00);
  }
  TMulticastDelegateRegistration<void___cdecl(IOnlineSubsystem_*),FDefaultDelegateUserPolicy>::
  AddRaw<FOnlineSubsystemUtils>
            ((TMulticastDelegateRegistration<void___cdecl(IOnlineSubsystem_*),FDefaultDelegateUserPolicy>
              *)&FOnlineSubsystemDelegates::OnOnlineSubsystemCreated,
             (FOnlineSubsystemUtils *)&stack0x00000008,this_01);
  FOnlineSubsystemUtils::CreateNameHashes((FOnlineSubsystemUtils *)this_01);
  pIVar1 = (this->SubsystemUtils).Ptr;
  (this->SubsystemUtils).Ptr = (IOnlineSubsystemUtils *)this_01;
  if (pIVar1 != (IOnlineSubsystemUtils *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  pVar3 = (pmf_e1fe90f6)::operator_new(0x40);
  if (pVar3 != (pmf_e1fe90f6)0x0) {
    *(undefined1 *)((longlong)pVar3 + 8) = 1;
    *(undefined ***)pVar3 = &___7FOnlineServicesEngineUtils_Online_UE__6B_;
    *(undefined8 *)((longlong)pVar3 + 0x10) = 0;
    *(undefined8 *)((longlong)pVar3 + 0x18) = 0;
    *(undefined4 *)((longlong)pVar3 + 0x20) = 0;
    *(undefined8 *)((longlong)pVar3 + 0x28) = 0;
    *(undefined8 *)((longlong)pVar3 + 0x30) = 0;
    *(undefined8 *)((longlong)pVar3 + 0x38) = 0;
    pVar5 = pVar3;
  }
  FVar4 = TMulticastDelegateRegistration<void___cdecl(TSharedRef<UE::Online::IOnlineServices,1>),FDefaultDelegateUserPolicy>
          ::AddRaw<UE::Online::FOnlineServicesEngineUtils>
                    ((TMulticastDelegateRegistration<void___cdecl(TSharedRef<UE::Online::IOnlineServices,1>),FDefaultDelegateUserPolicy>
                      *)&UE::Online::OnOnlineServicesCreated,
                     (FOnlineServicesEngineUtils *)&stack0x00000008,pVar5);
  *(undefined8 *)((longlong)pVar5 + 0x38) = *(undefined8 *)FVar4.ID;
  pIVar2 = (this->OnlineServicesUtils).Ptr;
  (this->OnlineServicesUtils).Ptr = (IOnlineServicesEngineUtils *)pVar5;
  if (pIVar2 != (IOnlineServicesEngineUtils *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  return;
}

// SupportsDynamicReloading @ 14ec99bc0

bool __thiscall
FOnlineSubsystemUtilsModule::SupportsDynamicReloading(FOnlineSubsystemUtilsModule *this)

{
  return false;
}

