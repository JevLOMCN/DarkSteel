// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Analytics
// Functions: 8

// Emplace<FName_&,FGuid> @ 143132430

FGuid * __thiscall
TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>::
Emplace<FName_&,FGuid>
          (TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>
           *this,FName *param_1,FGuid *param_2)

{
  TPairInitializer<FName_&,FGuid_&&> local_res8 [2];
  FName *local_18;
  FGuid *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&,FGuid_&&>_>(&this->Pairs,local_res8,(bool *)&local_18);
  return (FGuid *)(*(longlong *)&(this->Pairs).Elements +
                  (longlong)(int)local_res8[0].Key * 0x20 + 8);
}

// Emplace<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>_> @ 143132480

TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
::Emplace<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>_>
          (TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
           *this,FGuid *param_1,
          TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  TPairInitializer<FGuid_&&,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>_&&>
  local_res8 [2];
  FGuid *local_18;
  TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FGuid_&&,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>_&&>_>
            (&this->Pairs,local_res8,(bool *)&local_18);
  return (TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)(int)local_res8[0].Key * 0x28 + 0x10);
}

// Find @ 143138ca0

TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
       *this,FGuid *param_1)

{
  longlong lVar1;
  int iVar2;
  ulong64 uVar3;
  TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar2 = TSet<TTuple<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar3,param_1);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    pTVar4 = (TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *)0x0;
    if (lVar1 != 0) {
      pTVar4 = (TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x10);
    }
    return pTVar4;
  }
  return (TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 143138d10

FGuid * __thiscall
TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>::Find
          (TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>
           *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FGuid *pFVar4;
  
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
          pFVar4 = (FGuid *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pFVar4 = (FGuid *)(pFVar2 + 1);
          }
          return pFVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FGuid *)0x0;
}

// Find @ 143138db0

uint * __thiscall
TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
::Find(TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  uint *puVar6;
  
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
  iVar2 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    puVar6 = (uint *)0x0;
    if (lVar4 != 0) {
      puVar6 = (uint *)(lVar4 + 0x10);
    }
    return puVar6;
  }
  return (uint *)0x0;
}

// FindChecked @ 143138e40

TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
              *this,FGuid *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  
  uVar5 = CityHash64((char *)param_1,0x10);
  iVar4 = TSet<TTuple<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>(&this->Pairs,(uint)uVar5,param_1);
  if ((iVar4 != -1) &&
     (lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar4 * 0x28, lVar1 != 0)) {
    return (TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x10);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar3) {
    return (TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
  }
  pcVar2 = (code *)swi(3);
  pTVar6 = (TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
  return pTVar6;
}

// Remove @ 14313b680

int __thiscall
TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
::Remove(TMapBase<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>_>
         *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    uVar2 = CityHash64((char *)param_1,0x10);
    iVar1 = TSet<TTuple<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<TWeakPtr<IAnalyticsSpan,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FGuid>(&this->Pairs,(uint)uVar2,param_1);
    return iVar1;
  }
  return 0;
}

// Remove @ 14313b6d0

int __thiscall
TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>::Remove
          (TMapBase<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_>
           *this,FName param_1)

{
  ForElementType<FSetElementId> *pFVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  longlong lVar9;
  uint *puVar10;
  undefined1 *puVar11;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 == *(int *)&(this->Pairs).Elements.field_0x34) {
    return 0;
  }
  uVar6 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  pFVar1 = &(this->Pairs).Hash;
  FVar8 = (this->Pairs).Hash.SecondaryData;
  if (FVar8 == (ForElementType<FSetElementId>)0x0) {
    FVar8 = (ForElementType<FSetElementId>)pFVar1;
  }
  uVar6 = *(uint *)((longlong)FVar8 +
                   ((longlong)(this->Pairs).HashSize - 1U & (longlong)(int)(uVar6 + param_1.Number))
                   * 4);
  if (uVar6 != 0xffffffff) {
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    do {
      lVar9 = (longlong)(int)uVar6 * 0x20;
      if (*(FName *)(lVar9 + lVar3) == param_1) {
        if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Pairs).Elements.field_0x28)) {
          puVar11 = *(undefined1 **)&(this->Pairs).Elements.field_0x20;
          if (puVar11 == (undefined1 *)0x0) {
            puVar11 = &(this->Pairs).Elements.field_0x10;
          }
          if ((*(uint *)(puVar11 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4)
               >> (uVar6 & 0x1f) & 1) != 0) goto LAB_14313b7c9;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
LAB_14313b7c9:
        FVar8 = (this->Pairs).Hash.SecondaryData;
        lVar9 = *(longlong *)&(this->Pairs).Elements + lVar9;
        if (FVar8 == (ForElementType<FSetElementId>)0x0) {
          FVar8 = (ForElementType<FSetElementId>)pFVar1;
        }
        puVar10 = (uint *)((longlong)FVar8 + (longlong)*(int *)(lVar9 + 0x1c) * 4);
        while( true ) {
          uVar2 = *puVar10;
          if ((uVar2 == 0xffffffff) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash"), bVar5)) break;
          if (uVar2 == uVar6) {
            *puVar10 = *(uint *)(lVar9 + 0x18);
            TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,uVar6,1);
            return 1;
          }
          puVar10 = (uint *)(*(longlong *)&(this->Pairs).Elements + 0x18 +
                            (longlong)(int)uVar2 * 0x20);
        }
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      uVar6 = *(uint *)(lVar9 + lVar3 + 0x18);
    } while (uVar6 != 0xffffffff);
  }
  return 0;
}

