// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CCSAIServicePlugin
// Functions: 18

// FCCSAITCPClient @ 14ac85a20

FCCSAITCPClient * __thiscall FCCSAITCPClient::FCCSAITCPClient(FCCSAITCPClient *this)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  FCCSAITCPClient *pFVar9;
  FScriptContainerElement *_Dst;
  int iVar10;
  
  pTVar8 = (TNode *)0x0;
  piVar1 = &(this->ReceiveBuffer).ArrayNum;
  this->Socket = (FSocket *)0x0;
  piVar2 = &(this->ReceiveBuffer).ArrayMax;
  (this->ServerIP).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)this = &___7FCCSAITCPClient__6B_;
  (this->ServerIP).Data.ArrayNum = 0;
  (this->ServerIP).Data.ArrayMax = 0;
  this->ServerPort = 0;
  this->NetworkThread = (FRunnableThread *)0x0;
  this->bShouldRun = (FThreadSafeBool)0x0;
  (this->ReceiveBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bAutoConnect = false;
  *piVar1 = 0;
  *piVar2 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SendQueueLock,4000);
  pTVar6 = ::operator_new(0x18);
  pTVar7 = pTVar8;
  if (pTVar6 != (TNode *)0x0) {
    pTVar6->NextNode = (TNode *)0x0;
    (pTVar6->Item).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar6->Item).ArrayNum = 0;
    (pTVar6->Item).ArrayMax = 0;
    pTVar6->NextNode = (TNode *)0x0;
    (pTVar6->Item).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar6->Item).ArrayNum = 0;
    (pTVar6->Item).ArrayMax = 0;
    pTVar7 = pTVar6;
  }
  (this->SendQueue).Tail = pTVar7;
  (this->SendQueue).Head = pTVar7;
  this->bIsSending = (FThreadSafeBool)0x0;
  (this->CurrentSendPacket).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentSendPacket).ArrayNum = 0;
  (this->CurrentSendPacket).ArrayMax = 0;
  this->SentBytes = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RecvQueueLock,4000);
  pTVar7 = ::operator_new(0x18);
  if (pTVar7 != (TNode *)0x0) {
    pTVar7->NextNode = (TNode *)0x0;
    (pTVar7->Item).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar7->Item).ArrayNum = 0;
    (pTVar7->Item).ArrayMax = 0;
    pTVar7->NextNode = (TNode *)0x0;
    (pTVar7->Item).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar7->Item).ArrayNum = 0;
    (pTVar7->Item).ArrayMax = 0;
    pTVar8 = pTVar7;
  }
  (this->RecvQueue).Tail = pTVar8;
  (this->RecvQueue).Head = pTVar8;
  (this->RecvBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RecvBuffer).ArrayNum = 0;
  (this->RecvBuffer).ArrayMax = 0;
  this->bIsConnected = (FThreadSafeBool)0x0;
  this->ConnectionRetryCount = 0;
  this->MaxPacketSize = 0xa00000;
  this->ReceiveBufferSize = 0x10000;
  this->MaxConnectionRetries = 100;
  this->ReconnectDelay = 1.0;
  iVar10 = *piVar1;
  if (iVar10 < 0x10000) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0x10000 - iVar10,&(this->ReceiveBuffer).AllocatorInstance,piVar1,piVar2);
    memset((this->ReceiveBuffer).AllocatorInstance.Data + iVar5,0,(longlong)(0x10000 - iVar10));
  }
  else if (0x10000 < iVar10) {
    iVar10 = iVar10 + -0x10000;
    if (iVar10 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FCCSAITCPClient *)(*pcVar3)();
        return pFVar9;
      }
    }
    else if (iVar10 == 0) {
      return this;
    }
    _Dst = (this->ReceiveBuffer).AllocatorInstance.Data + 0x10000;
    iVar5 = (*piVar1 - iVar10) + -0x10000;
    if (iVar5 != 0) {
      memmove(_Dst,_Dst + iVar10,(longlong)iVar5);
    }
    *piVar1 = *piVar1 - iVar10;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,&(this->ReceiveBuffer).AllocatorInstance,*piVar1,piVar2);
  }
  return this;
}

// ~FCCSAITCPClient @ 14ac85d40

void __thiscall FCCSAITCPClient::~FCCSAITCPClient(FCCSAITCPClient *this)

