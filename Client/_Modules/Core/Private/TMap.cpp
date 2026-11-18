// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> @ 14157e6e0

TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> * __thiscall
TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          (TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *this,
          initializer_list<TPairInitializer<FString_const_&,int_const_&>_> *param_1)

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
  if (uVar10 == 0) goto joined_r0x00014157e8c7;
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
  goto joined_r0x00014157e8c7;
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
        goto LAB_14157e7b5;
      }
    }
    else {
LAB_14157e7b5:
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
joined_r0x00014157e8c7:
  for (; pTVar9 != pTVar1; pTVar9 = pTVar9 + 1) {
    local_68 = pTVar9->Key;
    local_60 = pTVar9->Value;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_const_&,int_const_&>_>
              ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FString_const_&,int_const_&> *)&stack0x00000008,
               (bool *)&local_68);
  }
  return this;
}

// TMap<FString,enum_OodleLZ_CompressionLevel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_OodleLZ_CompressionLevel,0>_> @ 14157e930

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

TMap<FString,OodleLZ_CompressionLevel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,OodleLZ_CompressionLevel,0>_>
* __thiscall
TMap<FString,enum_OodleLZ_CompressionLevel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_OodleLZ_CompressionLevel,0>_>
::
TMap<FString,enum_OodleLZ_CompressionLevel,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_OodleLZ_CompressionLevel,0>_>
          (void *this,
          initializer_list<TPairInitializer<FString_const_&,OodleLZ_CompressionLevel_const_&>_>
          *param_1)

{
  TPairInitializer<FString_const_&,OodleLZ_CompressionLevel_const_&> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar7;
  wchar_t *pwVar8;
  TPairInitializer<FString_const_&,OodleLZ_CompressionLevel_const_&> *pTVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  ulonglong uVar6;
  
  pTVar1 = param_1->_Last;
  uVar6 = 0;
  pTVar9 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  uVar10 = (uint)((longlong)pTVar1 - (longlong)pTVar9 >> 4);
  if (uVar10 == 0) goto joined_r0x00014157ebb2;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(this,uVar10);
  if (uVar10 < 4) {
    uVar10 = 1;
  }
  else {
    uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((*(int *)((longlong)this + 0x48) != 0) && ((int)uVar10 <= *(int *)((longlong)this + 0x48)))
  goto joined_r0x00014157ebb2;
  *(uint *)((longlong)this + 0x48) = uVar10;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  if (uVar10 != 0) {
    uVar4 = uVar10;
    if (uVar10 < 2) {
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        uVar4 = 0;
        goto LAB_14157ea0d;
      }
    }
    else {
LAB_14157ea0d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 0x40),0,uVar4,4);
    }
    if (0 < (int)uVar10) {
      uVar12 = (ulonglong)uVar10;
      uVar7 = uVar6;
      do {
        lVar5 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar5 = *(longlong *)((longlong)this + 0x40);
        }
        uVar2 = uVar7 & (longlong)(int)uVar10 - 1U;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(lVar5 + uVar2 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  if (*(int *)((longlong)this + 0x48) != 0) {
    uVar10 = *(uint *)((longlong)this + 0x28);
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_78 = (FString *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar10 != 0) {
      pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = pTStack_70;
      }
      uVar4 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
      uVar7 = uVar6;
      while (uVar4 == 0) {
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        iVar3 = (int)uVar6;
        uVar4 = iVar3 + 1;
        uVar6 = (ulonglong)uVar4;
        uVar12 = (ulonglong)local_78 >> 0x20;
        local_78 = (FString *)CONCAT44((int)uVar12,uVar4);
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar4)
        goto LAB_14157eaf9;
        uVar4 = *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar3 * 4 + 4);
      }
      local_78 = (FString *)CONCAT44(-uVar4 & uVar4,SUB84(local_78,0));
      uVar6 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_64 = (int)lVar5 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar10 < (int)uStack_64) {
LAB_14157eaf9:
        uVar6 = (ulonglong)uVar10;
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
    local_50.Array = pTStack_70;
    if ((int)uVar6 < (int)uVar10) {
      do {
        puVar11 = (undefined8 *)((longlong)(int)uVar6 * 0x20 + *local_58);
        iVar3 = *(int *)(puVar11 + 1) + -1;
        if (*(int *)(puVar11 + 1) == 0) {
          pwVar8 = L"";
          iVar3 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar11;
        }
        uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar8);
        uVar10 = *(int *)((longlong)this + 0x48) - 1U & uVar10;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar10;
        lVar5 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar5 = *(longlong *)((longlong)this + 0x40);
        }
        uVar7 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(lVar5 + uVar7 * 4);
        *(int *)(lVar5 + uVar7 * 4) = (int)uVar6;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar6 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014157ebb2:
  for (; pTVar9 != pTVar1; pTVar9 = pTVar9 + 1) {
    local_78 = pTVar9->Key;
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar9->Value;
    TSet<TTuple<FString,enum_OodleLZ_CompressionLevel>,TDefaultMapHashableKeyFuncs<FString,enum_OodleLZ_CompressionLevel,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,enum_OodleLZ_CompressionLevel_const_&>_>
              (this,(TPairInitializer<FString_const_&,OodleLZ_CompressionLevel_const_&> *)
                    &stack0x00000008,(bool *)&local_78);
  }
  return this;
}

