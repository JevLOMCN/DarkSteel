// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 138

// FindOrAddImpl<LowLevelTasks::FTask_const_*_const_&> @ 14150c9e0

TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<LowLevelTasks::FTask_const_*_const_&>
          (TMapBase<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FTask **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FTask **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((FTask *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_> *)
                   (plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<LowLevelTasks::FTask_const_*,TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<LowLevelTasks::FTask_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<LowLevelTasks::FTask_const_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<TRefCountPtr<IExecutionResource>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Remove @ 1415e0ed0

int __thiscall
TMapBase<int,`anonymous_namespace'::FContainerTestValueType,TFixedSetAllocator<64>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>_>
::Remove(TMapBase<int,_anonymous_namespace_::FContainerTestValueType,TFixedSetAllocator<64>,TDefaultMapHashableKeyFuncs<int,_anonymous_namespace_::FContainerTestValueType,0>_>
         *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x800 != *(int *)&(this->Pairs).Elements.field_0x81c) {
    iVar4 = *(int *)(this->Pairs).Hash.InlineData
                    [(longlong)(this->Pairs).HashSize - 1U & (longlong)param_1].Pad;
    while (iVar4 != -1) {
      piVar5 = (int *)(&(this->Pairs).Elements.field_0x0 + (longlong)iVar4 * 0x20);
      if (*piVar5 == param_1) {
        bVar3 = TSparseArrayBase<32,8,TFixedSparseArrayAllocator<64>_>::IsValidIndex
                          ((TSparseArrayBase<32,8,TFixedSparseArrayAllocator<64>_> *)this,iVar4);
        if ((!bVar3) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Elements.IsValidIndex(ElementIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2ab,
                               L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex"),
           bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        lVar7 = ((longlong)piVar5[7] + 0x208) * 4;
        while( true ) {
          piVar6 = (int *)(&(this->Pairs).Elements.field_0x0 + lVar7);
          iVar1 = *piVar6;
          if ((iVar1 == -1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash"), bVar3)) break;
          if (iVar1 == iVar4) {
            *piVar6 = piVar5[6];
            TSparseArray<TSparseSetElement<TTuple<int,`anonymous_namespace'::FContainerTestValueType>_>,TFixedSparseArrayAllocator<64>_>
            ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,_anonymous_namespace_::FContainerTestValueType>_>,TFixedSparseArrayAllocator<64>_>
                               *)this,iVar4,1);
            TSparseArrayBase<32,8,TFixedSparseArrayAllocator<64>_>::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TFixedSparseArrayAllocator<64>_> *)this,iVar4,1);
            return 1;
          }
          lVar7 = (longlong)iVar1 * 0x20 + 0x18;
        }
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      iVar4 = piVar5[6];
    }
  }
  return 0;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 141613490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  FString *pFVar20;
  undefined1 auStackY_198 [32];
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  FString local_f4;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  piVar1 = &param_1->ArrayMax;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar17 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar19 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_141613789;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_100 = (undefined4)lVar9;
    uVar14 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_141613789;
  local_50 = uVar14;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar13 = 0;
        goto LAB_1416135d0;
      }
    }
    else {
LAB_1416135d0:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
      uVar10 = uVar17;
      do {
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = (longlong)(int)uVar14 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_148 = 0;
    uStack_144 = 1;
    uStack_134 = 0;
    uStack_130 = 0;
    uVar10 = uVar17;
    if (local_70 != 0) {
      puVar18 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar18 = local_78;
      }
      uVar13 = *puVar18;
      uVar16 = uVar17;
      while (uVar13 == 0) {
        uStack_130 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_130;
        iVar6 = (int)uVar10;
        local_148 = iVar6 + 1;
        uVar10 = (ulonglong)local_148;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
        goto LAB_1416136d0;
        uVar13 = puVar18[(longlong)iVar6 + 1];
      }
      uStack_144 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_144 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_fc = (int)lVar9;
      uStack_134 = local_fc + -1 + uStack_130;
      uVar10 = (ulonglong)uStack_134;
      if ((int)local_70 < (int)uStack_134) {
LAB_1416136d0:
        uVar10 = (ulonglong)local_70;
        uStack_134 = local_70;
      }
    }
    local_b8._padding_ = CONCAT44(uStack_144,local_148);
    local_b8.CurrentBitIndex = uStack_134;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_12c;
    local_b8.BaseBitIndex = uStack_130;
    local_c0 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar12 = (int)uVar10;
        puVar2 = (undefined8 *)(*(longlong *)&local_c0->Elements + (longlong)iVar12 * 0x18);
        iVar6 = *(int *)(*(longlong *)&local_c0->Elements + 8 + (longlong)iVar12 * 0x18);
        if (iVar6 == 0) {
          pwVar11 = L"";
          uVar13 = uVar19;
        }
        else {
          pwVar11 = (wchar_t *)*puVar2;
          uVar13 = iVar6 - 1;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
        uVar13 = local_50 - 1 & uVar13;
        *(uint *)((longlong)puVar2 + 0x14) = uVar13;
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar8.Data + uVar10 * 4);
        *(int *)((longlong)FVar8.Data + uVar10 * 4) = iVar12;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar10 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_141613789:
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar13 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar17;
  local_f4.Data.ArrayMax = uVar19;
  local_d0 = uVar19;
  uStack_e4 = 1;
  if (uVar13 != 0) {
    puVar18 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar13;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_120.Array;
    }
    uVar14 = *puVar18;
    uVar16 = uVar17;
    while( true ) {
      local_f4.Data.ArrayMax = (int)uVar17;
      local_d0 = (uint)uVar16;
      if (uVar14 != 0) break;
      lVar9 = (longlong)local_f4.Data.ArrayMax;
      local_d0 = local_d0 + 0x20;
      uVar16 = (ulonglong)local_d0;
      local_f4.Data.ArrayMax = local_f4.Data.ArrayMax + 1;
      uVar17 = (ulonglong)(uint)local_f4.Data.ArrayMax;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < local_f4.Data.ArrayMax)
      goto LAB_14161382f;
      uVar14 = puVar18[lVar9 + 1];
    }
    uStack_e4 = -uVar14 & uVar14;
    uVar17 = (ulonglong)uStack_e4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f8 = (int)lVar9;
    uVar14 = (local_d0 - 1) + local_f8;
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
    uVar10 = (ulonglong)uVar14;
  }
LAB_14161382f:
  uStack_d4 = (uint)uVar10;
  uStack_d8 = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_e4,local_f4.Data.ArrayMax);
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._28_4_ = uStack_d4;
  TStack_120.BaseBitIndex = local_d0;
  local_f4.Data._4_8_ = this;
  local_e0 = (undefined1 *)TStack_120.Array;
  uStack_cc = uStack_d4;
  TStack_120.CurrentBitIndex = uStack_d4;
  if ((int)uStack_d4 < (int)uVar13) {
    do {
      lVar9 = (longlong)(int)uVar10 * 0x20;
      pFVar20 = (FString *)(*(longlong *)&(this->Pairs).Elements + lVar9);
      iVar6 = (pFVar20->Data).ArrayNum;
      if (iVar6 == 0) {
        pwVar11 = L"";
        uVar13 = uVar19;
      }
      else {
        pwVar11 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        uVar13 = iVar6 - 1;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
      iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>
                        ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                         uVar13,pFVar20);
      if (iVar6 == -1) {
        pFVar15 = (FScriptContainerElement *)(lVar9 + *(longlong *)&(this->Pairs).Elements);
        pFVar3 = (param_1->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar15) && (pFVar15 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar6 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                           (FString *)pFVar15);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                   &local_f4,
                   (bool *)((longlong)TStack_120.CurrentBitIndex * 0x20 +
                           *(longlong *)&(this->Pairs).Elements));
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      uVar10 = (ulonglong)(uint)TStack_120.CurrentBitIndex;
    } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
  }
  iVar6 = param_1->ArrayNum;
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar6;
}

// Find @ 14163a640

FString * __thiscall
TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::Find
          (TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar3 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pFVar6 = (FString *)0x0;
    if (lVar1 != 0) {
      pFVar6 = (FString *)(lVar1 + 0x10);
    }
    return pFVar6;
  }
  return (FString *)0x0;
}

// FindChecked @ 14163abd0

uint * __thiscall
TMapBase<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
::FindChecked(TMapBase<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
              *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  ForElementType<FSetElementId> FVar8;
  
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x14;
        if (*(FName *)(lVar2 + (longlong)iVar6 * 0x14) == param_1) {
          if (lVar1 != 0) {
            return (uint *)(lVar1 + 8);
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0xc);
      } while (iVar6 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (uint *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  puVar7 = (uint *)(*pcVar3)();
  return puVar7;
}

// FindChecked @ 14163ac90

IConsoleObject ** __thiscall
TMapBase<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
::FindChecked(TMapBase<FString,IConsoleObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  IConsoleObject **ppIVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,IConsoleObject_*>,TDefaultMapHashableKeyFuncs<FString,IConsoleObject_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppIVar5 = (IConsoleObject **)(*pcVar1)();
      return ppIVar5;
    }
  }
  return (IConsoleObject **)(lVar8 + 0x10);
}

// Emplace<FName,unsigned___int64> @ 141670cd0

ulong64 * __thiscall
TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
::Emplace<FName,unsigned___int64>
          (TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
           *this,FName *param_1,ulong64 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,unsigned___int64>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    *(ulong64 *)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (ulong64 *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x18 + 8);
}

// EmplaceByHash<FName_const_&,unsigned___int64> @ 141670e10

ulong64 * __thiscall
TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
::EmplaceByHash<FName_const_&,unsigned___int64>
          (TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
           *this,uint param_1,FName *param_2,ulong64 *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar5 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,unsigned___int64>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_2;
    *(ulong64 *)((longlong)local_28.Pointer + 8) = *param_3;
    *(undefined4 *)((longlong)local_28.Pointer + 0x10) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  bVar3 = TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_28.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_28.Pointer,local_res8[0]);
  }
  return (ulong64 *)(*(longlong *)&(this->Pairs).Elements + lVar5 * 0x18 + 8);
}

// FindOrAddImpl<UE::LLMPrivate::FTagData_const_*_const_&> @ 141671b70

FTrackerTagSizeData * __thiscall
TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
::FindOrAddImpl<UE::LLMPrivate::FTagData_const_*_const_&>
          (TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
           *this,uint param_1,FTagData **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> *pFVar3;
  int local_res8 [6];
  FTagData **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x10 != *(int *)&(this->Pairs).Elements.field_0x44) {
    pFVar3 = *(ForElementType<FSetElementId> **)&(this->Pairs).Hash.SecondaryData;
    if (pFVar3 == (ForElementType<FSetElementId> *)0x0) {
      pFVar3 = &(this->Pairs).Hash;
    }
    iVar1 = *(int *)(pFVar3->InlineData + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if ((FTagData *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FTrackerTagSizeData *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>,FDefaultSetLLMAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::LLMPrivate::FTagData_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UE::LLMPrivate::FTagData_const_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FTrackerTagSizeData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 8);
}

// FindOrAddImpl<FString_const_&> @ 141671c20

int * __thiscall
TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
FindOrAddImpl<FString_const_&>
          (TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (int *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
  EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (int *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 141671cb0

FLockData * __thiscall
TMapBase<FString,FManagedStorageFileLockRegistry::FLockData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedStorageFileLockRegistry::FLockData,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,FManagedStorageFileLockRegistry::FLockData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FManagedStorageFileLockRegistry::FLockData,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FManagedStorageFileLockRegistry::FLockData>,TDefaultMapHashableKeyFuncs<FString,FManagedStorageFileLockRegistry::FLockData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,FManagedStorageFileLockRegistry::FLockData>,TDefaultMapHashableKeyFuncs<FString,FManagedStorageFileLockRegistry::FLockData,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (FLockData *)(lVar2 + 0x10);
}

// FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*> @ 141671d30

FTagData ** __thiscall
TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
::FindOrAddImpl<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>
          (TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
           *this,uint param_1,FTagDataNameKey *param_2,FTagData **param_3)

{
  FName *pFVar1;
  uint uVar2;
  ForElementType<FSetElementId> *pFVar3;
  int local_res8 [2];
  FTagDataNameKey *local_18;
  FTagData **local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x10 != *(int *)&(this->Pairs).Elements.field_0x44) {
    pFVar3 = *(ForElementType<FSetElementId> **)&(this->Pairs).Hash.SecondaryData;
    if (pFVar3 == (ForElementType<FSetElementId> *)0x0) {
      pFVar3 = &(this->Pairs).Hash;
    }
    uVar2 = *(uint *)(pFVar3->InlineData + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar1 = (FName *)((longlong)(int)uVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*pFVar1 == param_2->Name) &&
           ((ELLMTagSet)pFVar1[1].ComparisonIndex.Value == param_2->TagSet)) {
          if ((uVar2 != 0xffffffff) && (pFVar1 != (FName *)0x0)) {
            return (FTagData **)(pFVar1 + 2);
          }
          break;
        }
        uVar2 = pFVar1[3].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*>,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>,FDefaultSetLLMAllocator>
  ::
  EmplaceByHash<TPairInitializer<UE::LLMPrivate::FTagDataNameKey_&&,UE::LLMPrivate::FTagData_*_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<UE::LLMPrivate::FTagDataNameKey_&&,UE::LLMPrivate::FTagData_*_&&> *)
             (ulonglong)param_1,(bool *)&local_18);
  return (FTagData **)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10)
  ;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 141672760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
           *this,TArray<UE::LLMPrivate::FTagData_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong *puVar15;
  ForElementType<unsigned_int> FVar17;
  uint *puVar18;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayLLMAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
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
  ulonglong uVar16;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar16 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_1->AllocatorInstance,0,piVar1);
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
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x10 - *(int *)&(this->Pairs).Elements.field_0x44;
  uVar14 = 0;
  if (uVar10 == 0) goto LAB_141672a40;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar10);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar10);
  uVar11 = 1;
  if (3 < uVar10) {
    uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_120 = (undefined4)lVar3;
    uVar11 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar11 <= (int)local_50)) goto LAB_141672a40;
  local_50 = uVar11;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar11 != 0) {
    uVar10 = uVar11;
    if (uVar11 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar10 = 0;
        goto LAB_141672871;
      }
    }
    else {
LAB_141672871:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar10,4);
    }
    if (0 < (int)uVar11) {
      uVar13 = (ulonglong)uVar11;
      uVar9 = uVar16;
      do {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = uVar9 & (longlong)(int)uVar11 - 1U;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar9 = uVar16;
    if (local_70 != 0) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_78;
      }
      uVar10 = *(uint *)FVar17;
      uVar13 = uVar16;
      while (uVar10 == 0) {
        uStack_150 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_150;
        iVar6 = (int)uVar9;
        local_168 = iVar6 + 1;
        uVar9 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_141672982;
        uVar10 = ((uint *)((longlong)FVar17 + 4))[iVar6];
      }
      uStack_164 = -uVar10 & uVar10;
      uVar9 = (ulonglong)uStack_164 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_11c = (int)lVar3;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar9 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_141672982:
        uVar9 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar9 < (int)local_70) {
      do {
        puVar15 = (ulonglong *)((longlong)(int)uVar9 * 0x10 + *(longlong *)local_114._4_8_);
        uVar10 = ((uint)(*puVar15 >> 0x14) & 0xffff ^ (uint)(*puVar15 >> 4)) * -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        uVar10 = (uVar10 >> 0x10 ^ uVar10) & local_50 - 1;
        *(uint *)((longlong)puVar15 + 0xc) = uVar10;
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar13 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar8.Data + uVar13 * 4);
        *(int *)(FVar8.Data + uVar13 * 4) = (int)uVar9;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar9 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_141672a40:
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x10 - *(int *)&(this->Pairs).Elements.field_0x44;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (*piVar1 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar10,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar10 = *(uint *)&(this->Pairs).Elements.field_0x38;
  TStack_140.Array = (TBitArray<FDefaultBitArrayLLMAllocator> *)&(this->Pairs).Elements.field_0x18;
  uVar9 = uVar16;
  local_c8 = uVar14;
  uStack_dc = 1;
  if (uVar10 != 0) {
    puVar18 = *(uint **)&(this->Pairs).Elements.field_0x28;
    uVar9 = (ulonglong)uVar10;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_140.Array;
    }
    uVar11 = *puVar18;
    uVar13 = uVar16;
    local_c8 = 0;
    uVar14 = 0;
    while (uVar11 == 0) {
      iVar6 = (int)uVar16;
      local_c8 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)local_c8;
      uVar14 = iVar6 + 1;
      uVar16 = (ulonglong)uVar14;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_141672aee;
      uVar11 = puVar18[(longlong)iVar6 + 1];
    }
    uStack_dc = -uVar11 & uVar11;
    uVar16 = (ulonglong)uStack_dc * 2 + 1;
    lVar3 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_118 = (int)lVar3;
    uVar11 = (local_c8 - 1) + local_118;
    if ((int)uVar10 < (int)uVar11) {
      uVar11 = uVar10;
    }
    uVar9 = (ulonglong)uVar11;
  }
