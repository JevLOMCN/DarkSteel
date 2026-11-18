// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 3

// StaticStruct @ 14e4cc320

UScriptStruct * __cdecl FImportAssetParameters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FImportAssetParameters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeEngine();
    Z_Registration_Info_UScriptStruct_FImportAssetParameters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FImportAssetParameters,(UObject *)pUVar1,
                         L"ImportAssetParameters");
  }
  return Z_Registration_Info_UScriptStruct_FImportAssetParameters.OuterSingleton;
}

// FImportAssetParameters @ 14e4d7070

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FImportAssetParameters * __thiscall
FImportAssetParameters::FImportAssetParameters(FImportAssetParameters *this)

{
  this->ReimportSourceIndex = -1;
  (this->ReimportAsset).field0_0x0.DebugPtr = (UObject *)0x0;
  this->bIsAutomated = false;
  this->bFollowRedirectors = false;
  (this->OverridePipelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverridePipelines).ArrayNum = 0;
  (this->OverridePipelines).ArrayMax = 0;
  (this->ImportLevel).field0_0x0.DebugPtr = (ULevel *)0x0;
  (this->DestinationName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DestinationName).Data.ArrayNum = 0;
  (this->DestinationName).Data.ArrayMax = 0;
  *(undefined8 *)&this->OnAssetDone = 0;
  this->bReplaceExisting = true;
  this->bForceShowDialog = false;
  *(undefined8 *)&(this->OnAssetDone).field_0x8 = 0;
  *(undefined8 *)&(this->OnAssetDone).field_0x10 = 0;
  *(undefined8 *)&this->OnAssetDoneNative = 0;
  *(undefined8 *)&(this->OnAssetDoneNative).field_0x8 = 0;
  *(undefined4 *)&(this->OnAssetDoneNative).field_0x10 = 0;
  *(undefined8 *)&this->OnAssetsImportDone = 0;
  *(undefined8 *)&(this->OnAssetsImportDone).field_0x8 = 0;
  *(undefined8 *)&(this->OnAssetsImportDone).field_0x10 = 0;
  *(undefined8 *)&this->OnAssetsImportDoneNative = 0;
  *(undefined8 *)&(this->OnAssetsImportDoneNative).field_0x8 = 0;
  *(undefined4 *)&(this->OnAssetsImportDoneNative).field_0x10 = 0;
  *(undefined8 *)&this->OnSceneObjectDone = 0;
  *(undefined8 *)&(this->OnSceneObjectDone).field_0x8 = 0;
  *(undefined8 *)&(this->OnSceneObjectDone).field_0x10 = 0;
  *(undefined8 *)&this->OnSceneObjectDoneNative = 0;
  *(undefined8 *)&(this->OnSceneObjectDoneNative).field_0x8 = 0;
  *(undefined4 *)&(this->OnSceneObjectDoneNative).field_0x10 = 0;
  *(undefined8 *)&this->OnSceneImportDone = 0;
  *(undefined8 *)&(this->OnSceneImportDone).field_0x8 = 0;
  *(undefined8 *)&(this->OnSceneImportDone).field_0x10 = 0;
  *(undefined8 *)&this->OnSceneImportDoneNative = 0;
  *(undefined8 *)&(this->OnSceneImportDoneNative).field_0x8 = 0;
  *(undefined4 *)&(this->OnSceneImportDoneNative).field_0x10 = 0;
  return this;
}

// ~FImportAssetParameters @ 14e4d9fd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FImportAssetParameters::~FImportAssetParameters(FImportAssetParameters *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSceneImportDoneNative);
  pvVar1 = *(void **)&(this->OnSceneImportDoneNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSceneImportDoneNative);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSceneImportDone);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSceneObjectDoneNative);
  pvVar1 = *(void **)&(this->OnSceneObjectDoneNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSceneObjectDoneNative);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSceneObjectDone);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAssetsImportDoneNative);
  pvVar1 = *(void **)&(this->OnAssetsImportDoneNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAssetsImportDoneNative);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAssetsImportDone);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAssetDoneNative);
  pvVar1 = *(void **)&(this->OnAssetDoneNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAssetDoneNative);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAssetDone);
  pFVar2 = (this->DestinationName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->OverridePipelines).AllocatorInstance.Data,
             (this->OverridePipelines).ArrayNum);
  pFVar2 = (this->OverridePipelines).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

