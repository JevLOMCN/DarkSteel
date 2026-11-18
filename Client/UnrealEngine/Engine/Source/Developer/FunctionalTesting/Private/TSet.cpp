// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 1

// Find @ 148c8e8d0

TTuple<FName,TStatMessage<EComplexStatField>_const_*> * __thiscall
TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<FName,TStatMessage<EComplexStatField>_const_*>,TDefaultMapHashableKeyFuncs<FName,TStatMessage<EComplexStatField>_const_*,0>,FDefaultSetAllocator>
       *this,FName param_1)

{
  TTuple<FName,TStatMessage<EComplexStatField>_const_*> *pTVar1;
  uint uVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1.Number + uVar2) * 4
                    );
    if (iVar3 != -1) {
      do {
        pTVar1 = (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)
                 (*(longlong *)&this->Elements + (longlong)iVar3 * 0x18);
        if (*(FName *)(*(longlong *)&this->Elements + (longlong)iVar3 * 0x18) == param_1) {
          return pTVar1;
        }
        iVar3 = *(int *)(pTVar1 + 1);
      } while (iVar3 != -1);
    }
  }
  return (TTuple<FName,TStatMessage<EComplexStatField>_const_*> *)0x0;
}

