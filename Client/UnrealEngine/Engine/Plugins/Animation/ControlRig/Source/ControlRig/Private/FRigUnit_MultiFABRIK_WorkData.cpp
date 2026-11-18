// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// StaticStruct @ 14a49f8f0

UScriptStruct * __cdecl FRigUnit_MultiFABRIK_WorkData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_MultiFABRIK_WorkData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_MultiFABRIK_WorkData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_WorkData,(UObject *)pUVar1,
                         L"RigUnit_MultiFABRIK_WorkData");
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_MultiFABRIK_WorkData.OuterSingleton;
}

// ~FRigUnit_MultiFABRIK_WorkData @ 14a5189d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_MultiFABRIK_WorkData::~FRigUnit_MultiFABRIK_WorkData(FRigUnit_MultiFABRIK_WorkData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FRigUnit_MultiFABRIK_BoneWorkingData,int>
            ((FRigUnit_MultiFABRIK_BoneWorkingData *)(this->BoneTree).AllocatorInstance.Data,
             (this->BoneTree).ArrayNum);
  pFVar1 = (this->BoneTree).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigUnit_MultiFABRIK_ChainGroup,int>
            ((FRigUnit_MultiFABRIK_ChainGroup *)(this->ChainGroup).Children.AllocatorInstance.Data,
             (this->ChainGroup).Children.ArrayNum);
  pFVar1 = (this->ChainGroup).Children.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FFABRIKChainLink,int>
            ((FFABRIKChainLink *)(this->ChainGroup).Chain.Link.AllocatorInstance.Data,
             (this->ChainGroup).Chain.Link.ArrayNum);
  pFVar1 = (this->ChainGroup).Chain.Link.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EffectorBoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14a51ad00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigUnit_MultiFABRIK_WorkData * __thiscall
FRigUnit_MultiFABRIK_WorkData::operator=
          (FRigUnit_MultiFABRIK_WorkData *this,FRigUnit_MultiFABRIK_WorkData *param_1)

{
  TArray<FRigUnit_MultiFABRIK_ChainGroup,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FRigUnit_MultiFABRIK_BoneWorkingData,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FRigUnit_MultiFABRIK_ChainGroup *pFVar6;
  FRigUnit_MultiFABRIK_BoneWorkingData *pFVar7;
  double dVar8;
  TArray<FRigUnit_MultiFABRIK_ChainGroup,TSizedDefaultAllocator<32>_> *pTVar9;
  
  TArray<FCachedRigElement,TSizedDefaultAllocator<32>_>::operator=
            (&this->EffectorBoneIndices,&param_1->EffectorBoneIndices);
  TArray<FFABRIKChainLink,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FFABRIKChainLink,TSizedDefaultAllocator<32>_> *)&this->ChainGroup,
             (TArray<FFABRIKChainLink,TSizedDefaultAllocator<32>_> *)&param_1->ChainGroup);
  dVar8 = (param_1->ChainGroup).Chain.EffectorLocation.field0_0x0._s_0.Y;
  pTVar1 = &(param_1->ChainGroup).Children;
  (this->ChainGroup).Chain.EffectorLocation.field0_0x0._s_0.X =
       (param_1->ChainGroup).Chain.EffectorLocation.field0_0x0._s_0.X;
  (this->ChainGroup).Chain.EffectorLocation.field0_0x0._s_0.Y = dVar8;
  (this->ChainGroup).Chain.EffectorLocation.field0_0x0._s_0.Z =
       (param_1->ChainGroup).Chain.EffectorLocation.field0_0x0._s_0.Z;
  (this->ChainGroup).Chain.EffectorArrayIndex = (param_1->ChainGroup).Chain.EffectorArrayIndex;
  (this->ChainGroup).Chain.MaxLength = (param_1->ChainGroup).Chain.MaxLength;
  (this->ChainGroup).RootBoneTreeIndex = (param_1->ChainGroup).RootBoneTreeIndex;
  pTVar9 = &(this->ChainGroup).Children;
  if (pTVar9 != pTVar1) {
    DestructItems<FRigUnit_MultiFABRIK_ChainGroup,int>
              ((FRigUnit_MultiFABRIK_ChainGroup *)(pTVar9->AllocatorInstance).Data,
               (this->ChainGroup).Children.ArrayNum);
    iVar4 = (param_1->ChainGroup).Children.ArrayNum;
    piVar3 = &(this->ChainGroup).Children.ArrayMax;
    pFVar6 = (FRigUnit_MultiFABRIK_ChainGroup *)(pTVar1->AllocatorInstance).Data;
    iVar5 = *piVar3;
    (this->ChainGroup).Children.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,iVar4,iVar5,&pTVar9->AllocatorInstance,iVar4,piVar3);
      ConstructItems<FRigUnit_MultiFABRIK_ChainGroup,FRigUnit_MultiFABRIK_ChainGroup,int>
                ((pTVar9->AllocatorInstance).Data,pFVar6,iVar4);
    }
  }
  pTVar2 = &this->BoneTree;
  if (pTVar2 != &param_1->BoneTree) {
    DestructItems<FRigUnit_MultiFABRIK_BoneWorkingData,int>
              ((FRigUnit_MultiFABRIK_BoneWorkingData *)(pTVar2->AllocatorInstance).Data,
               (this->BoneTree).ArrayNum);
    iVar4 = (param_1->BoneTree).ArrayNum;
    piVar3 = &(this->BoneTree).ArrayMax;
    pFVar7 = (FRigUnit_MultiFABRIK_BoneWorkingData *)(param_1->BoneTree).AllocatorInstance.Data;
    (this->BoneTree).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,8,iVar4,*piVar3,&pTVar2->AllocatorInstance,iVar4,piVar3);
      ConstructItems<FRigUnit_MultiFABRIK_BoneWorkingData,FRigUnit_MultiFABRIK_BoneWorkingData,int>
                ((pTVar2->AllocatorInstance).Data,pFVar7,iVar4);
    }
  }
  return this;
}

