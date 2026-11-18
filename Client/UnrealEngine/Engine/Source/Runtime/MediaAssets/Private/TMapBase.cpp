// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 1

// Find @ 146c27780

FVariant * __thiscall
TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>::Find
          (TMapBase<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_>
           *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FVariant *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x28;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x28) == param_1) {
          pFVar5 = (FVariant *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FVariant *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  return (FVariant *)0x0;
}

