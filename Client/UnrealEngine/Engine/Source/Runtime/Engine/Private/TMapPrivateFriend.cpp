// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Serialize<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_> @ 1482d7aa0

FArchive * __cdecl
TMapPrivateFriend::
Serialize<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
          (FArchive *param_1,
          TMapBase<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
          *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  operator<<<TSparseSetElement<TTuple<FRigidBodyIndexPair,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,(TSparseArray<TSparseSetElement<TTuple<FRigidBodyIndexPair,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)param_2);
  if (((param_1->field_0x28 & 1) != 0) ||
     (((param_1->field_0x2b & 2) != 0 && ((param_1->field_0x28 & 4) == 0)))) {
    if ((param_2->Pairs).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(param_2->Pairs).Hash.SecondaryData,0,0,4);
    }
    (param_2->Pairs).HashSize = 0;
    uVar4 = *(int *)&(param_2->Pairs).Elements.field_0x8 -
            *(int *)&(param_2->Pairs).Elements.field_0x34;
    if (uVar4 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((0 < (int)uVar4) && (0 < iVar3)) {
      (param_2->Pairs).HashSize = iVar3;
      TSet<TTuple<FRigidBodyIndexPair,bool>,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>,FDefaultSetAllocator>
      ::Rehash(&param_2->Pairs);
    }
  }
  return param_1;
}

