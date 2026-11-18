// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// ~TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_> @ 142b4f150

void __thiscall
TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
::
~TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
          (TMap<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

