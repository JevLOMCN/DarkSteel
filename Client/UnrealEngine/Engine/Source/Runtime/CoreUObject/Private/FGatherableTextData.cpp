// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FGatherableTextData @ 1420a1700

FGatherableTextData * __thiscall
FGatherableTextData::FGatherableTextData(FGatherableTextData *this,FGatherableTextData *param_1)

{
  TArray<FTextSourceSiteContext,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FTextSourceSiteContext *pFVar4;
  
  ::FString::FString(&this->NamespaceName,&param_1->NamespaceName);
  ::FString::FString(&(this->SourceData).SourceString,&(param_1->SourceData).SourceString);
  FLocMetadataObject::FLocMetadataObject
            (&(this->SourceData).SourceStringMetaData,&(param_1->SourceData).SourceStringMetaData);
  pTVar1 = &this->SourceSiteContexts;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->SourceSiteContexts).ArrayMax;
  iVar3 = (param_1->SourceSiteContexts).ArrayNum;
  pFVar4 = (FTextSourceSiteContext *)(param_1->SourceSiteContexts).AllocatorInstance.Data;
  (this->SourceSiteContexts).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (200,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FTextSourceSiteContext,FTextSourceSiteContext,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// ~FGatherableTextData @ 1420a4580

void __thiscall FGatherableTextData::~FGatherableTextData(FGatherableTextData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FTextSourceSiteContext,int>
            ((FTextSourceSiteContext *)(this->SourceSiteContexts).AllocatorInstance.Data,
             (this->SourceSiteContexts).ArrayNum);
  pFVar1 = (this->SourceSiteContexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SourceData).SourceStringMetaData.Values.field_0x48 = 0;
  pvVar2 = *(void **)&(this->SourceData).SourceStringMetaData.Values.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SourceData).SourceStringMetaData);
  pFVar1 = (this->SourceData).SourceString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NamespaceName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

