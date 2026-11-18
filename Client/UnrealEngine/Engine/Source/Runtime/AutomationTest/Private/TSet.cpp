// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationTest
// Functions: 17

// Emplace<TPairInitializer<FString_&,FAutomationTestExcludelistEntry_&>_> @ 148bedf70

FSetElementId __thiscall
TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_&,FAutomationTestExcludelistEntry_&>_>
          (TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_&,FAutomationTestExcludelistEntry_&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  FAutomationTestExcludelistEntry *pFVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_> *_Src;
  char *in_R9;
  undefined8 *_Dst;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xf0,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0xf0 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0xf0 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  _Src = (TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_> *)0x0;
  if (local_38.Pointer != (TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_> *)0x0
     ) {
    pFVar3 = *(FAutomationTestExcludelistEntry **)(param_2 + 8);
    ::FString::FString(local_38.Pointer,*(FString **)param_2);
    FAutomationTestExcludelistEntry::FAutomationTestExcludelistEntry
              ((FAutomationTestExcludelistEntry *)((longlong)local_38.Pointer + 0x10),pFVar3);
    *(undefined4 *)((longlong)local_38.Pointer + 0xe8) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar6 = *(int *)&_Src->field_0x8 + -1;
  if (*(int *)&_Src->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)_Src;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar8 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,uVar5,(FString *)_Src);
    bVar8 = iVar6 != -1;
    if (bVar8) {
      _Dst = (undefined8 *)((longlong)iVar6 * 0xf0 + *(longlong *)&this->Elements);
      FAutomationTestExcludelistEntry::~FAutomationTestExcludelistEntry
                ((FAutomationTestExcludelistEntry *)(_Dst + 2));
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,_Src,0xe8);
      TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar5,_Src,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,UAutomationTestExcludelistConfig_*_&&>_> @ 148bee140

FSetElementId __thiscall
TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,UAutomationTestExcludelistConfig_*_&&>_>
          (TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,UAutomationTestExcludelistConfig_*_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  UObject *pUVar4;
  undefined8 uVar5;
  FNameEntryId FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FName *pFVar10;
  int iVar11;
  TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_> *pTVar12;
  bool *in_R9;
  FName local_res8;
  FSparseArrayAllocationInfo local_38;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  if (iVar11 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->Elements).field_0x30;
    iVar11 = iVar11 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar8 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar8);
  pTVar12 = (TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_> *)0x0;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_> *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    iVar8 = *(int *)(*(undefined8 **)param_2 + 1);
    iVar11 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar11 = 0;
    }
    pFVar10 = ::FName::FName(&local_res8,iVar11,(wchar_t *)**(undefined8 **)param_2,FNAME_Add);
    *(FName *)local_38.Pointer = *pFVar10;
    pUVar4 = (UObject *)*puVar3;
    *(UObject **)((longlong)local_38.Pointer + 8) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
    pTVar12 = local_38.Pointer;
  }
  uVar5 = *(undefined8 *)pTVar12;
  local_res8.ComparisonIndex.Value = local_38.Index;
  uVar9 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
  uVar9 = uVar9 + (int)((ulonglong)uVar5 >> 0x20);
  bVar7 = TryReplaceExisting(this,uVar9,pTVar12,(int *)&local_res8,in_R9);
  FVar6.Value = local_res8.ComparisonIndex.Value;
  if (bVar7) {
    *(uint *)&param_1->Key = local_res8.ComparisonIndex.Value;
  }
  else {
    RehashOrLink(this,uVar9,pTVar12,local_res8.ComparisonIndex.Value);
    *(uint *)&param_1->Key = FVar6.Value;
  }
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_&>_> @ 148bee2c0

