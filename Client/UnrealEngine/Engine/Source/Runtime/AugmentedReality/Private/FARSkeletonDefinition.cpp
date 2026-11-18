// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 2

// StaticStruct @ 14cf2d740

UScriptStruct * __cdecl FARSkeletonDefinition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FARSkeletonDefinition.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UScriptStruct_FARSkeletonDefinition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FARSkeletonDefinition,(UObject *)pUVar1,
                         L"ARSkeletonDefinition");
  }
  return Z_Registration_Info_UScriptStruct_FARSkeletonDefinition.OuterSingleton;
}

// operator= @ 14cf455c0

FARSkeletonDefinition * __thiscall
FARSkeletonDefinition::operator=(FARSkeletonDefinition *this,FARSkeletonDefinition *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  this->NumJoints = param_1->NumJoints;
  pTVar1 = &this->JointNames;
  if (pTVar1 != &param_1->JointNames) {
    iVar3 = (this->JointNames).ArrayMax;
    piVar2 = &(this->JointNames).ArrayMax;
    _Src = (param_1->JointNames).AllocatorInstance.Data;
    iVar4 = (param_1->JointNames).ArrayNum;
    (this->JointNames).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->ParentIndices,&param_1->ParentIndices);
  return this;
}

