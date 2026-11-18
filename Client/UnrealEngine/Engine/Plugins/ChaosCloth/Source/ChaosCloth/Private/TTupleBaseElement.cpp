// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 1

// ~TTupleBaseElement<TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>,1,2> @ 14db9f170

void __thiscall
UE::Core::Private::Tuple::
TTupleBaseElement<TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>,1,2>
::
~TTupleBaseElement<TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>,1,2>
          (TTupleBaseElement<TUniquePtr<Chaos::FClothComplexColliders,TDefaultDelete<Chaos::FClothComplexColliders>_>,1,2>
           *this)

{
  FClothComplexColliders *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Value).Ptr;
  if (pFVar1 != (FClothComplexColliders *)0x0) {
    DestructItems<Chaos::FClothComplexColliders::FSkinnedTriangleMeshData,int>
              ((FSkinnedTriangleMeshData *)(pFVar1->SkinnedTriangleMeshes).AllocatorInstance.Data,
               (pFVar1->SkinnedTriangleMeshes).ArrayNum);
    pFVar2 = (pFVar1->SkinnedTriangleMeshes).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<Chaos::FClothComplexColliders::FMLLevelSetData,int>
              ((FMLLevelSetData *)(pFVar1->MLLevelSets).AllocatorInstance.Data,
               (pFVar1->MLLevelSets).ArrayNum);
    pFVar2 = (pFVar1->MLLevelSets).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<Chaos::FClothComplexColliders::FSkinnedLevelSetData,int>
              ((FSkinnedLevelSetData *)(pFVar1->SkinnedLevelSets).AllocatorInstance.Data,
               (pFVar1->SkinnedLevelSets).ArrayNum);
    pFVar2 = (pFVar1->SkinnedLevelSets).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::Chaos::FClothComplexColliders::FCollisionSubBones::~FCollisionSubBones
              (&pFVar1->CollisionSubBones);
    ::operator_delete(pFVar1,0x128);
    return;
  }
  return;
}

