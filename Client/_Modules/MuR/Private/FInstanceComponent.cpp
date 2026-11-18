// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// operator= @ 14aa94360

FInstanceComponent * __thiscall
UE::Mutable::Private::FInstanceComponent::operator=
          (FInstanceComponent *this,FInstanceComponent *param_1)

{
  TArray<UE::Mutable::Private::FInstanceLOD,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  ForElementType<UE::Mutable::Private::FInstanceLOD> FVar4;
  ForElementType<UE::Mutable::Private::FInstanceLOD> FVar5;
  
  this->Id = param_1->Id;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  ::FHandle::operator=(&this->OverlayMaterialId,&param_1->OverlayMaterialId);
  pTVar1 = &this->LODs;
  if (this != param_1) {
    FVar4 = (this->LODs).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<UE::Mutable::Private::FInstanceLOD>)0x0) {
      FVar4 = (ForElementType<UE::Mutable::Private::FInstanceLOD>)pTVar1;
    }
    DestructItems<UE::Mutable::Private::FInstanceLOD,int>
              ((FInstanceLOD *)FVar4,(this->LODs).ArrayNum);
    iVar3 = (param_1->LODs).ArrayNum;
    piVar2 = &(this->LODs).ArrayMax;
    FVar4 = (param_1->LODs).AllocatorInstance.SecondaryData;
    (this->LODs).ArrayNum = iVar3;
    if (FVar4 == (ForElementType<UE::Mutable::Private::FInstanceLOD>)0x0) {
      FVar4 = (ForElementType<UE::Mutable::Private::FInstanceLOD>)&param_1->LODs;
    }
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 1;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FInstanceLOD>_>
                (0xa0,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      FVar5 = (this->LODs).AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<UE::Mutable::Private::FInstanceLOD>)0x0) {
        FVar5 = (ForElementType<UE::Mutable::Private::FInstanceLOD>)pTVar1;
      }
      ConstructItems<UE::Mutable::Private::FInstanceLOD,UE::Mutable::Private::FInstanceLOD,int>
                ((void *)FVar5,(FInstanceLOD *)FVar4,iVar3);
    }
  }
  return this;
}

