// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebSockets
// Functions: 25

// FLwsWebSocket @ 14b3f84f0

/* WARNING: Enum "Type": Some values do not have unique names */

FLwsWebSocket * __thiscall
FLwsWebSocket::FLwsWebSocket
          (FLwsWebSocket *this,FPrivateToken param_1,FString *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,FString *param_4,ulong64 param_5)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FString local_38;
  
  pTVar7 = (TNode *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FLwsWebSocket__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->StateLock,4000);
  this->State = None;
  (this->ClosedReason).Reason.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClosedReason).Reason.Data.ArrayNum = 0;
  (this->ClosedReason).Reason.Data.ArrayMax = 0;
  this->LastGameThreadState = None;
  (this->CloseRequest).Code = 0;
  (this->CloseRequest).Reason = (char *)0x0;
  this->bWasSendQueueEmpty = true;
  *(undefined8 *)&this->ConnectedEvent = 0;
  *(undefined8 *)&(this->ConnectedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ConnectedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->ConnectedEvent).field_0x18 = 2;
  *(undefined8 *)&this->ConnectionErrorEvent = 0;
  *(undefined8 *)&(this->ConnectionErrorEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ConnectionErrorEvent).field_0x10 = 0;
  *(undefined8 *)&(this->ConnectionErrorEvent).field_0x18 = 2;
  *(undefined8 *)&this->ClosedEvent = 0;
  *(undefined8 *)&(this->ClosedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ClosedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->ClosedEvent).field_0x18 = 2;
  *(undefined8 *)&this->MessageEvent = 0;
  *(undefined8 *)&(this->MessageEvent).field_0x8 = 0;
  *(undefined8 *)&(this->MessageEvent).field_0x10 = 0;
  *(undefined8 *)&(this->MessageEvent).field_0x18 = 2;
  *(undefined8 *)&this->BinaryMessageEvent = 0;
  *(undefined8 *)&(this->BinaryMessageEvent).field_0x8 = 0;
  *(undefined8 *)&(this->BinaryMessageEvent).field_0x10 = 0;
  *(undefined8 *)&(this->BinaryMessageEvent).field_0x18 = 2;
  *(undefined8 *)&this->RawMessageEvent = 0;
  *(undefined8 *)&(this->RawMessageEvent).field_0x8 = 0;
  *(undefined8 *)&(this->RawMessageEvent).field_0x10 = 0;
  *(undefined8 *)&(this->RawMessageEvent).field_0x18 = 2;
  *(undefined8 *)&this->OnMessageSentEvent = 0;
  *(undefined8 *)&(this->OnMessageSentEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnMessageSentEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnMessageSentEvent).field_0x18 = 2;
  this->LwsConnection = (lws *)0x0;
  ::FString::FString(&this->Url,param_2);
  pTVar2 = &this->Protocols;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Protocols).ArrayMax;
  iVar3 = param_3->ArrayNum;
  pFVar9 = (param_3->AllocatorInstance).Data;
  (this->Protocols).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FString,FString,int>((pTVar2->AllocatorInstance).Data,(FString *)pFVar9,iVar3);
  }
  ::FString::FString(&this->UpgradeHeader,param_4);
  (this->ReceiveBuffer).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReceiveBuffer).Data.ArrayNum = 0;
  (this->ReceiveBuffer).Data.ArrayMax = 0;
  pTVar5 = ::operator_new(0x10);
  pTVar6 = pTVar7;
  if (pTVar5 != (TNode *)0x0) {
    pTVar5->NextNode = (TNode *)0x0;
    (pTVar5->Item).Ptr = (FLwsReceiveBufferBinary *)0x0;
    pTVar5->NextNode = (TNode *)0x0;
    (pTVar5->Item).Ptr = (FLwsReceiveBufferBinary *)0x0;
    pTVar6 = pTVar5;
  }
  (this->ReceiveBinaryQueue).Tail = pTVar6;
  (this->ReceiveBinaryQueue).Head = pTVar6;
  pTVar5 = ::operator_new(0x10);
  pTVar6 = pTVar7;
  if (pTVar5 != (TNode *)0x0) {
    pTVar5->NextNode = (TNode *)0x0;
    (pTVar5->Item).Ptr = (FLwsReceiveBufferBinary *)0x0;
    pTVar5->NextNode = (TNode *)0x0;
    (pTVar5->Item).Ptr = (FLwsReceiveBufferBinary *)0x0;
    pTVar6 = pTVar5;
  }
  (this->ReceiveBinaryFragmentQueue).Tail = (TNode *)pTVar6;
  (this->ReceiveBinaryFragmentQueue).Head = (TNode *)pTVar6;
  pTVar5 = ::operator_new(0x10);
  pTVar6 = pTVar7;
  if (pTVar5 != (TNode *)0x0) {
    pTVar5->NextNode = (TNode *)0x0;
    (pTVar5->Item).Ptr = (FLwsReceiveBufferBinary *)0x0;
    pTVar5->NextNode = (TNode *)0x0;
    (pTVar5->Item).Ptr = (FLwsReceiveBufferBinary *)0x0;
    pTVar6 = pTVar5;
  }
  (this->ReceiveTextQueue).Tail = (TNode *)pTVar6;
  (this->ReceiveTextQueue).Head = (TNode *)pTVar6;
  pTVar6 = ::operator_new(0x10);
  if (pTVar6 != (TNode *)0x0) {
    pTVar6->NextNode = (TNode *)0x0;
    (pTVar6->Item).Ptr = (FLwsReceiveBufferBinary *)0x0;
    pTVar6->NextNode = (TNode *)0x0;
    pTVar7 = pTVar6;
  }
  (this->SendQueue).Tail = (TNode *)pTVar7;
  (this->SendQueue).Head = (TNode *)pTVar7;
  this->MaxTextMessageBufferSize = param_5;
  IncrementingIdentifier = IncrementingIdentifier + 1;
  this->Identifier = IncrementingIdentifier;
  if (6 < (byte)LogWebSockets._0_1_) {
    pFVar9 = (pTVar2->AllocatorInstance).Data;
    bVar4 = true;
    iVar3 = (this->Protocols).ArrayNum;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar8 = pFVar9 + (longlong)iVar3 * 0x10;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    while( true ) {
      if ((this->Protocols).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&param_5);
      }
      if (pFVar9 == pFVar8) break;
      if (bVar4) {
        bVar4 = false;
      }
      else {
        ::FString::AppendChars(&local_38,L",",1);
      }
      iVar10 = *(int *)(pFVar9 + 8) + -1;
      if (*(int *)(pFVar9 + 8) == 0) {
        iVar10 = 0;
      }
      ::FString::AppendChars(&local_38,*(wchar_t **)pFVar9,iVar10);
      pFVar9 = pFVar9 + 0x10;
    }
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// ~FLwsWebSocket @ 14b3f8b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLwsWebSocket::~FLwsWebSocket(FLwsWebSocket *this)

{
  int *piVar1;
  int iVar2;
  TNode *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  
  this->_padding_ = (longlong)&___7FLwsWebSocket__6B_;
  if (6 < (byte)LogWebSockets._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
  }
  if ((this->LwsConnection != (lws *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("LwsConnection == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocket.cpp"
                         ,0x65,L"FLwsWebSocket: Must have closed connection before destruction"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ClearData(this);
  pTVar3 = (this->SendQueue).Tail;
  while (pTVar3 != (TNode *)0x0) {
    (this->SendQueue).Tail = pTVar3->NextNode;
    ::operator_delete(pTVar3,0x10);
    pTVar3 = (this->SendQueue).Tail;
  }
  TQueue<TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_>,1>::
  ~TQueue<TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_>,1>
            (&this->ReceiveTextQueue);
  TQueue<TUniquePtr<FLwsReceiveBufferBinaryFragment,TDefaultDelete<FLwsReceiveBufferBinaryFragment>_>,1>
  ::
  ~TQueue<TUniquePtr<FLwsReceiveBufferBinaryFragment,TDefaultDelete<FLwsReceiveBufferBinaryFragment>_>,1>
            (&this->ReceiveBinaryFragmentQueue);
  TQueue<TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_>,1>::
  ~TQueue<TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_>,1>
            (&this->ReceiveBinaryQueue);
  pFVar4 = (this->ReceiveBuffer).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->UpgradeHeader).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FString,int>
            ((FString *)(this->Protocols).AllocatorInstance.Data,(this->Protocols).ArrayNum);
  pFVar4 = (this->Protocols).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Url).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMessageSentEvent).field_0x8,*(int *)&(this->OnMessageSentEvent).field_0x10);
  pvVar5 = *(void **)&(this->OnMessageSentEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMessageSentEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->RawMessageEvent).field_0x8,*(int *)&(this->RawMessageEvent).field_0x10);
  pvVar5 = *(void **)&(this->RawMessageEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RawMessageEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->BinaryMessageEvent).field_0x8,*(int *)&(this->BinaryMessageEvent).field_0x10);
  pvVar5 = *(void **)&(this->BinaryMessageEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BinaryMessageEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MessageEvent).field_0x8,*(int *)&(this->MessageEvent).field_0x10);
  pvVar5 = *(void **)&(this->MessageEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MessageEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->ClosedEvent).field_0x8
             ,*(int *)&(this->ClosedEvent).field_0x10);
  pvVar5 = *(void **)&(this->ClosedEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ClosedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ConnectionErrorEvent).field_0x8,
             *(int *)&(this->ConnectionErrorEvent).field_0x10);
  pvVar5 = *(void **)&(this->ConnectionErrorEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ConnectionErrorEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ConnectedEvent).field_0x8,*(int *)&(this->ConnectedEvent).field_0x10);
  pvVar5 = *(void **)&(this->ConnectedEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ConnectedEvent);
  pFVar4 = (this->ClosedReason).Reason.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->StateLock);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7IWebSocket__6B_;
  return;
}

// ClearData @ 14b3f96f0

void __thiscall FLwsWebSocket::ClearData(FLwsWebSocket *this)

