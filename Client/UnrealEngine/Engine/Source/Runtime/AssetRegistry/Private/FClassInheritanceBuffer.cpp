// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 3

// Clear @ 142b88560

void __thiscall
UE::AssetRegistry::Impl::FClassInheritanceBuffer::Clear(FClassInheritanceBuffer *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  TMap<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  
  bVar3 = 1 < *(int *)&(this->InheritanceMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
                      *)this);
  }
  puVar1 = &(this->InheritanceMap).field_0xc;
  *(undefined4 *)&(this->InheritanceMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->InheritanceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InheritanceMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->InheritanceMap).field_0x2c;
  *(undefined4 *)&(this->InheritanceMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->InheritanceMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->InheritanceMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->InheritanceMap).field_0x48 = 1;
    TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
              *)this);
  }
  this_00 = &this->ReverseInheritanceMap;
  bVar3 = 1 < *(int *)&(this->ReverseInheritanceMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->ReverseInheritanceMap).field_0x8);
  puVar1 = &(this->ReverseInheritanceMap).field_0xc;
  *(undefined4 *)&(this->ReverseInheritanceMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ReverseInheritanceMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReverseInheritanceMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ReverseInheritanceMap).field_0x2c;
  *(undefined4 *)&(this->ReverseInheritanceMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ReverseInheritanceMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ReverseInheritanceMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ReverseInheritanceMap).field_0x48 = 1;
    TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// GetAllocatedSize @ 142b93340

ulong64 __thiscall
UE::AssetRegistry::Impl::FClassInheritanceBuffer::GetAllocatedSize(FClassInheritanceBuffer *this)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)&(this->InheritanceMap).field_0x48;
  lVar2 = 0;
  lVar3 = lVar2;
  if (1 < uVar1) {
    lVar3 = (longlong)(int)uVar1 << 2;
  }
  uVar1 = *(uint *)&(this->ReverseInheritanceMap).field_0x48;
  if (1 < uVar1) {
    lVar2 = (longlong)(int)uVar1 << 2;
  }
  return (ulonglong)((*(int *)&(this->ReverseInheritanceMap).field_0x2c + 0x1fU >> 5) << 2) +
         (ulonglong)((*(int *)&(this->InheritanceMap).field_0x2c + 0x1fU >> 5) << 2) +
         ((longlong)*(int *)&(this->ReverseInheritanceMap).field_0xc +
         (longlong)*(int *)&(this->InheritanceMap).field_0xc) * 0x28 + lVar2 + lVar3;
}

// IsUpToDate @ 142b9cb40

bool __thiscall
UE::AssetRegistry::Impl::FClassInheritanceBuffer::IsUpToDate
          (FClassInheritanceBuffer *this,ulong64 param_1)

{
  if ((this->bDirty == false) && (this->SavedAllClassesVersionNumber == param_1)) {
    return true;
  }
  return false;
}

