// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 3

// FARPose2D @ 14cfcf500

FARPose2D * __thiscall FARPose2D::FARPose2D(FARPose2D *this,FARPose2D *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = &(this->SkeletonDefinition).JointNames;
  (this->SkeletonDefinition).NumJoints = (param_1->SkeletonDefinition).NumJoints;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar4 = &(this->SkeletonDefinition).JointNames.ArrayMax;
  iVar6 = (param_1->SkeletonDefinition).JointNames.ArrayNum;
  pFVar7 = (param_1->SkeletonDefinition).JointNames.AllocatorInstance.Data;
  (this->SkeletonDefinition).JointNames.ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar6,0,&pTVar1->AllocatorInstance,iVar6,piVar4);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 3);
  }
  pTVar2 = &(this->SkeletonDefinition).ParentIndices;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar4 = &(this->SkeletonDefinition).ParentIndices.ArrayMax;
  iVar6 = (param_1->SkeletonDefinition).ParentIndices.ArrayNum;
  pFVar7 = (param_1->SkeletonDefinition).ParentIndices.AllocatorInstance.Data;
  (this->SkeletonDefinition).ParentIndices.ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,0,&pTVar2->AllocatorInstance,iVar6,piVar4);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 2);
  }
  pTVar3 = &this->JointLocations;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar4 = &(this->JointLocations).ArrayMax;
  iVar6 = (param_1->JointLocations).ArrayNum;
  pFVar7 = (param_1->JointLocations).AllocatorInstance.Data;
  (this->JointLocations).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar4);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 4);
  }
  pTVar5 = &this->IsJointTracked;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar4 = &(this->IsJointTracked).ArrayMax;
  iVar6 = (param_1->IsJointTracked).ArrayNum;
  pFVar7 = (param_1->IsJointTracked).AllocatorInstance.Data;
  (this->IsJointTracked).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar4);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar7,(longlong)iVar6);
  }
  return this;
}

// ~FARPose2D @ 14cfd0db0

void __thiscall FARPose2D::~FARPose2D(FARPose2D *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->IsJointTracked).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JointLocations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkeletonDefinition).ParentIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkeletonDefinition).JointNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 14cfd14e0

FARPose2D * __thiscall FARPose2D::operator=(FARPose2D *this,FARPose2D *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  int *piVar6;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  
  (this->SkeletonDefinition).NumJoints = (param_1->SkeletonDefinition).NumJoints;
  pTVar1 = &(param_1->SkeletonDefinition).JointNames;
  pTVar2 = &(this->SkeletonDefinition).JointNames;
  if (pTVar2 != pTVar1) {
    iVar8 = (param_1->SkeletonDefinition).JointNames.ArrayNum;
    piVar6 = &(this->SkeletonDefinition).JointNames.ArrayMax;
    pFVar10 = (pTVar1->AllocatorInstance).Data;
    iVar9 = *piVar6;
    (this->SkeletonDefinition).JointNames.ArrayNum = iVar8;
    if ((iVar8 == 0) && (iVar9 == 0)) {
      *piVar6 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar8,iVar9,&pTVar2->AllocatorInstance,iVar8,piVar6);
      if (iVar8 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar10,(longlong)iVar8 << 3);
      }
    }
  }
  pTVar3 = &(param_1->SkeletonDefinition).ParentIndices;
  pTVar4 = &(this->SkeletonDefinition).ParentIndices;
  if (pTVar4 != pTVar3) {
    iVar8 = (param_1->SkeletonDefinition).ParentIndices.ArrayNum;
    piVar6 = &(this->SkeletonDefinition).ParentIndices.ArrayMax;
    pFVar10 = (pTVar3->AllocatorInstance).Data;
    iVar9 = *piVar6;
    (this->SkeletonDefinition).ParentIndices.ArrayNum = iVar8;
    if ((iVar8 == 0) && (iVar9 == 0)) {
      *piVar6 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar8,iVar9,&pTVar4->AllocatorInstance,iVar8,piVar6);
      if (iVar8 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar10,(longlong)iVar8 << 2);
      }
    }
  }
  pTVar5 = &this->JointLocations;
  if (pTVar5 != &param_1->JointLocations) {
    iVar8 = (param_1->JointLocations).ArrayNum;
    piVar6 = &(this->JointLocations).ArrayMax;
    pFVar10 = (param_1->JointLocations).AllocatorInstance.Data;
    (this->JointLocations).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar6 == 0)) {
      *piVar6 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,*piVar6,&pTVar5->AllocatorInstance,iVar8,piVar6);
      if (iVar8 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,pFVar10,(longlong)iVar8 << 4);
      }
    }
  }
  pTVar7 = &this->IsJointTracked;
  if (pTVar7 != &param_1->IsJointTracked) {
    iVar8 = (param_1->IsJointTracked).ArrayNum;
    piVar6 = &(this->IsJointTracked).ArrayMax;
    pFVar10 = (param_1->IsJointTracked).AllocatorInstance.Data;
    (this->IsJointTracked).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar6 == 0)) {
      *piVar6 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar8,*piVar6,&pTVar7->AllocatorInstance,iVar8,piVar6);
      if (iVar8 != 0) {
        memcpy((pTVar7->AllocatorInstance).Data,pFVar10,(longlong)iVar8);
      }
    }
  }
  return this;
}

