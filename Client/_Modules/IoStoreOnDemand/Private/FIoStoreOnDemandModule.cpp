// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 2

// StartupModule @ 144593e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::IoStore::FIoStoreOnDemandModule::StartupModule(FIoStoreOnDemandModule *this)

{
  FOnDemandIoStoreFactory *pFVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  TSharedPtr<UE::IoStore::IOnDemandIoStore,1> *pTVar4;
  undefined1 auStack_9d8 [32];
  WSADATA local_9b8;
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_9d8;
  iVar2 = WSAStartup(0x202,&local_9b8);
  (this->PlatformSocketSystem).Result = iVar2;
  if (iVar2 != 0) {
    memset(local_818,0,0x800);
    FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,iVar2);
    if (1 < (byte)LogIoStoreOnDemand._0_1_) {
      Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_UE::IoStore::Private::FPlatformSocketSystem::Startup(void)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    }
  }
  pIVar3 = IModularFeatures::Get();
  pFVar1 = (this->Factory).Ptr;
  pTVar4 = &pFVar1->IoStore;
  if (pFVar1 == (FOnDemandIoStoreFactory *)0x0) {
    pTVar4 = (TSharedPtr<UE::IoStore::IOnDemandIoStore,1> *)0x0;
  }
  (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,IOnDemandIoStoreFactory::FeatureName,pTVar4);
  return;
}

// ShutdownModule @ 144593f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::IoStore::FIoStoreOnDemandModule::ShutdownModule(FIoStoreOnDemandModule *this)

{
  FOnDemandIoStoreFactory *pFVar1;
  int iVar2;
  DWORD DVar3;
  IModularFeatures *pIVar4;
  TSharedPtr<UE::IoStore::IOnDemandIoStore,1> *pTVar5;
  undefined1 auStack_838 [32];
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_838;
  pIVar4 = IModularFeatures::Get();
  pFVar1 = (this->Factory).Ptr;
  pTVar5 = &pFVar1->IoStore;
  if (pFVar1 == (FOnDemandIoStoreFactory *)0x0) {
    pTVar5 = (TSharedPtr<UE::IoStore::IOnDemandIoStore,1> *)0x0;
  }
  (**(code **)((longlong)*pIVar4 + 0x30))(pIVar4,IOnDemandIoStoreFactory::FeatureName,pTVar5);
  if ((this->PlatformSocketSystem).Result == 0) {
    iVar2 = WSACleanup();
    (this->PlatformSocketSystem).Result = iVar2;
    if (iVar2 != 0) {
      DVar3 = FWindowsPlatformMisc::GetLastError();
      memset(local_818,0,0x800);
      FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,DVar3);
      if (1 < (byte)LogIoStoreOnDemand._0_1_) {
        Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)
                   &`public:_void___cdecl_UE::IoStore::Private::FPlatformSocketSystem::Cleanup(void)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
    }
  }
  return;
}

