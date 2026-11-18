// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationUtils
// Functions: 4

// Emplace<TPairInitializer<FString_const_&,FAutomationUtilsGameplayAutomationScreenshotInstance_*_&&>_> @ 14e7ebef0

FSetElementId __thiscall
TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FString_const_&,FAutomationUtilsGameplayAutomationScreenshotInstance_*_&&>_>
          (TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,FAutomationUtilsGameplayAutomationScreenshotInstance_*_&&>
                 *param_1,bool *param_2)

{
  undefined1 *this_00;
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  FString *_Src;
  undefined1 *puVar12;
  char *in_R9;
  undefined8 *puVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    this_00 = &(this->Elements).field_0x10;
    iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
    puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
    uVar5 = iVar6 >> 0x1f & 0x1f;
    iVar6 = iVar6 + uVar5;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = this_00;
    }
    *(uint *)(puVar12 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar12 + (longlong)(iVar6 >> 5) * 4) &
         ~(1 << (((byte)iVar6 & 0x1f) - (char)uVar5 & 0x1f));
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar6 = iVar6 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  _Src = (FString *)0x0;
  iVar6 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    puVar13 = *(undefined8 **)(param_2 + 8);
    ::FString::FString(local_48.Pointer,*(FString **)param_2);
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)*puVar13;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayNum = -1;
    _Src = local_48.Pointer;
  }
  iVar4 = (_Src->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(_Src->Data).AllocatorInstance.Data;
    iVar6 = iVar4 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar9);
  bVar14 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,uVar5,_Src);
    bVar14 = iVar6 != -1;
    if (bVar14) {
      puVar13 = (undefined8 *)((longlong)iVar6 * 0x20 + *(longlong *)&this->Elements);
      pvVar3 = (void *)*puVar13;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      memmove(puVar13,_Src,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      _Src[1].Data.ArrayMax = uVar5;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      _Src[1].Data.ArrayNum = *(int *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<FString> @ 14e7ec130

int __thiscall
TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      iVar3 = (param_2->Data).ArrayNum;
      lVar4 = (longlong)iVar1 * 0x20;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + lVar4);
      if (iVar2 == iVar3) {
        if (iVar2 < 2) {
          return iVar1;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar4),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar2 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar4 + 0x18 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// RemoveImpl<FString> @ 14e7ec340

int __thiscall
TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
::RemoveImpl<FString>
          (TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint *puVar10;
  bool bVar11;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar3 = *(longlong *)&this->Elements;
    iVar5 = (param_2->Data).ArrayNum;
    lVar9 = (longlong)(int)uVar7 * 0x20;
    iVar1 = *(int *)(lVar3 + 8 + lVar9);
    if (iVar1 == iVar5) break;
    bVar11 = iVar1 + iVar5 == 1;
LAB_14e7ec3b3:
    if (bVar11) goto LAB_14e7ec3d9;
    uVar7 = *(uint *)(lVar3 + 0x18 + lVar9);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if (1 < iVar1) {
    iVar5 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)(lVar3 + lVar9),
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar11 = iVar5 == 0;
    goto LAB_14e7ec3b3;
  }
LAB_14e7ec3d9:
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar8 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14e7ec438;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Elements.IsValidIndex(ElementIndex)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                      ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar11) {
    pcVar4 = (code *)swi(3);
    iVar5 = (*pcVar4)();
    return iVar5;
  }
LAB_14e7ec438:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 0x1c) * 4);
  while( true ) {
    uVar2 = *puVar10;
    if ((uVar2 == 0xffffffff) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar11)) break;
    if (uVar2 == uVar7) {
      *puVar10 = *(uint *)(lVar9 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar2 * 0x20);
  }
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}

// Rehash @ 14e7ef990

void __thiscall
TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationUtilsGameplayAutomationScreenshotInstance_*,0>,FDefaultSetAllocator>
         *this)

{
  ForElementType<FSetElementId> *this_00;
  int *piVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  this_00 = &this->Hash;
  uVar5 = this->HashSize;
  uVar13 = (ulonglong)uVar5;
  piVar1 = &this->HashSize;
  if ((this->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  if ((uVar5 != 0) &&
     (TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
      ResizeAllocation(this_00,0,uVar5,4), 0 < (int)uVar5)) {
    uVar10 = uVar9;
    do {
      FVar3 = (this->Hash).SecondaryData;
      FVar8 = (ForElementType<FSetElementId>)this_00;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = FVar3;
      }
      uVar6 = uVar10 & (longlong)(int)uVar5 - 1U;
      uVar10 = uVar10 + 1;
      *(undefined4 *)((longlong)FVar8 + uVar6 * 4) = 0xffffffff;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (*piVar1 != 0) {
    uVar5 = *(uint *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    if (uVar5 != 0) {
      puVar14 = *(uint **)&(this->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)local_40.Array;
      }
      uVar2 = *puVar14;
      uVar13 = uVar9;
      while (uVar2 == 0) {
        uStack_50 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_50;
        iVar7 = (int)uVar9;
        local_68 = iVar7 + 1;
        uVar9 = (ulonglong)local_68;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
        goto LAB_14e7efad7;
        uVar2 = puVar14[(longlong)iVar7 + 1];
      }
      uStack_64 = -uVar2 & uVar2;
      uVar13 = (ulonglong)uStack_64 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_54 = (int)lVar4 + -1 + uStack_50;
      uVar9 = (ulonglong)uStack_54;
      if ((int)uVar5 < (int)uStack_54) {
LAB_14e7efad7:
        uVar9 = (ulonglong)uVar5;
        uStack_54 = uVar5;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = uStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = uStack_50;
    if ((int)uVar9 < (int)uVar5) {
      do {
        puVar12 = (undefined8 *)(*(longlong *)&this->Elements + (longlong)(int)uVar9 * 0x20);
        if (*(int *)(puVar12 + 1) == 0) {
          pwVar11 = L"";
          iVar7 = 0;
        }
        else {
          pwVar11 = (wchar_t *)*puVar12;
          iVar7 = *(int *)(puVar12 + 1) + -1;
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar11);
        uVar5 = *piVar1 - 1U & uVar5;
        *(uint *)((longlong)puVar12 + 0x1c) = uVar5;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)this_00;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar13 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar12 + 3) = *(undefined4 *)((longlong)FVar8 + uVar13 * 4);
        *(int *)((longlong)FVar8 + uVar13 * 4) = (int)uVar9;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
        uVar9 = (ulonglong)(uint)local_40.CurrentBitIndex;
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

