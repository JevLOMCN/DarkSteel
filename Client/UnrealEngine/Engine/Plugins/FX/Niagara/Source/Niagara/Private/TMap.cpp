// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// RemoveAndCopyValue @ 148eced10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
TMap<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,0>_>
::RemoveAndCopyValue
          (TMap<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<USceneCaptureComponent2D>,0>_>
           *this,ulong64 param_1,TObjectPtr<USceneCaptureComponent2D> *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint uVar10;
  
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar8 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &this->field_0x38;
    }
    uVar10 = *(uint *)(puVar8 + (ulonglong)
                                (*(int *)&this->field_0x48 - 1U &
                                (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (uVar10 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar1 = (longlong)(int)uVar10 * 0x18;
        if (*(ulong64 *)(lVar1 + lVar3) == param_1) {
          if ((UE::GC::GIsIncrementalReachabilityPending) &&
             (pUVar4 = *(UObject **)(lVar1 + 8 + lVar3), pUVar4 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar4);
          }
          param_2->field0_0x0 = *(TObjectPtr<USceneCaptureComponent2D>_u_0 *)(lVar1 + 8 + lVar3);
          if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)&this->field_0x28)) {
            puVar8 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar8 = &this->field_0x10;
            }
            if ((*(uint *)(puVar8 + (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) *
                                    4) >> (uVar10 & 0x1f) & 1) != 0) goto LAB_148ecee23;
          }
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
LAB_148ecee23:
          lVar3 = *(longlong *)this;
          puVar8 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar8 = &this->field_0x38;
          }
          puVar9 = (uint *)(puVar8 + (longlong)*(int *)(lVar3 + lVar1 + 0x14) * 4);
          do {
            uVar2 = *puVar9;
            if (uVar2 == 0xffffffff) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                uVar7 = (*pcVar5)();
                return (bool)uVar7;
              }
            }
            else if (uVar2 == uVar10) {
              *puVar9 = *(uint *)(lVar3 + lVar1 + 0x10);
              TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar10,1);
              return true;
            }
            puVar9 = (uint *)(*(longlong *)this + (longlong)(int)uVar2 * 0x18 + 0x10);
          } while( true );
        }
        uVar10 = *(uint *)(lVar1 + 0x10 + lVar3);
      } while (uVar10 != 0xffffffff);
    }
  }
  return false;
}

// TMap<FName,NDISocketReaderLocal::FVMFunctionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,NDISocketReaderLocal::FVMFunctionInfo,0>_> @ 148f7e2c0

TMap<FName,NDISocketReaderLocal::FVMFunctionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,NDISocketReaderLocal::FVMFunctionInfo,0>_>
* __thiscall
TMap<FName,NDISocketReaderLocal::FVMFunctionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,NDISocketReaderLocal::FVMFunctionInfo,0>_>
::
TMap<FName,NDISocketReaderLocal::FVMFunctionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,NDISocketReaderLocal::FVMFunctionInfo,0>_>
          (TMap<FName,NDISocketReaderLocal::FVMFunctionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,NDISocketReaderLocal::FVMFunctionInfo,0>_>
           *this,initializer_list<TPairInitializer<FName_const_&,NDISocketReaderLocal::FVMFunctionInfo_const_&>_>
                 *param_1)

