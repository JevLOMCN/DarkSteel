// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// OnDestroy @ 14b8a5730

bool __thiscall FDS_PlayerRepo::OnDestroy(FDS_PlayerRepo *this)

{
  int *piVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->SearchedPlayerNameList).AllocatorInstance.Data,
             (this->SearchedPlayerNameList).ArrayNum);
  piVar1 = &(this->SearchedPlayerNameList).ArrayMax;
  (this->SearchedPlayerNameList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->SearchedPlayerNameList).AllocatorInstance,0,piVar1);
  }
  DestructItems<misc::Player,int>
            ((Player *)(this->PlayerList).AllocatorInstance.Data,(this->PlayerList).ArrayNum);
  piVar1 = &(this->PlayerList).ArrayMax;
  (this->PlayerList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,8,0,&(this->PlayerList).AllocatorInstance,0,piVar1);
  }
  return true;
}

// AddSearchedPlayerName @ 14b8b4f40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FDS_PlayerRepo::AddSearchedPlayerName(FDS_PlayerRepo *this,FString *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  UDS_PlayerEvent *pUVar4;
  
  if ((1 < (param_1->Data).ArrayNum) &&
     (bVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                        (&this->SearchedPlayerNameList,param_1), !bVar2)) {
    iVar3 = DS_CommonDataHelper::SearchStorage();
    if (iVar3 <= (this->SearchedPlayerNameList).ArrayNum) {
      TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAt(&this->SearchedPlayerNameList,0,Default)
      ;
    }
    iVar3 = (this->SearchedPlayerNameList).ArrayNum;
    piVar1 = &(this->SearchedPlayerNameList).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->SearchedPlayerNameList).AllocatorInstance,piVar1);
    }
    (this->SearchedPlayerNameList).ArrayNum = iVar3 + 1;
    ::FString::FString((FString *)
                       ((this->SearchedPlayerNameList).AllocatorInstance.Data +
                       (longlong)iVar3 * 0x10),param_1);
    pUVar4 = UDS_PlayerEvent::GetEvent();
    if (pUVar4 != (UDS_PlayerEvent *)0x0) {
      bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar4->OnUpdateSearchPlayerNames);
      if (bVar2) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar4->OnUpdateSearchPlayerNames).Delegate);
      }
    }
  }
  return;
}

// FindCharTableByName @ 14b8c2540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Player * __thiscall FDS_PlayerRepo::FindCharTableByName(FDS_PlayerRepo *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  size_t _Size;
  undefined8 uVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  size_t sVar7;
  undefined8 *_Buf1;
  undefined8 uVar8;
  ulonglong uVar9;
  wchar_t *_Str;
  PlayerDefaultTypeInternal *pPVar10;
  Player *pPVar11;
  uint uVar12;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  _Bxty local_100;
  size_t local_f0;
  ulonglong local_e8;
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_58.Data = (FScriptContainerElement *)0x0;
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_48 = 0;
      local_50 = (FScriptContainerElement *)0x0;
      goto LAB_14b8c2623;
    }
  }
  sVar7 = wcslen(_Str);
  local_48 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar7);
  uVar1 = local_48 + 1;
  uVar12 = uVar1;
  if (uVar1 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar12 = 0;
      goto LAB_14b8c25dc;
    }
  }
  else {
LAB_14b8c25dc:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,1);
  }
  local_50 = local_d8;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  UE::Core::Private::Convert((uchar *)local_50,uVar1,_Str,(int)sVar7 + 1);
LAB_14b8c2623:
  pFVar5 = local_50;
  local_f0 = 0;
  local_e8 = 0;
  local_100._Ptr = (char *)0x0;
  local_100._8_8_ = 0;
  sVar7 = strlen((char *)local_50);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_100,
             (char *)pFVar5,sVar7);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  uVar4 = local_e8;
  sVar7 = local_f0;
  uVar3 = local_100._Ptr;
  iVar2 = (this->PlayerList).ArrayNum;
  pPVar10 = (PlayerDefaultTypeInternal *)(this->PlayerList).AllocatorInstance.Data;
  pPVar11 = &pPVar10[iVar2]._instance;
  while( true ) {
    if ((this->PlayerList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<misc::Player_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_108);
    }
    if (&pPVar10->_instance == pPVar11) break;
    _Buf1 = (undefined8 *)
            ((ulonglong)(pPVar10->_instance)._impl_.nickname_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
    ;
    uVar8 = &local_100;
    if (0xf < uVar4) {
      uVar8 = uVar3;
    }
    _Size = _Buf1[2];
    if (0xf < (ulonglong)_Buf1[3]) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if ((_Size == sVar7) &&
       ((_Size == 0 || (iVar6 = memcmp(_Buf1,(void *)uVar8,_Size), iVar6 == 0))))
    goto LAB_14b8c26dc;
    pPVar10 = pPVar10 + 1;
  }
  pPVar10 = &misc::_Player_default_instance_;
LAB_14b8c26dc:
  if (0xf < uVar4) {
    uVar9 = uVar4 + 1;
    uVar8 = uVar3;
    if (0xfff < uVar9) {
      uVar8 = *(longlong *)(uVar3 + -8);
      uVar9 = uVar4 + 0x28;
      if ((char *)0x1f < (char *)(uVar3 + (-8 - uVar8))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)uVar8,uVar9);
  }
  return &pPVar10->_instance;
}