{
  FScriptContainerElement *pFVar1;
  TNode *pTVar2;
  
  *(undefined ***)this = &___7FCCSAITCPClient__6B_;
  Disconnect(this);
  pFVar1 = (this->RecvBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->RecvQueue).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->RecvQueue).Tail = pTVar2->NextNode;
    pFVar1 = (pTVar2->Item).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pTVar2,0x18);
    pTVar2 = (this->RecvQueue).Tail;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->RecvQueueLock);
  pFVar1 = (this->CurrentSendPacket).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->SendQueue).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->SendQueue).Tail = pTVar2->NextNode;
    pFVar1 = (pTVar2->Item).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pTVar2,0x18);
    pTVar2 = (this->SendQueue).Tail;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SendQueueLock);
  pFVar1 = (this->ReceiveBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ServerIP).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7FRunnable__6B_;
  return;
}

// Connect @ 14ac861e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FCCSAITCPClient::Connect(FCCSAITCPClient *this)

{
  FSocket **ppFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  FNameEntryId FVar7;
  FName *pFVar8;
  ISocketSubsystem *pIVar9;
  undefined4 extraout_var;
  FSocket *pFVar10;
  FSocket **ppFVar11;
  undefined4 local_res10 [2];
  FIPv4Address_u_0 local_res18 [2];
  undefined1 local_res20 [8];
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  FName local_78;
  longlong *local_70;
  TReferenceControllerBase<1> *local_68;
  FString local_60 [2];
  
  if ((this->Socket == (FSocket *)0x0) ||
     (iVar6 = (**(code **)(this->Socket->_padding_ + 0x88))(), iVar6 != 1)) {
    ppFVar1 = &this->Socket;
    bVar3 = FIPv4Address::Parse(&this->ServerIP,(FIPv4Address *)&local_res18[0]._s_0);
    if (bVar3) {
      pFVar8 = ::FName::FName(&local_78,L"WINDOWS");
      pIVar9 = ISocketSubsystem::Get(pFVar8);
      if (pIVar9 == (ISocketSubsystem *)0x0) {
        if (1 < (byte)LogTemp._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          return false;
        }
      }
      else {
        if (this->Socket != (FSocket *)0x0) {
          (**(code **)(this->Socket->_padding_ + 0x10))();
          (**(code **)(pIVar9->_padding_ + 0x38))(pIVar9,*ppFVar1);
          *ppFVar1 = (FSocket *)0x0;
        }
        pcVar2 = *(code **)(pIVar9->_padding_ + 0x28);
        ::FString::FString(local_60,L"CCSAITCPClient");
        FVar7 = FNameEntryId::FromValidEName((EName)local_res20);
        local_88 = *(undefined4 *)CONCAT44(extraout_var,FVar7.Value);
        local_84 = 0;
        pFVar10 = (FSocket *)(*pcVar2)(pIVar9,&local_88,local_60,1);
        *ppFVar1 = pFVar10;
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
        ppFVar11 = &this->Socket;
        pFVar10 = *ppFVar1;
        if (pFVar10 != (FSocket *)0x0) {
          (**(code **)(pFVar10->_padding_ + 0xb0))(pFVar10,1);
          (**(code **)((*ppFVar11)->_padding_ + 0xa0))(*ppFVar11,1);
          (**(code **)((*ppFVar11)->_padding_ + 0xf0))(*ppFVar11,1);
          (**(code **)((*ppFVar11)->_padding_ + 0x100))(*ppFVar11,1);
          (**(code **)((*ppFVar11)->_padding_ + 0xf8))(*ppFVar11,0,0);
          local_res10[0] = 0x40000;
          (**(code **)((*ppFVar11)->_padding_ + 0x110))(*ppFVar11,0x40000,local_res10);
          (**(code **)((*ppFVar11)->_padding_ + 0x108))(*ppFVar11,local_res10[0],local_res10);
          iVar6 = this->ServerPort;
          pFVar10 = *ppFVar11;
          local_80 = *(code **)(pFVar10->_padding_ + 0x28);
          if ((FIPv4Endpoint::CachedSocketSubsystem == (ISocketSubsystem *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("CachedSocketSubsystem != nullptr && \"Networking module not loaded and initialized\""
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Networking\\Public\\Interfaces\\IPv4\\IPv4Endpoint.h"
                                 ,0x72,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          (**(code **)(FIPv4Endpoint::CachedSocketSubsystem->_padding_ + 0x90))
                    (FIPv4Endpoint::CachedSocketSubsystem,&local_70);
          (**(code **)(*local_70 + 0x18))(local_70,local_res18[0].Value);
          (**(code **)(*local_70 + 0x28))(local_70,(short)iVar6);
          cVar5 = (*local_80)(pFVar10,local_70);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68);
          if (((cVar5 == '\0') &&
              (iVar6 = (**(code **)(pIVar9->_padding_ + 0xb8))(pIVar9), iVar6 != 0x2733)) &&
             (iVar6 != 0)) {
            if (1 < (byte)LogTemp._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
            }
            (**(code **)(this->Socket->_padding_ + 0x10))();
            (**(code **)(pIVar9->_padding_ + 0x38))(pIVar9,this->Socket);
            this->Socket = (FSocket *)0x0;
            return false;
          }
          iVar6 = (**(code **)((*ppFVar11)->_padding_ + 0x88))();
          if (iVar6 == 1) {
            LOCK();
            this->bIsConnected = (FThreadSafeBool)0x1;
            UNLOCK();
          }
          if (4 < (byte)LogTemp._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          }
          goto LAB_14ac86565;
        }
        if (1 < (byte)LogTemp._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
      }
    }
    else if (1 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      return false;
    }
    bVar3 = false;
  }
  else {
    LOCK();
    this->bIsConnected = (FThreadSafeBool)0x1;
    UNLOCK();
LAB_14ac86565:
    bVar3 = true;
  }
  return bVar3;
}

// ContinueSendingCurrentPacket @ 14ac86a30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FCCSAITCPClient::ContinueSendingCurrentPacket(FCCSAITCPClient *this)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  FName *pFVar5;
  ISocketSubsystem *pIVar6;
  int local_res8 [2];
  FName local_res10;
  
  iVar2 = (this->CurrentSendPacket).ArrayNum;
  local_res8[0] = 0;
  if (this->Socket != (FSocket *)0x0) {
    if (this->bIsConnected != (FThreadSafeBool)0x0) {
      cVar3 = (**(code **)(this->Socket->_padding_ + 0x60))
                        (this->Socket,
                         (this->CurrentSendPacket).AllocatorInstance.Data + this->SentBytes,
                         iVar2 - this->SentBytes,local_res8);
      if (cVar3 == '\0') {
        pFVar5 = ::FName::FName(&local_res10,L"WINDOWS");
        pIVar6 = ISocketSubsystem::Get(pFVar5);
        iVar4 = (**(code **)(pIVar6->_padding_ + 0xb8))(pIVar6);
        if (iVar4 != 0x2733) {
          if (1 < (byte)LogTemp._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          }
          LOCK();
          this->bIsConnected = (FThreadSafeBool)0x0;
          UNLOCK();
          return false;
        }
      }
    }
    if (0 < local_res8[0]) {
      this->SentBytes = this->SentBytes + local_res8[0];
    }
  }
  if (iVar2 <= this->SentBytes) {
    piVar1 = &(this->CurrentSendPacket).ArrayMax;
    (this->CurrentSendPacket).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->CurrentSendPacket).AllocatorInstance,0,piVar1);
    }
    this->SentBytes = 0;
  }
  return true;
}

