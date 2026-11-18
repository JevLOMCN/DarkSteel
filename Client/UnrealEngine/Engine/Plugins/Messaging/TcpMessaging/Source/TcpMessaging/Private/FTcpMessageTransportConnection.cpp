// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 20

// FTcpMessageTransportConnection @ 14eac79b0

FTcpMessageTransportConnection * __thiscall
FTcpMessageTransportConnection::FTcpMessageTransportConnection
          (FTcpMessageTransportConnection *this,FSocket *param_1,FIPv4Endpoint *param_2,int param_3,
          int param_4)

{
  TNode *pTVar1;
  TNode *pTVar2;
  undefined4 local_res20 [2];
  
  pTVar2 = (TNode *)0x0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined ***)this = &___7FTcpMessageTransportConnection__6B_;
  *(undefined8 *)&this->ConnectionStateChangedDelegate = 0;
  *(undefined8 *)&(this->ConnectionStateChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->ConnectionStateChangedDelegate).field_0x10 = 0;
  this->ConnectionState = STATE_Connecting;
  (this->ClosedTime).Ticks = 0;
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TNode *)0x0) {
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Object = (FTcpDeserializedMessage *)0x0;
    (pTVar1->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar1->NextNode = (TNode *)0x0;
    (pTVar1->Item).Object = (FTcpDeserializedMessage *)0x0;
    (pTVar1->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar2 = pTVar1;
  }
  (this->Inbox).Tail = pTVar2;
  (this->Inbox).Head = pTVar2;
  FDateTime::UtcNow();
  this->RemoteEndpoint = *param_2;
  FGuid::NewGuid(&this->LocalNodeId);
  (this->RemoteNodeId).A = 0;
  (this->RemoteNodeId).B = 0;
  (this->RemoteNodeId).C = 0;
  (this->RemoteNodeId).D = 0;
  this->Socket = param_1;
  this->ConnectionRetryPeriod = param_4;
  (this->RecvMessageData).Object = (FArrayReader *)0x0;
  (this->RecvMessageData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bSentHeader = false;
  this->bReceivedHeader = false;
  this->RemoteProtocolVersion = 0;
  this->Thread = (FRunnableThread *)0x0;
  this->TotalBytesReceived = 0;
  this->TotalBytesSent = 0;
  this->bRun = false;
  this->ConnectionRetryDelay = param_3;
  this->RecvMessageDataRemaining = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SendCriticalSection,4000);
  local_res20[0] = 0;
  (**(code **)(this->Socket->_padding_ + 0x110))(this->Socket,0x200000,local_res20);
  (**(code **)(this->Socket->_padding_ + 0x108))(this->Socket,0x200000,local_res20);
  return this;
}

// ~FTcpMessageTransportConnection @ 14eac7eb0

void __thiscall
FTcpMessageTransportConnection::~FTcpMessageTransportConnection
          (FTcpMessageTransportConnection *this)

{
  int *piVar1;
  int iVar2;
  FRunnableThread *pFVar3;
  TNode *pTVar4;
  void *pvVar5;
  longlong *plVar6;
  FName *pFVar7;
  ISocketSubsystem *pIVar8;
  FName local_res8;
  
  *(undefined ***)this = &___7FTcpMessageTransportConnection__6B_;
  if (this->Thread != (FRunnableThread *)0x0) {
    if (this->bRun != false) {
      this->bRun = false;
      (**(code **)(this->Thread->_padding_ + 0x20))();
    }
    pFVar3 = this->Thread;
    if (pFVar3 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
    }
  }
  if (this->Socket != (FSocket *)0x0) {
    pFVar7 = ::FName::FName(&local_res8,L"WINDOWS");
    pIVar8 = ISocketSubsystem::Get(pFVar7);
    (**(code **)(pIVar8->_padding_ + 0x38))(pIVar8,this->Socket);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SendCriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RecvMessageData).SharedReferenceCount.ReferenceController);
  pTVar4 = (this->Inbox).Tail;
  while (pTVar4 != (TNode *)0x0) {
    (this->Inbox).Tail = pTVar4->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar4->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar4,0x18);
    pTVar4 = (this->Inbox).Tail;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ConnectionStateChangedDelegate);
  pvVar5 = *(void **)&(this->ConnectionStateChangedDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ConnectionStateChangedDelegate);
  plVar6 = *(longlong **)&this->field_0x10;
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
  *(undefined ***)this = &___7FRunnable__6B_;
  return;
}

// BlockingSend @ 14eac8c50

bool __thiscall
FTcpMessageTransportConnection::BlockingSend
          (FTcpMessageTransportConnection *this,uchar *param_1,int param_2)

{
  FSocket *pFVar1;
  char cVar2;
  int iVar3;
  undefined1 auVar4 [16];
  int local_res18 [4];
  
  if (0 < param_2) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = __real_416312d010000000;
    auVar4 = roundpd(auVar4,auVar4,1);
    do {
      while( true ) {
        cVar2 = (**(code **)(this->Socket->_padding_ + 0x80))(this->Socket,1,(longlong)auVar4._0_8_)
        ;
        pFVar1 = this->Socket;
        if (cVar2 != '\0') break;
        iVar3 = (**(code **)(pFVar1->_padding_ + 0x88))();
        if (iVar3 == 2) {
          return false;
        }
      }
      local_res18[0] = 0;
      cVar2 = (**(code **)(pFVar1->_padding_ + 0x60))(pFVar1,param_1,param_2,local_res18);
      if (cVar2 == '\0') {
        return false;
      }
      param_2 = param_2 - local_res18[0];
      param_1 = param_1 + local_res18[0];
    } while (0 < param_2);
  }
  return true;
}

