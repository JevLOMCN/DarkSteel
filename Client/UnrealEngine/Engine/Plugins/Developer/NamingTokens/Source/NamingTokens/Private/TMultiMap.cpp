// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokens
// Functions: 1

// TMultiMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,1>_> @ 14d0d42d0

TMultiMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,1>_> *
__thiscall
TMultiMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,1>_>::
TMultiMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,1>_>
          (TMultiMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,1>_>
           *this,initializer_list<TPairInitializer<FName_const_&,FString_const_&>_> *param_1)

{
  int iVar1;
  TPairInitializer<FName_const_&,FString_const_&> *pTVar2;
  undefined8 uVar3;
  FName *pFVar4;
  FString *pFVar5;
  FName FVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  byte bVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint *puVar21;
  TPairInitializer<FName_const_&,FString_const_&> *pTVar22;
  FSparseArrayAllocationInfo local_88;
  uint local_78;
  uint uStack_74;
  undefined1 *puStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMultiMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,1>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar2 = param_1->_Last;
  pTVar22 = param_1->_First;
  uVar15 = 0;
  *(undefined8 *)this = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  *(undefined4 *)&this->field_0xc = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  uVar18 = (uint)((longlong)pTVar2 - (longlong)pTVar22 >> 4);
  if (uVar18 == 0) goto joined_r0x00014d0d454f;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar18);
  if (uVar18 < 4) {
    uVar18 = 1;
  }
  else {
    uVar14 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar18 = 1 << ((byte)lVar16 & 0x1f);
  }
  if ((*(int *)&this->field_0x48 != 0) && ((int)uVar18 <= *(int *)&this->field_0x48))
  goto joined_r0x00014d0d454f;
  *(uint *)&this->field_0x48 = uVar18;
  if (*(longlong *)&this->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x40,0,0,4);
  }
  if (uVar18 != 0) {
    uVar13 = uVar18;
    if (uVar18 < 2) {
      if (*(longlong *)&this->field_0x40 != 0) {
        uVar13 = 0;
        goto LAB_14d0d43ba;
      }
    }
    else {
LAB_14d0d43ba:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x40,0,uVar13,4);
    }
    if (0 < (int)uVar18) {
      uVar20 = (ulonglong)uVar18;
      uVar14 = uVar15;
      do {
        puVar12 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar12 = *(undefined1 **)&this->field_0x40;
        }
        uVar10 = uVar14 & (longlong)(int)uVar18 - 1U;
        uVar14 = uVar14 + 1;
        *(undefined4 *)(puVar12 + uVar10 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  if (*(int *)&this->field_0x48 != 0) {
    uVar18 = *(uint *)&this->field_0x28;
    puStack_70 = &this->field_0x10;
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar18 != 0) {
      puVar21 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar21 = (uint *)puStack_70;
      }
      uVar13 = *puVar21;
      uVar14 = uVar15;
      while (uVar13 == 0) {
        uStack_60 = (int)uVar14 + 0x20;
        uVar14 = (ulonglong)uStack_60;
        iVar8 = (int)uVar15;
        local_78 = iVar8 + 1;
        uVar15 = (ulonglong)local_78;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_14d0d44a9;
        uVar13 = puVar21[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar15 = (ulonglong)uStack_74 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uStack_64 = (int)lVar16 + -1 + uStack_60;
      uVar15 = (ulonglong)uStack_64;
      if ((int)uVar18 < (int)uStack_64) {
LAB_14d0d44a9:
        uVar15 = (ulonglong)uVar18;
        uStack_64 = uVar18;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_ = CONCAT44(uStack_74,local_78);
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_58 = this;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_70;
    if ((int)uVar15 < (int)uVar18) {
      do {
        puVar17 = (undefined8 *)((longlong)(int)uVar15 * 0x20 + *(longlong *)local_58);
        uVar3 = *puVar17;
        uVar18 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar18 = *(int *)&this->field_0x48 - 1U & uVar18 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar17 + 0x1c) = uVar18;
        puVar12 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar12 = *(undefined1 **)&this->field_0x40;
        }
        uVar14 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar18;
        *(undefined4 *)(puVar17 + 3) = *(undefined4 *)(puVar12 + uVar14 * 4);
        *(int *)(puVar12 + uVar14 * 4) = (int)uVar15;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar15 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014d0d454f:
  do {
    if (pTVar22 == pTVar2) {
      return this;
    }
    pFVar4 = pTVar22->Key;
    pFVar5 = pTVar22->Value;
    if (*(int *)&this->field_0x34 == 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,1,(ForAnyElementType *)this,(int *)&this->field_0x8,
                         (int *)&this->field_0xc);
      iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,1);
      puVar12 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar12 = *(undefined1 **)&this->field_0x20;
      }
      bVar11 = (byte)iVar9 & 0x1f;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0x1f;
        bVar11 = bVar11 - 0x20;
      }
      *(uint *)(puVar12 + (longlong)(iVar9 >> 5) * 4) =
           *(uint *)(puVar12 + (longlong)(iVar9 >> 5) * 4) & ~(1 << (bVar11 & 0x1f));
    }
    else {
      iVar8 = *(int *)&this->field_0x30;
      iVar1 = *(int *)((longlong)iVar8 * 0x20 + 4 + *(longlong *)this);
      iVar9 = *(int *)&this->field_0x34 + -1;
      *(int *)&this->field_0x30 = iVar1;
      *(int *)&this->field_0x34 = iVar9;
      if (iVar9 != 0) {
        *(undefined4 *)((longlong)iVar1 * 0x20 + *(longlong *)this) = 0xffffffff;
      }
    }
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,&local_88,iVar8);
    pvVar7 = local_88.Pointer;
    if (local_88.Pointer != (FName *)0x0) {
      *(FName *)local_88.Pointer = *pFVar4;
      ::FString::FString((FString *)((longlong)local_88.Pointer + 8),pFVar5);
      (((FName *)((longlong)pvVar7 + 0x18))->ComparisonIndex).Value = 0xffffffff;
    }
    FVar6 = *(FName *)pvVar7;
    uVar18 = ::GetTypeHash(FVar6.ComparisonIndex.Value);
    uVar13 = *(int *)&this->field_0x8 - *(int *)&this->field_0x34;
    uVar19 = 1;
    if (3 < uVar13) {
      uVar15 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar19 = 1 << ((byte)lVar16 & 0x1f);
    }
    if (((int)uVar13 < 1) || ((int)uVar19 <= *(int *)&this->field_0x48)) {
      uVar18 = *(int *)&this->field_0x48 - 1U & FVar6.Number + uVar18;
      ((FName *)((longlong)pvVar7 + 0x18))->Number = uVar18;
      puVar12 = &this->field_0x38;
      if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
        puVar12 = *(undefined1 **)&this->field_0x40;
      }
      uVar15 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar18;
      (((FName *)((longlong)pvVar7 + 0x18))->ComparisonIndex).Value =
           *(uint *)(puVar12 + uVar15 * 4);
      *(int *)(puVar12 + uVar15 * 4) = local_88.Index;
    }
    else {
      *(uint *)&this->field_0x48 = uVar19;
      if (*(longlong *)&this->field_0x40 != 0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&this->field_0x40,0,0,4);
      }
      if (uVar19 != 0) {
        uVar18 = uVar19;
        if (uVar19 < 2) {
          if (*(longlong *)&this->field_0x40 != 0) {
            uVar18 = 0;
            goto LAB_14d0d46b4;
          }
        }
        else {
LAB_14d0d46b4:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&this->field_0x40,0,uVar18,4);
        }
        if (0 < (int)uVar19) {
          uVar14 = (ulonglong)uVar19;
          uVar15 = 0;
          do {
            puVar12 = &this->field_0x38;
            if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
              puVar12 = *(undefined1 **)&this->field_0x40;
            }
            uVar20 = uVar15 & (longlong)(int)uVar19 - 1U;
            uVar15 = uVar15 + 1;
            *(undefined4 *)(puVar12 + uVar20 * 4) = 0xffffffff;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
      if (*(int *)&this->field_0x48 != 0) {
        uVar18 = *(uint *)&this->field_0x28;
        puStack_70 = &this->field_0x10;
        uStack_74 = 1;
        local_78 = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_70;
        if (uVar18 != 0) {
          puVar21 = (uint *)puStack_70;
          if (*(uint **)&this->field_0x20 != (uint *)0x0) {
            puVar21 = *(uint **)&this->field_0x20;
          }
          uVar13 = *puVar21;
          uStack_60 = 0;
          local_78 = 0;
          while (uVar13 == 0) {
            uStack_60 = uStack_60 + 0x20;
            lVar16 = (longlong)(int)local_78;
            local_78 = local_78 + 1;
            if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
            goto LAB_14d0d47a9;
            uVar13 = puVar21[lVar16 + 1];
          }
          uStack_74 = -uVar13 & uVar13;
          uVar15 = (ulonglong)uStack_74 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uStack_64 = (int)lVar16 + -1 + uStack_60;
          if ((int)uVar18 < (int)uStack_64) {
LAB_14d0d47a9:
            local_68 = 0xffffffff;
            local_50._padding_ = CONCAT44(uStack_74,local_78);
            local_50.CurrentBitIndex = uVar18;
            local_50.UnvisitedBitMask = 0xffffffff;
            local_50._28_4_ = uStack_5c;
            local_50.BaseBitIndex = uStack_60;
            uStack_64 = uVar18;
            local_58 = this;
            goto LAB_14d0d489a;
          }
        }
        local_68 = 0xffffffff;
        local_50._padding_ = CONCAT44(uStack_74,local_78);
        local_50.CurrentBitIndex = uStack_64;
        local_50.UnvisitedBitMask = 0xffffffff;
        local_50._28_4_ = uStack_5c;
        local_50.BaseBitIndex = uStack_60;
        uVar13 = uStack_64;
        local_58 = this;
        if ((int)uStack_64 < (int)uVar18) {
          do {
            puVar17 = (undefined8 *)((longlong)(int)uVar13 * 0x20 + *(longlong *)local_58);
            uVar3 = *puVar17;
            uVar18 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
            uVar18 = *(int *)&this->field_0x48 - 1U & uVar18 + (int)((ulonglong)uVar3 >> 0x20);
            *(uint *)((longlong)puVar17 + 0x1c) = uVar18;
            puVar12 = &this->field_0x38;
            if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
              puVar12 = *(undefined1 **)&this->field_0x40;
            }
            uVar15 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar18;
            *(undefined4 *)(puVar17 + 3) = *(undefined4 *)(puVar12 + uVar15 * 4);
            *(uint *)(puVar12 + uVar15 * 4) = uVar13;
            local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
            uVar13 = local_50.CurrentBitIndex;
          } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
        }
      }
    }
LAB_14d0d489a:
    pTVar22 = pTVar22 + 1;
  } while( true );
}

