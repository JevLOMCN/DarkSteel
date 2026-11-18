// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// StaticStruct @ 145f23520

UScriptStruct * __cdecl FWeightmapData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWeightmapData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FWeightmapData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWeightmapData,(UObject *)pUVar1,L"WeightmapData"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FWeightmapData.OuterSingleton;
}

// operator= @ 145f27d00

FWeightmapData * __thiscall FWeightmapData::operator=(FWeightmapData *this,FWeightmapData *param_1)

{
  int *piVar1;
  TArray<FWeightmapLayerAllocationInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<ULandscapeWeightmapUsage>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FWeightmapLayerAllocationInfo *pFVar6;
  
  if (this != param_1) {
    iVar4 = (param_1->Textures).ArrayNum;
    piVar1 = &(this->Textures).ArrayMax;
    pFVar5 = (param_1->Textures).AllocatorInstance.Data;
    (this->Textures).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar1,(ForAnyElementType *)this,iVar4,piVar1);
      ConstructItems<TObjectPtr<UTexture2D>,TObjectPtr<UTexture2D>,int>
                ((this->Textures).AllocatorInstance.Data,(TObjectPtr<UTexture2D> *)pFVar5,iVar4);
    }
  }
  pTVar2 = &this->LayerAllocations;
  if (pTVar2 != &param_1->LayerAllocations) {
    iVar4 = (param_1->LayerAllocations).ArrayNum;
    piVar1 = &(this->LayerAllocations).ArrayMax;
    pFVar6 = (FWeightmapLayerAllocationInfo *)(param_1->LayerAllocations).AllocatorInstance.Data;
    (this->LayerAllocations).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      ConstructItems<FWeightmapLayerAllocationInfo,FWeightmapLayerAllocationInfo,int>
                ((pTVar2->AllocatorInstance).Data,pFVar6,iVar4);
    }
  }
  pTVar3 = &this->TextureUsages;
  if (pTVar3 != &param_1->TextureUsages) {
    iVar4 = (param_1->TextureUsages).ArrayNum;
    piVar1 = &(this->TextureUsages).ArrayMax;
    pFVar5 = (param_1->TextureUsages).AllocatorInstance.Data;
    (this->TextureUsages).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      ConstructItems<TObjectPtr<ULandscapeWeightmapUsage>,TObjectPtr<ULandscapeWeightmapUsage>,int>
                ((pTVar3->AllocatorInstance).Data,(TObjectPtr<ULandscapeWeightmapUsage> *)pFVar5,
                 iVar4);
    }
  }
  return this;
}

