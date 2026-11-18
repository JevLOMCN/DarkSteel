// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1487e1400

UScriptStruct * __cdecl FBuildPromotionTestSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBuildPromotionTestSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBuildPromotionTestSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBuildPromotionTestSettings,(UObject *)pUVar1,
                         L"BuildPromotionTestSettings");
  }
  return Z_Registration_Info_UScriptStruct_FBuildPromotionTestSettings.OuterSingleton;
}

// FBuildPromotionTestSettings @ 148805880

FBuildPromotionTestSettings * __thiscall
FBuildPromotionTestSettings::FBuildPromotionTestSettings(FBuildPromotionTestSettings *this)

{
  (this->DefaultStaticMeshAsset).FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DefaultStaticMeshAsset).FilePath.Data.ArrayNum = 0;
  (this->DefaultStaticMeshAsset).FilePath.Data.ArrayMax = 0;
  FBuildPromotionImportWorkflowSettings::FBuildPromotionImportWorkflowSettings
            (&this->ImportWorkflow);
  (this->OpenAssets).BlueprintAsset.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OpenAssets).BlueprintAsset.FilePath.Data.ArrayNum = 0;
  (this->OpenAssets).BlueprintAsset.FilePath.Data.ArrayMax = 0;
  (this->OpenAssets).MaterialAsset.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OpenAssets).MaterialAsset.FilePath.Data.ArrayNum = 0;
  (this->OpenAssets).MaterialAsset.FilePath.Data.ArrayMax = 0;
  (this->OpenAssets).ParticleSystemAsset.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OpenAssets).ParticleSystemAsset.FilePath.Data.ArrayNum = 0;
  (this->OpenAssets).ParticleSystemAsset.FilePath.Data.ArrayMax = 0;
  (this->OpenAssets).SkeletalMeshAsset.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OpenAssets).SkeletalMeshAsset.FilePath.Data.ArrayNum = 0;
  (this->OpenAssets).SkeletalMeshAsset.FilePath.Data.ArrayMax = 0;
  (this->OpenAssets).StaticMeshAsset.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OpenAssets).StaticMeshAsset.FilePath.Data.ArrayNum = 0;
  (this->OpenAssets).StaticMeshAsset.FilePath.Data.ArrayMax = 0;
  (this->OpenAssets).TextureAsset.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OpenAssets).TextureAsset.FilePath.Data.ArrayNum = 0;
  (this->OpenAssets).TextureAsset.FilePath.Data.ArrayMax = 0;
  (this->NewProjectSettings).NewProjectFolderOverride.Path.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NewProjectSettings).NewProjectFolderOverride.Path.Data.ArrayNum = 0;
  (this->NewProjectSettings).NewProjectFolderOverride.Path.Data.ArrayMax = 0;
  (this->NewProjectSettings).NewProjectNameOverride.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NewProjectSettings).NewProjectNameOverride.Data.ArrayNum = 0;
  (this->NewProjectSettings).NewProjectNameOverride.Data.ArrayMax = 0;
  (this->SourceControlMaterial).FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SourceControlMaterial).FilePath.Data.ArrayNum = 0;
  (this->SourceControlMaterial).FilePath.Data.ArrayMax = 0;
  return this;
}

// ~FBuildPromotionTestSettings @ 14880c100

void __thiscall
FBuildPromotionTestSettings::~FBuildPromotionTestSettings(FBuildPromotionTestSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SourceControlMaterial).FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewProjectSettings).NewProjectNameOverride.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewProjectSettings).NewProjectFolderOverride.Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBuildPromotionOpenAssetSettings::~FBuildPromotionOpenAssetSettings(&this->OpenAssets);
  FBuildPromotionImportWorkflowSettings::~FBuildPromotionImportWorkflowSettings
            (&this->ImportWorkflow);
  pFVar1 = (this->DefaultStaticMeshAsset).FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

