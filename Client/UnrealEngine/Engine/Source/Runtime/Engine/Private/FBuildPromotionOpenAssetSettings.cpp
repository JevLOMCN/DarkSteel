// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1487e0ea0

UScriptStruct * __cdecl FBuildPromotionOpenAssetSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBuildPromotionOpenAssetSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBuildPromotionOpenAssetSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionOpenAssetSettings,
                         (UObject *)pUVar1,L"BuildPromotionOpenAssetSettings");
  }
  return Z_Registration_Info_UScriptStruct_FBuildPromotionOpenAssetSettings.OuterSingleton;
}

// ~FBuildPromotionOpenAssetSettings @ 14880c090

void __thiscall
FBuildPromotionOpenAssetSettings::~FBuildPromotionOpenAssetSettings
          (FBuildPromotionOpenAssetSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->TextureAsset).FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StaticMeshAsset).FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkeletalMeshAsset).FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParticleSystemAsset).FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialAsset).FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BlueprintAsset).FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