{
  TPairInitializer<FName_const_&,NDISocketReaderLocal::FVMFunctionInfo_const_&> *pTVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  TPairInitializer<FName_const_&,NDISocketReaderLocal::FVMFunctionInfo_const_&> *pTVar14;
  undefined8 local_78;
  FVMFunctionInfo *pFStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<FName,NDISocketReaderLocal::FVMFunctionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,NDISocketReaderLocal::FVMFunctionInfo,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  pTVar1 = param_1->_Last;
  uVar9 = 0;
  pTVar14 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  uVar11 = (uint)((longlong)pTVar1 - (longlong)pTVar14 >> 4);
  if (uVar11 == 0) goto joined_r0x000148f7e530;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar11);
  if (uVar11 < 4) {
    uVar11 = 1;
  }
  else {
    uVar7 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((*(int *)&this->field_0x48 != 0) && ((int)uVar11 <= *(int *)&this->field_0x48))
  goto joined_r0x000148f7e530;
  *(uint *)&this->field_0x48 = uVar11;
  if (*(longlong *)&this->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x40,0,0,4);
  }
  if (uVar11 != 0) {
    uVar5 = uVar11;
    if (uVar11 < 2) {
      if (*(longlong *)&this->field_0x40 != 0) {
        uVar5 = 0;
        goto LAB_148f7e39b;
      }
    }
    else {
LAB_148f7e39b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x40,0,uVar5,4);
    }
    if (0 < (int)uVar11) {
      uVar12 = (ulonglong)uVar11;
      uVar7 = uVar9;
      do {
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar4 = uVar7 & (longlong)(int)uVar11 - 1U;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(puVar6 + uVar4 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  if (*(int *)&this->field_0x48 != 0) {
    uVar11 = *(uint *)&this->field_0x28;
    pFStack_70 = (FVMFunctionInfo *)&this->field_0x10;
    local_78 = (FName *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar11 != 0) {
      puVar13 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar13 = (uint *)pFStack_70;
      }
      uVar5 = *puVar13;
      uVar7 = uVar9;
      while (uVar5 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uVar5 = iVar8 + 1;
        uVar9 = (ulonglong)local_78 >> 0x20;
        local_78 = (FName *)CONCAT44((int)uVar9,uVar5);
        uVar9 = (ulonglong)uVar5;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar5)
        goto LAB_148f7e48b;
        uVar5 = puVar13[(longlong)iVar8 + 1];
      }
      local_78 = (FName *)CONCAT44(-uVar5 & uVar5,SUB84(local_78,0));
      uVar9 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar11 < (int)uStack_64) {
LAB_148f7e48b:
        uVar9 = (ulonglong)uVar11;
        uStack_64 = uVar11;
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
    if ((int)uVar9 < (int)uVar11) {
      do {
        puVar10 = (undefined8 *)((longlong)(int)uVar9 * 0x30 + *(longlong *)local_58);
        uVar2 = *puVar10;
        uVar11 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
        uVar11 = *(int *)&this->field_0x48 - 1U & uVar11 + (int)((ulonglong)uVar2 >> 0x20);
        *(uint *)((longlong)puVar10 + 0x2c) = uVar11;
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar7 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar10 + 5) = *(undefined4 *)(puVar6 + uVar7 * 4);
        *(int *)(puVar6 + uVar7 * 4) = (int)uVar9;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar9 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x000148f7e530:
  for (; pTVar14 != pTVar1; pTVar14 = pTVar14 + 1) {
    local_78 = pTVar14->Key;
    pFStack_70 = pTVar14->Value;
    TSet<TTuple<FName,NDISocketReaderLocal::FVMFunctionInfo>,TDefaultMapHashableKeyFuncs<FName,NDISocketReaderLocal::FVMFunctionInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,NDISocketReaderLocal::FVMFunctionInfo_const_&>_>
              ((TSet<TTuple<FName,NDISocketReaderLocal::FVMFunctionInfo>,TDefaultMapHashableKeyFuncs<FName,NDISocketReaderLocal::FVMFunctionInfo,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FName_const_&,NDISocketReaderLocal::FVMFunctionInfo_const_&>
                        *)&stack0x00000008,(bool *)&local_78);
  }
  return this;
}

// TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_> @ 149211e50

TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
* __thiscall
TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
::
TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
          (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
           *this,initializer_list<TPairInitializer<FString_const_&,FStringFormatArg_const_&>_>
                 *param_1)

{
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> *pTVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong uVar8;
  wchar_t *pwVar9;
  TPairInitializer<FString_const_&,FStringFormatArg_const_&> *pTVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined8 local_78;
  FStringFormatArg *pFStack_70;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  ulonglong uVar7;
  
  pTVar1 = param_1->_Last;
  uVar7 = 0;
  pTVar10 = param_1->_First;
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  uVar11 = (uint)((longlong)pTVar1 - (longlong)pTVar10 >> 4);
  if (uVar11 == 0) goto joined_r0x0001492120d2;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar11);
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar11);
  if (uVar11 < 4) {
    uVar11 = 1;
  }
  else {
    uVar8 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((*(int *)&this->field_0x48 != 0) && ((int)uVar11 <= *(int *)&this->field_0x48))
  goto joined_r0x0001492120d2;
  *(uint *)&this->field_0x48 = uVar11;
  if (*(longlong *)&this->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&this->field_0x40,0,0,4);
  }
  if (uVar11 != 0) {
    uVar5 = uVar11;
    if (uVar11 < 2) {
      if (*(longlong *)&this->field_0x40 != 0) {
        uVar5 = 0;
        goto LAB_149211f2d;
      }
    }
    else {
LAB_149211f2d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x40,0,uVar5,4);
    }
    if (0 < (int)uVar11) {
      uVar13 = (ulonglong)uVar11;
      uVar8 = uVar7;
      do {
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar3 = uVar8 & (longlong)(int)uVar11 - 1U;
        uVar8 = uVar8 + 1;
        *(undefined4 *)(puVar6 + uVar3 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (*(int *)&this->field_0x48 != 0) {
    uVar11 = *(uint *)&this->field_0x28;
    pFStack_70 = (FStringFormatArg *)&this->field_0x10;
    local_78 = (FString *)0x100000000;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar11 != 0) {
      puVar14 = *(uint **)&this->field_0x20;
      if (*(uint **)&this->field_0x20 == (uint *)0x0) {
        puVar14 = (uint *)pFStack_70;
      }
      uVar5 = *puVar14;
      uVar8 = uVar7;
      while (uVar5 == 0) {
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        iVar4 = (int)uVar7;
        uVar5 = iVar4 + 1;
        uVar7 = (ulonglong)uVar5;
        uVar13 = (ulonglong)local_78 >> 0x20;
        local_78 = (FString *)CONCAT44((int)uVar13,uVar5);
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar5)
        goto LAB_149212019;
        uVar5 = puVar14[(longlong)iVar4 + 1];
      }
      local_78 = (FString *)CONCAT44(-uVar5 & uVar5,SUB84(local_78,0));
      uVar7 = (ulonglong)(-uVar5 & uVar5) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_64 = (int)lVar2 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar11 < (int)uStack_64) {
LAB_149212019:
        uVar7 = (ulonglong)uVar11;
        uStack_64 = uVar11;
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
    if ((int)uVar7 < (int)uVar11) {
      do {
        puVar12 = (undefined8 *)((longlong)(int)uVar7 * 0x38 + *(longlong *)local_58);
        iVar4 = *(int *)(puVar12 + 1) + -1;
        if (*(int *)(puVar12 + 1) == 0) {
          pwVar9 = L"";
          iVar4 = 0;
        }
        else {
          pwVar9 = (wchar_t *)*puVar12;
        }
        uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar9);
        uVar11 = *(int *)&this->field_0x48 - 1U & uVar11;
        *(uint *)((longlong)puVar12 + 0x34) = uVar11;
        puVar6 = &this->field_0x38;
        if (*(undefined1 **)&this->field_0x40 != (undefined1 *)0x0) {
          puVar6 = *(undefined1 **)&this->field_0x40;
        }
        uVar8 = (longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar11;
        *(undefined4 *)(puVar12 + 6) = *(undefined4 *)(puVar6 + uVar8 * 4);
        *(int *)(puVar6 + uVar8 * 4) = (int)uVar7;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar7 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
joined_r0x0001492120d2:
  for (; pTVar10 != pTVar1; pTVar10 = pTVar10 + 1) {
    local_78 = pTVar10->Key;
    pFStack_70 = pTVar10->Value;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FStringFormatArg_const_&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<FString_const_&,FStringFormatArg_const_&> *)
                       &stack0x00000008,(bool *)&local_78);
  }
  return this;
}

// TMap<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,0>_> @ 1492cf7e0

TMap<EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,0>_>
* __thiscall
TMap<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,0>_>
::
TMap<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,0>_>
          (void *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  *(undefined4 *)((longlong)this + 0x2c) = 0x80;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x48) = 0;
  return this;
}

// ~TMap<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,0>_> @ 1492d3660

void __thiscall
TMap<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,0>_>
::
~TMap<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool,0>_>
          (void *this)

{
  *(undefined4 *)((longlong)this + 0x48) = 0;
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EPixelFormat,FNiagaraEmptyUAVPool::FEmptyUAVPool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this);
  return;
}

// TMap<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>_> @ 149425690

TMap<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>_>
* __thiscall
TMap<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>_>
::
TMap<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>_>
          (TMap<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>_>
           *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// ~TMap<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>_> @ 14942b070

void __thiscall
TMap<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>_>
::
~TMap<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>_>
          (TMap<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,TSharedRef<FNiagaraSystemSimulation,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

