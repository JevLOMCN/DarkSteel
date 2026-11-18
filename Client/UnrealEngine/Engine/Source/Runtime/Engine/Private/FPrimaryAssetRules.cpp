// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 14758ac80

UScriptStruct * __cdecl FPrimaryAssetRules::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPrimaryAssetRules.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FPrimaryAssetRules.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetRules,(UObject *)pUVar1,
                         L"PrimaryAssetRules");
  }
  return Z_Registration_Info_UScriptStruct_FPrimaryAssetRules.OuterSingleton;
}

// IsDefault @ 1475e2140

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

bool __thiscall FPrimaryAssetRules::IsDefault(FPrimaryAssetRules *this)

{
  if ((((this->Priority == -1) && (this->bApplyRecursively == true)) && (this->ChunkId == -1)) &&
     (this->CookRule == Unknown)) {
    return true;
  }
  return false;
}

// OverrideRules @ 1475e91e0

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall
FPrimaryAssetRules::OverrideRules(FPrimaryAssetRules *this,FPrimaryAssetRules *param_1)

{
  if (param_1->Priority != DefaultRules.Priority) {
    this->Priority = param_1->Priority;
  }
  if (param_1->bApplyRecursively != DefaultRules.bApplyRecursively) {
    this->bApplyRecursively = param_1->bApplyRecursively;
  }
  if (param_1->ChunkId != DefaultRules.ChunkId) {
    this->ChunkId = param_1->ChunkId;
  }
  if (param_1->CookRule != DefaultRules.CookRule) {
    this->CookRule = param_1->CookRule;
  }
  return;
}

// PropagateCookRules @ 1475eb060

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall
FPrimaryAssetRules::PropagateCookRules(FPrimaryAssetRules *this,FPrimaryAssetRules *param_1)

{
  if ((param_1->ChunkId != DefaultRules.ChunkId) && (this->ChunkId == DefaultRules.ChunkId)) {
    this->ChunkId = param_1->ChunkId;
  }
  if ((param_1->CookRule != DefaultRules.CookRule) && (this->CookRule == DefaultRules.CookRule)) {
    this->CookRule = param_1->CookRule;
  }
  return;
}

