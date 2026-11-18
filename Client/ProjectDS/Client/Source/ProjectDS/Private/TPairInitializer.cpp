// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// operator<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>_TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_> @ 14b8a6080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<int_&,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_&>::
operator<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>_TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<int_&,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_&> *this,
          TTuple<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__
          )

{
  undefined1 *puVar1;
  int iVar2;
  TArray<FChainGunInstance,TSizedDefaultAllocator<32>_> *pTVar3;
  FChainGunInstance *pFVar4;
  
  pTVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(int *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  pFVar4 = (FChainGunInstance *)(pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    ConstructItems<FChainGunInstance,FChainGunInstance,int>(*(void **)puVar1,pFVar4,iVar2);
  }
  return __return_storage_ptr__;
}

// operator<enum_EDS_ChattingTabType,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>_>_TTuple<enum_EDS_ChattingTabType,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>_> @ 14b9ca650

TTuple<EDS_ChattingTabType,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>_> *
__thiscall
TPairInitializer<enum_EDS_ChattingTabType_const_&,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>_&>
::
operator<enum_EDS_ChattingTabType,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>_>_TTuple<enum_EDS_ChattingTabType,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>_>
          (void *this,
          TTuple<EDS_ChattingTabType,TArray<TSharedPtr<FDS_ChatRoomData,1>,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  TSharedPtr<FDS_ChatRoomData,1> *pTVar4;
  
  puVar3 = *(undefined8 **)((longlong)this + 8);
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined1 *)__return_storage_ptr__ = **(undefined1 **)this;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)(puVar3 + 1);
  pTVar4 = (TSharedPtr<FDS_ChatRoomData,1> *)*puVar3;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    ConstructItems<TSharedPtr<FDS_ChatRoomData,1>,TSharedPtr<FDS_ChatRoomData,1>,int>
              (*(void **)puVar1,pTVar4,iVar2);
  }
  return __return_storage_ptr__;
}

// operator<enum_EDS_ChattingType,FDS_ChattingCommonData>_TTuple<enum_EDS_ChattingType,FDS_ChattingCommonData> @ 14b9ca6f0

TTuple<EDS_ChattingType,FDS_ChattingCommonData> * __thiscall
TPairInitializer<enum_EDS_ChattingType_&&,FDS_ChattingCommonData_&>::
operator<enum_EDS_ChattingType,FDS_ChattingCommonData>_TTuple<enum_EDS_ChattingType,FDS_ChattingCommonData>
          (void *this,TTuple<EDS_ChattingType,FDS_ChattingCommonData> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  FDS_StringBaseID *pFVar4;
  undefined8 uVar5;
  
  puVar3 = *(undefined1 **)((longlong)this + 8);
  puVar1 = &__return_storage_ptr__->field_0x30;
  *(undefined1 *)__return_storage_ptr__ = **(undefined1 **)this;
  __return_storage_ptr__->field_0x8 = *puVar3;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = *(undefined4 *)(puVar3 + 4);
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = *(undefined4 *)(puVar3 + 8);
  *(undefined ***)&__return_storage_ptr__->field_0x18 = &___7FDS_StringBaseID__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = *(undefined8 *)(puVar3 + 0x18);
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = *(undefined4 *)(puVar3 + 0x20);
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)(puVar3 + 0x30);
  pFVar4 = *(FDS_StringBaseID **)(puVar3 + 0x28);
  *(int *)&__return_storage_ptr__->field_0x38 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x3c);
    ConstructItems<FDS_StringBaseID,FDS_StringBaseID,int>(*(void **)puVar1,pFVar4,iVar2);
  }
  uVar5 = *(undefined8 *)(puVar3 + 0x40);
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = *(undefined8 *)(puVar3 + 0x38);
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = uVar5;
  return __return_storage_ptr__;
}

// operator<int,FDS_ContentsFunctionData>_TTuple<int,FDS_ContentsFunctionData> @ 14ba24a10