FSetElementId __thiscall
TSet<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FString_const_&,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_&>_>
          (TSet<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int iVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  TSparseSetElement<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>_>
  *pTVar11;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  pTVar11 = (TSparseSetElement<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>_>
             *)0x0;
  iVar10 = 0;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    TPairInitializer<FString_const_&,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_&>
    ::
    operator<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>_TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>
              ((TPairInitializer<FString_const_&,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_&>
                *)param_2,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = 0xffffffff;
    pTVar11 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  if (*(int *)&pTVar11->field_0x8 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = *(wchar_t **)pTVar11;
    iVar10 = *(int *)&pTVar11->field_0x8 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar8);
  bVar3 = TryReplaceExisting(this,uVar5,pTVar11,local_res8,in_R9);
  if (!bVar3) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar12 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)&pTVar11->field_0x24 = uVar5;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)&pTVar11->field_0x20 = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
      *(int *)((longlong)FVar9 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,FAutomationTestExcludelistEntry_const_&>_> @ 148bee460

FSetElementId __thiscall
TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,FAutomationTestExcludelistEntry_const_&>_>
          (TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,FAutomationTestExcludelistEntry_const_&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  FAutomationTestExcludelistEntry *pFVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_> *_Src;
  char *in_R9;
  undefined8 *_Dst;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xf0,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0xf0 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0xf0 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  _Src = (TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_> *)0x0;
  if (local_38.Pointer != (TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_> *)0x0
     ) {
    pFVar3 = *(FAutomationTestExcludelistEntry **)(param_2 + 8);
    ::FString::FString(local_38.Pointer,*(FString **)param_2);
    FAutomationTestExcludelistEntry::FAutomationTestExcludelistEntry
              ((FAutomationTestExcludelistEntry *)((longlong)local_38.Pointer + 0x10),pFVar3);
    *(undefined4 *)((longlong)local_38.Pointer + 0xe8) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar6 = *(int *)&_Src->field_0x8 + -1;
  if (*(int *)&_Src->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)_Src;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar8 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,uVar5,(FString *)_Src);
    bVar8 = iVar6 != -1;
    if (bVar8) {
      _Dst = (undefined8 *)((longlong)iVar6 * 0xf0 + *(longlong *)&this->Elements);
      FAutomationTestExcludelistEntry::~FAutomationTestExcludelistEntry
                ((FAutomationTestExcludelistEntry *)(_Dst + 2));
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,_Src,0xe8);
      TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar5,_Src,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<FString> @ 148bee6e0

int __thiscall
TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
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
      lVar4 = (longlong)iVar1 * 0xf0;
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
      iVar1 = *(int *)(lVar4 + 0xe8 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 148bee7a0

int __thiscall
TSet<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      iVar4 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar2 * 0x28);
      lVar1 = (longlong)iVar2 * 0x28;
      iVar3 = (param_2->Data).ArrayNum;
      if (iVar4 == iVar3) {
        if (iVar4 < 2) {
          return iVar2;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar1),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar4 == 0;
      }
      else {
        bVar6 = iVar4 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x20 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// RemoveImpl<FString> @ 148bf14f0

int __thiscall
TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
::RemoveImpl<FString>
          (TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
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
  uint *puVar9;
  longlong lVar10;
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
    lVar10 = (longlong)(int)uVar7 * 0xf0;
    iVar1 = *(int *)(lVar3 + 8 + lVar10);
    if (iVar1 == iVar5) break;
    bVar11 = iVar1 + iVar5 == 1;
LAB_148bf1566:
    if (bVar11) goto LAB_148bf158f;
    uVar7 = *(uint *)(lVar3 + 0xe8 + lVar10);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if (1 < iVar1) {
    iVar5 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)(lVar3 + lVar10),
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar11 = iVar5 == 0;
    goto LAB_148bf1566;
  }
LAB_148bf158f:
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar8 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_148bf15ee;
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
LAB_148bf15ee:
  FVar6 = (this->Hash).SecondaryData;
  lVar3 = *(longlong *)&this->Elements;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar9 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar3 + 0xec + lVar10) * 4);
  while( true ) {
    uVar2 = *puVar9;
    if ((uVar2 == 0xffffffff) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar11)) break;
    if (uVar2 == uVar7) {
      *puVar9 = *(uint *)(lVar3 + 0xe8 + lVar10);
      TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<240,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar9 = (uint *)(*(longlong *)&this->Elements + 0xe8 + (longlong)(int)uVar2 * 0xf0);
  }
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}

