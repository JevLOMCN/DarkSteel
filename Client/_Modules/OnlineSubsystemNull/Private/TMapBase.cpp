// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 9

// FindOrAddImpl<FUniqueNetIdNull_const_&> @ 14ed0d200

TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FUniqueNetIdNull_const_&>
          (TMapBase<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FUniqueNetIdNull *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FUniqueNetIdNull *local_res20;
  
  iVar1 = TSet<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniqueNetIdNull>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x48, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FUniqueNetIdNull_const_&>_>
              (&this->Pairs,(uint)local_res8,
               (TKeyInitializer<FUniqueNetIdNull_const_&> *)(ulonglong)param_1,(bool *)&local_res20)
    ;
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x48;
  }
  return (TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x30);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14ed0d280

void __thiscall
TMapBase<FString,TSharedRef<FOnlineStoreOffer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,TSharedRef<FOnlineStoreOffer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>_>
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
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ed0d360;
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
LAB_14ed0d360:
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

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14ed0d4e0

void __thiscall
TMapBase<FString,TSharedRef<FOnlineStoreOffer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,TSharedRef<FOnlineStoreOffer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>_>
           *this,TArray<TSharedRef<FOnlineStoreOffer,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
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
  DestructItems<TSharedRef<FOnlineStoreOffer,1>,int>
            ((TSharedRef<FOnlineStoreOffer,1> *)(param_1->AllocatorInstance).Data,param_1->ArrayNum)
  ;
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
      lVar8 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ed0d5c0;
      uVar5 = puVar13[lVar8 + 1];
    }
    uVar10 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14ed0d5c0:
  TStack_40._padding_ = CONCAT44(uVar10,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar4) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 5 + 2) * 8);
      pFVar9 = (param_1->AllocatorInstance).Data;
      if (((pFVar9 <= pFVar2) && (pFVar2 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
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
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      pFVar9 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar9 = *(undefined8 *)pFVar2;
      lVar8 = *(longlong *)(pFVar2 + 8);
      *(longlong *)(pFVar9 + 8) = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 14ed231f0

TSharedPtr<FUniqueNetId_const_,1> * __thiscall
TMapBase<int,TSharedPtr<FUniqueNetId_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUniqueNetId_const_,1>,0>_>
::Find(TMapBase<int,TSharedPtr<FUniqueNetId_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUniqueNetId_const_,1>,0>_>
       *this,int param_1)

{
  int iVar1;
  int *piVar2;
  TSharedPtr<FUniqueNetId_const_,1> *pTVar3;
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
          pTVar3 = (TSharedPtr<FUniqueNetId_const_,1> *)0x0;
          if (piVar2 != (int *)0x0) {
            pTVar3 = (TSharedPtr<FUniqueNetId_const_,1> *)(piVar2 + 2);
          }
          return pTVar3;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<FUniqueNetId_const_,1> *)0x0;
}

// Find @ 14ed23250

TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>
::Find(TMapBase<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_>
       *this,TSharedRef<FUniqueNetId_const_,1> *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FUniqueNetId_const_,1> local_18;
  
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  uVar2 = (**(code **)(*(longlong *)local_18.Object + 0x40))();
  iVar3 = TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,TUniqueNetIdMapKeyFuncs<TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedRef<FUniqueNetId_const_,1>_>(&this->Pairs,uVar2,&local_18);
  if (iVar3 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_> *)0x0;
}

// Find @ 14ed23300

TSharedRef<FUserOnlineAccountNull,1> * __thiscall
TMapBase<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>_>
::Find(TMapBase<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>_>
       *this,TSharedRef<FUniqueNetId_const_,1> *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FUniqueNetId_const_,1> local_18;
  
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  uVar2 = (**(code **)(*(longlong *)local_18.Object + 0x40))();
  iVar3 = TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedRef<FUniqueNetId_const_,1>_>(&this->Pairs,uVar2,&local_18);
  if (iVar3 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TSharedRef<FUserOnlineAccountNull,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedRef<FUserOnlineAccountNull,1> *)0x0;
}

// Find @ 14ed233b0

FLeaderboardNull * __thiscall
TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
::Find(TMapBase<FString,FOnlineLeaderboardsNull::FLeaderboardNull,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FLeaderboardNull *pFVar6;
  
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
  iVar2 = TSet<TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>,TDefaultMapHashableKeyFuncs<FString,FOnlineLeaderboardsNull::FLeaderboardNull,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x60 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FLeaderboardNull *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FLeaderboardNull *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FLeaderboardNull *)0x0;
}

// Find @ 14ed23440

TSharedRef<FOnlineStoreOffer,1> * __thiscall
TMapBase<FString,TSharedRef<FOnlineStoreOffer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>_>
::Find(TMapBase<FString,TSharedRef<FOnlineStoreOffer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  TSharedRef<FOnlineStoreOffer,1> *pTVar6;
  
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
  iVar3 = TSet<TTuple<FString,TSharedRef<FOnlineStoreOffer,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FOnlineStoreOffer,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pTVar6 = (TSharedRef<FOnlineStoreOffer,1> *)0x0;
    if (lVar1 != 0) {
      pTVar6 = (TSharedRef<FOnlineStoreOffer,1> *)(lVar1 + 0x10);
    }
    return pTVar6;
  }
  return (TSharedRef<FOnlineStoreOffer,1> *)0x0;
}

// Find @ 14ed234d0

TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>_>
       *this,FUniqueNetIdNull *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> *pTVar6;
  
  iVar3 = *(int *)&param_1->field_0x20;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = *(wchar_t **)&param_1->field_0x18;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar3 = TSet<TTuple<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdNull,TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniqueNetIdNull>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x48;
    pTVar6 = (TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> *)0x0;
    if (lVar1 != 0) {
      pTVar6 = (TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x30);
    }
    return pTVar6;
  }
  return (TArray<FPurchaseReceipt,TSizedDefaultAllocator<32>_> *)0x0;
}