{
  TNode *pTVar1;
  TNode *pTVar2;
  FLwsReceiveBufferBinary *pFVar3;
  FScriptContainerElement *pFVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  FLwsReceiveBufferBinaryFragment *pFVar7;
  TNode *pTVar8;
  TNode *pTVar9;
  FLwsReceiveBufferText *pFVar10;
  TNode *pTVar11;
  FLwsSendBuffer *pFVar12;
  TNode *pTVar13;
  char *pcVar14;
  code *pcVar15;
  bool bVar16;
  TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_> *pTVar17;
  TUniquePtr<FLwsReceiveBufferBinaryFragment,TDefaultDelete<FLwsReceiveBufferBinaryFragment>_>
  *pTVar18;
  TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_> *pTVar19;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  
  if ((this->State == Connected) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("State != EState::Connected",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocket.cpp"
                          ,0xe8,L""), bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  while (pTVar1 = ((this->ReceiveBinaryQueue).Tail)->NextNode, pTVar1 != (TNode *)0x0) {
    pTVar2 = (this->ReceiveBinaryQueue).Tail;
    (this->ReceiveBinaryQueue).Tail = pTVar1;
    pTVar17 = &pTVar1->Item;
    if (pTVar17 !=
        (TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_> *)&local_28) {
      pFVar3 = pTVar17->Ptr;
      pTVar17->Ptr = (FLwsReceiveBufferBinary *)0x0;
      if (pFVar3 != (FLwsReceiveBufferBinary *)0x0) {
        pFVar4 = (pFVar3->Payload).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(pFVar3,0x18);
      }
    }
    if (pTVar2 != (TNode *)0x0) {
      pFVar3 = (pTVar2->Item).Ptr;
      if (pFVar3 != (FLwsReceiveBufferBinary *)0x0) {
        pFVar4 = (pFVar3->Payload).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(pFVar3,0x18);
      }
      ::operator_delete(pTVar2,0x10);
    }
  }
  while (pTVar5 = ((this->ReceiveBinaryFragmentQueue).Tail)->NextNode, pTVar5 != (TNode *)0x0) {
    pTVar6 = (this->ReceiveBinaryFragmentQueue).Tail;
    (this->ReceiveBinaryFragmentQueue).Tail = pTVar5;
    pTVar18 = &pTVar5->Item;
    if (pTVar18 !=
        (TUniquePtr<FLwsReceiveBufferBinaryFragment,TDefaultDelete<FLwsReceiveBufferBinaryFragment>_>
         *)&local_20) {
      pFVar7 = pTVar18->Ptr;
      pTVar18->Ptr = (FLwsReceiveBufferBinaryFragment *)0x0;
      if (pFVar7 != (FLwsReceiveBufferBinaryFragment *)0x0) {
        pFVar4 = (pFVar7->Payload).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(pFVar7,0x18);
      }
    }
    if (pTVar6 != (TNode *)0x0) {
      pFVar7 = (pTVar6->Item).Ptr;
      if (pFVar7 != (FLwsReceiveBufferBinaryFragment *)0x0) {
        pFVar4 = (pFVar7->Payload).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(pFVar7,0x18);
      }
      ::operator_delete(pTVar6,0x10);
    }
  }
  while (pTVar8 = ((this->ReceiveTextQueue).Tail)->NextNode, pTVar8 != (TNode *)0x0) {
    pTVar9 = (this->ReceiveTextQueue).Tail;
    (this->ReceiveTextQueue).Tail = pTVar8;
    pTVar19 = &pTVar8->Item;
    if (pTVar19 !=
        (TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_> *)local_18) {
      pFVar10 = pTVar19->Ptr;
      pTVar19->Ptr = (FLwsReceiveBufferText *)0x0;
      if (pFVar10 != (FLwsReceiveBufferText *)0x0) {
        pFVar4 = (pFVar10->Text).Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(pFVar10,0x10);
      }
    }
    if (pTVar9 != (TNode *)0x0) {
      pFVar10 = (pTVar9->Item).Ptr;
      if (pFVar10 != (FLwsReceiveBufferText *)0x0) {
        pFVar4 = (pFVar10->Text).Data.AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(pFVar10,0x10);
      }
      ::operator_delete(pTVar9,0x10);
    }
  }
  while (pTVar11 = ((this->SendQueue).Tail)->NextNode, pTVar11 != (TNode *)0x0) {
    pFVar12 = pTVar11->Item;
    pTVar13 = (this->SendQueue).Tail;
    (this->SendQueue).Tail = pTVar11;
    pTVar11->Item = (FLwsSendBuffer *)0x0;
    ::operator_delete(pTVar13,0x10);
    if (pFVar12 != (FLwsSendBuffer *)0x0) {
      pFVar4 = (pFVar12->Payload).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      ::operator_delete(pFVar12,0x20);
    }
  }
  ::FString::Empty(&this->ReceiveBuffer,0);
  pcVar14 = (this->CloseRequest).Reason;
  if (pcVar14 != (char *)0x0) {
    FMemory::Free(pcVar14);
  }
  (this->CloseRequest).Reason = (char *)0x0;
  (this->CloseRequest).Code = 0;
  return;
}

// Close @ 14b3f9980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLwsWebSocket::Close(FLwsWebSocket *this,int param_1,FString *param_2)

{
  uint uVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar2;
  bool bVar3;
  size_t sVar4;
  char *_Dest;
  FLwsWebSocketsManager *pFVar5;
  wchar_t *_Str;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_108 [32];
  FScriptContainerElement *local_e8;
  FScriptContainerElement local_d8 [128];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  if ((this->CloseRequest).Code != 0) {
    if ((byte)LogWebSockets._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    return;
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  if ((param_2->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_50 = (FScriptContainerElement *)0x0;
      local_48 = 0;
      goto LAB_14b3f9ab1;
    }
  }
  sVar4 = wcslen(_Str);
  local_48 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar4);
  uVar1 = local_48 + 1;
  uVar7 = uVar1;
  if (uVar1 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar7 = 0;
      goto LAB_14b3f9a63;
    }
  }
  else {
LAB_14b3f9a63:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar7,1);
  }
  local_50 = local_d8;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  UE::Core::Private::Convert((uchar *)local_50,uVar1,_Str,(int)sVar4 + 1);
LAB_14b3f9ab1:
  _Dest = FMemory::Malloc((longlong)local_48 + 1,0);
  lVar6 = (longlong)local_48;
  strncpy(_Dest,(char *)local_50,lVar6 + 1);
  _Dest[lVar6] = '\0';
  _Dest[local_48] = '\0';
  if (5 < (byte)LogWebSockets._0_1_) {
    if ((param_2->Data).ArrayNum == 0) {
      local_e8 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_e8 = (param_2->Data).AllocatorInstance.Data;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
  }
  lpCriticalSection = &this->StateLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  (this->CloseRequest).Code = param_1;
  (this->CloseRequest).Reason = _Dest;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pFVar5 = FLwsWebSocketsManager::Get();
  if (pFVar5->bPollService == false) {
    lws_cancel_service(pFVar5->LwsContext);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// Connect @ 14b3f9bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLwsWebSocket::Connect(FLwsWebSocket *this)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  TNode *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FLwsWebSocketsManager *pFVar7;
  FHttpModule *pFVar8;
  TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *this_00;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar9;
  TSharedRef<FLwsWebSocket,1> *pTVar10;
  TNode *pTVar11;
  FScriptContainerElement *pFVar12;
  FString local_28;
  TSharedRef<FLwsWebSocket,1> local_18;
  
  if (this->LastGameThreadState == None) {
    pFVar7 = FLwsWebSocketsManager::Get();
    if (pFVar7->bDisableDomainAllowlist == false) {
      pFVar8 = FHttpModule::Get();
      if ((pFVar8->HttpManager == (FHttpManager *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("HttpManager != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\HTTP\\Public\\HttpModule.h"
                             ,0x50,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = FHttpManager::IsDomainAllowed(pFVar8->HttpManager,&this->Url);
      if (!bVar5) {
        this->State = Error;
        if (2 < (byte)LogWebSockets._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
        }
        this_00 = (TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)
                  (**(code **)(this->_padding_ + 0x40))(this);
        ::FString::FString(&local_28,L"Invalid Domain");
        TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::Broadcast
                  (this_00,&local_28);
        if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return;
      }
    }
    else if (4 < (byte)LogWebSockets._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    }
    this->State = StartConnecting;
    this->LastGameThreadState = StartConnecting;
    pTVar9 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             (**(code **)(this->_padding_ + 0x50))(this);
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(pTVar9);
    this->bWantsMessageEvents = bVar5;
    pTVar9 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             (**(code **)(this->_padding_ + 0x60))(this);
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(pTVar9);
    this->bWantsRawMessageEvents = bVar5;
    pTVar9 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             (**(code **)(this->_padding_ + 0x58))(this);
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound(pTVar9);
    this->bWantsBinaryMessageEvents = bVar5;
    if (5 < (byte)LogWebSockets._0_1_) {
      switch(this->State) {
      case None:
        break;
      case StartConnecting:
        break;
      case Connecting:
        break;
      case Connected:
        break;
      case ClosingByRequest:
        break;
      case Closed:
        break;
      case Error:
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    }
    ClearData(this);
    pFVar7 = FLwsWebSocketsManager::Get();
    pTVar10 = TSharedFromThis<FLwsWebSocket,1>::AsShared
                        ((TSharedFromThis<FLwsWebSocket,1> *)&this->_padding_,&local_18);
    piVar1 = &(pFVar7->Sockets).ArrayMax;
    iVar6 = (pFVar7->Sockets).ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(pFVar7->Sockets).AllocatorInstance,piVar1);
    }
    (pFVar7->Sockets).ArrayNum = iVar6 + 1;
    pFVar12 = (pFVar7->Sockets).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
    *(FLwsWebSocket **)pFVar12 = pTVar10->Object;
    pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar12 + 8) = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    pTVar11 = ::operator_new(0x10);
    if (pTVar11 != (TNode *)0x0) {
      pTVar11->NextNode = (TNode *)0x0;
      pTVar11->Item = this;
      pTVar3 = (pFVar7->SocketsToStart).Head;
      (pFVar7->SocketsToStart).Head = pTVar11;
      pTVar3->NextNode = pTVar11;
    }
    if (pFVar7->bPollService == false) {
      lws_cancel_service(pFVar7->LwsContext);
    }
  }
  else if (2 < (byte)LogWebSockets._0_1_) {
    ToString(this->LastGameThreadState);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    return;
  }
  return;
}

// ConnectInternal @ 14b3f9f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLwsWebSocket::ConnectInternal(FLwsWebSocket *this,lws_context *param_1)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  FLwsWebSocketsManager *pFVar9;
  longlong lVar10;
  uint uVar11;
  char *pcVar12;
  FWindowsRecursiveMutex *pFVar13;
  wchar_t *pwVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  char *_Src;
  FScriptContainerElement *pFVar18;
  FClosedReason *pFVar19;
  undefined1 auStackY_508 [32];
  FScriptContainerElement local_4b8;
  FScriptContainerElement local_4b7;
  FScriptContainerElement local_4b6;
  FScriptContainerElement local_4b5 [5];
  ForAnyElementType local_4b0;
  undefined8 local_4a8;
  ForAnyElementType local_4a0;
  undefined8 local_498;
  undefined1 local_490 [4];
  int local_48c;
  int local_488;
  FString local_480;
  FString local_470;
  FString local_460;
  char *local_450;
  char *local_448;
  FString local_440;
  FString local_430;
  char *local_420;
  lws_context *local_418;
  lws_context *local_408;
  char *local_400;
  int local_3f8;
  int local_3f4;
  FScriptContainerElement *local_3f0;
  FScriptContainerElement *local_3e8;
  char *local_3e0;
  char *local_3d8;
  undefined4 local_3d0;
  undefined4 local_3cc;
  FLwsWebSocket *local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128> local_348;
  char local_2b0;
  FScriptContainerElement local_2a8 [128];
  ForAnyElementType local_228;
  FScriptContainerElement *local_220;
  int local_218;
  FScriptContainerElement local_208 [128];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_508;
  local_418 = param_1;
  if ((this->LwsConnection != (lws *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!LwsConnection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocket.cpp"
                         ,0x2ba,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->State != StartConnecting) {
    ToString(this->State);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State == EState::StartConnecting",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocket.cpp"
                       ,699,L"FLwsWebSocket::ConnectInternal: State must be %s, but is %s instead");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (5 < (byte)LogWebSockets._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
  }
  pFVar13 = &this->StateLock;
  if ((pFVar13 == (FWindowsRecursiveMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar13);
  this->State = Connecting;
  if (pFVar13 != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar13);
  }
  pcVar12 = (char *)0x0;
  local_188.Data = (FScriptContainerElement *)0x0;
  if ((this->Url).Data.ArrayNum == 0) {
    pwVar14 = L"";
LAB_14b3fa0dd:
    sVar8 = wcslen(pwVar14);
    local_178 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar14,(int)sVar8);
    uVar11 = local_178 + 1;
    uVar17 = uVar11;
    if (uVar11 < 0x81) {
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        uVar17 = 0;
        goto LAB_14b3fa11a;
      }
    }
    else {
LAB_14b3fa11a:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_188,0,uVar17,1);
    }
    local_180 = local_208;
    if (local_188.Data != (FScriptContainerElement *)0x0) {
      local_180 = local_188.Data;
    }
    UE::Core::Private::Convert((uchar *)local_180,uVar11,pwVar14,(int)sVar8 + 1);
  }
  else {
    pwVar14 = (wchar_t *)(this->Url).Data.AllocatorInstance.Data;
    if ((FScriptContainerElement *)pwVar14 != (FScriptContainerElement *)0x0) goto LAB_14b3fa0dd;
    local_178 = 0;
    local_180 = (FScriptContainerElement *)0x0;
  }
  iVar6 = lws_parse_uri(local_180,&local_450,&local_448,&local_48c);
  if (iVar6 != 0) {
    ::FString::FString(&local_480,L"Bad URL");
    if (5 < (byte)LogWebSockets._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    }
    if ((pFVar13 == (FWindowsRecursiveMutex *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar13);
    this->State = Error;
    pFVar19 = &this->ClosedReason;
    if (pFVar19 != (FClosedReason *)&local_480) {
      pFVar15 = (pFVar19->Reason).Data.AllocatorInstance.Data;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      (pFVar19->Reason).Data.AllocatorInstance.Data = local_480.Data.AllocatorInstance.Data;
      (this->ClosedReason).Reason.Data.ArrayNum = local_480.Data.ArrayNum;
      (this->ClosedReason).Reason.Data.ArrayMax = local_480.Data.ArrayMax;
      local_480.Data.ArrayNum = 0;
      local_480.Data.ArrayMax = 0;
      local_480.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    FVar16.Data = local_480.Data.AllocatorInstance.Data;
    if (pFVar13 != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar13);
      FVar16.Data = local_480.Data.AllocatorInstance.Data;
    }
    goto joined_r0x00014b3fad09;
  }
  sVar8 = strlen(local_420);
  local_498 = 0;
  local_4a0.Data = (FScriptContainerElement *)0x0;
  iVar6 = (int)sVar8;
  uVar11 = iVar6 + 2;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  local_498._0_4_ = 0;
  if (0 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar11,&local_4a0,0,(int *)((longlong)&local_498 + 4));
  }
  local_4b8 = (FScriptContainerElement)0x2f;
  iVar7 = (int)local_498;
  if ((local_4a0.Data <= &local_4b8) && (&local_4b8 < local_4a0.Data + local_498._4_4_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar7 = (int)local_498;
  }
  if (iVar7 == local_498._4_4_) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&local_4a0,(int *)((longlong)&local_498 + 4));
  }
  local_498 = CONCAT44(local_498._4_4_,iVar7 + 1);
  local_4a0.Data[iVar7] = local_4b8;
  if (((local_420 == (char *)0x0) && (iVar6 != 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar6,&local_4a0,(int *)&local_498,(int *)((longlong)&local_498 + 4));
  if (iVar6 != 0) {
    memcpy(local_4a0.Data + iVar7,local_420,(longlong)iVar6);
  }
  local_4b7 = (FScriptContainerElement)0x0;
  if (((local_4a0.Data <= &local_4b7) && (&local_4b7 < local_4a0.Data + local_498._4_4_)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar6 = (int)local_498;
  if ((int)local_498 == local_498._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&local_4a0,(int *)((longlong)&local_498 + 4));
  }
  local_498 = CONCAT44(local_498._4_4_,iVar6 + 1);
  local_4a0.Data[iVar6] = local_4b7;
  iVar6 = FGenericPlatformStricmp::Stricmp(local_450,"wss");
  if (iVar6 == 0) {
    pFVar9 = FLwsWebSocketsManager::Get();
    iVar6 = 3;
    if (pFVar9->bDisableCertValidation == false) {
      iVar6 = 1;
    }
LAB_14b3fa4fa:
    local_430.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_430.Data.ArrayNum = 0;
    local_430.Data.ArrayMax = 0;
    local_488 = iVar6;
    ::FString::AppendInt(&local_430,local_48c);
    local_228.Data = (FScriptContainerElement *)0x0;
    if (local_430.Data.ArrayNum == 0) {
      pwVar14 = L"";
LAB_14b3fa54a:
      sVar8 = wcslen(pwVar14);
      local_218 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar14,(int)sVar8);
      uVar11 = local_218 + 1;
      uVar17 = uVar11;
      if (uVar11 < 0x81) {
        if (local_228.Data != (FScriptContainerElement *)0x0) {
          uVar17 = 0;
          goto LAB_14b3fa587;
        }
      }
      else {
LAB_14b3fa587:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_228,0,uVar17,1);
      }
      local_220 = local_2a8;
      if (local_228.Data != (FScriptContainerElement *)0x0) {
        local_220 = local_228.Data;
      }
      UE::Core::Private::Convert((uchar *)local_220,uVar11,pwVar14,(int)sVar8 + 1);
    }
    else {
      pwVar14 = (wchar_t *)local_430.Data.AllocatorInstance.Data;
      if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14b3fa54a;
      local_220 = (FScriptContainerElement *)0x0;
      local_218 = 0;
    }
    iVar3 = local_218;
    _Src = local_448;
    sVar8 = strlen(local_448);
    iVar7 = (int)sVar8;
    if (iVar6 == 0) {
      if (local_48c == 0x50) goto LAB_14b3fa69c;
LAB_14b3fa5ef:
      bVar4 = false;
      uVar11 = iVar7 + 2 + iVar3;
    }
    else {
      if (local_48c != 0x1bb) goto LAB_14b3fa5ef;
LAB_14b3fa69c:
      bVar4 = true;
      uVar11 = iVar7 + 1;
    }
    local_4b0.Data = (FScriptContainerElement *)0x0;
    local_4a8 = 0;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (0 < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar11,&local_4b0,0,(int *)((longlong)&local_4a8 + 4));
      _Src = local_448;
    }
    if (((_Src == (char *)0x0) && (iVar7 != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar7,&local_4b0,(int *)&local_4a8,(int *)((longlong)&local_4a8 + 4));
    if (iVar7 != 0) {
      memcpy(local_4b0.Data + iVar6,_Src,(longlong)iVar7);
    }
    if (!bVar4) {
      local_4b6 = (FScriptContainerElement)0x3a;
      if (((local_4b0.Data <= &local_4b6) && (&local_4b6 < local_4b0.Data + local_4a8._4_4_)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar6 = (int)local_4a8;
      if ((int)local_4a8 == local_4a8._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&local_4b0,(int *)((longlong)&local_4a8 + 4));
      }
      iVar7 = local_218;
      pFVar15 = local_220;
      local_4a8 = CONCAT44(local_4a8._4_4_,iVar6 + 1);
      local_4b0.Data[iVar6] = local_4b6;
      sVar8 = (size_t)local_218;
      if (((local_220 == (FScriptContainerElement *)0x0) && (local_218 != 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,iVar7,&local_4b0,(int *)&local_4a8,(int *)((longlong)&local_4a8 + 4));
      if (iVar7 != 0) {
        memcpy(local_4b0.Data + iVar6,pFVar15,sVar8);
      }
    }
    local_4b5[0] = (FScriptContainerElement)0x0;
    if (((local_4b0.Data <= local_4b5) && (local_4b5 < local_4b0.Data + local_4a8._4_4_)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar6 = (int)local_4a8;
    if ((int)local_4a8 == local_4a8._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&local_4b0,(int *)((longlong)&local_4a8 + 4));
    }
    local_4a8 = CONCAT44(local_4a8._4_4_,iVar6 + 1);
    local_4b0.Data[iVar6] = local_4b5[0];
    iVar6 = (this->Protocols).ArrayNum;
    local_2b0 = '\0';
    if (0 < iVar6) {
      pFVar15 = (this->Protocols).AllocatorInstance.Data;
      bVar4 = true;
      pFVar18 = pFVar15 + (longlong)iVar6 * 0x10;
      local_440.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_440.Data.ArrayNum = 0;
      local_440.Data.ArrayMax = 0;
      while( true ) {
        if ((this->Protocols).ArrayNum != iVar6) {
          local_490[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_490);
        }
        if (pFVar15 == pFVar18) break;
        if (bVar4) {
          bVar4 = false;
        }
        else {
          ::FString::AppendChars(&local_440,L",",1);
        }
        iVar7 = *(int *)(pFVar15 + 8) + -1;
        if (*(int *)(pFVar15 + 8) == 0) {
          iVar7 = 0;
        }
        ::FString::AppendChars(&local_440,*(wchar_t **)pFVar15,iVar7);
        pFVar15 = pFVar15 + 0x10;
      }
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_440.Data.ArrayNum != 0) {
        FVar16.Data = local_440.Data.AllocatorInstance.Data;
      }
      if ((local_2b0 != '\0') && ((void *)local_348._padding_ != (void *)0x0)) {
        FMemory::Free((void *)local_348._padding_);
      }
      TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128>::
      TStringConversion<UE::Core::Private::FTCHARToUTF8_Convert,128><wchar_t>
                (&local_348,(wchar_t *)FVar16.Data);
      local_2b0 = '\x01';
      if ((local_440.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) ||
         (FMemory::Free(local_440.Data.AllocatorInstance.Data), local_2b0 != '\0')) {
        pcVar12 = local_348.Ptr;
      }
    }
    pFVar13 = &this->StateLock;
    local_400 = local_448;
    local_3cc = 0;
    local_408 = local_418;
    local_3f8 = local_48c;
    local_3f4 = local_488;
    local_3f0 = local_4a0.Data;
    local_3e0 = local_448;
    local_3e8 = local_4b0.Data;
    local_3c0 = 0;
    uStack_3b8 = 0;
    local_3b0 = 0;
    uStack_3a8 = 0;
    local_3d0 = 0xffffffff;
    local_3a0 = 0;
    uStack_398 = 0;
    local_390 = 0;
    uStack_388 = 0;
    local_380 = 0;
    uStack_378 = 0;
    local_370 = 0;
    uStack_368 = 0;
    local_360 = 0;
    uStack_358 = 0;
    local_3d8 = pcVar12;
    local_3c8 = this;
    lVar10 = lws_client_connect_via_info(&local_408);
    if (lVar10 == 0) {
      ::FString::FString(&local_470,L"Could not initialize connection");
      if (5 < (byte)LogWebSockets._0_1_) {
        ToString(Connecting);
        ToString(Error);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
      }
      if ((pFVar13 == (FWindowsRecursiveMutex *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar13);
      this->State = Error;
      pFVar19 = &this->ClosedReason;
      if (pFVar19 != (FClosedReason *)&local_470) {
        pFVar15 = (pFVar19->Reason).Data.AllocatorInstance.Data;
        if (pFVar15 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar15);
        }
        (pFVar19->Reason).Data.AllocatorInstance.Data = local_470.Data.AllocatorInstance.Data;
        (this->ClosedReason).Reason.Data.ArrayNum = local_470.Data.ArrayNum;
        (this->ClosedReason).Reason.Data.ArrayMax = local_470.Data.ArrayMax;
        local_470.Data.ArrayNum = 0;
        local_470.Data.ArrayMax = 0;
        local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (pFVar13 != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar13);
      }
      if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_470.Data.AllocatorInstance.Data);
      }
    }
    else if (5 < (byte)LogWebSockets._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    }
    if ((local_2b0 != '\0') && ((void *)local_348._padding_ != (void *)0x0)) {
      FMemory::Free((void *)local_348._padding_);
    }
    if (local_4b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b0.Data);
    }
    FVar2.Data = local_430.Data.AllocatorInstance.Data;
    if (local_228.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data);
      FVar2.Data = local_430.Data.AllocatorInstance.Data;
    }
  }
  else {
    iVar6 = FGenericPlatformStricmp::Stricmp(local_450,"wss+insecure");
    if (iVar6 == 0) {
      iVar6 = 3;
      goto LAB_14b3fa4fa;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp(local_450,"ws");
    iVar6 = 0;
    if (iVar7 == 0) goto LAB_14b3fa4fa;
    TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
              (&local_168,local_450);
    ::FString::PrintfImpl
              (&local_460,L"Bad protocol \'%s\'. Use either \'ws\', \'wss\', or \'wss+insecure\'");
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    if (5 < (byte)LogWebSockets._0_1_) {
      ToString(Connecting);
      ToString(Error);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    }
    if ((pFVar13 == (FWindowsRecursiveMutex *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar13);
    this->State = Error;
    pFVar19 = &this->ClosedReason;
    if (pFVar19 != (FClosedReason *)&local_460) {
      pFVar15 = (pFVar19->Reason).Data.AllocatorInstance.Data;
      if (pFVar15 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar15);
      }
      (pFVar19->Reason).Data.AllocatorInstance.Data = local_460.Data.AllocatorInstance.Data;
      (this->ClosedReason).Reason.Data.ArrayNum = local_460.Data.ArrayNum;
      (this->ClosedReason).Reason.Data.ArrayMax = local_460.Data.ArrayMax;
      local_460.Data.ArrayNum = 0;
      local_460.Data.ArrayMax = 0;
      local_460.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    FVar2.Data = local_460.Data.AllocatorInstance.Data;
    if (pFVar13 != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar13);
      FVar2.Data = local_460.Data.AllocatorInstance.Data;
    }
  }
  FVar16.Data = local_4a0.Data;
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
    FVar16.Data = local_4a0.Data;
  }
joined_r0x00014b3fad09:
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  if (local_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data);
  }
  return;
}

// GameThreadFinalize @ 14b3fb860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLwsWebSocket::GameThreadFinalize(FLwsWebSocket *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FClosedReason *pFVar1;
  EState EVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  ushort uVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *this_00;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  uint uVar12;
  longlong lVar13;
  FString local_58;
  ushort local_48;
  undefined1 local_46;
  FDestructionSentinel local_40;
  
  lpCriticalSection = &this->StateLock;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EVar2 = this->State;
  pFVar1 = &this->ClosedReason;
  this->State = None;
  this->LastGameThreadState = None;
  if ((FClosedReason *)&local_58 != pFVar1) {
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = (pFVar1->Reason).Data.AllocatorInstance.Data;
    (pFVar1->Reason).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = (this->ClosedReason).Reason.Data.ArrayNum;
    local_58.Data.ArrayMax = (this->ClosedReason).Reason.Data.ArrayMax;
    (this->ClosedReason).Reason.Data.ArrayNum = 0;
    (this->ClosedReason).Reason.Data.ArrayMax = 0;
  }
  local_48 = (this->ClosedReason).CloseStatus;
  local_46 = (this->ClosedReason).bWasClean;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (5 < (byte)LogWebSockets._0_1_) {
    ToString(EVar2);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
  }
  if (EVar2 == Error) {
    this_00 = (TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)
              (**(code **)(this->_padding_ + 0x40))();
    TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::Broadcast
              (this_00,&local_58);
  }
  else {
    this_01 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)(this->_padding_ + 0x48))(this);
    uVar7 = local_46;
    uVar6 = local_48;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
               (FWriteAccessScope *)&local_40);
    this_01->InvocationListLockCount = this_01->InvocationListLockCount + 1;
    bVar8 = false;
    uVar12 = (this_01->InvocationList).ArrayNum - 1;
    if (-1 < (int)uVar12) {
      lVar13 = (longlong)(int)uVar12 << 4;
      bVar8 = false;
      do {
        uVar11 = 0;
        if ((int)uVar12 < (this_01->InvocationList).ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar3 = (this_01->InvocationList).AllocatorInstance.Data;
        if ((*(int *)(pFVar3 + lVar13 + 8) == 0) ||
           (plVar4 = *(longlong **)(pFVar3 + lVar13), plVar4 == (longlong *)0x0)) {
LAB_14b3fba41:
          bVar8 = true;
        }
        else {
          cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,uVar6,&local_58,uVar7);
          if (cVar10 == '\0') goto LAB_14b3fba41;
        }
        lVar13 = lVar13 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    this_01->InvocationListLockCount = this_01->InvocationListLockCount + -1;
    if (bVar8) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_01,false);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// GameThreadTick @ 14b3fbad0

void __thiscall FLwsWebSocket::GameThreadTick(FLwsWebSocket *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_> *pTVar1;
  TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_> *pTVar2;
  TUniquePtr<FLwsReceiveBufferBinaryFragment,TDefaultDelete<FLwsReceiveBufferBinaryFragment>_>
  *pTVar3;
  EState EVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  TNode *pTVar9;
  TNode *pTVar10;
  FLwsReceiveBufferText *pFVar11;
  TNode *pTVar12;
  TNode *pTVar13;
  FScriptContainerElement *pFVar14;
  TNode *pTVar15;
  TNode *pTVar16;
  code *pcVar17;
  bool bVar18;
  bool bVar19;
  char cVar20;
  bool bVar21;
  uint uVar22;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar23;
  uint uVar24;
  FLwsReceiveBufferBinaryFragment *pFVar25;
  FLwsReceiveBufferBinaryFragment *pFVar26;
  FLwsReceiveBufferBinary *pFVar27;
  FLwsReceiveBufferBinary *pFVar28;
  longlong lVar29;
  FLwsReceiveBufferBinary *pFVar30;
  FLwsReceiveBufferBinary *local_res20;
  FLwsReceiveBufferBinaryFragment *local_f8;
  FDestructionSentinel local_e0;
  FDestructionSentinel local_c8;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  
  lpCriticalSection = &this->StateLock;
  if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar18)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EVar4 = this->State;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pFVar30 = (FLwsReceiveBufferBinary *)0x0;
  if ((EVar4 != this->LastGameThreadState) &&
     (this->LastGameThreadState = EVar4, EVar4 == Connected)) {
    pTVar23 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)(this->_padding_ + 0x38))(this);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar23,
               (FWriteAccessScope *)&local_e0);
    pTVar23->InvocationListLockCount = pTVar23->InvocationListLockCount + 1;
    bVar18 = false;
    uVar24 = (pTVar23->InvocationList).ArrayNum - 1;
    if (-1 < (int)uVar24) {
      lVar29 = (longlong)(int)uVar24 << 4;
      bVar18 = false;
      do {
        uVar22 = 0;
        if ((int)uVar24 < (pTVar23->InvocationList).ArrayNum) {
          uVar22 = ~uVar24 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        pFVar7 = (pTVar23->InvocationList).AllocatorInstance.Data;
        if (((*(int *)(pFVar7 + lVar29 + 8) == 0) ||
            (plVar8 = *(longlong **)(pFVar7 + lVar29), plVar8 == (longlong *)0x0)) ||
           (cVar20 = (**(code **)(*plVar8 + 0x68))(), cVar20 == '\0')) {
          bVar18 = true;
        }
        lVar29 = lVar29 + -0x10;
        uVar24 = uVar24 - 1;
      } while (-1 < (int)uVar24);
    }
    pTVar23->InvocationListLockCount = pTVar23->InvocationListLockCount + -1;
    if (bVar18) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(pTVar23,false);
    }
    if (local_e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
    }
  }
  pFVar27 = pFVar30;
  if ((this->CloseRequest).Code == 0) {
    while (pTVar9 = ((this->ReceiveTextQueue).Tail)->NextNode, pTVar9 != (TNode *)0x0) {
      pTVar1 = &pTVar9->Item;
      pFVar28 = pFVar27;
      if ((TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_> *)&local_80 !=
          pTVar1) {
        pFVar28 = (FLwsReceiveBufferBinary *)pTVar1->Ptr;
        pTVar1->Ptr = (FLwsReceiveBufferText *)0x0;
        if (pFVar27 != (FLwsReceiveBufferBinary *)0x0) {
          pFVar7 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                    &(pFVar27->Payload).AllocatorInstance)->AllocatorInstance).Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          ::operator_delete(pFVar27,0x10);
        }
      }
      pTVar10 = (this->ReceiveTextQueue).Tail;
      (this->ReceiveTextQueue).Tail = pTVar9;
      if (pTVar1 != (TUniquePtr<FLwsReceiveBufferText,TDefaultDelete<FLwsReceiveBufferText>_> *)
                    &local_78) {
        pFVar11 = pTVar1->Ptr;
        pTVar1->Ptr = (FLwsReceiveBufferText *)0x0;
        if (pFVar11 != (FLwsReceiveBufferText *)0x0) {
          pFVar7 = (pFVar11->Text).Data.AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          ::operator_delete(pFVar11,0x10);
        }
      }
      if (pTVar10 != (TNode *)0x0) {
        pFVar11 = (pTVar10->Item).Ptr;
        if (pFVar11 != (FLwsReceiveBufferText *)0x0) {
          pFVar7 = (pFVar11->Text).Data.AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          ::operator_delete(pFVar11,0x10);
        }
        ::operator_delete(pTVar10,0x10);
      }
      pTVar23 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                (**(code **)(this->_padding_ + 0x50))(this);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar23,
                 (FWriteAccessScope *)&local_c8);
      pTVar23->InvocationListLockCount = pTVar23->InvocationListLockCount + 1;
      bVar18 = false;
      uVar24 = (pTVar23->InvocationList).ArrayNum - 1;
      if (-1 < (int)uVar24) {
        lVar29 = (longlong)(int)uVar24 << 4;
        bVar18 = false;
        do {
          uVar22 = 0;
          if ((int)uVar24 < (pTVar23->InvocationList).ArrayNum) {
            uVar22 = ~uVar24 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          pFVar7 = (pTVar23->InvocationList).AllocatorInstance.Data;
          if (((*(int *)(pFVar7 + lVar29 + 8) == 0) ||
              (plVar8 = *(longlong **)(pFVar7 + lVar29), plVar8 == (longlong *)0x0)) ||
             (cVar20 = (**(code **)(*plVar8 + 0x68))(), cVar20 == '\0')) {
            bVar18 = true;
          }
          lVar29 = lVar29 + -0x10;
          uVar24 = uVar24 - 1;
        } while (-1 < (int)uVar24);
      }
      pTVar23->InvocationListLockCount = pTVar23->InvocationListLockCount + -1;
      if (bVar18) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(pTVar23,false);
      }
      pFVar27 = pFVar28;
      if (local_c8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
      }
    }
    local_res20 = (FLwsReceiveBufferBinary *)0x0;
    while( true ) {
      pFVar26 = (FLwsReceiveBufferBinaryFragment *)0x0;
      pTVar12 = ((this->ReceiveBinaryQueue).Tail)->NextNode;
      if (pTVar12 == (TNode *)0x0) break;
      pTVar2 = &pTVar12->Item;
      pFVar28 = pFVar30;
      if ((TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_> *)&local_70
          != pTVar2) {
        pFVar28 = pTVar2->Ptr;
        pTVar2->Ptr = (FLwsReceiveBufferBinary *)0x0;
        local_res20 = pFVar28;
        if (pFVar30 != (FLwsReceiveBufferBinary *)0x0) {
          pFVar7 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                    &(pFVar30->Payload).AllocatorInstance)->AllocatorInstance).Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          ::operator_delete(pFVar30,0x18);
        }
      }
      pTVar13 = (this->ReceiveBinaryQueue).Tail;
      (this->ReceiveBinaryQueue).Tail = pTVar12;
      if (pTVar2 != (TUniquePtr<FLwsReceiveBufferBinary,TDefaultDelete<FLwsReceiveBufferBinary>_> *)
                    &local_68) {
        pFVar30 = pTVar2->Ptr;
        pTVar2->Ptr = (FLwsReceiveBufferBinary *)0x0;
        if (pFVar30 != (FLwsReceiveBufferBinary *)0x0) {
          pFVar7 = (pFVar30->Payload).AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          ::operator_delete(pFVar30,0x18);
        }
      }
      if (pTVar13 != (TNode *)0x0) {
        pFVar30 = (pTVar13->Item).Ptr;
        if (pFVar30 != (FLwsReceiveBufferBinary *)0x0) {
          pFVar7 = (pFVar30->Payload).AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          ::operator_delete(pFVar30,0x18);
        }
        ::operator_delete(pTVar13,0x10);
      }
      pTVar23 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                (**(code **)(this->_padding_ + 0x60))(this);
      iVar5 = pFVar28->BytesRemaining;
      iVar6 = (pFVar28->Payload).ArrayNum;
      pFVar7 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                &(pFVar28->Payload).AllocatorInstance)->AllocatorInstance).Data;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar23,
                 (FWriteAccessScope *)&local_b0);
      pTVar23->InvocationListLockCount = pTVar23->InvocationListLockCount + 1;
      bVar18 = false;
      uVar24 = (pTVar23->InvocationList).ArrayNum - 1;
      pFVar30 = pFVar28;
      if (-1 < (int)uVar24) {
        lVar29 = (longlong)(int)uVar24 << 4;
        bVar18 = false;
        do {
          uVar22 = 0;
          if ((int)uVar24 < (pTVar23->InvocationList).ArrayNum) {
            uVar22 = ~uVar24 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          pFVar14 = (pTVar23->InvocationList).AllocatorInstance.Data;
          if (((*(int *)(pFVar14 + lVar29 + 8) == 0) ||
              (plVar8 = *(longlong **)(pFVar14 + lVar29), plVar8 == (longlong *)0x0)) ||
             (cVar20 = (**(code **)(*plVar8 + 0x68))(plVar8,pFVar7,(longlong)iVar6,(longlong)iVar5),
             cVar20 == '\0')) {
            bVar18 = true;
          }
          lVar29 = lVar29 + -0x10;
          uVar24 = uVar24 - 1;
          pFVar30 = local_res20;
        } while (-1 < (int)uVar24);
      }
      pTVar23->InvocationListLockCount = pTVar23->InvocationListLockCount + -1;
      if (bVar18) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(pTVar23,false);
      }
      if (local_b0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
      }
    }
    local_f8 = (FLwsReceiveBufferBinaryFragment *)0x0;
    while (pTVar15 = ((this->ReceiveBinaryFragmentQueue).Tail)->NextNode, pTVar15 != (TNode *)0x0) {
      pTVar3 = &pTVar15->Item;
      pFVar25 = pFVar26;
      if ((TUniquePtr<FLwsReceiveBufferBinaryFragment,TDefaultDelete<FLwsReceiveBufferBinaryFragment>_>
           *)&local_60 != pTVar3) {
        pFVar25 = pTVar3->Ptr;
        pTVar3->Ptr = (FLwsReceiveBufferBinaryFragment *)0x0;
        local_f8 = pFVar25;
        if (pFVar26 != (FLwsReceiveBufferBinaryFragment *)0x0) {
          pFVar7 = (pFVar26->Payload).AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          ::operator_delete(pFVar26,0x18);
        }
      }
      pTVar16 = (this->ReceiveBinaryFragmentQueue).Tail;
      (this->ReceiveBinaryFragmentQueue).Tail = pTVar15;
      if (pTVar3 != (TUniquePtr<FLwsReceiveBufferBinaryFragment,TDefaultDelete<FLwsReceiveBufferBinaryFragment>_>
                     *)local_58) {
        pFVar26 = pTVar3->Ptr;
        pTVar3->Ptr = (FLwsReceiveBufferBinaryFragment *)0x0;
        if (pFVar26 != (FLwsReceiveBufferBinaryFragment *)0x0) {
          pFVar7 = (pFVar26->Payload).AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          ::operator_delete(pFVar26,0x18);
        }
      }
      if (pTVar16 != (TNode *)0x0) {
        pFVar26 = (pTVar16->Item).Ptr;
        if (pFVar26 != (FLwsReceiveBufferBinaryFragment *)0x0) {
          pFVar7 = (pFVar26->Payload).AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          ::operator_delete(pFVar26,0x18);
        }
        ::operator_delete(pTVar16,0x10);
      }
      pTVar23 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                (**(code **)(this->_padding_ + 0x58))(this);
      bVar18 = pFVar25->bIsLastFragment;
      iVar5 = (pFVar25->Payload).ArrayNum;
      pFVar7 = (pFVar25->Payload).AllocatorInstance.Data;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar23,
                 (FWriteAccessScope *)&local_98);
      pTVar23->InvocationListLockCount = pTVar23->InvocationListLockCount + 1;
      bVar19 = false;
      uVar24 = (pTVar23->InvocationList).ArrayNum - 1;
      pFVar26 = pFVar25;
      if (-1 < (int)uVar24) {
        lVar29 = (longlong)(int)uVar24 << 4;
        bVar19 = false;
        do {
          uVar22 = 0;
          if ((int)uVar24 < (pTVar23->InvocationList).ArrayNum) {
            uVar22 = ~uVar24 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          pFVar14 = (pTVar23->InvocationList).AllocatorInstance.Data;
          if (((*(int *)(pFVar14 + lVar29 + 8) == 0) ||
              (plVar8 = *(longlong **)(pFVar14 + lVar29), plVar8 == (longlong *)0x0)) ||
             (cVar20 = (**(code **)(*plVar8 + 0x68))(plVar8,pFVar7,(longlong)iVar5,bVar18),
             cVar20 == '\0')) {
            bVar19 = true;
          }
          lVar29 = lVar29 + -0x10;
          uVar24 = uVar24 - 1;
          pFVar26 = local_f8;
        } while (-1 < (int)uVar24);
      }
      pTVar23->InvocationListLockCount = pTVar23->InvocationListLockCount + -1;
      if (bVar19) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(pTVar23,false);
      }
      if (local_98.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
      }
    }
    if (pFVar26 != (FLwsReceiveBufferBinaryFragment *)0x0) {
      pFVar7 = (pFVar26->Payload).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      ::operator_delete(pFVar26,0x18);
    }
    if (local_res20 != (FLwsReceiveBufferBinary *)0x0) {
      pFVar7 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                &(local_res20->Payload).AllocatorInstance)->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      ::operator_delete(local_res20,0x18);
    }
    if (pFVar27 != (FLwsReceiveBufferBinary *)0x0) {
      pFVar7 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                &(pFVar27->Payload).AllocatorInstance)->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      ::operator_delete(pFVar27,0x10);
    }
  }
  return;
}

