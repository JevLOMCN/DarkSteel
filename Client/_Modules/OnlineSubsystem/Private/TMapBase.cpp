// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 13

// Emplace<FName_const_&,FOnlineSessionSetting_const_&> @ 14eb291f0

FOnlineSessionSetting * __thiscall
TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
::Emplace<FName_const_&,FOnlineSessionSetting_const_&>
          (TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           *this,FName *param_1,FOnlineSessionSetting *param_2)

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
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar5 * 0x38 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    FVariantData::FVariantData((FVariantData *)((longlong)local_28.Pointer + 8),&param_2->Data);
    *(Type *)((longlong)local_28.Pointer + 0x28) = param_2->AdvertisementType;
    *(int *)((longlong)local_28.Pointer + 0x2c) = param_2->ID;
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar6 = uVar6 + (int)((ulonglong)uVar3 >> 0x20);
  bVar4 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FOnlineSessionSetting *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x38 + 8);
}

// Emplace<FName_const_&,FOnlineSessionSetting> @ 14eb29330

FOnlineSessionSetting * __thiscall
TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
::Emplace<FName_const_&,FOnlineSessionSetting>
          (TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
           *this,FName *param_1,FOnlineSessionSetting *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long64 lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x38 + 4 + lVar8);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar6);
  if (local_28.Pointer != (TSparseSetElement<TTuple<FName,FOnlineSessionSetting>_> *)0x0) {
    *(FName *)local_28.Pointer = *param_1;
    *(undefined1 *)((longlong)local_28.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_28.Pointer + 0x18) = 0;
    *(undefined4 *)((longlong)local_28.Pointer + 0x20) = 0;
    lVar4 = (param_2->Data).Value.AsInt64;
    *(undefined8 *)((longlong)local_28.Pointer + 8) = *(undefined8 *)&param_2->Data;
    *(long64 *)((longlong)local_28.Pointer + 0x10) = lVar4;
    uVar3 = *(undefined8 *)&(param_2->Data).CachedEstimatedMaxEscapedStringSize;
    *(undefined8 *)((longlong)local_28.Pointer + 0x18) =
         *(undefined8 *)((longlong)&(param_2->Data).Value + 8);
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = uVar3;
    (param_2->Data).Type = Empty;
    (param_2->Data).Value.AsInt64 = 0;
    *(undefined8 *)((longlong)&(param_2->Data).Value + 8) = 0;
    (param_2->Data).CachedEstimatedMaxEscapedStringSize = 0;
    *(Type *)((longlong)local_28.Pointer + 0x28) = param_2->AdvertisementType;
    *(int *)((longlong)local_28.Pointer + 0x2c) = param_2->ID;
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = 0xffffffff;
  }
  uVar3 = *(undefined8 *)local_28.Pointer;
  local_res8[0] = local_28.Index;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
  uVar7 = uVar7 + (int)((ulonglong)uVar3 >> 0x20);
  bVar5 = TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar7,local_28.Pointer,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar5) {
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar7,local_28.Pointer,local_res8[0]);
  }
  return (FOnlineSessionSetting *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 0x38 + 8);
}

// FindOrAddImpl<FString_const_&> @ 14eb2ad80

TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x10);
}

// FindOrAddImpl<FString> @ 14eb2ae00

TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMapBase<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>_>
::FindOrAddImpl<FString>
          (TMapBase<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x68 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
            *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x68 + 0x10);
}

// Find @ 14ebf8d30

IOnlineFactory ** __thiscall
TMapBase<FName,IOnlineFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>_>
::Find(TMapBase<FName,IOnlineFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  IOnlineFactory **ppIVar5;
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
          ppIVar5 = (IOnlineFactory **)0x0;
          if (lVar1 != 0) {
            ppIVar5 = (IOnlineFactory **)(lVar1 + 8);
          }
          return ppIVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (IOnlineFactory **)0x0;
}

// Find @ 14ebf8dd0

FOnlineSessionSetting * __thiscall
TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
::Find(TMapBase<FName,FOnlineSessionSetting,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FOnlineSessionSetting *pFVar2;
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
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FOnlineSessionSetting *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FOnlineSessionSetting *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[6].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FOnlineSessionSetting *)0x0;
}

// Find @ 14ebf8e70

TSharedPtr<IOnlineSubsystem,1> * __thiscall
TMapBase<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
::Find(TMapBase<FName,TSharedPtr<IOnlineSubsystem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<IOnlineSubsystem,1> *pTVar4;
  
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
          pTVar4 = (TSharedPtr<IOnlineSubsystem,1> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TSharedPtr<IOnlineSubsystem,1> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TSharedPtr<IOnlineSubsystem,1> *)0x0;
}

// Find @ 14ebf8f10

FOnlineSessionSearchParam * __thiscall
TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
::Find(TMapBase<FName,FOnlineSessionSearchParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSearchParam,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FOnlineSessionSearchParam *pFVar2;
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
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FOnlineSessionSearchParam *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FOnlineSessionSearchParam *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[6].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FOnlineSessionSearchParam *)0x0;
}

// Find @ 14ebf8fb0

TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_> *pTVar6;
  
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
  iVar3 = TSet<TTuple<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pTVar6 = (TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_> *)0x0;
    if (lVar1 != 0) {
      pTVar6 = (TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x10);
    }
    return pTVar6;
  }
  return (TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 14ebf9040

TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
* __thiscall
TMapBase<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>_>
::Find(TMapBase<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  
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
  iVar2 = TSet<TTuple<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x68 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
              *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
                *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TMap<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FOnlineNotificationBinding,TSizedDefaultAllocator<32>_>,0>_>
          *)0x0;
}

// Find @ 14ebf90d0

TSharedPtr<IOnlineNotificationTransport,1> * __thiscall
TMapBase<FString,TSharedPtr<IOnlineNotificationTransport,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>_>
::Find(TMapBase<FString,TSharedPtr<IOnlineNotificationTransport,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  TSharedPtr<IOnlineNotificationTransport,1> *pTVar6;
  
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
  iVar3 = TSet<TTuple<FString,TSharedPtr<IOnlineNotificationTransport,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<IOnlineNotificationTransport,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pTVar6 = (TSharedPtr<IOnlineNotificationTransport,1> *)0x0;
    if (lVar1 != 0) {
      pTVar6 = (TSharedPtr<IOnlineNotificationTransport,1> *)(lVar1 + 0x10);
    }
    return pTVar6;
  }
  return (TSharedPtr<IOnlineNotificationTransport,1> *)0x0;
}

// Find @ 14ebf9160

FName * __thiscall
TMapBase<FString,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FName,0>_>::Find
          (TMapBase<FString,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FName,0>_>
           *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FName *pFVar6;
  
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
  iVar2 = TSet<TTuple<FString,FName>,TDefaultMapHashableKeyFuncs<FString,FName,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FName *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FName *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FName *)0x0;
}

// Find @ 14ebf91f0

FVariantData * __thiscall
TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
::Find(TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FVariantData *pFVar6;
  
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
  iVar2 = TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x38 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FVariantData *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FVariantData *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FVariantData *)0x0;
}

