// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 2

// Append<FDefaultSetAllocator> @ 14cfe8240

void __thiscall
TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
Append<FDefaultSetAllocator>
          (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           *this,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FName *pFVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Reserve((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
           *)this,((*(int *)&this->field_0x8 - *(int *)&this->field_0x34) -
                  *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8);
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar12 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cfe82ed;
      uVar11 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = iVar14 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14cfe82ed:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cfe83f0;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_14cfe83f0:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar9 = (FName *)((longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)param_1);
    TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
    Emplace<FName_const_&,FString_const_&>
              ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                *)this,pFVar9,(FString *)(pFVar9 + 1));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> @ 14cfe9400

TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> * __thiscall
TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           *this,initializer_list<TPairInitializer<FName_const_&,FString_const_&>_> *param_1)

{
  TPairInitializer<FName_const_&,FString_const_&> *pTVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  TPairInitializer<FName_const_&,FString_const_&> *pTVar7;
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
  if (uVar9 == 0) goto joined_r0x00014cfe966f;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  goto joined_r0x00014cfe966f;
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
        goto LAB_14cfe94df;
      }
    }
    else {
LAB_14cfe94df:
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
        goto LAB_14cfe95cd;
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
LAB_14cfe95cd:
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
        puVar8 = (undefined8 *)((longlong)(int)uVar12 * 0x20 + *(longlong *)this);
        uVar2 = *puVar8;
        uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar9 = *(int *)&this->field_0x48 - 1U & uVar9 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)((longlong)puVar8 + 0x1c) = uVar9;
        puVar5 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)&this->field_0x40;
        }
        uVar6 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(puVar5 + uVar6 * 4);
        *(int *)(puVar5 + uVar6 * 4) = (int)uVar12;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar12 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014cfe966f:
  for (; pTVar7 != pTVar1; pTVar7 = pTVar7 + 1) {
    TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
    Emplace<FName_const_&,FString_const_&>
              ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                *)this,pTVar7->Key,pTVar7->Value);
  }
  return this;
}