// IsConnected @ 14b3fd700

bool __thiscall FLwsWebSocket::IsConnected(FLwsWebSocket *this)

{
  if ((this->LastGameThreadState != Connected) && (this->LastGameThreadState != ClosingByRequest)) {
    return false;
  }
  return true;
}

// LwsCallback @ 14b3fd750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FLwsWebSocket::LwsCallback
          (FLwsWebSocket *this,lws *param_1,lws_callback_reasons param_2,void *param_3,
          ulong64 param_4)

{
  FWindowsRecursiveMutex *pFVar1;
  char *pcVar2;
  EState EVar3;
  int iVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  void *pvVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  FLwsReceiveBufferBinary *pFVar18;
  TNode *pTVar19;
  FLwsReceiveBufferBinaryFragment *pFVar20;
  TNode *pTVar21;
  FLwsReceiveBufferBinary *pFVar22;
  FLwsReceiveBufferBinary *pFVar23;
  TNode *pTVar24;
  size_t sVar25;
  FLwsWebSocketsManager *pFVar26;
  FSslModule *this_00;
  ISslCertificateManager *pIVar27;
  ulonglong uVar28;
  ForAnyElementType FVar29;
  FScriptContainerElement *pFVar30;
  wchar_t *pwVar31;
  FScriptContainerElement *pFVar32;
  int *piVar33;
  ushort uVar34;
  FString *pFVar35;
  int iVar36;
  longlong lVar37;
  ENullTerminatedString EVar38;
  FScriptContainerElement *pFVar39;
  uint uVar40;
  FClosedReason *pFVar41;
  undefined1 auStackY_538 [32];
  FString local_4f0;
  FString local_4e0;
  FString local_4d0;
  FString local_4c0;
  FString local_4b0;
  int local_4a0;
  longlong local_498;
  FString local_490;
  FScriptContainerElement *local_478;
  int iStack_470;
  undefined4 uStack_46c;
  FString local_468;
  TStringView<wchar_t> local_458;
  FScriptContainerElement local_448 [128];
  ForAnyElementType local_3c8;
  FScriptContainerElement *local_3c0;
  int local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_288;
  TStringConversion<FUTF8ToTCHAR_Convert,128> local_168;
  ulonglong local_48;
  
  pvVar11 = ThreadLocalStoragePointer;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_538;
  iVar17 = (int)param_4;
  switch(param_2) {
  case LWS_CALLBACK_CLIENT_CONNECTION_ERROR:
    this->LwsConnection = (lws *)0x0;
    TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
              (&local_168,param_3,iVar17);
    ::FString::ConstructFromPtrSize(&local_4c0,local_168.Ptr,local_168.StringLength);
    bVar13 = false;
    if (5 < (byte)LogWebSockets._0_1_) {
      ToString(this->State);
      ToString(Error);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    }
    pFVar1 = &this->StateLock;
    if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      iVar17 = (*pcVar10)();
      return iVar17;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    EVar3 = this->State;
    if ((EVar3 == Connected) || (EVar3 == ClosingByRequest)) {
      this->State = Closed;
      (this->ClosedReason).bWasClean = false;
      (this->ClosedReason).CloseStatus = 0x3ee;
    }
    else {
      if (EVar3 == Closed) goto LAB_14b3fe462;
      this->State = Error;
    }
    bVar13 = true;
LAB_14b3fe462:
    pFVar41 = &this->ClosedReason;
    if (pFVar41 != (FClosedReason *)&local_4c0) {
      pFVar9 = (pFVar41->Reason).Data.AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      (pFVar41->Reason).Data.AllocatorInstance.Data = local_4c0.Data.AllocatorInstance.Data;
      (this->ClosedReason).Reason.Data.ArrayNum = local_4c0.Data.ArrayNum;
      (this->ClosedReason).Reason.Data.ArrayMax = local_4c0.Data.ArrayMax;
      local_4c0.Data.ArrayNum = 0;
      local_4c0.Data.ArrayMax = 0;
      local_4c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    }
    if (bVar13) {
      FEmbeddedCommunication::WakeGameThread();
    }
    if (local_4c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c0.Data.AllocatorInstance.Data);
    }
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    return -1;
  case LWS_CALLBACK_CLIENT_ESTABLISHED:
    EVar3 = this->State;
    pFVar1 = &this->StateLock;
    if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      iVar17 = (*pcVar10)();
      return iVar17;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    this->State = Connected;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    }
    if (5 < (byte)LogWebSockets._0_1_) {
      ToString(EVar3);
      ToString(this->State);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    }
    pTVar5 = (this->SendQueue).Tail;
    this->LwsConnection = param_1;
    pTVar5 = pTVar5->NextNode;
    this->bWasSendQueueEmpty = pTVar5 == (TNode *)0x0;
    if (pTVar5 != (TNode *)0x0) {
      lws_callback_on_writable(this->LwsConnection);
    }
    break;
  case LWS_CALLBACK_CLOSED:
    EVar3 = this->State;
    if ((EVar3 != Connected) && (EVar3 != ClosingByRequest)) {
      if ((byte)LogWebSockets._0_1_ < 6) {
        return 0;
      }
      ToString(Closed);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
      return 0;
    }
    uVar28 = (ulonglong)_tls_index;
    this->LwsConnection = (lws *)0x0;
    piVar33 = (int *)(*(longlong *)((longlong)pvVar11 + uVar28 * 8) + 0x9d4c);
    if ((*piVar33 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FString::FString(&LocalInitiatedReason,L"Successfully closed connection to our peer");
      atexit(`FLwsWebSocket::LwsCallback'::__l193::
             _dynamic_atexit_destructor_for__LocalInitiatedReason__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar35 = &PeerInitiatedReason;
    if ((*piVar33 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FString::FString(&PeerInitiatedReason,L"Connection closed by peer");
      atexit(`FLwsWebSocket::LwsCallback'::__l193::
             _dynamic_atexit_destructor_for__PeerInitiatedReason__);
      _Init_thread_footer(&::_TSS1);
    }
    if (EVar3 == ClosingByRequest) {
      pFVar35 = &LocalInitiatedReason;
    }
    ::FString::FString(&local_4d0,pFVar35);
    if (5 < (byte)LogWebSockets._0_1_) {
      ToString(this->State);
      ToString(Closed);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    }
    pFVar1 = &this->StateLock;
    if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      iVar17 = (*pcVar10)();
      return iVar17;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    this->State = Closed;
    pFVar41 = &this->ClosedReason;
    if (pFVar41 != (FClosedReason *)&local_4d0) {
      pFVar9 = (pFVar41->Reason).Data.AllocatorInstance.Data;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      (pFVar41->Reason).Data.AllocatorInstance.Data = local_4d0.Data.AllocatorInstance.Data;
      (this->ClosedReason).Reason.Data.ArrayNum = local_4d0.Data.ArrayNum;
      (this->ClosedReason).Reason.Data.ArrayMax = local_4d0.Data.ArrayMax;
      local_4d0.Data.ArrayNum = 0;
      local_4d0.Data.ArrayMax = 0;
      local_4d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    (this->ClosedReason).CloseStatus = 1000;
    (this->ClosedReason).bWasClean = EVar3 == ClosingByRequest;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    }
    FEmbeddedCommunication::WakeGameThread();
    FVar29.Data = local_4d0.Data.AllocatorInstance.Data;
    goto LAB_14b3fe33e;
  case LWS_CALLBACK_CLIENT_RECEIVE:
    local_498 = lws_remaining_packet_payload(param_1);
    iVar15 = lws_is_final_fragment(param_1);
    iVar36 = lws_frame_is_binary(param_1);
    local_4a0 = iVar36;
    if (6 < (byte)LogWebSockets._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    }
    pFVar23 = (FLwsReceiveBufferBinary *)0x0;
    bVar13 = false;
    if ((this->bWantsMessageEvents != false) && (iVar36 == 0)) {
      TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                (&local_288,param_3,iVar17);
      pFVar35 = &this->ReceiveBuffer;
      iVar4 = (this->ReceiveBuffer).Data.ArrayNum;
      iVar16 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar16 = 0;
      }
      if (this->MaxTextMessageBufferSize < (longlong)iVar16 + param_4) {
        ::FString::PrintfImpl
                  (&local_490,L"Received text message exceeded memory limit of %llu bytes");
        (**(code **)(this->_padding_ + 0x10))(this,0x3f1,&local_490);
        if (5 < (byte)LogWebSockets._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
        }
        if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_490.Data.AllocatorInstance.Data);
        }
      }
      else {
        ::FString::AppendChars(pFVar35,local_288.Ptr,local_288.StringLength);
        if ((local_498 == 0) && (iVar15 != 0)) {
          bVar13 = true;
          pFVar18 = ::operator_new(0x10);
          pFVar22 = pFVar23;
          if (pFVar18 != (FLwsReceiveBufferBinary *)0x0) {
            (pFVar18->Payload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar18->Payload).AllocatorInstance.Data = (pFVar35->Data).AllocatorInstance.Data;
            (pFVar35->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pFVar18->Payload).ArrayNum = (this->ReceiveBuffer).Data.ArrayNum;
            (pFVar18->Payload).ArrayMax = (this->ReceiveBuffer).Data.ArrayMax;
            (this->ReceiveBuffer).Data.ArrayNum = 0;
            (this->ReceiveBuffer).Data.ArrayMax = 0;
            pFVar22 = pFVar18;
          }
          pTVar19 = ::operator_new(0x10);
          if (pTVar19 == (TNode *)0x0) {
            if (pFVar22 != (FLwsReceiveBufferBinary *)0x0) {
              pFVar9 = (pFVar22->Payload).AllocatorInstance.Data;
              if (pFVar9 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar9);
              }
              ::operator_delete(pFVar22,0x10);
            }
          }
          else {
            pTVar19->NextNode = (TNode *)0x0;
            (pTVar19->Item).Ptr = (FLwsReceiveBufferText *)pFVar22;
            pTVar6 = (this->ReceiveTextQueue).Head;
            (this->ReceiveTextQueue).Head = pTVar19;
            pTVar6->NextNode = pTVar19;
          }
          ::FString::Empty(pFVar35);
          iVar36 = local_4a0;
        }
      }
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
    if ((this->bWantsBinaryMessageEvents != false) && (iVar36 != 0)) {
      bVar13 = true;
      if ((iVar15 == 0) || (local_498 != 0)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      pFVar20 = ::operator_new(0x18);
      if (pFVar20 == (FLwsReceiveBufferBinaryFragment *)0x0) {
        pFVar20 = (FLwsReceiveBufferBinaryFragment *)0x0;
      }
      else {
        (pFVar20->Payload).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar20->Payload).ArrayNum = 0;
        (pFVar20->Payload).ArrayMax = 0;
        pFVar20->bIsLastFragment = bVar12;
        if ((param_3 == (void *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Data",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocket.cpp"
                                ,0x34,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          iVar17 = (*pcVar10)();
          return iVar17;
        }
        if ((iVar17 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Size >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocket.cpp"
                                ,0x35,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          iVar17 = (*pcVar10)();
          return iVar17;
        }
        if (((param_3 == (void *)0x0) && (iVar17 != 0)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9c1,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          iVar17 = (*pcVar10)();
          return iVar17;
        }
        iVar36 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (1,1,iVar17,(ForAnyElementType *)pFVar20,&(pFVar20->Payload).ArrayNum,
                            &(pFVar20->Payload).ArrayMax);
        if (iVar17 != 0) {
          memcpy((pFVar20->Payload).AllocatorInstance.Data + iVar36,param_3,(longlong)iVar17);
        }
      }
      pTVar21 = ::operator_new(0x10);
      if (pTVar21 == (TNode *)0x0) {
        if (pFVar20 != (FLwsReceiveBufferBinaryFragment *)0x0) {
          pFVar9 = (pFVar20->Payload).AllocatorInstance.Data;
          if (pFVar9 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar9);
          }
          ::operator_delete(pFVar20,0x18);
        }
      }
      else {
        pTVar21->NextNode = (TNode *)0x0;
        (pTVar21->Item).Ptr = pFVar20;
        pTVar7 = (this->ReceiveBinaryFragmentQueue).Head;
        (this->ReceiveBinaryFragmentQueue).Head = pTVar21;
        pTVar7->NextNode = pTVar21;
      }
    }
    if (this->bWantsRawMessageEvents == false) {
      if (!bVar13) {
        return 0;
      }
    }
    else {
      pFVar22 = ::operator_new(0x18);
      if (pFVar22 != (FLwsReceiveBufferBinary *)0x0) {
        pFVar23 = FLwsReceiveBufferBinary::FLwsReceiveBufferBinary
                            (pFVar22,param_3,iVar17,(int)local_498);
      }
      pTVar24 = ::operator_new(0x10);
      if (pTVar24 != (TNode *)0x0) {
        pTVar24->NextNode = (TNode *)0x0;
        (pTVar24->Item).Ptr = pFVar23;
        pTVar8 = (this->ReceiveBinaryQueue).Head;
        (this->ReceiveBinaryQueue).Head = pTVar24;
        pTVar8->NextNode = pTVar24;
        FEmbeddedCommunication::WakeGameThread();
        return 0;
      }
      if (pFVar23 != (FLwsReceiveBufferBinary *)0x0) {
        pFVar9 = (pFVar23->Payload).AllocatorInstance.Data;
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar9);
        }
        ::operator_delete(pFVar23,0x18);
        FEmbeddedCommunication::WakeGameThread();
        return 0;
      }
    }
    FEmbeddedCommunication::WakeGameThread();
    break;
  case LWS_CALLBACK_CLIENT_WRITEABLE:
  case LWS_CALLBACK_SERVER_WRITEABLE:
    if (this->State == ClosingByRequest) {
      pFVar1 = &this->StateLock;
      this->LwsConnection = (lws *)0x0;
      if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        iVar17 = (*pcVar10)();
        return iVar17;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      iVar17 = (this->CloseRequest).Code;
      pcVar2 = (this->CloseRequest).Reason;
      if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      }
      sVar25 = strlen(pcVar2);
      lws_close_reason(param_1,iVar17,pcVar2,(longlong)(int)sVar25);
      return -1;
    }
    if (this->State == Connected) {
      SendFromQueue(this);
    }
    break;
  case LWS_CALLBACK_CLIENT_APPEND_HANDSHAKE_HEADER:
    if ((this->UpgradeHeader).Data.ArrayNum < 2) {
      return 0;
    }
    pFVar9 = (this->UpgradeHeader).Data.AllocatorInstance.Data;
    pFVar39 = (FScriptContainerElement *)0x0;
    local_3c8.Data = (FScriptContainerElement *)0x0;
    if (pFVar9 == (FScriptContainerElement *)0x0) {
      local_3c0 = (FScriptContainerElement *)0x0;
      local_3b8 = 0;
    }
    else {
      sVar25 = wcslen((wchar_t *)pFVar9);
      local_3b8 = (int)sVar25;
      uVar40 = local_3b8 + 1;
      FVar29.Data = pFVar39;
      if (0x80 < uVar40) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3c8,0,uVar40,1);
        FVar29.Data = local_3c8.Data;
      }
      lVar37 = (longlong)(int)uVar40;
      pFVar32 = local_448;
      if (FVar29.Data != (FScriptContainerElement *)0x0) {
        pFVar32 = FVar29.Data;
      }
      bVar13 = false;
      pFVar30 = pFVar39;
      local_3c0 = pFVar32;
      if (0 < (int)uVar40) {
        do {
          uVar34 = *(ushort *)(pFVar9 + (longlong)pFVar30 * 2);
          pFVar32[(longlong)pFVar30] = SUB21(uVar34,0);
          pFVar30 = pFVar30 + 1;
          bVar13 = (bool)(bVar13 | 0x7f < uVar34);
        } while ((longlong)pFVar30 < lVar37);
        if (bVar13) {
          do {
            if (0x7f < *(ushort *)(pFVar9 + (longlong)pFVar39 * 2)) {
              pFVar39[(longlong)pFVar32] = (FScriptContainerElement)0x3f;
            }
            pFVar39 = pFVar39 + 1;
          } while ((longlong)pFVar39 < lVar37);
        }
      }
      if ((pFVar32 + lVar37 == (FScriptContainerElement *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Result",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                              ,0x25,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        iVar17 = (*pcVar10)();
        return iVar17;
      }
    }
    pcVar2 = *(char **)param_3;
    strncpy(pcVar2,(char *)local_3c0,param_4);
    pcVar2[param_4 - 1] = '\0';
    *(longlong *)param_3 = *(longlong *)param_3 + (longlong)local_3b8;
    FVar29.Data = local_3c8.Data;
LAB_14b3fe33e:
    if (FVar29.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar29.Data);
    }
    break;
  case LWS_CALLBACK_WSI_DESTROY:
    EVar3 = this->State;
    if (EVar3 == Connecting) {
      ::FString::FString(&local_4b0,L"Connection timed out");
      if (5 < (byte)LogWebSockets._0_1_) {
        ToString(this->State);
        ToString(Error);
        UE::Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u_FLwsWebSocket___1523d78c8,
                   (FLogCategoryBase *)&LogWebSockets);
      }
      pFVar1 = &this->StateLock;
      if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        iVar17 = (*pcVar10)();
        return iVar17;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      this->State = Error;
      pFVar41 = &this->ClosedReason;
      if (pFVar41 != (FClosedReason *)&local_4b0) {
        pFVar9 = (pFVar41->Reason).Data.AllocatorInstance.Data;
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar9);
        }
        (pFVar41->Reason).Data.AllocatorInstance.Data = local_4b0.Data.AllocatorInstance.Data;
        (this->ClosedReason).Reason.Data.ArrayNum = local_4b0.Data.ArrayNum;
        (this->ClosedReason).Reason.Data.ArrayMax = local_4b0.Data.ArrayMax;
        local_4b0.Data.ArrayNum = 0;
        local_4b0.Data.ArrayMax = 0;
        local_4b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      }
      FEmbeddedCommunication::WakeGameThread();
      if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
        this->LwsConnection = (lws *)0x0;
        return 0;
      }
    }
    else {
      if (EVar3 == Connected) {
        pFVar1 = &this->StateLock;
        if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mutex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                ,0x1b,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          iVar17 = (*pcVar10)();
          return iVar17;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        this->State = Closed;
        (this->ClosedReason).bWasClean = false;
        (this->ClosedReason).CloseStatus = 0x3ee;
        if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        }
        FEmbeddedCommunication::WakeGameThread();
      }
      else if (EVar3 == ClosingByRequest) {
        iVar17 = (this->CloseRequest).Code;
        uVar34 = 0x3f1;
        local_4e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4e0.Data.ArrayNum = 0;
        local_4e0.Data.ArrayMax = 0;
        pwVar31 = L"Received text message exceeded memory limit";
        if (iVar17 != 0x3f1) {
          pwVar31 = L"Successfully closed connection to our peer";
        }
        ::FString::operator=(&local_4e0,pwVar31);
        pFVar1 = &this->StateLock;
        if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mutex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                ,0x1b,L""), bVar13)) {
          pcVar10 = (code *)swi(3);
          iVar17 = (*pcVar10)();
          return iVar17;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        this->State = Closed;
        pFVar41 = &this->ClosedReason;
        if (pFVar41 != (FClosedReason *)&local_4e0) {
          pFVar9 = (pFVar41->Reason).Data.AllocatorInstance.Data;
          if (pFVar9 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar9);
          }
          (pFVar41->Reason).Data.AllocatorInstance.Data = local_4e0.Data.AllocatorInstance.Data;
          (this->ClosedReason).Reason.Data.ArrayNum = local_4e0.Data.ArrayNum;
          (this->ClosedReason).Reason.Data.ArrayMax = local_4e0.Data.ArrayMax;
          local_4e0.Data.ArrayNum = 0;
          local_4e0.Data.ArrayMax = 0;
          local_4e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        (this->ClosedReason).bWasClean = true;
        if (iVar17 != 0x3f1) {
          uVar34 = 1000;
        }
        (this->ClosedReason).CloseStatus = uVar34;
        if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        }
        FEmbeddedCommunication::WakeGameThread();
        if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
        }
      }
      if (5 < (byte)LogWebSockets._0_1_) {
        ToString(this->State);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
      }
    }
    this->LwsConnection = (lws *)0x0;
    break;
  case LWS_CALLBACK_WS_PEER_INITIATED_CLOSE:
    uVar34 = *(ushort *)param_3;
    local_4f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4f0.Data.ArrayNum = 0;
    local_4f0.Data.ArrayMax = 0;
    iVar36 = 0;
    if (2 < param_4) {
      pcVar2 = (char *)((longlong)param_3 + 2);
      local_3a8._padding_ = 0;
      iVar36 = iVar17 + -2;
      if (pcVar2 == (char *)0x0) {
        local_3a8.StringLength = 0;
        local_3a8.Ptr = (wchar_t *)0x0;
      }
      else {
        EVar38 = No;
        if ((0 < iVar36) && (pcVar2[(longlong)iVar36 + -1] == '\0')) {
          EVar38 = Yes;
          iVar36 = iVar17 + -3;
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3a8,pcVar2,iVar36,EVar38);
      }
      ::FString::AppendChars(&local_4f0,local_3a8.Ptr,local_3a8.StringLength);
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
      iVar36 = local_4f0.Data.ArrayNum;
    }
    if ((this->State == Connected) || (this->State == ClosingByRequest)) {
      this->LwsConnection = (lws *)0x0;
      if (iVar36 < 2) {
        ::FString::operator=(&local_4f0,L"Peer did not specify a reason for initiating the closing")
        ;
      }
      if (5 < (byte)LogWebSockets._0_1_) {
        ToString(this->State);
        ToString(Closed);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
      }
      pFVar1 = &this->StateLock;
      if ((pFVar1 == (FWindowsRecursiveMutex *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mutex",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                              ,0x1b,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        iVar17 = (*pcVar10)();
        return iVar17;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      this->State = Closed;
      pFVar41 = &this->ClosedReason;
      if (pFVar41 != (FClosedReason *)&local_4f0) {
        pFVar9 = (pFVar41->Reason).Data.AllocatorInstance.Data;
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar9);
        }
        (pFVar41->Reason).Data.AllocatorInstance.Data = local_4f0.Data.AllocatorInstance.Data;
        (this->ClosedReason).Reason.Data.ArrayNum = local_4f0.Data.ArrayNum;
        (this->ClosedReason).Reason.Data.ArrayMax = local_4f0.Data.ArrayMax;
        local_4f0.Data.ArrayNum = 0;
        local_4f0.Data.ArrayMax = 0;
        local_4f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      (this->ClosedReason).CloseStatus = uVar34 >> 8 | uVar34 << 8;
      (this->ClosedReason).bWasClean = true;
      if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      }
      FEmbeddedCommunication::WakeGameThread();
    }
    else if (5 < (byte)LogWebSockets._0_1_) {
      ToString(Closed);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    }
    if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
    }
    return 1;
  case LWS_CALLBACK_OPENSSL_PERFORM_SERVER_CERT_VERIFICATION:
    iVar36 = 1;
    pFVar26 = FLwsWebSocketsManager::Get();
    if (pFVar26->bDisableCertValidation == false) {
      iVar36 = iVar17;
      if (iVar17 == 1) {
        local_478 = (this->Url).Data.AllocatorInstance.Data;
        iVar36 = (this->Url).Data.ArrayNum;
        iStack_470 = iVar36 + -1;
        if (iVar36 == 0) {
          iStack_470 = 0;
        }
        local_458._12_4_ = uStack_46c;
        local_458.Size = iStack_470;
        local_458.DataPtr = (wchar_t *)local_478;
        FGenericPlatformHttp::GetUrlDomain(&local_468,&local_458);
        this_00 = FSslModule::Get();
        pIVar27 = FSslModule::GetCertificateManager(this_00);
        cVar14 = (**(code **)((longlong)*pIVar27 + 0x40))(pIVar27,param_3,&local_468);
        iVar36 = 0;
        if (cVar14 != '\0') {
          iVar36 = iVar17;
        }
        if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_468.Data.AllocatorInstance.Data);
          return (uint)(iVar36 != 1);
        }
      }
    }
    else {
      X509_STORE_CTX_set_error(param_3,0);
    }
    return (uint)(iVar36 != 1);
  }
  return 0;
}