// Intersect @ 148bf53a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> * __thiscall
TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Intersect
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar7;
  void *pvVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  byte bVar13;
  int iVar14;
  longlong lVar15;
  ForElementType<FSetElementId> FVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  undefined1 *this_00;
  ulonglong uVar23;
  uint *puVar24;
  uint *puVar25;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar26;
  undefined1 auStackY_f8 [32];
  uint local_c8;
  uint uStack_c4;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  int local_a8 [2];
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  FSparseArrayAllocationInfo local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar26 = param_1;
  if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 <
      *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    pTVar26 = this;
    this = param_1;
  }
  uVar19 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar21 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar21 == 0) goto LAB_148bf5637;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar21);
  if (uVar21 < 4) {
    uVar21 = 1;
  }
  else {
    uVar18 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar21 = 1 << ((byte)lVar15 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar21 <= __return_storage_ptr__->HashSize))
  goto LAB_148bf5637;
  __return_storage_ptr__->HashSize = uVar21;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar21 != 0) {
    uVar17 = uVar21;
    if (uVar21 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar17 = 0;
        goto LAB_148bf54a6;
      }
    }
    else {
LAB_148bf54a6:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar17,4);
    }
    if (0 < (int)uVar21) {
      uVar23 = (ulonglong)uVar21;
      uVar18 = uVar19;
      do {
        FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar16 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = FVar3;
        }
        uVar12 = uVar18 & (longlong)(int)uVar21 - 1U;
        uVar18 = uVar18 + 1;
        *(undefined4 *)((longlong)FVar16 + uVar12 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar21 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    TStack_68.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->Elements).field_0x10;
    uStack_c4 = 1;
    local_c8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    if (uVar21 != 0) {
      puVar25 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar25 == (uint *)0x0) {
        puVar25 = (uint *)TStack_68.Array;
      }
      uVar17 = *puVar25;
      uVar18 = uVar19;
      while (uVar17 == 0) {
        uStack_b0 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_b0;
        iVar14 = (int)uVar19;
        local_c8 = iVar14 + 1;
        uVar19 = (ulonglong)local_c8;
        if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_c8)
        goto LAB_148bf5599;
        uVar17 = puVar25[(longlong)iVar14 + 1];
      }
      uStack_c4 = -uVar17 & uVar17;
      uVar19 = (ulonglong)uStack_c4 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uStack_b4 = (int)lVar15 + -1 + uStack_b0;
      uVar19 = (ulonglong)uStack_b4;
      if ((int)uVar21 < (int)uStack_b4) {
LAB_148bf5599:
        uVar19 = (ulonglong)uVar21;
        uStack_b4 = uVar21;
      }
    }
    TStack_68._padding_._0_4_ = local_c8;
    TStack_68._padding_._4_4_ = uStack_c4;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    TStack_68.CurrentBitIndex = uStack_b4;
    TStack_68._28_4_ = uStack_ac;
    TStack_68.BaseBitIndex = uStack_b0;
    local_70 = __return_storage_ptr__;
    if ((int)uVar19 < (int)uVar21) {
      do {
        puVar20 = (undefined8 *)((longlong)(int)uVar19 * 0x10 + *(longlong *)&local_70->Elements);
        uVar4 = *puVar20;
        uVar21 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        uVar21 = __return_storage_ptr__->HashSize - 1U & uVar21 + (int)((ulonglong)uVar4 >> 0x20);
        *(uint *)((longlong)puVar20 + 0xc) = uVar21;
        FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar16 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = FVar3;
        }
        uVar18 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar21;
        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)((longlong)FVar16 + uVar18 * 4);
        *(int *)((longlong)FVar16 + uVar18 * 4) = (int)uVar19;
        TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
        uVar19 = (ulonglong)(uint)TStack_68.CurrentBitIndex;
      } while (TStack_68.CurrentBitIndex < (TStack_68.Array)->NumBits);
    }
  }