// DequeueRecvPacket @ 14ac86c40

bool __thiscall
FCCSAITCPClient::DequeueRecvPacket
          (FCCSAITCPClient *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->RecvQueueLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar1 = ((this->RecvQueue).Tail)->NextNode != (TNode *)0x0;
  if (bVar1) {
    TQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,1>::Dequeue(&this->RecvQueue,param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar1;
}

// DequeueSendPacket @ 14ac86cc0

void __thiscall FCCSAITCPClient::DequeueSendPacket(FCCSAITCPClient *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SendQueueLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->SendQueue).Tail)->NextNode != (TNode *)0x0) {
      TQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,1>::Dequeue
                (&this->SendQueue,&this->CurrentSendPacket);
      this->SentBytes = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ac86d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Disconnect @ 14ac86d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCCSAITCPClient::Disconnect(FCCSAITCPClient *this)

{
  FWindowsRecursiveMutex *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FRunnableThread *pFVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  FScriptContainerElement *pFVar6;
  FName *pFVar7;
  ISocketSubsystem *pIVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FName local_res8;
  undefined8 local_68 [2];
  undefined8 local_58 [2];
  undefined8 local_48 [2];
  undefined8 local_38 [2];
  
  pFVar9 = (FScriptContainerElement *)0x0;
  if (this->NetworkThread != (FRunnableThread *)0x0) {
    LOCK();
    this->bShouldRun = (FThreadSafeBool)0x0;
    UNLOCK();
    (**(code **)(this->NetworkThread->_padding_ + 0x18))(this->NetworkThread,1);
    pFVar3 = this->NetworkThread;
    if (pFVar3 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
    }
    this->NetworkThread = (FRunnableThread *)0x0;
  }
  if (this->Socket != (FSocket *)0x0) {
    (**(code **)(this->Socket->_padding_ + 0x10))();
    pFVar7 = ::FName::FName(&local_res8,L"WINDOWS");
    pIVar8 = ISocketSubsystem::Get(pFVar7);
    if (pIVar8 != (ISocketSubsystem *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))(pIVar8,this->Socket);
    }
    this->Socket = (FSocket *)0x0;
  }
  pFVar1 = &this->SendQueueLock;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pTVar4 = ((this->SendQueue).Tail)->NextNode;
    pFVar10 = pFVar9;
    while (pTVar4 != (TNode *)0x0) {
      pTVar4 = ((this->SendQueue).Tail)->NextNode;
      if (pTVar4 != (TNode *)0x0) {
        pTVar2 = &pTVar4->Item;
        if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_68 != pTVar2) {
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          pFVar10 = (pTVar2->AllocatorInstance).Data;
          (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (pTVar4->Item).ArrayNum = 0;
          (pTVar4->Item).ArrayMax = 0;
        }
        pTVar5 = (this->SendQueue).Tail;
        (this->SendQueue).Tail = pTVar4;
        if (pTVar2 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_58) {
          pFVar6 = (pTVar2->AllocatorInstance).Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (pTVar4->Item).ArrayNum = 0;
          (pTVar4->Item).ArrayMax = 0;
        }
        if (pTVar5 != (TNode *)0x0) {
          pFVar6 = (pTVar5->Item).AllocatorInstance.Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          ::operator_delete(pTVar5,0x18);
        }
      }
      pTVar4 = ((this->SendQueue).Tail)->NextNode;
    }
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar1 = &this->RecvQueueLock;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      pTVar4 = ((this->RecvQueue).Tail)->NextNode;
      while (pTVar4 != (TNode *)0x0) {
        pTVar4 = ((this->RecvQueue).Tail)->NextNode;
        if (pTVar4 != (TNode *)0x0) {
          pTVar2 = &pTVar4->Item;
          if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_48 != pTVar2) {
            if (pFVar9 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar9);
            }
            pFVar9 = (pTVar2->AllocatorInstance).Data;
            (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            (pTVar4->Item).ArrayNum = 0;
            (pTVar4->Item).ArrayMax = 0;
          }
          pTVar5 = (this->RecvQueue).Tail;
          (this->RecvQueue).Tail = pTVar4;
          if (pTVar2 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_38) {
            pFVar10 = (pTVar2->AllocatorInstance).Data;
            if (pFVar10 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar10);
            }
            (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            (pTVar4->Item).ArrayNum = 0;
            (pTVar4->Item).ArrayMax = 0;
          }
          if (pTVar5 != (TNode *)0x0) {
            pFVar10 = (pTVar5->Item).AllocatorInstance.Data;
            if (pFVar10 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar10);
            }
            ::operator_delete(pTVar5,0x18);
          }
        }
        pTVar4 = ((this->RecvQueue).Tail)->NextNode;
      }
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar9);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      LOCK();
      this->bIsConnected = (FThreadSafeBool)0x0;
      UNLOCK();
      if (4 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// EnqueueRecvPacket @ 14ac870f0

void __thiscall
FCCSAITCPClient::EnqueueRecvPacket
          (FCCSAITCPClient *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  
  lpCriticalSection = &this->RecvQueueLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,1>::Enqueue(&this->RecvQueue,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// EnqueueSendPacket @ 14ac87160

void __thiscall
FCCSAITCPClient::EnqueueSendPacket
          (FCCSAITCPClient *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  
  lpCriticalSection = &this->SendQueueLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,1>::Enqueue(&this->SendQueue,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Exit @ 14ac871d0

void __thiscall FCCSAITCPClient::Exit(FCCSAITCPClient *this)

{
  return;
}

// IsConnected @ 14ac874c0

bool __thiscall FCCSAITCPClient::IsConnected(FCCSAITCPClient *this)

{
  return this->bIsConnected != (FThreadSafeBool)0x0;
}

// IsValide @ 14ac874e0

bool __thiscall FCCSAITCPClient::IsValide(FCCSAITCPClient *this)

{
  int iVar1;
  
  if (this->Socket == (FSocket *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(this->Socket->_padding_ + 0x88))();
  if (iVar1 == 1) {
    LOCK();
    this->bIsConnected = (FThreadSafeBool)0x1;
    UNLOCK();
  }
  return iVar1 == 1;
}

// ReceiveData @ 14ac88c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FCCSAITCPClient::ReceiveData(FCCSAITCPClient *this)

{
  int *piVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  FName *pFVar12;
  ISocketSubsystem *pIVar13;
  FStaticBasicLogRecord *pFVar14;
  uint uVar15;
  size_t _Size;
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 in_stack_ffffffffffffff58;
  ulonglong uVar16;
  FName local_88;
  FName local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  
  local_res8[0] = 0;
  uVar16 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff58 >> 0x20),2);
  local_res20[0] = 0;
  cVar7 = (**(code **)(this->Socket->_padding_ + 0x70))
                    (this->Socket,local_res8,1,local_res20,uVar16);
  if (cVar7 == '\0') {
    pFVar12 = ::FName::FName(&local_88,L"WINDOWS");
    pIVar13 = ISocketSubsystem::Get(pFVar12);
    iVar10 = (**(code **)(pIVar13->_padding_ + 0xb8))(pIVar13);
    if (iVar10 != 0x2733) {
      (**(code **)(this->Socket->_padding_ + 0x10))();
      LOCK();
      this->bIsConnected = (FThreadSafeBool)0x0;
      UNLOCK();
      if ((byte)LogTemp._0_1_ < 2) {
        return false;
      }
      pFVar14 = &::LOG_Static;
      goto LAB_14ac88ca4;
    }
  }
  local_res10[0] = 0;
  cVar7 = (**(code **)(this->Socket->_padding_ + 0x40))(this->Socket,local_res10);
  if (cVar7 == '\0') {
    return false;
  }
  this_00 = &this->RecvBuffer;
  iVar10 = (this->RecvBuffer).ArrayNum;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (this_00,local_res10[0] + iVar10,No);
  local_res18[0] = 0;
  cVar7 = (**(code **)(this->Socket->_padding_ + 0x70))
                    (this->Socket,(this_00->AllocatorInstance).Data + iVar10,local_res10[0],
                     local_res18,uVar16 & 0xffffffff00000000);
  if (cVar7 == '\0') {
    pFVar12 = ::FName::FName(&local_80,L"WINDOWS");
    pIVar13 = ISocketSubsystem::Get(pFVar12);
    iVar10 = (**(code **)(pIVar13->_padding_ + 0xb8))(pIVar13);
    if (iVar10 == 0x2733) {
      return false;
    }
    LOCK();
    this->bIsConnected = (FThreadSafeBool)0x0;
    UNLOCK();
    if ((byte)LogTemp._0_1_ < 2) {
      return false;
    }
    pFVar14 = &::LOG_Static;
  }
  else {
    if (local_res18[0] == 0) {
      LOCK();
      this->bIsConnected = (FThreadSafeBool)0x0;
      UNLOCK();
      if ((byte)LogTemp._0_1_ < 5) {
        return false;
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      return false;
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNum(this_00,local_res18[0] + iVar10,No);
    iVar10 = (this->RecvBuffer).ArrayNum;
    while( true ) {
      if (iVar10 < 4) {
        return true;
      }
      FVar2 = *(this_00->AllocatorInstance).Data;
      if (((this->RecvBuffer).ArrayNum < 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      FVar3 = (this_00->AllocatorInstance).Data[1];
      if (((this->RecvBuffer).ArrayNum < 3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      FVar4 = (this_00->AllocatorInstance).Data[2];
      if (((this->RecvBuffer).ArrayNum < 4) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      pFVar5 = (this_00->AllocatorInstance).Data;
      uVar15 = (uint)(byte)pFVar5[3] |
               (uint)(byte)FVar4 << 8 | (uint)(byte)FVar3 << 0x10 | (uint)(byte)FVar2 << 0x18;
      if (0x9fffff < uVar15 - 1) break;
      if ((this->RecvBuffer).ArrayNum < (int)uVar15) {
        return true;
      }
      local_78.Data = (FScriptContainerElement *)0x0;
      local_70 = 0;
      if ((pFVar5 == (FScriptContainerElement *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,uVar15,&local_78,(int *)&local_70,(int *)((longlong)&local_70 + 4));
      memcpy(local_78.Data + iVar10,pFVar5,(longlong)(int)uVar15);
      _Src.Data = local_78.Data;
      _Size = (size_t)(int)local_70;
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = (int)local_70;
      if ((int)local_70 == 0) {
        local_68.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(int)local_70,0,&local_68.AllocatorInstance,(int)local_70,&local_68.ArrayMax)
        ;
        memcpy(local_68.AllocatorInstance.Data,_Src.Data,_Size);
      }
      lpCriticalSection = &this->RecvQueueLock;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      TQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,1>::Enqueue
                (&this->RecvQueue,&local_68);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      FFileHelper::BufferToString(&local_58,(uchar *)(local_78.Data + 4),(int)local_70 + -4);
      if (4 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      uVar11 = 0;
      if ((int)uVar15 <= (this->RecvBuffer).ArrayNum) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      pFVar5 = (this_00->AllocatorInstance).Data;
      iVar10 = (this->RecvBuffer).ArrayNum - uVar15;
      if (iVar10 != 0) {
        memmove(pFVar5,pFVar5 + (int)uVar15,(longlong)iVar10);
      }
      piVar1 = &(this->RecvBuffer).ArrayNum;
      *piVar1 = *piVar1 - uVar15;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      iVar10 = (this->RecvBuffer).ArrayNum;
    }
    LOCK();
    this->bIsConnected = (FThreadSafeBool)0x0;
    UNLOCK();
    if ((byte)LogTemp._0_1_ < 2) {
      return false;
    }
    pFVar14 = &::LOG_Static;
  }
LAB_14ac88ca4:
  UE::Logging::Private::BasicLog<2>(pFVar14,(FLogCategoryBase *)&LogTemp);
  return false;
}

// Run @ 14ac89320

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FCCSAITCPClient::Run(FCCSAITCPClient *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  float fVar8;
  
  fVar4 = __real_3fc00000;
  fVar3 = __real_41200000;
  fVar2 = __real_3c23d70a;
  if (this->bShouldRun != (FThreadSafeBool)0x0) {
    piVar1 = &this->ConnectionRetryCount;
    do {
      if ((this->Socket == (FSocket *)0x0) ||
         (iVar7 = (**(code **)(this->Socket->_padding_ + 0x88))(), iVar7 != 1)) {
        if (this->MaxConnectionRetries <= *piVar1) {
          if (1 < (byte)LogTemp._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          }
          LOCK();
          this->bShouldRun = (FThreadSafeBool)0x0;
          UNLOCK();
          LOCK();
          this->bIsConnected = (FThreadSafeBool)0x0;
          UNLOCK();
          return 0;
        }
        *piVar1 = *piVar1 + 1;
        if (2 < (byte)LogTemp._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
        fVar8 = this->ReconnectDelay * fVar4;
        if (fVar3 <= fVar8) {
          fVar8 = fVar3;
        }
        this->ReconnectDelay = fVar8;
        FWindowsPlatformProcess::Sleep(fVar8);
        Connect(this);
      }
      else {
        LOCK();
        this->bIsConnected = (FThreadSafeBool)0x1;
        UNLOCK();
        iVar7 = (this->CurrentSendPacket).ArrayNum;
        *piVar1 = 0;
        this->ReconnectDelay = 1.0;
        if ((iVar7 < 1) || (iVar7 <= this->SentBytes)) {
          lpCriticalSection = &this->SendQueueLock;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (((this->SendQueue).Tail)->NextNode != (TNode *)0x0) {
            TQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,1>::Dequeue
                      (&this->SendQueue,&this->CurrentSendPacket);
            this->SentBytes = 0;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        }
        bVar5 = ContinueSendingCurrentPacket(this);
        bVar6 = ReceiveData(this);
        if ((!bVar5) && (!bVar6)) {
          FWindowsPlatformProcess::Sleep(fVar2);
        }
      }
    } while (this->bShouldRun != (FThreadSafeBool)0x0);
  }
  return 0;
}

// Send @ 14ac89500

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FCCSAITCPClient::Send(FCCSAITCPClient *this,uchar *param_1,int param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  undefined1 uVar3;
  size_t _Size;
  int iVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  
  if (((this->bIsConnected == (FThreadSafeBool)0x0) || (param_2 < 1)) ||
     (this->MaxPacketSize < param_2)) {
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    return false;
  }
  iVar4 = param_2 + 4;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar4,Default);
  if ((local_38.ArrayNum < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  *local_38.AllocatorInstance.Data = SUB41((uint)iVar4 >> 0x18,0);
  if ((local_38.ArrayNum < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_38.AllocatorInstance.Data[1] = SUB41((uint)iVar4 >> 0x10,0);
  if ((local_38.ArrayNum < 3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_38.AllocatorInstance.Data[2] = SUB41((uint)iVar4 >> 8,0);
  if ((local_38.ArrayNum < 4) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_38.AllocatorInstance.Data[3] = SUB41(iVar4,0);
  if ((local_38.ArrayNum < 5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  *(undefined8 *)(local_38.AllocatorInstance.Data + 4) = 0;
  if ((local_38.ArrayNum < 5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  memcpy(local_38.AllocatorInstance.Data + 4,param_1,(longlong)param_2);
  _Src.Data = local_38.AllocatorInstance.Data;
  _Size = (size_t)local_38.ArrayNum;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = local_38.ArrayNum;
  if (local_38.ArrayNum == 0) {
    local_28.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_38.ArrayNum,0,&local_28.AllocatorInstance,local_38.ArrayNum,
               &local_28.ArrayMax);
    memcpy(local_28.AllocatorInstance.Data,_Src.Data,_Size);
  }
  lpCriticalSection = &this->SendQueueLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,1>::Enqueue(&this->SendQueue,&local_28);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return true;
}

// SendNextPacket @ 14ac89990

bool __thiscall FCCSAITCPClient::SendNextPacket(FCCSAITCPClient *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  bool bVar2;
  
  iVar1 = (this->CurrentSendPacket).ArrayNum;
  if ((0 < iVar1) && (this->SentBytes < iVar1)) {
    bVar2 = ContinueSendingCurrentPacket(this);
    return bVar2;
  }
  lpCriticalSection = &this->SendQueueLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->SendQueue).Tail)->NextNode != (TNode *)0x0) {
      TQueue<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,1>::Dequeue
                (&this->SendQueue,&this->CurrentSendPacket);
      this->SentBytes = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar2 = ContinueSendingCurrentPacket(this);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Start @ 14ac89a40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCCSAITCPClient::Start(FCCSAITCPClient *this,FString *param_1,int param_2,bool param_3)

{
  bool bVar1;
  FRunnableThread *pFVar2;
  FIPv4Address local_res8 [2];
  
  ::FString::operator=(&this->ServerIP,param_1);
  bVar1 = FIPv4Address::Parse(param_1,local_res8);
  if (bVar1) {
    this->ServerPort = param_2;
    if (this->NetworkThread != (FRunnableThread *)0x0) {
      LOCK();
      this->bShouldRun = (FThreadSafeBool)0x0;
      UNLOCK();
      (**(code **)(this->NetworkThread->_padding_ + 0x18))(this->NetworkThread,1);
      pFVar2 = this->NetworkThread;
      if (pFVar2 != (FRunnableThread *)0x0) {
        (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
      }
      this->NetworkThread = (FRunnableThread *)0x0;
    }
    Connect(this);
    LOCK();
    this->bShouldRun = (FThreadSafeBool)0x1;
    UNLOCK();
    this->bAutoConnect = param_3;
    pFVar2 = FRunnableThread::Create
                       ((FRunnable *)this,L"CCSAITCPClientNetwork",0x20000,TPri_AboveNormal,
                        0xffffffffffffffff,None);
    this->NetworkThread = pFVar2;
    bVar1 = true;
  }
  else {
    if (1 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
    bVar1 = false;
  }
  return bVar1;
}

// Stop @ 14ac89b90

void __thiscall FCCSAITCPClient::Stop(FCCSAITCPClient *this)

{
  LOCK();
  this->bShouldRun = (FThreadSafeBool)0x0;
  UNLOCK();
  return;
}