// ChunkedBlockingSend @ 14eac8f30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTcpMessageTransportConnection::ChunkedBlockingSend
          (FTcpMessageTransportConnection *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  ISocketSubsystem *pIVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  FName local_res10;
  
  bVar2 = BlockingSend(this,(uchar *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  if (!bVar2) {
    pFVar4 = ::FName::FName(&local_res10,L"WINDOWS");
    pIVar5 = ISocketSubsystem::Get(pFVar4);
    iVar3 = (**(code **)(pIVar5->_padding_ + 0xb8))(pIVar5);
    if (5 < (byte)LogTcpMessaging._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
    }
    if (iVar3 != 0x1b) {
      return false;
    }
    if (5 < (byte)LogTcpMessaging._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
    }
    fVar1 = __real_3f800000;
    uVar6 = 0;
    FWindowsPlatformProcess::Sleep(__real_3f800000);
    pFVar7 = (param_1->AllocatorInstance).Data;
    uVar9 = param_1->ArrayNum;
    while (0 < (int)uVar9) {
      uVar8 = 0x10000;
      if (uVar9 < 0x10000) {
        uVar8 = uVar9;
      }
      bVar2 = BlockingSend(this,(uchar *)pFVar7,uVar8);
      if (bVar2) {
        pFVar7 = pFVar7 + uVar8;
        uVar9 = uVar9 - uVar8;
      }
      else {
        if (0xf < uVar6) {
          return false;
        }
        FWindowsPlatformProcess::Sleep(fVar1);
        uVar6 = uVar6 + 1;
        if (5 < (byte)LogTcpMessaging._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
        }
      }
    }
  }
  return true;
}

// Close @ 14eac9080

void __thiscall FTcpMessageTransportConnection::Close(FTcpMessageTransportConnection *this)

{
  FRunnableThread *pFVar1;
  
  if (this->Thread != (FRunnableThread *)0x0) {
    this->bRun = false;
    (**(code **)(this->Thread->_padding_ + 0x20))();
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    this->Thread = (FRunnableThread *)0x0;
  }
  if (this->Socket != (FSocket *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014eac90d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->Socket->_padding_ + 0x10))();
    return;
  }
  return;
}

// Exit @ 14eaca850

void __thiscall FTcpMessageTransportConnection::Exit(FTcpMessageTransportConnection *this)

{
  return;
}

// GetConnectionState @ 14eacaa50

EConnectionState __thiscall
FTcpMessageTransportConnection::GetConnectionState(FTcpMessageTransportConnection *this)

{
  return this->ConnectionState;
}

// GetName @ 14eacab80

FText * __thiscall
FTcpMessageTransportConnection::GetName
          (FTcpMessageTransportConnection *this,FText *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = FIPv4Endpoint::ToString(&this->RemoteEndpoint,&local_18);
  FText::FromString(__return_storage_ptr__,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetRemoteNodeId @ 14eacacc0

FGuid * __thiscall
FTcpMessageTransportConnection::GetRemoteNodeId
          (FTcpMessageTransportConnection *this,FGuid *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (this->RemoteNodeId).B;
  uVar2 = (this->RemoteNodeId).C;
  uVar3 = (this->RemoteNodeId).D;
  __return_storage_ptr__->A = (this->RemoteNodeId).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetTotalBytesReceived @ 14eacaea0

ulong64 __thiscall
FTcpMessageTransportConnection::GetTotalBytesReceived(FTcpMessageTransportConnection *this)

{
  return this->TotalBytesReceived;
}

// GetTotalBytesSent @ 14eacaeb0

ulong64 __thiscall
FTcpMessageTransportConnection::GetTotalBytesSent(FTcpMessageTransportConnection *this)

{
  return this->TotalBytesSent;
}

// GetUptime @ 14eacaee0

FTimespan __thiscall FTcpMessageTransportConnection::GetUptime(FTcpMessageTransportConnection *this)

{
  FDateTime FVar1;
  longlong *in_RDX;
  
  if (this->ConnectionState == STATE_Connected) {
    FVar1 = FDateTime::UtcNow();
    *in_RDX = *(longlong *)FVar1.Ticks - (this->OpenedTime).Ticks;
    return (FTimespan)(long64)in_RDX;
  }
  *in_RDX = (this->ClosedTime).Ticks - (this->OpenedTime).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// Init @ 14eacb6b0

bool __thiscall FTcpMessageTransportConnection::Init(FTcpMessageTransportConnection *this)

{
  return this->Socket != (FSocket *)0x0;
}

// Receive @ 14eacbeb0

bool __thiscall
FTcpMessageTransportConnection::Receive
          (FTcpMessageTransportConnection *this,TSharedPtr<FTcpDeserializedMessage,1> *param_1,
          FGuid *param_2)

{
  TSharedPtr<FTcpDeserializedMessage,1> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  TSharedPtr<FTcpDeserializedMessage,1> local_18;
  
  pTVar2 = ((this->Inbox).Tail)->NextNode;
  if (pTVar2 != (TNode *)0x0) {
    pTVar1 = &pTVar2->Item;
    if (param_1 != pTVar1) {
      param_1->Object = pTVar1->Object;
      pTVar1->Object = (FTcpDeserializedMessage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&param_1->SharedReferenceCount,&(pTVar2->Item).SharedReferenceCount);
    }
    pTVar3 = (this->Inbox).Tail;
    (this->Inbox).Tail = pTVar2;
    local_18.Object = (FTcpDeserializedMessage *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != &local_18) {
      pTVar1->Object = (FTcpDeserializedMessage *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pTVar2->Item).SharedReferenceCount,&local_18.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pTVar3 != (TNode *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar3->Item).SharedReferenceCount.ReferenceController);
      ::operator_delete(pTVar3,0x18);
    }
    uVar4 = (this->RemoteNodeId).B;
    uVar5 = (this->RemoteNodeId).C;
    uVar6 = (this->RemoteNodeId).D;
    param_2->A = (this->RemoteNodeId).A;
    param_2->B = uVar4;
    param_2->C = uVar5;
    param_2->D = uVar6;
    return true;
  }
  return false;
}

// ReceiveMessages @ 14eacbfa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FTcpMessageTransportConnection::ReceiveMessages(FTcpMessageTransportConnection *this)

{
  TQueue<TSharedPtr<FTcpDeserializedMessage,1>,0> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar2;
  TNode *pTVar3;
  FSocket *pFVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  TReferenceControllerBase<1> *pTVar8;
  FTcpDeserializedMessage *this_00;
  FSharedReferencer<1> FVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  ESocketErrors EVar13;
  int iVar14;
  int iVar15;
  FName *pFVar16;
  ISocketSubsystem *pIVar17;
  FDateTime FVar18;
  FArrayReader *this_01;
  FArrayReader *pFVar19;
  TNode *pTVar20;
  uint *puVar21;
  undefined7 uVar22;
  TSharedPtr<FArrayReader,1> *pTVar23;
  int iVar24;
  undefined1 auVar25 [16];
  undefined1 local_res8 [8];
  int local_res10 [2];
  uint local_res18 [2];
  uint local_res20;
  undefined8 in_stack_fffffffffffffd78;
  undefined4 uVar27;
  int *piVar26;
  int local_268 [2];
  FTcpMessageHeader local_260;
  ISocketSubsystem *local_248;
  undefined1 local_240 [8];
  TRawPtrProxy<FArrayReader> local_238;
  TReferenceControllerBase<1> *local_230;
  TRawPtrProxy<FTcpDeserializedMessage> local_228;
  FString local_220;
  FString local_210;
  TSharedPtr<FTcpDeserializedMessage,1> local_200;
  undefined8 local_1f0;
  FSharedReferencer<1> FStack_1e8;
  FString local_1e0;
  FString local_1d0;
  undefined1 local_1b8 [8];
  FFastPathLoadBuffer *pFStack_1b0;
  uchar *local_1a8;
  uchar *puStack_1a0;
  uchar *local_198;
  ulonglong uStack_190;
  undefined8 local_188;
  long64 lStack_180;
  FPackageFileVersion local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  FCustomVersionContainer *pFStack_160;
  FCustomPropertyListNode *local_158;
  FArchiveSavePackageData *pFStack_150;
  FProperty *local_148;
  FArchiveSerializedPropertyChain *pFStack_140;
  undefined8 local_138;
  FArchiveState *pFStack_130;
  undefined8 local_128;
  ForAnyElementType FStack_120;
  int local_118 [4];
  FName local_108 [2];
  undefined1 local_f8 [152];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_60 [2];
  
  uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
  local_res20 = 0;
  pFVar16 = ::FName::FName(local_108,L"WINDOWS");
  pIVar17 = ISocketSubsystem::Get(pFVar16);
  local_res18[0] = 0;
  piVar26 = (int *)CONCAT44(uVar27,2);
  local_248 = pIVar17;
  cVar10 = (**(code **)(this->Socket->_padding_ + 0x70))
                     (this->Socket,local_res8,1,local_240,piVar26);
  if (cVar10 == '\0') {
    if ((byte)LogTcpMessaging._0_1_ < 6) {
      return false;
    }
    EVar13 = (**(code **)(pIVar17->_padding_ + 0xb8))(pIVar17);
    ISocketSubsystem::GetSocketError(pIVar17,EVar13);
    ::FString::PrintfImpl(&local_220,L"%s (%d)");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
LAB_14eacc9e7:
    if (local_220.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return false;
    }
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
    return false;
  }
  auVar25._8_8_ = 0;
  auVar25._0_8_ = __real_416312d010000000;
  auVar25 = roundpd(auVar25,auVar25,1);
  cVar10 = (**(code **)(this->Socket->_padding_ + 0x80))(this->Socket,0,(longlong)auVar25._0_8_);
  if (cVar10 == '\0') {
    iVar14 = (**(code **)(this->Socket->_padding_ + 0x88))();
    return iVar14 != 2;
  }
  if (this->bReceivedHeader == false) {
    cVar10 = (**(code **)(this->Socket->_padding_ + 0x40))(this->Socket,local_res18);
    if ((cVar10 == '\0') || (local_res18[0] < 0x18)) {
      return true;
    }
    FArrayReader::FArrayReader((FArrayReader *)local_f8,true);
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized(local_60,0x18,Default);
    local_268[0] = 0;
    piVar26 = (int *)((ulonglong)piVar26 & 0xffffffff00000000);
    cVar10 = (**(code **)(this->Socket->_padding_ + 0x70))
                       (this->Socket,local_60[0].AllocatorInstance.Data,0x18,local_268,piVar26);
    if (cVar10 == '\0') {
      if (5 < (byte)LogTcpMessaging._0_1_) {
        EVar13 = (**(code **)(pIVar17->_padding_ + 0xb8))(pIVar17);
        ISocketSubsystem::GetSocketError(pIVar17,EVar13);
        ::FString::PrintfImpl(&local_210,L"%s (%d)");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
        if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if ((local_268[0] != 0x18) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("BytesRead == sizeof(FTcpMessageHeader)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Messaging\\TcpMessaging\\Source\\TcpMessaging\\Private\\Transport\\TcpMessageTransportConnection.cpp"
                              ,0x167,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      this->TotalBytesReceived = this->TotalBytesReceived + (longlong)local_268[0];
      local_260.MagicNumber = 0;
      local_260.Version = 0;
      local_260.NodeId.A = 0;
      local_260.NodeId.B = 0;
      local_260.NodeId.C = 0;
      local_260.NodeId.D = 0;
      ::operator<<((FArchive *)local_f8,&local_260);
      if ((local_260.MagicNumber == 0x45504943) && (local_260.Version != 0)) {
        if (((local_260.NodeId.D != 0 || local_260.NodeId.C != 0) || local_260.NodeId.B != 0) ||
            local_260.NodeId.A != 0) {
          this->RemoteProtocolVersion = local_260.Version;
          this->bReceivedHeader = true;
          (this->RemoteNodeId).A = local_260.NodeId.A;
          (this->RemoteNodeId).B = local_260.NodeId.B;
          (this->RemoteNodeId).C = local_260.NodeId.C;
          (this->RemoteNodeId).D = local_260.NodeId.D;
          FVar18 = FDateTime::UtcNow();
          lpCriticalSection = &this->SendCriticalSection;
                    /* WARNING: Load size is inaccurate */
          (this->OpenedTime).Ticks = *FVar18.Ticks;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          this->ConnectionState = STATE_Connected;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                    (&this->ConnectionStateChangedDelegate);
          if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60[0].AllocatorInstance.Data);
          }
          FArchive::~FArchive((FArchive *)local_f8);
          goto LAB_14eacc2cc;
        }
      }
      if (5 < (byte)LogTcpMessaging._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
      }
    }
    if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)local_f8);
  }
  else {
LAB_14eacc2cc:
    piVar2 = &this->RecvMessageDataRemaining;
    while( true ) {
      pFVar19 = (FArrayReader *)0x0;
      local_res10[0] = 0;
      if (*piVar2 == 0) break;
LAB_14eacc617:
      pTVar23 = &this->RecvMessageData;
      pFVar4 = this->Socket;
      local_res10[0] = 0;
      iVar14 = *piVar2;
      pcVar6 = *(code **)(pFVar4->_padding_ + 0x70);
      if ((pTVar23->Object == (FArrayReader *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      lVar5 = *(longlong *)&pTVar23->Object->field_0x98;
      if ((pTVar23->Object == (FArrayReader *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      piVar26 = (int *)((ulonglong)piVar26 & 0xffffffff00000000);
      cVar10 = (*pcVar6)(pFVar4,((longlong)*(int *)&pTVar23->Object->field_0xa0 - (longlong)*piVar2)
                                + lVar5,iVar14,local_res10,piVar26);
      pIVar17 = local_248;
      if (cVar10 == '\0') {
        if ((byte)LogTcpMessaging._0_1_ < 6) {
          return false;
        }
        EVar13 = (**(code **)(local_248->_padding_ + 0xb8))(local_248);
        ISocketSubsystem::GetSocketError(pIVar17,EVar13);
        ::FString::PrintfImpl(&local_1d0,L"%s (%d)");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
        local_220.Data.AllocatorInstance.Data = local_1d0.Data.AllocatorInstance.Data;
        goto LAB_14eacc9e7;
      }
      if (local_res10[0] < 1) {
        return true;
      }
      if ((*piVar2 < local_res10[0]) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("BytesRead <= RecvMessageDataRemaining",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Messaging\\TcpMessaging\\Source\\TcpMessaging\\Private\\Transport\\TcpMessageTransportConnection.cpp"
                              ,0x1b8,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      this->TotalBytesReceived = this->TotalBytesReceived + (longlong)local_res10[0];
      *piVar2 = *piVar2 - local_res10[0];
      if (*piVar2 == 0) {
        local_228.Object = ::operator_new(0xb0);
        if (local_228.Object == (FTcpDeserializedMessage *)0x0) {
          local_228.Object = (FTcpDeserializedMessage *)0x0;
        }
        else {
          *(undefined8 *)&(local_228.Object)->Annotations = 0;
          *(undefined8 *)&((local_228.Object)->Annotations).field_0x8 = 0;
          local_res20 = local_res20 | 1;
          *(undefined8 *)&((local_228.Object)->Annotations).field_0x20 = 0;
          (local_228.Object)->_padding_ = (longlong)&___7FTcpDeserializedMessage__6B_;
          *(undefined4 *)&((local_228.Object)->Annotations).field_0x28 = 0;
          *(undefined4 *)&((local_228.Object)->Annotations).field_0x2c = 0x80;
          *(undefined4 *)&((local_228.Object)->Annotations).field_0x30 = 0xffffffff;
          *(undefined4 *)&((local_228.Object)->Annotations).field_0x34 = 0;
          *(undefined8 *)&((local_228.Object)->Annotations).field_0x40 = 0;
          *(undefined4 *)&((local_228.Object)->Annotations).field_0x48 = 0;
          ((local_228.Object)->Attachment).Object = (IMessageAttachment *)0x0;
          ((local_228.Object)->Attachment).SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          ((local_228.Object)->Expiration).Ticks = 0;
          (local_228.Object)->MessageData = (void *)0x0;
          ((local_228.Object)->Recipients).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          ((local_228.Object)->Recipients).ArrayNum = 0;
          ((local_228.Object)->Recipients).ArrayMax = 0;
          ((local_228.Object)->Sender).UniqueId.A = 0;
          ((local_228.Object)->Sender).UniqueId.B = 0;
          ((local_228.Object)->Sender).UniqueId.C = 0;
          ((local_228.Object)->Sender).UniqueId.D = 0;
          ((local_228.Object)->TimeSent).Ticks = 0;
          ((local_228.Object)->TypeInfo).WeakPtr = (FWeakObjectPtr)0x0;
          local_230 = (TReferenceControllerBase<1> *)0x0;
        }
        pTVar8 = local_230;
        uVar7 = local_res20;
        TSharedPtr<FTcpDeserializedMessage,1>::
        TSharedPtr<FTcpDeserializedMessage,1><FTcpDeserializedMessage>(&local_200,&local_228);
        if ((uVar7 & 1) != 0) {
          local_res20 = uVar7 & 0xfffffffe;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar8);
        }
        this_00 = local_200.Object;
        if ((local_200.Object == (FTcpDeserializedMessage *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        bVar11 = FTcpDeserializedMessage::Deserialize(this_00,pTVar23);
        FVar9.ReferenceController = local_200.SharedReferenceCount.ReferenceController;
        if (bVar11) {
          pTVar1 = &this->Inbox;
          pTVar20 = ::operator_new(0x18);
          if (pTVar20 != (TNode *)0x0) {
            pTVar20->NextNode = (TNode *)0x0;
            (pTVar20->Item).Object = this_00;
            (pTVar20->Item).SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
            if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar9.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (((ulonglong)pTVar1 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            pTVar3 = pTVar1->Head;
            pTVar1->Head = pTVar20;
            UNLOCK();
            if (((ulonglong)pTVar3 & 7) != 0) {
              FWindowsPlatformAtomics::HandleAtomicsFailure
                        (
                        L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes"
                        );
            }
            LOCK();
            pTVar3->NextNode = pTVar20;
            UNLOCK();
          }
        }
        local_1f0 = 0;
        FStack_1e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (&this->RecvMessageData != (TSharedPtr<FArrayReader,1> *)&local_1f0) {
          (this->RecvMessageData).Object = (FArrayReader *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->RecvMessageData).SharedReferenceCount,&FStack_1e8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_1e8.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar9.ReferenceController);
      }
    }
    puVar21 = local_res18;
    cVar10 = (**(code **)(this->Socket->_padding_ + 0x40))(this->Socket,puVar21);
    if (cVar10 == '\0') {
      return true;
    }
    if (local_res18[0] < 4) {
      return true;
    }
    local_1b8 = (undefined1  [8])0x0;
    pFStack_1b0 = (FFastPathLoadBuffer *)0x0;
    local_1a8 = (uchar *)0x0;
    puStack_1a0 = (uchar *)0x0;
    local_198 = (uchar *)0x0;
    uStack_190 = 0;
    local_188 = 0;
    lStack_180 = 0;
    local_178.FileVersionUE4 = 0;
    local_178.FileVersionUE5 = 0;
    uStack_170 = 0;
    local_168._0_2_ = 0;
    local_168._2_2_ = 0;
    local_168._4_4_ = 0;
    pFStack_160 = (FCustomVersionContainer *)0x0;
    local_158 = (FCustomPropertyListNode *)0x0;
    pFStack_150 = (FArchiveSavePackageData *)0x0;
    local_148 = (FProperty *)0x0;
    pFStack_140 = (FArchiveSerializedPropertyChain *)0x0;
    local_138 = 0;
    pFStack_130 = (FArchiveState *)0x0;
    FArchiveState::FArchiveState((FArchiveState *)local_1b8);
    local_118[0] = 0;
    local_118[1] = 0;
    uVar22 = (undefined7)((ulonglong)puVar21 >> 8);
    local_128 = 0;
    FStack_120.Data = (FScriptContainerElement *)0x0;
    local_1b8 = (undefined1  [8])&___7FArrayReader__6B_;
    FArchiveState::SetIsLoading((FArchiveState *)local_1b8,true);
    (**(code **)((longlong)local_1b8 + 0x108))(local_1b8,CONCAT71(uVar22,1));
    if (local_118[0] < 4) {
      piVar26 = local_118;
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,4 - local_118[0],&FStack_120,piVar26,local_118 + 1);
    }
    else if (4 < local_118[0]) {
      iVar14 = local_118[0] + -4;
      if (iVar14 < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
      }
      else if (iVar14 == 0) goto LAB_14eacc4b3;
      iVar15 = (local_118[0] - iVar14) + -4;
      iVar24 = local_118[0];
      if (iVar15 != 0) {
        memmove(FStack_120.Data + 4,FStack_120.Data + 4 + iVar14,(longlong)iVar15);
        iVar24 = local_118[0];
      }
      piVar26 = local_118 + 1;
      local_118[0] = iVar24 - iVar14;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,&FStack_120,iVar24 - iVar14,piVar26);
    }
LAB_14eacc4b3:
    local_res10[0] = 0;
    piVar26 = (int *)((ulonglong)piVar26 & 0xffffffff00000000);
    cVar10 = (**(code **)(this->Socket->_padding_ + 0x70))
                       (this->Socket,FStack_120.Data,4,local_res10,piVar26);
    pIVar17 = local_248;
    if (cVar10 == '\0') {
      if (5 < (byte)LogTcpMessaging._0_1_) {
        EVar13 = (**(code **)(local_248->_padding_ + 0xb8))(local_248);
        ISocketSubsystem::GetSocketError(pIVar17,EVar13);
        ::FString::PrintfImpl(&local_1e0,L"%s (%d)");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if ((local_res10[0] != 4) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("BytesRead == sizeof(uint32)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Messaging\\TcpMessaging\\Source\\TcpMessaging\\Private\\Transport\\TcpMessageTransportConnection.cpp"
                              ,0x19f,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      this->TotalBytesReceived = this->TotalBytesReceived + (longlong)local_res10[0];
      if (pFStack_1b0->EndFastPathLoadBuffer <
          (int *)((longlong)pFStack_1b0->StartFastPathLoadBuffer + 4)) {
        if ((uStack_190 & 0x10000) == 0) {
          if (*(code **)((longlong)local_1b8 + 0x188) == FArrayReader::Serialize) {
            FArrayReader::Serialize((FArrayReader *)local_1b8,piVar2,4);
          }
          else {
            (**(code **)((longlong)local_1b8 + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)local_1b8,(uint *)piVar2);
        }
      }
      else {
        *piVar2 = *(int *)pFStack_1b0->StartFastPathLoadBuffer;
        pFStack_1b0->StartFastPathLoadBuffer = pFStack_1b0->StartFastPathLoadBuffer + 4;
      }
      if (0 < *piVar2) {
        this_01 = ::operator_new(0xa8);
        if (this_01 != (FArrayReader *)0x0) {
          pFVar19 = FArrayReader::FArrayReader(this_01,true);
        }
        pTVar23 = &this->RecvMessageData;
        local_238.Object = pFVar19;
        TSharedPtr<FArrayReader,1>::operator=<FArrayReader>(pTVar23,&local_238);
        if ((pTVar23->Object == (FArrayReader *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
        TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pTVar23->Object->field_0x98
                   ,*piVar2,Default);
        if (FStack_120.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_120.Data);
        }
        FArchive::~FArchive((FArchive *)local_1b8);
        goto LAB_14eacc617;
      }
      if (1 < (byte)LogTcpMessaging._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
      }
    }
    if (FStack_120.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_120.Data);
    }
    FArchive::~FArchive((FArchive *)local_1b8);
  }
  return false;
}

// Run @ 14eacdaf0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FTcpMessageTransportConnection::Run(FTcpMessageTransportConnection *this)

{
  FWindowsRecursiveMutex *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  float fVar4;
  FIPv4Address FVar5;
  ForAnyElementType _Src;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  FName *pFVar11;
  ISocketSubsystem *pIVar12;
  FSocket *pFVar13;
  FDateTime FVar14;
  int iVar15;
  bool bVar16;
  float fVar17;
  FName local_res8;
  FName local_res10 [2];
  undefined2 uStack_1ae;
  FString local_1a8;
  undefined1 local_198;
  int local_194;
  undefined1 local_190;
  int local_18c;
  undefined4 local_188;
  undefined1 local_184;
  int local_180;
  undefined1 local_178;
  undefined1 local_177;
  FIPv4Endpoint local_174;
  FString local_168;
  undefined1 local_158;
  int local_154;
  undefined1 local_150;
  int local_14c;
  int local_148;
  undefined1 local_144;
  int local_140;
  longlong *local_138;
  TReferenceControllerBase<1> *local_130;
  FString local_128;
  FTcpSocketBuilder local_118;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FReadAccessScope local_a8;
  FReadAccessScope local_90 [3];
  
  bVar16 = false;
  local_res8.ComparisonIndex.Value = 0;
  if (4 < (byte)LogTcpMessaging._0_1_) {
    FIPv4Endpoint::ToString(&this->RemoteEndpoint,&local_d8);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
  }
  fVar4 = __real_38d1b717;
  cVar8 = this->bRun;
  while (cVar8 != '\0') {
    bVar6 = SendHeader(this);
    if ((((!bVar6) || (bVar6 = ReceiveMessages(this), !bVar6)) ||
        (iVar9 = (**(code **)(this->Socket->_padding_ + 0x88))(), iVar9 == 2)) &&
       (this->bRun != false)) {
      iVar9 = this->ConnectionRetryDelay;
      if ((float)iVar9 <= 0.0) {
        this->bRun = false;
      }
      else {
        bVar6 = false;
        pFVar1 = &this->SendCriticalSection;
        if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_14eace11b;
        EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
        (**(code **)(this->Socket->_padding_ + 0x10))();
        pFVar11 = ::FName::FName(&local_res8,L"WINDOWS");
        pIVar12 = ISocketSubsystem::Get(pFVar11);
        (**(code **)(pIVar12->_padding_ + 0x38))(pIVar12,this->Socket);
        this->Socket = (FSocket *)0x0;
        cVar8 = this->bRun;
        for (fVar17 = 0.0;
            ((cVar8 != '\0' && (this->Socket == (FSocket *)0x0)) &&
            (fVar17 <= (float)this->ConnectionRetryPeriod)); fVar17 = fVar17 + (float)iVar9) {
          if (5 < (byte)LogTcpMessaging._0_1_) {
            FIPv4Endpoint::ToString(&this->RemoteEndpoint,&local_c8);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
          }
          FWindowsPlatformProcess::Sleep((float)this->ConnectionRetryDelay);
          ::FString::FString(&local_128,L"FTcpMessageTransport.RemoteConnection");
          _Src.Data = local_128.Data.AllocatorInstance.Data;
          FVar5 = FIPv4Address::Any;
          local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar15 = local_128.Data.ArrayNum;
          local_1a8.Data.ArrayNum = iVar15;
          if (iVar15 == 0) {
            local_1a8.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar15,0,(ForAnyElementType *)&local_1a8,iVar15,&local_1a8.Data.ArrayMax)
            ;
            memcpy(local_1a8.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar15 * 2);
          }
          local_178 = 0;
          local_177 = 0;
          local_174.Port = 0;
          local_174.Address = (FIPv4Address)(FIPv4Address)FVar5.field0_0x0;
          local_174._6_2_ = uStack_1ae;
          local_198 = 0;
          local_194 = 0;
          local_190 = 0;
          local_188 = 0;
          local_184 = 0;
          local_180 = 0x200000;
          ::FString::FString(&local_168,&local_1a8);
          local_158 = local_198;
          local_154 = local_194;
          local_150 = local_190;
          local_14c = local_18c;
          local_144 = local_184;
          local_140 = local_180;
          local_118.Blocking = (bool)local_178;
          local_118.Bound = (bool)local_177;
          local_118.BoundEndpoint = local_174;
          local_148 = 0x200000;
          ::FString::FString(&local_118.Description,&local_168);
          local_118.Linger = (bool)local_158;
          local_118.LingerTimeout = local_154;
          local_118.Listen = (bool)local_150;
          local_118.ListenBacklog = local_14c;
          local_118.ReceiveBufferSize = local_148;
          local_118.Reusable = (bool)local_144;
          local_118.SendBufferSize = local_140;
          pFVar13 = FTcpSocketBuilder::Build(&local_118);
          this->Socket = pFVar13;
          if (local_118.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Description.Data.AllocatorInstance.Data);
          }
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          pFVar13 = this->Socket;
          if (pFVar13 == (FSocket *)0x0) {
LAB_14eacdf20:
            bVar7 = false;
          }
          else {
            bVar16 = true;
            pcVar2 = *(code **)(pFVar13->_padding_ + 0x28);
            if ((FIPv4Endpoint::CachedSocketSubsystem == (ISocketSubsystem *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CachedSocketSubsystem != nullptr && \"Networking module not loaded and initialized\""
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Networking\\Public\\Interfaces\\IPv4\\IPv4Endpoint.h"
                                   ,0x72,L""), bVar7)) {
              pcVar2 = (code *)swi(3);
              uVar10 = (*pcVar2)();
              return uVar10;
            }
            (**(code **)(FIPv4Endpoint::CachedSocketSubsystem->_padding_ + 0x90))
                      (FIPv4Endpoint::CachedSocketSubsystem,&local_138);
            (**(code **)(*local_138 + 0x18))
                      (local_138,(this->RemoteEndpoint).Address.field0_0x0.Value);
            (**(code **)(*local_138 + 0x28))(local_138,(this->RemoteEndpoint).Port);
            cVar8 = (*pcVar2)(pFVar13,local_138);
            if (cVar8 == '\0') goto LAB_14eacdf20;
            bVar7 = true;
          }
          if (bVar16) {
            bVar16 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_130);
          }
          if (bVar7) {
            this->ConnectionState = STATE_DisconnectReconnectPending;
            bVar6 = true;
            (this->RemoteNodeId).C = 0;
            (this->RemoteNodeId).D = 0;
            (this->RemoteNodeId).A = 0;
            (this->RemoteNodeId).B = 0;
            this->bSentHeader = false;
            this->bReceivedHeader = false;
          }
          else if (this->Socket != (FSocket *)0x0) {
            pFVar11 = ::FName::FName(local_res10,L"WINDOWS");
            pIVar12 = ISocketSubsystem::Get(pFVar11);
            (**(code **)(pIVar12->_padding_ + 0x38))(pIVar12,this->Socket);
            this->Socket = (FSocket *)0x0;
            this->bRun = false;
          }
          cVar8 = this->bRun;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
        if (bVar6) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->ConnectionStateChangedDelegate,&local_a8);
          if ((*(int *)&(this->ConnectionStateChangedDelegate).field_0x10 != 0) &&
             (plVar3 = *(longlong **)&(this->ConnectionStateChangedDelegate).field_0x8,
             plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x68))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_a8);
        }
        else if (1 < (byte)LogTcpMessaging._0_1_) {
          FIPv4Endpoint::ToString(&this->RemoteEndpoint,&local_b8);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    FWindowsPlatformProcess::SleepNoStats(fVar4);
    cVar8 = this->bRun;
  }
  pFVar1 = &this->SendCriticalSection;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    this->ConnectionState = STATE_Disconnected;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ConnectionStateChangedDelegate,local_90);
    if ((*(int *)&(this->ConnectionStateChangedDelegate).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->ConnectionStateChangedDelegate).field_0x8,
       plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_90);
    (this->RemoteNodeId).C = 0;
    (this->RemoteNodeId).D = 0;
    (this->RemoteNodeId).A = 0;
    (this->RemoteNodeId).B = 0;
    FVar14 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
    (this->ClosedTime).Ticks = *FVar14.Ticks;
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ConnectionStateChangedDelegate);
    return 0;
  }
LAB_14eace11b:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Send @ 14eace130

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTcpMessageTransportConnection::Send
          (FTcpMessageTransportConnection *this,TSharedPtr<FTcpSerializedMessage,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FTcpSerializedMessage *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FName *pFVar7;
  ISocketSubsystem *pIVar8;
  char *pcVar9;
  undefined7 uVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint local_res8 [2];
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_128;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_80;
  FName local_68;
  FName local_60;
  FName local_58 [4];
  
  lpCriticalSection = &this->SendCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  pcVar9 = (char *)param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->ConnectionState != STATE_Connected) || (this->bSentHeader == false)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return false;
  }
  if (param_1->Object == (FTcpSerializedMessage *)0x0) {
    pcVar9 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
    ;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  pFVar1 = param_1->Object;
  uVar14 = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  local_128._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_128);
  local_128._padding_ = 0;
  local_128._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_128.Bytes = &local_80;
  uVar10 = (undefined7)((ulonglong)pcVar9 >> 8);
  local_128.ArchiveName.ComparisonIndex.Value = 0;
  local_128.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_128,true);
  (**(code **)(local_128._padding_ + 0x108))(&local_128,CONCAT71(uVar10,1));
  local_128._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_res8[0] = (pFVar1->DataArray).ArrayNum;
  if (*(uint **)(local_128._padding_ + 8) < *(uint **)local_128._padding_ + 1) {
    if ((local_128._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_128,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_128,local_res8);
    }
  }
  else {
    local_res8[0] = **(uint **)local_128._padding_;
    *(longlong *)local_128._padding_ = *(longlong *)local_128._padding_ + 4;
  }
  bVar4 = BlockingSend(this,(uchar *)local_80.AllocatorInstance.Data,4);
  if (bVar4) {
    this->TotalBytesSent = this->TotalBytesSent + 4;
    bVar4 = BlockingSend(this,(uchar *)(pFVar1->DataArray).AllocatorInstance.Data,
                         (pFVar1->DataArray).ArrayNum);
    if (!bVar4) {
      pFVar7 = ::FName::FName(&local_60,L"WINDOWS");
      pIVar8 = ISocketSubsystem::Get(pFVar7);
      iVar6 = (**(code **)(pIVar8->_padding_ + 0xb8))(pIVar8);
      if (5 < (byte)LogTcpMessaging._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
      }
      if (iVar6 != 0x1b) {
LAB_14eace4d8:
        if (5 < (byte)LogTcpMessaging._0_1_) {
          pFVar7 = ::FName::FName(local_58,L"WINDOWS");
          pIVar8 = ISocketSubsystem::Get(pFVar7);
          (**(code **)(pIVar8->_padding_ + 0xb8))(pIVar8);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
        }
        if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.AllocatorInstance.Data);
        }
        FArchive::~FArchive((FArchive *)&local_128);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return false;
      }
      if (5 < (byte)LogTcpMessaging._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
      }
      fVar3 = __real_3f800000;
      FWindowsPlatformProcess::Sleep(__real_3f800000);
      uVar12 = (pFVar1->DataArray).ArrayNum;
      pFVar13 = (pFVar1->DataArray).AllocatorInstance.Data;
      while (0 < (int)uVar12) {
        uVar11 = 0x10000;
        if (uVar12 < 0x10000) {
          uVar11 = uVar12;
        }
        bVar4 = BlockingSend(this,(uchar *)pFVar13,uVar11);
        if (bVar4) {
          pFVar13 = pFVar13 + uVar11;
          uVar12 = uVar12 - uVar11;
        }
        else {
          if (0xf < uVar14) goto LAB_14eace4d8;
          FWindowsPlatformProcess::Sleep(fVar3);
          uVar14 = uVar14 + 1;
          if (5 < (byte)LogTcpMessaging._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
          }
        }
      }
    }
    this->TotalBytesSent = this->TotalBytesSent + (longlong)(pFVar1->DataArray).ArrayNum;
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_128);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar4 = true;
  }
  else {
    if (5 < (byte)LogTcpMessaging._0_1_) {
      pFVar7 = ::FName::FName(&local_68,L"WINDOWS");
      pIVar8 = ISocketSubsystem::Get(pFVar7);
      (**(code **)(pIVar8->_padding_ + 0xb8))(pIVar8);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
    }
    if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_128);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar4 = false;
  }
  return bVar4;
}

// SendHeader @ 14eace580

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTcpMessageTransportConnection::SendHeader(FTcpMessageTransportConnection *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  char cVar1;
  bool bVar2;
  FName *pFVar3;
  ISocketSubsystem *pIVar4;
  undefined1 auVar5 [16];
  FName local_res10;
  uint local_f8;
  uint local_f4;
  FGuid local_f0;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_d8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_30;
  
  if (this->bSentHeader != false) {
    return true;
  }
  lpCriticalSection = &this->SendCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = ::FName::FName(&local_res10,L"WINDOWS");
    pIVar4 = ISocketSubsystem::Get(pFVar3);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = __real_4187d78404000000;
    auVar5 = roundpd(auVar5,auVar5,1);
    cVar1 = (**(code **)(this->Socket->_padding_ + 0x80))(this->Socket,1,(longlong)auVar5._0_8_);
    if (cVar1 == '\0') {
      bVar2 = true;
    }
    else {
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      local_d8._padding_ = 0;
      FArchiveState::FArchiveState((FArchiveState *)&local_d8);
      local_d8._padding_ = 0;
      local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_
      ;
      local_d8.Bytes = &local_30;
      local_d8.ArchiveName.ComparisonIndex.Value = 0;
      local_d8.ArchiveName.Number = 0;
      FArchiveState::SetIsSaving((FArchiveState *)&local_d8,true);
      (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
      local_f0.A = (this->LocalNodeId).A;
      local_f0.B = (this->LocalNodeId).B;
      local_f0.C = (this->LocalNodeId).C;
      local_f0.D = (this->LocalNodeId).D;
      local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_30.ArrayNum = 0;
      local_30.ArrayMax = 0;
      local_d8._padding_ = (longlong)&___7FBufferArchive__6B_;
      local_f8 = 0x45504943;
      local_f4 = 2;
      if (*(uint **)(local_d8._padding_ + 8) < *(uint **)local_d8._padding_ + 1) {
        if ((local_d8._padding_ & 0x10000U) == 0) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_d8,&local_f8,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,&local_f8);
        }
      }
      else {
        local_f8 = **(uint **)local_d8._padding_;
        *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 4;
      }
      if (*(uint **)(local_d8._padding_ + 8) < *(uint **)local_d8._padding_ + 1) {
        if ((local_d8._padding_ & 0x10000U) == 0) {
          if (*(code **)(local_d8._padding_ + 0x188) ==
              TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
            TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_d8,&local_f4,4);
          }
          else {
            (**(code **)(local_d8._padding_ + 0x188))();
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,&local_f4);
        }
      }
      else {
        local_f4 = **(uint **)local_d8._padding_;
        *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 4;
      }
      ::operator<<((FArchive *)&local_d8,&local_f0);
      bVar2 = BlockingSend(this,(uchar *)local_30.AllocatorInstance.Data,0x18);
      if (bVar2) {
        this->TotalBytesSent = this->TotalBytesSent + 0x18;
        this->bSentHeader = true;
        bVar2 = true;
      }
      else {
        if (5 < (byte)LogTcpMessaging._0_1_) {
          (**(code **)(pIVar4->_padding_ + 0xb8))(pIVar4);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
        }
        bVar2 = false;
      }
      if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.AllocatorInstance.Data);
      }
      FArchive::~FArchive((FArchive *)&local_d8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Start @ 14eace8b0

void __thiscall FTcpMessageTransportConnection::Start(FTcpMessageTransportConnection *this)

{
  code *pcVar1;
  bool bVar2;
  FRunnableThread *pFVar3;
  ForAnyElementType FVar4;
  FString local_28;
  FString local_18;
  
  if ((this->Thread != (FRunnableThread *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Thread == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Messaging\\TcpMessaging\\Source\\TcpMessaging\\Private\\Transport\\TcpMessageTransportConnection.cpp"
                         ,0x68,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bRun = true;
  FIPv4Endpoint::ToString(&this->RemoteEndpoint,&local_18);
  ::FString::PrintfImpl(&local_28,L"FTcpMessageTransportConnection %s");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar4.Data = local_28.Data.AllocatorInstance.Data;
  }
  pFVar3 = FRunnableThread::Create
                     ((FRunnable *)this,(wchar_t *)FVar4.Data,0x20000,TPri_Normal,0xffffffffffffffff
                      ,None);
  this->Thread = pFVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Stop @ 14eaceb90

void __thiscall FTcpMessageTransportConnection::Stop(FTcpMessageTransportConnection *this)

{
  if (this->Socket != (FSocket *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014eaceb9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->Socket->_padding_ + 0x10))();
    return;
  }
  return;
}

