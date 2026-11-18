// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeFactoryNodes
// Functions: 6

// Emplace<TPairInitializer<FString_const_&,FInterchangeAnimationPayLoadKey_&&>_> @ 14e526020

FSetElementId __thiscall
TSet<TTuple<FString,FInterchangeAnimationPayLoadKey>,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,FInterchangeAnimationPayLoadKey_&&>_>
          (TSet<TTuple<FString,FInterchangeAnimationPayLoadKey>,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,FInterchangeAnimationPayLoadKey_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar7 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer == (TSparseSetElement<TTuple<FString,FInterchangeAnimationPayLoadKey>_> *)0x0
     ) {
    local_38.Pointer = (TSparseSetElement<TTuple<FString,FInterchangeAnimationPayLoadKey>_> *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)(param_2 + 8);
    ::FString::FString(local_38.Pointer,*(FString **)param_2);
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = *puVar3;
    *puVar3 = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = *(undefined4 *)(puVar3 + 1);
    *(undefined4 *)((longlong)local_38.Pointer + 0x1c) = *(undefined4 *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    *(undefined1 *)((longlong)local_38.Pointer + 0x20) = *(undefined1 *)(puVar3 + 2);
    *(undefined4 *)((longlong)local_38.Pointer + 0x28) = 0xffffffff;
  }
  iVar7 = 0;
  local_res8[0] = local_38.Index;
  if (*(int *)&((TSparseSetElement<TTuple<FString,FInterchangeAnimationPayLoadKey>_> *)
               local_38.Pointer)->field_0x8 == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = *(wchar_t **)local_38.Pointer;
    iVar7 = *(int *)&((TSparseSetElement<TTuple<FString,FInterchangeAnimationPayLoadKey>_> *)
                     local_38.Pointer)->field_0x8 + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
  bVar4 = TryReplaceExisting(this,uVar6,local_38.Pointer,local_res8,in_R9);
  if (!bVar4) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)&((TSparseSetElement<TTuple<FString,FInterchangeAnimationPayLoadKey>_> *)
                local_38.Pointer)->field_0x2c = uVar6;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)
       &((TSparseSetElement<TTuple<FString,FInterchangeAnimationPayLoadKey>_> *)local_38.Pointer)->
        field_0x28 = *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
      *(int *)((longlong)FVar11 + uVar8 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Rehash @ 14e55f3e0

void __thiscall
TSet<TTuple<FString,FInterchangeAnimationPayLoadKey>,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,FInterchangeAnimationPayLoadKey>,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar5 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar5 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar4 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e55f4b7;
        uVar4 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar5 < iStack_54) {
LAB_14e55f4b7:
        iStack_54 = iVar5;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar5) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        puVar10 = (undefined8 *)
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x30);
        iVar5 = *(int *)(puVar10 + 1) + -1;
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar8 = L"";
          iVar5 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar10;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)puVar10 + 0x2c) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 5) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14e55f590

void __thiscall
TSet<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>_>
              *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x1c = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x18 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// Reserve @ 14e55f9c0

void __thiscall
TSet<TTuple<FString,FInterchangeAnimationPayLoadKey>,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>,FDefaultSetAllocator>
::Reserve(TSet<TTuple<FString,FInterchangeAnimationPayLoadKey>,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>,FDefaultSetAllocator>
          *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((uint)(*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) <
      (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,param_1);
    if ((uint)param_1 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar3)) {
      this->HashSize = iVar3;
      Rehash(this);
    }
  }
  return;
}

// TryReplaceExisting @ 14e57fdc0

