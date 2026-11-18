// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 3

// FindOrAddImpl<unsigned_char_const_&> @ 142c8db80

int * __thiscall
TMapBase<unsigned_char,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,int,0>_>::
FindOrAddImpl<unsigned_char_const_&>
          (TMapBase<unsigned_char,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,int,0>_>
           *this,uint param_1,uchar *param_2)

{
  int iVar1;
  uchar *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uchar *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (uchar *)((longlong)iVar1 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uchar *)0x0) {
            return (int *)(puVar2 + 4);
          }
          break;
        }
        iVar1 = *(int *)(puVar2 + 8);
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_char,int>,TDefaultMapHashableKeyFuncs<unsigned_char,int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_char_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_char_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (int *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x10 + 4);
}

// GetKeys<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> @ 142c8f030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName,0>_>
::GetKeys<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          (TMapBase<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName,0>_>
           *this,TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                 *param_1)

{
  int *piVar1;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar2;
  FWeakObjectPtr FVar3;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined8 *puVar17;
  ForElementType<unsigned_int> FVar19;
  uint *puVar20;
  undefined1 auStackY_1c8 [32];
  uint local_178;
  uint uStack_174;
  uint uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined4 local_130;
  int local_12c;
  int local_128;
  undefined1 local_124 [4];
  FWeakObjectPtr local_120;
  FWeakObjectPtr local_118;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName,0>_>
  *local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  ulonglong uVar18;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar18 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar16 = 0;
  if (uVar13 == 0) goto LAB_142c8f2ff;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_130 = (undefined4)lVar5;
    uVar14 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_142c8f2ff;
  local_50 = uVar14;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_142c8f151;
      }
    }
    else {
LAB_142c8f151:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar15 = (ulonglong)uVar14;
      uVar12 = uVar18;
      do {
        FVar11.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_58.Data;
        }
        uVar9 = uVar12 & (longlong)(int)uVar14 - 1U;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(FVar11.Data + uVar9 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_178 = 0;
    uStack_174 = 1;
    uStack_164 = 0;
    uStack_160 = 0;
    uVar12 = uVar18;
    if (local_70 != 0) {
      FVar19 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_78;
      }
      uVar13 = *(uint *)FVar19;
      uVar15 = uVar18;
      while (uVar13 == 0) {
        uStack_160 = (int)uVar15 + 0x20;
        uVar15 = (ulonglong)uStack_160;
        iVar8 = (int)uVar12;
        local_178 = iVar8 + 1;
        uVar12 = (ulonglong)local_178;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_178)
        goto LAB_142c8f262;
        uVar13 = ((uint *)((longlong)FVar19 + 4))[iVar8];
      }
      uStack_174 = -uVar13 & uVar13;
      uVar12 = (ulonglong)uStack_174 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_12c = (int)lVar5;
      uStack_164 = local_12c + -1 + uStack_160;
      uVar12 = (ulonglong)uStack_164;
      if ((int)local_70 < (int)uStack_164) {
LAB_142c8f262:
        uVar12 = (ulonglong)local_70;
        uStack_164 = local_70;
      }
    }
    local_110 = (longlong *)local_98;
    local_108._padding_ = CONCAT44(uStack_174,local_178);
    local_108.CurrentBitIndex = uStack_164;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_15c;
    local_108.BaseBitIndex = uStack_160;
    if ((int)uVar12 < (int)local_70) {
      do {
        puVar17 = (undefined8 *)((longlong)(int)uVar12 * 0x10 + *local_110);
        uVar13 = ((uint)((ulonglong)*puVar17 >> 0x20) ^ (uint)*puVar17) & local_50 - 1;
        *(uint *)((longlong)puVar17 + 0xc) = uVar13;
        FVar11.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_58.Data;
        }
        uVar15 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(FVar11.Data + uVar15 * 4);
        *(int *)(FVar11.Data + uVar15 * 4) = (int)uVar12;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar12 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_142c8f2ff:
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
              (8,4,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar13 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar12 = uVar18;
  local_c8 = uVar16;
  uStack_dc = 1;
  if (uVar13 != 0) {
    puVar20 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar12 = (ulonglong)uVar13;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)TStack_150.Array;
    }
    uVar14 = *puVar20;
    uVar15 = uVar18;
    local_c8 = 0;
    uVar16 = 0;
    while (uVar14 == 0) {
      iVar8 = (int)uVar18;
      local_c8 = (int)uVar15 + 0x20;
      uVar15 = (ulonglong)local_c8;
      uVar16 = iVar8 + 1;
      uVar18 = (ulonglong)uVar16;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_142c8f3be;
      uVar14 = puVar20[(longlong)iVar8 + 1];
    }
    uStack_dc = -uVar14 & uVar14;
    uVar18 = (ulonglong)uStack_dc * 2 + 1;
    lVar5 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_128 = (int)lVar5;
    uVar14 = (local_c8 - 1) + local_128;
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
    uVar12 = (ulonglong)uVar14;
  }