LAB_141672aee:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar9;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar14);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar14;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar10) {
    do {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      uVar16 = *(ulonglong *)((longlong)(int)uVar9 * 0x38 + lVar3);
      uVar14 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      if (local_98._8_4_ != local_64) {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        for (iVar6 = *(int *)(FVar8.Data + (ulonglong)(local_50 - 1 & (uVar14 >> 0x10 ^ uVar14)) * 4
                             ); iVar6 != -1;
            iVar6 = *(int *)(local_98._0_8_ + (longlong)iVar6 * 0x10 + 8)) {
          if (*(ulonglong *)(local_98._0_8_ + (longlong)iVar6 * 0x10) == uVar16) goto LAB_141672c7a;
        }
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      pFVar12 = (FScriptContainerElement *)((longlong)(int)uVar9 * 0x38 + lVar3);
      if (((pFVar2 <= pFVar12) && (pFVar12 < pFVar2 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      iVar6 = param_1->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar6 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           *(undefined8 *)pFVar12;
      TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetAllocator>
      ::Emplace<UE::LLMPrivate::FTagData_const_*_const_&>
                ((TSet<UE::LLMPrivate::FTagData_const_*,DefaultKeyFuncs<UE::LLMPrivate::FTagData_const_*,0>,FDefaultSetAllocator>
                  *)local_98,(FTagData **)local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x38 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_141672c7a:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayLLMAllocator>::FindFirstSetBit(&TStack_140);
      uVar9 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar6 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<UE::LLMPrivate::FTagData_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::LLMPrivate::FTagData_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UE::LLMPrivate::FTagData_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar6;
}

// Find @ 1416930f0

FTrackerTagSizeData * __thiscall
TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
::Find(TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
       *this,FTagData *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> *pFVar3;
  FTrackerTagSizeData *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x10 != *(int *)&(this->Pairs).Elements.field_0x44) {
    pFVar3 = *(ForElementType<FSetElementId> **)&(this->Pairs).Hash.SecondaryData;
    if (pFVar3 == (ForElementType<FSetElementId> *)0x0) {
      pFVar3 = &(this->Pairs).Hash;
    }
    iVar1 = *(int *)(pFVar3->InlineData +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if ((FTagData *)*plVar2 == param_1) {
          pFVar4 = (FTrackerTagSizeData *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FTrackerTagSizeData *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[6];
      } while (iVar1 != -1);
    }
  }
  return (FTrackerTagSizeData *)0x0;
}

// Find @ 141693190

FTagData ** __thiscall
TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
::Find(TMapBase<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagDataNameKey,UE::LLMPrivate::FTagData_*,0>_>
       *this,FTagDataNameKey *param_1)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  ForElementType<FSetElementId> *pFVar4;
  FName *pFVar5;
  
  FVar1 = param_1->Name;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x10 != *(int *)&(this->Pairs).Elements.field_0x44) {
    pFVar4 = *(ForElementType<FSetElementId> **)&(this->Pairs).Hash.SecondaryData;
    if (pFVar4 == (ForElementType<FSetElementId> *)0x0) {
      pFVar4 = &(this->Pairs).Hash;
    }
    uVar2 = *(uint *)(pFVar4->InlineData +
                     (ulonglong)
                     ((this->Pairs).HashSize - 1U &
                     (uint)param_1->TagSet * 0x65 + uVar2 + FVar1.Number) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar3 = (FName *)((longlong)(int)uVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*pFVar3 == param_1->Name) &&
           ((ELLMTagSet)pFVar3[1].ComparisonIndex.Value == param_1->TagSet)) {
          if (uVar2 == 0xffffffff) {
            return (FTagData **)0x0;
          }
          pFVar5 = (FName *)0x0;
          if (pFVar3 != (FName *)0x0) {
            pFVar5 = pFVar3 + 2;
          }
          return (FTagData **)pFVar5;
        }
        uVar2 = pFVar3[3].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  return (FTagData **)0x0;
}

// Emplace<FLocKey_const_&,TSharedRef<FManifestEntry,1>_const_&> @ 1416cb4c0

TSharedRef<FManifestEntry,1> * __thiscall
TMapBase<FLocKey,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>_>
::Emplace<FLocKey_const_&,TSharedRef<FManifestEntry,1>_const_&>
          (TMapBase<FLocKey,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>_>
           *this,FLocKey *param_1,TSharedRef<FManifestEntry,1> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  int iVar5;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>_> *)0x0)
  {
    ::FString::FString(local_18.Pointer,&param_1->Str);
    *(uint *)((longlong)local_18.Pointer + 0x10) = param_1->Hash;
    *(FManifestEntry **)((longlong)local_18.Pointer + 0x18) = param_2->Object;
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_18.Pointer + 0x20) = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_18.Pointer + 0x28) = 0xffffffff;
  }
  TSet<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,*(uint *)((longlong)local_18.Pointer + 0x10),local_18.Pointer,
                 local_18.Index);
  return (TSharedRef<FManifestEntry,1> *)
         (*(longlong *)&(this->Pairs).Elements + 0x18 + (longlong)local_18.Index * 0x30);
}

// Emplace<FLocKey_const_&,TSharedRef<FManifestEntry,1>_> @ 1416cb5f0

TSharedRef<FManifestEntry,1> * __thiscall
TMapBase<FLocKey,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>_>
::Emplace<FLocKey_const_&,TSharedRef<FManifestEntry,1>_>
          (TMapBase<FLocKey,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>_>
           *this,FLocKey *param_1,TSharedRef<FManifestEntry,1> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  int iVar5;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>_> *)0x0)
  {
    ::FString::FString(local_18.Pointer,&param_1->Str);
    *(uint *)((longlong)local_18.Pointer + 0x10) = param_1->Hash;
    *(FManifestEntry **)((longlong)local_18.Pointer + 0x18) = param_2->Object;
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)((longlong)local_18.Pointer + 0x20) = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_18.Pointer + 0x28) = 0xffffffff;
  }
  TSet<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,*(uint *)((longlong)local_18.Pointer + 0x10),local_18.Pointer,
                 local_18.Index);
  return (TSharedRef<FManifestEntry,1> *)
         (*(longlong *)&(this->Pairs).Elements + 0x18 + (longlong)local_18.Index * 0x30);
}

// FindOrAddImpl<FString_const_&> @ 1416cde80

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x10);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 1416cdf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FString *pFVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStackY_198 [32];
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  FString local_f4;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  piVar1 = &param_1->ArrayMax;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar18 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar20 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_1416ce1f9;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_100 = (undefined4)lVar9;
    uVar14 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_1416ce1f9;
  local_50 = uVar14;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar13 = 0;
        goto LAB_1416ce040;
      }
    }
    else {
LAB_1416ce040:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar17 = (ulonglong)uVar14;
      uVar10 = uVar18;
      do {
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = (longlong)(int)uVar14 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (local_50 != 0) {
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_148 = 0;
    uStack_144 = 1;
    uStack_134 = 0;
    uStack_130 = 0;
    uVar10 = uVar18;
    if (local_70 != 0) {
      puVar19 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar19 = local_78;
      }
      uVar13 = *puVar19;
      uVar17 = uVar18;
      while (uVar13 == 0) {
        uStack_130 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_130;
        iVar6 = (int)uVar10;
        local_148 = iVar6 + 1;
        uVar10 = (ulonglong)local_148;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
        goto LAB_1416ce140;
        uVar13 = puVar19[(longlong)iVar6 + 1];
      }
      uStack_144 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_144 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_fc = (int)lVar9;
      uStack_134 = local_fc + -1 + uStack_130;
      uVar10 = (ulonglong)uStack_134;
      if ((int)local_70 < (int)uStack_134) {
LAB_1416ce140:
        uVar10 = (ulonglong)local_70;
        uStack_134 = local_70;
      }
    }
    local_b8._padding_ = CONCAT44(uStack_144,local_148);
    local_b8.CurrentBitIndex = uStack_134;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_12c;
    local_b8.BaseBitIndex = uStack_130;
    local_c0 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar12 = (int)uVar10;
        puVar2 = (undefined8 *)(*(longlong *)&local_c0->Elements + (longlong)iVar12 * 0x18);
        iVar6 = *(int *)(*(longlong *)&local_c0->Elements + 8 + (longlong)iVar12 * 0x18);
        if (iVar6 == 0) {
          pwVar11 = L"";
          uVar13 = uVar20;
        }
        else {
          pwVar11 = (wchar_t *)*puVar2;
          uVar13 = iVar6 - 1;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
        uVar13 = local_50 - 1 & uVar13;
        *(uint *)((longlong)puVar2 + 0x14) = uVar13;
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar8.Data + uVar10 * 4);
        *(int *)((longlong)FVar8.Data + uVar10 * 4) = iVar12;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar10 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_1416ce1f9:
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar13 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar18;
  local_f4.Data.ArrayMax = uVar20;
  local_d0 = uVar20;
  uStack_e4 = 1;
  if (uVar13 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar13;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_120.Array;
    }
    uVar14 = *puVar19;
    uVar17 = uVar18;
    while( true ) {
      local_f4.Data.ArrayMax = (int)uVar18;
      local_d0 = (uint)uVar17;
      if (uVar14 != 0) break;
      lVar9 = (longlong)local_f4.Data.ArrayMax;
      local_d0 = local_d0 + 0x20;
      uVar17 = (ulonglong)local_d0;
      local_f4.Data.ArrayMax = local_f4.Data.ArrayMax + 1;
      uVar18 = (ulonglong)(uint)local_f4.Data.ArrayMax;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < local_f4.Data.ArrayMax)
      goto LAB_1416ce29f;
      uVar14 = puVar19[lVar9 + 1];
    }
    uStack_e4 = -uVar14 & uVar14;
    uVar18 = (ulonglong)uStack_e4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f8 = (int)lVar9;
    uVar14 = (local_d0 - 1) + local_f8;
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
    uVar10 = (ulonglong)uVar14;
  }
LAB_1416ce29f:
  uStack_d4 = (uint)uVar10;
  uStack_d8 = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_e4,local_f4.Data.ArrayMax);
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._28_4_ = uStack_d4;
  TStack_120.BaseBitIndex = local_d0;
  local_f4.Data._4_8_ = this;
  local_e0 = (undefined1 *)TStack_120.Array;
  uStack_cc = uStack_d4;
  TStack_120.CurrentBitIndex = uStack_d4;
  if ((int)uStack_d4 < (int)uVar13) {
    do {
      lVar9 = (longlong)(int)uVar10 * 0x28;
      pFVar15 = (FString *)(*(longlong *)&(this->Pairs).Elements + lVar9);
      iVar6 = (pFVar15->Data).ArrayNum;
      if (iVar6 == 0) {
        pwVar11 = L"";
        uVar13 = uVar20;
      }
      else {
        pwVar11 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        uVar13 = iVar6 - 1;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
      iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>
                        ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                         uVar13,pFVar15);
      if (iVar6 == -1) {
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar16 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar9);
        if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar6 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                           (FString *)pFVar16);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                   &local_f4,
                   (bool *)(*(longlong *)&(this->Pairs).Elements +
                           (longlong)TStack_120.CurrentBitIndex * 0x28));
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      uVar10 = (ulonglong)(uint)TStack_120.CurrentBitIndex;
    } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
  }
  iVar6 = param_1->ArrayNum;
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar6;
}

