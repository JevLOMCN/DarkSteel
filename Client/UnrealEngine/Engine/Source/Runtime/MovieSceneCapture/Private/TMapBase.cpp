// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 1

// OrderIndependentCompareEqual @ 146be4db0

bool __thiscall
TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
OrderIndependentCompareEqual
          (TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
           *this,TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  FName *pFVar5;
  longlong lVar6;
  uint *puVar7;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34 ==
      *(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34)
  {
    iStack_38 = 0;
    iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
    uStack_34 = 1;
    iStack_24 = iStack_38;
    local_20 = iStack_38;
    if (iVar2 != 0) {
      puVar7 = *(uint **)&(this->Pairs).Elements.field_0x20;
      if (puVar7 == (uint *)0x0) {
        puVar7 = (uint *)TStack_60.Array;
      }
      uVar3 = *puVar7;
      while (uVar3 == 0) {
        lVar6 = (longlong)iStack_38;
        local_20 = local_20 + 0x20;
        iStack_38 = iStack_38 + 1;
        iStack_24 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_146be4e6a;
        uVar3 = puVar7[lVar6 + 1];
      }
      uStack_34 = -uVar3 & uVar3;
      uVar1 = (ulonglong)uStack_34 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_24 = local_20 + -1 + (int)lVar6;
      if (iVar2 < iStack_24) {
        iStack_24 = iVar2;
      }
    }
LAB_146be4e6a:
    uStack_28 = 0xffffffff;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iStack_1c = TStack_60.CurrentBitIndex;
    TStack_60._28_4_ = TStack_60.CurrentBitIndex;
    TStack_60.BaseBitIndex = local_20;
    local_40 = this;
    local_30 = (undefined1 *)TStack_60.Array;
    TStack_60._padding_._0_4_ = iStack_38;
    TStack_60._padding_._4_4_ = uStack_34;
    TStack_60.CurrentBitIndex = iStack_24;
    if (iStack_24 < *(int *)&(this->Pairs).Elements.field_0x28) {
      do {
        iVar2 = TStack_60.CurrentBitIndex;
        pFVar5 = Find(param_1,*(FName *)(*(longlong *)&(this->Pairs).Elements +
                                        (longlong)TStack_60.CurrentBitIndex * 0x18));
        if ((pFVar5 == (FName *)0x0) ||
           (*pFVar5 != *(FName *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)iVar2 * 0x18)
           )) goto LAB_146be4f2c;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
    bVar4 = true;
  }
  else {
LAB_146be4f2c:
    bVar4 = false;
  }
  return bVar4;
}

