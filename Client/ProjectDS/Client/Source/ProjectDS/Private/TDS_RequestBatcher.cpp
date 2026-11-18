// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// TDS_RequestBatcher<TTuple<unsigned___int64,FString>_> @ 14b5bc3a0

/* WARNING: Type propagation algorithm not settling */

TDS_RequestBatcher<TTuple<unsigned___int64,FString>_> * __thiscall
TDS_RequestBatcher<TTuple<unsigned___int64,FString>_>::
TDS_RequestBatcher<TTuple<unsigned___int64,FString>_>
          (TDS_RequestBatcher<TTuple<unsigned___int64,FString>_> *this,FString *param_1,
          double param_2,int param_3)

{
  ForElementType<FSetElementId> FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TDS_RequestBatcher<TTuple<unsigned___int64,FString>_> *pTVar6;
  ulonglong uVar7;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint local_88;
  uint uStack_84;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  
  uVar10 = 0;
  *(undefined8 *)&(this->BatchedDataContainer).Elements = 0;
  *(undefined8 *)&(this->BatchedDataContainer).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->BatchedDataContainer).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x34 = 0;
  (this->BatchedDataContainer).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->BatchedDataContainer).HashSize = 0;
  ::FString::FString(&this->BatchRequestName,param_1);
  this->BatchInterval = param_2;
  this->MaxBatchSize = param_3;
  this->LastBatchTime = 0.0;
  if ((param_2 <= 0.0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3057192806880641262>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_TencentCloudChat_Defines.h"
                         ,0xee,"BatchInterval > 0.0"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TDS_RequestBatcher<TTuple<unsigned___int64,FString>_> *)(*pcVar3)();
    return pTVar6;
  }
  if ((this->MaxBatchSize < 1) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3057192806880641263>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_TencentCloudChat_Defines.h"
                         ,0xef,"MaxBatchSize > 0"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TDS_RequestBatcher<TTuple<unsigned___int64,FString>_> *)(*pcVar3)();
    return pTVar6;
  }
  uVar13 = this->MaxBatchSize;
  if (uVar13 <= (uint)(*(int *)&(this->BatchedDataContainer).Elements.field_0x8 -
                      *(int *)&(this->BatchedDataContainer).Elements.field_0x34)) {
    return this;
  }
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar13);
  if (uVar13 < 4) {
    uVar13 = 1;
  }
  else {
    uVar11 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar2 & 0x1f);
  }
  iVar8 = (this->BatchedDataContainer).HashSize;
  if ((iVar8 != 0) && ((int)uVar13 <= iVar8)) {
    return this;
  }
  (this->BatchedDataContainer).HashSize = uVar13;
  if ((this->BatchedDataContainer).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->BatchedDataContainer).Hash.SecondaryData,0,0,4);
  }
  if (uVar13 == 0) goto LAB_14b5bc555;
  uVar5 = uVar13;
  if (uVar13 < 2) {
    if ((this->BatchedDataContainer).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      uVar5 = 0;
      goto LAB_14b5bc509;
    }
  }
  else {
LAB_14b5bc509:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->BatchedDataContainer).Hash.SecondaryData,0,uVar5,4);
  }
  if (0 < (int)uVar13) {
    uVar15 = (ulonglong)uVar13;
    uVar11 = uVar10;
    do {
      FVar1 = (this->BatchedDataContainer).Hash.SecondaryData;
      FVar9 = (ForElementType<FSetElementId>)&(this->BatchedDataContainer).Hash;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = FVar1;
      }
      uVar7 = uVar11 & (longlong)(int)uVar13 - 1U;
      uVar11 = uVar11 + 1;
      *(undefined4 *)((longlong)FVar9 + uVar7 * 4) = 0xffffffff;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
LAB_14b5bc555:
  if ((this->BatchedDataContainer).HashSize != 0) {
    uVar13 = *(uint *)&(this->BatchedDataContainer).Elements.field_0x28;
    local_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->BatchedDataContainer).Elements.field_0x10;
    local_88 = 0;
    uStack_84 = 1;
    uStack_74 = 0;
    uStack_70 = 0;
    if (uVar13 != 0) {
      puVar16 = *(uint **)&(this->BatchedDataContainer).Elements.field_0x20;
      if (puVar16 == (uint *)0x0) {
        puVar16 = (uint *)local_60.Array;
      }
      uVar5 = *puVar16;
      uVar11 = uVar10;
      while (uVar5 == 0) {
        uStack_70 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_70;
        iVar8 = (int)uVar10;
        local_88 = iVar8 + 1;
        uVar10 = (ulonglong)local_88;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_88)
        goto LAB_14b5bc609;
        uVar5 = puVar16[(longlong)iVar8 + 1];
      }
      uStack_84 = -uVar5 & uVar5;
      uVar10 = (ulonglong)uStack_84 * 2 + 1;
      lVar2 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_74 = (int)lVar2 + -1 + uStack_70;
      uVar10 = (ulonglong)uStack_74;
      if ((int)uVar13 < (int)uStack_74) {
LAB_14b5bc609:
        uVar10 = (ulonglong)uVar13;
        uStack_74 = uVar13;
      }
    }
    local_60._padding_._0_4_ = local_88;
    local_60._padding_._4_4_ = uStack_84;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60.CurrentBitIndex = uStack_74;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = uStack_70;
    if ((int)uVar10 < (int)uVar13) {
      do {
        lVar2 = *(longlong *)&(this->BatchedDataContainer).Elements;
        lVar14 = (longlong)(int)uVar10 * 0x20;
        iVar8 = *(int *)(lVar14 + 0x10 + lVar2);
        uVar13 = (int)((ulonglong)*(undefined8 *)(lVar14 + lVar2) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar14 + lVar2);
        if (iVar8 == 0) {
          pwVar12 = L"";
          iVar8 = 0;
        }
        else {
          pwVar12 = *(wchar_t **)(lVar14 + 8 + lVar2);
          iVar8 = iVar8 + -1;
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar12);
        uVar13 = (this->BatchedDataContainer).HashSize - 1U &
                 (uVar5 + uVar13 * 0x40 + (uVar13 >> 2) + 0x9e3779b9 ^ uVar13);
        *(uint *)(lVar14 + 0x1c + lVar2) = uVar13;
        FVar1 = (this->BatchedDataContainer).Hash.SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&(this->BatchedDataContainer).Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar1;
        }
        uVar11 = (longlong)(this->BatchedDataContainer).HashSize - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(lVar14 + 0x18 + lVar2) = *(undefined4 *)((longlong)FVar9 + uVar11 * 4);
        *(int *)((longlong)FVar9 + uVar11 * 4) = (int)uVar10;
        local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
        uVar10 = (ulonglong)(uint)local_60.CurrentBitIndex;
      } while (local_60.CurrentBitIndex < (local_60.Array)->NumBits);
    }
  }
  return this;
}