// LwsThreadInitialize @ 14b3feb70

bool __thiscall FLwsWebSocket::LwsThreadInitialize(FLwsWebSocket *this,lws_context *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->State != StartConnecting) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State == EState::StartConnecting",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocket.cpp"
                       ,0x28f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  ConnectInternal(this,param_1);
  return this->State == Connecting;
}

// LwsThreadTick @ 14b3febd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLwsWebSocket::LwsThreadTick(FLwsWebSocket *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TNode *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->State == Connected) {
    if ((this->LwsConnection == (lws *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LwsConnection",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocket.cpp"
                           ,0x298,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lpCriticalSection = &this->StateLock;
    if ((lpCriticalSection == (FWindowsRecursiveMutex *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->CloseRequest).Code != 0) {
      this->State = ClosingByRequest;
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    if (this->State == ClosingByRequest) {
      if (5 < (byte)LogWebSockets._0_1_) {
        ToString(Connected);
        ToString(ClosingByRequest);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
      }
      if (this->bWasSendQueueEmpty != false) {
        lws_callback_on_writable(this->LwsConnection);
        return;
      }
    }
    else {
      pTVar1 = ((this->SendQueue).Tail)->NextNode;
      if ((this->bWasSendQueueEmpty != false) && (pTVar1 != (TNode *)0x0)) {
        lws_callback_on_writable(this->LwsConnection);
      }
      this->bWasSendQueueEmpty = pTVar1 == (TNode *)0x0;
    }
  }
  return;
}

// OnBinaryMessage @ 14b3fed10

FWebSocketBinaryMessageEvent * __thiscall FLwsWebSocket::OnBinaryMessage(FLwsWebSocket *this)

{
  return &this->BinaryMessageEvent;
}

// OnClosed @ 14b3fed20

FWebSocketClosedEvent * __thiscall FLwsWebSocket::OnClosed(FLwsWebSocket *this)

{
  return &this->ClosedEvent;
}

// OnConnected @ 14b3fed50

FWebSocketConnectedEvent * __thiscall FLwsWebSocket::OnConnected(FLwsWebSocket *this)

{
  return &this->ConnectedEvent;
}

// OnConnectionError @ 14b3fed60

FWebSocketConnectionErrorEvent * __thiscall FLwsWebSocket::OnConnectionError(FLwsWebSocket *this)

{
  return &this->ConnectionErrorEvent;
}

// OnMessage @ 14b3fed70

FWebSocketMessageEvent * __thiscall FLwsWebSocket::OnMessage(FLwsWebSocket *this)

{
  return &this->MessageEvent;
}

// OnMessageSent @ 14b3fed80

FWebSocketMessageSentEvent * __thiscall FLwsWebSocket::OnMessageSent(FLwsWebSocket *this)

{
  return &this->OnMessageSentEvent;
}

// OnRawMessage @ 14b3fed90

FWebSocketRawMessageEvent * __thiscall FLwsWebSocket::OnRawMessage(FLwsWebSocket *this)

{
  return &this->RawMessageEvent;
}

// Send @ 14b3feee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FLwsWebSocket::Send(FLwsWebSocket *this,FString *param_1)

{
  uint uVar1;
  size_t sVar2;
  TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *this_00;
  wchar_t *_Str;
  uint uVar3;
  undefined1 auStack_e8 [32];
  FScriptContainerElement local_c8 [128];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    if ((FScriptContainerElement *)_Str == (FScriptContainerElement *)0x0) {
      local_40 = (FScriptContainerElement *)0x0;
      local_38 = 0;
      goto LAB_14b3fefef;
    }
  }
  local_48.Data = (FScriptContainerElement *)0x0;
  sVar2 = wcslen(_Str);
  local_38 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar2);
  uVar1 = local_38 + 1;
  uVar3 = uVar1;
  if (uVar1 < 0x81) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      uVar3 = 0;
      goto LAB_14b3fef91;
    }
  }
  else {
LAB_14b3fef91:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar3,1);
  }
  local_40 = local_c8;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    local_40 = local_48.Data;
  }
  UE::Core::Private::Convert((uchar *)local_40,uVar1,_Str,(int)sVar2 + 1);
