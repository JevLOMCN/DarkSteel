// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 11

// StartupModule @ 142ab0ab0

void __thiscall FAssetRegistryModule::StartupModule(FAssetRegistryModule *this)

{
  UClass *this_00;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res10,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(local_res18,AssetRegistry,true);
  this_00 = Z_Construct_UClass_UAssetRegistryImpl_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// Get @ 142ab0b20

IAssetRegistry * __thiscall FAssetRegistryModule::Get(FAssetRegistryModule *this)

{
  code *pcVar1;
  bool bVar2;
  IAssetRegistry *pIVar3;
  
  pIVar3 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                       ,0x111,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar3 = (IAssetRegistry *)(*pcVar1)();
      return pIVar3;
    }
  }
  return pIVar3;
}

// GetDependencies @ 142ab0b70

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FAssetRegistryModule::GetDependencies
          (FAssetRegistryModule *this,FName param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,EDependencyCategory param_3,
          FDependencyQuery *param_4)

{
  code *pcVar1;
  IAssetRegistry *pIVar2;
  bool bVar3;
  
  pIVar2 = UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton;
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Singleton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\IAssetRegistry.h"
                       ,0x111,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142ab0beb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar2 + 200))(pIVar2,param_1,param_2,param_3);
  return;
}

// TryGetAssetByObjectPath @ 142ab0c00

EExists __thiscall
FAssetRegistryModule::TryGetAssetByObjectPath
          (FAssetRegistryModule *this,FSoftObjectPath *param_1,FAssetData *param_2)

{
  EExists EVar1;
  
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    return Unknown;
  }
                    /* WARNING: Could not recover jumptable at 0x000142ab0c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((longlong)*UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton +
                      0x90))();
  return EVar1;
}

// TryGetAssetPackageData @ 142ab0c30

EExists __thiscall
FAssetRegistryModule::TryGetAssetPackageData
          (FAssetRegistryModule *this,FName param_1,FAssetPackageData *param_2)

{
  EExists EVar1;
  
  EVar1 = (**(code **)(*(longlong *)this + 0x10))();
  return EVar1;
}

// TryGetAssetPackageData @ 142ab0c60

EExists __thiscall
FAssetRegistryModule::TryGetAssetPackageData
          (FAssetRegistryModule *this,FName param_1,FAssetPackageData *param_2,FName *param_3)

{
  EExists EVar1;
  
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    return Unknown;
  }
                    /* WARNING: Could not recover jumptable at 0x000142ab0c75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((longlong)*UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton +
                      0x98))();
  return EVar1;
}

// EnumerateAssets @ 142ab0c90

bool __thiscall
FAssetRegistryModule::EnumerateAssets
          (FAssetRegistryModule *this,FARFilter *param_1,
          TFunctionRef<bool___cdecl(FAssetData_const_&)> *param_2,EEnumerateAssetsFlags param_3)

{
  undefined1 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    return false;
  }
  local_18 = *(undefined8 *)param_2;
  local_10 = *(undefined8 *)&param_2->field_0x8;
  uVar1 = (**(code **)((longlong)*UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton +
                      0x70))(UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton,param_1,
                             &local_18);
  return (bool)uVar1;
}

// RegisterOnAssetsAddedDelegate @ 142ab0cd0

bool __thiscall
FAssetRegistryModule::RegisterOnAssetsAddedDelegate
          (FAssetRegistryModule *this,
          TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)> *param_1,
          FDelegateHandle *param_2)

{
  TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
  *this_00;
  FDelegateHandle FVar1;
  
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    return false;
  }
  this_00 = (TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
             *)(**(code **)((longlong)
                            *UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton + 0x300)
               )();
  FVar1 = TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
          ::AddLambda<TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_&>
                    (this_00,(TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)> *)
                             &stack0x00000020);
                    /* WARNING: Load size is inaccurate */
  param_2->ID = *FVar1.ID;
  return true;
}

// UnregisterOnAssetsAddedDelegate @ 142ab0d30

bool __thiscall
FAssetRegistryModule::UnregisterOnAssetsAddedDelegate
          (FAssetRegistryModule *this,FDelegateHandle *param_1)

{
  bool bVar1;
  TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
  *this_00;
  
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    return false;
  }
  this_00 = (TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
             *)(**(code **)((longlong)
                            *UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton + 0x300)
               )();
  bVar1 = TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
          ::Remove(this_00,(FDelegateHandle)param_1->ID);
  return bVar1;
}

// RegisterOnAssetsRemovedDelegate @ 142ab0d70

bool __thiscall
FAssetRegistryModule::RegisterOnAssetsRemovedDelegate
          (FAssetRegistryModule *this,
          TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)> *param_1,
          FDelegateHandle *param_2)

{
  TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
  *this_00;
  FDelegateHandle FVar1;
  
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    return false;
  }
  this_00 = (TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
             *)(**(code **)((longlong)
                            *UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton + 0x310)
               )();
  FVar1 = TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
          ::AddLambda<TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)>_const_&>
                    (this_00,(TFunction<void___cdecl(TArrayView<FAssetData_const_,int>)> *)
                             &stack0x00000020);
                    /* WARNING: Load size is inaccurate */
  param_2->ID = *FVar1.ID;
  return true;
}

// UnregisterOnAssetsRemovedDelegate @ 142ab0dd0

bool __thiscall
FAssetRegistryModule::UnregisterOnAssetsRemovedDelegate
          (FAssetRegistryModule *this,FDelegateHandle *param_1)

{
  bool bVar1;
  TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
  *this_00;
  
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    return false;
  }
  this_00 = (TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
             *)(**(code **)((longlong)
                            *UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton + 0x310)
               )();
  bVar1 = TMulticastDelegateRegistration<void___cdecl(TArrayView<FAssetData_const_,int>),FDefaultTSDelegateUserPolicy>
          ::Remove(this_00,(FDelegateHandle)param_1->ID);
  return bVar1;
}