TTuple<int,FDS_ContentsFunctionData> * __thiscall
TPairInitializer<int_&,FDS_ContentsFunctionData_&>::
operator<int,FDS_ContentsFunctionData>_TTuple<int,FDS_ContentsFunctionData>
          (TPairInitializer<int_&,FDS_ContentsFunctionData_&> *this,
          TTuple<int,FDS_ContentsFunctionData> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FDS_ContentsFunctionData *pFVar3;
  FScriptContainerElement *_Src;
  
  pFVar3 = this->Value;
  *(int *)__return_storage_ptr__ = *this->Key;
  *(EDS_ContentsFunctionType *)&__return_storage_ptr__->field_0x8 = pFVar3->FunctionType;
  __return_storage_ptr__->field_0xc = pFVar3->FunctionLockType;
  *(ulong64 *)&__return_storage_ptr__->field_0x10 = pFVar3->FunctionLockMessageID;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x18,&pFVar3->ContentsName);
  puVar1 = &__return_storage_ptr__->field_0x28;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->FunctionLockValues).ArrayNum;
  _Src = (pFVar3->FunctionLockValues).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x30 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x34);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 2);
  }
  return __return_storage_ptr__;
}

// operator<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>_TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> @ 14ba24ad0

TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<FGameplayTag_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&>::
operator<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>_TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<FGameplayTag_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  uint uVar4;
  
  pTVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  uVar4 = (this->Key->TagName).Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->TagName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar4;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  _Src = (pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 2);
  }
  return __return_storage_ptr__;
}

// operator<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>_TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_> @ 14ba24b70

TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_> * __thiscall
TPairInitializer<FString_const_&,TObjectPtr<UDS_ChattingData>_&>::
operator<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>_TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>
          (TPairInitializer<FString_const_&,TObjectPtr<UDS_ChattingData>_&> *this,
          TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_> *__return_storage_ptr__)

{
  TObjectPtr<UDS_ChattingData>_u_0 *pTVar1;
  TObjectPtr<UDS_ChattingData>_u_0 TVar2;
  TObjectPtr<UDS_ChattingData>_u_0 local_res8;
  
  pTVar1 = &this->Value->field0_0x0;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  TVar2 = (TObjectPtr<UDS_ChattingData>_u_0)pTVar1->DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar2 != (UDS_ChattingData *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2 != (UDS_ChattingData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)TVar2);
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  local_res8 = TVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2 != (UDS_ChattingData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&__return_storage_ptr__->field_0x10,(FObjectPtr)&local_res8);
  return __return_storage_ptr__;
}

// operator<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>_TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_> @ 14ba24c10

TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_> * __thiscall
TPairInitializer<FString_&,TObjectPtr<UDS_MailData>_&>::
operator<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>_TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>
          (TPairInitializer<FString_&,TObjectPtr<UDS_MailData>_&> *this,
          TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_> *__return_storage_ptr__)

{
  TObjectPtr<UDS_MailData>_u_0 *pTVar1;
  TObjectPtr<UDS_MailData>_u_0 TVar2;
  TObjectPtr<UDS_MailData>_u_0 local_res8;
  
  pTVar1 = &this->Value->field0_0x0;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  TVar2 = (TObjectPtr<UDS_MailData>_u_0)pTVar1->DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar2 != (UDS_MailData *)0x0) {
      UE::GC::MarkAsReachable((UObject *)TVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2 != (UDS_MailData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2);
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  local_res8 = TVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2 != (UDS_MailData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&__return_storage_ptr__->field_0x10,(FObjectPtr)&local_res8);
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FDS_BreachDetailInfo>_TTuple<unsigned___int64,FDS_BreachDetailInfo> @ 14ba24cb0

TTuple<unsigned___int64,FDS_BreachDetailInfo> * __thiscall
TPairInitializer<unsigned___int64_&,FDS_BreachDetailInfo_&>::
operator<unsigned___int64,FDS_BreachDetailInfo>_TTuple<unsigned___int64,FDS_BreachDetailInfo>
          (TPairInitializer<unsigned___int64_&,FDS_BreachDetailInfo_&> *this,
          TTuple<unsigned___int64,FDS_BreachDetailInfo> *__return_storage_ptr__)

{
  FDS_BreachDetailInfo *pFVar1;
  
  pFVar1 = this->Value;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  *(ulong64 *)&__return_storage_ptr__->field_0x8 = pFVar1->StuffPortalEntityID;
  *(uint *)&__return_storage_ptr__->field_0x10 = pFVar1->RewardGrade;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x18,&pFVar1->FirstPlayerName);
  *(ulong64 *)&__return_storage_ptr__->field_0x28 = pFVar1->FinderEntityID;
  *(uint *)&__return_storage_ptr__->field_0x30 = pFVar1->CurrentTryCount;
  *(uint *)&__return_storage_ptr__->field_0x34 = pFVar1->MaxTryCount;
  *(double *)&__return_storage_ptr__->field_0x38 = pFVar1->LifeEndTime;
  *(int *)&__return_storage_ptr__->field_0x40 = pFVar1->BreachBaseID;
  __return_storage_ptr__->field_0x44 = pFVar1->NeedTicketType;
  *(int *)&__return_storage_ptr__->field_0x48 = pFVar1->NeedTicketValue;
  return __return_storage_ptr__;
}

// operator<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_> @ 14ba83560

TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<int_const_&,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_const_&>::
operator<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<int_const_&,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_const_&>
           *this,TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  
  pTVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(int *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  _Src = (pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 3);
  }
  return __return_storage_ptr__;
}

