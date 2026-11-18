// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// operator() @ 142202b20

bool __thiscall
`FObjectExportSortHelper::SortExports'::__l2::<lambda_1>::operator()
          (void *this,FObjectExport *param_1,FObjectExport *param_2)

{
  UObject *pUVar1;
  TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
  *this_00;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  if (param_1->Object == (UObject *)0x0) {
    return false;
  }
  pUVar1 = param_2->Object;
  if (pUVar1 == (UObject *)0x0) {
    return true;
  }
  this_00 = *(TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
              **)this;
  pFVar3 = TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
           ::Find(this_00,param_1->Object);
  pFVar4 = TMapBase<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
           ::Find(this_00,pUVar1);
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

// SortExports @ 14222c840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void __cdecl FObjectExportSortHelper::SortExports(FLinkerSave *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ForAnyElementType FVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  ForElementType<unsigned_int> FVar12;
  undefined1 auStackY_118 [32];
  FIdentityFunctor local_e8 [8];
  undefined1 local_e0 [16];
  undefined4 local_d0;
  uint uStack_cc;
  uint uStack_c8;
  undefined4 uStack_c4;
  TPairInitializer<UObject_*_const_&,FString_&&> local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b0;
  longlong local_90;
  FString *local_88;
  undefined1 local_78 [32];
  ForElementType<unsigned_int> local_58;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  FScriptContainerElement local_40 [8];
  ForAnyElementType local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar5 = (uint)param_1->_padding_;
  if (uVar5 == 0) {
    return;
  }
  uVar4 = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (ForElementType<unsigned_int>)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = -1;
  local_44 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar5);
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_78,uVar5);
  if (uVar5 < 4) {
    uVar5 = 1;
  }
  else {
    uVar9 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar5 = 1 << ((byte)lVar6 & 0x1f);
  }
  if ((local_30 != 0) && ((int)uVar5 <= (int)local_30)) goto LAB_14222caf0;
  local_30 = uVar5;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,4);
  }
  if (uVar5 != 0) {
    uVar8 = uVar5;
    if (uVar5 < 2) {
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        uVar8 = 0;
        goto LAB_14222c927;
      }
    }
    else {
LAB_14222c927:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,uVar8,4);
    }
    if (0 < (int)uVar5) {
      uVar10 = (ulonglong)uVar5;
      uVar9 = uVar4;
      do {
        FVar3.Data = local_40;
        if (local_38.Data != (FScriptContainerElement *)0x0) {
          FVar3.Data = local_38.Data;
        }
        uVar1 = uVar9 & (longlong)(int)uVar5 - 1U;
        uVar9 = uVar9 + 1;
        *(undefined4 *)(FVar3.Data + uVar1 * 4) = 0xffffffff;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  if (local_30 != 0) {
    local_e0._8_8_ = local_78 + 0x10;
    local_e0._0_4_ = 0;
    local_e0._4_4_ = 1;
    uStack_cc = 0;
    uStack_c8 = 0;
    if (local_50 != 0) {
      FVar12 = (ForElementType<unsigned_int>)((longlong)local_78 + 0x10);
      if (local_58 != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_58;
      }
      uVar5 = *(uint *)FVar12;
      uVar9 = uVar4;
      while (uVar5 == 0) {
        uStack_c8 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_c8;
        iVar2 = (int)uVar4;
        local_e0._0_4_ = iVar2 + 1;
        uVar4 = (ulonglong)(uint)local_e0._0_4_;
        if ((int)((local_50 - 1) + ((int)(local_50 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_e0._0_4_
           ) goto LAB_14222ca2a;
        uVar5 = ((uint *)((longlong)FVar12 + 4))[iVar2];
      }
      local_e0._4_4_ = -uVar5 & uVar5;
      uVar4 = (ulonglong)(uint)local_e0._4_4_ * 2 + 1;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      uStack_cc = (int)lVar6 + -1 + (int)uVar9;
      uVar4 = (ulonglong)uStack_cc;
      if ((int)local_50 < (int)uStack_cc) {
LAB_14222ca2a:
        uVar4 = (ulonglong)local_50;
        uStack_cc = local_50;
      }
    }
    local_d0 = 0xffffffff;
    local_c0.Value = (FString *)local_78;
    local_b0._padding_ = CONCAT44(local_e0._4_4_,local_e0._0_4_);
    local_b0.CurrentBitIndex = uStack_cc;
    local_b0.UnvisitedBitMask = 0xffffffff;
    local_b0._28_4_ = uStack_c4;
    local_b0.BaseBitIndex = uStack_c8;
    local_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e0._8_8_;
    if ((int)uVar4 < (int)local_50) {
      do {
        pFVar11 = ((local_c0.Value)->Data).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x20;
        uVar5 = ((uint)(*(ulonglong *)pFVar11 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pFVar11 >> 4)
                ) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uVar5 >> 0x10 ^ uVar5) & local_30 - 1;
        *(uint *)(pFVar11 + 0x1c) = uVar5;
        FVar3.Data = local_40;
        if (local_38.Data != (FScriptContainerElement *)0x0) {
          FVar3.Data = local_38.Data;
        }
        uVar9 = (longlong)(int)local_30 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(pFVar11 + 0x18) = *(undefined4 *)(FVar3.Data + uVar9 * 4);
        *(int *)(FVar3.Data + uVar9 * 4) = (int)uVar4;
        local_b0.UnvisitedBitMask = local_b0.UnvisitedBitMask & ~local_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b0);
        uVar4 = (ulonglong)(uint)local_b0.CurrentBitIndex;
      } while (local_b0.CurrentBitIndex < (local_b0.Array)->NumBits);
    }
  }
LAB_14222caf0:
  iVar2 = (int)param_1->_padding_;
  lVar6 = param_1->_padding_;
  lVar7 = (longlong)iVar2 * 0x68 + lVar6;
  while( true ) {
    if ((int)param_1->_padding_ != iVar2) {
      `TCheckedPointerIterator<FObjectExport,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_e8);
    }
    if (lVar6 == lVar7) break;
    if (*(UObjectBaseUtility **)(lVar6 + 0x40) != (UObjectBaseUtility *)0x0) {
      local_90 = lVar6 + 0x40;
      local_88 = UObjectBaseUtility::GetFullName
                           (*(UObjectBaseUtility **)(lVar6 + 0x40),(FString *)local_e0,
                            (UObject *)0x0,None);
      TSet<TTuple<UObject_*,FString>,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UObject_*_const_&,FString_&&>_>
                ((TSet<TTuple<UObject_*,FString>,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>,FDefaultSetAllocator>
                  *)local_78,&local_c0,(bool *)&local_90);
      if ((void *)CONCAT44(local_e0._4_4_,local_e0._0_4_) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_e0._4_4_,local_e0._0_4_));
      }
    }
    lVar6 = lVar6 + 0x68;
  }
  AlgoImpl::
  IntroSortInternal<FObjectExport,int,FIdentityFunctor,_FObjectExportSortHelper::SortExports_::__l2::<lambda_1>_>
            ((FObjectExport *)param_1->_padding_,(int)param_1->_padding_,local_e8[0],
             (TMap<UObject_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FString,0>_>
              *)local_78);
  local_30 = 0;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UObject_*,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = -1;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