// Find @ 1416ee3f0

TrackedAllocationData * __thiscall
TMapBase<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
::Find(TMapBase<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*_const,FMallocDoubleFreeFinder::TrackedAllocationData,0>_>
       *this,void *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TrackedAllocationData *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((void *)*plVar2 == param_1) {
          pTVar4 = (TrackedAllocationData *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TrackedAllocationData *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TrackedAllocationData *)0x0;
}

// Find @ 1416ee490

FICUCachedFileData * __thiscall
TMapBase<FString,FICUInternationalization::FICUCachedFileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>_>
::Find(TMapBase<FString,FICUInternationalization::FICUCachedFileData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  FICUCachedFileData *pFVar6;
  
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar3 = TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pFVar6 = (FICUCachedFileData *)0x0;
    if (lVar1 != 0) {
      pFVar6 = (FICUCachedFileData *)(lVar1 + 0x10);
    }
    return pFVar6;
  }
  return (FICUCachedFileData *)0x0;
}

// FindChecked @ 1416ee5a0

FHeartBeatInfo * __thiscall
TMapBase<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>_>
::FindChecked(TMapBase<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>_>
              *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FHeartBeatInfo *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x48;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x48) == param_1) {
          if (lVar1 != 0) {
            return (FHeartBeatInfo *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x40);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FHeartBeatInfo *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FHeartBeatInfo *)(*pcVar3)();
  return pFVar6;
}

// Emplace<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_> @ 14172b6b0

TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> * __thiscall
TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
::
Emplace<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
          (TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
           *this,FTextKey *param_1,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_28);
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
       *)0x0) {
    *(int *)local_28.Pointer = param_1->Index;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                *)((longlong)local_28.Pointer + 8),
               (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                *)param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x58) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar2 = ::GetTypeHash(local_28.Pointer);
  bVar1 = TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar2,local_28.Pointer,local_res8,(bool *)0x0);
  lVar3 = (longlong)local_res8[0];
  if (!bVar1) {
    TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar2,local_28.Pointer,local_res8[0]);
  }
  return (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar3 * 0x60);
}

// EmplaceByHash<FTextKey_const_&> @ 14172b770

TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> * __thiscall
TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
::EmplaceByHash<FTextKey_const_&>
          (TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
           *this,uint param_1,FTextKey *param_2)

{
  bool bVar1;
  TKeyInitializer<FTextKey_const_&> local_res8;
  FSparseArrayAllocationInfo local_18;
  
  local_res8.Key = param_2;
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_18);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>
       *)0x0) {
    TKeyInitializer<FTextKey_const_&>::
    operator<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
              (&local_res8,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x58) = 0xffffffff;
  }
  local_res8.Key._0_4_ = local_18.Index;
  bVar1 = TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  if (!bVar1) {
    TSet<TTuple<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,(int)local_res8.Key);
  }
  return (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)(int)local_res8.Key * 0x60);
}

// FindByHash<FTextId> @ 14172c200

FText * __thiscall
TMapBase<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>::
FindByHash<FTextId>(TMapBase<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>
                    *this,uint param_1,FTextId *param_2)

{
  int *piVar1;
  int iVar2;
  FText *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar1 == (param_2->Namespace).Index) && (piVar1[1] == (param_2->Key).Index)) {
          if (iVar2 == -1) {
            return (FText *)0x0;
          }
          pFVar3 = (FText *)0x0;
          if (piVar1 != (int *)0x0) {
            pFVar3 = (FText *)(piVar1 + 2);
          }
          return pFVar3;
        }
        iVar2 = piVar1[6];
      } while (iVar2 != -1);
    }
  }
  return (FText *)0x0;
}

// FindOrAddImpl<FName_const_&> @ 14172c5f0

TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator> *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSet<FTextKey,DefaultKeyFuncs<FTextKey,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FTextKey_const_&> @ 14172c6a0

TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> * __thiscall
TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
::FindOrAddImpl<FTextKey_const_&>
          (TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
           *this,uint param_1,FTextKey *param_2)

{
  int iVar1;
  int *piVar2;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == param_2->Index) {
          if (piVar2 != (int *)0x0) {
            return (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                    *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x16];
      } while (iVar1 != -1);
    }
  }
  pTVar3 = EmplaceByHash<FTextKey_const_&>(this,param_1,param_2);
  return pTVar3;
}

// FindOrAddImpl<enum_ELocalizedTextSourceCategory> @ 14172c720

FCultureInfo * __thiscall
TMapBase<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo,0>_>
::FindOrAddImpl<enum_ELocalizedTextSourceCategory>
          (void *this,uint param_1,ELocalizedTextSourceCategory *param_2)

{
  undefined4 uVar1;
  ELocalizedTextSourceCategory *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  ELocalizedTextSourceCategory *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (ELocalizedTextSourceCategory *)((longlong)(int)uVar1 * 0xb0 + *(longlong *)this);
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (ELocalizedTextSourceCategory *)0x0) {
            return (FCultureInfo *)(pEVar2 + 8);
          }
          break;
        }
        uVar1 = *(undefined4 *)(pEVar2 + 0xa8);
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>,TDefaultMapHashableKeyFuncs<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_ELocalizedTextSourceCategory_&&>_>
            (this,(uint)local_res8,
             (TKeyInitializer<ELocalizedTextSourceCategory_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FCultureInfo *)(*(longlong *)this + (longlong)local_res8[0] * 0xb0 + 8);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14172c7d0

void __thiscall
TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar9 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar9,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar9 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14172c8b0;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar9 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_14172c8b0:
  TStack_40._padding_ = CONCAT44(uVar9,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar3) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10),
                         (FString *)pFVar11);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14172ca30

void __thiscall
TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar11 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar10,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14172cb10;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar10 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14172cb10:
  TStack_40._padding_ = CONCAT44(uVar10,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar4) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_40.CurrentBitIndex * 0x28);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10),
                         (FString *)pFVar2);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14172cc90

void __thiscall
TMapBase<FTextId,FTextLocalizationResource::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationResource::FEntry,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FTextId,FTextLocalizationResource::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationResource::FEntry,0>_>
           *this,TArray<FTextId,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14172cd72;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14172cd72:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_40.CurrentBitIndex * 0x28);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 141755bd0

FString * __thiscall
TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>::Find
          (TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
           *this,int param_1)

{
  int iVar1;
  int *piVar2;
  FString *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == param_1) {
          pFVar3 = (FString *)0x0;
          if (piVar2 != (int *)0x0) {
            pFVar3 = (FString *)(piVar2 + 2);
          }
          return pFVar3;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  return (FString *)0x0;
}

// Find @ 141755c30

TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
* __thiscall
TMapBase<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,0>_>
::Find(TMapBase<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
  *pTVar5;
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
          pTVar5 = (TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                    *)0x0;
          if (lVar1 != 0) {
            pTVar5 = (TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
                      *)(lVar1 + 8);
          }
          return pTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  return (TDelegate<TSharedRef<ITextGenerator,1>___cdecl(FStructuredArchiveRecord),FDefaultDelegateUserPolicy>
          *)0x0;
}

// Find @ 141755cd0

ushort * __thiscall
TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
::Find(TMapBase<FTextId,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,unsigned_short,0>_>
       *this,FTextId *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = ::GetTypeHash(&param_1->Key);
  uVar4 = ::GetTypeHash(&param_1->Namespace);
  uVar8 = uVar4 - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar3 ^ uVar8 << 8;
  uVar6 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar6) - uVar4 ^ uVar6 >> 0xc;
  uVar3 = (uVar4 - uVar8) - uVar6 ^ uVar8 << 0x10;
  uVar4 = (uVar6 - uVar3) - uVar8 ^ uVar3 >> 5;
  uVar6 = (uVar8 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar6) - uVar4 ^ uVar6 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar7 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar4 - uVar3) - uVar6 ^ uVar3 >> 0xf)) * 4);
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar7 * 0x14;
        if ((*(int *)(lVar2 + (longlong)iVar7 * 0x14) == (param_1->Namespace).Index) &&
           (*(int *)(lVar1 + 4) == (param_1->Key).Index)) {
          if (iVar7 == -1) {
            return (ushort *)0x0;
          }
          if (lVar1 != 0) {
            return (ushort *)(lVar1 + 8);
          }
          return (ushort *)0x0;
        }
        iVar7 = *(int *)(lVar1 + 0xc);
      } while (iVar7 != -1);
    }
  }
  return (ushort *)0x0;
}

// Find @ 141755e10

FDisplayStringEntry * __thiscall
TMapBase<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>
::Find(TMapBase<FTextId,FTextLocalizationManager::FDisplayStringEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationManager::FDisplayStringEntry,0>_>
       *this,FTextId *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = ::GetTypeHash(&param_1->Key);
  uVar2 = ::GetTypeHash(&param_1->Namespace);
  uVar7 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar7) - uVar1 ^ uVar7 << 8;
  uVar5 = (uVar1 - uVar2) - uVar7 ^ uVar2 >> 0xd;
  uVar7 = (uVar7 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar1 = (uVar2 - uVar7) - uVar5 ^ uVar7 << 0x10;
  uVar2 = (uVar5 - uVar1) - uVar7 ^ uVar1 >> 5;
  uVar5 = (uVar7 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar5) - uVar2 ^ uVar5 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar2 - uVar1) - uVar5 ^ uVar1 >> 0xf)) * 4);
    if (iVar6 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar6 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar3 == (param_1->Namespace).Index) && (piVar3[1] == (param_1->Key).Index)) {
          if (iVar6 == -1) {
            return (FDisplayStringEntry *)0x0;
          }
          if (piVar3 != (int *)0x0) {
            return (FDisplayStringEntry *)(piVar3 + 2);
          }
          return (FDisplayStringEntry *)0x0;
        }
        iVar6 = piVar3[6];
      } while (iVar6 != -1);
    }
  }
  return (FDisplayStringEntry *)0x0;
}

// Find @ 141755f50

FEntry * __thiscall
TMapBase<FTextId,FTextLocalizationResource::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationResource::FEntry,0>_>
::Find(TMapBase<FTextId,FTextLocalizationResource::FEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FTextLocalizationResource::FEntry,0>_>
       *this,FTextId *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = ::GetTypeHash(&param_1->Key);
  uVar4 = ::GetTypeHash(&param_1->Namespace);
  uVar8 = uVar4 - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar8) - uVar3 ^ uVar8 << 8;
  uVar6 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 0xd;
  uVar8 = (uVar8 - uVar6) - uVar4 ^ uVar6 >> 0xc;
  uVar3 = (uVar4 - uVar8) - uVar6 ^ uVar8 << 0x10;
  uVar4 = (uVar6 - uVar3) - uVar8 ^ uVar3 >> 5;
  uVar6 = (uVar8 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar6) - uVar4 ^ uVar6 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar7 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar4 - uVar3) - uVar6 ^ uVar3 >> 0xf)) * 4);
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar7 * 0x28;
        if ((*(int *)(lVar2 + (longlong)iVar7 * 0x28) == (param_1->Namespace).Index) &&
           (*(int *)(lVar1 + 4) == (param_1->Key).Index)) {
          if (iVar7 == -1) {
            return (FEntry *)0x0;
          }
          if (lVar1 != 0) {
            return (FEntry *)(lVar1 + 8);
          }
          return (FEntry *)0x0;
        }
        iVar7 = *(int *)(lVar1 + 0x20);
      } while (iVar7 != -1);
    }
  }
  return (FEntry *)0x0;
}

// Find @ 141756090

FPolyglotTextData * __thiscall
TMapBase<FTextId,FPolyglotTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FPolyglotTextData,0>_>
::Find(TMapBase<FTextId,FPolyglotTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FPolyglotTextData,0>_>
       *this,FTextId *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  FPolyglotTextData *pFVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = ::GetTypeHash(&param_1->Key);
  uVar2 = ::GetTypeHash(&param_1->Namespace);
  uVar7 = uVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar7) - uVar1 ^ uVar7 << 8;
  uVar6 = (uVar1 - uVar2) - uVar7 ^ uVar2 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar2 ^ uVar6 >> 0xc;
  uVar1 = (uVar2 - uVar7) - uVar6 ^ uVar7 << 0x10;
  uVar2 = (uVar6 - uVar1) - uVar7 ^ uVar1 >> 5;
  uVar6 = (uVar7 - uVar2) - uVar1 ^ uVar2 >> 3;
  uVar1 = (uVar1 - uVar6) - uVar2 ^ uVar6 << 10;
  iVar3 = TSet<TTuple<FTextId,FPolyglotTextData>,TDefaultMapHashableKeyFuncs<FTextId,FPolyglotTextData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FTextId>(&this->Pairs,uVar1 >> 0xf ^ (uVar2 - uVar1) - uVar6,param_1);
  if (iVar3 != -1) {
    lVar5 = (longlong)iVar3 * 0xc0 + *(longlong *)&(this->Pairs).Elements;
    pFVar4 = (FPolyglotTextData *)0x0;
    if (lVar5 != 0) {
      pFVar4 = (FPolyglotTextData *)(lVar5 + 8);
    }
    return pFVar4;
  }
  return (FPolyglotTextData *)0x0;
}

// Find @ 141756190

TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> * __thiscall
TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
::Find(TMapBase<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextKey,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>_>
       *this,FTextKey *param_1)

{
  uint uVar1;
  int iVar2;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar3;
  int *piVar4;
  ForElementType<FSetElementId> FVar5;
  
  uVar1 = ::GetTypeHash(param_1);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & uVar1) * 4);
    if (iVar2 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar2 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar4 == param_1->Index) {
          pTVar3 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                    *)0x0;
          if (piVar4 != (int *)0x0) {
            pTVar3 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                      *)(piVar4 + 2);
          }
          return pTVar3;
        }
        iVar2 = piVar4[0x16];
      } while (iVar2 != -1);
    }
  }
  return (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *)
         0x0;
}

// Find @ 141756230

FCultureInfo * __thiscall
TMapBase<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo,0>_>
::Find(void *this,ELocalizedTextSourceCategory param_1)