// operator<enum_EDS_EquipSlotType,TArray<enum_EDS_ItemType,TSizedDefaultAllocator<32>_>_>_TTuple<enum_EDS_EquipSlotType,TArray<enum_EDS_ItemType,TSizedDefaultAllocator<32>_>_> @ 14ba83600

TTuple<EDS_EquipSlotType,TArray<EDS_ItemType,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<enum_EDS_EquipSlotType_const_&,TArray<enum_EDS_ItemType,TSizedDefaultAllocator<32>_>_const_&>
::
operator<enum_EDS_EquipSlotType,TArray<enum_EDS_ItemType,TSizedDefaultAllocator<32>_>_>_TTuple<enum_EDS_EquipSlotType,TArray<enum_EDS_ItemType,TSizedDefaultAllocator<32>_>_>
          (void *this,
          TTuple<EDS_EquipSlotType,TArray<EDS_ItemType,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar3 = *(undefined8 **)((longlong)this + 8);
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined4 *)__return_storage_ptr__ = **(undefined4 **)this;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)(puVar3 + 1);
  _Src = (void *)*puVar3;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 2);
  }
  return __return_storage_ptr__;
}

// operator<enum_EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>_>_TTuple<enum_EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>_> @ 14badc0f0

TTuple<EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<enum_EDS_QuestType_&,TArray<int,TSizedDefaultAllocator<32>_>_&>::
operator<enum_EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>_>_TTuple<enum_EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>_>
          (void *this,
          TTuple<EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar3 = *(undefined8 **)((longlong)this + 8);
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined1 *)__return_storage_ptr__ = **(undefined1 **)this;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)(puVar3 + 1);
  _Src = (void *)*puVar3;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 2);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,FDS_ProjectileSkillInfo>_TTuple<unsigned___int64,FDS_ProjectileSkillInfo> @ 14badc190

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TTuple<unsigned___int64,FDS_ProjectileSkillInfo> * __thiscall
TPairInitializer<unsigned___int64_const_&,FDS_ProjectileSkillInfo_&>::
operator<unsigned___int64,FDS_ProjectileSkillInfo>_TTuple<unsigned___int64,FDS_ProjectileSkillInfo>
          (TPairInitializer<unsigned___int64_const_&,FDS_ProjectileSkillInfo_&> *this,
          TTuple<unsigned___int64,FDS_ProjectileSkillInfo> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  FDS_ProjectileSkillInfo *pFVar3;
  FWeakObjectPtr FVar4;
  FDS_ProjectileSkillAttackInfo *pFVar5;
  
  pFVar3 = this->Value;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  __return_storage_ptr__->field_0x8 = pFVar3->bIsFinish_SkillInfo;
  *(ulong64 *)&__return_storage_ptr__->field_0x10 = pFVar3->ShooterEntityID;
  *(FDS_EntityBase **)&__return_storage_ptr__->field_0x18 = pFVar3->ShooterEntity;
  FVar4 = (pFVar3->ShooterMovementCore).WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x20 = FVar4.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x24 = FVar4.ObjectSerialNumber;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x70 = 0;
  TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
               *)&__return_storage_ptr__->field_0x28,
              (TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
               *)&pFVar3->PendingSkillAttackInfoMap);
  puVar1 = &__return_storage_ptr__->field_0x78;
  *(undefined8 *)puVar1 = 0;
  iVar2 = (pFVar3->ActiveSkillAttackInfoList).ArrayNum;
  pFVar5 = (FDS_ProjectileSkillAttackInfo *)
           (pFVar3->ActiveSkillAttackInfoList).AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x80 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x84 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x84);
    ConstructItems<FDS_ProjectileSkillAttackInfo,FDS_ProjectileSkillAttackInfo,int>
              (*(void **)puVar1,pFVar5,iVar2);
  }
  return __return_storage_ptr__;
}

