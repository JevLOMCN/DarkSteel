// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 149ce4790

UScriptStruct * __cdecl FPCGDataLayerReferenceSelector::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataLayerReferenceSelector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataLayerReferenceSelector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataLayerReferenceSelector,(UObject *)pUVar1,
                         L"PCGDataLayerReferenceSelector");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataLayerReferenceSelector.OuterSingleton;
}

// operator= @ 149d35350

FPCGDataLayerReferenceSelector * __thiscall
FPCGDataLayerReferenceSelector::operator=
          (FPCGDataLayerReferenceSelector *this,FPCGDataLayerReferenceSelector *param_1)

{
  TArray<TSoftObjectPtr<UDataLayerAsset>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  this->bAsInput = param_1->bAsInput;
  FPCGAttributePropertySelector::operator=
            ((FPCGAttributePropertySelector *)&this->Attribute,
             (FPCGAttributePropertySelector *)&param_1->Attribute);
  pTVar1 = &this->DataLayers;
  if (pTVar1 != &param_1->DataLayers) {
    DestructItems<TSoftObjectPtr<UDataLayerAsset>,int>
              ((TSoftObjectPtr<UDataLayerAsset> *)(pTVar1->AllocatorInstance).Data,
               (this->DataLayers).ArrayNum);
    iVar3 = (param_1->DataLayers).ArrayNum;
    piVar2 = &(this->DataLayers).ArrayMax;
    pFVar4 = (param_1->DataLayers).AllocatorInstance.Data;
    (this->DataLayers).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<TSoftObjectPtr<UDataLayerAsset>,TSoftObjectPtr<UDataLayerAsset>,int>
                ((pTVar1->AllocatorInstance).Data,(TSoftObjectPtr<UDataLayerAsset> *)pFVar4,iVar3);
    }
  }
  return this;
}