{
  undefined4 uVar1;
  FCultureInfo *pFVar2;
  ELocalizedTextSourceCategory *pEVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar4 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar3 = (ELocalizedTextSourceCategory *)((longlong)(int)uVar1 * 0xb0 + *(longlong *)this);
        if (*pEVar3 == param_1) {
          pFVar2 = (FCultureInfo *)0x0;
          if (pEVar3 != (ELocalizedTextSourceCategory *)0x0) {
            pFVar2 = (FCultureInfo *)(pEVar3 + 8);
          }
          return pFVar2;
        }
        uVar1 = *(undefined4 *)(pEVar3 + 0xa8);
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FCultureInfo *)0x0;
}

// Emplace<FName_const_&,unsigned_char_const_&> @ 1417904a0

uchar * __thiscall
TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
::Emplace<FName_const_&,unsigned_char_const_&>
          (TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
           *this,FName *param_1,uchar *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x14);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,unsigned_char>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    *(uchar *)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0xc) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (uchar *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x14 + 8);
}

// Emplace<FName_const_&,unsigned_char> @ 1417905e0

uchar * __thiscall
TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
::Emplace<FName_const_&,unsigned_char>
          (TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
           *this,FName *param_1,uchar *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x14);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,unsigned_char>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    *(uchar *)((longlong)local_28.Pointer + 8) = *param_2;
    *(undefined4 *)((longlong)local_28.Pointer + 0xc) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (uchar *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x14 + 8);
}

// Find @ 1417ccfa0

FAESKey * __thiscall
TMapBase<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>
::Find(TMapBase<FGuid,FAES::FAESKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FAES::FAESKey,0>_>
       *this,FGuid *param_1)

{
  uint uVar1;
  ulong64 uVar2;
  uint *puVar3;
  FAESKey *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  uVar2 = CityHash64((char *)param_1,0x10);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar5 +
                     ((ulonglong)((this->Pairs).HashSize - 1) & uVar2 & 0xffffffff) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (((param_1->D == puVar3[3] && param_1->C == puVar3[2]) && param_1->B == puVar3[1]) &&
            param_1->A == *puVar3) {
          pFVar4 = (FAESKey *)0x0;
          if (puVar3 != (uint *)0x0) {
            pFVar4 = (FAESKey *)(puVar3 + 4);
          }
          return pFVar4;
        }
        uVar1 = puVar3[0xc];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FAESKey *)0x0;
}

// Find @ 1417cd060

int * __thiscall
TMapBase<FIoChunkId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,int,0>_>::Find
          (TMapBase<FIoChunkId,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoChunkId,int,0>_>
           *this,FIoChunkId *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  int *piVar8;
  
  uVar3 = *(uint *)(param_1->Id + 8);
  uVar2 = *(undefined8 *)param_1->Id;
  uVar5 = (uint)((ulonglong)uVar2 >> 0x20);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (uVar3 >> 0x18) + 0x58a2c485 +
                    ((((((uVar5 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar2 >> 0x30) & 0xff)) *
                        0x21 + (uint)(byte)((ulonglong)uVar2 >> 0x38)) * 0x21 + (uVar3 & 0xff)) *
                      0x21 + (uVar3 >> 8 & 0xff)) * 0x21 + (uVar3 >> 0x10 & 0xff)) * 0x21 +
                    (((uint)((ulonglong)uVar2 >> 8) & 0xff) * 0x21 +
                    ((uint)((ulonglong)uVar2 >> 0x10) & 0xff)) * 0x40a9121 +
                    (uVar5 & 0xff) * -0x13be2b1f +
                    ((uint)((ulonglong)uVar2 >> 0x18) & 0xff) * 0x747c7101 +
                    ((uint)uVar2 & 0xff) * 0x30f35d61) * 4);
    if (iVar6 != -1) {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar4 + (longlong)iVar6 * 0x18;
        if ((*(longlong *)(lVar4 + (longlong)iVar6 * 0x18) == *(longlong *)param_1->Id) &&
           (*(int *)(lVar1 + 8) == *(int *)(param_1->Id + 8))) {
          piVar8 = (int *)0x0;
          if (lVar1 != 0) {
            piVar8 = (int *)(lVar1 + 0xc);
          }
          return piVar8;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  return (int *)0x0;
}

// FindOrAddImpl<FString> @ 141812060

FRegisteredArgData * __thiscall
TMapBase<FString,FCommandLine::FRegisteredArgData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FCommandLine::FRegisteredArgData,0>_>
::FindOrAddImpl<FString>
          (TMapBase<FString,FCommandLine::FRegisteredArgData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FCommandLine::FRegisteredArgData,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FCommandLine::FRegisteredArgData>,TDefaultMapHashableKeyFuncs<FString,FCommandLine::FRegisteredArgData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FRegisteredArgData *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,FCommandLine::FRegisteredArgData>,TDefaultMapHashableKeyFuncs<FString,FCommandLine::FRegisteredArgData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FRegisteredArgData *)
         (*(longlong *)&(this->Pairs).Elements + 0x10 + (longlong)local_res8[0] * 0x30);
}

// GetKeys<DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> @ 141812220

int __thiscall
TMapBase<FString,FConfigFile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>_>
::GetKeys<DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
          (TMapBase<FString,FConfigFile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>_>
           *this,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMapBase<FString,FConfigFile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iVar5 = 0;
  if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(param_1);
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&param_1->Elements,0,*(int *)&(param_1->Elements).field_0x8);
    *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
    if (*(int *)&(param_1->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)param_1,0,(int *)&(param_1->Elements).field_0xc);
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reserve
            (param_1,*(int *)&(this->Pairs).Elements.field_0x8 -
                     *(int *)&(this->Pairs).Elements.field_0x34);
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uStack_44 = 1;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar2 != 0) {
    puVar6 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)TStack_70.Array;
    }
    uVar3 = *puVar6;
    while (uVar3 == 0) {
      lVar4 = (longlong)iVar5;
      local_30 = local_30 + 0x20;
      iVar5 = iVar5 + 1;
      iStack_34 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar5) goto LAB_141812319;
      uVar3 = puVar6[lVar4 + 1];
    }
    uStack_44 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar4;
    if (iVar2 < iStack_34) {
      iStack_34 = iVar2;
    }
  }
LAB_141812319:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = this;
  iStack_48 = iVar5;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iVar5;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar2) {
    do {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (param_1,(FString *)&stack0x00000008,
                 (bool *)((longlong)TStack_70.CurrentBitIndex * 0x100 +
                         *(longlong *)&(this->Pairs).Elements));
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
}

// Find @ 1418235d0

TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> * __thiscall
TMapBase<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
::Find(TMapBase<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *pTVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x38 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)
               (lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)0x0;
}

// FindChecked @ 141823660

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
::FindChecked(TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x68 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar8 + 0x10);
}

// FindChecked @ 141823700

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
::FindChecked(TMapBase<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x68 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(lVar8 + 0x10);
}

// Remove @ 14182fcc0

int __thiscall
TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
Remove(TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar2 == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    iVar2 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>(&this->Pairs,uVar1,param_1);
    return iVar2;
  }
  return 0;
}

// Emplace<FName_&,FConfigValue> @ 141846b90

FConfigValue * __thiscall
TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
::Emplace<FName_&,FConfigValue>
          (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           *this,FName *param_1,FConfigValue *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  TSparseSetElement<TTuple<FName,FConfigValue>_> *pTVar7;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  pTVar7 = (TSparseSetElement<TTuple<FName,FConfigValue>_> *)0x0;
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FConfigValue>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(FScriptContainerElement **)((longlong)local_18.Pointer + 8) =
         (param_2->SavedValue).Data.AllocatorInstance.Data;
    (param_2->SavedValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_18.Pointer + 0x10) = (param_2->SavedValue).Data.ArrayNum;
    *(int *)((longlong)local_18.Pointer + 0x14) = (param_2->SavedValue).Data.ArrayMax;
    (param_2->SavedValue).Data.ArrayNum = 0;
    (param_2->SavedValue).Data.ArrayMax = 0;
    *(uint *)((longlong)local_18.Pointer + 0x18) = param_2->SavedValueHash;
    *(EValueType *)((longlong)local_18.Pointer + 0x1c) = param_2->ValueType;
    *(bool *)((longlong)local_18.Pointer + 0x1d) = param_2->bExpandOnDemand;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
    pTVar7 = local_18.Pointer;
  }
  uVar4 = *(undefined8 *)pTVar7;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,(int)((ulonglong)uVar4 >> 0x20) + uVar6,pTVar7,local_18.Index);
  return (FConfigValue *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0x28 + 8);
}

// Emplace<FName_const_&,FConfigValue_const_&> @ 141846cd0

FConfigValue * __thiscall
TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
::Emplace<FName_const_&,FConfigValue_const_&>
          (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           *this,FName *param_1,FConfigValue *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FConfigValue>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_1;
    ::FString::FString((FString *)((longlong)local_18.Pointer + 8),&param_2->SavedValue);
    *(uint *)((longlong)local_18.Pointer + 0x18) = param_2->SavedValueHash;
    *(EValueType *)((longlong)local_18.Pointer + 0x1c) = param_2->ValueType;
    *(bool *)((longlong)local_18.Pointer + 0x1d) = param_2->bExpandOnDemand;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
  }
  uVar4 = *(undefined8 *)local_18.Pointer;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,(int)((ulonglong)uVar4 >> 0x20) + uVar6,local_18.Pointer,
                 local_18.Index);
  return (FConfigValue *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0x28 + 8);
}

// Emplace<FName_const_&,FString_const_&> @ 141846e00

FString * __thiscall
TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
Emplace<FName_const_&,FString_const_&>
          (TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           *this,FName *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,FString>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    ::FString::FString((FString *)((longlong)local_28.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FString *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// Emplace<FName_const_&,FConfigValue> @ 141846f40

FConfigValue * __thiscall
TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
::Emplace<FName_const_&,FConfigValue>
          (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           *this,FName *param_1,FConfigValue *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  TSparseSetElement<TTuple<FName,FConfigValue>_> *pTVar7;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  pTVar7 = (TSparseSetElement<TTuple<FName,FConfigValue>_> *)0x0;
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FConfigValue>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(FScriptContainerElement **)((longlong)local_18.Pointer + 8) =
         (param_2->SavedValue).Data.AllocatorInstance.Data;
    (param_2->SavedValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_18.Pointer + 0x10) = (param_2->SavedValue).Data.ArrayNum;
    *(int *)((longlong)local_18.Pointer + 0x14) = (param_2->SavedValue).Data.ArrayMax;
    (param_2->SavedValue).Data.ArrayNum = 0;
    (param_2->SavedValue).Data.ArrayMax = 0;
    *(uint *)((longlong)local_18.Pointer + 0x18) = param_2->SavedValueHash;
    *(EValueType *)((longlong)local_18.Pointer + 0x1c) = param_2->ValueType;
    *(bool *)((longlong)local_18.Pointer + 0x1d) = param_2->bExpandOnDemand;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
    pTVar7 = local_18.Pointer;
  }
  uVar4 = *(undefined8 *)pTVar7;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,(int)((ulonglong)uVar4 >> 0x20) + uVar6,pTVar7,local_18.Index);
  return (FConfigValue *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0x28 + 8);
}

// Emplace<FName_const_&,FString> @ 141847080

FString * __thiscall
TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
Emplace<FName_const_&,FString>
          (TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           *this,FName *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FName,FString>_> *pTVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  pTVar8 = (TSparseSetElement<TTuple<FName,FString>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,FString>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = 0;
    *(FScriptContainerElement **)((longlong)local_28.Pointer + 8) =
         (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 0x10) = (param_2->Data).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0x14) = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  uVar3 = *(undefined8 *)pTVar8;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,uVar6,pTVar8,local_res8[0]);
  }
  return (FString *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// Emplace<FString_const_&,FConfigCommandStream_const_&> @ 1418471d0

FConfigCommandStream * __thiscall
TMapBase<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
::Emplace<FString_const_&,FConfigCommandStream_const_&>
          (TMapBase<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
           *this,FString *param_1,FConfigCommandStream *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FString,FConfigCommandStream>_> *pTVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0xe0 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0xe0 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar8 = (TSparseSetElement<TTuple<FString,FConfigCommandStream>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,FConfigCommandStream>_> *)0x0) {
    ::FString::FString(local_28.Pointer,param_1);
    FConfigCommandStream::FConfigCommandStream
              ((FConfigCommandStream *)((longlong)local_28.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0xd8) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar5 = *(int *)&pTVar8->field_0x8 + -1;
  if (*(int *)&pTVar8->field_0x8 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)pTVar8;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = TSet<TTuple<FString,FConfigCommandStream>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FConfigCommandStream>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar8,local_res8[0]);
  }
  return (FConfigCommandStream *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0xe0 + 0x10);
}

// Emplace<FString_const_&,FConfigCommandStream> @ 141847330

FConfigCommandStream * __thiscall
TMapBase<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
::Emplace<FString_const_&,FConfigCommandStream>
          (TMapBase<FString,FConfigCommandStream,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>_>
           *this,FString *param_1,FConfigCommandStream *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FString,FConfigCommandStream>_> *pTVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0xe0 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0xe0 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar8 = (TSparseSetElement<TTuple<FString,FConfigCommandStream>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,FConfigCommandStream>_> *)0x0) {
    ::FString::FString(local_28.Pointer,param_1);
    FConfigCommandStream::FConfigCommandStream
              ((FConfigCommandStream *)((longlong)local_28.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0xd8) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar5 = *(int *)&pTVar8->field_0x8 + -1;
  if (*(int *)&pTVar8->field_0x8 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)pTVar8;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = TSet<TTuple<FString,FConfigCommandStream>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FConfigCommandStream>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStream,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar8,local_res8[0]);
  }
  return (FConfigCommandStream *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0xe0 + 0x10);
}

// Emplace<FName,FConfigValue> @ 141849340

