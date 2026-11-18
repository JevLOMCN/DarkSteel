// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~FSkinnedAssetMapping @ 145666f00

void __thiscall FSkinnedAssetMapping::~FSkinnedAssetMapping(FSkinnedAssetMapping *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RotationKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PositionKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RetargetingTable).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshToAnimIndexMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimGlobalRefPose).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshGlobalRefPose).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 145667700

FSkinnedAssetMapping * __thiscall
FSkinnedAssetMapping::operator=(FSkinnedAssetMapping *this,FSkinnedAssetMapping *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<TTuple<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->MeshGlobalRefPose,&param_1->MeshGlobalRefPose);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->AnimGlobalRefPose,&param_1->AnimGlobalRefPose);
  pTVar1 = &this->MeshToAnimIndexMap;
  if (pTVar1 != &param_1->MeshToAnimIndexMap) {
    iVar4 = (param_1->MeshToAnimIndexMap).ArrayNum;
    piVar2 = &(this->MeshToAnimIndexMap).ArrayMax;
    pFVar5 = (param_1->MeshToAnimIndexMap).AllocatorInstance.Data;
    (this->MeshToAnimIndexMap).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
      }
    }
  }
  pTVar3 = &this->RetargetingTable;
  if (pTVar3 != &param_1->RetargetingTable) {
    iVar4 = (param_1->RetargetingTable).ArrayNum;
    piVar2 = &(this->RetargetingTable).ArrayMax;
    pFVar5 = (param_1->RetargetingTable).AllocatorInstance.Data;
    (this->RetargetingTable).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 6);
      }
    }
  }
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->PositionKeys,&param_1->PositionKeys);
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->RotationKeys,&param_1->RotationKeys);
  this->BoneCount = param_1->BoneCount;
  return this;
}

