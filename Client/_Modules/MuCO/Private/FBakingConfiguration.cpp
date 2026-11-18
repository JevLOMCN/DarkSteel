// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 3

// StaticStruct @ 14aba9810

UScriptStruct * __cdecl FBakingConfiguration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBakingConfiguration.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FBakingConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBakingConfiguration,(UObject *)pUVar1,
                         L"BakingConfiguration");
  }
  return Z_Registration_Info_UScriptStruct_FBakingConfiguration.OuterSingleton;
}

// FBakingConfiguration @ 14abbbb10

FBakingConfiguration * __thiscall
FBakingConfiguration::FBakingConfiguration(FBakingConfiguration *this)

{
  ::FString::FString(&this->OutputPath,L"/Game");
  (this->OutputFilesBaseName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputFilesBaseName).Data.ArrayNum = 0;
  (this->OutputFilesBaseName).Data.ArrayMax = 0;
  this->bExportAllResourcesOnBake = false;
  this->bGenerateConstantMaterialInstancesOnBake = false;
  ::FString::FString(&this->SkeletalMeshAssetPrefix,L"SK_");
  ::FString::FString(&this->SkeletonAssetPrefix,L"SKEL_");
  ::FString::FString(&this->PhysicsAssetPrefix,L"PHYS_");
  ::FString::FString(&this->TextureAssetPrefix,L"T_");
  ::FString::FString(&this->MaterialAssetPrefix,L"M_");
  ::FString::FString(&this->MaterialInstanceAssetPrefix,L"MI_");
  ::FString::FString(&this->MaterialDynamicInstanceAssetPrefix,L"MID_");
  ::FString::FString(&this->MaterialConstantInstanceAssetPrefix,L"MIC_");
  *(undefined8 *)&this->OnBakeOperationCompletedCallback = 0;
  *(undefined8 *)&(this->OnBakeOperationCompletedCallback).field_0x8 = 0;
  *(undefined8 *)&(this->OnBakeOperationCompletedCallback).field_0x10 = 0;
  return this;
}

// ~FBakingConfiguration @ 14abbec00

void __thiscall FBakingConfiguration::~FBakingConfiguration(FBakingConfiguration *this)

{
  FScriptContainerElement *pFVar1;
  
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBakeOperationCompletedCallback);
  pFVar1 = (this->MaterialConstantInstanceAssetPrefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialDynamicInstanceAssetPrefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialInstanceAssetPrefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialAssetPrefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TextureAssetPrefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PhysicsAssetPrefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkeletonAssetPrefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkeletalMeshAssetPrefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputFilesBaseName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

