// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 9

// GetDependencies @ 142b6e0a0

/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

void __thiscall
FAssetRegistryInterface::GetDependencies
          (FAssetRegistryInterface *this,FName param_1,
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
                    /* WARNING: Could not recover jumptable at 0x000142b6e11b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar2 + 200))(pIVar2,param_1,param_2,param_3);
  return;
}

// TryGetAssetByObjectPath @ 142b6e130

EExists __thiscall
FAssetRegistryInterface::TryGetAssetByObjectPath
          (FAssetRegistryInterface *this,FSoftObjectPath *param_1,FAssetData *param_2)

{
  EExists EVar1;
  
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    return Unknown;
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6e145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((longlong)*UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton +
                      0x90))();
  return EVar1;
}

// TryGetAssetPackageData @ 142b6e160

EExists __thiscall
FAssetRegistryInterface::TryGetAssetPackageData
          (FAssetRegistryInterface *this,FName param_1,FAssetPackageData *param_2)

{
  EExists EVar1;
  
  EVar1 = (**(code **)((longlong)*this + 0x10))();
  return EVar1;
}

// TryGetAssetPackageData @ 142b6e190

EExists __thiscall
FAssetRegistryInterface::TryGetAssetPackageData
          (FAssetRegistryInterface *this,FName param_1,FAssetPackageData *param_2,FName *param_3)

{
  EExists EVar1;
  
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    return Unknown;
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6e1a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)((longlong)*UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton +
                      0x98))();
  return EVar1;
}

// EnumerateAssets @ 142b6e1c0

bool __thiscall
FAssetRegistryInterface::EnumerateAssets
          (FAssetRegistryInterface *this,FARFilter *param_1,
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

// RegisterOnAssetsAddedDelegate @ 142b6e200

bool __thiscall
FAssetRegistryInterface::RegisterOnAssetsAddedDelegate
          (FAssetRegistryInterface *this,
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

// UnregisterOnAssetsAddedDelegate @ 142b6e260

bool __thiscall
FAssetRegistryInterface::UnregisterOnAssetsAddedDelegate
          (FAssetRegistryInterface *this,FDelegateHandle *param_1)

{
  bool bVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    return false;
  }
  this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
            (**(code **)((longlong)*UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton +
                        0x300))();
  if (param_1->ID != 0) {
    bVar1 = TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                      (this_00,(FDelegateHandle)param_1->ID);
    return bVar1;
  }
  return false;
}

// RegisterOnAssetsRemovedDelegate @ 142b6e2b0

bool __thiscall
FAssetRegistryInterface::RegisterOnAssetsRemovedDelegate
          (FAssetRegistryInterface *this,
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

// UnregisterOnAssetsRemovedDelegate @ 142b6e310

bool __thiscall
FAssetRegistryInterface::UnregisterOnAssetsRemovedDelegate
          (FAssetRegistryInterface *this,FDelegateHandle *param_1)

{
  bool bVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  
  if (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton == (IAssetRegistry *)0x0) {
    return false;
  }
  this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
            (**(code **)((longlong)*UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton +
                        0x310))();
  if (param_1->ID != 0) {
    bVar1 = TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
                      (this_00,(FDelegateHandle)param_1->ID);
    return bVar1;
  }
  return false;
}

