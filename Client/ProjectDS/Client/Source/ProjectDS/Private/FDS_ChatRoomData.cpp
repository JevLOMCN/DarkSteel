// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// operator= @ 14b9d9da0

FDS_ChatRoomData * __thiscall
FDS_ChatRoomData::operator=(FDS_ChatRoomData *this,FDS_ChatRoomData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatConversation *pFVar2;
  FDS_ChatUserInfo *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->ChattingTabType = param_1->ChattingTabType;
  this->SubTabIndex = param_1->SubTabIndex;
  pTVar1 = (param_1->ChatConversation).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->ChatConversation).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->ChatConversation).SharedReferenceCount.ReferenceController;
  (this->ChatConversation).Object = pFVar2;
  (this->ChatConversation).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar1 = (param_1->Whisper).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->Whisper).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->Whisper).SharedReferenceCount.ReferenceController;
  (this->Whisper).Object = pFVar3;
  (this->Whisper).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar1 = (param_1->GroupOwner).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->GroupOwner).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->GroupOwner).SharedReferenceCount.ReferenceController;
  (this->GroupOwner).Object = pFVar3;
  (this->GroupOwner).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  if (&this->GroupMembers != &param_1->GroupMembers) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->GroupMembers).field_0x38,
               (int *)&(this->GroupMembers).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->GroupMembers).field_0x38,
               *(int *)&(param_1->GroupMembers).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->GroupMembers,
                (TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->GroupMembers);
  }
  this->GroupIconID = param_1->GroupIconID;
  this->bIsInviteGranted = param_1->bIsInviteGranted;
  return this;
}

// AddGroupMember @ 14b9df780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FDS_ChatRoomData::AddGroupMember(FDS_ChatRoomData *this,TSharedPtr<FDS_ChatUserInfo,1> *param_1)

{
  TMap<__int64,TSharedPtr<FDS_ChatUserInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>_>
  *this_00;
  int iVar1;
  longlong lVar2;
  FDS_ChatUserInfo *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 auStackY_1a8 [32];
  int local_168 [2];
  FSparseArrayAllocationInfo local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (param_1->Object == (FDS_ChatUserInfo *)0x0) {
LAB_14b9df914:
    bVar5 = false;
  }
  else {
    lVar2 = param_1->Object->PlayerUID;
    this_00 = &this->GroupMembers;
    if (*(int *)&(this->GroupMembers).field_0x8 != *(int *)&(this->GroupMembers).field_0x34) {
      puVar9 = *(undefined1 **)&(this->GroupMembers).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->GroupMembers).field_0x38;
      }
      iVar6 = *(int *)(puVar9 + ((ulonglong)(*(int *)&(this->GroupMembers).field_0x48 - 1) &
                                (lVar2 >> 0x20) * 0x17 + lVar2) * 4);
      if (iVar6 != -1) {
        do {
          if (*(longlong *)((longlong)iVar6 * 0x20 + *(longlong *)&this_00->field_0x0) == lVar2) {
            pUVar8 = UDS_LogManager::GetInst();
            if (pUVar8 != (UDS_LogManager *)0x0) {
              pUVar8 = UDS_LogManager::GetInst();
              TSharedPtr<FDS_ChatUserInfo,1>::operator->(param_1);
              TSharedPtr<FDS_ChatUserInfo,1>::operator->(param_1);
              local_148._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_148,"FDS_ChatRoomData::AddGroupMember",0x20,Yes);
              UDS_LogManager::PrintLog
                        (pUVar8,1,Warning,local_148.Ptr,0x1c4,
                         L"[Chat] ChatRoom member already exists. PlayerUID : %lld, Nickname : %s");
              if ((void *)local_148._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_148._padding_);
              }
            }
            goto LAB_14b9df914;
          }
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0);
        } while (iVar6 != -1);
      }
    }
    iVar6 = *(int *)&(this->GroupMembers).field_0x34;
    pFVar3 = param_1->Object;
    if (iVar6 == 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,1,(ForAnyElementType *)this_00,
                         (int *)&(this->GroupMembers).field_0x8,
                         (int *)&(this->GroupMembers).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->GroupMembers).field_0x10,false);
    }
    else {
      iVar7 = *(int *)&(this->GroupMembers).field_0x30;
      iVar1 = *(int *)((longlong)iVar7 * 0x20 + 4 + *(longlong *)&this_00->field_0x0);
      iVar6 = iVar6 + -1;
      *(int *)&(this->GroupMembers).field_0x30 = iVar1;
      *(int *)&(this->GroupMembers).field_0x34 = iVar6;
      if (iVar6 != 0) {
        *(undefined4 *)((longlong)iVar1 * 0x20 + *(longlong *)&this_00->field_0x0) = 0xffffffff;
      }
    }
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,&local_160,iVar7);
    if (local_160.Pointer !=
        (TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_> *)0x0) {
      *(long64 *)local_160.Pointer = pFVar3->PlayerUID;
      *(FDS_ChatUserInfo **)((longlong)local_160.Pointer + 8) = param_1->Object;
      pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)((longlong)local_160.Pointer + 0x10) = pTVar4;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(undefined4 *)((longlong)local_160.Pointer + 0x18) = 0xffffffff;
    }
    local_168[0] = local_160.Index;
    uVar10 = (int)((ulonglong)*(undefined8 *)local_160.Pointer >> 0x20) * 0x17 +
             (int)*(undefined8 *)local_160.Pointer;
    bVar5 = TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
            ::TryReplaceExisting
                      ((TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
                        *)this_00,uVar10,local_160.Pointer,local_168,(bool *)0x0);
    if (!bVar5) {
      TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
      ::RehashOrLink((TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
                      *)this_00,uVar10,local_160.Pointer,local_168[0]);
    }
    bVar5 = true;
  }
  return bVar5;
}

