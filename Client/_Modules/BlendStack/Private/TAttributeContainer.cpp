// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 1

// TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> @ 14a860ee0

TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> * __thiscall
UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::
TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>
          (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *this,
          TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar8;
  FScriptContainerElement *_Src;
  
  piVar1 = &(this->UniqueTypedBoneIndices).ArrayMax;
  (this->UniqueTypedBoneIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->UniqueTypedBoneIndices).ArrayNum;
  pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)
           (param_1->UniqueTypedBoneIndices).AllocatorInstance.Data;
  (this->UniqueTypedBoneIndices).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    ConstructItems<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((this->UniqueTypedBoneIndices).AllocatorInstance.Data,pTVar6,iVar5);
  }
  pTVar2 = &this->AttributeIdentifiers;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->AttributeIdentifiers).ArrayMax;
  iVar5 = (param_1->AttributeIdentifiers).ArrayNum;
  pTVar7 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
           (param_1->AttributeIdentifiers).AllocatorInstance.Data;
  (this->AttributeIdentifiers).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    ConstructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              ((pTVar2->AllocatorInstance).Data,pTVar7,iVar5);
  }
  pTVar3 = &this->Values;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Values).ArrayMax;
  iVar5 = (param_1->Values).ArrayNum;
  pTVar8 = (TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            *)(param_1->Values).AllocatorInstance.Data;
  (this->Values).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    ConstructItems<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar8,iVar5);
  }
  pTVar4 = &this->UniqueTypes;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->UniqueTypes).ArrayMax;
  iVar5 = (param_1->UniqueTypes).ArrayNum;
  _Src = (param_1->UniqueTypes).AllocatorInstance.Data;
  (this->UniqueTypes).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,_Src,(longlong)iVar5 << 3);
  }
  return this;
}