// TMap<FString,enum_OodleLZ_Compressor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_OodleLZ_Compressor,0>_> @ 14157ec20

TMap<FString,OodleLZ_Compressor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,OodleLZ_Compressor,0>_>
* __thiscall
TMap<FString,enum_OodleLZ_Compressor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_OodleLZ_Compressor,0>_>
::
TMap<FString,enum_OodleLZ_Compressor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_OodleLZ_Compressor,0>_>
          (void *this,
          initializer_list<TPairInitializer<FString_const_&,OodleLZ_Compressor_const_&>_> *param_1)

{
  TPairInitializer<FString_const_&,OodleLZ_Compressor_const_&> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar7;
  wchar_t *pwVar8;
  TPairInitializer<FString_const_&,OodleLZ_Compressor_const_&> *pTVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  ulonglong uVar6;
  
  pTVar1 = param_1->_Last;
  uVar6 = 0;
  pTVar9 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  uVar10 = (uint)((longlong)pTVar1 - (longlong)pTVar9 >> 4);
  if (uVar10 == 0) goto joined_r0x00014157eea2;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(this,uVar10);
  if (uVar10 < 4) {
    uVar10 = 1;
  }
  else {
    uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((*(int *)((longlong)this + 0x48) != 0) && ((int)uVar10 <= *(int *)((longlong)this + 0x48)))
  goto joined_r0x00014157eea2;
  *(uint *)((longlong)this + 0x48) = uVar10;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  if (uVar10 != 0) {
    uVar4 = uVar10;
    if (uVar10 < 2) {
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        uVar4 = 0;
        goto LAB_14157ecfd;
      }
    }
    else {
LAB_14157ecfd:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 0x40),0,uVar4,4);
    }
    if (0 < (int)uVar10) {
      uVar12 = (ulonglong)uVar10;
      uVar7 = uVar6;
      do {
        lVar5 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar5 = *(longlong *)((longlong)this + 0x40);
        }
        uVar2 = uVar7 & (longlong)(int)uVar10 - 1U;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(lVar5 + uVar2 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  if (*(int *)((longlong)this + 0x48) != 0) {
    uVar10 = *(uint *)((longlong)this + 0x28);
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_78 = (FString *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar10 != 0) {
      pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = pTStack_70;
      }
      uVar4 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
      uVar7 = uVar6;
      while (uVar4 == 0) {
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        iVar3 = (int)uVar6;
        uVar4 = iVar3 + 1;
        uVar6 = (ulonglong)uVar4;
        uVar12 = (ulonglong)local_78 >> 0x20;
        local_78 = (FString *)CONCAT44((int)uVar12,uVar4);
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar4)
        goto LAB_14157ede9;
        uVar4 = *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar3 * 4 + 4);
      }
      local_78 = (FString *)CONCAT44(-uVar4 & uVar4,SUB84(local_78,0));
      uVar6 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_64 = (int)lVar5 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar10 < (int)uStack_64) {
LAB_14157ede9:
        uVar6 = (ulonglong)uVar10;
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
    local_50.Array = pTStack_70;
    if ((int)uVar6 < (int)uVar10) {
      do {
        puVar11 = (undefined8 *)((longlong)(int)uVar6 * 0x20 + *local_58);
        iVar3 = *(int *)(puVar11 + 1) + -1;
        if (*(int *)(puVar11 + 1) == 0) {
          pwVar8 = L"";
          iVar3 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar11;
        }
        uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar8);
        uVar10 = *(int *)((longlong)this + 0x48) - 1U & uVar10;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar10;
        lVar5 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar5 = *(longlong *)((longlong)this + 0x40);
        }
        uVar7 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(lVar5 + uVar7 * 4);
        *(int *)(lVar5 + uVar7 * 4) = (int)uVar6;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar6 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014157eea2:
  for (; pTVar9 != pTVar1; pTVar9 = pTVar9 + 1) {
    local_78 = pTVar9->Key;
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar9->Value;
    TSet<TTuple<FString,enum_OodleLZ_Compressor>,TDefaultMapHashableKeyFuncs<FString,enum_OodleLZ_Compressor,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,enum_OodleLZ_Compressor_const_&>_>
              (this,(TPairInitializer<FString_const_&,OodleLZ_Compressor_const_&> *)&stack0x00000008
               ,(bool *)&local_78);
  }
  return this;
}