// FindCharTableByPlayerUID @ 14b8c2760

Player * __thiscall FDS_PlayerRepo::FindCharTableByPlayerUID(FDS_PlayerRepo *this,long64 param_1)

{
  int iVar1;
  Player *pPVar2;
  Player *pPVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PlayerList).ArrayNum;
  pPVar2 = (Player *)(this->PlayerList).AllocatorInstance.Data;
  pPVar3 = pPVar2 + iVar1;
  while( true ) {
    if ((this->PlayerList).ArrayNum != iVar1) {
      `TCheckedPointerIterator<misc::Player_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pPVar2 == pPVar3) break;
    if ((pPVar2->_impl_).player_uid_ == param_1) {
      return pPVar2;
    }
    pPVar2 = pPVar2 + 1;
  }
  return &misc::_Player_default_instance_._instance;
}

// OnResponsePlayerSearch @ 14b8d9ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FDS_PlayerRepo::OnResponsePlayerSearch(FDS_PlayerRepo *this,int param_1,FString *param_2)

{
  TArray<misc::Player,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  Player *pPVar3;
  RepeatedPtrField<misc::Player> *pRVar4;
  bool bVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  Impl_ *pIVar9;
  Player *this_00;
  longlong lVar10;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr local_1a8;
  PlayerList local_1a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar1 = &this->PlayerList;
  lVar10 = 0;
  piVar2 = &(this->PlayerList).ArrayMax;
  pPVar3 = (Player *)(pTVar1->AllocatorInstance).Data;
  iVar6 = (this->PlayerList).ArrayNum;
  if (*piVar2 < 0) {
    DestructItems<misc::Player,int>(pPVar3,iVar6);
    (this->PlayerList).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<misc::Player,int>(pPVar3,iVar6);
    (this->PlayerList).ArrayNum = 0;
  }
  if (param_1 == 200) {
    misc::PlayerList::PlayerList(&local_1a0,(Arena *)0x0);
    local_1a0._padding_ = (longlong)&___7PlayerList_misc__6B_;
    bVar5 = DS_JsonStringToProtoMessage<misc::PlayerList>(&local_1a0,param_2);
    if (bVar5) {
      if ((int)local_1a0._impl_.players_._8_4_ < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_1a0._impl_.players_._8_4_);
      }
      if (*piVar2 < (int)local_1a0._impl_.players_._8_4_) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,8,local_1a0._impl_.players_._8_4_,&pTVar1->AllocatorInstance,
                   (this->PlayerList).ArrayNum,piVar2);
      }
      UDS_PlayerData::GetMainPlayerData();
      bVar5 = FWeakObjectPtr::IsValid(&local_1a8);
      if (bVar5) {
        pUVar8 = FWeakObjectPtr::Get(&local_1a8);
        lVar10 = *(longlong *)&pUVar8[6].field_0x8;
      }
      if ((local_1a0._impl_.players_._0_8_ & 1) == 0) {
        pIVar9 = &local_1a0._impl_;
      }
      else {
        pIVar9 = (Impl_ *)(local_1a0._impl_.players_._0_8_ + 7);
      }
      pRVar4 = &pIVar9->players_;
      for (; pIVar9 != (Impl_ *)(&pRVar4->field_0x0 +
                                (longlong)(int)local_1a0._impl_.players_._8_4_ * 8);
          pIVar9 = (Impl_ *)&(pIVar9->players_).field_0x8) {
        pPVar3 = *(Player **)&pIVar9->players_;
        if ((pPVar3->_impl_).player_uid_ != lVar10) {
          iVar6 = (this->PlayerList).ArrayNum;
          if (iVar6 == *piVar2) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x890,&pTVar1->AllocatorInstance,piVar2);
          }
          (this->PlayerList).ArrayNum = iVar6 + 1;
          this_00 = (Player *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x90);
          misc::Player::Player(this_00,(Arena *)0x0,pPVar3);
          this_00->_padding_ = (longlong)&___7Player_misc__6B_;
        }
      }
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"FDS_PlayerRepo::OnResponsePlayerSearch",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_168.Ptr,0x52,L"DS_JsonStringToProtoMessage failed.\n%s");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    misc::PlayerList::~PlayerList(&local_1a0);
  }
  return;
}

// RemoveSearchedPlayerNameByIndex @ 14b8e32d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FDS_PlayerRepo::RemoveSearchedPlayerNameByIndex(FDS_PlayerRepo *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_PlayerEvent *pUVar3;
  
  iVar1 = *param_1;
  if ((-1 < iVar1) && (iVar1 < (this->SearchedPlayerNameList).ArrayNum)) {
    TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->SearchedPlayerNameList,iVar1,Default);
    pUVar3 = UDS_PlayerEvent::GetEvent();
    if (pUVar3 != (UDS_PlayerEvent *)0x0) {
      bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar3->OnUpdateSearchPlayerNames);
      if (bVar2) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar3->OnUpdateSearchPlayerNames).Delegate);
        return;
      }
    }
  }
  return;
}

// RequestSearchPlayersByName @ 14b8e4cb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FDS_PlayerRepo::RequestSearchPlayersByName
          (FString *param_1,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  int *piVar1;
  FDS_HttpRequest *pFVar2;
  bool bVar3;
  int iVar4;
  FDS_HttpServer *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FDS_PlayerRepo *pFVar8;
  UDS_PlayerEvent *pUVar9;
  FString local_48;
  TSharedRef<FDS_HttpRequest,1> local_38;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  MakeShared<FDS_HttpRequest,1>(&local_38);
  TDS_Singleton<FDS_AuthData>::GetInst();
  pFVar5 = TDS_Singleton<FDS_HttpServer>::GetInst();
  FDS_Urls::GetPlayersByName(&pFVar5->Urls);
  ::FString::PrintfImpl(&local_48,L"%s&region_index=%d&nickname=%s");
  pFVar2 = local_38.Object;
  iVar4 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange
            (&(local_38.Object)->URL,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
  pFVar2->Verb = GET;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->SuccessDel,
             (FWriteAccessScope *)&local_28);
  local_10 = &(pFVar2->SuccessDel).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *(undefined4 *)(puVar6 + 3) = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar6 + 1),param_2);
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[4] = uVar7;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar6[5] = SuccessSearchPlayer;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  pFVar5 = TDS_Singleton<FDS_HttpServer>::GetInst();
  local_28._0_8_ = local_38.Object;
  local_28.Accessor =
       (FMRSWRecursiveAccessDetector *)local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FDS_HttpServer::Request(pFVar5,(TSharedPtr<FDS_HttpRequest,1> *)&local_28);
  pFVar8 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  if ((1 < (param_1->Data).ArrayNum) &&
     (bVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                        (&pFVar8->SearchedPlayerNameList,param_1), !bVar3)) {
    iVar4 = DS_CommonDataHelper::SearchStorage();
    if (iVar4 <= (pFVar8->SearchedPlayerNameList).ArrayNum) {
      TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAt
                (&pFVar8->SearchedPlayerNameList,0,Default);
    }
    iVar4 = (pFVar8->SearchedPlayerNameList).ArrayNum;
    piVar1 = &(pFVar8->SearchedPlayerNameList).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(pFVar8->SearchedPlayerNameList).AllocatorInstance,piVar1);
    }
    (pFVar8->SearchedPlayerNameList).ArrayNum = iVar4 + 1;
    ::FString::FString((FString *)
                       ((pFVar8->SearchedPlayerNameList).AllocatorInstance.Data +
                       (longlong)iVar4 * 0x10),param_1);
    pUVar9 = UDS_PlayerEvent::GetEvent();
    if (pUVar9 != (UDS_PlayerEvent *)0x0) {
      bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar9->OnUpdateSearchPlayerNames);
      if (bVar3) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar9->OnUpdateSearchPlayerNames).Delegate);
      }
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// RequestSearchPlayersByPlayerUID @ 14b8e4ef0

void __cdecl
FDS_PlayerRepo::RequestSearchPlayersByPlayerUID
          (long64 param_1,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  TArray<__int64,TSizedDefaultAllocator<32>_> local_38;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_4_ = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_28,param_2);
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
  *(long64 *)local_38.AllocatorInstance.Data = param_1;
  RequestSearchPlayersByPlayerUIDs(&local_38,&local_28);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// RequestSearchPlayersByPlayerUIDs @ 14b8e4fc0

void __cdecl
FDS_PlayerRepo::RequestSearchPlayersByPlayerUIDs
          (TArray<__int64,TSizedDefaultAllocator<32>_> *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  uint uVar1;
  bool bVar2;
  FDS_HttpRequest *pFVar3;
  int iVar4;
  FString *pFVar5;
  FDS_HttpServer *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  undefined1 local_res8 [8];
  ForAnyElementType local_88;
  undefined8 local_80;
  FString local_78;
  FString local_68;
  TSharedRef<FDS_HttpRequest,1> local_58;
  FDS_HttpRequest *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  bool local_38;
  undefined1 *local_30;
  
  TDS_Singleton<FDS_HttpServer>::GetInst();
  MakeShared<FDS_HttpRequest,1>(&local_58);
  uVar1 = param_1->ArrayNum;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  if (-1 < (int)uVar1) {
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar1,&local_88,0,(int *)((longlong)&local_80 + 4));
    }
    pFVar10 = (param_1->AllocatorInstance).Data;
    iVar13 = param_1->ArrayNum;
    pFVar12 = pFVar10 + (longlong)iVar13 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar13) {
        `TCheckedPointerIterator<__int64_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar10 == pFVar12) break;
      pFVar5 = DS_Util::FromInt64((FString *)&local_48,*(long64 *)pFVar10);
      iVar4 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar4 + 1);
      pFVar9 = local_88.Data + (longlong)iVar4 * 0x10;
      *(undefined8 *)pFVar9 = 0;
      *(FScriptContainerElement **)pFVar9 = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + 8) = (pFVar5->Data).ArrayNum;
      *(int *)(pFVar9 + 0xc) = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
      if (local_48 != (FDS_HttpRequest *)0x0) {
        FMemory::Free(local_48);
      }
      pFVar10 = pFVar10 + 8;
    }
    iVar13 = (int)local_80;
    bVar2 = true;
    pFVar12 = local_88.Data + (longlong)(int)local_80 * 0x10;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    FVar11.Data = local_88.Data;
    while( true ) {
      if ((int)local_80 != iVar13) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar11.Data == pFVar12) break;
      if (bVar2) {
        bVar2 = false;
      }
      else {
        ::FString::AppendChars(&local_78,L",",1);
      }
      iVar4 = *(int *)(FVar11.Data + 8) + -1;
      if (*(int *)(FVar11.Data + 8) == 0) {
        iVar4 = 0;
      }
      ::FString::AppendChars(&local_78,*(wchar_t **)FVar11.Data,iVar4);
      FVar11.Data = FVar11.Data + 0x10;
    }
    TDS_Singleton<FDS_AuthData>::GetInst();
    pFVar6 = TDS_Singleton<FDS_HttpServer>::GetInst();
    FDS_Urls::GetPlayersByUids(&pFVar6->Urls);
    ::FString::PrintfImpl(&local_68,L"%s&region_index=%d&player_uids=%s");
    pFVar3 = local_58.Object;
    iVar13 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar13 = 0;
    }
    ::FString::AssignRange
              (&(local_58.Object)->URL,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar13);
    pFVar3->Verb = GET;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->SuccessDel,
               (FWriteAccessScope *)&local_48);
    local_30 = &(pFVar3->SuccessDel).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 3) = 0;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(puVar7 + 1),param_2);
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[4] = uVar8;
      *puVar7 = &
                ___7__TBaseStaticDelegateInstance___A6AXV__TSharedPtr_VIHttpResponse___00___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      puVar7[5] = SuccessSearchPlayer;
    }
    if (local_38 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)pTStack_40,(FDestructionSentinel *)&local_48);
    }
    pFVar6 = TDS_Singleton<FDS_HttpServer>::GetInst();
    local_48 = local_58.Object;
    pTStack_40 = local_58.SharedReferenceCount.ReferenceController;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FDS_HttpServer::Request(pFVar6,(TSharedPtr<FDS_HttpRequest,1> *)&local_48);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_88.Data,(int)local_80);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
    if (*(void **)&param_2->field_0x8 != (void *)0x0) {
      FMemory::Free(*(void **)&param_2->field_0x8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// SuccessSearchPlayer @ 14b8ed520

void __cdecl
FDS_PlayerRepo::SuccessSearchPlayer
          (TSharedPtr<IHttpResponse,1> *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDS_PlayerRepo *this;
  FString local_38;
  FReadAccessScope local_28;
  
  if (param_1->Object == (IHttpResponse *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (**(code **)((longlong)*param_1->Object + 0x58))();
  if (param_1->Object == (IHttpResponse *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)((longlong)*param_1->Object + 0x60))(param_1->Object,&local_38);
  this = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  OnResponsePlayerSearch(this,iVar5,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_28);
  if ((*(int *)&param_2->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  pvVar2 = *(void **)&param_2->field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

