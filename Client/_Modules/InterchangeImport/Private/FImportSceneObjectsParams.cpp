// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// FImportSceneObjectsParams @ 14e707fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FImportSceneObjectsParams * __thiscall
UInterchangeFactoryBase::FImportSceneObjectsParams::FImportSceneObjectsParams
          (FImportSceneObjectsParams *this,FImportSceneObjectsParams *param_1)

{
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  this->Level = param_1->Level;
  ::FString::FString(&this->ObjectName,&param_1->ObjectName);
  pTVar1 = &this->ImportAssets;
  this->FactoryNode = param_1->FactoryNode;
  this->NodeContainer = param_1->NodeContainer;
  this->SourceData = param_1->SourceData;
  this->ReimportObject = param_1->ReimportObject;
  this->ReimportFactoryNode = param_1->ReimportFactoryNode;
  piVar2 = &(this->ImportAssets).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ImportAssets).ArrayNum;
  pFVar4 = (param_1->ImportAssets).AllocatorInstance.Data;
  (this->ImportAssets).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
              ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UObject> *)pFVar4,iVar3);
  }
  this->bIsReimport = param_1->bIsReimport;
  this->AsyncHelperUid = param_1->AsyncHelperUid;
  return this;
}

