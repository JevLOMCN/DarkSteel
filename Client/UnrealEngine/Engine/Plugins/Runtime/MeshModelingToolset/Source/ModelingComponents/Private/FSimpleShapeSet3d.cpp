// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// ~FSimpleShapeSet3d @ 14ca6b1a0

void __thiscall UE::Geometry::FSimpleShapeSet3d::~FSimpleShapeSet3d(FSimpleShapeSet3d *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<UE::Geometry::FLevelSetShape3d,int>
            ((FLevelSetShape3d *)(this->LevelSets).AllocatorInstance.Data,(this->LevelSets).ArrayNum
            );
  pFVar1 = (this->LevelSets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::Geometry::FConvexShape3d,int>
            ((FConvexShape3d *)(this->Convexes).AllocatorInstance.Data,(this->Convexes).ArrayNum);
  pFVar1 = (this->Convexes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Capsules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Boxes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Spheres).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FSimpleShapeSet3d @ 14caca330

FSimpleShapeSet3d * __thiscall
UE::Geometry::FSimpleShapeSet3d::FSimpleShapeSet3d
          (FSimpleShapeSet3d *this,FSimpleShapeSet3d *param_1)

{
  int *piVar1;
  TArray<UE::Geometry::FBoxShape3d,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Geometry::FCapsuleShape3d,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Geometry::FConvexShape3d,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Geometry::FLevelSetShape3d,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FLevelSetShape3d *pFVar8;
  
  piVar1 = &(this->Spheres).ArrayMax;
  (this->Spheres).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->Spheres).ArrayNum;
  pFVar7 = (param_1->Spheres).AllocatorInstance.Data;
  (this->Spheres).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar6,0,(ForAnyElementType *)this,iVar6,piVar1);
    memcpy((this->Spheres).AllocatorInstance.Data,pFVar7,(longlong)iVar6 << 5);
  }
  pTVar2 = &this->Boxes;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Boxes).ArrayMax;
  iVar6 = (param_1->Boxes).ArrayNum;
  pFVar7 = (param_1->Boxes).AllocatorInstance.Data;
  (this->Boxes).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,iVar6,0,&pTVar2->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x50);
  }
  pTVar3 = &this->Capsules;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Capsules).ArrayMax;
  iVar6 = (param_1->Capsules).ArrayNum;
  pFVar7 = (param_1->Capsules).AllocatorInstance.Data;
  (this->Capsules).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 6);
  }
  pTVar4 = &this->Convexes;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Convexes).ArrayMax;
  iVar6 = (param_1->Convexes).ArrayNum;
  pFVar7 = (param_1->Convexes).AllocatorInstance.Data;
  (this->Convexes).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x230,8,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar1);
    ConstructItems<UE::Geometry::FConvexShape3d,UE::Geometry::FConvexShape3d,int>
              ((pTVar4->AllocatorInstance).Data,(FConvexShape3d *)pFVar7,iVar6);
  }
  pTVar5 = &this->LevelSets;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->LevelSets).ArrayMax;
  iVar6 = (param_1->LevelSets).ArrayNum;
  pFVar8 = (FLevelSetShape3d *)(param_1->LevelSets).AllocatorInstance.Data;
  (this->LevelSets).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar1);
    ConstructItems<UE::Geometry::FLevelSetShape3d,UE::Geometry::FLevelSetShape3d,int>
              ((pTVar5->AllocatorInstance).Data,pFVar8,iVar6);
  }
  return this;
}

// operator= @ 14cad31c0

FSimpleShapeSet3d * __thiscall
UE::Geometry::FSimpleShapeSet3d::operator=(FSimpleShapeSet3d *this,FSimpleShapeSet3d *param_1)

{
  int *piVar1;
  TArray<UE::Geometry::FBoxShape3d,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Geometry::FCapsuleShape3d,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Geometry::FConvexShape3d,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Geometry::FLevelSetShape3d,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FLevelSetShape3d *pFVar8;
  
  if (this != param_1) {
    iVar6 = (param_1->Spheres).ArrayNum;
    piVar1 = &(this->Spheres).ArrayMax;
    pFVar7 = (param_1->Spheres).AllocatorInstance.Data;
    (this->Spheres).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar6,*piVar1,(ForAnyElementType *)this,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((this->Spheres).AllocatorInstance.Data,pFVar7,(longlong)iVar6 << 5);
      }
    }
  }
  pTVar2 = &this->Boxes;
  if (pTVar2 != &param_1->Boxes) {
    iVar6 = (param_1->Boxes).ArrayNum;
    piVar1 = &(this->Boxes).ArrayMax;
    pFVar7 = (param_1->Boxes).AllocatorInstance.Data;
    (this->Boxes).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar6,*piVar1,&pTVar2->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar7,(longlong)iVar6 * 0x50);
      }
    }
  }
  pTVar3 = &this->Capsules;
  if (pTVar3 != &param_1->Capsules) {
    iVar6 = (param_1->Capsules).ArrayNum;
    piVar1 = &(this->Capsules).ArrayMax;
    pFVar7 = (param_1->Capsules).AllocatorInstance.Data;
    (this->Capsules).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar6,*piVar1,&pTVar3->AllocatorInstance,iVar6,piVar1);
      if (iVar6 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 6);
      }
    }
  }
  pTVar4 = &this->Convexes;
  if (pTVar4 != &param_1->Convexes) {
    DestructItems<UE::Geometry::FConvexShape3d,int>
              ((FConvexShape3d *)(pTVar4->AllocatorInstance).Data,(this->Convexes).ArrayNum);
    iVar6 = (param_1->Convexes).ArrayNum;
    piVar1 = &(this->Convexes).ArrayMax;
    pFVar7 = (param_1->Convexes).AllocatorInstance.Data;
    (this->Convexes).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x230,8,iVar6,*piVar1,&pTVar4->AllocatorInstance,iVar6,piVar1);
      ConstructItems<UE::Geometry::FConvexShape3d,UE::Geometry::FConvexShape3d,int>
                ((pTVar4->AllocatorInstance).Data,(FConvexShape3d *)pFVar7,iVar6);
    }
  }
  pTVar5 = &this->LevelSets;
  if (pTVar5 != &param_1->LevelSets) {
    DestructItems<UE::Geometry::FLevelSetShape3d,int>
              ((FLevelSetShape3d *)(pTVar5->AllocatorInstance).Data,(this->LevelSets).ArrayNum);
    iVar6 = (param_1->LevelSets).ArrayNum;
    piVar1 = &(this->LevelSets).ArrayMax;
    pFVar8 = (FLevelSetShape3d *)(param_1->LevelSets).AllocatorInstance.Data;
    (this->LevelSets).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,0x10,iVar6,*piVar1,&pTVar5->AllocatorInstance,iVar6,piVar1);
      ConstructItems<UE::Geometry::FLevelSetShape3d,UE::Geometry::FLevelSetShape3d,int>
                ((pTVar5->AllocatorInstance).Data,pFVar8,iVar6);
    }
  }
  return this;
}