// RemoveAndCopyValue @ 14170bd10

bool __thiscall
TMap<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
::RemoveAndCopyValue
          (TMap<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
           *this,void *param_1,TrackedAllocationData *param_2)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar10 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar10 = *(uint *)(puVar7 + (ulonglong)
                                (*(int *)&this->field_0x48 - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
    if (uVar10 != 0xffffffff) {
      do {
        lVar9 = (longlong)(int)uVar10 * 0x20;
        lVar1 = lVar9 + *(longlong *)this;
        if (*(void **)(lVar9 + *(longlong *)this) == param_1) {
          uVar4 = *(undefined8 *)(lVar1 + 0x10);
          param_2->Size = *(ulong64 *)(lVar1 + 8);
          *(undefined8 *)&param_2->CallStackIndex = uVar4;
          if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)&this->field_0x28)) {
            puVar7 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar7 = &this->field_0x10;
            }
            if ((*(uint *)(puVar7 + (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) *
                                    4) >> (uVar10 & 0x1f) & 1) != 0) goto LAB_14170be27;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
LAB_14170be27:
          lVar1 = *(longlong *)this;
          puVar7 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar7 = &this->field_0x38;
          }
          puVar8 = (uint *)(puVar7 + (longlong)*(int *)(lVar1 + lVar9 + 0x1c) * 4);
          do {
            uVar2 = *puVar8;
            if (uVar2 == 0xffffffff) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
            }
            else if (uVar2 == uVar10) {
              *puVar8 = *(uint *)(lVar1 + lVar9 + 0x18);
              TSparseArray<TSparseSetElement<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)this,uVar10,1);
              TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar10,1);
              return true;
            }
            puVar8 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar2 * 0x20);
          } while( true );
        }
        uVar10 = *(uint *)(lVar1 + 0x18);
      } while (uVar10 != 0xffffffff);
    }
  }
  return false;
}

// TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_> @ 141733490

TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>
* __thiscall
TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>
::
TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>
          (TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>
           *this,TMap<FTextKey,FTextLocalizationResource::FEntry_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextLocalizationResource::FEntry_const_*,0>_>
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

// TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_> @ 1417335b0

TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_> *
__thiscall
TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>::
TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>
          (TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>
           *this,TMap<FTextKey,FTextKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,FTextKey,0>_>
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

// TMap<FString,enum_EAutomationTestFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>_> @ 141814730

TMap<FString,EAutomationTestFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,EAutomationTestFlags,0>_>
* __thiscall
TMap<FString,enum_EAutomationTestFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>_>
::
TMap<FString,enum_EAutomationTestFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>_>
          (void *this,
          initializer_list<TPairInitializer<FString_const_&,EAutomationTestFlags_const_&>_> *param_1
          )

{
  TPairInitializer<FString_const_&,EAutomationTestFlags_const_&> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar7;
  wchar_t *pwVar8;
  TPairInitializer<FString_const_&,EAutomationTestFlags_const_&> *pTVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  ulonglong uVar6;
  
  pTVar1 = param_1->_Last;
  uVar6 = 0;
  pTVar9 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  uVar10 = (uint)((longlong)pTVar1 - (longlong)pTVar9 >> 4);
  if (uVar10 == 0) goto joined_r0x0001418149b2;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(this,uVar10);
  if (uVar10 < 4) {
    uVar10 = 1;
  }
  else {
    uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((*(int *)((longlong)this + 0x48) != 0) && ((int)uVar10 <= *(int *)((longlong)this + 0x48)))
  goto joined_r0x0001418149b2;
  *(uint *)((longlong)this + 0x48) = uVar10;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  if (uVar10 != 0) {
    uVar4 = uVar10;
    if (uVar10 < 2) {
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        uVar4 = 0;
        goto LAB_14181480d;
      }
    }
    else {
LAB_14181480d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 0x40),0,uVar4,4);
    }
    if (0 < (int)uVar10) {
      uVar12 = (ulonglong)uVar10;
      uVar7 = uVar6;
      do {
        lVar5 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar5 = *(longlong *)((longlong)this + 0x40);
        }
        uVar2 = uVar7 & (longlong)(int)uVar10 - 1U;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(lVar5 + uVar2 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  if (*(int *)((longlong)this + 0x48) != 0) {
    uVar10 = *(uint *)((longlong)this + 0x28);
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_78 = (FString *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar10 != 0) {
      pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = pTStack_70;
      }
      uVar4 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
      uVar7 = uVar6;
      while (uVar4 == 0) {
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        iVar3 = (int)uVar6;
        uVar4 = iVar3 + 1;
        uVar6 = (ulonglong)uVar4;
        uVar12 = (ulonglong)local_78 >> 0x20;
        local_78 = (FString *)CONCAT44((int)uVar12,uVar4);
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar4)
        goto LAB_1418148f9;
        uVar4 = *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar3 * 4 + 4);
      }
      local_78 = (FString *)CONCAT44(-uVar4 & uVar4,SUB84(local_78,0));
      uVar6 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_64 = (int)lVar5 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar10 < (int)uStack_64) {
LAB_1418148f9:
        uVar6 = (ulonglong)uVar10;
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
    local_50.Array = pTStack_70;
    if ((int)uVar6 < (int)uVar10) {
      do {
        puVar11 = (undefined8 *)((longlong)(int)uVar6 * 0x20 + *local_58);
        iVar3 = *(int *)(puVar11 + 1) + -1;
        if (*(int *)(puVar11 + 1) == 0) {
          pwVar8 = L"";
          iVar3 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar11;
        }
        uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar8);
        uVar10 = *(int *)((longlong)this + 0x48) - 1U & uVar10;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar10;
        lVar5 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar5 = *(longlong *)((longlong)this + 0x40);
        }
        uVar7 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(lVar5 + uVar7 * 4);
        *(int *)(lVar5 + uVar7 * 4) = (int)uVar6;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar6 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x0001418149b2:
  for (; pTVar9 != pTVar1; pTVar9 = pTVar9 + 1) {
    local_78 = pTVar9->Key;
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar9->Value;
    TSet<TTuple<FString,enum_EAutomationTestFlags>,TDefaultMapHashableKeyFuncs<FString,enum_EAutomationTestFlags,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,enum_EAutomationTestFlags_const_&>_>
              (this,(TPairInitializer<FString_const_&,EAutomationTestFlags_const_&> *)
                    &stack0x00000008,(bool *)&local_78);
  }
  return this;
}

// TMap<wchar_t,enum_FConfigValue::EValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<wchar_t,enum_FConfigValue::EValueType,0>_> @ 141853120

TMap<wchar_t,FConfigValue::EValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<wchar_t,FConfigValue::EValueType,0>_>
* __thiscall
TMap<wchar_t,enum_FConfigValue::EValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<wchar_t,enum_FConfigValue::EValueType,0>_>
::
TMap<wchar_t,enum_FConfigValue::EValueType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<wchar_t,enum_FConfigValue::EValueType,0>_>
          (void *this,
          initializer_list<TPairInitializer<wchar_t_const_&,FConfigValue::EValueType_const_&>_>
          *param_1)

{
  TPairInitializer<wchar_t_const_&,FConfigValue::EValueType_const_&> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  TPairInitializer<wchar_t_const_&,FConfigValue::EValueType_const_&> *pTVar9;
  ulonglong uVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  uint uVar12;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar5 = 0;
  pTVar9 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  uVar12 = (uint)((longlong)pTVar1 - (longlong)pTVar9 >> 4);
  if (uVar12 == 0) goto joined_r0x000141853391;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(this,uVar12);
  if (uVar12 < 4) {
    uVar12 = 1;
  }
  else {
    uVar6 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((*(int *)((longlong)this + 0x48) != 0) && ((int)uVar12 <= *(int *)((longlong)this + 0x48)))
  goto joined_r0x000141853391;
  *(uint *)((longlong)this + 0x48) = uVar12;
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)this + 0x40),0,0,4);
  }
  if (uVar12 != 0) {
    uVar3 = uVar12;
    if (uVar12 < 2) {
      if (*(longlong *)((longlong)this + 0x40) != 0) {
        uVar3 = 0;
        goto LAB_141853205;
      }
    }
    else {
LAB_141853205:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)((longlong)this + 0x40),0,uVar3,4);
    }
    if (0 < (int)uVar12) {
      uVar10 = (ulonglong)uVar12;
      uVar6 = uVar5;
      do {
        lVar4 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar4 = *(longlong *)((longlong)this + 0x40);
        }
        uVar2 = uVar6 & (longlong)(int)uVar12 - 1U;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(lVar4 + uVar2 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  if (*(int *)((longlong)this + 0x48) != 0) {
    uVar12 = *(uint *)((longlong)this + 0x28);
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_78 = (wchar_t *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar12 != 0) {
      pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar11 = pTStack_70;
      }
      uVar3 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
      uVar6 = uVar5;
      while (uVar3 == 0) {
        iVar8 = (int)uVar5;
        uStack_60 = (int)uVar6 + 0x20;
        uVar6 = (ulonglong)uStack_60;
        uVar3 = iVar8 + 1;
        uVar5 = (ulonglong)local_78 >> 0x20;
        local_78 = (wchar_t *)CONCAT44((int)uVar5,uVar3);
        uVar5 = (ulonglong)uVar3;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar3)
        goto LAB_1418532fb;
        uVar3 = *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar8 * 4 + 4);
      }
      local_78 = (wchar_t *)CONCAT44(-uVar3 & uVar3,SUB84(local_78,0));
      uVar5 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar5 = (ulonglong)uStack_64;
      if ((int)uVar12 < (int)uStack_64) {
LAB_1418532fb:
        uVar5 = (ulonglong)uVar12;
        uStack_64 = uVar12;
      }
    }
    local_68 = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50._padding_ = (longlong)local_78;
    local_58 = this;
    local_50.Array = pTStack_70;
    if ((int)uVar5 < (int)uVar12) {
      do {
        iVar8 = (int)uVar5;
        lVar4 = *local_58 + (longlong)iVar8 * 0xc;
        uVar12 = *(int *)((longlong)this + 0x48) - 1U &
                 (uint)*(ushort *)(*local_58 + (longlong)iVar8 * 0xc);
        *(uint *)(lVar4 + 8) = uVar12;
        lVar7 = (longlong)this + 0x38;
        if (*(longlong *)((longlong)this + 0x40) != 0) {
          lVar7 = *(longlong *)((longlong)this + 0x40);
        }
        uVar5 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar12;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(lVar7 + uVar5 * 4);
        *(int *)(lVar7 + uVar5 * 4) = iVar8;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar5 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x000141853391:
  for (; pTVar9 != pTVar1; pTVar9 = pTVar9 + 1) {
    local_78 = pTVar9->Key;
    pTStack_70 = (TBitArray<FDefaultBitArrayAllocator> *)pTVar9->Value;
    TSet<TTuple<wchar_t,enum_FConfigValue::EValueType>,TDefaultMapHashableKeyFuncs<wchar_t,enum_FConfigValue::EValueType,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<wchar_t_const_&,enum_FConfigValue::EValueType_const_&>_>
              (this,(TPairInitializer<wchar_t_const_&,FConfigValue::EValueType_const_&> *)
                    &stack0x00000008,(bool *)&local_78);
  }
  return this;
}

// Append<FDefaultSetAllocator> @ 1419036d0

void __thiscall
TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
Append<FDefaultSetAllocator>
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *this,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar6
  ;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 local_res8 [8];
  int local_res10;
  longlong local_a8;
  longlong local_a0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)this,((*(int *)&this->field_0x8 - *(int *)&this->field_0x34) -
                    *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8);
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14190378d;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14190378d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_70 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_141903890;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_141903890:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_a8 = *(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x28;
    local_a0 = local_a8 + 0x10;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000018,(bool *)&local_a8
              );
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)param_1);
  return;
}

