// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a2c5210

UScriptStruct * __cdecl FRigHierarchyCopyPasteContentPerElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyCopyPasteContentPerElement.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigHierarchyCopyPasteContentPerElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchyCopyPasteContentPerElement,
                         (UObject *)pUVar1,L"RigHierarchyCopyPasteContentPerElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigHierarchyCopyPasteContentPerElement.OuterSingleton;
}

// FRigHierarchyCopyPasteContentPerElement @ 14a2dc4b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigHierarchyCopyPasteContentPerElement * __thiscall
FRigHierarchyCopyPasteContentPerElement::FRigHierarchyCopyPasteContentPerElement
          (FRigHierarchyCopyPasteContentPerElement *this,
          FRigHierarchyCopyPasteContentPerElement *param_1)

{
  TArray<FRigElementKeyWithLabel,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FRigElementWeight,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined3 uVar8;
  FNameEntryId FVar9;
  
  uVar8 = *(undefined3 *)&(param_1->Key).field_0x1;
  FVar9.Value = (param_1->Key).Name.ComparisonIndex.Value;
  (this->Key).Type = (param_1->Key).Type;
  *(undefined3 *)&(this->Key).field_0x1 = uVar8;
  (this->Key).Name.ComparisonIndex = (FNameEntryId)FVar9.Value;
  (this->Key).Name.Number = (param_1->Key).Name.Number;
  ::FString::FString(&this->Content,&param_1->Content);
  pTVar1 = &this->Parents;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Parents).ArrayMax;
  iVar6 = (param_1->Parents).ArrayNum;
  pFVar7 = (param_1->Parents).AllocatorInstance.Data;
  (this->Parents).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar6,0,&pTVar1->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x14);
  }
  pTVar3 = &this->ParentWeights;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ParentWeights).ArrayMax;
  iVar6 = (param_1->ParentWeights).ArrayNum;
  pFVar7 = (param_1->ParentWeights).AllocatorInstance.Data;
  (this->ParentWeights).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0xc);
  }
  pTVar4 = &this->Poses;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Poses).ArrayMax;
  iVar6 = (param_1->Poses).ArrayNum;
  pFVar7 = (param_1->Poses).AllocatorInstance.Data;
  (this->Poses).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x60);
  }
  pTVar5 = &this->DirtyStates;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->DirtyStates).ArrayMax;
  iVar6 = (param_1->DirtyStates).ArrayNum;
  pFVar7 = (param_1->DirtyStates).AllocatorInstance.Data;
  (this->DirtyStates).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar7,(longlong)iVar6);
  }
  return this;
}

