// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 1

// Reset @ 14dc0e690

void __thiscall Chaos::FClothCollisionDataExtended::Reset(FClothCollisionDataExtended *this)

{
  int *piVar1;
  int iVar2;
  FLevelSetCollisionData *pFVar3;
  FSkinnedLevelSetCollisionData *pFVar4;
  FMLLevelSetCollisionData *pFVar5;
  FSkinnedTriangleMeshCollisionData *pFVar6;
  
  piVar1 = &(this->LevelSets).ArrayMax;
  pFVar3 = (FLevelSetCollisionData *)(this->LevelSets).AllocatorInstance.Data;
  iVar2 = (this->LevelSets).ArrayNum;
  if ((this->LevelSets).ArrayMax < 0) {
    DestructItems<Chaos::FLevelSetCollisionData,int>(pFVar3,iVar2);
    (this->LevelSets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FLevelSetCollisionData,int>(pFVar3,iVar2);
    (this->LevelSets).ArrayNum = 0;
  }
  piVar1 = &(this->SkinnedLevelSets).ArrayMax;
  pFVar4 = (FSkinnedLevelSetCollisionData *)(this->SkinnedLevelSets).AllocatorInstance.Data;
  iVar2 = (this->SkinnedLevelSets).ArrayNum;
  if ((this->SkinnedLevelSets).ArrayMax < 0) {
    DestructItems<Chaos::FSkinnedLevelSetCollisionData,int>(pFVar4,iVar2);
    (this->SkinnedLevelSets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->SkinnedLevelSets).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FSkinnedLevelSetCollisionData,int>(pFVar4,iVar2);
    (this->SkinnedLevelSets).ArrayNum = 0;
  }
  piVar1 = &(this->MLLevelSets).ArrayMax;
  pFVar5 = (FMLLevelSetCollisionData *)(this->MLLevelSets).AllocatorInstance.Data;
  iVar2 = (this->MLLevelSets).ArrayNum;
  if ((this->MLLevelSets).ArrayMax < 0) {
    DestructItems<Chaos::FMLLevelSetCollisionData,int>(pFVar5,iVar2);
    (this->MLLevelSets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->MLLevelSets).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FMLLevelSetCollisionData,int>(pFVar5,iVar2);
    (this->MLLevelSets).ArrayNum = 0;
  }
  piVar1 = &(this->SkinnedTriangleMeshes).ArrayMax;
  pFVar6 = (FSkinnedTriangleMeshCollisionData *)(this->SkinnedTriangleMeshes).AllocatorInstance.Data
  ;
  iVar2 = (this->SkinnedTriangleMeshes).ArrayNum;
  if (-1 < (this->SkinnedTriangleMeshes).ArrayMax) {
    DestructItems<Chaos::FSkinnedTriangleMeshCollisionData,int>(pFVar6,iVar2);
    (this->SkinnedTriangleMeshes).ArrayNum = 0;
    return;
  }
  DestructItems<Chaos::FSkinnedTriangleMeshCollisionData,int>(pFVar6,iVar2);
  (this->SkinnedTriangleMeshes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&(this->SkinnedTriangleMeshes).AllocatorInstance,0,piVar1);
  }
  return;
}

