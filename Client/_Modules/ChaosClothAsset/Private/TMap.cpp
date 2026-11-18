// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 1

// TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_> @ 14db3a630

TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
::
TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
          (TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           *this,initializer_list<TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&>_>
                 *param_1)

{
  TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&> *pTVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&> *pTVar14;
  undefined8 local_78;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar9 = 0;
  pTVar14 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  uVar11 = (uint)((longlong)pTVar1 - (longlong)pTVar14 >> 4);
  if (uVar11 == 0) goto joined_r0x00014db3a89c;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar11);
  if (uVar11 < 4) {
    uVar11 = 1;
  }
  else {
    uVar7 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((*(int *)&this->field_0x48 != 0) && ((int)uVar11 <= *(int *)&this->field_0x48))
  goto joined_r0x00014db3a89c;
  *(uint *)&this->field_0x48 = uVar11;
  if (*(longlong *)&this->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x40,0,0,4);
  }
  if (uVar11 != 0) {
    uVar5 = uVar11;
    if (uVar11 < 2) {
      if (*(longlong *)&this->field_0x40 != 0) {
        uVar5 = 0;
        goto LAB_14db3a70b;
      }
    }
    else {
LAB_14db3a70b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x40,0,uVar5,4);
    }
    if (0 < (int)uVar11) {
      uVar12 = (ulonglong)uVar11;
      uVar7 = uVar9;
      do {
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar4 = uVar7 & (longlong)(int)uVar11 - 1U;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(puVar6 + uVar4 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  if (*(int *)&this->field_0x48 != 0) {
    uVar11 = *(uint *)&this->field_0x28;
    pTStack_70 = (TArray<FName,TSizedDefaultAllocator<32>_> *)&this->field_0x10;
    local_78 = (FName *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar11 != 0) {
      puVar13 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar13 = (uint *)pTStack_70;
      }
      uVar5 = *puVar13;
      uVar7 = uVar9;
      while (uVar5 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uVar5 = iVar8 + 1;
        uVar9 = (ulonglong)local_78 >> 0x20;
        local_78 = (FName *)CONCAT44((int)uVar9,uVar5);
        uVar9 = (ulonglong)uVar5;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar5)
        goto LAB_14db3a7fb;
        uVar5 = puVar13[(longlong)iVar8 + 1];
      }
      local_78 = (FName *)CONCAT44(-uVar5 & uVar5,SUB84(local_78,0));
      uVar9 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar11 < (int)uStack_64) {
LAB_14db3a7fb:
        uVar9 = (ulonglong)uVar11;
        uStack_64 = uVar11;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTStack_70;
    if ((int)uVar9 < (int)uVar11) {
      do {
        puVar10 = (undefined8 *)((longlong)(int)uVar9 * 0x20 + *(longlong *)local_58);
        uVar2 = *puVar10;
        uVar11 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar11 = *(int *)&this->field_0x48 - 1U & uVar11 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)((longlong)puVar10 + 0x1c) = uVar11;
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar7 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(puVar6 + uVar7 * 4);
        *(int *)(puVar6 + uVar7 * 4) = (int)uVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar9 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014db3a89c:
  for (; pTVar14 != pTVar1; pTVar14 = pTVar14 + 1) {
    local_78 = pTVar14->Key;
    pTStack_70 = pTVar14->Value;
    TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&>_>
              ((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FName_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&>
                        *)&stack0x00000008,(bool *)&local_78);
  }
  return this;
}

