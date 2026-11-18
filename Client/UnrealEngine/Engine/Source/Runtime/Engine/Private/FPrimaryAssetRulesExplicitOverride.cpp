// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// OverrideRulesExplicitly @ 1475e9220

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall
FPrimaryAssetRulesExplicitOverride::OverrideRulesExplicitly
          (FPrimaryAssetRulesExplicitOverride *this,FPrimaryAssetRules *param_1)

{
  if (this->bOverridePriority != 0) {
    param_1->Priority = (this->Rules).Priority;
  }
  if (this->bOverrideApplyRecursively != '\0') {
    param_1->bApplyRecursively = (this->Rules).bApplyRecursively;
  }
  if (this->bOverrideChunkId != '\0') {
    param_1->ChunkId = (this->Rules).ChunkId;
  }
  if (this->bOverrideCookRule != '\0') {
    param_1->CookRule = (this->Rules).CookRule;
  }
  return;
}

