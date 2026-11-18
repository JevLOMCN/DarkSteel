// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 2

// operator<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_> @ 14ed0b170

TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_> *
__thiscall
TPairInitializer<TSharedRef<FUniqueNetId_const_,1>_&&,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_const_&>
::
operator<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>_TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<TSharedRef<FUniqueNetId_const_,1>_&&,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<TSharedRef<FUniqueNetId_const_,1>,TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TSharedRef<FUniqueNetId_const_,1> *pTVar3;
  TArray<FOnlineAchievement,TSizedDefaultAllocator<32>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FOnlineAchievement *pFVar6;
  
  pTVar3 = this->Key;
  pTVar4 = this->Value;
  *(FUniqueNetId **)__return_storage_ptr__ = pTVar3->Object;
  pTVar5 = (pTVar3->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar1 = &__return_storage_ptr__->field_0x10;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar4->ArrayNum;
  pFVar6 = (FOnlineAchievement *)(pTVar4->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x18 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x1c);
    ConstructItems<FOnlineAchievement,FOnlineAchievement,int>(*(void **)puVar1,pFVar6,iVar2);
  }
  return __return_storage_ptr__;
}

// operator<FString,FOnlineLeaderboardsNull::FLeaderboardNull>_TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull> @ 14ed0b220

TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull> * __thiscall
TPairInitializer<FString_const_&,FOnlineLeaderboardsNull::FLeaderboardNull_const_&>::
operator<FString,FOnlineLeaderboardsNull::FLeaderboardNull>_TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull>
          (TPairInitializer<FString_const_&,FOnlineLeaderboardsNull::FLeaderboardNull_const_&> *this
          ,TTuple<FString,FOnlineLeaderboardsNull::FLeaderboardNull> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FLeaderboardNull *pFVar3;
  FColumnMetaData *pFVar4;
  FOnlineStatsRow *pFVar5;
  
  pFVar3 = this->Value;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x10,(FString *)pFVar3);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x20,(FString *)&pFVar3->field_0x10);
  puVar1 = &__return_storage_ptr__->field_0x30;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&pFVar3->field_0x28;
  pFVar4 = *(FColumnMetaData **)&pFVar3->field_0x20;
  *(int *)&__return_storage_ptr__->field_0x38 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x3c);
    ConstructItems<FColumnMetaData,FColumnMetaData,int>(*(void **)puVar1,pFVar4,iVar2);
  }
  puVar1 = &__return_storage_ptr__->field_0x40;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)&pFVar3->field_0x38;
  pFVar5 = *(FOnlineStatsRow **)&pFVar3->field_0x30;
  *(int *)&__return_storage_ptr__->field_0x48 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x4c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x4c);
    ConstructItems<FOnlineStatsRow,FOnlineStatsRow,int>(*(void **)puVar1,pFVar5,iVar2);
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = *(undefined4 *)&pFVar3->field_0x40;
  return __return_storage_ptr__;
}