// operator<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>_TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_> @ 14bb406c0

TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<int_const_&,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_&>::
operator<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>_TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>
          (TPairInitializer<int_const_&,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_&>
           *this,TTuple<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *_Src;
  
  pTVar3 = this->Value;
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(int *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)puVar1 = 0;
  iVar2 = pTVar3->ArrayNum;
  _Src = (pTVar3->AllocatorInstance).Data;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 * 0x30);
  }
  return __return_storage_ptr__;
}

// operator<enum_EDS_SyncRecvType,TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>_>_TTuple<enum_EDS_SyncRecvType,TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>_> @ 14bb9aa80

TTuple<EDS_SyncRecvType,TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>_> * __thiscall
TPairInitializer<enum_EDS_SyncRecvType_&&,TObjectPtr<UDS_RecvProcessBase>_&>::
operator<enum_EDS_SyncRecvType,TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>_>_TTuple<enum_EDS_SyncRecvType,TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>_>
          (void *this,
          TTuple<EDS_SyncRecvType,TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>_>
          *__return_storage_ptr__)

{
  undefined8 *puVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  *(undefined4 *)__return_storage_ptr__ = **(undefined4 **)this;
  pUVar2 = (UObject *)*puVar1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x4 = 0;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&__return_storage_ptr__->field_0x4,(FObjectPtr)&local_res8);
  return __return_storage_ptr__;
}

// operator<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo>_TTuple<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo> @ 14bc21ed0

TTuple<EDS_EntityMaterialType,FDS_EntityMaterialInfo> * __thiscall
TPairInitializer<enum_EDS_EntityMaterialType_const_&,FDS_EntityMaterialInfo_&>::
operator<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo>_TTuple<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo>
          (void *this,TTuple<EDS_EntityMaterialType,FDS_EntityMaterialInfo> *__return_storage_ptr__)

{
  undefined4 *puVar1;
  longlong lVar2;
  UObject *pUVar3;
  
  puVar1 = *(undefined4 **)((longlong)this + 8);
  *(undefined4 *)__return_storage_ptr__ = **(undefined4 **)this;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = *puVar1;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&__return_storage_ptr__->field_0x10,(FSoftObjectPath *)(puVar1 + 2))
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = *(undefined8 *)(puVar1 + 10);
  lVar2 = *(longlong *)(puVar1 + 0xc);
  *(longlong *)&__return_storage_ptr__->field_0x38 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  pUVar3 = *(UObject **)(puVar1 + 0xe);
  *(UObject **)&__return_storage_ptr__->field_0x40 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  return __return_storage_ptr__;
}

// operator<enum_EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo>_TTuple<enum_EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo> @ 14bc21f50

TTuple<EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo> * __thiscall
TPairInitializer<enum_EWN_CS_CharacterSlotName_const_&,FDS_PartsDefaultMaterialInfo_&>::
operator<enum_EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo>_TTuple<enum_EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo>
          (void *this,
          TTuple<EWN_CS_CharacterSlotName,FDS_PartsDefaultMaterialInfo> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar3 = *(undefined8 **)((longlong)this + 8);
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined1 *)__return_storage_ptr__ = **(undefined1 **)this;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)(puVar3 + 1);
  _Src = (void *)*puVar3;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 3);
  }
  return __return_storage_ptr__;
}