LAB_148bf5637:
  iVar14 = *(int *)&(this->Elements).field_0x28;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  TStack_98._padding_._0_4_ = 0;
  TStack_98._padding_._4_4_ = 1;
  TStack_98.BaseBitIndex = (int)TStack_98._padding_;
  TStack_98.CurrentBitIndex = 0;
  if (iVar14 != 0) {
    puVar25 = *(uint **)&(this->Elements).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)TStack_98.Array;
    }
    uVar21 = *puVar25;
    while (uVar21 == 0) {
      lVar15 = (longlong)(int)TStack_98._padding_;
      TStack_98.BaseBitIndex = TStack_98.BaseBitIndex + 0x20;
      TStack_98._padding_._0_4_ = (int)TStack_98._padding_ + 1;
      TStack_98.CurrentBitIndex = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)TStack_98._padding_)
      goto LAB_148bf56bb;
      uVar21 = puVar25[lVar15 + 1];
    }
    TStack_98._padding_._4_4_ = -uVar21 & uVar21;
    uVar19 = (ulonglong)TStack_98._padding_._4_4_ * 2 + 1;
    lVar15 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    TStack_98.CurrentBitIndex = TStack_98.BaseBitIndex + -1 + (int)lVar15;
    if (iVar14 < TStack_98.CurrentBitIndex) {
      TStack_98.CurrentBitIndex = iVar14;
    }
  }