bool __thiscall
TSet<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<UClass_*,TArray<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  int iVar1;
  longlong lVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  void *_Dst;
  bool bVar5;
  
  iVar4 = *(int *)&(this->Elements).field_0x8;
  bVar5 = false;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  if ((iVar4 - iVar1 != 1) && (iVar4 != iVar1)) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar4 * 0x20 + lVar2) == *(longlong *)param_2) {
          bVar5 = iVar4 != -1;
          if (bVar5) {
            _Dst = (void *)((longlong)iVar4 * 0x20 + lVar2);
            DestructItems<TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>,int>
                      (*(TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> **)
                        ((longlong)_Dst + 8),*(int *)((longlong)_Dst + 0x10));
            if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 8));
            }
            memmove(_Dst,param_2,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,*param_3,1);
            *param_3 = iVar4;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar2);
      } while (iVar4 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar5;
  }
  return bVar5;
}

// TryReplaceExisting @ 14e57fee0

bool __thiscall
TSet<TTuple<FString,FInterchangeAnimationPayLoadKey>,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FString,FInterchangeAnimationPayLoadKey>,TDefaultMapHashableKeyFuncs<FString,FInterchangeAnimationPayLoadKey,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FString,FInterchangeAnimationPayLoadKey>_> *param_2,int *param_3,
          bool *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ForElementType<FSetElementId> FVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined8 *_Dst;
  bool bVar14;
  
  iVar2 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if ((iVar2 - iVar7 != 1) && (iVar2 != iVar7)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      lVar9 = (longlong)iVar2;
      iVar7 = *(int *)(*(longlong *)&this->Elements + 8 + lVar9 * 0x30);
      if (iVar7 == *(int *)&param_2->field_0x8) {
        if (1 < iVar7) {
          iVar7 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(*(longlong *)&this->Elements + lVar9 * 0x30),
                             *(wchar_t **)param_2);
          bVar14 = iVar7 == 0;
          goto LAB_14e57ff74;
        }
LAB_14e57ffb5:
        bVar14 = true;
        _Dst = (undefined8 *)((longlong)iVar2 * 0x30 + *(longlong *)&this->Elements);
        if ((void *)_Dst[2] != (void *)0x0) {
          FMemory::Free((void *)_Dst[2]);
        }
        if ((void *)*_Dst != (void *)0x0) {
          FMemory::Free((void *)*_Dst);
        }
        memmove(_Dst,param_2,0x28);
        iVar7 = *param_3;
        puVar1 = &(this->Elements).field_0x10;
        lVar9 = *(longlong *)&this->Elements;
        bVar4 = (byte)iVar7 & 0x1f;
        uVar13 = 1 << bVar4 | 1U >> 0x20 - bVar4;
        if (((iVar7 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar7)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = puVar1;
        }
        if (((*(uint *)(puVar12 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4) &
             uVar13) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocationFlags[Index]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                               ,0xc5,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if (*(int *)&(this->Elements).field_0x34 != 0) {
          *(int *)(lVar9 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x30) = iVar7;
        }
        uVar8 = 0xffffffff;
        puVar10 = (undefined4 *)((longlong)iVar7 * 0x30 + lVar9);
        *puVar10 = 0xffffffff;
        if (0 < *(int *)&(this->Elements).field_0x34) {
          uVar8 = *(undefined4 *)&(this->Elements).field_0x30;
        }
        puVar10[1] = uVar8;
        puVar12 = &(this->Elements).field_0x34;
        *(int *)puVar12 = *(int *)puVar12 + 1;
        *(int *)&(this->Elements).field_0x30 = iVar7;
        if (((iVar7 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar7)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
        if (puVar12 == (undefined1 *)0x0) {
          puVar12 = puVar1;
        }
        *(uint *)(puVar12 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4) =
             *(uint *)(puVar12 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4) &
             ~uVar13;
        *param_3 = iVar2;
        goto LAB_14e57ff8f;
      }
      bVar14 = iVar7 + *(int *)&param_2->field_0x8 == 1;
LAB_14e57ff74:
      if (bVar14) goto LAB_14e57ffb5;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 0x28 + lVar9 * 0x30);
    }
    bVar14 = false;
  }
LAB_14e57ff8f:
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

