// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 1

// Find @ 14e2aee70

uchar * __thiscall
TMapBase<unsigned_char,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,unsigned_char,0>_>
::Find(TMapBase<unsigned_char,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,unsigned_char,0>_>
       *this,uchar param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uchar *puVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    ((ulonglong)((this->Pairs).HashSize - 1) & (ulonglong)param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0xc;
        if (*(uchar *)(lVar2 + (longlong)iVar3 * 0xc) == param_1) {
          puVar4 = (uchar *)0x0;
          if (lVar1 != 0) {
            puVar4 = (uchar *)(lVar1 + 1);
          }
          return puVar4;
        }
        iVar3 = *(int *)(lVar1 + 4);
      } while (iVar3 != -1);
    }
  }
  return (uchar *)0x0;
}