// operator<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>_TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_> @ 14bc21ff0

TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_> * __thiscall
TPairInitializer<unsigned___int64_const_&,ADS_EntityActorBase_*_&&>::
operator<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>_TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>
          (TPairInitializer<unsigned___int64_const_&,ADS_EntityActorBase_*_&&> *this,
          TTuple<unsigned___int64,TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>_>
          *__return_storage_ptr__)

{
  ADS_EntityActorBase **ppAVar1;
  ADS_EntityActorBase *pAVar2;
  ADS_EntityActorBase *local_res8;
  
  ppAVar1 = this->Value;
  *(ulong64 *)__return_storage_ptr__ = *this->Key;
  pAVar2 = *ppAVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar2 != (ADS_EntityActorBase *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pAVar2);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  local_res8 = pAVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar2 != (ADS_EntityActorBase *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pAVar2);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&__return_storage_ptr__->field_0x8,(FObjectPtr)&local_res8);
  return __return_storage_ptr__;
}

// operator<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>_TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas> @ 14bcd07a0

TTuple<EDS_ButtonStateType,FDS_ButtonImageDatas> * __thiscall
TPairInitializer<enum_EDS_ButtonStateType_&&,FDS_ButtonImageDatas_&&>::
operator<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>_TTuple<enum_EDS_ButtonStateType,FDS_ButtonImageDatas>
          (void *this,TTuple<EDS_ButtonStateType,FDS_ButtonImageDatas> *__return_storage_ptr__)

{
  undefined8 *puVar1;
  UObject *pUVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)((longlong)this + 8);
  *(undefined4 *)__return_storage_ptr__ = **(undefined4 **)this;
  pUVar2 = (UObject *)*puVar1;
  *(UObject **)&__return_storage_ptr__->field_0x8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  uVar3 = puVar1[2];
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = puVar1[1];
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar3;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = *(undefined4 *)(puVar1 + 3);
  __return_storage_ptr__->field_0x24 = *(undefined1 *)((longlong)puVar1 + 0x1c);
  uVar3 = puVar1[5];
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = puVar1[4];
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = uVar3;
  __return_storage_ptr__->field_0x38 = *(undefined1 *)(puVar1 + 6);
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = *(undefined4 *)((longlong)puVar1 + 0x34);
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = *(undefined4 *)(puVar1 + 7);
  return __return_storage_ptr__;
}

// operator<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_> @ 14bd94a70

TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_> * __thiscall
TPairInitializer<FName_const_&,UObject_*_&>::
operator<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_>
          (TPairInitializer<FName_const_&,UObject_*_&> *this,
          TTuple<FName,TWeakObjectPtr<UObject,FWeakObjectPtr>_> *__return_storage_ptr__)

{
  UObject **ppUVar1;
  UObject *pUVar2;
  uint uVar3;
  UObject *local_res8;
  
  ppUVar1 = this->Value;
  uVar3 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  pUVar2 = *ppUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)&__return_storage_ptr__->field_0x8,(FObjectPtr)&local_res8);
  return __return_storage_ptr__;
}

// operator<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>_>_TTuple<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>_> @ 14be5bfd0

TTuple<EDS_KeyRemoveType,TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>_> * __thiscall
TPairInitializer<enum_EDS_KeyRemoveType_&&,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>_&>
::
operator<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>_>_TTuple<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>_>
          (void *this,
          TTuple<EDS_KeyRemoveType,TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar3 = *(undefined8 **)((longlong)this + 8);
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined1 *)__return_storage_ptr__ = **(undefined1 **)this;
  *(undefined8 *)puVar1 = 0;
  iVar2 = *(int *)(puVar3 + 1);
  _Src = (void *)*puVar3;
  *(int *)&__return_storage_ptr__->field_0x10 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)puVar1,iVar2,
               (int *)&__return_storage_ptr__->field_0x14);
    memcpy(*(void **)puVar1,_Src,(longlong)iVar2 << 2);
  }
  return __return_storage_ptr__;
}

