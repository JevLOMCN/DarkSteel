// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// TSparseMap<FString,int,FDefaultSparseSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> @ 141582630

TSparseMap<FString,int,FDefaultSparseSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *
__thiscall
TSparseMap<FString,int,FDefaultSparseSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
TSparseMap<FString,int,FDefaultSparseSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          (TSparseMap<FString,int,FDefaultSparseSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
           *this,initializer_list<TPairInitializer<FString_const_&,int_const_&>_> *param_1)

{
  TPairInitializer<FString_const_&,int_const_&> *pTVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  TPairInitializer<FString_const_&,int_const_&> *pTVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  FString *local_68;
  int *local_60;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar7 = 0;
  pTVar9 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  uVar10 = (uint)((longlong)pTVar1 - (longlong)pTVar9 >> 4);
  if (uVar10 == 0) goto joined_r0x000141582817;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar10);
  if (uVar10 < 4) {
    uVar10 = 1;
  }
  else {
    uVar13 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((*(int *)&this->field_0x48 != 0) && ((int)uVar10 <= *(int *)&this->field_0x48))
  goto joined_r0x000141582817;
  *(uint *)&this->field_0x48 = uVar10;
  if (*(longlong *)&this->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x40,0,0,4);
  }
  if (uVar10 != 0) {
    uVar12 = uVar10;
    if (uVar10 < 2) {
      if (*(longlong *)&this->field_0x40 != 0) {
        uVar12 = 0;
        goto LAB_141582705;
      }
    }
    else {
LAB_141582705:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x40,0,uVar12,4);
    }
    if (0 < (int)uVar10) {
      uVar13 = (ulonglong)uVar10;
      do {
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar4 = uVar7 & (longlong)(int)uVar10 - 1U;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(puVar6 + uVar4 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if ((*(int *)&this->field_0x48 != 0) &&
     (TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TConstIterator::TConstIterator
                ((TConstIterator *)&local_58,
                 (TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this), local_50.CurrentBitIndex < (local_50.Array)->NumBits)) {
    do {
      iVar3 = local_50.CurrentBitIndex;
      puVar11 = (undefined8 *)((longlong)local_50.CurrentBitIndex * 0x20 + *local_58);
      if (*(int *)(puVar11 + 1) == 0) {
        pwVar8 = L"";
        iVar5 = 0;
      }
      else {
        pwVar8 = (wchar_t *)*puVar11;
        iVar5 = *(int *)(puVar11 + 1) + -1;
      }
      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
      uVar10 = *(int *)&this->field_0x48 - 1U & uVar10;
      *(uint *)((longlong)puVar11 + 0x1c) = uVar10;
      puVar6 = &this->field_0x38;
      if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)&this->field_0x40;
      }
      uVar7 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar10;
      *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(puVar6 + uVar7 * 4);
      *(int *)(puVar6 + uVar7 * 4) = iVar3;
      local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
  }
joined_r0x000141582817:
  for (; pTVar9 != pTVar1; pTVar9 = pTVar9 + 1) {
    local_68 = pTVar9->Key;
    local_60 = pTVar9->Value;
    TSparseSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSparseSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,int_const_&>_>
              ((TSparseSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSparseSetAllocator>
                *)this,(TPairInitializer<FString_const_&,int_const_&> *)&stack0x00000008,
               (bool *)&local_68);
  }
  return this;
}

