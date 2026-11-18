// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 4

// StaticStruct @ 142b6ed80

UScriptStruct * __cdecl FAssetRegistryDependencyOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAssetRegistryDependencyOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AssetRegistry();
    Z_Registration_Info_UScriptStruct_FAssetRegistryDependencyOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions,(UObject *)pUVar1
                         ,L"AssetRegistryDependencyOptions");
  }
  return Z_Registration_Info_UScriptStruct_FAssetRegistryDependencyOptions.OuterSingleton;
}

// GetManageQuery @ 142b97a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
FAssetRegistryDependencyOptions::GetManageQuery
          (FAssetRegistryDependencyOptions *this,FDependencyQuery *param_1)

{
  undefined1 auStack_58 [32];
  FDependencyQuery local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38.RequiredUnions.ArrayMax = 1;
  local_38.RequiredUnions.AllocatorInstance.SecondaryData =
       (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
  local_38.RequiredUnions.ArrayNum = 0;
  local_38.Required = None;
  local_38.Excluded = None;
  UE::AssetRegistry::FDependencyQuery::operator=(param_1,&local_38);
  if (local_38.RequiredUnions.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
    FMemory::Free((void *)local_38.RequiredUnions.AllocatorInstance.SecondaryData);
  }
  if (this->bIncludeSoftManagementReferences == false) {
    if (this->bIncludeHardManagementReferences == false) {
      return false;
    }
    param_1->Required = param_1->Required | Direct;
  }
  if (this->bIncludeHardManagementReferences == false) {
    param_1->Excluded = param_1->Excluded | Direct;
  }
  return true;
}

// GetPackageQuery @ 142b97f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
FAssetRegistryDependencyOptions::GetPackageQuery
          (FAssetRegistryDependencyOptions *this,FDependencyQuery *param_1)

{
  bool bVar1;
  undefined1 auStack_58 [32];
  FDependencyQuery local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38.RequiredUnions.ArrayMax = 1;
  local_38.RequiredUnions.AllocatorInstance.SecondaryData =
       (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
  local_38.RequiredUnions.ArrayNum = 0;
  local_38.Required = None;
  local_38.Excluded = None;
  UE::AssetRegistry::FDependencyQuery::operator=(param_1,&local_38);
  if (local_38.RequiredUnions.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
    FMemory::Free((void *)local_38.RequiredUnions.AllocatorInstance.SecondaryData);
  }
  bVar1 = false;
  if (this->bIncludeSoftPackageReferences == false) {
    if (this->bIncludeHardPackageReferences == false) goto LAB_142b97f6c;
    param_1->Required = param_1->Required | Hard;
  }
  if (this->bIncludeHardPackageReferences == false) {
    param_1->Excluded = param_1->Excluded | Hard;
  }
  bVar1 = true;
LAB_142b97f6c:
  if (this->bIncludeGamePackageReferences == false) {
    if (this->bIncludeEditorOnlyPackageReferences == false) {
      return bVar1;
    }
    param_1->Excluded = param_1->Excluded | Game;
  }
  if (this->bIncludeEditorOnlyPackageReferences == false) {
    param_1->Required = param_1->Required | Game;
  }
  return true;
}

// GetSearchableNameQuery @ 142b98dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDependencyProperty": Some values do not have unique names */

bool __thiscall
FAssetRegistryDependencyOptions::GetSearchableNameQuery
          (FAssetRegistryDependencyOptions *this,FDependencyQuery *param_1)

{
  undefined1 auStack_58 [32];
  FDependencyQuery local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  local_38.RequiredUnions.ArrayMax = 1;
  local_38.RequiredUnions.AllocatorInstance.SecondaryData =
       (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0;
  local_38.RequiredUnions.ArrayNum = 0;
  local_38.Required = None;
  local_38.Excluded = None;
  UE::AssetRegistry::FDependencyQuery::operator=(param_1,&local_38);
  if (local_38.RequiredUnions.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::AssetRegistry::EDependencyProperty>)0x0) {
    FMemory::Free((void *)local_38.RequiredUnions.AllocatorInstance.SecondaryData);
  }
  return this->bIncludeSearchableNames;
}

