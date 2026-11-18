// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Shrink @ 1422a7320

void __thiscall FSetHashBucket::Shrink(FSetHashBucket *this)

{
  ulonglong uVar1;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *this_00;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  
  this_00 = this->Elements[1];
  if ((this_00 != (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0)
     && (this->Elements[0] == (void *)0x0)) {
    bVar3 = TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::Compact((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00);
    if (bVar3) {
      uVar4 = *(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34;
      if (3 < uVar4) {
        uVar1 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        this_00->HashSize = 1 << ((byte)lVar2 & 0x1f);
        TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::Rehash(this_00);
        return;
      }
      this_00->HashSize = 1;
      TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::Rehash(this_00);
      return;
    }
  }
  return;
}