LAB_142c8f3be:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar12;
  uStack_c4 = local_9c;
  TStack_150._padding_ = CONCAT44(uStack_dc,uVar16);
  TStack_150.UnvisitedBitMask = 0xffffffff;
  TStack_150._28_4_ = local_9c;
  TStack_150.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar16;
  local_d8 = (undefined1 *)TStack_150.Array;
  TStack_150.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar13) {
    do {
      FVar3 = *(FWeakObjectPtr *)
               (*(longlong *)&(this->Pairs).Elements + (longlong)(int)uVar12 * 0x18);
      if (local_98._8_4_ != local_64) {
        FVar11.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar11.Data = local_58.Data;
        }
        for (iVar8 = *(int *)(FVar11.Data +
                             (ulonglong)
                             (local_50 - 1 & (FVar3.ObjectSerialNumber ^ FVar3.ObjectIndex)) * 4);
            iVar8 != -1; iVar8 = *(int *)(local_98._0_8_ + (longlong)iVar8 * 0x10 + 8)) {
          local_118 = *(FWeakObjectPtr *)(local_98._0_8_ + (longlong)iVar8 * 0x10);
          local_120 = FVar3;
          bVar7 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::
                  UEOpEquals<UScriptStruct_const_,bool>
                            ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_118,
                             (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_120);
          if (bVar7) goto LAB_142c8f588;
        }
      }
      FVar4 = (param_1->AllocatorInstance).SecondaryData;
      FVar2 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
              (*(longlong *)&(this->Pairs).Elements + (longlong)(int)uVar12 * 0x18);
      FVar10 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)param_1;
      if (FVar4 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
        FVar10 = FVar4;
      }
      if ((ulonglong)FVar10 <= (ulonglong)FVar2) {
        FVar10 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)param_1;
        if (FVar4 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
          FVar10 = FVar4;
        }
        if (((ulonglong)FVar2 < (ulonglong)((longlong)FVar10 + (longlong)*piVar1 * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          iVar8 = (*pcVar6)();
          return iVar8;
        }
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
                          (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar8 + 1;
      FVar4 = (param_1->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)param_1;
      if (FVar4 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
        FVar10 = FVar4;
      }
      *(undefined8 *)((longlong)FVar10 + (longlong)iVar8 * 8) = *(undefined8 *)FVar2;
      TSet<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Emplace<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_const_&>
                ((TSet<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  *)local_98,(TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)local_124,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_150.CurrentBitIndex * 0x18));
LAB_142c8f588:
      TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
      uVar12 = (ulonglong)(uint)TStack_150.CurrentBitIndex;
    } while (TStack_150.CurrentBitIndex < (TStack_150.Array)->NumBits);
  }
  iVar8 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar8;
}

// Find @ 142cabab0

TVariant<bool,unsigned___int64,__int64,double,FString> * __thiscall
TMapBase<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
::Find(TMapBase<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TVariant<bool,unsigned___int64,__int64,double,FString> *pTVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x28;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x28) == param_1) {
          pTVar5 = (TVariant<bool,unsigned___int64,__int64,double,FString> *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TVariant<bool,unsigned___int64,__int64,double,FString> *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  return (TVariant<bool,unsigned___int64,__int64,double,FString> *)0x0;
}