// TDS_RequestBatcher<__int64> @ 14b5bc730

/* WARNING: Type propagation algorithm not settling */

TDS_RequestBatcher<__int64> * __thiscall
TDS_RequestBatcher<__int64>::TDS_RequestBatcher<__int64>
          (TDS_RequestBatcher<__int64> *this,FString *param_1,double param_2,int param_3)

{
  ForElementType<FSetElementId> FVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TDS_RequestBatcher<__int64> *pTVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  longlong lVar16;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  uVar12 = 0;
  *(undefined8 *)&(this->BatchedDataContainer).Elements = 0;
  *(undefined8 *)&(this->BatchedDataContainer).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->BatchedDataContainer).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x34 = 0;
  (this->BatchedDataContainer).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->BatchedDataContainer).HashSize = 0;
  ::FString::FString(&this->BatchRequestName,param_1);
  this->BatchInterval = param_2;
  this->MaxBatchSize = param_3;
  this->LastBatchTime = 0.0;
  if ((param_2 <= 0.0) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3057192806880641262>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_TencentCloudChat_Defines.h"
                         ,0xee,"BatchInterval > 0.0"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDS_RequestBatcher<__int64> *)(*pcVar4)();
    return pTVar6;
  }
  if ((this->MaxBatchSize < 1) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3057192806880641263>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_TencentCloudChat_Defines.h"
                         ,0xef,"MaxBatchSize > 0"), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TDS_RequestBatcher<__int64> *)(*pcVar4)();
    return pTVar6;
  }
  uVar10 = this->MaxBatchSize;
  if (uVar10 <= (uint)(*(int *)&(this->BatchedDataContainer).Elements.field_0x8 -
                      *(int *)&(this->BatchedDataContainer).Elements.field_0x34)) {
    return this;
  }
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar10);
  if (uVar10 < 4) {
    uVar10 = 1;
  }
  else {
    uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar3 & 0x1f);
  }
  iVar11 = (this->BatchedDataContainer).HashSize;
  if ((iVar11 != 0) && ((int)uVar10 <= iVar11)) {
    return this;
  }
  (this->BatchedDataContainer).HashSize = uVar10;
  if ((this->BatchedDataContainer).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->BatchedDataContainer).Hash.SecondaryData,0,0,4);
  }
  if (uVar10 == 0) goto LAB_14b5bc8e5;
  uVar13 = uVar10;
  if (uVar10 < 2) {
    if ((this->BatchedDataContainer).Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      uVar13 = 0;
      goto LAB_14b5bc897;
    }
  }
  else {
LAB_14b5bc897:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->BatchedDataContainer).Hash.SecondaryData,0,uVar13,4);
  }
  if (0 < (int)uVar10) {
    uVar14 = (ulonglong)uVar10;
    uVar9 = uVar12;
    do {
      FVar1 = (this->BatchedDataContainer).Hash.SecondaryData;
      FVar8 = (ForElementType<FSetElementId>)&(this->BatchedDataContainer).Hash;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = FVar1;
      }
      uVar7 = uVar9 & (longlong)(int)uVar10 - 1U;
      uVar9 = uVar9 + 1;
      *(undefined4 *)((longlong)FVar8 + uVar7 * 4) = 0xffffffff;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
LAB_14b5bc8e5:
  if ((this->BatchedDataContainer).HashSize != 0) {
    uVar10 = *(uint *)&(this->BatchedDataContainer).Elements.field_0x28;
    local_50.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->BatchedDataContainer).Elements.field_0x10;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar10 != 0) {
      puVar15 = *(uint **)&(this->BatchedDataContainer).Elements.field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)local_50.Array;
      }
      uVar13 = *puVar15;
      uVar9 = uVar12;
      while (uVar13 == 0) {
        iVar11 = (int)uVar12;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        local_78 = iVar11 + 1;
        uVar12 = (ulonglong)local_78;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_14b5bc98b;
        uVar13 = puVar15[(longlong)iVar11 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar12 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar12 = (ulonglong)uStack_64;
      if ((int)uVar10 < (int)uStack_64) {
LAB_14b5bc98b:
        uVar12 = (ulonglong)uVar10;
        uStack_64 = uVar10;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    if ((int)uVar12 < *(int *)&(this->BatchedDataContainer).Elements.field_0x28) {
      do {
        lVar3 = *(longlong *)&(this->BatchedDataContainer).Elements;
        lVar16 = (longlong)(int)uVar12;
        uVar2 = *(undefined8 *)(lVar3 + lVar16 * 0x10);
        uVar10 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2 &
                 (this->BatchedDataContainer).HashSize - 1U;
        *(uint *)(lVar3 + 0xc + lVar16 * 0x10) = uVar10;
        FVar1 = (this->BatchedDataContainer).Hash.SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&(this->BatchedDataContainer).Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar1;
        }
        uVar9 = (longlong)(this->BatchedDataContainer).HashSize - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(lVar3 + 8 + lVar16 * 0x10) = *(undefined4 *)((longlong)FVar8 + uVar9 * 4);
        *(int *)((longlong)FVar8 + uVar9 * 4) = (int)uVar12;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar12 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return this;
}

// operator= @ 14b9d9810

TDS_RequestBatcher<TTuple<unsigned___int64,FString>_> * __thiscall
TDS_RequestBatcher<TTuple<unsigned___int64,FString>_>::operator=
          (TDS_RequestBatcher<TTuple<unsigned___int64,FString>_> *this,
          TDS_RequestBatcher<TTuple<unsigned___int64,FString>_> *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  FString *pFVar1;
  FString *pFVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  FScriptContainerElement *pFVar5;
  
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(this->BatchedDataContainer).Elements.field_0x8);
    pvVar3 = *(void **)&(this->BatchedDataContainer).Elements;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    _Src = &(param_1->BatchedDataContainer).Elements.field_0x10;
    *(undefined8 *)&(this->BatchedDataContainer).Elements =
         *(undefined8 *)&(param_1->BatchedDataContainer).Elements;
    _Dst = &(this->BatchedDataContainer).Elements.field_0x10;
    *(undefined8 *)&(param_1->BatchedDataContainer).Elements = 0;
    *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x8 =
         *(undefined4 *)&(param_1->BatchedDataContainer).Elements.field_0x8;
    *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0xc =
         *(undefined4 *)&(param_1->BatchedDataContainer).Elements.field_0xc;
    *(undefined8 *)&(param_1->BatchedDataContainer).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->BatchedDataContainer).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->BatchedDataContainer).Elements.field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->BatchedDataContainer).Elements.field_0x20 =
           *(undefined8 *)&(param_1->BatchedDataContainer).Elements.field_0x20;
      *(undefined8 *)&(param_1->BatchedDataContainer).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x28 =
           *(undefined4 *)&(param_1->BatchedDataContainer).Elements.field_0x28;
      *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x2c =
           *(undefined4 *)&(param_1->BatchedDataContainer).Elements.field_0x2c;
      *(undefined8 *)&(param_1->BatchedDataContainer).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x30 =
         *(undefined4 *)&(param_1->BatchedDataContainer).Elements.field_0x30;
    *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x34 =
         *(undefined4 *)&(param_1->BatchedDataContainer).Elements.field_0x34;
    *(undefined4 *)&(param_1->BatchedDataContainer).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->BatchedDataContainer).Elements.field_0x34 = 0;
    if ((param_1->BatchedDataContainer).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
      *(undefined4 *)(this->BatchedDataContainer).Hash.InlineData =
           *(undefined4 *)(param_1->BatchedDataContainer).Hash.InlineData;
    }
    FVar4 = (this->BatchedDataContainer).Hash.SecondaryData;
    if (FVar4 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    (this->BatchedDataContainer).Hash.SecondaryData =
         (param_1->BatchedDataContainer).Hash.SecondaryData;
    (param_1->BatchedDataContainer).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (this->BatchedDataContainer).HashSize = (param_1->BatchedDataContainer).HashSize;
    (param_1->BatchedDataContainer).HashSize = 0;
  }
  pFVar1 = &param_1->BatchRequestName;
  pFVar2 = &this->BatchRequestName;
  if (pFVar2 != pFVar1) {
    pFVar5 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->BatchRequestName).Data.ArrayNum = (param_1->BatchRequestName).Data.ArrayNum;
    (this->BatchRequestName).Data.ArrayMax = (param_1->BatchRequestName).Data.ArrayMax;
    (param_1->BatchRequestName).Data.ArrayNum = 0;
    (param_1->BatchRequestName).Data.ArrayMax = 0;
  }
  this->BatchInterval = param_1->BatchInterval;
  this->MaxBatchSize = param_1->MaxBatchSize;
  this->LastBatchTime = param_1->LastBatchTime;
  return this;
}

// Reset @ 14ba180e0

void __thiscall
TDS_RequestBatcher<TTuple<unsigned___int64,FString>_>::Reset
          (TDS_RequestBatcher<TTuple<unsigned___int64,FString>_> *this)

{
  int iVar1;
  
  if (*(int *)&(this->BatchedDataContainer).Elements.field_0x8 !=
      *(int *)&(this->BatchedDataContainer).Elements.field_0x34) {
    TSet<TTuple<unsigned___int64,FString>,DefaultKeyFuncs<TTuple<unsigned___int64,FString>,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->BatchedDataContainer);
    TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(this->BatchedDataContainer).Elements.field_0x8);
    iVar1 = *(int *)&(this->BatchedDataContainer).Elements.field_0xc;
    *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x8 = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,
                 (int *)&(this->BatchedDataContainer).Elements.field_0xc);
    }
    *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->BatchedDataContainer).Elements.field_0x28 = 0;
    this->LastBatchTime = 0.0;
    return;
  }
  this->LastBatchTime = 0.0;
  return;
}

