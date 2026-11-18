// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// operator= @ 14a978f30

FInstanceSurface * __thiscall
UE::Mutable::Private::FInstanceSurface::operator=(FInstanceSurface *this,FInstanceSurface *param_1)

{
  TArray<UE::Mutable::Private::FInstanceSurface::FInstanceImage,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  TArray<UE::Mutable::Private::FInstanceSurface::FInstanceVector,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<UE::Mutable::Private::FInstanceSurface::FInstanceScalar,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TArray<UE::Mutable::Private::FInstanceSurface::FInstanceString,TSizedDefaultAllocator<32>_>
  *pTVar5;
  int iVar6;
  FInstanceImage *pFVar7;
  FScriptContainerElement *pFVar8;
  FInstanceString *pFVar9;
  
  this->Name = param_1->Name;
  this->InternalId = param_1->InternalId;
  this->ExternalId = param_1->ExternalId;
  this->SharedId = param_1->SharedId;
  TRegistry<UE::Mutable::Private::FGeneratedMaterialKey,UE::Mutable::Private::FGeneratedMaterialData>
  ::FHandle::operator=(&this->MaterialId,&param_1->MaterialId);
  pTVar1 = &this->Images;
  if (pTVar1 != &param_1->Images) {
    DestructItems<UE::Mutable::Private::FInstanceSurface::FInstanceImage,int>
              ((FInstanceImage *)(pTVar1->AllocatorInstance).Data,(this->Images).ArrayNum);
    iVar6 = (param_1->Images).ArrayNum;
    piVar2 = &(this->Images).ArrayMax;
    pFVar7 = (FInstanceImage *)(param_1->Images).AllocatorInstance.Data;
    (this->Images).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar6,*piVar2,&pTVar1->AllocatorInstance,iVar6,piVar2);
      ConstructItems<UE::Mutable::Private::FInstanceSurface::FInstanceImage,UE::Mutable::Private::FInstanceSurface::FInstanceImage,int>
                ((pTVar1->AllocatorInstance).Data,pFVar7,iVar6);
    }
  }
  pTVar3 = &this->Vectors;
  if (pTVar3 != &param_1->Vectors) {
    iVar6 = (param_1->Vectors).ArrayNum;
    piVar2 = &(this->Vectors).ArrayMax;
    pFVar8 = (param_1->Vectors).AllocatorInstance.Data;
    (this->Vectors).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,iVar6,*piVar2,&pTVar3->AllocatorInstance,iVar6,piVar2);
      if (iVar6 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar6 << 5);
      }
    }
  }
  pTVar4 = &this->Scalars;
  if (pTVar4 != &param_1->Scalars) {
    iVar6 = (param_1->Scalars).ArrayNum;
    piVar2 = &(this->Scalars).ArrayMax;
    pFVar8 = (param_1->Scalars).AllocatorInstance.Data;
    (this->Scalars).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar6,*piVar2,&pTVar4->AllocatorInstance,iVar6,piVar2);
      if (iVar6 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar8,(longlong)iVar6 * 0xc);
      }
    }
  }
  pTVar5 = &this->Strings;
  if (pTVar5 != &param_1->Strings) {
    DestructItems<UE::Mutable::Private::FInstanceSurface::FInstanceString,int>
              ((FInstanceString *)(pTVar5->AllocatorInstance).Data,(this->Strings).ArrayNum);
    iVar6 = (param_1->Strings).ArrayNum;
    piVar2 = &(this->Strings).ArrayMax;
    pFVar9 = (FInstanceString *)(param_1->Strings).AllocatorInstance.Data;
    (this->Strings).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar6,*piVar2,&pTVar5->AllocatorInstance,iVar6,piVar2);
      ConstructItems<UE::Mutable::Private::FInstanceSurface::FInstanceString,UE::Mutable::Private::FInstanceSurface::FInstanceString,int>
                ((pTVar5->AllocatorInstance).Data,pFVar9,iVar6);
    }
  }
  return this;
}