// Append<FDefaultSetAllocator> @ 141903930

void __thiscall
TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
Append<FDefaultSetAllocator>
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *this,TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar6
  ;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 local_res8 [8];
  int local_res10;
  longlong local_a8;
  longlong local_a0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)this,((*(int *)&this->field_0x8 - *(int *)&this->field_0x34) -
                    *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8);
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1419039ed;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_8c = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_78 + -1 + local_res10;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_1419039ed:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_70 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_141903af0;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_141903af0:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_a8 = *(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x28;
    local_a0 = local_a8 + 0x10;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FString_const_&,FString_const_&> *)&stack0x00000018,
               (bool *)&local_a8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// operator= @ 14191cc90

TMap<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>_>
* __thiscall
TMap<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>_>
::operator=(TMap<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>_>
            *this,TMap<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>,0>_>
                  *param_1)

{
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FOperatorFunctionID,TFunction<TValueOrError<FExpressionNode,FExpressionError>___cdecl(FExpressionNode_const_&,ITextFilterExpressionContext_const_*)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&this->field_0x8);
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
    }
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
  }
  return this;
}

// FindAndRemoveChecked @ 14193cc50

FCsvRow * __thiscall
TMap<__int64,FCsvStreamWriter::FCsvRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStreamWriter::FCsvRow,0>_>
::FindAndRemoveChecked
          (TMap<__int64,FCsvStreamWriter::FCsvRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStreamWriter::FCsvRow,0>_>
           *this,FCsvRow *__return_storage_ptr__,long64 param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FCsvRow *pFVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint *puVar8;
  
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar6 = *(undefined1 **)&this->field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &this->field_0x38;
    }
    uVar7 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&this->field_0x48 - 1U &
                               (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        if (*(longlong *)(*(longlong *)this + (longlong)(int)uVar7 * 0x30) == param_1) {
          if (uVar7 == 0xffffffff) goto LAB_14193cce2;
          goto LAB_14193cd0e;
        }
        uVar7 = *(uint *)(*(longlong *)this + 0x28 + (longlong)(int)uVar7 * 0x30);
      } while (uVar7 != 0xffffffff);
    }
  }
  uVar7 = 0xffffffff;
