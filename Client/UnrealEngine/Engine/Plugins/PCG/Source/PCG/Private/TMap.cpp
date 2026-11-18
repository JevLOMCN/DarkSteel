// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// Append<FDefaultSetAllocator> @ 149793090

void __thiscall
TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>::
Append<FDefaultSetAllocator>
          (TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_> *this,
          TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_> *pTVar6;
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
  TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::Reserve
            ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14979314d;
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
LAB_14979314d:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_149793250;
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
LAB_149793250:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<__int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar11) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_a8 = *(longlong *)pTVar6 + (longlong)TStack_60.CurrentBitIndex * 0x18;
    local_a0 = local_a8 + 8;
    TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<__int64_const_&,int_const_&>_>
              ((TSet<TTuple<__int64,int>,TDefaultMapHashableKeyFuncs<__int64,int,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<__int64_const_&,int_const_&> *)&stack0x00000018,
               (bool *)&local_a8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// TMap<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,0>_> @ 1497ddea0

TMap<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,0>_>
* __thiscall
TMap<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,0>_>
::
TMap<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,0>_>
          (TMap<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,0>_>
           *this,initializer_list<TPairInitializer<FPCGMetadataDomainID_const_&,TArrayView<__int64_const_,int>_const_&>_>
                 *param_1)

{
  byte *pbVar1;
  TPairInitializer<FPCGMetadataDomainID_const_&,TArrayView<__int64_const_,int>_const_&> *pTVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  TPairInitializer<FPCGMetadataDomainID_const_&,TArrayView<__int64_const_,int>_const_&> *pTVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uVar15;
  undefined8 local_78;
  TArrayView<__int64_const_,int> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar2 = param_1->_Last;
  uVar10 = 0;
  pTVar11 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  uVar15 = (uint)((longlong)pTVar2 - (longlong)pTVar11 >> 4);
  if (uVar15 == 0) goto joined_r0x0001497de191;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar15);
  if (uVar15 < 4) {
    uVar15 = 1;
  }
  else {
    uVar8 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar15 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((*(int *)&this->field_0x48 != 0) && ((int)uVar15 <= *(int *)&this->field_0x48))
  goto joined_r0x0001497de191;
  *(uint *)&this->field_0x48 = uVar15;
  if (*(longlong *)&this->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x40,0,0,4);
  }
  if (uVar15 != 0) {
    uVar5 = uVar15;
    if (uVar15 < 2) {
      if (*(longlong *)&this->field_0x40 != 0) {
        uVar5 = 0;
        goto LAB_1497ddf85;
      }
    }
    else {
LAB_1497ddf85:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x40,0,uVar5,4);
    }
    if (0 < (int)uVar15) {
      uVar13 = (ulonglong)uVar15;
      uVar8 = uVar10;
      do {
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar4 = uVar8 & (longlong)(int)uVar15 - 1U;
        uVar8 = uVar8 + 1;
        *(undefined4 *)(puVar6 + uVar4 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (*(int *)&this->field_0x48 != 0) {
    uVar15 = *(uint *)&this->field_0x28;
    pTStack_70 = (TArrayView<__int64_const_,int> *)&this->field_0x10;
    local_78 = (FPCGMetadataDomainID *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar15 != 0) {
      puVar14 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar14 = (uint *)pTStack_70;
      }
      uVar5 = *puVar14;
      uVar8 = uVar10;
      while (uVar5 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uVar5 = iVar9 + 1;
        uVar10 = (ulonglong)local_78 >> 0x20;
        local_78 = (FPCGMetadataDomainID *)CONCAT44((int)uVar10,uVar5);
        uVar10 = (ulonglong)uVar5;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar5)
        goto LAB_1497de07b;
        uVar5 = puVar14[(longlong)iVar9 + 1];
      }
      local_78 = (FPCGMetadataDomainID *)CONCAT44(-uVar5 & uVar5,SUB84(local_78,0));
      uVar10 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar15 < (int)uStack_64) {
LAB_1497de07b:
        uVar10 = (ulonglong)uVar15;
        uStack_64 = uVar15;
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
    if ((int)uVar10 < (int)uVar15) {
      do {
        pbVar1 = (byte *)(*(longlong *)local_58 + (longlong)(int)uVar10 * 0x28);
        uVar15 = *(uint *)(pbVar1 + 4);
        uVar7 = *pbVar1 - uVar15 ^ uVar15 >> 0xd;
        uVar5 = (-0x61c88647 - uVar7) - uVar15 ^ uVar7 << 8;
        uVar12 = (uVar15 - uVar5) - uVar7 ^ uVar5 >> 0xd;
        uVar7 = (uVar7 - uVar12) - uVar5 ^ uVar12 >> 0xc;
        uVar15 = (uVar5 - uVar7) - uVar12 ^ uVar7 << 0x10;
        uVar12 = (uVar12 - uVar15) - uVar7 ^ uVar15 >> 5;
        uVar5 = (uVar7 - uVar12) - uVar15 ^ uVar12 >> 3;
        uVar15 = (uVar15 - uVar5) - uVar12 ^ uVar5 << 10;
        uVar15 = ((uVar12 - uVar15) - uVar5 ^ uVar15 >> 0xf) & *(int *)&this->field_0x48 - 1U;
        *(uint *)(pbVar1 + 0x24) = uVar15;
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar8 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar15;
        *(undefined4 *)(pbVar1 + 0x20) = *(undefined4 *)(puVar6 + uVar8 * 4);
        *(int *)(puVar6 + uVar8 * 4) = (int)uVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar10 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x0001497de191:
  for (; pTVar11 != pTVar2; pTVar11 = pTVar11 + 1) {
    local_78 = pTVar11->Key;
    pTStack_70 = pTVar11->Value;
    TSet<TTuple<FPCGMetadataDomainID,TArrayView<__int64_const_,int>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FPCGMetadataDomainID_const_&,TArrayView<__int64_const_,int>_const_&>_>
              ((TSet<TTuple<FPCGMetadataDomainID,TArrayView<__int64_const_,int>_>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,TArrayView<__int64_const_,int>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FPCGMetadataDomainID_const_&,TArrayView<__int64_const_,int>_const_&>
                        *)&stack0x00000008,(bool *)&local_78);
  }
  return this;
}

// operator= @ 1497e33b0

TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_> * __thiscall
TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>::operator=
          (TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_> *this,
          TMap<__int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,int,0>_>
          *param_1)

{
  if (this != param_1) {
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

// TMap<FPCGMetadataDomainID,FPCGMetadataDomainID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>_> @ 149b55070

TMap<FPCGMetadataDomainID,FPCGMetadataDomainID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>_>
* __thiscall
TMap<FPCGMetadataDomainID,FPCGMetadataDomainID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>_>
::
TMap<FPCGMetadataDomainID,FPCGMetadataDomainID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>_>
          (TMap<FPCGMetadataDomainID,FPCGMetadataDomainID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>_>
           *this,initializer_list<TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&>_>
                 *param_1)

{
  byte *pbVar1;
  TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&> *pTVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&> *pTVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uVar15;
  undefined8 local_78;
  FPCGMetadataDomainID *pFStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<FPCGMetadataDomainID,FPCGMetadataDomainID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar2 = param_1->_Last;
  uVar10 = 0;
  pTVar11 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  uVar15 = (uint)((longlong)pTVar2 - (longlong)pTVar11 >> 4);
  if (uVar15 == 0) goto joined_r0x000149b55361;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
  }
  TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar15);
  if (uVar15 < 4) {
    uVar15 = 1;
  }
  else {
    uVar8 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar15 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((*(int *)&this->field_0x48 != 0) && ((int)uVar15 <= *(int *)&this->field_0x48))
  goto joined_r0x000149b55361;
  *(uint *)&this->field_0x48 = uVar15;
  if (*(longlong *)&this->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x40,0,0,4);
  }
  if (uVar15 != 0) {
    uVar5 = uVar15;
    if (uVar15 < 2) {
      if (*(longlong *)&this->field_0x40 != 0) {
        uVar5 = 0;
        goto LAB_149b55155;
      }
    }
    else {
LAB_149b55155:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x40,0,uVar5,4);
    }
    if (0 < (int)uVar15) {
      uVar13 = (ulonglong)uVar15;
      uVar8 = uVar10;
      do {
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar4 = uVar8 & (longlong)(int)uVar15 - 1U;
        uVar8 = uVar8 + 1;
        *(undefined4 *)(puVar6 + uVar4 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (*(int *)&this->field_0x48 != 0) {
    uVar15 = *(uint *)&this->field_0x28;
    pFStack_70 = (FPCGMetadataDomainID *)&this->field_0x10;
    local_78 = (FPCGMetadataDomainID *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar15 != 0) {
      puVar14 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar14 = (uint *)pFStack_70;
      }
      uVar5 = *puVar14;
      uVar8 = uVar10;
      while (uVar5 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uVar5 = iVar9 + 1;
        uVar10 = (ulonglong)local_78 >> 0x20;
        local_78 = (FPCGMetadataDomainID *)CONCAT44((int)uVar10,uVar5);
        uVar10 = (ulonglong)uVar5;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar5)
        goto LAB_149b5524b;
        uVar5 = puVar14[(longlong)iVar9 + 1];
      }
      local_78 = (FPCGMetadataDomainID *)CONCAT44(-uVar5 & uVar5,SUB84(local_78,0));
      uVar10 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar15 < (int)uStack_64) {
LAB_149b5524b:
        uVar10 = (ulonglong)uVar15;
        uStack_64 = uVar15;
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
    if ((int)uVar10 < (int)uVar15) {
      do {
        pbVar1 = (byte *)(*(longlong *)local_58 + (longlong)(int)uVar10 * 0x28);
        uVar15 = *(uint *)(pbVar1 + 4);
        uVar7 = *pbVar1 - uVar15 ^ uVar15 >> 0xd;
        uVar5 = (-0x61c88647 - uVar7) - uVar15 ^ uVar7 << 8;
        uVar12 = (uVar15 - uVar5) - uVar7 ^ uVar5 >> 0xd;
        uVar7 = (uVar7 - uVar12) - uVar5 ^ uVar12 >> 0xc;
        uVar15 = (uVar5 - uVar7) - uVar12 ^ uVar7 << 0x10;
        uVar12 = (uVar12 - uVar15) - uVar7 ^ uVar15 >> 5;
        uVar5 = (uVar7 - uVar12) - uVar15 ^ uVar12 >> 3;
        uVar15 = (uVar15 - uVar5) - uVar12 ^ uVar5 << 10;
        uVar15 = ((uVar12 - uVar15) - uVar5 ^ uVar15 >> 0xf) & *(int *)&this->field_0x48 - 1U;
        *(uint *)(pbVar1 + 0x24) = uVar15;
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar8 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar15;
        *(undefined4 *)(pbVar1 + 0x20) = *(undefined4 *)(puVar6 + uVar8 * 4);
        *(int *)(puVar6 + uVar8 * 4) = (int)uVar10;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar10 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x000149b55361:
  for (; pTVar11 != pTVar2; pTVar11 = pTVar11 + 1) {
    local_78 = pTVar11->Key;
    pFStack_70 = pTVar11->Value;
    TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&>_>
              ((TSet<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainID>,TDefaultMapHashableKeyFuncs<FPCGMetadataDomainID,FPCGMetadataDomainID,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FPCGMetadataDomainID_const_&,FPCGMetadataDomainID_const_&>
                        *)&stack0x00000008,(bool *)&local_78);
  }
  return this;
}

// RemoveAndCopyValue @ 149cd68a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
TMap<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,0>_>
::RemoveAndCopyValue
          (TMap<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,0>_>
           *this,ulong64 param_1,
          TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  int iVar4;
  TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 *puVar6;
  
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar6 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar6 = &this->field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&this->field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)this;
      do {
        lVar3 = (longlong)iVar4 * 0x20;
        if (*(ulong64 *)(lVar3 + lVar1) == param_1) {
          pTVar5 = (TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_> *)
                   (lVar1 + 8 + lVar3);
          if (param_2 != pTVar5) {
            DestructItems<TSharedPtr<FPCGGraphActiveTask,1>,int>
                      ((TSharedPtr<FPCGGraphActiveTask,1> *)(param_2->AllocatorInstance).Data,
                       param_2->ArrayNum);
            pFVar2 = (param_2->AllocatorInstance).Data;
            if (pFVar2 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2);
            }
            (param_2->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
            (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            param_2->ArrayNum = pTVar5->ArrayNum;
            param_2->ArrayMax = pTVar5->ArrayMax;
            pTVar5->ArrayNum = 0;
            pTVar5->ArrayMax = 0;
          }
          TSet<TTuple<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TArray<TSharedPtr<FPCGGraphActiveTask,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                           *)this,iVar4);
          return true;
        }
        iVar4 = *(int *)(lVar3 + 0x18 + lVar1);
      } while (iVar4 != -1);
    }
  }
  return false;
}

// TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_> @ 149e34020

TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
* __thiscall
TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
::
TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
          (TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
           *this,TMap<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<APCGPartitionActor>,0>_>
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

// TMap<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,0>_> @ 14a018a70

TMap<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,0>_>
* __thiscall
TMap<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,0>_>
::
TMap<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,0>_>
          (TMap<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,0>_>
           *this,initializer_list<TPairInitializer<FPCGDataTypeIdentifier_const_&,TFunction<UPCGData_*___cdecl(void)>_const_&>_>
                 *param_1)

{
  TPairInitializer<FPCGDataTypeIdentifier_const_&,TFunction<UPCGData_*___cdecl(void)>_const_&>
  *pTVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  FPCGDataTypeIdentifier *pFVar8;
  TPairInitializer<FPCGDataTypeIdentifier_const_&,TFunction<UPCGData_*___cdecl(void)>_const_&>
  *pTVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  undefined8 local_78;
  TFunction<UPCGData_*___cdecl(void)> *pTStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar11 = 0;
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
  uVar7 = (uint)((longlong)pTVar1 - (longlong)pTVar9 >> 4);
  if (uVar7 == 0) goto joined_r0x00014a018cd7;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar7);
  }
  TSparseArrayBase<96,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<96,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar7);
  if (uVar7 < 4) {
    uVar7 = 1;
  }
  else {
    uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar7 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((*(int *)&this->field_0x48 != 0) && ((int)uVar7 <= *(int *)&this->field_0x48))
  goto joined_r0x00014a018cd7;
  *(uint *)&this->field_0x48 = uVar7;
  if (*(longlong *)&this->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x40,0,0,4);
  }
  if (uVar7 != 0) {
    uVar4 = uVar7;
    if (uVar7 < 2) {
      if (*(longlong *)&this->field_0x40 != 0) {
        uVar4 = 0;
        goto LAB_14a018b4b;
      }
    }
    else {
LAB_14a018b4b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x40,0,uVar4,4);
    }
    if (0 < (int)uVar7) {
      uVar12 = (ulonglong)uVar7;
      uVar6 = uVar11;
      do {
        puVar5 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)&this->field_0x40;
        }
        uVar3 = uVar6 & (longlong)(int)uVar7 - 1U;
        uVar6 = uVar6 + 1;
        *(undefined4 *)(puVar5 + uVar3 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  if (*(int *)&this->field_0x48 != 0) {
    uVar7 = *(uint *)&this->field_0x28;
    pTStack_70 = (TFunction<UPCGData_*___cdecl(void)> *)&this->field_0x10;
    local_78 = (FPCGDataTypeIdentifier *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar13 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar13 = (uint *)pTStack_70;
      }
      uVar4 = *puVar13;
      uVar6 = uVar11;
      while (uVar4 == 0) {
        iVar10 = (int)uVar11;
        uStack_60 = (int)uVar6 + 0x20;
        uVar6 = (ulonglong)uStack_60;
        uVar4 = iVar10 + 1;
        uVar11 = (ulonglong)local_78 >> 0x20;
        local_78 = (FPCGDataTypeIdentifier *)CONCAT44((int)uVar11,uVar4);
        uVar11 = (ulonglong)uVar4;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar4)
        goto LAB_14a018c3b;
        uVar4 = puVar13[(longlong)iVar10 + 1];
      }
      local_78 = (FPCGDataTypeIdentifier *)CONCAT44(-uVar4 & uVar4,SUB84(local_78,0));
      uVar11 = (ulonglong)(-uVar4 & uVar4) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_64 = (int)lVar2 + -1 + uStack_60;
      uVar11 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_14a018c3b:
        uVar11 = (ulonglong)uVar7;
        uStack_64 = uVar7;
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
    if ((int)uVar11 < (int)uVar7) {
      do {
        pFVar8 = (FPCGDataTypeIdentifier *)((longlong)(int)uVar11 * 0x60 + *(longlong *)local_58);
        uVar7 = ::GetTypeHash(pFVar8);
        uVar7 = *(int *)&this->field_0x48 - 1U & uVar7;
        pFVar8[3].Ids.ArrayMax = uVar7;
        puVar5 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)&this->field_0x40;
        }
        uVar6 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar7;
        pFVar8[3].Ids.ArrayNum = *(int *)(puVar5 + uVar6 * 4);
        *(int *)(puVar5 + uVar6 * 4) = (int)uVar11;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar11 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x00014a018cd7:
  for (; pTVar9 != pTVar1; pTVar9 = pTVar9 + 1) {
    local_78 = pTVar9->Key;
    pTStack_70 = pTVar9->Value;
    TSet<TTuple<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FPCGDataTypeIdentifier_const_&,TFunction<UPCGData_*___cdecl(void)>_const_&>_>
              ((TSet<TTuple<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<FPCGDataTypeIdentifier,TFunction<UPCGData_*___cdecl(void)>,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FPCGDataTypeIdentifier_const_&,TFunction<UPCGData_*___cdecl(void)>_const_&>
                        *)&stack0x00000008,(bool *)&local_78);
  }
  return this;
}