FConfigValue * __thiscall
TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
::Emplace<FName,FConfigValue>
          (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           *this,FName *param_1,FConfigValue *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  TSparseSetElement<TTuple<FName,FConfigValue>_> *pTVar7;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x28);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  pTVar7 = (TSparseSetElement<TTuple<FName,FConfigValue>_> *)0x0;
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FConfigValue>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(FScriptContainerElement **)((longlong)local_18.Pointer + 8) =
         (param_2->SavedValue).Data.AllocatorInstance.Data;
    (param_2->SavedValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_18.Pointer + 0x10) = (param_2->SavedValue).Data.ArrayNum;
    *(int *)((longlong)local_18.Pointer + 0x14) = (param_2->SavedValue).Data.ArrayMax;
    (param_2->SavedValue).Data.ArrayNum = 0;
    (param_2->SavedValue).Data.ArrayMax = 0;
    *(uint *)((longlong)local_18.Pointer + 0x18) = param_2->SavedValueHash;
    *(EValueType *)((longlong)local_18.Pointer + 0x1c) = param_2->ValueType;
    *(bool *)((longlong)local_18.Pointer + 0x1d) = param_2->bExpandOnDemand;
    *(undefined4 *)((longlong)local_18.Pointer + 0x20) = 0xffffffff;
    pTVar7 = local_18.Pointer;
  }
  uVar4 = *(undefined8 *)pTVar7;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,(int)((ulonglong)uVar4 >> 0x20) + uVar6,pTVar7,local_18.Index);
  return (FConfigValue *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_18.Index * 0x28 + 8);
}

// FindOrAddImpl<FConfigBranch_*_const_&> @ 14184c6d0

TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FConfigBranch_*_const_&>
          (TMapBase<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FConfigBranch **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FConfigBranch **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((FConfigBranch *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FConfigBranch_*,TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FConfigBranch_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FConfigBranch_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TArray<FDynamicLayerInfo,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FName_const_&> @ 14184c780

TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>
* __thiscall
TMapBase<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>
                    *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FName_const_&> @ 14184c830

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FName_const_&> @ 14184c8e0

FConfigSection * __thiscall
TMapBase<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x108 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FConfigSection *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0x20].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FConfigSection>,TDefaultMapHashableKeyFuncs<FName,FConfigSection,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FConfigSection *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x108 + 8);
}

// FindOrAddImpl<FString_const_&> @ 14184c990

uchar * __thiscall
TMapBase<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (uchar *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,unsigned_char>,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (uchar *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 14184ca20

FConfigBranch ** __thiscall
TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FConfigBranch **)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FConfigBranch **)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 14184cab0

FString * __thiscall
TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
FindOrAddImpl<FString_const_&>
          (TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (FString *)(lVar2 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 14184cb30

FArchiveCountConfigMem * __thiscall
TMapBase<FString,FArchiveCountConfigMem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FArchiveCountConfigMem,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,FArchiveCountConfigMem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FArchiveCountConfigMem,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FArchiveCountConfigMem>,TDefaultMapHashableKeyFuncs<FString,FArchiveCountConfigMem,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0xb8 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FArchiveCountConfigMem *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,FArchiveCountConfigMem>,TDefaultMapHashableKeyFuncs<FString,FArchiveCountConfigMem,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FArchiveCountConfigMem *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xb8 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 14184cbd0

FConfigCommandStreamSection * __thiscall
TMapBase<FString,FConfigCommandStreamSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,FConfigCommandStreamSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0xb8 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FConfigCommandStreamSection *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FConfigCommandStreamSection *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xb8 + 0x10);
}

// GetKeys<DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> @ 14184d190

int __thiscall
TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
::GetKeys<DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
          (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           *this,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  FName local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Reset(param_1);
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iStack_48 = 0;
  uStack_44 = 1;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar2 != 0) {
    puVar5 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)TStack_70.Array;
    }
    uVar3 = *puVar5;
    while (uVar3 == 0) {
      lVar4 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_14184d229;
      uVar3 = puVar5[lVar4 + 1];
    }
    uStack_44 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_34 = (int)lVar4 + -1 + local_30;
    if (iVar2 < iStack_34) {
      iStack_34 = iVar2;
    }
  }
LAB_14184d229:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = this;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iStack_48;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar2) {
    do {
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                (param_1,&local_res8,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_70.CurrentBitIndex * 0x28));
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
}

// GetKeys<DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> @ 14184d2f0

int __thiscall
TMapBase<FString,FConfigCommandStreamSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>_>
::GetKeys<DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
          (TMapBase<FString,FConfigCommandStreamSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>_>
           *this,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMapBase<FString,FConfigCommandStreamSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iVar5 = 0;
  if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::UnhashElements(param_1);
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&param_1->Elements,0,*(int *)&(param_1->Elements).field_0x8);
    *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
    if (*(int *)&(param_1->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)param_1,0,(int *)&(param_1->Elements).field_0xc);
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reserve
            (param_1,*(int *)&(this->Pairs).Elements.field_0x8 -
                     *(int *)&(this->Pairs).Elements.field_0x34);
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uStack_44 = 1;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar2 != 0) {
    puVar6 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)TStack_70.Array;
    }
    uVar3 = *puVar6;
    while (uVar3 == 0) {
      lVar4 = (longlong)iVar5;
      local_30 = local_30 + 0x20;
      iVar5 = iVar5 + 1;
      iStack_34 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar5) goto LAB_14184d3e9;
      uVar3 = puVar6[lVar4 + 1];
    }
    uStack_44 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_34 = local_30 + -1 + (int)lVar4;
    if (iVar2 < iStack_34) {
      iStack_34 = iVar2;
    }
  }
LAB_14184d3e9:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = this;
  iStack_48 = iVar5;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iVar5;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar2) {
    do {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (param_1,(FString *)&stack0x00000008,
                 (bool *)((longlong)TStack_70.CurrentBitIndex * 0xb8 +
                         *(longlong *)&(this->Pairs).Elements));
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14184d4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<int,FUtf8String,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FUtf8String,0>_>::
GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<int,FUtf8String,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FUtf8String,0>_>
           *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  int local_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<int,FUtf8String,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FUtf8String,0>_>
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
  ulonglong uVar15;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar15 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,piVar1);
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
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar14 = 0;
  if (uVar11 == 0) goto LAB_14184d759;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar11);
  uVar12 = 1;
  if (3 < uVar11) {
    uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_120 = (undefined4)lVar4;
    uVar12 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar12 <= (int)local_50)) goto LAB_14184d759;
  local_50 = uVar12;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar12 != 0) {
    uVar11 = uVar12;
    if (uVar12 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_14184d5c1;
      }
    }
    else {
LAB_14184d5c1:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar11,4);
    }
    if (0 < (int)uVar12) {
      uVar13 = (ulonglong)uVar12;
      uVar10 = uVar15;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = (longlong)(int)uVar12 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    uVar10 = uVar15;
    if (local_70 != 0) {
      FVar16 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = local_78;
      }
      uVar11 = *(uint *)FVar16;
      uVar13 = uVar15;
      while (uVar11 == 0) {
        uStack_150 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_150;
        iVar7 = (int)uVar10;
        local_168 = iVar7 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_14184d6c2;
        uVar11 = ((uint *)((longlong)FVar16 + 4))[iVar7];
      }
      uStack_164 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_11c = (int)lVar4;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_14184d6c2:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_110 = (longlong *)local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar7 = (int)uVar10;
        uVar11 = local_50 - 1 & *(uint *)(*local_110 + (longlong)iVar7 * 0xc);
        lVar4 = *local_110 + (longlong)iVar7 * 0xc;
        *(uint *)(lVar4 + 8) = uVar11;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)(FVar9.Data + uVar10 * 4);
        *(int *)(FVar9.Data + uVar10 * 4) = iVar7;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14184d759:
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar11 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar15;
  local_c8 = uVar14;
  uStack_dc = 1;
  if (uVar11 != 0) {
    puVar17 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar11;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar17;
    uVar13 = uVar15;
    local_c8 = 0;
    uVar14 = 0;
    while (uVar12 == 0) {
      iVar7 = (int)uVar15;
      local_c8 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)local_c8;
      uVar14 = iVar7 + 1;
      uVar15 = (ulonglong)uVar14;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14184d80e;
      uVar12 = puVar17[(longlong)iVar7 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar15 = (ulonglong)uStack_dc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_118 = (int)lVar4;
    uVar12 = (local_c8 - 1) + local_118;
    if ((int)uVar11 < (int)uVar12) {
      uVar12 = uVar11;
    }
    uVar10 = (ulonglong)uVar12;
  }
LAB_14184d80e:
  uStack_d0 = 0xffffffff;
  uStack_cc = (uint)uVar10;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,uVar14);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  uStack_e0 = uVar14;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = uStack_cc;
  if ((int)uStack_cc < (int)uVar11) {
    do {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      uVar14 = *(uint *)((longlong)(int)uVar10 * 0x20 + lVar4);
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar7 = *(int *)(FVar9.Data + (ulonglong)(local_50 - 1 & uVar14) * 4); iVar7 != -1;
            iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0xc + 4)) {
          if (*(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) == uVar14) goto LAB_14184d96a;
        }
      }
      pFVar3 = (param_1->AllocatorInstance).Data;
      pFVar2 = (FScriptContainerElement *)((longlong)(int)uVar10 * 0x20 + lVar4);
      if (((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (longlong)*piVar1 * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) =
           *(undefined4 *)pFVar2;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,&local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0x20 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_14184d96a:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
      uVar10 = (ulonglong)(uint)TStack_140.CurrentBitIndex;
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar7 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar7;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14184da00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ForElementType<unsigned_int> FVar17;
  uint *puVar18;
  longlong lVar19;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
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
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar10 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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
  if (uVar13 == 0) goto LAB_14184dcb6;
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
    lVar11 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_120 = (undefined4)lVar11;
    uVar14 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_14184dcb6;
  local_50 = uVar14;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar13 = 0;
        goto LAB_14184db15;
      }
    }
    else {
LAB_14184db15:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
      uVar12 = uVar10;
      do {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar8 = (longlong)(int)uVar14 - 1U & uVar12;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(FVar9.Data + uVar8 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    if (local_70 != 0) {
      FVar17 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = local_78;
      }
      uVar13 = *(uint *)FVar17;
      uVar12 = uVar10;
      while (uVar13 == 0) {
        uStack_150 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_150;
        iVar7 = (int)uVar10;
        local_168 = iVar7 + 1;
        uVar10 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_14184dc13;
        uVar13 = ((uint *)((longlong)FVar17 + 4))[iVar7];
      }
      uStack_164 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_164 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_11c = (int)lVar11;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar10 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_14184dc13:
        uVar10 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar10 < (int)local_70) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)uVar10 * 0x10 + *(longlong *)local_114._4_8_);
        uVar3 = *puVar15;
        uVar13 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar13 = local_50 - 1 & uVar13 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar15 + 0xc) = uVar13;
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        uVar12 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar9.Data + uVar12 * 4);
        *(int *)(FVar9.Data + uVar12 * 4) = (int)uVar10;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar10 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_14184dcb6:
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iStack_e0 = 0;
  iVar7 = *(int *)&(this->Pairs).Elements.field_0x28;
  local_c8 = iStack_e0;
  iStack_cc = 0;
  uStack_dc = 1;
  if (iVar7 != 0) {
    puVar18 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_140.Array;
    }
    uVar13 = *puVar18;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_14184dd2e;
      uVar13 = puVar18[lVar11 + 1];
    }
    uStack_dc = -uVar13 & uVar13;
    uVar10 = (ulonglong)uStack_dc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_118 = (int)lVar11;
    iStack_cc = local_c8 + -1 + local_118;
    if (iVar7 < iStack_cc) {
      iStack_cc = iVar7;
    }
  }
LAB_14184dd2e:
  uStack_d0 = 0xffffffff;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,iStack_e0);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = iStack_cc;
  if (iStack_cc < iVar7) {
    do {
      lVar19 = (longlong)TStack_140.CurrentBitIndex;
      lVar11 = *(longlong *)
                (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_140.CurrentBitIndex * 0x28)
      ;
      uVar13 = ::GetTypeHash((FNameEntryId)(uint)lVar11);
      if (local_98._8_4_ != local_64) {
        FVar9.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar9.Data = local_58.Data;
        }
        for (iVar7 = *(int *)(FVar9.Data +
                             (ulonglong)(local_50 - 1 & (int)((ulonglong)lVar11 >> 0x20) + uVar13) *
                             4); iVar7 != -1;
            iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0x10 + 8)) {
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar7 * 0x10) == lVar11) goto LAB_14184deae;
        }
      }
      pFVar2 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar19 * 0x28);
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar2) && (pFVar2 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar7 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           *(undefined8 *)pFVar2;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                 (FName *)local_114,
                 (bool *)(*(longlong *)&(this->Pairs).Elements +
                         (longlong)TStack_140.CurrentBitIndex * 0x28));
