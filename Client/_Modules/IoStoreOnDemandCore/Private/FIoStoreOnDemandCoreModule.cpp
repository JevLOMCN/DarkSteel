// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 3

// StartupModule @ 144585660

void __thiscall
UE::IoStore::FIoStoreOnDemandCoreModule::StartupModule(FIoStoreOnDemandCoreModule *this)

{
  int iVar1;
  IModularFeatures *pIVar2;
  IModularFeature *pIVar3;
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  *this_00;
  FIoStoreOnDemandCoreModule local_res10 [3];
  
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,IOnDemandIoStoreFactory::FeatureName);
  if (0 < iVar1) {
    pIVar3 = (IModularFeature *)
             (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,IOnDemandIoStoreFactory::FeatureName,0);
    HandleModularFeatureRegistered(this,&IOnDemandIoStoreFactory::FeatureName,pIVar3);
    return;
  }
  this_00 = (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
             *)(**(code **)((longlong)*pIVar2 + 0x38))(pIVar2);
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  ::AddRaw<UE::IoStore::FIoStoreOnDemandCoreModule>(this_00,local_res10,(pmf_62906e5e)this);
  return;
}

// ShutdownModule @ 1445856f0

void __thiscall
UE::IoStore::FIoStoreOnDemandCoreModule::ShutdownModule(FIoStoreOnDemandCoreModule *this)

{
  IOnDemandIoStore *pIVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  longlong *plVar5;
  
  pIVar1 = GOnDemandIoStore;
  GOnDemandIoStore = (IOnDemandIoStore *)0x0;
  if (pIVar1 != (IOnDemandIoStore *)0x0) {
    pIVar3 = IModularFeatures::Get();
    iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,IOnDemandIoStoreFactory::FeatureName);
    if (0 < iVar2) {
      lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,IOnDemandIoStoreFactory::FeatureName,0)
      ;
      plVar5 = (longlong *)(lVar4 + -8);
      if (lVar4 == 0) {
        plVar5 = (longlong *)0x0;
      }
      (**(code **)(*plVar5 + 8))(plVar5,pIVar1);
    }
    pIVar3 = IModularFeatures::Get();
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  }
  return;
}

// HandleModularFeatureRegistered @ 14458e750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::FIoStoreOnDemandCoreModule::HandleModularFeatureRegistered
          (FIoStoreOnDemandCoreModule *this,FName *param_1,IModularFeature *param_2)

{
  IOnDemandIoStore *pIVar1;
  IModularFeatures *pIVar2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  IModularFeature *pIVar3;
  FIoStatus local_28;
  FString local_18;
  
  if (*param_1 != IOnDemandIoStoreFactory::FeatureName) {
    return;
  }
  if (GOnDemandIoStore != (IOnDemandIoStore *)0x0) {
    return;
  }
  pIVar3 = param_2 + -8;
  if (param_2 == (IModularFeature *)0x0) {
    pIVar3 = (IModularFeature *)0x0;
  }
  pIVar1 = (IOnDemandIoStore *)(*(code *)**(undefined8 **)pIVar3)(pIVar3);
  if (pIVar1 == (IOnDemandIoStore *)0x0) {
    if ((byte)LogIoStoreOnDemand._0_1_ < 3) {
      return;
    }
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    return;
  }
  (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1,&local_28);
  if (local_28.ErrorCode == Ok) {
    FIoStatus::~FIoStatus(&local_28);
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_28);
    if (local_28.ErrorCode != Ok) {
      if ((local_28.ErrorCode == Disabled) || (local_28.ErrorCode == NotFound)) {
        if ((byte)LogIoStoreOnDemand._0_1_ < 5) goto LAB_14458e972;
        FIoStatus::ToString(&local_28,&local_18);
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
      else {
        if ((byte)LogIoStoreOnDemand._0_1_ < 2) goto LAB_14458e972;
        FIoStatus::ToString(&local_28,&local_18);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
LAB_14458e972:
    FIoStatus::~FIoStatus(&local_28);
    GOnDemandIoStore = pIVar1;
    pIVar2 = IModularFeatures::Get();
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
    return;
  }
  (**(code **)(*(longlong *)pIVar3 + 8))(pIVar3,pIVar1);
  if ((local_28.ErrorCode == Disabled) || (local_28.ErrorCode == NotFound)) {
    if ((byte)LogIoStoreOnDemand._0_1_ < 5) goto LAB_14458e89a;
    FIoStatus::ToString(&local_28,&local_18);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  else {
    if ((byte)LogIoStoreOnDemand._0_1_ < 2) goto LAB_14458e89a;
    FIoStatus::ToString(&local_28,&local_18);
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_14458e89a:
  FIoStatus::~FIoStatus(&local_28);
  return;
}

