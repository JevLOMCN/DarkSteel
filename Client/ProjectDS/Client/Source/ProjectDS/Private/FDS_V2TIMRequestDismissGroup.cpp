// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// GetDebugString @ 14b9ef7b0

FString * __thiscall
FDS_V2TIMRequestDismissGroup::GetDebugString
          (FDS_V2TIMRequestDismissGroup *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"RequestDismissGroup");
  return __return_storage_ptr__;
}

// OnSuccessInternal @ 14ba05800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FDS_V2TIMRequestDismissGroup::OnSuccessInternal(FDS_V2TIMRequestDismissGroup *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar4;
  UDS_ChattingDataSet *this_01;
  UDS_ChatEvent *pUVar5;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  undefined1 local_138 [120];
  void *local_c0;
  undefined4 local_b8;
  UDS_ChattingManager *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_38 = this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)local_138,
                 "FDS_V2TIMRequestDismissGroup::OnSuccessInternal",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_30,0x567,L"chattingManager == nullptr");
      if (local_38 != (UDS_ChattingManager *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  else if ((char)this_00->_padding_ != '\x01') {
    UDS_ChattingManager::RemoveChatRoomDataByGroupID
              (this_00,(FDS_ChatRoomData *)local_138,&this->GroupID);
    if ((local_138[0] != None) &&
       ((FDS_ChatConversation *)local_138._8_8_ != (FDS_ChatConversation *)0x0)) {
      TDS_DataSetGetter<UDS_ChattingDataSet>::Get((ulong64)local_148);
      bVar3 = FWeakObjectPtr::IsValid(local_148);
      uVar1 = local_138._4_4_;
      if (bVar3) {
        this_01 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(local_148);
        UDS_ChattingDataSet::RemoveChattingData(this_01,(char)uVar1 + Group1);
      }
      pUVar5 = UDS_ChatEvent::GetEvent();
      if (pUVar5 != (UDS_ChatEvent *)0x0) {
        bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &pUVar5->OnUpdateChattingTabs);
        if (bVar3) {
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&(pUVar5->OnUpdateChattingTabs).Delegate);
        }
      }
      if (((this_00->ChatStateData).ChattingTabType == local_138[0]) &&
         ((this_00->ChatStateData).SubTabIndex == local_138._4_4_)) {
        UDS_ChattingManager::SetChattingTabType(this_00,Total,-1);
      }
      uVar2 = local_138._16_8_;
      if ((TReferenceControllerBase<1> *)local_138._16_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_138._16_8_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_138._16_8_ + 8) + 1);
        UNLOCK();
      }
      if ((FDS_ChatConversation *)local_138._8_8_ != (FDS_ChatConversation *)0x0) {
        UDS_ChattingManager::RequestDeleteConversation(this_00,(FString *)local_138._8_8_);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)uVar2);
    }
    local_b8 = 0;
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
    }
    TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_138 + 0x38));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_138._48_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_138._32_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_138._16_8_);
  }
  return;
}

// Request @ 14ba10220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FDS_V2TIMRequestDismissGroup::Request(FDS_V2TIMRequestDismissGroup *this)

{
  bool bVar1;
  V2TIMManager *pVVar2;
  UDS_LogManager *pUVar3;
  TStringConversion<TStringConvert<wchar_t,char8_t>,128> *pTVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  undefined1 auStackY_178 [32];
  V2TIMString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pVVar2 = V2TIMManager::GetInstance();
  if (pVVar2 == (V2TIMManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FDS_V2TIMRequestDismissGroup::Request",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x557,L"v2TIMMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    if ((this->GroupID).Data.ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(this->GroupID).Data.AllocatorInstance.Data;
    }
    pTVar4 = StringCast<char8_t,128,wchar_t>
                       ((TStringConversion<TStringConvert<wchar_t,char8_t>,128> *)&local_138,pwVar5)
    ;
    V2TIMString::V2TIMString(&local_148,(char *)pTVar4->Ptr);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    plVar6 = &this->_padding_;
    if (this == (FDS_V2TIMRequestDismissGroup *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    (**(code **)((longlong)*pVVar2 + 0xb0))(pVVar2,&local_148,plVar6);
    V2TIMString::~V2TIMString(&local_148);
    bVar1 = true;
  }
  return bVar1;
}

// SetGroupID @ 14ba1c900

void __thiscall
FDS_V2TIMRequestDismissGroup::SetGroupID(FDS_V2TIMRequestDismissGroup *this,FString *param_1)

{
  ::FString::operator=(&this->GroupID,param_1);
  return;
}