LAB_14193cce2:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("PairId.IsValidId()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x556,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FCsvRow *)(*pcVar2)();
    return pFVar4;
  }
LAB_14193cd0e:
  lVar5 = *(longlong *)this;
  (__return_storage_ptr__->Values).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  lVar5 = lVar5 + (longlong)(int)uVar7 * 0x30;
  (__return_storage_ptr__->Values).AllocatorInstance.Data = *(FScriptContainerElement **)(lVar5 + 8)
  ;
  *(undefined8 *)(lVar5 + 8) = 0;
  (__return_storage_ptr__->Values).ArrayNum = *(int *)(lVar5 + 0x10);
  (__return_storage_ptr__->Values).ArrayMax = *(int *)(lVar5 + 0x14);
  *(undefined8 *)(lVar5 + 0x10) = 0;
  (__return_storage_ptr__->Events).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Events).AllocatorInstance.Data =
       *(FScriptContainerElement **)(lVar5 + 0x18);
  *(undefined8 *)(lVar5 + 0x18) = 0;
  (__return_storage_ptr__->Events).ArrayNum = *(int *)(lVar5 + 0x20);
  (__return_storage_ptr__->Events).ArrayMax = *(int *)(lVar5 + 0x24);
  *(undefined8 *)(lVar5 + 0x20) = 0;
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&this->field_0x28)) {
    puVar6 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar6 = &this->field_0x10;
    }
    if ((*(uint *)(puVar6 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14193cdc5;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FCsvRow *)(*pcVar2)();
    return pFVar4;
  }
LAB_14193cdc5:
  puVar6 = *(undefined1 **)&this->field_0x40;
  lVar5 = *(longlong *)this + (longlong)(int)uVar7 * 0x30;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = &this->field_0x38;
  }
  puVar8 = (uint *)(puVar6 + (longlong)*(int *)(lVar5 + 0x2c) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar7) {
      *puVar8 = *(uint *)(lVar5 + 0x28);
      TSparseArray<TSparseSetElement<TTuple<__int64,FCsvStreamWriter::FCsvRow>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<__int64,FCsvStreamWriter::FCsvRow>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this,uVar7,1);
      TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return __return_storage_ptr__;
    }
    puVar8 = (uint *)(*(longlong *)this + 0x28 + (longlong)(int)uVar1 * 0x30);
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FCsvRow *)(*pcVar2)();
  return pFVar4;
}

