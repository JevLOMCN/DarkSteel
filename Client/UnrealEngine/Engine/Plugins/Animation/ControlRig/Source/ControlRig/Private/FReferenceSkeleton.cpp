// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// FReferenceSkeleton @ 14a21fc10

FReferenceSkeleton * __thiscall
FReferenceSkeleton::FReferenceSkeleton(FReferenceSkeleton *this,FReferenceSkeleton *param_1)

{
  int *piVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FVirtualBoneRefData,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  piVar1 = &(this->RawRefBoneInfo).ArrayMax;
  (this->RawRefBoneInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->RawRefBoneInfo).ArrayNum;
  pFVar8 = (param_1->RawRefBoneInfo).AllocatorInstance.Data;
  (this->RawRefBoneInfo).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar7,0,(ForAnyElementType *)this,iVar7,piVar1);
    memcpy((this->RawRefBoneInfo).AllocatorInstance.Data,pFVar8,(longlong)iVar7 * 0xc);
  }
  pTVar2 = &this->RawRefBonePose;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RawRefBonePose).ArrayMax;
  iVar7 = (param_1->RawRefBonePose).ArrayNum;
  pFVar8 = (param_1->RawRefBonePose).AllocatorInstance.Data;
  (this->RawRefBonePose).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar7,0,&pTVar2->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 0x60);
  }
  pTVar3 = &this->FinalRefBoneInfo;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->FinalRefBoneInfo).ArrayMax;
  iVar7 = (param_1->FinalRefBoneInfo).ArrayNum;
  pFVar8 = (param_1->FinalRefBoneInfo).AllocatorInstance.Data;
  (this->FinalRefBoneInfo).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar7,0,&pTVar3->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 0xc);
  }
  pTVar2 = &this->FinalRefBonePose;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->FinalRefBonePose).ArrayMax;
  iVar7 = (param_1->FinalRefBonePose).ArrayNum;
  pFVar8 = (param_1->FinalRefBonePose).AllocatorInstance.Data;
  (this->FinalRefBonePose).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar7,0,&pTVar2->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 0x60);
  }
  *(undefined8 *)&(this->RawNameToIndexMap).field_0x0 = 0;
  *(undefined8 *)&(this->RawNameToIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->RawNameToIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->RawNameToIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->RawNameToIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RawNameToIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RawNameToIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->RawNameToIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->RawNameToIndexMap).field_0x48 = 0;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->RawNameToIndexMap,
             (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&param_1->RawNameToIndexMap);
  *(undefined8 *)&(this->FinalNameToIndexMap).field_0x0 = 0;
  *(undefined8 *)&(this->FinalNameToIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->FinalNameToIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->FinalNameToIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->FinalNameToIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FinalNameToIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FinalNameToIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->FinalNameToIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->FinalNameToIndexMap).field_0x48 = 0;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::operator=
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->FinalNameToIndexMap,
             (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&param_1->FinalNameToIndexMap);
  pTVar4 = &this->RequiredVirtualBones;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->RequiredVirtualBones).ArrayMax;
  iVar7 = (param_1->RequiredVirtualBones).ArrayNum;
  pFVar8 = (param_1->RequiredVirtualBones).AllocatorInstance.Data;
  (this->RequiredVirtualBones).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,&pTVar4->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 2);
  }
  pTVar5 = &this->UsedVirtualBoneData;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->UsedVirtualBoneData).ArrayMax;
  iVar7 = (param_1->UsedVirtualBoneData).ArrayNum;
  pFVar8 = (param_1->UsedVirtualBoneData).AllocatorInstance.Data;
  (this->UsedVirtualBoneData).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar7,0,&pTVar5->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar8,(longlong)iVar7 * 0xc);
  }
  pTVar6 = &this->CachedEndOfBranchIndicesRaw;
  this->bOnlyOneRootAllowed = param_1->bOnlyOneRootAllowed;
  piVar1 = &(this->CachedEndOfBranchIndicesRaw).ArrayMax;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = (param_1->CachedEndOfBranchIndicesRaw).ArrayNum;
  pFVar8 = (param_1->CachedEndOfBranchIndicesRaw).AllocatorInstance.Data;
  (this->CachedEndOfBranchIndicesRaw).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar7,0,&pTVar6->AllocatorInstance,iVar7,piVar1);
    memcpy((pTVar6->AllocatorInstance).Data,pFVar8,(longlong)iVar7 << 2);
  }
  return this;
}

