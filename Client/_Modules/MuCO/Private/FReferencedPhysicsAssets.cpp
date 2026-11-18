// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// StaticStruct @ 14ab99740

UScriptStruct * __cdecl FReferencedPhysicsAssets::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FReferencedPhysicsAssets.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FReferencedPhysicsAssets.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FReferencedPhysicsAssets,(UObject *)pUVar1,
                         L"ReferencedPhysicsAssets");
  }
  return Z_Registration_Info_UScriptStruct_FReferencedPhysicsAssets.OuterSingleton;
}

// FReferencedPhysicsAssets @ 14abbcf10

FReferencedPhysicsAssets * __thiscall
FReferencedPhysicsAssets::FReferencedPhysicsAssets
          (FReferencedPhysicsAssets *this,FReferencedPhysicsAssets *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UPhysicsAsset>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  piVar1 = &(this->PhysicsAssetToLoad).ArrayMax;
  (this->PhysicsAssetToLoad).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->PhysicsAssetToLoad).ArrayNum;
  pFVar5 = (param_1->PhysicsAssetToLoad).AllocatorInstance.Data;
  (this->PhysicsAssetToLoad).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,(ForAnyElementType *)this,iVar4,piVar1);
    memcpy((this->PhysicsAssetToLoad).AllocatorInstance.Data,pFVar5,(longlong)iVar4 << 2);
  }
  pTVar2 = &this->PhysicsAssetsToMerge;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PhysicsAssetsToMerge).ArrayMax;
  iVar4 = (param_1->PhysicsAssetsToMerge).ArrayNum;
  pFVar5 = (param_1->PhysicsAssetsToMerge).AllocatorInstance.Data;
  (this->PhysicsAssetsToMerge).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    ConstructItems<TObjectPtr<UPhysicsAsset>,TObjectPtr<UPhysicsAsset>,int>
              ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UPhysicsAsset> *)pFVar5,iVar4);
  }
  pTVar3 = &this->AdditionalPhysicsAssetsToLoad;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->AdditionalPhysicsAssetsToLoad).ArrayMax;
  iVar4 = (param_1->AdditionalPhysicsAssetsToLoad).ArrayNum;
  pFVar5 = (param_1->AdditionalPhysicsAssetsToLoad).AllocatorInstance.Data;
  (this->AdditionalPhysicsAssetsToLoad).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
  }
  pTVar2 = &this->AdditionalPhysicsAssets;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->AdditionalPhysicsAssets).ArrayMax;
  iVar4 = (param_1->AdditionalPhysicsAssets).ArrayNum;
  pFVar5 = (param_1->AdditionalPhysicsAssets).AllocatorInstance.Data;
  (this->AdditionalPhysicsAssets).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    ConstructItems<TObjectPtr<UPhysicsAsset>,TObjectPtr<UPhysicsAsset>,int>
              ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UPhysicsAsset> *)pFVar5,iVar4);
  }
  return this;
}