// RemoveAndCopyValue @ 1419652c0

bool __thiscall
TMap<FString,TSharedPtr<FPreloadableFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FPreloadableFile,1>,0>_>
::RemoveAndCopyValue
          (TMap<FString,TSharedPtr<FPreloadableFile,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FPreloadableFile,1>,0>_>
           *this,FString *param_1,TSharedPtr<FPreloadableFile,1> *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  wchar_t *pwVar9;
  TSharedPtr<FPreloadableFile,1> *pTVar10;
  uint *puVar11;
  longlong lVar12;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar9 = L"";
    iVar7 = 0;
  }
  else {
    pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar9);
  uVar6 = TSet<TTuple<FString,TSharedPtr<FPreloadableFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FPreloadableFile,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSharedPtr<FPreloadableFile,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FPreloadableFile,1>,0>,FDefaultSetAllocator>
                      *)this,uVar6,param_1);
  if (uVar6 == 0xffffffff) {
    return false;
  }
  pTVar10 = (TSharedPtr<FPreloadableFile,1> *)
            (*(longlong *)this + 0x10 + (longlong)(int)uVar6 * 0x28);
  if (param_2 != pTVar10) {
    param_2->Object = pTVar10->Object;
    pTVar10->Object = (FPreloadableFile *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_2->SharedReferenceCount,&pTVar10->SharedReferenceCount);
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&this->field_0x28)) {
    puVar8 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar8 = &this->field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_1419653ac;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
LAB_1419653ac:
  lVar12 = *(longlong *)this + (longlong)(int)uVar6 * 0x28;
  puVar8 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar8 = &this->field_0x38;
  }
  puVar11 = (uint *)(puVar8 + (longlong)*(int *)(lVar12 + 0x24) * 4);
  do {
    uVar2 = *puVar11;
    if (uVar2 == 0xffffffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    else if (uVar2 == uVar6) {
      *puVar11 = *(uint *)(lVar12 + 0x20);
      TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FPreloadableFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FPreloadableFile,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this,uVar6,1);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return true;
    }
    puVar11 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x28 + 0x20);
  } while( true );
}

