// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 2

// FClothCollisionData @ 14db8e820

FClothCollisionData * __thiscall
FClothCollisionData::FClothCollisionData(FClothCollisionData *this,FClothCollisionData *param_1)

{
  int *piVar1;
  TArray<FClothCollisionPrim_SphereConnection,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FClothCollisionPrim_Convex,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FClothCollisionPrim_Box,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FClothCollisionPrim_Convex *pFVar7;
  
  piVar1 = &(this->Spheres).ArrayMax;
  (this->Spheres).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Spheres).ArrayNum;
  pFVar6 = (param_1->Spheres).AllocatorInstance.Data;
  (this->Spheres).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    memcpy((this->Spheres).AllocatorInstance.Data,pFVar6,(longlong)iVar5 << 5);
  }
  pTVar2 = &this->SphereConnections;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SphereConnections).ArrayMax;
  iVar5 = (param_1->SphereConnections).ArrayNum;
  pFVar6 = (param_1->SphereConnections).AllocatorInstance.Data;
  (this->SphereConnections).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 5);
  }
  pTVar3 = &this->Convexes;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Convexes).ArrayMax;
  iVar5 = (param_1->Convexes).ArrayNum;
  pFVar7 = (FClothCollisionPrim_Convex *)(param_1->Convexes).AllocatorInstance.Data;
  (this->Convexes).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    ConstructItems<FClothCollisionPrim_Convex,FClothCollisionPrim_Convex,int>
              ((pTVar3->AllocatorInstance).Data,pFVar7,iVar5);
  }
  pTVar4 = &this->Boxes;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Boxes).ArrayMax;
  iVar5 = (param_1->Boxes).ArrayNum;
  pFVar6 = (param_1->Boxes).AllocatorInstance.Data;
  (this->Boxes).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x60);
  }
  return this;
}

// operator= @ 14dba0980

FClothCollisionData * __thiscall
FClothCollisionData::operator=(FClothCollisionData *this,FClothCollisionData *param_1)

{
  int *piVar1;
  TArray<FClothCollisionPrim_SphereConnection,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FClothCollisionPrim_Convex,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FClothCollisionPrim_Box,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FClothCollisionPrim_Convex *pFVar7;
  
  if (this != param_1) {
    iVar5 = (param_1->Spheres).ArrayNum;
    piVar1 = &(this->Spheres).ArrayMax;
    pFVar6 = (param_1->Spheres).AllocatorInstance.Data;
    (this->Spheres).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar5,*piVar1,(ForAnyElementType *)this,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((this->Spheres).AllocatorInstance.Data,pFVar6,(longlong)iVar5 << 5);
      }
    }
  }
  pTVar2 = &this->SphereConnections;
  if (pTVar2 != &param_1->SphereConnections) {
    iVar5 = (param_1->SphereConnections).ArrayNum;
    piVar1 = &(this->SphereConnections).ArrayMax;
    pFVar6 = (param_1->SphereConnections).AllocatorInstance.Data;
    (this->SphereConnections).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar5,*piVar1,&pTVar2->AllocatorInstance,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 5);
      }
    }
  }
  pTVar3 = &this->Convexes;
  if (pTVar3 != &param_1->Convexes) {
    DestructItems<FClothCollisionPrim_Convex,int>
              ((FClothCollisionPrim_Convex *)(pTVar3->AllocatorInstance).Data,
               (this->Convexes).ArrayNum);
    iVar5 = (param_1->Convexes).ArrayNum;
    piVar1 = &(this->Convexes).ArrayMax;
    pFVar7 = (FClothCollisionPrim_Convex *)(param_1->Convexes).AllocatorInstance.Data;
    (this->Convexes).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar5,*piVar1,&pTVar3->AllocatorInstance,iVar5,piVar1);
      ConstructItems<FClothCollisionPrim_Convex,FClothCollisionPrim_Convex,int>
                ((pTVar3->AllocatorInstance).Data,pFVar7,iVar5);
    }
  }
  pTVar4 = &this->Boxes;
  if (pTVar4 != &param_1->Boxes) {
    iVar5 = (param_1->Boxes).ArrayNum;
    piVar1 = &(this->Boxes).ArrayMax;
    pFVar6 = (param_1->Boxes).AllocatorInstance.Data;
    (this->Boxes).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar5,*piVar1,&pTVar4->AllocatorInstance,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x60);
      }
    }
  }
  return this;
}

