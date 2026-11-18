// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// operator() @ 14b9db110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FDS_V2TIMAdvancedMsgListener::OnRecvNewMessage'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  undefined1 auStackY_208 [32];
  FDS_ChatMessageInfo local_1d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar4->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14b9db165;
      }
      LOCK();
      aVar2 = pTVar4->SharedReferenceCount;
      bVar5 = aVar1 == aVar2;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar5);
    if (*(longlong *)this != 0) {
      this_00 = UDS_ChattingManager::GetInst();
      if (this_00 == (UDS_ChattingManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,
                     "FDS_V2TIMAdvancedMsgListener::OnRecvNewMessage::<lambda_1>::operator ()",0x47,
                     Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_138.Ptr,0x18,L"chattingManager == nullptr");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else if ((char)this_00->_padding_ != '\x01') {
        local_1d8.ConversationType = 0;
        local_1d8.SendTime = 0.0;
        local_1d8.MessageID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8.MessageID.Data.ArrayNum = 0;
        local_1d8.MessageID.Data.ArrayMax = 0;
        local_1d8.GroupID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8.GroupID.Data.ArrayNum = 0;
        local_1d8.GroupID.Data.ArrayMax = 0;
        local_1d8.SenderUserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8.SenderUserID.Data.ArrayNum = 0;
        local_1d8.SenderUserID.Data.ArrayMax = 0;
        local_1d8.SenderNickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8.SenderNickname.Data.ArrayNum = 0;
        local_1d8.SenderNickname.Data.ArrayMax = 0;
        local_1d8.SenderPlayerUID = 0;
        local_1d8.ReceiverUserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8.ReceiverUserID.Data.ArrayNum = 0;
        local_1d8.ReceiverUserID.Data.ArrayMax = 0;
        local_1d8.ReceiverPlayerUID = 0;
        local_1d8.MessageText.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8.MessageText.Data.ArrayNum = 0;
        local_1d8.MessageText.Data.ArrayMax = 0;
        local_1d8.MetaData.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1d8.MetaData.Data.ArrayNum = 0;
        local_1d8.MetaData.Data.ArrayMax = 0;
        local_1d8.Sequence = 0;
        local_1d8.IsRead = false;
        bVar5 = FDS_ChatMessageInfo::SetChatMessageInfo
                          (&local_1d8,(V2TIMMessage *)((longlong)this + 0x10));
        if (bVar5) {
          UDS_ChattingManager::SetDataByChatResponse(this_00,&local_1d8);
        }
        if (local_1d8.MetaData.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.MetaData.Data.AllocatorInstance.Data);
        }
        if (local_1d8.MessageText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.MessageText.Data.AllocatorInstance.Data);
        }
        if (local_1d8.ReceiverUserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_1d8.ReceiverUserID.Data.AllocatorInstance.Data);
        }
        if (local_1d8.SenderNickname.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_1d8.SenderNickname.Data.AllocatorInstance.Data);
        }
        if (local_1d8.SenderUserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.SenderUserID.Data.AllocatorInstance.Data);
        }
        if (local_1d8.GroupID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.GroupID.Data.AllocatorInstance.Data);
        }
        if (local_1d8.MessageID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.MessageID.Data.AllocatorInstance.Data);
        }
      }
    }
  }
LAB_14b9db165:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// OnRecvNewMessage @ 14ba03480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDS_V2TIMAdvancedMsgListener::OnRecvNewMessage
          (FDS_V2TIMAdvancedMsgListener *this,V2TIMMessage *param_1)

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
  undefined1 auStack_258 [32];
  code *local_238;
  TReferenceControllerBase<1> *local_230;
  V2TIMMessage local_228;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_258;
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
        goto LAB_14ba0350d;
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
LAB_14ba0350d:
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
  local_238 = pcVar4;
  local_230 = pTVar3;
  V2TIMMessage::V2TIMMessage(&local_228,param_1);
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x1e0,8);
  ppcVar7 = local_30 + 1;
  *local_30 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FDS_V2TIMAdvancedMsgListener::OnRecvNewMessage'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *ppcVar7 = local_238;
  local_30[2] = (code *)local_230;
  if (local_230 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_230->WeakReferenceCount = (atomic<int>)((int)local_230->WeakReferenceCount + 1);
    UNLOCK();
  }
  V2TIMMessage::V2TIMMessage((V2TIMMessage *)(local_30 + 3),&local_228);
  if (ppcVar7 != (code **)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDS_V2TIMAdvancedMsgListener::OnRecvNewMessage'::__l2::<lambda_1>,void>
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
  V2TIMMessage::~V2TIMMessage(&local_228);
  if (local_230 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &local_230->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(local_230->_padding_ + 8))(local_230,1);
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