LAB_14b3fefef:
  (**(code **)(this->_padding_ + 0x20))(this,local_40,(longlong)local_38,0);
  this_00 = (TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *)
            (**(code **)(this->_padding_ + 0x68))(this);
  TMulticastDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::Broadcast
            (this_00,param_1);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// Send @ 14b3ff060

void __thiscall FLwsWebSocket::Send(FLwsWebSocket *this,void *param_1,ulong64 param_2,bool param_3)

{
  TNode *pTVar1;
  FLwsSendBuffer *pFVar2;
  TNode *pTVar3;
  FLwsWebSocketsManager *pFVar4;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 == (FLwsSendBuffer *)0x0) {
    pFVar2 = (FLwsSendBuffer *)0x0;
  }
  else {
    pFVar2 = FLwsSendBuffer::FLwsSendBuffer(pFVar2,param_1,param_2,param_3);
  }
  pTVar3 = ::operator_new(0x10);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    pTVar3->Item = pFVar2;
    pTVar1 = (this->SendQueue).Head;
    (this->SendQueue).Head = pTVar3;
    pTVar1->NextNode = pTVar3;
  }
  pFVar4 = FLwsWebSocketsManager::Get();
  if (pFVar4->bPollService == false) {
    lws_cancel_service(pFVar4->LwsContext);
  }
  return;
}

