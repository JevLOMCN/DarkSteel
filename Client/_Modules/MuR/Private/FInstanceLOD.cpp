// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// operator= @ 14aa94450

FInstanceLOD * __thiscall
UE::Mutable::Private::FInstanceLOD::operator=(FInstanceLOD *this,FInstanceLOD *param_1)

{
  TArray<UE::Mutable::Private::FInstanceSurface,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  ForElementType<UE::Mutable::Private::FInstanceSurface> FVar4;
  ForElementType<UE::Mutable::Private::FInstanceSurface> FVar5;
  
  TRegistry<UE::Mutable::Private::FGeneratedMeshKey,UE::Mutable::Private::FGeneratedMeshData>::
  FHandle::operator=(&this->MeshId,&param_1->MeshId);
  this->MeshName = param_1->MeshName;
  pTVar1 = &this->Surfaces;
  if (this != param_1) {
    FVar4 = (this->Surfaces).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<UE::Mutable::Private::FInstanceSurface>)0x0) {
      FVar4 = (ForElementType<UE::Mutable::Private::FInstanceSurface>)pTVar1;
    }
    DestructItems<UE::Mutable::Private::FInstanceSurface,int>
              ((FInstanceSurface *)FVar4,(this->Surfaces).ArrayNum);
    iVar3 = (param_1->Surfaces).ArrayNum;
    piVar2 = &(this->Surfaces).ArrayMax;
    FVar4 = (param_1->Surfaces).AllocatorInstance.SecondaryData;
    (this->Surfaces).ArrayNum = iVar3;
    if (FVar4 == (ForElementType<UE::Mutable::Private::FInstanceSurface>)0x0) {
      FVar4 = (ForElementType<UE::Mutable::Private::FInstanceSurface>)&param_1->Surfaces;
    }
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 1;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Mutable::Private::FInstanceSurface>_>
                (0x70,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      FVar5 = (this->Surfaces).AllocatorInstance.SecondaryData;
      if (FVar5 == (ForElementType<UE::Mutable::Private::FInstanceSurface>)0x0) {
        FVar5 = (ForElementType<UE::Mutable::Private::FInstanceSurface>)pTVar1;
      }
      ConstructItems<UE::Mutable::Private::FInstanceSurface,UE::Mutable::Private::FInstanceSurface,int>
                ((void *)FVar5,(FInstanceSurface *)FVar4,iVar3);
    }
  }
  return this;
}

