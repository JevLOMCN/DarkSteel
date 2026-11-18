// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// operator() @ 14b9da210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FDS_V2TIMConversationListener::OnConversationChanged'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar3;
  UDS_TencentCloudChatManager *this_01;
  __uint64 _Var4;
  V2TIMConversation *pVVar5;
  __uint64 _Var6;
  TReferenceControllerBase<1> *pTVar7;
  ulonglong uVar8;
  TXV2TIMConversationVector *this_02;
  bool bVar9;
  undefined1 auStackY_1e8 [32];
  uint uVar10;
  wchar_t *pwVar11;
  FDS_ChatConversation local_1b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar7->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9da27a;
      }
      LOCK();
      aVar2 = pTVar7->SharedReferenceCount;
      bVar9 = aVar1 == aVar2;
      if (bVar9) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar9);
    if (*(longlong *)this != 0) {
      this_00 = UDS_ChattingManager::GetInst();
      if (this_00 == (UDS_ChattingManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b9da27a;
        pUVar3 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,
                   "FDS_V2TIMConversationListener::OnConversationChanged::<lambda_1>::operator ()",
                   0x4d,Yes);
        pwVar11 = L"chattingManager == nullptr";
        uVar10 = 0x3e;
      }
      else {
        if ((char)this_00->_padding_ == '\x01') goto LAB_14b9da27a;
        this_01 = UDS_TencentCloudChatManager::GetInst();
        if (this_01 != (UDS_TencentCloudChatManager *)0x0) {
          this_02 = (TXV2TIMConversationVector *)((longlong)this + 0x10);
          _Var6 = 0;
          _Var4 = TXV2TIMConversationVector::Size(this_02);
          uVar8 = _Var6;
          if (_Var4 != 0) {
            do {
              pVVar5 = TXV2TIMConversationVector::operator[](this_02,_Var6);
              local_1b8.ConversationID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1b8.WhisperPlayerUID = 0;
              local_1b8.ShowName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1b8.ConversationID.Data.ArrayNum = 0;
              local_1b8.ConversationID.Data.ArrayMax = 0;
              local_1b8.GroupID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1b8.GroupID.Data.ArrayNum = 0;
              local_1b8.GroupID.Data.ArrayMax = 0;
              local_1b8.WhisperUserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1b8.WhisperUserID.Data.ArrayNum = 0;
              local_1b8.WhisperUserID.Data.ArrayMax = 0;
              local_1b8.ShowName.Data.ArrayNum = 0;
              local_1b8.ShowName.Data.ArrayMax = 0;
              local_1b8.OrderKey = 0;
              local_1b8.UnreadCount = 0;
              local_1b8.bIsBookmark = false;
              FDS_ChatConversation::SetChatConversation(&local_1b8,pVVar5);
              UDS_ChattingManager::OnRecvConversation(this_00,&local_1b8);
              if (0 < local_1b8.WhisperPlayerUID) {
                UDS_TencentCloudChatManager::Request_UserInfoList
                          (this_01,local_1b8.WhisperPlayerUID);
              }
              if (local_1b8.ShowName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
              {
                FMemory::Free(local_1b8.ShowName.Data.AllocatorInstance.Data);
              }
              if (local_1b8.WhisperUserID.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.WhisperUserID.Data.AllocatorInstance.Data);
              }
              if (local_1b8.GroupID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.GroupID.Data.AllocatorInstance.Data);
              }
              if (local_1b8.ConversationID.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b8.ConversationID.Data.AllocatorInstance.Data);
              }
              uVar10 = (int)uVar8 + 1;
              _Var6 = (__uint64)(int)uVar10;
              _Var4 = TXV2TIMConversationVector::Size(this_02);
              uVar8 = (ulonglong)uVar10;
            } while (_Var6 < _Var4);
          }
          goto LAB_14b9da27a;
        }
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b9da27a;
        pUVar3 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,
                   "FDS_V2TIMConversationListener::OnConversationChanged::<lambda_1>::operator ()",
                   0x4d,Yes);
        pwVar11 = L"tencentChatManager == nullptr";
        uVar10 = 0x4a;
      }
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,uVar10,pwVar11);
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
LAB_14b9da27a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// OnConversationChanged @ 14b9fe4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDS_V2TIMConversationListener::OnConversationChanged
          (FDS_V2TIMConversationListener *this,TXV2TIMConversationVector *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  code *pcVar6;
  code **ppcVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  code *local_78;
  TReferenceControllerBase<1> *local_70;
  TXV2TIMConversationVector local_68;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pcVar4 = *(code **)&this->field_0x8;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
    aVar2 = pTVar3->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14b9fe52c;
      }
      LOCK();
      aVar5 = pTVar3->SharedReferenceCount;
      bVar9 = aVar2 == aVar5;
      if (bVar9) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar9);
  }
  pcVar8 = pcVar4;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pcVar8 = (code *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pcVar6 = pcVar8 + 8;
  if (pcVar8 == (code *)0x0) {
    pcVar6 = (code *)0x0;
  }
  if (pcVar6 != (code *)&this->field_0x8) {
LAB_14b9fe52c:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result.Pin().Get() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x6c3,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_78 = pcVar4;
  local_70 = pTVar3;
  TXV2TIMConversationVector::TXV2TIMConversationVector(&local_68,param_1);
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x28,8);
  ppcVar7 = local_30 + 1;
  *local_30 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FDS_V2TIMConversationListener::OnConversationChanged'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *ppcVar7 = local_78;
  local_30[2] = (code *)local_70;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->WeakReferenceCount = (atomic<int>)((int)local_70->WeakReferenceCount + 1);
    UNLOCK();
  }
  TXV2TIMConversationVector::TXV2TIMConversationVector
            ((TXV2TIMConversationVector *)(local_30 + 3),&local_68);
  if (ppcVar7 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDS_V2TIMConversationListener::OnConversationChanged'::__l2::<lambda_1>,void>
                  ::Call;
  }
  DS_Util::RunOnGameThread((TFunction<void___cdecl(void)> *)local_58);
  if (local_58[0] != (code *)0x0) {
    ppcVar7 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar7 = local_30;
    }
    (**(code **)(*ppcVar7 + 0x10))();
  }
  TXV2TIMConversationVector::~TXV2TIMConversationVector(&local_68);
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_70->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_70->_padding_ + 8))(local_70,1);
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return;
}

// OnNewConversation @ 14ba01d60

void __thiscall
FDS_V2TIMConversationListener::OnNewConversation
          (FDS_V2TIMConversationListener *this,TXV2TIMConversationVector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014ba01d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x28))();
  return;
}

