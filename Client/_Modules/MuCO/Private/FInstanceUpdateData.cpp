// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// ~FInstanceUpdateData @ 14abbedd0

void __thiscall FInstanceUpdateData::~FInstanceUpdateData(FInstanceUpdateData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FInstanceUpdateData::FNamedExtensionData,int>
            ((FNamedExtensionData *)(this->ExtendedInputPins).AllocatorInstance.Data,
             (this->ExtendedInputPins).ArrayNum);
  pFVar1 = (this->ExtendedInputPins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInstanceUpdateData::FSkeletonData,int>
            ((FSkeletonData *)(this->SkeletonsPerInstanceComponent).AllocatorInstance.Data,
             (this->SkeletonsPerInstanceComponent).ArrayNum);
  pFVar1 = (this->SkeletonsPerInstanceComponent).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ClothingMeshData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ClothingMeshData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FClothingMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FClothingMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FClothingMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClothingMeshData);
  *(undefined4 *)&(this->RealTimeMorphTargets).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RealTimeMorphTargets).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FSkeletalMeshMorphTargets>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FSkeletalMeshMorphTargets>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FSkeletalMeshMorphTargets>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RealTimeMorphTargets);
  *(undefined4 *)&(this->RealTimeMorphTargetMeshData).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RealTimeMorphTargetMeshData).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMorphTargetMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMorphTargetMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMorphTargetMeshData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RealTimeMorphTargetMeshData);
  pFVar1 = (this->BoneMaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Scalars).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Vectors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInstanceUpdateData::FImage,int>
            ((FImage *)(this->Images).AllocatorInstance.Data,(this->Images).ArrayNum);
  pFVar1 = (this->Images).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInstanceUpdateData::FSurface,int>
            ((FSurface *)(this->Surfaces).AllocatorInstance.Data,(this->Surfaces).ArrayNum);
  pFVar1 = (this->Surfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInstanceUpdateData::FLOD,int>
            ((FLOD *)(this->LODs).AllocatorInstance.Data,(this->LODs).ArrayNum);
  pFVar1 = (this->LODs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FInstanceUpdateData::FComponent,int>
            ((FComponent *)(this->Components).AllocatorInstance.Data,(this->Components).ArrayNum);
  pFVar1 = (this->Components).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// Clear @ 14ac16910

void __thiscall FInstanceUpdateData::Clear(FInstanceUpdateData *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<FName,FSkeletalMeshMorphTargets,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSkeletalMeshMorphTargets,0>_>
  *this_00;
  int iVar3;
  bool bVar4;
  
  DestructItems<FInstanceUpdateData::FLOD,int>
            ((FLOD *)(this->LODs).AllocatorInstance.Data,(this->LODs).ArrayNum);
  piVar1 = &(this->LODs).ArrayMax;
  (this->LODs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->LODs).AllocatorInstance,0,piVar1);
  }
  DestructItems<FInstanceUpdateData::FComponent,int>
            ((FComponent *)(this->Components).AllocatorInstance.Data,(this->Components).ArrayNum);
  piVar1 = &(this->Components).ArrayMax;
  (this->Components).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  DestructItems<FInstanceUpdateData::FSurface,int>
            ((FSurface *)(this->Surfaces).AllocatorInstance.Data,(this->Surfaces).ArrayNum);
  piVar1 = &(this->Surfaces).ArrayMax;
  (this->Surfaces).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->Surfaces).AllocatorInstance,0,piVar1);
  }
  DestructItems<FInstanceUpdateData::FImage,int>
            ((FImage *)(this->Images).AllocatorInstance.Data,(this->Images).ArrayNum);
  piVar1 = &(this->Images).ArrayMax;
  (this->Images).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,&(this->Images).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Scalars).ArrayMax;
  (this->Scalars).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Scalars).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Vectors).ArrayMax;
  (this->Vectors).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&(this->Vectors).AllocatorInstance,0,piVar1);
  }
  this_00 = &this->RealTimeMorphTargets;
  bVar4 = 1 < *(int *)&(this->RealTimeMorphTargets).field_0x48;
  if (!bVar4) {
    TSet<TTuple<FName,FSkeletalMeshMorphTargets>,TDefaultMapHashableKeyFuncs<FName,FSkeletalMeshMorphTargets,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FSkeletalMeshMorphTargets>,TDefaultMapHashableKeyFuncs<FName,FSkeletalMeshMorphTargets,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FSkeletalMeshMorphTargets>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FSkeletalMeshMorphTargets>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->RealTimeMorphTargets).field_0x8);
  puVar2 = &(this->RealTimeMorphTargets).field_0xc;
  *(undefined4 *)&(this->RealTimeMorphTargets).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->RealTimeMorphTargets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RealTimeMorphTargets).field_0x34 = 0;
  iVar3 = *(int *)&(this->RealTimeMorphTargets).field_0x2c;
  *(undefined4 *)&(this->RealTimeMorphTargets).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->RealTimeMorphTargets).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RealTimeMorphTargets).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->RealTimeMorphTargets).field_0x48 = 1;
    TSet<TTuple<FName,FSkeletalMeshMorphTargets>,TDefaultMapHashableKeyFuncs<FName,FSkeletalMeshMorphTargets,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FSkeletalMeshMorphTargets>,TDefaultMapHashableKeyFuncs<FName,FSkeletalMeshMorphTargets,0>,FDefaultSetAllocator>
              *)this_00);
  }
  DestructItems<FInstanceUpdateData::FSkeletonData,int>
            ((FSkeletonData *)(this->SkeletonsPerInstanceComponent).AllocatorInstance.Data,
             (this->SkeletonsPerInstanceComponent).ArrayNum);
  piVar1 = &(this->SkeletonsPerInstanceComponent).ArrayMax;
  (this->SkeletonsPerInstanceComponent).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,0,&(this->SkeletonsPerInstanceComponent).AllocatorInstance,0,piVar1);
  }
  DestructItems<FInstanceUpdateData::FNamedExtensionData,int>
            ((FNamedExtensionData *)(this->ExtendedInputPins).AllocatorInstance.Data,
             (this->ExtendedInputPins).ArrayNum);
  piVar1 = &(this->ExtendedInputPins).ArrayMax;
  (this->ExtendedInputPins).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->ExtendedInputPins).AllocatorInstance,0,piVar1);
  }
  return;
}