// ClearData @ 14b9e3240

void __thiscall FDS_ChatRoomData::ClearData(FDS_ChatRoomData *this)

{
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_38 = 0;
  FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ChatConversation != (TSharedPtr<FDS_ChatConversation,1> *)&local_38) {
    (this->ChatConversation).Object = (FDS_ChatConversation *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ChatConversation).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Whisper != (TSharedPtr<FDS_ChatUserInfo,1> *)&local_28) {
    (this->Whisper).Object = (FDS_ChatUserInfo *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Whisper).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->GroupOwner != (TSharedPtr<FDS_ChatUserInfo,1> *)&local_18) {
    (this->GroupOwner).Object = (FDS_ChatUserInfo *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GroupOwner).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
           *)&this->GroupMembers);
  this->GroupIconID = 0;
  this->bIsInviteGranted = false;
  return;
}

// GetGroupMember @ 14b9f01f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ChatUserInfo,1> * __thiscall
FDS_ChatRoomData::GetGroupMember
          (FDS_ChatRoomData *this,TSharedPtr<FDS_ChatUserInfo,1> *__return_storage_ptr__,
          long64 param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  TSharedPtr<FDS_ChatUserInfo,1> *pTVar5;
  undefined1 *puVar6;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*(int *)&(this->GroupMembers).field_0x8 != *(int *)&(this->GroupMembers).field_0x34) {
    puVar6 = *(undefined1 **)&(this->GroupMembers).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->GroupMembers).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->GroupMembers).field_0x48 - 1U &
                              (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->GroupMembers;
      do {
        if (*(longlong *)((longlong)iVar3 * 0x20 + lVar1) == param_1) {
          pTVar5 = TMapBase<__int64,TSharedPtr<FDS_ChatUserInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>_>
                   ::FindChecked((TMapBase<__int64,TSharedPtr<FDS_ChatUserInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>_>
                                  *)&this->GroupMembers,param_1);
          __return_storage_ptr__->Object = pTVar5->Object;
          pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
          if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
            return __return_storage_ptr__;
          }
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
          return __return_storage_ptr__;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + lVar1);
      } while (iVar3 != -1);
    }
  }
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 != (UDS_LogManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"FDS_ChatRoomData::GetGroupMember",0x20,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Warning,local_148.Ptr,0x1e0,L"Not exist in GroupMembers. PlayerUID : %lld");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  __return_storage_ptr__->Object = (FDS_ChatUserInfo *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetShowName @ 14b9f12b0

FString * __thiscall
FDS_ChatRoomData::GetShowName(FDS_ChatRoomData *this,FString *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatConversation *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDS_ChatUserInfo *this_00;
  bool bVar4;
  
  pTVar1 = (this->ChatConversation).SharedReferenceCount.ReferenceController;
  pFVar2 = (this->ChatConversation).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 != (FDS_ChatConversation *)0x0) && (1 < (pFVar2->ConversationID).Data.ArrayNum)) {
    if (this->ChattingTabType == Whisper) {
      pTVar3 = (this->Whisper).SharedReferenceCount.ReferenceController;
      this_00 = (this->Whisper).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this_00 != (FDS_ChatUserInfo *)0x0) {
        bVar4 = FDS_ChatUserInfo::IsValidNickname(this_00);
        if (bVar4) {
          ::FString::FString(__return_storage_ptr__,&this_00->Nickname);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          goto LAB_14b9f1333;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    else if (this->ChattingTabType == Group) {
      ::FString::FString(__return_storage_ptr__,&pFVar2->ShowName);
      goto LAB_14b9f1333;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
LAB_14b9f1333:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// IsValidData @ 14b9fa450

bool __thiscall FDS_ChatRoomData::IsValidData(FDS_ChatRoomData *this)

{
  if (this->ChattingTabType != None) {
    return (this->ChatConversation).Object != (FDS_ChatConversation *)0x0;
  }
  return false;
}

// OnCreatedChatRoom @ 14b9fe680

void __thiscall
FDS_ChatRoomData::OnCreatedChatRoom(FDS_ChatRoomData *this,EDS_ChattingTabType param_1,int param_2)

{
  this->ChattingTabType = param_1;
  this->SubTabIndex = param_2;
  return;
}

// RemoveGroupMember @ 14ba0f960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ChatUserInfo,1> * __thiscall
FDS_ChatRoomData::RemoveGroupMember
          (FDS_ChatRoomData *this,TSharedPtr<FDS_ChatUserInfo,1> *__return_storage_ptr__,
          long64 param_1)

{
  TMap<__int64,TSharedPtr<FDS_ChatUserInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatUserInfo *pFVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  TSharedPtr<FDS_ChatUserInfo,1> *pTVar5;
  undefined1 *puVar6;
  atomic<int> *paVar7;
  uint uVar8;
  undefined1 auStackY_1b8 [32];
  long64 local_178 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = &this->GroupMembers;
  uVar8 = (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1;
  if (*(int *)&(this->GroupMembers).field_0x8 != *(int *)&(this->GroupMembers).field_0x34) {
    puVar6 = *(undefined1 **)&(this->GroupMembers).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->GroupMembers).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->GroupMembers).field_0x48 - 1U & uVar8) * 4
                    );
    if (iVar3 != -1) {
      do {
        if (*(longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&this_00->field_0x0) == param_1) {
          pTVar5 = TMapBase<__int64,TSharedPtr<FDS_ChatUserInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>_>
                   ::FindChecked((TMapBase<__int64,TSharedPtr<FDS_ChatUserInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>_>
                                  *)this_00,param_1);
          pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
          pFVar2 = pTVar5->Object;
          if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
            paVar7 = (atomic<int> *)&DAT_00000008;
          }
          else {
            paVar7 = &pTVar1->SharedReferenceCount;
            LOCK();
            *paVar7 = (atomic<int>)((int)*paVar7 + 1);
            UNLOCK();
          }
          local_178[0] = param_1;
          if (*(int *)&(this->GroupMembers).field_0x8 != *(int *)&(this->GroupMembers).field_0x34) {
            TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<__int64>
                      ((TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
                        *)this_00,uVar8,local_178);
          }
          __return_storage_ptr__->Object = pFVar2;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar7 = (atomic<int>)((int)*paVar7 + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          return __return_storage_ptr__;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0);
      } while (iVar3 != -1);
    }
  }
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 != (UDS_LogManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"FDS_ChatRoomData::RemoveGroupMember",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Warning,local_168.Ptr,0x1d1,L"Not exist in GroupMembers. PlayerUID : %lld");
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
  __return_storage_ptr__->Object = (FDS_ChatUserInfo *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// SetGroupOwner @ 14ba1ca40

bool __thiscall
FDS_ChatRoomData::SetGroupOwner(FDS_ChatRoomData *this,TSharedPtr<FDS_ChatUserInfo,1> *param_1)

{
  FDS_ChatUserInfo *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined1 *puVar9;
  
  pFVar1 = param_1->Object;
  if (pFVar1 == (FDS_ChatUserInfo *)0x0) {
    return false;
  }
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->GroupOwner).SharedReferenceCount.ReferenceController;
  (this->GroupOwner).Object = pFVar1;
  (this->GroupOwner).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (((this->GroupOwner).Object == (FDS_ChatUserInfo *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  lVar3 = ((this->GroupOwner).Object)->PlayerUID;
  if (*(int *)&(this->GroupMembers).field_0x8 != *(int *)&(this->GroupMembers).field_0x34) {
    puVar9 = *(undefined1 **)&(this->GroupMembers).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->GroupMembers).field_0x38;
    }
    iVar8 = *(int *)(puVar9 + ((ulonglong)(*(int *)&(this->GroupMembers).field_0x48 - 1) &
                              (lVar3 >> 0x20) * 0x17 + lVar3) * 4);
    if (iVar8 != -1) {
      do {
        if (*(longlong *)((longlong)iVar8 * 0x20 + *(longlong *)&this->GroupMembers) == lVar3) {
          return true;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + *(longlong *)&this->GroupMembers);
      } while (iVar8 != -1);
    }
  }
  AddGroupMember(this,param_1);
  return true;
}

