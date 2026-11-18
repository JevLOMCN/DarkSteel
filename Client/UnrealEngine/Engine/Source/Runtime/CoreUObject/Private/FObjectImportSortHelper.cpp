// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// operator() @ 142202bc0

bool __thiscall
`FObjectImportSortHelper::SortImports'::__l2::<lambda_1>::operator()
          (void *this,FObjectImport *param_1,FObjectImport *param_2)

{
  TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
  *pTVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UObject *local_res10;
  
  local_res10 = param_1->XObject;
  if (local_res10 == (UObject *)0x0) {
    return false;
  }
  if (param_2->XObject == (UObject *)0x0) {
    return true;
  }
  pTVar1 = *(TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
             **)this;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pFVar3 = TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
           ::Find(pTVar1,(TObjectPtr<UObject_const_>)&local_res10);
  local_res10 = param_2->XObject;
  pTVar1 = *(TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
             **)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pFVar4 = TMapBase<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
           ::Find(pTVar1,(TObjectPtr<UObject_const_>)&local_res10);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar5,pwVar6);
  return SUB41((uint)iVar2 >> 0x1f,0);
}

// SortImports @ 14222cc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __cdecl FObjectImportSortHelper::SortImports(FLinkerSave *param_1)

{
  UObject *pUVar1;
  ulonglong uVar2;
  FString *pFVar3;
  int iVar4;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ForElementType<unsigned_int> FVar14;
  undefined1 auStack_118 [32];
  FIdentityFunctor local_f8 [8];
  undefined1 local_f0 [16];
  undefined4 local_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  TPairInitializer<TObjectPtr<UObject>_&&,FString_&&> local_d0;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  FString **local_98;
  FString *local_90;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  uVar7 = (uint)param_1->_padding_;
  if (uVar7 == 0) {
    return;
  }
  uVar6 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar7);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar7);
  if (uVar7 < 4) {
    uVar7 = 1;
  }
  else {
    uVar12 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar7 = 1 << ((byte)lVar8 & 0x1f);
  }
  if ((local_40 != 0) && ((int)uVar7 <= (int)local_40)) goto LAB_14222cf16;
  local_40 = uVar7;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar7 != 0) {
    uVar11 = uVar7;
    if (uVar7 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_14222cd40;
      }
    }
    else {
LAB_14222cd40:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar11,4);
    }
    if (0 < (int)uVar7) {
      uVar13 = (ulonglong)uVar7;
      uVar12 = uVar6;
      do {
        FVar5.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar5.Data = local_48.Data;
        }
        uVar2 = uVar12 & (longlong)(int)uVar7 - 1U;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(FVar5.Data + uVar2 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (local_40 != 0) {
    local_f0._8_8_ = local_88 + 0x10;
    local_f0._0_4_ = 0;
    local_f0._4_4_ = 1;
    uStack_dc = 0;
    uStack_d8 = 0;
    if (local_60 != 0) {
      FVar14 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_68;
      }
      uVar7 = *(uint *)FVar14;
      uVar12 = uVar6;
      while (uVar7 == 0) {
        uStack_d8 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_d8;
        iVar4 = (int)uVar6;
        local_f0._0_4_ = iVar4 + 1;
        uVar6 = (ulonglong)(uint)local_f0._0_4_;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_f0._0_4_
           ) goto LAB_14222ce4a;
        uVar7 = ((uint *)((longlong)FVar14 + 4))[iVar4];
      }
      local_f0._4_4_ = -uVar7 & uVar7;
      uVar6 = (ulonglong)(uint)local_f0._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uStack_dc = (int)lVar8 + -1 + (int)uVar12;
      uVar6 = (ulonglong)uStack_dc;
      if ((int)local_60 < (int)uStack_dc) {
LAB_14222ce4a:
        uVar6 = (ulonglong)local_60;
        uStack_dc = local_60;
      }
    }
    local_e0 = 0xffffffff;
    local_c0 = (longlong *)local_88;
    local_b8._padding_ = CONCAT44(local_f0._4_4_,local_f0._0_4_);
    local_b8.CurrentBitIndex = uStack_dc;
    local_b8.UnvisitedBitMask = 0xffffffff;
    local_b8._28_4_ = uStack_d4;
    local_b8.BaseBitIndex = uStack_d8;
    local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f0._8_8_;
    if ((int)uVar6 < (int)local_60) {
      do {
        puVar9 = (undefined8 *)((longlong)(int)uVar6 * 0x20 + *local_c0);
        pUVar1 = (UObject *)*puVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        uVar7 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
                -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & local_40 - 1;
        *(uint *)((longlong)puVar9 + 0x1c) = uVar7;
        FVar5.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar5.Data = local_48.Data;
        }
        uVar12 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(FVar5.Data + uVar12 * 4);
        *(int *)(FVar5.Data + uVar12 * 4) = (int)uVar6;
        local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
        uVar6 = (ulonglong)(uint)local_b8.CurrentBitIndex;
      } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
    }
  }
LAB_14222cf16:
  iVar4 = (int)param_1->_padding_;
  lVar8 = param_1->_padding_;
  lVar10 = (longlong)iVar4 * 0x38 + lVar8;
  while( true ) {
    if ((int)param_1->_padding_ != iVar4) {
      `TCheckedPointerIterator<FObjectImport,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_f8);
    }
    if (lVar8 == lVar10) break;
    if (*(UObjectBaseUtility **)(lVar8 + 0x28) != (UObjectBaseUtility *)0x0) {
      pFVar3 = UObjectBaseUtility::GetFullName
                         (*(UObjectBaseUtility **)(lVar8 + 0x28),(FString *)local_f0,(UObject *)0x0,
                          None);
      local_d0.Value = *(FString **)(lVar8 + 0x28);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)local_d0.Value != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_d0.Value);
      }
      local_98 = &local_d0.Value;
      local_90 = pFVar3;
      TSet<TTuple<TObjectPtr<UObject>,FString>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<TObjectPtr<UObject>_&&,FString_&&>_>
                ((TSet<TTuple<TObjectPtr<UObject>,FString>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>,FDefaultSetAllocator>
                  *)local_88,&local_d0,(bool *)&local_98);
      if ((void *)CONCAT44(local_f0._4_4_,local_f0._0_4_) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_f0._4_4_,local_f0._0_4_));
      }
    }
    lVar8 = lVar8 + 0x38;
  }
  AlgoImpl::
  IntroSortInternal<FObjectImport,int,FIdentityFunctor,_FObjectImportSortHelper::SortImports_::__l2::<lambda_1>_>
            ((FObjectImport *)param_1->_padding_,(int)param_1->_padding_,local_f8[0],
             (TMap<TObjectPtr<UObject>,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,FString,0>_>
              *)local_88);
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