LAB_148bf56bb:
  TStack_98.UnvisitedBitMask = 0xffffffff;
  TStack_98._28_4_ = uStack_ac;
  TStack_68.BaseBitIndex = TStack_98.BaseBitIndex;
  TStack_68._28_4_ = uStack_ac;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  local_a0 = this;
  local_70 = this;
  TStack_68.Array = TStack_98.Array;
  TStack_68._padding_._0_4_ = (int)TStack_98._padding_;
  TStack_68._padding_._4_4_ = TStack_98._padding_._4_4_;
  TStack_68.CurrentBitIndex = TStack_98.CurrentBitIndex;
  if (TStack_98.CurrentBitIndex < iVar14) {
    do {
      iVar14 = TStack_68.CurrentBitIndex;
      pTVar7 = local_70;
      lVar15 = *(longlong *)
                (*(longlong *)&local_70->Elements + (longlong)TStack_68.CurrentBitIndex * 0x10);
      uVar21 = ::GetTypeHash((FNameEntryId)(uint)lVar15);
      if (*(int *)&(pTVar26->Elements).field_0x8 != *(int *)&(pTVar26->Elements).field_0x34) {
        FVar3 = (pTVar26->Hash).SecondaryData;
        FVar16 = (ForElementType<FSetElementId>)&pTVar26->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = FVar3;
        }
        iVar11 = *(int *)((longlong)FVar16 +
                         (ulonglong)
                         (pTVar26->HashSize - 1U & (int)((ulonglong)lVar15 >> 0x20) + uVar21) * 4);
        if (iVar11 != -1) {
LAB_148bf5770:
          if (*(longlong *)(*(longlong *)&pTVar26->Elements + (longlong)iVar11 * 0x10) != lVar15)
          goto code_r0x000148bf577b;
          iVar11 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
          puVar1 = &(__return_storage_ptr__->Elements).field_0x8;
          lVar15 = *(longlong *)&pTVar7->Elements;
          if (iVar11 == 0) {
            iVar10 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,(int *)puVar1,
                                (int *)&(__return_storage_ptr__->Elements).field_0xc);
            this_00 = &(__return_storage_ptr__->Elements).field_0x10;
            iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                               ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
            puVar6 = *(undefined1 **)&(__return_storage_ptr__->Elements).field_0x20;
            if (puVar6 != (undefined1 *)0x0) {
              this_00 = puVar6;
            }
            bVar13 = (byte)iVar11 & 0x1f;
            if (iVar11 < 0) {
              iVar11 = iVar11 + 0x1f;
              bVar13 = bVar13 - 0x20;
            }
            *(uint *)(this_00 + (longlong)(iVar11 >> 5) * 4) =
                 *(uint *)(this_00 + (longlong)(iVar11 >> 5) * 4) & ~(1 << (bVar13 & 0x1f));
          }
          else {
            iVar10 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
            lVar5 = *(longlong *)&__return_storage_ptr__->Elements;
            iVar2 = *(int *)(lVar5 + 4 + (longlong)iVar10 * 0x10);
            iVar11 = iVar11 + -1;
            *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar2;
            *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar11;
            if (iVar11 != 0) {
              *(undefined4 *)(lVar5 + (longlong)iVar2 * 0x10) = 0xffffffff;
            }
          }
          TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)__return_storage_ptr__,&local_48,iVar10);
          pvVar8 = local_48.Pointer;
          if (local_48.Pointer != (TSparseSetElement<FName> *)0x0) {
            *(undefined8 *)local_48.Pointer = *(undefined8 *)(lVar15 + (longlong)iVar14 * 0x10);
            *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
          }
          uVar4 = *(undefined8 *)local_48.Pointer;
          local_a8[0] = local_48.Index;
          uVar21 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
          uVar21 = uVar21 + (int)((ulonglong)uVar4 >> 0x20);
          bVar9 = TryReplaceExisting(__return_storage_ptr__,uVar21,pvVar8,local_a8,(bool *)0x0);
          if (bVar9) goto LAB_148bf5ada;
          uVar22 = 1;
          uVar17 = *(int *)puVar1 - *(int *)&(__return_storage_ptr__->Elements).field_0x34;
          if (3 < uVar17) {
            uVar19 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uVar22 = 1 << ((byte)lVar15 & 0x1f);
          }
          if (((int)uVar17 < 1) || ((int)uVar22 <= __return_storage_ptr__->HashSize)) {
            uVar21 = __return_storage_ptr__->HashSize - 1U & uVar21;
            *(uint *)((longlong)pvVar8 + 0xc) = uVar21;
            FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
            FVar16 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
            if (FVar3 != (ForElementType<FSetElementId>)0x0) {
              FVar16 = FVar3;
            }
            uVar19 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar21;
            *(undefined4 *)((longlong)pvVar8 + 8) = *(undefined4 *)((longlong)FVar16 + uVar19 * 4);
            *(int *)((longlong)FVar16 + uVar19 * 4) = local_a8[0];
          }
          else {
            __return_storage_ptr__->HashSize = uVar22;
            if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
            }
            if (uVar22 != 0) {
              uVar21 = uVar22;
              if (uVar22 < 2) {
                if ((__return_storage_ptr__->Hash).SecondaryData !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar21 = 0;
                  goto LAB_148bf5901;
                }
              }
              else {
LAB_148bf5901:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,
                           uVar21,4);
              }
              if (0 < (int)uVar22) {
                uVar18 = (ulonglong)uVar22;
                uVar19 = 0;
                do {
                  FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
                  FVar16 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                    FVar16 = FVar3;
                  }
                  uVar23 = uVar19 & (longlong)(int)uVar22 - 1U;
                  uVar19 = uVar19 + 1;
                  *(undefined4 *)((longlong)FVar16 + uVar23 * 4) = 0xffffffff;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
            }
            if (__return_storage_ptr__->HashSize == 0) goto LAB_148bf5ada;
            iVar14 = *(int *)&(__return_storage_ptr__->Elements).field_0x28;
            TStack_98.Array =
                 (TBitArray<FDefaultBitArrayAllocator> *)
                 &(__return_storage_ptr__->Elements).field_0x10;
            uStack_c4 = 1;
            local_c8 = 0;
            uStack_b4 = 0;
            uStack_b0 = 0;
            local_a0 = __return_storage_ptr__;
            if (iVar14 == 0) {
LAB_148bf5a08:
              TStack_98._padding_._0_4_ = local_c8;
              TStack_98._padding_._4_4_ = uStack_c4;
              TStack_98.CurrentBitIndex = uStack_b4;
              TStack_98.BaseBitIndex = uStack_b0;
              TStack_98.UnvisitedBitMask = 0xffffffff;
              uVar21 = 0xffffffff;
              if ((int)uStack_b4 < iVar14) {
                do {
                  TStack_98.UnvisitedBitMask = uVar21;
                  iVar14 = TStack_98.CurrentBitIndex;
                  puVar20 = (undefined8 *)
                            ((longlong)TStack_98.CurrentBitIndex * 0x10 +
                            *(longlong *)&local_a0->Elements);
                  uVar4 = *puVar20;
                  uVar21 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
                  uVar21 = __return_storage_ptr__->HashSize - 1U &
                           uVar21 + (int)((ulonglong)uVar4 >> 0x20);
                  *(uint *)((longlong)puVar20 + 0xc) = uVar21;
                  FVar3 = (__return_storage_ptr__->Hash).SecondaryData;
                  FVar16 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
                  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                    FVar16 = FVar3;
                  }
                  uVar19 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar21;
                  *(undefined4 *)(puVar20 + 1) = *(undefined4 *)((longlong)FVar16 + uVar19 * 4);
                  *(int *)((longlong)FVar16 + uVar19 * 4) = iVar14;
                  TStack_98.UnvisitedBitMask =
                       TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
                  uVar21 = TStack_98.UnvisitedBitMask;
                } while (TStack_98.CurrentBitIndex < (TStack_98.Array)->NumBits);
              }
            }
            else {
              puVar25 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
              puVar24 = (uint *)TStack_98.Array;
              if (puVar25 != (uint *)0x0) {
                puVar24 = puVar25;
              }
              uVar21 = *puVar24;
              uStack_b0 = 0;
              local_c8 = 0;
              while (uVar21 == 0) {
                uStack_b0 = uStack_b0 + 0x20;
                lVar15 = (longlong)(int)local_c8;
                local_c8 = local_c8 + 1;
                if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_c8)
                goto LAB_148bf59eb;
                uVar21 = puVar24[lVar15 + 1];
              }
              uStack_c4 = -uVar21 & uVar21;
              uVar19 = (ulonglong)uStack_c4 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              uStack_b4 = uStack_b0 + -1 + (int)lVar15;
              if ((int)uStack_b4 <= iVar14) goto LAB_148bf5a08;