LAB_14184deae:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar7 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar7;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14184df40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  FString *pFVar20;
  undefined1 auStackY_198 [32];
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  FString local_f4;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  piVar1 = &param_1->ArrayMax;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar17 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar19 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_14184e239;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_100 = (undefined4)lVar9;
    uVar14 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_14184e239;
  local_50 = uVar14;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar13 = 0;
        goto LAB_14184e080;
      }
    }
    else {
LAB_14184e080:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar16 = (ulonglong)uVar14;
      uVar10 = uVar17;
      do {
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = (longlong)(int)uVar14 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_148 = 0;
    uStack_144 = 1;
    uStack_134 = 0;
    uStack_130 = 0;
    uVar10 = uVar17;
    if (local_70 != 0) {
      puVar18 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar18 = local_78;
      }
      uVar13 = *puVar18;
      uVar16 = uVar17;
      while (uVar13 == 0) {
        uStack_130 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_130;
        iVar6 = (int)uVar10;
        local_148 = iVar6 + 1;
        uVar10 = (ulonglong)local_148;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
        goto LAB_14184e180;
        uVar13 = puVar18[(longlong)iVar6 + 1];
      }
      uStack_144 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_144 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_fc = (int)lVar9;
      uStack_134 = local_fc + -1 + uStack_130;
      uVar10 = (ulonglong)uStack_134;
      if ((int)local_70 < (int)uStack_134) {
LAB_14184e180:
        uVar10 = (ulonglong)local_70;
        uStack_134 = local_70;
      }
    }
    local_b8._padding_ = CONCAT44(uStack_144,local_148);
    local_b8.CurrentBitIndex = uStack_134;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_12c;
    local_b8.BaseBitIndex = uStack_130;
    local_c0 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar12 = (int)uVar10;
        puVar2 = (undefined8 *)(*(longlong *)&local_c0->Elements + (longlong)iVar12 * 0x18);
        iVar6 = *(int *)(*(longlong *)&local_c0->Elements + 8 + (longlong)iVar12 * 0x18);
        if (iVar6 == 0) {
          pwVar11 = L"";
          uVar13 = uVar19;
        }
        else {
          pwVar11 = (wchar_t *)*puVar2;
          uVar13 = iVar6 - 1;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
        uVar13 = local_50 - 1 & uVar13;
        *(uint *)((longlong)puVar2 + 0x14) = uVar13;
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar8.Data + uVar10 * 4);
        *(int *)((longlong)FVar8.Data + uVar10 * 4) = iVar12;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar10 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_14184e239:
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar13 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar17;
  local_f4.Data.ArrayMax = uVar19;
  local_d0 = uVar19;
  uStack_e4 = 1;
  if (uVar13 != 0) {
    puVar18 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar13;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_120.Array;
    }
    uVar14 = *puVar18;
    uVar16 = uVar17;
    while( true ) {
      local_f4.Data.ArrayMax = (int)uVar17;
      local_d0 = (uint)uVar16;
      if (uVar14 != 0) break;
      lVar9 = (longlong)local_f4.Data.ArrayMax;
      local_d0 = local_d0 + 0x20;
      uVar16 = (ulonglong)local_d0;
      local_f4.Data.ArrayMax = local_f4.Data.ArrayMax + 1;
      uVar17 = (ulonglong)(uint)local_f4.Data.ArrayMax;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < local_f4.Data.ArrayMax)
      goto LAB_14184e2df;
      uVar14 = puVar18[lVar9 + 1];
    }
    uStack_e4 = -uVar14 & uVar14;
    uVar17 = (ulonglong)uStack_e4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f8 = (int)lVar9;
    uVar14 = (local_d0 - 1) + local_f8;
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
    uVar10 = (ulonglong)uVar14;
  }
LAB_14184e2df:
  uStack_d4 = (uint)uVar10;
  uStack_d8 = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_e4,local_f4.Data.ArrayMax);
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._28_4_ = uStack_d4;
  TStack_120.BaseBitIndex = local_d0;
  local_f4.Data._4_8_ = this;
  local_e0 = (undefined1 *)TStack_120.Array;
  uStack_cc = uStack_d4;
  TStack_120.CurrentBitIndex = uStack_d4;
  if ((int)uStack_d4 < (int)uVar13) {
    do {
      lVar9 = (longlong)(int)uVar10 * 0x20;
      pFVar20 = (FString *)(*(longlong *)&(this->Pairs).Elements + lVar9);
      iVar6 = (pFVar20->Data).ArrayNum;
      if (iVar6 == 0) {
        pwVar11 = L"";
        uVar13 = uVar19;
      }
      else {
        pwVar11 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        uVar13 = iVar6 - 1;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
      iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>
                        ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                         uVar13,pFVar20);
      if (iVar6 == -1) {
        pFVar15 = (FScriptContainerElement *)(lVar9 + *(longlong *)&(this->Pairs).Elements);
        pFVar3 = (param_1->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar15) && (pFVar15 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar6 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                           (FString *)pFVar15);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                   &local_f4,
                   (bool *)((longlong)TStack_120.CurrentBitIndex * 0x20 +
                           *(longlong *)&(this->Pairs).Elements));
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      uVar10 = (ulonglong)(uint)TStack_120.CurrentBitIndex;
    } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
  }
  iVar6 = param_1->ArrayNum;
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar6;
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 14184e4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  FString *pFVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStackY_198 [32];
  uint local_148;
  uint uStack_144;
  uint uStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  FString local_f4;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  piVar1 = &param_1->ArrayMax;
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FString,int>((FString *)pFVar3,param_1->ArrayNum);
    param_1->ArrayNum = 0;
  }
  uVar18 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar20 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar13 == 0) goto LAB_14184e7b9;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar13);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar13);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar10 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_100 = (undefined4)lVar9;
    uVar14 = 1 << ((byte)lVar9 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar14 <= (int)local_50)) goto LAB_14184e7b9;
  local_50 = uVar14;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar14 != 0) {
    uVar13 = uVar14;
    if (uVar14 < 2) {
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        uVar13 = 0;
        goto LAB_14184e600;
      }
    }
    else {
LAB_14184e600:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar13,4);
    }
    if (0 < (int)uVar14) {
      uVar17 = (ulonglong)uVar14;
      uVar10 = uVar18;
      do {
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = (longlong)(int)uVar14 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  if (local_50 != 0) {
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_148 = 0;
    uStack_144 = 1;
    uStack_134 = 0;
    uStack_130 = 0;
    uVar10 = uVar18;
    if (local_70 != 0) {
      puVar19 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar19 = local_78;
      }
      uVar13 = *puVar19;
      uVar17 = uVar18;
      while (uVar13 == 0) {
        uStack_130 = (int)uVar17 + 0x20;
        uVar17 = (ulonglong)uStack_130;
        iVar6 = (int)uVar10;
        local_148 = iVar6 + 1;
        uVar10 = (ulonglong)local_148;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_148)
        goto LAB_14184e700;
        uVar13 = puVar19[(longlong)iVar6 + 1];
      }
      uStack_144 = -uVar13 & uVar13;
      uVar10 = (ulonglong)uStack_144 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_fc = (int)lVar9;
      uStack_134 = local_fc + -1 + uStack_130;
      uVar10 = (ulonglong)uStack_134;
      if ((int)local_70 < (int)uStack_134) {
LAB_14184e700:
        uVar10 = (ulonglong)local_70;
        uStack_134 = local_70;
      }
    }
    local_b8._padding_ = CONCAT44(uStack_144,local_148);
    local_b8.CurrentBitIndex = uStack_134;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_12c;
    local_b8.BaseBitIndex = uStack_130;
    local_c0 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98;
    if ((int)uVar10 < (int)local_70) {
      do {
        iVar12 = (int)uVar10;
        puVar2 = (undefined8 *)(*(longlong *)&local_c0->Elements + (longlong)iVar12 * 0x18);
        iVar6 = *(int *)(*(longlong *)&local_c0->Elements + 8 + (longlong)iVar12 * 0x18);
        if (iVar6 == 0) {
          pwVar11 = L"";
          uVar13 = uVar20;
        }
        else {
          pwVar11 = (wchar_t *)*puVar2;
          uVar13 = iVar6 - 1;
        }
        uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
        uVar13 = local_50 - 1 & uVar13;
        *(uint *)((longlong)puVar2 + 0x14) = uVar13;
        FVar8.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar10 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar13;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar8.Data + uVar10 * 4);
        *(int *)((longlong)FVar8.Data + uVar10 * 4) = iVar12;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar10 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_14184e7b9:
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (*piVar1 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  uVar13 = *(uint *)&(this->Pairs).Elements.field_0x28;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = uVar18;
  local_f4.Data.ArrayMax = uVar20;
  local_d0 = uVar20;
  uStack_e4 = 1;
  if (uVar13 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    uVar10 = (ulonglong)uVar13;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_120.Array;
    }
    uVar14 = *puVar19;
    uVar17 = uVar18;
    while( true ) {
      local_f4.Data.ArrayMax = (int)uVar18;
      local_d0 = (uint)uVar17;
      if (uVar14 != 0) break;
      lVar9 = (longlong)local_f4.Data.ArrayMax;
      local_d0 = local_d0 + 0x20;
      uVar17 = (ulonglong)local_d0;
      local_f4.Data.ArrayMax = local_f4.Data.ArrayMax + 1;
      uVar18 = (ulonglong)(uint)local_f4.Data.ArrayMax;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < local_f4.Data.ArrayMax)
      goto LAB_14184e85f;
      uVar14 = puVar19[lVar9 + 1];
    }
    uStack_e4 = -uVar14 & uVar14;
    uVar18 = (ulonglong)uStack_e4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_f8 = (int)lVar9;
    uVar14 = (local_d0 - 1) + local_f8;
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
    uVar10 = (ulonglong)uVar14;
  }
LAB_14184e85f:
  uStack_d4 = (uint)uVar10;
  uStack_d8 = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_e4,local_f4.Data.ArrayMax);
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._28_4_ = uStack_d4;
  TStack_120.BaseBitIndex = local_d0;
  local_f4.Data._4_8_ = this;
  local_e0 = (undefined1 *)TStack_120.Array;
  uStack_cc = uStack_d4;
  TStack_120.CurrentBitIndex = uStack_d4;
  if ((int)uStack_d4 < (int)uVar13) {
    do {
      lVar9 = (longlong)(int)uVar10 * 0x110;
      pFVar15 = (FString *)(*(longlong *)&(this->Pairs).Elements + lVar9);
      iVar6 = (pFVar15->Data).ArrayNum;
      if (iVar6 == 0) {
        pwVar11 = L"";
        uVar13 = uVar20;
      }
      else {
        pwVar11 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        uVar13 = iVar6 - 1;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar13,pwVar11);
      iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              FindIndexByHash<FString>
                        ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                         uVar13,pFVar15);
      if (iVar6 == -1) {
        pFVar3 = (param_1->AllocatorInstance).Data;
        pFVar16 = (FScriptContainerElement *)(*(longlong *)&(this->Pairs).Elements + lVar9);
        if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)*piVar1 * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar6 = param_1->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar6 + 1;
        ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 0x10),
                           (FString *)pFVar16);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
                   &local_f4,
                   (bool *)((longlong)TStack_120.CurrentBitIndex * 0x110 +
                           *(longlong *)&(this->Pairs).Elements));
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
      uVar10 = (ulonglong)(uint)TStack_120.CurrentBitIndex;
    } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
  }
  iVar6 = param_1->ArrayNum;
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar6;
}

// Find @ 14186d1c0

FConfigValue * __thiscall
TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
::Find(TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FConfigValue *pFVar5;
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
          pFVar5 = (FConfigValue *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FConfigValue *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x20);
      } while (iVar4 != -1);
    }
  }
  return (FConfigValue *)0x0;
}

// Find @ 14186d260

TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> * __thiscall
TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
::Find(TMapBase<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pTVar2 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pTVar2 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar4 + 1);
          }
          return pTVar2;
        }
        uVar1 = pFVar4[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)0x0;
}

// Find @ 14186d300

FConfigBranch ** __thiscall
TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
::Find(TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FConfigBranch **ppFVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    ppFVar6 = (FConfigBranch **)0x0;
    if (lVar4 != 0) {
      ppFVar6 = (FConfigBranch **)(lVar4 + 0x10);
    }
    return ppFVar6;
  }
  return (FConfigBranch **)0x0;
}

// Find @ 14186d390

FConfigCommandStreamSection * __thiscall
TMapBase<FString,FConfigCommandStreamSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>_>
::Find(TMapBase<FString,FConfigCommandStreamSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FConfigCommandStreamSection *pFVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,FConfigCommandStreamSection>,TDefaultMapHashableKeyFuncs<FString,FConfigCommandStreamSection,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0xb8 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FConfigCommandStreamSection *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FConfigCommandStreamSection *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FConfigCommandStreamSection *)0x0;
}

// Find @ 14186d420

FConfigSection * __thiscall
TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
::Find(TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FConfigSection *pFVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x110 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FConfigSection *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FConfigSection *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FConfigSection *)0x0;
}

// FindChecked @ 14186dc90

FConfigBranch ** __thiscall
TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
::FindChecked(TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FConfigBranch **ppFVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      ppFVar5 = (FConfigBranch **)(*pcVar1)();
      return ppFVar5;
    }
  }
  return (FConfigBranch **)(lVar8 + 0x10);
}

// FindRef @ 14186ed30

FConfigBranch * __thiscall
TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
::FindRef(TMapBase<FString,FConfigBranch_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>_>
          *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar3 = TSet<TTuple<FString,FConfigBranch_*>,TDefaultMapHashableKeyFuncs<FString,FConfigBranch_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if ((iVar3 != -1) &&
     (lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar4 != 0)) {
    return *(FConfigBranch **)(lVar4 + 0x10);
  }
  return (FConfigBranch *)0x0;
}

// RemoveStable @ 14188bf20

int __thiscall
TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
::RemoveStable(TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
               *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    iVar2 = TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
            ::RemoveImpl<FName>(&this->Pairs,uVar1 + local_res10.Number,&local_res8);
    TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
    ::CompactStable(&this->Pairs);
    return iVar2;
  }
  return 0;
}

// FindOrAddImpl<FName_const_&> @ 1418b2050

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FName_const_&> @ 1418b2100

TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy> *
__thiscall
TMapBase<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>
                    *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(FEmbeddedCallParamsHelper_const_&),FDefaultDelegateUserPolicy>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// GetKeys<TSizedDefaultAllocator<32>_> @ 1418b24d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TMapBase<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