// RemoveAndCopyValue @ 141965470

bool __thiscall
TMap<__int64,FCsvStatSeriesValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStatSeriesValue,0>_>
::RemoveAndCopyValue
          (TMap<__int64,FCsvStatSeriesValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStatSeriesValue,0>_>
           *this,long64 param_1,FCsvStatSeriesValue *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar7 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &this->field_0x38;
    }
    uVar9 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&this->field_0x48 - 1U &
                               (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (uVar9 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar1 = (longlong)(int)uVar9 * 0x18;
        if (*(longlong *)(lVar1 + lVar3) == param_1) {
          param_2->Value = *(<unnamed_type_Value> *)(lVar1 + 8 + lVar3);
          if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&this->field_0x28)) {
            puVar7 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar7 = &this->field_0x10;
            }
            if ((*(uint *)(puVar7 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar9 & 0x1f) & 1) != 0) goto LAB_14196556b;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
LAB_14196556b:
          lVar3 = *(longlong *)this;
          puVar7 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar7 = &this->field_0x38;
          }
          puVar8 = (uint *)(puVar7 + (longlong)*(int *)(lVar3 + lVar1 + 0x14) * 4);
          do {
            uVar2 = *puVar8;
            if (uVar2 == 0xffffffff) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
            }
            else if (uVar2 == uVar9) {
              *puVar8 = *(uint *)(lVar3 + lVar1 + 0x10);
              TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar9,1);
              return true;
            }
            puVar8 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
          } while( true );
        }
        uVar9 = *(uint *)(lVar1 + 0x10 + lVar3);
      } while (uVar9 != 0xffffffff);
    }
  }
  return false;
}

// TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_> @ 141985b60

TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
* __thiscall
TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
::
TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
          (TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
           *this,TMap<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
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

// TMap<FName,TStatIdData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>_> @ 1419cc090

TMap<FName,TStatIdData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>_> *
__thiscall
TMap<FName,TStatIdData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>_>::
TMap<FName,TStatIdData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>_>
          (TMap<FName,TStatIdData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>_>
           *this,TMap<FName,TStatIdData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>_>
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

// TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_> @ 1419cc1b0

TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_> *
__thiscall
TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>::
TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
          (TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
           *this,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
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

// operator= @ 1419d36d0

TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> * __thiscall
TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::operator=
          (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *this,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_1)

{
  int iVar1;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->field_0x38,(int *)&this->field_0x48,
               (ForElementType<FSetElementId> *)&param_1->field_0x38,*(int *)&param_1->field_0x48);
    iVar1 = *(int *)&param_1->field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,iVar1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar1,(ForAnyElementType *)this,(int *)&this->field_0x8,
               (int *)&this->field_0xc);
    *(undefined4 *)&this->field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&this->field_0x34 = *(undefined4 *)&param_1->field_0x34;
    if (&this->field_0x10 != &param_1->field_0x10) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,
                 (TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10);
    }
    if (iVar1 != 0) {
      memcpy(*(void **)this,*(void **)param_1,(longlong)iVar1 * 0x14);
    }
    return this;
  }
  return this;
}

// ~TMap<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>_> @ 141cf11e0

void __thiscall
TMap<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>_>
::
~TMap<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>_>
          (TMap<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString_const_,TArray<FString,TSizedDefaultAllocator<32>_>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

