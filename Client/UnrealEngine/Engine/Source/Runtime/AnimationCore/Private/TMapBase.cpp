// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 1

// Find @ 142382ae0

TWeakObjectPtr<UObject,FWeakObjectPtr> * __thiscall
TMapBase<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
::Find(TMapBase<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar5;
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
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pTVar5 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
}