::GetKeys<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  uint *puVar19;
  longlong lVar20;
  undefined1 auStackY_1b8 [32];
  uint local_168;
  uint uStack_164;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined1 local_114 [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  TMapBase<FName,FDataDrivenPlatformInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDataDrivenPlatformInfo,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
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
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  piVar1 = &param_1->ArrayMax;
  uVar9 = 0;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
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
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if (uVar12 == 0) goto LAB_1418b2786;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar12);
  uVar13 = 1;
  if (3 < uVar12) {
    uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_120 = (undefined4)lVar10;
    uVar13 = 1 << ((byte)lVar10 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar13 <= (int)local_50)) goto LAB_1418b2786;
  local_50 = uVar13;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar12 = 0;
        goto LAB_1418b25e5;
      }
    }
    else {
LAB_1418b25e5:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4);
    }
    if (0 < (int)uVar13) {
      uVar16 = (ulonglong)uVar13;
      uVar11 = uVar9;
      do {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar7 = uVar11 & (longlong)(int)uVar13 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(FVar8.Data + uVar7 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (local_50 != 0) {
    local_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_168 = 0;
    uStack_164 = 1;
    uStack_154 = 0;
    uStack_150 = 0;
    if (local_70 != 0) {
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_78;
      }
      uVar12 = *(uint *)FVar18;
      uVar11 = uVar9;
      while (uVar12 == 0) {
        uStack_150 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_150;
        iVar17 = (int)uVar9;
        local_168 = iVar17 + 1;
        uVar9 = (ulonglong)local_168;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_168)
        goto LAB_1418b26e2;
        uVar12 = ((uint *)((longlong)FVar18 + 4))[iVar17];
      }
      uStack_164 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_164 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_11c = (int)lVar10;
      uStack_154 = local_11c + -1 + uStack_150;
      uVar9 = (ulonglong)uStack_154;
      if ((int)local_70 < (int)uStack_154) {
LAB_1418b26e2:
        uVar9 = (ulonglong)local_70;
        uStack_154 = local_70;
      }
    }
    local_114._4_8_ = local_98;
    local_108._padding_ = CONCAT44(uStack_164,local_168);
    local_108.CurrentBitIndex = uStack_154;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_14c;
    local_108.BaseBitIndex = uStack_150;
    if ((int)uVar9 < (int)local_70) {
      do {
        puVar15 = (undefined8 *)((longlong)(int)uVar9 * 0x10 + *(longlong *)local_114._4_8_);
        uVar3 = *puVar15;
        uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar12 = local_50 - 1 & uVar12 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar15 + 0xc) = uVar12;
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        uVar11 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(FVar8.Data + uVar11 * 4);
        *(int *)(FVar8.Data + uVar11 * 4) = (int)uVar9;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar9 = (ulonglong)(uint)local_108.CurrentBitIndex;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_1418b2786:
  iVar17 = 0;
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (*piVar1 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar12,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  iVar2 = *(int *)&(this->Pairs).Elements.field_0x28;
  local_c8 = iVar17;
  iStack_cc = 0;
  uStack_dc = 1;
  if (iVar2 != 0) {
    puVar19 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)TStack_140.Array;
    }
    uVar12 = *puVar19;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar17;
      local_c8 = local_c8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_cc = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1418b282e;
      uVar12 = puVar19[lVar10 + 1];
    }
    uStack_dc = -uVar12 & uVar12;
    uVar9 = (ulonglong)uStack_dc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_118 = (int)lVar10;
    iStack_cc = local_c8 + -1 + local_118;
    if (iVar2 < iStack_cc) {
      iStack_cc = iVar2;
    }
  }
LAB_1418b282e:
  uStack_d0 = 0xffffffff;
  uStack_c4 = local_9c;
  TStack_140._padding_ = CONCAT44(uStack_dc,iVar17);
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_9c;
  TStack_140.BaseBitIndex = local_c8;
  local_e8 = this;
  iStack_e0 = iVar17;
  local_d8 = (undefined1 *)TStack_140.Array;
  TStack_140.CurrentBitIndex = iStack_cc;
  if (iStack_cc < iVar2) {
    do {
      lVar20 = (longlong)TStack_140.CurrentBitIndex;
      lVar10 = *(longlong *)
                ((longlong)TStack_140.CurrentBitIndex * 0xa0 + *(longlong *)&(this->Pairs).Elements)
      ;
      uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar10);
      if (local_98._8_4_ != local_64) {
        FVar8.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_58.Data;
        }
        for (iVar17 = *(int *)(FVar8.Data +
                              (ulonglong)(local_50 - 1 & (int)((ulonglong)lVar10 >> 0x20) + uVar12)
                              * 4); iVar17 != -1;
            iVar17 = *(int *)(local_98._0_8_ + (longlong)iVar17 * 0x10 + 8)) {
          if (*(longlong *)(local_98._0_8_ + (longlong)iVar17 * 0x10) == lVar10) goto LAB_1418b29ae;
        }
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      pFVar14 = (FScriptContainerElement *)(lVar20 * 0xa0 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar4 <= pFVar14) && (pFVar14 < pFVar4 + (longlong)*piVar1 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar17 = (*pcVar5)();
        return iVar17;
      }
      iVar17 = param_1->ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar17 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar17 * 8) =
           *(undefined8 *)pFVar14;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_98,
                 (FName *)local_114,
                 (bool *)((longlong)TStack_140.CurrentBitIndex * 0xa0 +
                         *(longlong *)&(this->Pairs).Elements));
LAB_1418b29ae:
      TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
    } while (TStack_140.CurrentBitIndex < (TStack_140.Array)->NumBits);
  }
  iVar17 = param_1->ArrayNum;
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return iVar17;
}

// Find @ 1418da870

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0;
}

// Remove @ 1418f2840

int __thiscall
TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
::Remove(TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
         *this,FName param_1)

{
  longlong lVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar3 +
                    ((longlong)(this->Pairs).HashSize - 1U & (longlong)(int)(param_1.Number + uVar2)
                    ) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        if (*(FName *)((longlong)iVar4 * 0x20 + lVar1) == param_1) {
          TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(&this->Pairs,iVar4);
          return 1;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar1);
      } while (iVar4 != -1);
      return 0;
    }
  }
  return 0;
}

// EmplaceByHash<__int64_const_&> @ 14190c720

FCsvRow * __thiscall
TMapBase<__int64,FCsvStreamWriter::FCsvRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStreamWriter::FCsvRow,0>_>
::EmplaceByHash<__int64_const_&>
          (TMapBase<__int64,FCsvStreamWriter::FCsvRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStreamWriter::FCsvRow,0>_>
           *this,uint param_1,long64 *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar5 + 4 + (longlong)iVar4 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer == (TSparseSetElement<TTuple<__int64,FCsvStreamWriter::FCsvRow>_> *)0x0) {
    local_18.Pointer = (TSparseSetElement<TTuple<__int64,FCsvStreamWriter::FCsvRow>_> *)0x0;
  }
  else {
    *(long64 *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x20) = 0;
    DestructItems<FCsvProcessedEvent,int>((FCsvProcessedEvent *)0x0,0);
    *(undefined4 *)((longlong)local_18.Pointer + 0x28) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<__int64,FCsvStreamWriter::FCsvRow>,TDefaultMapHashableKeyFuncs<__int64,FCsvStreamWriter::FCsvRow,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<__int64,FCsvStreamWriter::FCsvRow>,TDefaultMapHashableKeyFuncs<__int64,FCsvStreamWriter::FCsvRow,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (FCsvRow *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar5 * 0x30);
}

// EmplaceByHash<__int64> @ 14190cc20

FCsvRow * __thiscall
TMapBase<__int64,FCsvStreamWriter::FCsvRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStreamWriter::FCsvRow,0>_>
::EmplaceByHash<__int64>
          (TMapBase<__int64,FCsvStreamWriter::FCsvRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStreamWriter::FCsvRow,0>_>
           *this,uint param_1,long64 *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar5 + 4 + (longlong)iVar4 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer == (TSparseSetElement<TTuple<__int64,FCsvStreamWriter::FCsvRow>_> *)0x0) {
    local_18.Pointer = (TSparseSetElement<TTuple<__int64,FCsvStreamWriter::FCsvRow>_> *)0x0;
  }
  else {
    *(long64 *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x20) = 0;
    DestructItems<FCsvProcessedEvent,int>((FCsvProcessedEvent *)0x0,0);
    *(undefined4 *)((longlong)local_18.Pointer + 0x28) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<__int64,FCsvStreamWriter::FCsvRow>,TDefaultMapHashableKeyFuncs<__int64,FCsvStreamWriter::FCsvRow,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<__int64,FCsvStreamWriter::FCsvRow>,TDefaultMapHashableKeyFuncs<__int64,FCsvStreamWriter::FCsvRow,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (FCsvRow *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar5 * 0x30);
}

// FindOrAddImpl<__int64_const_&> @ 14190de90

FCsvStatSeriesValue * __thiscall
TMapBase<__int64,FCsvStatSeriesValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStatSeriesValue,0>_>
::FindOrAddImpl<__int64_const_&>
          (TMapBase<__int64,FCsvStatSeriesValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStatSeriesValue,0>_>
           *this,uint param_1,long64 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  long64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(longlong *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_14190df22;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<__int64,FCsvStatSeriesValue>,TDefaultMapHashableKeyFuncs<__int64,FCsvStatSeriesValue,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<__int64_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<__int64_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_14190df22:
  return (FCsvStatSeriesValue *)(lVar3 + 8);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14190ea30

void __thiscall
TMapBase<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IQueuedWork_*,FQueuedThreadPoolWrapper::FScheduledWork_*,0>_>
           *this,TArray<FQueuedThreadPoolWrapper::FScheduledWork_*,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14190eb03;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14190eb03:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 3 + 1) * 8);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14190ec80

void __thiscall
TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar10 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar11 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar10,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar10 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14190ed60;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar10 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14190ed60:
  TStack_40._padding_ = CONCAT44(uVar10,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar4) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 5 + 2) * 8);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10),
                         (FString *)pFVar2);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 14193c6e0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
       *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == param_1) {
          pTVar3 = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
          if (puVar2 != (uint *)0x0) {
            pTVar3 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar2 + 2);
          }
          return pTVar3;
        }
        uVar1 = puVar2[6];
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 14193c740

FString * __thiscall
TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::Find
          (TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pFVar4 = (FName *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = pFVar2 + 1;
          }
          return (FString *)pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FString *)0x0;
}

// Find @ 14193c7e0

int * __thiscall
TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::Find
          (TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
           *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  int *piVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    piVar6 = (int *)0x0;
    if (lVar4 != 0) {
      piVar6 = (int *)(lVar4 + 0x10);
    }
    return piVar6;
  }
  return (int *)0x0;
}

// Find @ 14193c870

int * __thiscall
TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
::Find(TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
       *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          piVar4 = (int *)0x0;
          if (lVar1 != 0) {
            piVar4 = (int *)(lVar1 + 8);
          }
          return piVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (int *)0x0;
}

// Find @ 14193c8f0

FCsvPersistentCustomStatBase ** __thiscall
TMapBase<unsigned___int64,FCsvPersistentCustomStatBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvPersistentCustomStatBase_*,0>_>
::Find(TMapBase<unsigned___int64,FCsvPersistentCustomStatBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvPersistentCustomStatBase_*,0>_>
       *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FCsvPersistentCustomStatBase **ppFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar4 = (FCsvPersistentCustomStatBase **)0x0;
          if (lVar1 != 0) {
            ppFVar4 = (FCsvPersistentCustomStatBase **)(lVar1 + 8);
          }
          return ppFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FCsvPersistentCustomStatBase **)0x0;
}

// FindChecked @ 14193cff0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
              *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  uint *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (uint *)0x0) {
            return (TArray<FString,TSizedDefaultAllocator<32>_> *)(puVar5 + 2);
          }
          break;
        }
        uVar3 = puVar5[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<FString,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindRef @ 14193ef20

FAsyncTask<FRemoteConfigAsyncWorker> * __thiscall
TMapBase<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>_>
::FindRef(TMapBase<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>_>
          *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar3 = TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if ((iVar3 != -1) &&
     (lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar4 != 0)) {
    return *(FAsyncTask<FRemoteConfigAsyncWorker> **)(lVar4 + 0x10);
  }
  return (FAsyncTask<FRemoteConfigAsyncWorker> *)0x0;
}

// Remove @ 141964d10

int __thiscall
TMapBase<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>_>
::Remove(TMapBase<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>_>
         *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  wchar_t *pwVar3;
  ForElementType<FSetElementId> FVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 == *(int *)&(this->Pairs).Elements.field_0x34) {
    return 0;
  }
  iVar7 = (param_1->Data).ArrayNum;
  if (iVar7 == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar6 = 0;
  iVar2 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar2 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,pwVar3);
  FVar4 = (this->Pairs).Hash.SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
  }
  iVar7 = *(int *)((longlong)FVar4 +
                  ((longlong)(this->Pairs).HashSize - 1U & (longlong)(int)uVar1) * 4);
  if (iVar7 != -1) {
    while( true ) {
      iVar2 = (param_1->Data).ArrayNum;
      puVar5 = (undefined8 *)((longlong)iVar7 * 0x20 + *(longlong *)&(this->Pairs).Elements);
      iVar6 = *(int *)(puVar5 + 1);
      if (iVar6 == iVar2) break;
      bVar8 = iVar2 + iVar6 == 1;
LAB_141964dbd:
      if (bVar8) goto LAB_141964de9;
      iVar7 = *(int *)(puVar5 + 3);
      if (iVar7 == -1) {
        return 0;
      }
    }
    if (1 < iVar6) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)*puVar5,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar8 = iVar2 == 0;
      goto LAB_141964dbd;
    }
LAB_141964de9:
    TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
    ::RemoveByIndex(&this->Pairs,iVar7);
    iVar6 = 1;
  }
  return iVar6;
}

// EmplaceByHash<FName_const_&> @ 14197f540

int * __thiscall
TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
EmplaceByHash<FName_const_&>
          (TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this,
          uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar5 + 4 + (longlong)iVar4 * 0x14);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,int>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0xc) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (int *)(*(longlong *)&(this->Pairs).Elements + lVar5 * 0x14 + 8);
}

// EmplaceByHash<FName> @ 14197ffc0

int * __thiscall
TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
EmplaceByHash<FName>
          (TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this,
          uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar5 + 4 + (longlong)iVar4 * 0x14);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,int>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0xc) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (int *)(*(longlong *)&(this->Pairs).Elements + lVar5 * 0x14 + 8);
}

// FindOrAddImpl<FName_const_&> @ 141982db0

