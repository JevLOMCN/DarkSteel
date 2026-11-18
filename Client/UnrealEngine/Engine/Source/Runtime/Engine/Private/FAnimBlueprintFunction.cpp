// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1473c7970

UScriptStruct * __cdecl FAnimBlueprintFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimBlueprintFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimBlueprintFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimBlueprintFunction,(UObject *)pUVar1,
                         L"AnimBlueprintFunction");
  }
  return Z_Registration_Info_UScriptStruct_FAnimBlueprintFunction.OuterSingleton;
}

// FAnimBlueprintFunction @ 1473d4cd0

FAnimBlueprintFunction * __thiscall
FAnimBlueprintFunction::FAnimBlueprintFunction
          (FAnimBlueprintFunction *this,FAnimBlueprintFunction *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FStructProperty_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FAnimBlueprintFunction::FInputPropertyData,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  pTVar1 = &this->InputPoseNames;
  this->Name = param_1->Name;
  this->Group = param_1->Group;
  this->OutputPoseNodeIndex = param_1->OutputPoseNodeIndex;
  piVar2 = &(this->InputPoseNames).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->InputPoseNames).ArrayNum;
  pFVar8 = (param_1->InputPoseNames).AllocatorInstance.Data;
  (this->InputPoseNames).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar7,0,&pTVar1->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 3);
  }
  pTVar3 = &this->InputPoseNodeIndices;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InputPoseNodeIndices).ArrayMax;
  iVar7 = (param_1->InputPoseNodeIndices).ArrayNum;
  pFVar8 = (param_1->InputPoseNodeIndices).AllocatorInstance.Data;
  (this->InputPoseNodeIndices).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,0,&pTVar3->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 2);
  }
  pTVar4 = &this->InputPoseNodeProperties;
  this->OutputPoseNodeProperty = param_1->OutputPoseNodeProperty;
  piVar2 = &(this->InputPoseNodeProperties).ArrayMax;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->InputPoseNodeProperties).ArrayNum;
  pFVar8 = (param_1->InputPoseNodeProperties).AllocatorInstance.Data;
  (this->InputPoseNodeProperties).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&pTVar4->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 3);
  }
  pTVar5 = &this->InputPropertyData;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InputPropertyData).ArrayMax;
  iVar7 = (param_1->InputPropertyData).ArrayNum;
  pFVar8 = (param_1->InputPropertyData).AllocatorInstance.Data;
  (this->InputPropertyData).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar7,0,&pTVar5->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 0x18);
  }
  pTVar6 = &this->InputProperties;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InputProperties).ArrayMax;
  iVar7 = (param_1->InputProperties).ArrayNum;
  pFVar8 = (param_1->InputProperties).AllocatorInstance.Data;
  (this->InputProperties).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&pTVar6->AllocatorInstance,iVar7,piVar2);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 3);
  }
  this->bImplemented = param_1->bImplemented;
  return this;
}