// SendFromQueue @ 14b3ff110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLwsWebSocket::SendFromQueue(FLwsWebSocket *this)

{
  int iVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FLwsSendBuffer *pFVar8;
  undefined1 uVar9;
  
  if ((this->LwsConnection == (lws *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LwsConnection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\WebSockets\\Private\\Lws\\LwsWebSocket.cpp"
                         ,0xc1,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->SendQueue).Tail)->NextNode != (TNode *)0x0) {
    pFVar8 = ((this->SendQueue).Tail)->NextNode->Item;
    iVar1 = pFVar8->BytesWritten;
    if (iVar1 < 1) {
      uVar9 = pFVar8->bIsBinary != false;
    }
    else {
      uVar9 = 2;
    }
    iVar7 = lws_write(this->LwsConnection,(pFVar8->Payload).AllocatorInstance.Data + (iVar1 + 0x10),
                      (longlong)((pFVar8->Payload).ArrayNum - (iVar1 + 0x10)),uVar9);
    if (0 < iVar7) {
      pFVar8->BytesWritten = pFVar8->BytesWritten + iVar7;
    }
    if ((pFVar8->bHasError == false) && ((pFVar8->Payload).ArrayNum + -0x10 <= pFVar8->BytesWritten)
       ) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (iVar7 < 0) {
      if (2 < (byte)LogWebSockets._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
      }
    }
    else if ((iVar1 != pFVar8->BytesWritten) && (6 < (byte)LogWebSockets._0_1_)) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    }
    if ((bVar6) || (iVar7 < 0)) {
      pTVar2 = ((this->SendQueue).Tail)->NextNode;
      if (pTVar2 != (TNode *)0x0) {
        pFVar8 = pTVar2->Item;
        pTVar3 = (this->SendQueue).Tail;
        (this->SendQueue).Tail = pTVar2;
        pTVar2->Item = (FLwsSendBuffer *)0x0;
        ::operator_delete(pTVar3,0x10);
      }
      if (pFVar8 != (FLwsSendBuffer *)0x0) {
        pFVar4 = (pFVar8->Payload).AllocatorInstance.Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        ::operator_delete(pFVar8,0x20);
      }
    }
  }
  pTVar2 = ((this->SendQueue).Tail)->NextNode;
  this->bWasSendQueueEmpty = pTVar2 == (TNode *)0x0;
  if (pTVar2 == (TNode *)0x0) {
    return;
  }
  lws_callback_on_writable(this->LwsConnection);
  return;
}

