// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 4

// TMap<FRigVMGraphFunctionIdentifier,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>_> @ 14a0bc870

TMap<FRigVMGraphFunctionIdentifier,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>_>
* __thiscall
TMap<FRigVMGraphFunctionIdentifier,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>_>
::
TMap<FRigVMGraphFunctionIdentifier,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>_>
          (TMap<FRigVMGraphFunctionIdentifier,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>_>
           *this,TMap<FRigVMGraphFunctionIdentifier,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->field_0x38,(int *)&this->field_0x48,
               (ForElementType<FSetElementId> *)&param_1->field_0x38,*(int *)&param_1->field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this,(TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_1);
  }
  return this;
}

// TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> @ 14a18a9f0

TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> * __thiscall
TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
          (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *this,
          initializer_list<TPairInitializer<FName_const_&,FName_const_&>_> *param_1)

{
  TPairInitializer<FName_const_&,FName_const_&> *pTVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  TPairInitializer<FName_const_&,FName_const_&> *pTVar13;
  undefined8 local_78;
  FName *pFStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar7 = 0;
  pTVar13 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  uVar10 = (uint)((longlong)pTVar1 - (longlong)pTVar13 >> 4);
  if (uVar10 == 0) goto joined_r0x00014a18ac61;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar10);
  if (uVar10 < 4) {
    uVar10 = 1;
  }
  else {
    uVar8 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((*(int *)&this->field_0x48 != 0) && ((int)uVar10 <= *(int *)&this->field_0x48))
  goto joined_r0x00014a18ac61;
  *(uint *)&this->field_0x48 = uVar10;
  if (*(longlong *)&this->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x40,0,0,4);
  }
  if (uVar10 != 0) {
    uVar5 = uVar10;
    if (uVar10 < 2) {
      if (*(longlong *)&this->field_0x40 != 0) {
        uVar5 = 0;
        goto LAB_14a18aacb;
      }
    }
    else {
LAB_14a18aacb:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x40,0,uVar5,4);
    }
    if (0 < (int)uVar10) {
      uVar11 = (ulonglong)uVar10;
      uVar8 = uVar7;
      do {
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar4 = uVar8 & (longlong)(int)uVar10 - 1U;
        uVar8 = uVar8 + 1;
        *(undefined4 *)(puVar6 + uVar4 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  if (*(int *)&this->field_0x48 != 0) {
    uVar10 = *(uint *)&this->field_0x28;
    pFStack_70 = (FName *)&this->field_0x10;
    local_78 = (FName *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar10 != 0) {
      puVar12 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar12 = (uint *)pFStack_70;
      }
      uVar5 = *puVar12;
      uVar8 = uVar7;
      while (uVar5 == 0) {
        iVar9 = (int)uVar7;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uVar5 = iVar9 + 1;
        uVar7 = (ulonglong)local_78 >> 0x20;
        local_78 = (FName *)CONCAT44((int)uVar7,uVar5);
        uVar7 = (ulonglong)uVar5;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar5)
        goto LAB_14a18abbb;
        uVar5 = puVar12[(longlong)iVar9 + 1];
      }
      local_78 = (FName *)CONCAT44(-uVar5 & uVar5,SUB84(local_78,0));
      uVar7 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar10 < (int)uStack_64) {
LAB_14a18abbb:
        uVar7 = (ulonglong)uVar10;
        uStack_64 = uVar10;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)pFStack_70;
    if ((int)uVar7 < (int)uVar10) {
      do {
        iVar9 = (int)uVar7;
        uVar2 = *(undefined8 *)(*(longlong *)local_58 + (longlong)iVar9 * 0x18);
        lVar3 = *(longlong *)local_58 + (longlong)iVar9 * 0x18;
        uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar10 = *(int *)&this->field_0x48 - 1U & uVar10 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)(lVar3 + 0x14) = uVar10;
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar7 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(puVar6 + uVar7 * 4);
        *(int *)(puVar6 + uVar7 * 4) = iVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar7 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014a18ac61:
  for (; pTVar13 != pTVar1; pTVar13 = pTVar13 + 1) {
    local_78 = pTVar13->Key;
    pFStack_70 = pTVar13->Value;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
              ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FName_const_&,FName_const_&> *)&stack0x00000008,
               (bool *)&local_78);
  }
  return this;
}

// TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_> @ 14a18acd0

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
::
TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
           *this,TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&this->field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    if (&this->field_0x10 != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(&this->field_0x10,&param_1->field_0x10,0x10);
      }
      if (*(void **)&this->field_0x20 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x20);
      }
      *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&this->field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  return this;
}

// TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_> @ 14a18adf0

TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
* __thiscall
TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
::
TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
          (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
           *this,initializer_list<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_> *param_1
          )

{
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *pTVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *pTVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int iVar14;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar12 = 0;
  pTVar7 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  uVar9 = (uint)((longlong)pTVar1 - (longlong)pTVar7 >> 4);
  if (uVar9 == 0) goto joined_r0x00014a18b05f;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar9);
  if (uVar9 < 4) {
    uVar9 = 1;
  }
  else {
    uVar6 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar9 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((*(int *)&this->field_0x48 != 0) && ((int)uVar9 <= *(int *)&this->field_0x48))
  goto joined_r0x00014a18b05f;
  *(uint *)&this->field_0x48 = uVar9;
  if (*(longlong *)&this->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x40,0,0,4);
  }
  if (uVar9 != 0) {
    uVar10 = uVar9;
    if (uVar9 < 2) {
      if (*(longlong *)&this->field_0x40 != 0) {
        uVar10 = 0;
        goto LAB_14a18aecf;
      }
    }
    else {
LAB_14a18aecf:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x40,0,uVar10,4);
    }
    if (0 < (int)uVar9) {
      uVar11 = (ulonglong)uVar9;
      uVar6 = uVar12;
      do {
        puVar5 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)&this->field_0x40;
        }
        uVar4 = uVar6 & (longlong)(int)uVar9 - 1U;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(puVar5 + uVar4 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  if (*(int *)&this->field_0x48 != 0) {
    uVar9 = *(uint *)&this->field_0x28;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar9 != 0) {
      puVar13 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar13 = (uint *)local_50.Array;
      }
      uVar10 = *puVar13;
      uVar6 = uVar12;
      while (uVar10 == 0) {
        iVar14 = (int)uVar6;
        uStack_60 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_60;
        local_78 = iVar14 + 1;
        uVar6 = (ulonglong)local_78;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_14a18afbd;
        uVar10 = puVar13[(longlong)iVar14 + 1];
      }
      uStack_74 = -uVar10 & uVar10;
      uVar12 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar12 = (ulonglong)uStack_64;
      if ((int)uVar9 < (int)uStack_64) {
LAB_14a18afbd:
        uVar12 = (ulonglong)uVar9;
        uStack_64 = uVar9;
      }
    }
    local_50._padding_ = CONCAT44(uStack_74,local_78);
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar12 < (int)uVar9) {
      do {
        puVar8 = (undefined8 *)((longlong)(int)uVar12 * 0x1c + *(longlong *)this);
        uVar2 = *puVar8;
        uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar9 = *(int *)&this->field_0x48 - 1U & uVar9 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)(puVar8 + 3) = uVar9;
        puVar5 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)&this->field_0x40;
        }
        uVar6 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)((longlong)puVar8 + 0x14) = *(undefined4 *)(puVar5 + uVar6 * 4);
        *(int *)(puVar5 + uVar6 * 4) = (int)uVar12;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar12 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014a18b05f:
  for (; pTVar7 != pTVar1; pTVar7 = pTVar7 + 1) {
    TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
    ::Emplace<FName_const_&,TRigVMTypeIndex_const_&>
              ((TMapBase<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)this,pTVar7->Key,pTVar7->Value);
  }
  return this;
}