LAB_148bf59eb:
              TStack_98._padding_._0_4_ = local_c8;
              TStack_98._padding_._4_4_ = uStack_c4;
              TStack_98.UnvisitedBitMask = 0xffffffff;
              TStack_98.BaseBitIndex = uStack_b0;
              TStack_98.CurrentBitIndex = iVar14;
            }
          }
        }
      }
LAB_148bf5ada:
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    } while (TStack_68.CurrentBitIndex < (TStack_68.Array)->NumBits);
  }
  return __return_storage_ptr__;
code_r0x000148bf577b:
  iVar11 = *(int *)(*(longlong *)&pTVar26->Elements + 8 + (longlong)iVar11 * 0x10);
  if (iVar11 == -1) goto LAB_148bf5ada;
  goto LAB_148bf5770;
}

// Rehash @ 148bf6b90

void __thiscall
TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
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
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_40.Array;
      }
      uVar5 = *puVar9;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_148bf6c67;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_148bf6c67:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        uVar3 = *(undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar6 + 0x14) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 148bf6d40

void __thiscall
TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
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
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_148bf6e17;
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
LAB_148bf6e17:
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
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0xf0);
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
        *(uint *)((longlong)puVar10 + 0xec) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 0x1d) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 148bf6f00

void __thiscall
TSet<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  ForElementType<FSetElementId> FVar11;
  uint *puVar12;
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
    iVar7 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar7 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar6 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar6 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar9 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_148bf6fd7;
        uVar6 = puVar12[lVar9 + 1];
      }
      uStack_64 = -uVar6 & uVar6;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_54 = (int)lVar9 + -1 + iStack_50;
      if (iVar7 < iStack_54) {
LAB_148bf6fd7:
        iStack_54 = iVar7;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar7) {
      do {
        iVar5 = local_40.CurrentBitIndex;
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x28);
        iVar3 = *(int *)(*(longlong *)&this->Elements + 8 +
                        (longlong)local_40.CurrentBitIndex * 0x28);
        iVar7 = iVar3 + -1;
        if (iVar3 == 0) {
          pwVar10 = L"";
          iVar7 = 0;
        }
        else {
          pwVar10 = (wchar_t *)*puVar2;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar10);
        uVar6 = *piVar1 - 1U & uVar6;
        *(uint *)((longlong)puVar2 + 0x24) = uVar6;
        FVar4 = (this->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar4;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
        *(int *)((longlong)FVar11 + uVar8 * 4) = iVar5;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 148bf70b0

void __thiscall
TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_>
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
  *(uint *)&param_2->field_0x14 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x10 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 148bf7140

void __thiscall
TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_> *param_2,
              int param_3)

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
  *(uint *)&param_2->field_0xec = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0xe8 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// TryReplaceExisting @ 148bf86a0

bool __thiscall
TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  int iVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  bool bVar15;
  
  bVar15 = false;
  iVar12 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar4 != 1) && (iVar12 != iVar4)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      lVar5 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar5 + (longlong)iVar12 * 0x18) == *(longlong *)param_2) {
          bVar15 = iVar12 != -1;
          if (bVar15) {
            memmove((void *)(lVar5 + (longlong)iVar12 * 0x18),param_2,0x10);
            iVar4 = *param_3;
            lVar5 = *(longlong *)&this->Elements;
            puVar1 = &(this->Elements).field_0x10;
            bVar7 = (byte)iVar4 & 0x1f;
            uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar3) & uVar14) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x18) = iVar4;
            }
            puVar2 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x18);
            uVar10 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar10;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar4;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            *(uint *)(puVar11 + lVar3) = *(uint *)(puVar11 + lVar3) & ~uVar14;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)(lVar5 + 0x10 + (longlong)iVar12 * 0x18);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 148bf88d0