// SetTextMessageMemoryLimit @ 14b3ff300

void __thiscall FLwsWebSocket::SetTextMessageMemoryLimit(FLwsWebSocket *this,ulong64 param_1)

{
  this->MaxTextMessageBufferSize = param_1;
  return;
}

// ToString @ 14b400370

wchar_t * __cdecl FLwsWebSocket::ToString(EState param_1)

{
  switch(param_1) {
  case None:
    return L"None";
  case StartConnecting:
    return L"StartConnecting";
  case Connecting:
    return L"Connecting";
  case Connected:
    return L"Connected";
  case ClosingByRequest:
    return L"ClosingByRequest";
  case Closed:
    return L"Closed";
  case Error:
    return L"Error";
  default:
    return L"Unknown";
  }
}

// WriteBuffer @ 14b400630

bool __thiscall FLwsWebSocket::WriteBuffer(FLwsWebSocket *this,FLwsSendBuffer *param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  if (param_1->BytesWritten < 1) {
    uVar2 = param_1->bIsBinary != false;
  }
  else {
    uVar2 = 2;
  }
  iVar1 = param_1->BytesWritten + 0x10;
  iVar1 = lws_write(this->LwsConnection,(param_1->Payload).AllocatorInstance.Data + iVar1,
                    (longlong)((param_1->Payload).ArrayNum - iVar1),uVar2);
  if (0 < iVar1) {
    param_1->BytesWritten = param_1->BytesWritten + iVar1;
  }
  return (bool)((byte)((uint)iVar1 >> 0x1f) ^ 1);
}

