// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// FPerClothAssetData @ 14abbce30

FPerClothAssetData * __thiscall
`BuildOrCopyClothingData'::__l2::FPerClothAssetData::FPerClothAssetData
          (void *this,FPerClothAssetData *param_1)

{
  *(int *)this = param_1->MinLOD;
  *(undefined8 *)((longlong)this + 0x188) = 0;
  if ((param_1->AttachedSections).AllocatorInstance.SecondaryData ==
      (ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>)0x0) {
    memmove((void *)((longlong)this + 8),&param_1->AttachedSections,0x180);
  }
  if (*(void **)((longlong)this + 0x188) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x188));
  }
  *(ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_> *)
   ((longlong)this + 0x188) = (param_1->AttachedSections).AllocatorInstance.SecondaryData;
  (param_1->AttachedSections).AllocatorInstance.SecondaryData =
       (ForElementType<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>)0x0;
  *(int *)((longlong)this + 400) = (param_1->AttachedSections).ArrayNum;
  *(int *)((longlong)this + 0x194) = (param_1->AttachedSections).ArrayMax;
  (param_1->AttachedSections).ArrayNum = 0;
  (param_1->AttachedSections).ArrayMax = 8;
  *(FName *)((longlong)this + 0x198) = param_1->Name;
  *(UPhysicsAsset **)((longlong)this + 0x1a0) = param_1->PhysicsAsset;
  *(UClothingAssetCommon **)((longlong)this + 0x1a8) = param_1->ClothingAsset;
  return this;
}