bool __thiscall
TSet<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FString,TArray<UAutomationTestPlatformSettings_*,TSizedDefaultAllocator<32>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  undefined8 *_Dst;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  uint uVar14;
  bool bVar15;
  
  bVar15 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar11 = FindIndexByHash<FString>(this,param_1,(FString *)param_2);
    bVar15 = iVar11 != -1;
    if (bVar15) {
      _Dst = (undefined8 *)(*(longlong *)&this->Elements + (longlong)iVar11 * 0x28);
      pvVar5 = *(void **)(*(longlong *)&this->Elements + 0x10 + (longlong)iVar11 * 0x28);
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      pvVar5 = (void *)*_Dst;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      memmove(_Dst,param_2,0x20);
      iVar4 = *param_3;
      puVar1 = &(this->Elements).field_0x10;
      lVar6 = *(longlong *)&this->Elements;
      bVar8 = (byte)iVar4 & 0x1f;
      uVar14 = 1 << bVar8 | 1U >> 0x20 - bVar8;
      if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      if (((*(uint *)(puVar13 + lVar3) & uVar14) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)(lVar6 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x28) = iVar4;
      }
      puVar2 = (undefined4 *)(lVar6 + (longlong)iVar4 * 0x28);
      uVar12 = 0xffffffff;
      *puVar2 = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar12 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      puVar2[1] = uVar12;
      puVar13 = &(this->Elements).field_0x34;
      *(int *)puVar13 = *(int *)puVar13 + 1;
      *(int *)&(this->Elements).field_0x30 = iVar4;
      if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      *(uint *)(puVar13 + lVar3) = *(uint *)(puVar13 + lVar3) & ~uVar14;
      *param_3 = iVar11;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// UnhashElements @ 148bf8ad0

void __thiscall
TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UAutomationTestExcludelistConfig>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_148bf8bcb;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_148bf8bcb:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148bf8cc0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_148bf8cc0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UAutomationTestExcludelistConfig>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x14 + (longlong)local_60.CurrentBitIndex * 0x18) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 148bf8d60

void __thiscall
TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FString,FAutomationTestExcludelistEntry>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestExcludelistEntry,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_148bf8e5b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_148bf8e5b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148bf8f50;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_148bf8f50:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FAutomationTestExcludelistEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0xf0 + 0xec + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