int * __thiscall
TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
FindOrAddImpl<FName_const_&>
          (TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this,
          uint param_1,FName *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x14;
        if (*(FName *)(lVar2 + (longlong)iVar3 * 0x14) == *param_2) {
          if (lVar1 != 0) {
            return (int *)(lVar1 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  piVar4 = EmplaceByHash<FName_const_&>(this,param_1,param_2);
  return piVar4;
}

// FindOrAddImpl<FName_const_&> @ 141982e30

FAccumulatorTracker * __thiscall
TMapBase<FName,FLoadTimeTracker::FAccumulatorTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FLoadTimeTracker::FAccumulatorTracker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FAccumulatorTracker *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FAccumulatorTracker *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<FName_const_&> @ 141982ee0

FTimeAndCount * __thiscall
TMapBase<FName,FLoadTimeTracker::FTimeAndCount,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FTimeAndCount,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FLoadTimeTracker::FTimeAndCount,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FTimeAndCount,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FTimeAndCount *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FLoadTimeTracker::FTimeAndCount>,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FTimeAndCount,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FTimeAndCount *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FName_const_&> @ 141982f90

TArray<double,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<double,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<double,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TArray<double,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<double,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TArray<double,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TArray<double,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<double,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<double,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FName_const_&> @ 141983040

ulong64 * __thiscall
TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_1419830d2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,unsigned___int64>,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_1419830d2:
  return (ulong64 *)(lVar3 + 8);
}

// FindOrAddImpl<FName> @ 1419830f0

int * __thiscall
TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
FindOrAddImpl<FName>
          (TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this,
          uint param_1,FName *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x14;
        if (*(FName *)(lVar2 + (longlong)iVar3 * 0x14) == *param_2) {
          if (lVar1 != 0) {
            return (int *)(lVar1 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  piVar4 = EmplaceByHash<FName>(this,param_1,param_2);
  return piVar4;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 141983990

void __thiscall
TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned___int64,0>_>
           *this,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_141983a63;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_141983a63:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 3 + 1) * 8);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// FindChecked @ 1419942c0

___itt_string_handle ** __thiscall
TMapBase<unsigned_int,___itt_string_handle_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,___itt_string_handle_*,0>_>
::FindChecked(TMapBase<unsigned_int,___itt_string_handle_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,___itt_string_handle_*,0>_>
              *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ___itt_string_handle **pp_Var6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (___itt_string_handle **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (___itt_string_handle **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pp_Var6 = (___itt_string_handle **)(*pcVar3)();
  return pp_Var6;
}

// FindChecked @ 141994360

int * __thiscall
TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::FindChecked
          (TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this,
          FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  ForElementType<FSetElementId> FVar8;
  
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x14;
        if (*(FName *)(lVar2 + (longlong)iVar6 * 0x14) == param_1) {
          if (lVar1 != 0) {
            return (int *)(lVar1 + 8);
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0xc);
      } while (iVar6 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (int *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  piVar7 = (int *)(*pcVar3)();
  return piVar7;
}

// Emplace<FName_const_&> @ 1419b8bc0

TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
::Emplace<FName_const_&>
          (TMapBase<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
           *this,FName *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    *(FName *)local_18.Pointer = *param_1;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_18.Pointer;
  local_res8[0] = local_18.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,local_res8[0]);
  }
  return (TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// Emplace<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_const_&> @ 1419bc460

TArray<FStatMessage,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
::Emplace<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_const_&>
          (TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
           *this,FName *param_1,TArray<FStatMessage,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  TPairInitializer<FName_&&,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_const_&> local_28;
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  local_28.Key = param_1;
  local_28.Value = param_2;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar7);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar5);
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_> *)0x0) {
    TPairInitializer<FName_&&,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_const_&>::
    operator<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>
              (&local_28,local_18.Pointer);
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_18.Pointer;
  local_res8[0] = local_18.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_18.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_18.Pointer,local_res8[0]);
  }
  return (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar7 * 0x20);
}

// EmplaceByHash<FName_const_&> @ 1419bc8a0

TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>_>
  *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>_>
            *)0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    *(FName *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// EmplaceByHash<FName_const_&> @ 1419bc9d0

TArray<FStatMessage,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
::EmplaceByHash<FName_const_&>
          (TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_> *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_> *)
           0x0;
  if (local_18.Pointer !=
      (TSparseSetElement<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// FindOrAddImpl<unsigned_int_const_&> @ 1419be5a0

FName * __thiscall
TMapBase<unsigned_int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>_>
           *this,uint param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x14;
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x14) == *param_2) {
          if (lVar3 != 0) goto LAB_1419be632;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,FName>,TDefaultMapHashableKeyFuncs<unsigned_int,FName,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14;
LAB_1419be632:
  return (FName *)(lVar3 + 4);
}

// FindOrAddImpl<FName_const_&> @ 1419be650

TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TArray<TStatMessage<EComplexStatField>,TSizedDefaultAllocator<32>_> *)
                   (pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  pTVar3 = EmplaceByHash<FName_const_&>(this,param_1,param_2);
  return pTVar3;
}

// FindOrAddImpl<FName_const_&> @ 1419be6d0

TArray<FStatMessage,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FStatMessage,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  TArray<FStatMessage,TSizedDefaultAllocator<32>_> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TArray<FStatMessage,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  pTVar3 = EmplaceByHash<FName_const_&>(this,param_1,param_2);
  return pTVar3;
}

// FindOrAddImpl<FName_const_&> @ 1419be750

TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_> *
__thiscall
TMapBase<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
                    *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[0xb].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<__int64_const_&> @ 1419be800

FHudFrame * __thiscall
TMapBase<__int64,FHudFrame,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>_>::
FindOrAddImpl<__int64_const_&>
          (TMapBase<__int64,FHudFrame,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>_>
           *this,uint param_1,long64 *param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  long64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0xf0 + *(longlong *)&(this->Pairs).Elements);
        if (*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FHudFrame *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[0x1d];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<__int64,FHudFrame>,TDefaultMapHashableKeyFuncs<__int64,FHudFrame,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<__int64_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<__int64_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FHudFrame *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0xf0 + 8);
}

// FindOrAddImpl<__int64_const_&> @ 1419be8b0

FStatPacketArray * __thiscall
TMapBase<__int64,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>_>
::FindOrAddImpl<__int64_const_&>
          (TMapBase<__int64,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>_>
           *this,uint param_1,long64 *param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  long64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FStatPacketArray *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<__int64,FStatPacketArray>,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<__int64_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<__int64_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FStatPacketArray *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FName> @ 1419be960

float * __thiscall
TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
FindOrAddImpl<FName>
          (TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x14;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x14) == *param_2) {
          if (lVar3 != 0) goto LAB_1419be9f2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
  EmplaceByHash<TKeyInitializer<FName_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14;
LAB_1419be9f2:
  return (float *)(lVar3 + 8);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 1419bea10

void __thiscall
TMapBase<int,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<int,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FStatPacketArray,0>_>
           *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1419beae3;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_1419beae3:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 4) =
           *(undefined4 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 1419bec60

void __thiscall
TMapBase<__int64,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<__int64,FStatPacketArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FStatPacketArray,0>_>
           *this,TArray<__int64,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1419bed33;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_1419bed33:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           *(undefined8 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 1419beeb0

void __thiscall
TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
           *this,TArray<FRawStatStackNode_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1419bef83;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_1419bef83:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 3 + 1) * 8);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// ~TMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_> @ 1419d0980

void __thiscall
TMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
::
~TMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
          (TMapBase<FName,FComplexRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FComplexRawStatStackNode_*,0>_>
           *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->Pairs).HashSize = 0;
  FVar1 = (this->Pairs).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FComplexRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FComplexRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FComplexRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_> @ 1419d09c0

void __thiscall
TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
::
~TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
          (TMapBase<FName,FRawStatStackNode_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRawStatStackNode_*,0>_>
           *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->Pairs).HashSize = 0;
  FVar1 = (this->Pairs).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRawStatStackNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// Find @ 1419f8250

FPendingRegistration * __thiscall
TMapBase<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
::Find(TMapBase<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
       *this,FGuid *param_1)

{
  TMapBase<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
  *pTVar1;
  int iVar2;
  ulong64 uVar3;
  FPendingRegistration *pFVar4;
  undefined1 *puVar5;
  
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<TTuple<FGuid,FStaticCustomVersionRegistry::FPendingRegistration>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar3,param_1);
  if (iVar2 != -1) {
    pTVar1 = *(TMapBase<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
               **)&(this->Pairs).Elements.field_0xc00;
    if (pTVar1 != (TMapBase<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,TInlineSetAllocator<64,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FGuid,FStaticCustomVersionRegistry::FPendingRegistration,0>_>
                   *)0x0) {
      this = pTVar1;
    }
    puVar5 = &(this->Pairs).Elements.field_0x0 + (longlong)iVar2 * 0x30;
    pFVar4 = (FPendingRegistration *)0x0;
    if (puVar5 != (undefined1 *)0x0) {
      pFVar4 = (FPendingRegistration *)(puVar5 + 0x10);
    }
    return pFVar4;
  }
  return (FPendingRegistration *)0x0;
}

// Find @ 1419f82d0

TStatIdData ** __thiscall
TMapBase<FName,TStatIdData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>_>
::Find(TMapBase<FName,TStatIdData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TStatIdData_*,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TStatIdData **ppTVar5;
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
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          ppTVar5 = (TStatIdData **)0x0;
          if (lVar1 != 0) {
            ppTVar5 = (TStatIdData **)(lVar1 + 8);
          }
          return ppTVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (TStatIdData **)0x0;
}

// Find @ 1419f8370

FBudgetData * __thiscall
TMapBase<FName,FBudgetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBudgetData,0>_>::
Find(TMapBase<FName,FBudgetData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FBudgetData,0>_>
     *this,FName param_1)

{
  uint uVar1;
  FBudgetData *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0xc0 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FBudgetData *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FBudgetData *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x17].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FBudgetData *)0x0;
}

// Find @ 1419f8410

FGroupEnable * __thiscall
TMapBase<FName,FStatGroupEnableManager::FGroupEnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>_>
::Find(TMapBase<FName,FStatGroupEnableManager::FGroupEnable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatGroupEnableManager::FGroupEnable,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FGroupEnable *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0xb8 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FGroupEnable *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FGroupEnable *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x16].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FGroupEnable *)0x0;
}

// Find @ 1419f84b0

FInternalGroup * __thiscall
TMapBase<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
::Find(TMapBase<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FInternalGroup *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x130 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FInternalGroup *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FInternalGroup *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[0x25].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FInternalGroup *)0x0;
}

// FindChecked @ 1419f92b0

FNameEntryId * __thiscall
TMapBase<int,FNameEntryId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNameEntryId,0>_>::
FindChecked(TMapBase<int,FNameEntryId,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FNameEntryId,0>_>
            *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNameEntryId *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FNameEntryId *)(piVar5 + 1);
          }
          break;
        }
        iVar3 = piVar5[2];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FNameEntryId *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FNameEntryId *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 1419f9350

FStatMessage * __thiscall
TMapBase<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
::FindChecked(TMapBase<FName,FStatMessage,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,FStatMessage> *pTVar3;
  FStatMessage *pFVar4;
  
  pTVar3 = TSet<TTuple<FName,FStatMessage>,TDefaultMapHashableKeyFuncs<FName,FStatMessage,0>,FDefaultSetAllocator>
           ::Find(&this->Pairs,param_1);
  if (pTVar3 != (TTuple<FName,FStatMessage> *)0x0) {
    return (FStatMessage *)&pTVar3->field_0x8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FStatMessage *)(*pcVar1)();
    return pFVar4;
  }
  return (FStatMessage *)&DAT_00000008;
}

// FindChecked @ 1419f93b0

FName * __thiscall
TMapBase<enum_FWindowsPlatformMemory::EMemoryCounterRegion,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FWindowsPlatformMemory::EMemoryCounterRegion,FName,0>_>
::FindChecked(void *this,EMemoryCounterRegion param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) - MCR_Physical & param_1) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x14;
        if (*(EMemoryCounterRegion *)(*(longlong *)this + (longlong)iVar3 * 0x14) == param_1) {
          if (lVar5 != 0) {
            return (FName *)(lVar5 + 4);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0xc);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FName *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FName *)(*pcVar1)();
  return pFVar4;
}

// Remove @ 141a18ae0

int __thiscall
TMapBase<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
::Remove(TMapBase<FName,FInternalGroup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>_>
         *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    iVar2 = TSet<TTuple<FName,FInternalGroup>,TDefaultMapHashableKeyFuncs<FName,FInternalGroup,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>(&this->Pairs,local_res10.Number + uVar1,&local_res8);
    return iVar2;
  }
  return 0;
}

// EmplaceByHash<unsigned_int_const_&> @ 141a4d8e0

int * __thiscall
TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>::
EmplaceByHash<unsigned_int_const_&>
          (TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
           *this,uint param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar5 + 4 + (longlong)iVar4 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer != (TSparseSetElement<TTuple<unsigned_int,int>_> *)0x0) {
    *(uint *)local_18.Pointer = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 4) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 8) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (int *)(*(longlong *)&(this->Pairs).Elements + 4 + lVar5 * 0x10);
}

// EmplaceByHash<unsigned_int> @ 141a4da00

int * __thiscall
TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>::
EmplaceByHash<unsigned_int>
          (TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
           *this,uint param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar5 + 4 + (longlong)iVar4 * 0x10);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  if (local_18.Pointer != (TSparseSetElement<TTuple<unsigned_int,int>_> *)0x0) {
    *(uint *)local_18.Pointer = *param_2;
    *(undefined4 *)((longlong)local_18.Pointer + 4) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 8) = 0xffffffff;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_18.Pointer,local_res8,(bool *)0x0);
  lVar5 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_18.Pointer,local_res8[0]);
  }
  return (int *)(*(longlong *)&(this->Pairs).Elements + 4 + lVar5 * 0x10);
}

// FindOrAddImpl<FGuid_const_&> @ 141a514b0

FRegisteredGuid * __thiscall
TMapBase<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,0>_>
::FindOrAddImpl<FGuid_const_&>
          (TMapBase<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,0>_>
           *this,uint param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FGuid *local_res20;
  
  iVar1 = TSet<TTuple<FGuid,FDevSystemGuidRegistry::FRegisteredGuid>,TDefaultMapHashableKeyFuncs<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x2c + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FRegisteredGuid *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FGuid,FDevSystemGuidRegistry::FRegisteredGuid>,TDefaultMapHashableKeyFuncs<FGuid,FDevSystemGuidRegistry::FRegisteredGuid,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FGuid_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FGuid_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FRegisteredGuid *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x2c + 0x10);
}

// FindOrAddImpl<FName> @ 141a9b5c0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FName>
          (TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FString,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

