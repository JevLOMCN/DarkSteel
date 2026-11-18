// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 14

// FTcpMessageTransport @ 14eac77a0

FTcpMessageTransport * __thiscall
FTcpMessageTransport::FTcpMessageTransport
          (FTcpMessageTransport *this,FIPv4Endpoint *param_1,
          TArray<FIPv4Endpoint,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4)

{
  TArray<FIPv4Endpoint,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FName *pFVar4;
  ISocketSubsystem *pIVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  FRunnableThread *pFVar9;
  FName local_res8;
  
  pTVar1 = &this->ConnectToEndpoints;
  pTVar8 = (TNode *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__IMessageTransport__;
  this->ListenEndpoint = *param_1;
  piVar2 = &(this->ConnectToEndpoints).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_2->ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  (this->ConnectToEndpoints).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  this->ConnectionRetryPeriod = param_4;
  this->ConnectionRetryDelay = param_3;
  this->bStopping = false;
  pFVar4 = ::FName::FName(&local_res8,L"WINDOWS");
  pIVar5 = ISocketSubsystem::Get(pFVar4);
  this->SocketSubsystem = pIVar5;
  this->Listener = (FTcpListener *)0x0;
  (this->Connections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Connections).ArrayNum = 0;
  (this->Connections).ArrayMax = 0;
  *(undefined8 *)&this->NodeConnectionMap = 0;
  *(undefined8 *)&(this->NodeConnectionMap).field_0x8 = 0;
  *(undefined8 *)&(this->NodeConnectionMap).field_0x20 = 0;
  *(undefined4 *)&(this->NodeConnectionMap).field_0x28 = 0;
  *(undefined4 *)&(this->NodeConnectionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeConnectionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeConnectionMap).field_0x34 = 0;
  *(undefined8 *)&(this->NodeConnectionMap).field_0x40 = 0;
  *(undefined4 *)&(this->NodeConnectionMap).field_0x48 = 0;
  pTVar6 = ::operator_new(0x30);
  pTVar7 = pTVar8;
  if (pTVar6 != (TNode *)0x0) {
    pTVar6->NextNode = (TNode *)0x0;
    (pTVar6->Item).bNewNode = false;
    *(undefined3 *)&(pTVar6->Item).field_0x1 = 0;
    (pTVar6->Item).NodeId.A = 0;
    (pTVar6->Item).NodeId.B = 0;
    (pTVar6->Item).NodeId.C = 0;
    *(undefined8 *)&(pTVar6->Item).NodeId.D = 0;
    (pTVar6->Item).Connection.Object = (FTcpMessageTransportConnection *)0x0;
    (pTVar6->Item).Connection.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar6->NextNode = (TNode *)0x0;
    (pTVar6->Item).bNewNode = false;
    (pTVar6->Item).NodeId.A = 0;
    (pTVar6->Item).NodeId.B = 0;
    (pTVar6->Item).NodeId.C = 0;
    (pTVar6->Item).NodeId.D = 0;
    (pTVar6->Item).Connection.Object = (FTcpMessageTransportConnection *)0x0;
    (pTVar6->Item).Connection.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar7 = pTVar6;
  }
  (this->NodeConnectionMapUpdates).Tail = pTVar7;
  (this->NodeConnectionMapUpdates).Head = pTVar7;
  pTVar6 = ::operator_new(0x18);
  pTVar7 = pTVar8;
  if (pTVar6 != (TNode *)0x0) {
    pTVar6->NextNode = (TNode *)0x0;
    (pTVar6->Item).bNewNode = false;
    *(undefined3 *)&(pTVar6->Item).field_0x1 = 0;
    (pTVar6->Item).NodeId.A = 0;
    (pTVar6->Item).NodeId.B = 0;
    (pTVar6->Item).NodeId.C = 0;
    pTVar6->NextNode = (TNode *)0x0;
    (pTVar6->Item).bNewNode = false;
    *(undefined3 *)&(pTVar6->Item).field_0x1 = 0;
    (pTVar6->Item).NodeId.A = 0;
    (pTVar6->Item).NodeId.B = 0;
    (pTVar6->Item).NodeId.C = 0;
    pTVar7 = pTVar6;
  }
  (this->PendingConnections).Tail = (TNode *)pTVar7;
  (this->PendingConnections).Head = (TNode *)pTVar7;
  pTVar7 = ::operator_new(0x10);
  if (pTVar7 != (TNode *)0x0) {
    pTVar7->NextNode = (TNode *)0x0;
    (pTVar7->Item).bNewNode = false;
    *(undefined3 *)&(pTVar7->Item).field_0x1 = 0;
    (pTVar7->Item).NodeId.A = 0;
    pTVar7->NextNode = (TNode *)0x0;
    pTVar8 = pTVar7;
  }
  (this->ConnectionEndpointsToRemove).Tail = (TNode *)pTVar8;
  (this->ConnectionEndpointsToRemove).Head = (TNode *)pTVar8;
  this->TransportHandler = (IMessageTransportHandler *)0x0;
  pFVar9 = FRunnableThread::Create
                     ((FRunnable *)this,L"FTcpMessageTransport",0x20000,TPri_Normal,
                      0xffffffffffffffff,None);
  this->Thread = pFVar9;
  return this;
}

// ~FTcpMessageTransport @ 14eac7d60

void __thiscall FTcpMessageTransport::~FTcpMessageTransport(FTcpMessageTransport *this)

{
  FRunnableThread *pFVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__IMessageTransport__;
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
  }
  StopTransport((FTcpMessageTransport *)&this->_padding_);
  pTVar2 = (this->ConnectionEndpointsToRemove).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->ConnectionEndpointsToRemove).Tail = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x10);
    pTVar2 = (this->ConnectionEndpointsToRemove).Tail;
  }
  pTVar3 = (this->PendingConnections).Tail;
  while (pTVar3 != (TNode *)0x0) {
    (this->PendingConnections).Tail = pTVar3->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar3->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar3,0x18);
    pTVar3 = (this->PendingConnections).Tail;
  }
  TQueue<FNodeConnectionMapUpdate,0>::~TQueue<FNodeConnectionMapUpdate,0>
            (&this->NodeConnectionMapUpdates);
  *(undefined4 *)&(this->NodeConnectionMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->NodeConnectionMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NodeConnectionMap);
  DestructItems<TSharedPtr<FTcpMessageTransportConnection,1>,int>
            ((TSharedPtr<FTcpMessageTransportConnection,1> *)
             (this->Connections).AllocatorInstance.Data,(this->Connections).ArrayNum);
  pFVar5 = (this->Connections).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->ConnectToEndpoints).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  this->_padding_ = (longlong)&___7IMessageTransport__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// AddOutgoingConnection @ 14eac8960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTcpMessageTransport::AddOutgoingConnection(FTcpMessageTransport *this,FIPv4Endpoint *param_1)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  char cVar3;
  FSocket *pFVar4;
  FName *pFVar5;
  ISocketSubsystem *pIVar6;
  FTcpMessageTransportConnection *this_00;
  FTcpMessageTransportConnection *pFVar7;
  TRawPtrProxy<FTcpMessageTransportConnection> local_res18;
  FName local_res20;
  longlong *local_b8;
  TReferenceControllerBase<1> *local_b0;
  FTcpSocketBuilder local_a8;
  FString local_68;
  TSharedPtr<FTcpMessageTransportConnection,1> local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(&local_68,L"FTcpMessageTransport.RemoteConnection");
  _Src.Data = local_68.Data.AllocatorInstance.Data;
  pFVar7 = (FTcpMessageTransportConnection *)0x0;
  local_a8.Blocking = false;
  local_a8.Bound = false;
  local_a8.BoundEndpoint.Address.field0_0x0._s_0 = FIPv4Address::Any.field0_0x0;
  local_a8.BoundEndpoint.Port = 0;
  local_a8.Description.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_68.Data.ArrayNum == 0) {
    local_a8.Description.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_a8.Description,
               local_68.Data.ArrayNum,&local_a8.Description.Data.ArrayMax);
    memcpy(local_a8.Description.Data.AllocatorInstance.Data,_Src.Data,
           (longlong)local_68.Data.ArrayNum * 2);
  }
  local_a8.Linger = false;
  local_a8.LingerTimeout = 0;
  local_a8.Listen = false;
  local_a8.ReceiveBufferSize = 0;
  local_a8.Reusable = false;
  local_a8.SendBufferSize = 0;
  pFVar4 = FTcpSocketBuilder::Build(&local_a8);
  if (local_a8.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Description.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (pFVar4 == (FSocket *)0x0) {
    if (1 < (byte)LogTcpMessaging._0_1_) {
      FIPv4Endpoint::ToString(param_1,&local_48);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pcVar1 = *(code **)(pFVar4->_padding_ + 0x28);
    if ((FIPv4Endpoint::CachedSocketSubsystem == (ISocketSubsystem *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("CachedSocketSubsystem != nullptr && \"Networking module not loaded and initialized\""
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Networking\\Public\\Interfaces\\IPv4\\IPv4Endpoint.h"
                           ,0x72,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(FIPv4Endpoint::CachedSocketSubsystem->_padding_ + 0x90))
              (FIPv4Endpoint::CachedSocketSubsystem,&local_b8);
    (**(code **)(*local_b8 + 0x18))(local_b8,(param_1->Address).field0_0x0.Value);
    (**(code **)(*local_b8 + 0x28))(local_b8,param_1->Port);
    cVar3 = (*pcVar1)(pFVar4,local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    if (cVar3 == '\0') {
      if (1 < (byte)LogTcpMessaging._0_1_) {
        FIPv4Endpoint::ToString(param_1,&local_38);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      pFVar5 = ::FName::FName(&local_res20,L"WINDOWS");
      pIVar6 = ISocketSubsystem::Get(pFVar5);
      (**(code **)(pIVar6->_padding_ + 0x38))(pIVar6,pFVar4);
    }
    else {
      this_00 = ::operator_new(0x100);
      if ((((this_00 != (FTcpMessageTransportConnection *)0x0) &&
           (pFVar7 = FTcpMessageTransportConnection::FTcpMessageTransportConnection
                               (this_00,pFVar4,param_1,this->ConnectionRetryDelay,
                                this->ConnectionRetryPeriod),
           pFVar7 != (FTcpMessageTransportConnection *)0x0)) &&
          (*(longlong *)&pFVar7->field_0x8 != 0)) &&
         (((*(longlong *)&pFVar7->field_0x10 != 0 &&
           (0 < *(int *)(*(longlong *)&pFVar7->field_0x10 + 8))) &&
          (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InObject || !InObject->DoesSharedInstanceExist()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x7a5,L"Trying to share an already-shared object"), bVar2)))) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_res18.Object = pFVar7;
      TSharedPtr<FTcpMessageTransportConnection,1>::
      TSharedPtr<FTcpMessageTransportConnection,1><FTcpMessageTransportConnection>
                (&local_58,&local_res18);
      TQueue<TSharedPtr<FTcpMessageTransportConnection,1>,0>::Enqueue
                (&this->PendingConnections,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// Exit @ 14eaca840

void __thiscall FTcpMessageTransport::Exit(FTcpMessageTransport *this)

{
  return;
}

// GetDebugName @ 14eacaa60

FName __thiscall FTcpMessageTransport::GetDebugName(FTcpMessageTransport *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"TcpMessageTransport");
  return in_RDX;
}

// HandleConnectionStateChanged @ 14eacaf60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTcpMessageTransport::HandleConnectionStateChanged
          (FTcpMessageTransport *this,TSharedPtr<FTcpMessageTransportConnection,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTcpMessageTransportConnection *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FIPv4Endpoint local_res10;
  FGuid local_c8;
  FString local_b8;
  FString local_a8;
  FNodeConnectionMapUpdate local_98;
  FNodeConnectionMapUpdate local_70;
  FString local_48;
  FString local_38;
  
  if ((param_1->Object == (FTcpMessageTransportConnection *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = param_1->Object;
  local_c8.A = (pFVar3->RemoteNodeId).A;
  local_c8.B = (pFVar3->RemoteNodeId).B;
  local_c8.C = (pFVar3->RemoteNodeId).C;
  local_c8.D = (pFVar3->RemoteNodeId).D;
  if ((pFVar3 == (FTcpMessageTransportConnection *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_res10 = param_1->Object->RemoteEndpoint;
  if ((param_1->Object == (FTcpMessageTransportConnection *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = param_1->Object;
  if (pFVar3->ConnectionState == STATE_Connected) {
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    local_98.bNewNode = true;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_98.NodeId.D = local_c8.D;
    local_98.NodeId.C = local_c8.C;
    local_98.NodeId.B = local_c8.B;
    local_98.NodeId.A = local_c8.A;
    local_98.Connection.Object = pFVar3;
    local_98.Connection.WeakReferenceCount.ReferenceController = pTVar4;
    TQueue<FNodeConnectionMapUpdate,0>::Enqueue(&this->NodeConnectionMapUpdates,&local_98);
    if (local_98.Connection.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_98.Connection.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_98.Connection.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_98.Connection.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (**(code **)*this->TransportHandler)(this->TransportHandler,&local_c8);
    if (4 < (byte)LogTcpMessaging._0_1_) {
      FIPv4Endpoint::ToString(&local_res10,&local_48);
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      FGuid::AppendString(&local_c8,&local_b8,Digits);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (((local_c8.D != 0 || local_c8.C != 0) || local_c8.B != 0) || local_c8.A != 0) {
    if (4 < (byte)LogTcpMessaging._0_1_) {
      FIPv4Endpoint::ToString(&local_res10,&local_38);
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      FGuid::AppendString(&local_c8,&local_a8,Digits);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    local_70.Connection.Object = param_1->Object;
    local_70.bNewNode = false;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_70.NodeId.D = local_c8.D;
    local_70.NodeId.C = local_c8.C;
    local_70.NodeId.B = local_c8.B;
    local_70.NodeId.A = local_c8.A;
    local_70.Connection.WeakReferenceCount.ReferenceController = pTVar4;
    TQueue<FNodeConnectionMapUpdate,0>::Enqueue(&this->NodeConnectionMapUpdates,&local_70);
    if (local_70.Connection.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_70.Connection.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_70.Connection.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_70.Connection.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (**(code **)((longlong)*this->TransportHandler + 8))(this->TransportHandler,&local_c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// HandleListenerConnectionAccepted @ 14eacb2d0

bool __thiscall
FTcpMessageTransport::HandleListenerConnectionAccepted
          (FTcpMessageTransport *this,FSocket *param_1,FIPv4Endpoint *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FTcpMessageTransportConnection *this_00;
  FTcpMessageTransportConnection *pFVar4;
  TRawPtrProxy<FTcpMessageTransportConnection> local_res8;
  TSharedPtr<FTcpMessageTransportConnection,1> local_18;
  
  this_00 = ::operator_new(0x100);
  pFVar4 = (FTcpMessageTransportConnection *)0x0;
  if (this_00 != (FTcpMessageTransportConnection *)0x0) {
    pFVar4 = FTcpMessageTransportConnection::FTcpMessageTransportConnection
                       (this_00,param_1,param_2,0,0);
    if ((((pFVar4 != (FTcpMessageTransportConnection *)0x0) &&
         (*(longlong *)&pFVar4->field_0x8 != 0)) && (*(longlong *)&pFVar4->field_0x10 != 0)) &&
       (0 < *(int *)(*(longlong *)&pFVar4->field_0x10 + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
  }
  local_res8.Object = pFVar4;
  TSharedPtr<FTcpMessageTransportConnection,1>::
  TSharedPtr<FTcpMessageTransportConnection,1><FTcpMessageTransportConnection>
            (&local_18,&local_res8);
  TQueue<TSharedPtr<FTcpMessageTransportConnection,1>,0>::Enqueue
            (&this->PendingConnections,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// Init @ 14eacb6a0

bool __thiscall FTcpMessageTransport::Init(FTcpMessageTransport *this)

{
  return true;
}

// RemoveOutgoingConnection @ 14eaccc40

void __thiscall
FTcpMessageTransport::RemoveOutgoingConnection(FTcpMessageTransport *this,FIPv4Endpoint *param_1)

{
  TQueue<FIPv4Endpoint,0> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  pTVar1 = &this->ConnectionEndpointsToRemove;
  pTVar3 = ::operator_new(0x10);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    pTVar3->Item = *param_1;
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar3;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar3;
    UNLOCK();
  }
  return;
}

// Run @ 14eacd0b0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FTcpMessageTransport::Run(FTcpMessageTransport *this)

{
  TArray<TSharedPtr<FTcpMessageTransportConnection,1>,TSizedDefaultAllocator<32>_> *this_00;
  TSharedPtr<FTcpMessageTransportConnection,1> *pTVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  FIPv4Endpoint FVar8;
  TNode *pTVar9;
  undefined8 uVar10;
  longlong lVar11;
  void *pvVar12;
  IMessageTransportHandler *pIVar13;
  code *pcVar14;
  float fVar15;
  float fVar16;
  FTcpMessageTransportConnection *pFVar17;
  FSharedReferencer<1> FVar18;
  ushort uVar19;
  FScriptContainerElement *pFVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  undefined8 *puVar24;
  ulong64 uVar25;
  FRunnableThread *pFVar26;
  longlong lVar27;
  FWeakObjectPtr *pFVar28;
  UStruct *this_01;
  ForAnyElementType FVar29;
  uint uVar30;
  ulonglong uVar31;
  FScriptContainerElement *pFVar32;
  ulonglong uVar33;
  longlong *plVar34;
  float fVar35;
  undefined1 local_res10 [8];
  int local_res18;
  uint local_res20;
  FTcpMessageTransportConnection *local_150;
  FSharedReferencer<1> FStack_148;
  longlong *local_140;
  FSharedReferencer<1> FStack_138;
  FTopLevelAssetPath local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  FIPv4Endpoint local_110;
  FScriptContainerElement *local_108;
  undefined8 local_100;
  FSharedReferencer<1> aFStack_f8 [2];
  code *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  FString local_d8;
  longlong *local_c8;
  FSharedReferencer<1> FStack_c0;
  longlong *local_b8;
  TReferenceControllerBase<1> *local_b0;
  FString local_a8;
  FDestructionSentinel local_98;
  undefined1 *local_80;
  FString local_78 [3];
  
  fVar16 = __real_3f800000;
  fVar15 = __real_3c23d70a;
  if (this->bStopping == false) {
    this_00 = &this->Connections;
    do {
      iVar4 = local_a8.Data.ArrayMax;
      local_150 = (FTcpMessageTransportConnection *)0x0;
      FStack_148.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      while (pTVar5 = ((this->PendingConnections).Tail)->NextNode, pTVar5 != (TNode *)0x0) {
        pTVar1 = &pTVar5->Item;
        if ((TSharedPtr<FTcpMessageTransportConnection,1> *)&local_150 != pTVar1) {
          local_150 = pTVar1->Object;
          pTVar1->Object = (FTcpMessageTransportConnection *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&FStack_148,&(pTVar5->Item).SharedReferenceCount);
        }
        pTVar6 = (this->PendingConnections).Tail;
        (this->PendingConnections).Tail = pTVar5;
        local_100 = 0;
        aFStack_f8[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pTVar1 != (TSharedPtr<FTcpMessageTransportConnection,1> *)&local_100) {
          pTVar1->Object = (FTcpMessageTransportConnection *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pTVar5->Item).SharedReferenceCount,aFStack_f8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (aFStack_f8[0].ReferenceController);
        if (pTVar6 != (TNode *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pTVar6->Item).SharedReferenceCount.ReferenceController);
          ::operator_delete(pTVar6,0x18);
        }
        if ((local_150 == (FTcpMessageTransportConnection *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar14 = (code *)swi(3);
          uVar22 = (*pcVar14)();
          return uVar22;
        }
        pFVar17 = local_150;
        local_e8 = HandleConnectionStateChanged;
        uStack_e0 = 0;
        iStack_dc = iVar4;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &local_150->ConnectionStateChangedDelegate,(FWriteAccessScope *)&local_98);
        local_80 = &(pFVar17->ConnectionStateChangedDelegate).field_0x8;
        puVar24 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_80);
        if (puVar24 != (undefined8 *)0x0) {
          *puVar24 = &
                     ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__V__TSharedPtr_VFTcpMessageTransportConnection___00____6B_
          ;
          puVar24[1] = local_150;
          puVar24[2] = FStack_148.ReferenceController;
          if (FStack_148.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_148.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_148.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          uVar25 = FDelegateHandle::GenerateNewID();
          puVar24[3] = uVar25;
          puVar24[5] = local_e8;
          puVar24[6] = CONCAT44(iStack_dc,uStack_e0);
          *puVar24 = &
                     ___7__TBaseRawMethodDelegateInstance__0A_VFTcpMessageTransport____A6AXXZUFDefaultDelegateUserPolicy__V__TSharedPtr_VFTcpMessageTransportConnection___00____6B_
          ;
          puVar24[4] = this;
          if ((puVar24[5] == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InUserObject != nullptr && MethodPtr != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                  ,0x1d8,L""), bVar21)) {
            pcVar14 = (code *)swi(3);
            uVar22 = (*pcVar14)();
            return uVar22;
          }
        }
        if (local_98.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
        }
        if ((local_150 == (FTcpMessageTransportConnection *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar14 = (code *)swi(3);
          uVar22 = (*pcVar14)();
          return uVar22;
        }
        pFVar17 = local_150;
        if ((local_150->Thread != (FRunnableThread *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Thread == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Messaging\\TcpMessaging\\Source\\TcpMessaging\\Private\\Transport\\TcpMessageTransportConnection.cpp"
                                ,0x68,L""), bVar21)) {
          pcVar14 = (code *)swi(3);
          uVar22 = (*pcVar14)();
          return uVar22;
        }
        pFVar17->bRun = true;
        FIPv4Endpoint::ToString(&pFVar17->RemoteEndpoint,local_78);
        ::FString::PrintfImpl(&local_d8,L"FTcpMessageTransportConnection %s");
        FVar29.Data = (FScriptContainerElement *)L"";
        if (local_d8.Data.ArrayNum != 0) {
          FVar29.Data = local_d8.Data.AllocatorInstance.Data;
        }
        pFVar26 = FRunnableThread::Create
                            ((FRunnable *)pFVar17,(wchar_t *)FVar29.Data,0x20000,TPri_Normal,
                             0xffffffffffffffff,None);
        pFVar17->Thread = pFVar26;
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
        }
        pFVar32 = (this_00->AllocatorInstance).Data;
        if (((pFVar32 <= (FScriptContainerElement *)&local_150) &&
            ((FScriptContainerElement *)&local_150 <
             pFVar32 + (longlong)(this->Connections).ArrayMax * 0x10)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar14 = (code *)swi(3);
          uVar22 = (*pcVar14)();
          return uVar22;
        }
        iVar23 = (this->Connections).ArrayNum;
        piVar2 = &(this->Connections).ArrayMax;
        if (iVar23 == *piVar2) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&this_00->AllocatorInstance,piVar2);
        }
        (this->Connections).ArrayNum = iVar23 + 1;
        pFVar32 = (this_00->AllocatorInstance).Data;
        *(FTcpMessageTransportConnection **)(pFVar32 + (longlong)iVar23 * 0x10) = local_150;
        *(TReferenceControllerBase<1> **)(pFVar32 + (longlong)iVar23 * 0x10 + 8) =
             FStack_148.ReferenceController;
        if (FStack_148.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_148.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FStack_148.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_148.ReferenceController);
LAB_14eacd480:
      uVar33 = 0;
      pTVar7 = ((this->ConnectionEndpointsToRemove).Tail)->NextNode;
      if (pTVar7 != (TNode *)0x0) {
        FVar8 = pTVar7->Item;
        pTVar9 = (this->ConnectionEndpointsToRemove).Tail;
        (this->ConnectionEndpointsToRemove).Tail = pTVar7;
        pTVar7->Item = (FIPv4Endpoint)this;
        local_110 = FVar8;
        ::operator_delete(pTVar9,0x10);
        if (0 < (this->Connections).ArrayNum) {
          uVar19 = local_110.Port;
          uVar31 = uVar33;
          do {
            uVar30 = (uint)uVar31;
            uVar22 = 0;
            if ((int)uVar30 < (this->Connections).ArrayNum) {
              uVar22 = ~uVar30 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar14 = (code *)swi(3);
              uVar22 = (*pcVar14)();
              return uVar22;
            }
            pFVar32 = (this_00->AllocatorInstance).Data;
            if ((*(longlong *)(pFVar32 + uVar33) == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar21)) {
              pcVar14 = (code *)swi(3);
              uVar22 = (*pcVar14)();
              return uVar22;
            }
            uVar10 = *(undefined8 *)(*(longlong *)(pFVar32 + uVar33) + 0x58);
            if (((FIPv4Address_u_0)(uint)uVar10 == FVar8.Address.field0_0x0.field0_0x0) &&
               ((ushort)((ulonglong)uVar10 >> 0x20) == uVar19)) {
              if ((*(longlong *)(pFVar32 + uVar33) == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar21)) {
                pcVar14 = (code *)swi(3);
                uVar22 = (*pcVar14)();
                return uVar22;
              }
              lVar27 = *(longlong *)(pFVar32 + uVar33);
              if (*(longlong **)(lVar27 + 0x90) != (longlong *)0x0) {
                *(undefined1 *)(lVar27 + 0xa8) = 0;
                (**(code **)(**(longlong **)(lVar27 + 0x90) + 0x20))();
                plVar34 = *(longlong **)(lVar27 + 0x90);
                if (plVar34 != (longlong *)0x0) {
                  (**(code **)(*plVar34 + 0x30))(plVar34,1);
                }
                *(undefined8 *)(lVar27 + 0x90) = 0;
              }
              if (*(longlong **)(lVar27 + 0x88) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar27 + 0x88) + 0x10))();
              }
              break;
            }
            uVar31 = (ulonglong)(uVar30 + 1);
            uVar33 = uVar33 + 0x10;
          } while ((int)(uVar30 + 1) < (this->Connections).ArrayNum);
        }
        goto LAB_14eacd480;
      }
      uVar31 = 0;
      local_res18 = 0;
      uVar33 = uVar31;
      if (0 < (this->Connections).ArrayNum) {
        do {
          uVar30 = (uint)uVar31;
          uVar22 = 0;
          if ((int)uVar30 < (this->Connections).ArrayNum) {
            uVar22 = ~uVar30 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar14 = (code *)swi(3);
            uVar22 = (*pcVar14)();
            return uVar22;
          }
          pFVar32 = (this->Connections).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar32 + uVar33) == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar21)) {
            pcVar14 = (code *)swi(3);
            uVar22 = (*pcVar14)();
            return uVar22;
          }
          iVar4 = *(int *)(*(longlong *)(pFVar32 + uVar33) + 0x30);
          if (iVar4 == 1) {
            local_res18 = local_res18 + 1;
          }
          else if (iVar4 == 3) {
            uVar22 = 0;
            if ((int)uVar30 < (this->Connections).ArrayNum) {
              uVar22 = ~uVar30 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar14 = (code *)swi(3);
              uVar22 = (*pcVar14)();
              return uVar22;
            }
            TArray<TSharedPtr<FTcpMessageTransportConnection,1>,TSizedDefaultAllocator<32>_>::
            RemoveAtSwapImpl(this_00,uVar30);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&this_00->AllocatorInstance,(this->Connections).ArrayNum,
                       &(this->Connections).ArrayMax);
            uVar30 = uVar30 - 1;
            uVar33 = uVar33 - 0x10;
          }
          uVar31 = (ulonglong)(uVar30 + 1);
          uVar33 = uVar33 + 0x10;
        } while ((int)(uVar30 + 1) < (this->Connections).ArrayNum);
      }
      local_res20 = (this->Connections).ArrayNum;
      uVar33 = (ulonglong)(int)local_res20;
      pFVar32 = (this_00->AllocatorInstance).Data;
      local_108 = pFVar32 + uVar33 * 0x10;
      while( true ) {
        pFVar20 = local_108;
        if ((this->Connections).ArrayNum != (int)uVar33) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FTcpMessageTransportConnection,1>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar32 == pFVar20) break;
        local_140 = (longlong *)0x0;
        FStack_138.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        plVar34 = (longlong *)0x0;
        local_120 = 0;
        uStack_118 = 0;
        while( true ) {
          if ((*(longlong *)pFVar32 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar21)) {
            pcVar14 = (code *)swi(3);
            uVar22 = (*pcVar14)();
            return uVar22;
          }
          lVar27 = *(longlong *)pFVar32;
          lVar11 = **(longlong **)(lVar27 + 0x48);
          if (lVar11 == 0) break;
          pplVar3 = (longlong **)(lVar11 + 8);
          if (&local_140 != pplVar3) {
            local_140 = *pplVar3;
            *pplVar3 = (longlong *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&FStack_138,(FSharedReferencer<1> *)(lVar11 + 0x10));
            plVar34 = local_140;
          }
          pvVar12 = *(void **)(lVar27 + 0x48);
          *(longlong *)(lVar27 + 0x48) = lVar11;
          local_c8 = (longlong *)0x0;
          FStack_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (pplVar3 != &local_c8) {
            *pplVar3 = (longlong *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(lVar11 + 0x10),&FStack_c0);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_c0.ReferenceController);
          if (pvVar12 != (void *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)pvVar12 + 0x10));
            ::operator_delete(pvVar12,0x18);
          }
          local_120 = *(undefined8 *)(lVar27 + 0x70);
          uStack_118 = *(undefined8 *)(lVar27 + 0x78);
          if (5 < (byte)LogTcpMessaging._0_1_) {
            if ((plVar34 == (longlong *)0x0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar21)) {
              pcVar14 = (code *)swi(3);
              uVar22 = (*pcVar14)();
              return uVar22;
            }
            lVar27 = (**(code **)(*plVar34 + 0x18))(plVar34);
            if (lVar27 == 0) {
LAB_14eacd931:
              local_130.PackageName.ComparisonIndex.Value = 0;
              local_130.PackageName.Number = 0;
              local_130.AssetName.ComparisonIndex.Value = 0;
              local_130.AssetName.Number = 0;
            }
            else {
              pFVar28 = (FWeakObjectPtr *)(**(code **)(*plVar34 + 0x20))(plVar34);
              bVar21 = FWeakObjectPtr::IsValid(pFVar28,false,true);
              if (!bVar21) goto LAB_14eacd931;
              pFVar28 = (FWeakObjectPtr *)(**(code **)(*plVar34 + 0x20))(plVar34);
              this_01 = (UStruct *)FWeakObjectPtr::Get(pFVar28);
              UStruct::GetStructPathName(this_01,&local_130);
            }
            FTopLevelAssetPath::ToString(&local_130,&local_a8);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          pIVar13 = this->TransportHandler;
          pcVar14 = *(code **)((longlong)*pIVar13 + 0x10);
          if ((plVar34 == (longlong *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar21)) {
            pcVar14 = (code *)swi(3);
            uVar22 = (*pcVar14)();
            return uVar22;
          }
          FVar18.ReferenceController = FStack_138.ReferenceController;
          if (FStack_138.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_138.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_138.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((plVar34 == (longlong *)0x0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar21)) {
            pcVar14 = (code *)swi(3);
            uVar22 = (*pcVar14)();
            return uVar22;
          }
          local_b0 = FVar18.ReferenceController;
          if (FVar18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar18.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar18.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_b8 = plVar34;
          (*pcVar14)(pIVar13,&local_b8,&local_120);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar18.ReferenceController);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_138.ReferenceController);
        pFVar32 = pFVar32 + 0x10;
        uVar33 = (ulonglong)local_res20;
      }
      fVar35 = fVar16;
      if (0 < local_res18) {
        fVar35 = fVar15;
      }
      FWindowsPlatformProcess::Sleep(fVar35);
    } while (this->bStopping == false);
  }
  return 0;
}

// StartTransport @ 14eace990

bool __thiscall
FTcpMessageTransport::StartTransport(FTcpMessageTransport *this,IMessageTransportHandler *param_1)

{
  IMessageTransportHandler **this_00;
  FIPv4Endpoint FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ISocketSubsystem *pIVar6;
  FRunnableThread *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  ISocketSubsystem *pIVar10;
  FIPv4Endpoint FVar11;
  undefined1 auVar12 [16];
  undefined1 local_res8 [8];
  uint uStack_3c;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  this_00 = &this[-1].TransportHandler;
  this->Thread = (FRunnableThread *)param_1;
  if (((FIPv4Address_u_0)*(FIPv4Address_u_0 *)&this->_padding_ !=
       FIPv4Endpoint::Any.Address.field0_0x0) ||
     (*(ushort *)((longlong)&this->_padding_ + 4) != FIPv4Endpoint::Any.Port)) {
    pIVar6 = ::operator_new(0x50);
    pIVar10 = (ISocketSubsystem *)0x0;
    if (pIVar6 != (ISocketSubsystem *)0x0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = __real_416312d010000000;
      pIVar6->_padding_ = (longlong)&___7FTcpListener__6B_;
      *(undefined1 *)(pIVar6->HostNameCacheSync).CriticalSection.Opaque1 = 1;
      *(longlong *)((longlong)(pIVar6->HostNameCacheSync).CriticalSection.Opaque1 + 4) =
           this->_padding_;
      auVar12 = roundpd(auVar12,auVar12,1);
      (pIVar6->HostNameCacheSync).CriticalSection.Opaque3[1] = (void *)0x0;
      *(undefined2 *)((pIVar6->HostNameCacheSync).CriticalSection.Opaque3 + 2) = 0x100;
      (pIVar6->HostNameCacheSync).CriticalSection.Opaque3[0] = (void *)(longlong)auVar12._0_8_;
      *(undefined8 *)&(pIVar6->HostNameCache).field_0x8 = 0;
      *(undefined8 *)&(pIVar6->HostNameCache).field_0x10 = 0;
      *(undefined4 *)&(pIVar6->HostNameCache).field_0x18 = 0;
      pFVar7 = FRunnableThread::Create
                         ((FRunnable *)pIVar6,L"FTcpListener",0x2000,TPri_Normal,0xffffffffffffffff,
                          None);
      *(FRunnableThread **)&pIVar6->HostNameCache = pFVar7;
      pIVar10 = pIVar6;
    }
    this->SocketSubsystem = pIVar10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pIVar10->HostNameCache).field_0x8,(FWriteAccessScope *)&local_38);
    local_20 = &(pIVar10->HostNameCache).field_0x10;
    puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_20);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &
                ___7__TCommonDelegateInstanceState___A6A_NPEAVFSocket__AEBUFIPv4Endpoint___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[2] = uVar9;
      *puVar8 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFTcpMessageTransport____A6A_NPEAVFSocket__AEBUFIPv4Endpoint___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar8[3] = this_00;
      puVar8[4] = HandleListenerConnectionAccepted;
      puVar8[5] = (ulonglong)uStack_3c << 0x20;
      if (((this_00 == (IMessageTransportHandler **)0x0) || (puVar8[4] == 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && MethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x1d8,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  FVar11 = this->ListenEndpoint;
  iVar2 = *(int *)&(this->ConnectToEndpoints).AllocatorInstance.Data;
  FVar1 = (FIPv4Endpoint)((longlong)FVar11 + (longlong)iVar2 * 8);
  while( true ) {
    if (*(int *)&(this->ConnectToEndpoints).AllocatorInstance.Data != iVar2) {
      `TCheckedPointerIterator<FIPv4Endpoint,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar11 == FVar1) break;
    AddOutgoingConnection((FTcpMessageTransport *)this_00,(FIPv4Endpoint *)FVar11);
    FVar11 = (FIPv4Endpoint)((longlong)FVar11 + 8);
  }
  return true;
}

// Stop @ 14eaceb80

void __thiscall FTcpMessageTransport::Stop(FTcpMessageTransport *this)

{
  this->bStopping = true;
  return;
}

// StopTransport @ 14eacebb0

void __thiscall FTcpMessageTransport::StopTransport(FTcpMessageTransport *this)

{
  int *piVar1;
  int iVar2;
  ISocketSubsystem *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  TNode *pTVar8;
  TNode *pTVar9;
  code *pcVar10;
  FIPv4Endpoint FVar11;
  longlong *plVar12;
  bool bVar13;
  FTcpListener *pFVar14;
  undefined1 local_res8;
  undefined7 uStackX_9;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  
  *(undefined1 *)&this->ConnectionRetryDelay = 1;
  pIVar3 = this->SocketSubsystem;
  if (pIVar3 != (ISocketSubsystem *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x28))(pIVar3,1);
    this->SocketSubsystem = (ISocketSubsystem *)0x0;
  }
  iVar2 = *(int *)&(this->Connections).AllocatorInstance.Data;
  pFVar14 = this->Listener;
  plVar12 = &pFVar14->_padding_;
  while( true ) {
    if (*(int *)&(this->Connections).AllocatorInstance.Data != iVar2) {
      local_res8 = 0;
      `TCheckedPointerIterator<TSharedPtr<FTcpMessageTransportConnection,1>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar14 == (FTcpListener *)(plVar12 + (longlong)iVar2 * 2)) break;
    if ((pFVar14->_padding_ == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    lVar4 = pFVar14->_padding_;
    if (*(longlong **)(lVar4 + 0x90) != (longlong *)0x0) {
      *(undefined1 *)(lVar4 + 0xa8) = 0;
      (**(code **)(**(longlong **)(lVar4 + 0x90) + 0x20))();
      plVar5 = *(longlong **)(lVar4 + 0x90);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))(plVar5,1);
      }
      *(undefined8 *)(lVar4 + 0x90) = 0;
    }
    if (*(longlong **)(lVar4 + 0x88) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar4 + 0x88) + 0x10))();
    }
    pFVar14 = (FTcpListener *)&(pFVar14->Endpoint).Port;
  }
  DestructItems<TSharedPtr<FTcpMessageTransportConnection,1>,int>
            ((TSharedPtr<FTcpMessageTransportConnection,1> *)this->Listener,
             *(int *)&(this->Connections).AllocatorInstance.Data);
  piVar1 = (int *)((longlong)&(this->Connections).AllocatorInstance.Data + 4);
  *(undefined4 *)&(this->Connections).AllocatorInstance.Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&this->Listener,0,piVar1);
  }
  while (pTVar6 = ((this->PendingConnections).Head)->NextNode, pTVar6 != (TNode *)0x0) {
    pTVar7 = (this->PendingConnections).Head;
    (this->PendingConnections).Head = pTVar6;
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&pTVar6->Item != (TSharedPtr<FTcpMessageTransportConnection,1> *)&local_38) {
      (pTVar6->Item).Object = (FTcpMessageTransportConnection *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pTVar6->Item).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    if (pTVar7 != (TNode *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar7->Item).SharedReferenceCount.ReferenceController);
      ::operator_delete(pTVar7,0x18);
    }
  }
  FVar11._1_7_ = uStackX_9;
  FVar11.Address.field0_0x0._s_0.D = local_res8;
  while (pTVar8 = ((this->ConnectionEndpointsToRemove).Head)->NextNode, pTVar8 != (TNode *)0x0) {
    pTVar9 = (this->ConnectionEndpointsToRemove).Head;
    (this->ConnectionEndpointsToRemove).Head = pTVar8;
    pTVar8->Item = FVar11;
    ::operator_delete(pTVar9,0x10);
  }
  this->Thread = (FRunnableThread *)0x0;
  return;
}

// TransportMessage @ 14eacedc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
FTcpMessageTransport::TransportMessage
          (FTcpMessageTransport *this,TSharedRef<IMessageContext,1> *param_1,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2)

{
  TWeakPtr<FTcpMessageTransportConnection,1> *pTVar1;
  atomic<int> *paVar2;
  uchar **ppuVar3;
  atomic<int> aVar4;
  int iVar5;
  TNode *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TNode *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  IMessageContext *pIVar10;
  code *pcVar11;
  longlong *plVar12;
  FTcpMessageTransportConnection **ppFVar13;
  bool bVar14;
  undefined1 uVar15;
  atomic<int> aVar16;
  int iVar17;
  Type TVar18;
  longlong lVar19;
  ulong64 uVar20;
  FGuid *pFVar21;
  FWeakObjectPtr *pFVar22;
  UStruct *pUVar23;
  FArchiveState *this_00;
  TGraphTask<FTcpSerializeMessageTask> *this_01;
  char *pcVar24;
  FLogCategoryLogTcpMessaging *pFVar25;
  undefined7 uVar26;
  FTcpListener *pFVar27;
  TSharedPtr<FTcpMessageTransportConnection,1> *pTVar28;
  FGuid *pFVar29;
  FArchiveState *pFVar30;
  undefined1 local_res20 [8];
  bool local_158 [8];
  ForAnyElementType local_150;
  undefined8 local_148;
  TArray<TSharedPtr<FTcpMessageTransportConnection,1>,TSizedDefaultAllocator<32>_> local_140;
  char local_130;
  FGuid local_12c;
  FTcpMessageTransportConnection *local_118;
  TReferenceControllerBase<1> *pTStack_110;
  FTcpMessageTransportConnection *local_108;
  TReferenceControllerBase<1> *local_100;
  FString local_f8;
  uchar *local_e8;
  FTopLevelAssetPath local_e0;
  FTopLevelAssetPath local_d0;
  TPairInitializer<FGuid_const_&,TSharedPtr<FTcpMessageTransportConnection,1>_const_&> local_c0;
  FConstructor local_b0;
  FNodeConnectionMapUpdate local_a8;
  FGuid *local_80;
  FTcpMessageTransportConnection **local_78;
  TSharedRef<FTcpSerializedMessage,1> local_70;
  FString local_60;
  FString local_50;
  
  lVar19 = (**(code **)((longlong)*param_1->Object + 0x30))();
  if (0x400 < *(int *)(lVar19 + 8)) {
    return false;
  }
  pFVar25 = (FLogCategoryLogTcpMessaging *)0x0;
  local_130 = '\0';
  local_12c.A = 0;
  local_12c.B = 0;
  local_12c.C = 0;
  local_12c.D = 0;
  local_118 = (FTcpMessageTransportConnection *)0x0;
  pTStack_110 = (TReferenceControllerBase<1> *)0x0;
  while (pTVar9 = pTStack_110, pTVar6 = ((this->NodeConnectionMapUpdates).Head)->NextNode,
        pTVar6 != (TNode *)0x0) {
    local_130 = (pTVar6->Item).bNewNode;
    pTVar1 = &(pTVar6->Item).Connection;
    local_12c.A = (pTVar6->Item).NodeId.A;
    local_12c.B = (pTVar6->Item).NodeId.B;
    local_12c.C = (pTVar6->Item).NodeId.C;
    local_12c.D = (pTVar6->Item).NodeId.D;
    pTVar7 = pTStack_110;
    if ((TWeakPtr<FTcpMessageTransportConnection,1> *)&local_118 != pTVar1) {
      local_118 = pTVar1->Object;
      pTVar7 = (pTVar6->Item).Connection.WeakReferenceCount.ReferenceController;
      pTVar1->Object = (FTcpMessageTransportConnection *)0x0;
      (pTVar6->Item).Connection.WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (pTStack_110 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTStack_110->WeakReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          plVar12 = &pTStack_110->_padding_;
          pTStack_110 = pTVar7;
          (**(code **)(*plVar12 + 8))(pTVar9,1);
          pTVar7 = pTStack_110;
        }
      }
    }
    pTStack_110 = pTVar7;
    pTVar8 = (this->NodeConnectionMapUpdates).Head;
    (this->NodeConnectionMapUpdates).Head = pTVar6;
    local_a8.bNewNode = false;
    local_a8.Connection.Object = (FTcpMessageTransportConnection *)0x0;
    local_a8.Connection.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_a8.NodeId.A = 0;
    local_a8.NodeId.B = 0;
    local_a8.NodeId.C = 0;
    local_a8.NodeId.D = 0;
    FNodeConnectionMapUpdate::operator=(&pTVar6->Item,&local_a8);
    if (local_a8.Connection.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_a8.Connection.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)((local_a8.Connection.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_a8.Connection.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (pTVar8 != (TNode *)0x0) {
      pTVar9 = (pTVar8->Item).Connection.WeakReferenceCount.ReferenceController;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar9->WeakReferenceCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)(pTVar9->_padding_ + 8))(pTVar9,1);
        }
      }
      ::operator_delete(pTVar8,0x30);
    }
    if ((((local_12c.C == 0 && local_12c.D == 0) && local_12c.A == 0) && local_12c.B == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("UpdateInfo.NodeId.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Messaging\\TcpMessaging\\Source\\TcpMessaging\\Private\\Transport\\TcpMessageTransport.cpp"
                            ,0x7e,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      uVar15 = (*pcVar11)();
      return (bool)uVar15;
    }
    if (local_130 == '\0') {
      if (*(int *)&this->NodeConnectionMap != *(int *)&(this->NodeConnectionMap).field_0x2c) {
        uVar20 = CityHash64((char *)&local_12c,0x10);
        TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>,0>,FDefaultSetAllocator>
                             *)&(this->Connections).ArrayNum,(uint)uVar20,&local_12c);
      }
    }
    else {
      local_108 = (FTcpMessageTransportConnection *)0x0;
      local_100 = pTStack_110;
      if (pTStack_110 != (TReferenceControllerBase<1> *)0x0) {
        aVar4 = pTStack_110->SharedReferenceCount;
        do {
          if (aVar4 == (atomic<int>)0x0) {
            local_100 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_14eacefa5;
          }
          LOCK();
          aVar16 = pTStack_110->SharedReferenceCount;
          bVar14 = aVar4 == aVar16;
          if (bVar14) {
            pTStack_110->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
            aVar16 = aVar4;
          }
          UNLOCK();
          aVar4 = aVar16;
        } while (!bVar14);
        if (pTStack_110 != (TReferenceControllerBase<1> *)0x0) {
          local_108 = local_118;
        }
LAB_14eacefa5:
        if (local_108 != (FTcpMessageTransportConnection *)0x0) {
          local_80 = &local_12c;
          local_78 = &local_108;
          TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FGuid_const_&,TSharedPtr<FTcpMessageTransportConnection,1>_const_&>_>
                    ((TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>,0>,FDefaultSetAllocator>
                      *)&(this->Connections).ArrayNum,&local_c0,(bool *)&local_80);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100)
      ;
    }
  }
  local_140.ArrayMax = 0;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  iVar5 = param_2->ArrayNum;
  if (iVar5 == 0) {
    pFVar27 = this->Listener;
    iVar5 = *(int *)&(this->Connections).AllocatorInstance.Data;
    ppFVar13 = (FTcpMessageTransportConnection **)&pFVar27->_padding_;
    local_150.Data = (FScriptContainerElement *)0x0;
    local_148._0_4_ = 0;
    local_148._4_4_ = 0;
    for (; pFVar27 != (FTcpListener *)(ppFVar13 + (longlong)iVar5 * 2);
        pFVar27 = (FTcpListener *)&(pFVar27->Endpoint).Port) {
      if (((FTcpMessageTransportConnection *)pFVar27->_padding_ ==
           (FTcpMessageTransportConnection *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        uVar15 = (*pcVar11)();
        return (bool)uVar15;
      }
      if (((FTcpMessageTransportConnection *)pFVar27->_padding_)->ConnectionState == STATE_Connected
         ) {
        if (((local_150.Data <= pFVar27) &&
            (pFVar27 < (FTcpListener *)(local_150.Data + (longlong)local_148._4_4_ * 0x10))) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          uVar15 = (*pcVar11)();
          return (bool)uVar15;
        }
        if ((int)local_148 == local_148._4_4_) {
          local_148._0_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_150,(int *)((longlong)&local_148 + 4));
        }
        lVar19 = (longlong)(int)local_148;
        local_148._0_4_ = (int)local_148 + 1;
        *(FTcpMessageTransportConnection **)(local_150.Data + lVar19 * 0x10) =
             (FTcpMessageTransportConnection *)pFVar27->_padding_;
        pTVar9 = ((FSharedReferencer<1> *)&pFVar27->bDeleteSocket)->ReferenceController;
        *(TReferenceControllerBase<1> **)(local_150.Data + lVar19 * 0x10 + 8) = pTVar9;
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
    }
    DestructItems<TSharedPtr<FTcpMessageTransportConnection,1>,int>
              ((TSharedPtr<FTcpMessageTransportConnection,1> *)local_140.AllocatorInstance.Data,
               local_140.ArrayNum);
    if ((FTcpListener *)local_140.AllocatorInstance.Data != (FTcpListener *)0x0) {
      FMemory::Free(local_140.AllocatorInstance.Data);
    }
    pFVar25 = (FLogCategoryLogTcpMessaging *)0x0;
    local_140.AllocatorInstance.Data = local_150.Data;
    local_140.ArrayNum = (int)local_148;
    local_140.ArrayMax = local_148._4_4_;
    local_148 = 0;
    local_150.Data = (FScriptContainerElement *)0x0;
    DestructItems<TSharedPtr<FTcpMessageTransportConnection,1>,int>
              ((TSharedPtr<FTcpMessageTransportConnection,1> *)0x0,0);
    if (local_150.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data);
    }
  }
  else {
    pFVar21 = (FGuid *)(param_2->AllocatorInstance).Data;
    pFVar29 = pFVar21 + iVar5;
    while( true ) {
      if (param_2->ArrayNum != iVar5) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar21 == pFVar29) break;
      uVar20 = CityHash64((char *)pFVar21,0x10);
      pFVar25 = (FLogCategoryLogTcpMessaging *)(uVar20 & 0xffffffff);
      iVar17 = TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FGuid>
                         ((TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,1>,0>,FDefaultSetAllocator>
                           *)&(this->Connections).ArrayNum,(uint)uVar20,pFVar21);
      if (iVar17 != -1) {
        pcVar24 = (char *)(*(longlong *)&(this->Connections).ArrayNum + (longlong)iVar17 * 0x28);
        pTVar28 = (TSharedPtr<FTcpMessageTransportConnection,1> *)((longlong)pcVar24 + 0x10);
        if ((TSharedPtr<FTcpMessageTransportConnection,1> *)pcVar24 ==
            (TSharedPtr<FTcpMessageTransportConnection,1> *)0x0) {
          pTVar28 = (TSharedPtr<FTcpMessageTransportConnection,1> *)0x0;
        }
        pFVar25 = (FLogCategoryLogTcpMessaging *)pcVar24;
        if (pTVar28 != (TSharedPtr<FTcpMessageTransportConnection,1> *)0x0) {
          if (pTVar28->Object == (FTcpMessageTransportConnection *)0x0) {
            pcVar24 = 
            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
            ;
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L"");
            if (bVar14) {
              pcVar11 = (code *)swi(3);
              uVar15 = (*pcVar11)();
              return (bool)uVar15;
            }
          }
          pFVar25 = (FLogCategoryLogTcpMessaging *)pcVar24;
          if (pTVar28->Object->ConnectionState == STATE_Connected) {
            TArray<TSharedPtr<FTcpMessageTransportConnection,1>,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TSharedPtr<FTcpMessageTransportConnection,1>_const_&>(&local_140,pTVar28);
            pFVar25 = (FLogCategoryLogTcpMessaging *)pTVar28;
          }
        }
      }
      pFVar21 = pFVar21 + 1;
    }
  }
  pFVar30 = (FArchiveState *)0x0;
  if (local_140.ArrayNum != 0) {
    if (5 < (byte)LogTcpMessaging._0_1_) {
      pIVar10 = param_1->Object;
      lVar19 = (**(code **)((longlong)*pIVar10 + 0x18))(pIVar10);
      if (lVar19 == 0) {
LAB_14eacf3ee:
        local_d0.PackageName.ComparisonIndex.Value = 0;
        local_d0.PackageName.Number = 0;
        local_d0.AssetName.ComparisonIndex.Value = 0;
        local_d0.AssetName.Number = 0;
      }
      else {
        pFVar22 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar10 + 0x20))(pIVar10);
        bVar14 = FWeakObjectPtr::IsValid(pFVar22,false,true);
        if (!bVar14) goto LAB_14eacf3ee;
        pFVar22 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar10 + 0x20))(pIVar10);
        pUVar23 = (UStruct *)FWeakObjectPtr::Get(pFVar22);
        UStruct::GetStructPathName(pUVar23,&local_d0);
      }
      FTopLevelAssetPath::ToString(&local_d0,&local_50);
      pFVar25 = &LogTcpMessaging;
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    this_00 = ::operator_new(0xb8);
    if (this_00 != (FArchiveState *)0x0) {
      local_e8 = (uchar *)0x0;
      this_00->_padding_ = 0;
      this_00->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      ppuVar3 = &this_00[1].InlineFPLB.EndFastPathLoadBuffer;
      (this_00->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
      (this_00->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
      (this_00->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined8 *)&this_00->field_0x28 = 0;
      this_00->ArSerializingDefaults = 0;
      this_00->ArPortFlags = 0;
      this_00->ArMaxSerializeSize = 0;
      (this_00->ArUEVer).FileVersionUE4 = 0;
      (this_00->ArUEVer).FileVersionUE5 = 0;
      this_00->ArLicenseeUEVer = 0;
      (this_00->ArEngineVer).Major = 0;
      (this_00->ArEngineVer).Minor = 0;
      (this_00->ArEngineVer).Patch = 0;
      *(undefined2 *)&(this_00->ArEngineVer).field_0x6 = 0;
      (this_00->ArEngineVer).Changelist = 0;
      this_00->CustomVersionContainer = (FCustomVersionContainer *)0x0;
      this_00->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      this_00->SavePackageData = (FArchiveSavePackageData *)0x0;
      this_00->SerializedProperty = (FProperty *)0x0;
      this_00->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      *(undefined8 *)&this_00->bCustomVersionsAreReset = 0;
      this_00->NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(this_00);
      this_00[1]._padding_ = 0;
      this_00->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_
      ;
      uVar26 = (undefined7)((ulonglong)pFVar25 >> 8);
      this_00[1].InlineFPLB.StartFastPathLoadBuffer = local_e8;
      this_00[1].ActiveFPLB = (FFastPathLoadBuffer *)ppuVar3;
      FArchiveState::SetIsSaving(this_00,true);
      (**(code **)(this_00->_padding_ + 0x108))(this_00,CONCAT71(uVar26,1));
      this_00->_padding_ = (longlong)&___7FTcpSerializedMessage__6B_;
      *ppuVar3 = (uchar *)0x0;
      this_00[1].InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
      pFVar30 = this_00;
    }
    local_c0.Value = (TSharedPtr<FTcpMessageTransportConnection,1> *)pFVar30;
    TSharedRef<FTcpSerializedMessage,1>::TSharedRef<FTcpSerializedMessage,1><FTcpSerializedMessage>
              (&local_70,(TRawPtrProxy<FTcpSerializedMessage> *)&local_c0.Value);
    local_b0.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    this_01 = TGraphTask<FTcpSerializeMessageTask>::FConstructor::
              ConstructAndHoldImpl<TSharedRef<IMessageContext,1>_const_&,TSharedRef<FTcpSerializedMessage,1>_&,TArray<TSharedPtr<FTcpMessageTransportConnection,1>,TSizedDefaultAllocator<32>_>_&>
                        (&local_b0,param_1,&local_70,&local_140);
    if (this_01 != (TGraphTask<FTcpSerializeMessageTask> *)0x0) {
      LOCK();
      *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
      UNLOCK();
    }
    if (-1 < TaskTrace::TaskChannel->Enabled) {
      TVar18 = UE::Tasks::Private::TranslatePriority
                         ((ETaskPriority)((ulonglong)this_01->_padding_ >> 0x3b) & (Inherit|Default)
                          ,*(EExtendedTaskPriority *)((longlong)&this_01->_padding_ + 4));
      TaskTrace::Launched(this_01->_padding_,
                          (wchar_t *)((ulonglong)this_01->_padding_ >> 6 & 0x1fffffffffffff),true,
                          TVar18,0x108);
    }
    local_158[0] = true;
    UE::Tasks::Private::FTaskBase::TryUnlock((FTaskBase *)this_01,local_158);
    if (this_01 != (TGraphTask<FTcpSerializeMessageTask> *)0x0) {
      LOCK();
      plVar12 = &this_01->_padding_;
      lVar19 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar19 == 1) {
        (**(code **)this_01->_padding_)(this_01,1);
      }
    }
    bVar14 = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SharedReferenceCount.ReferenceController);
    goto LAB_14eacf5b4;
  }
  if (5 < (byte)LogTcpMessaging._0_1_) {
    pFVar21 = (FGuid *)(**(code **)((longlong)*param_1->Object + 0x48))();
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    FGuid::AppendString(pFVar21,&local_f8,Digits);
    pIVar10 = param_1->Object;
    lVar19 = (**(code **)((longlong)*pIVar10 + 0x18))(pIVar10);
    if (lVar19 == 0) {
LAB_14eacf329:
      local_e0.PackageName.ComparisonIndex.Value = 0;
      local_e0.PackageName.Number = 0;
      local_e0.AssetName.ComparisonIndex.Value = 0;
      local_e0.AssetName.Number = 0;
    }
    else {
      pFVar22 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar10 + 0x20))(pIVar10);
      bVar14 = FWeakObjectPtr::IsValid(pFVar22,false,true);
      if (!bVar14) goto LAB_14eacf329;
      pFVar22 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar10 + 0x20))(pIVar10);
      pUVar23 = (UStruct *)FWeakObjectPtr::Get(pFVar22);
      UStruct::GetStructPathName(pUVar23,&local_e0);
    }
    FTopLevelAssetPath::ToString(&local_e0,&local_60);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTcpMessaging);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  bVar14 = false;
LAB_14eacf5b4:
  DestructItems<TSharedPtr<FTcpMessageTransportConnection,1>,int>
            ((TSharedPtr<FTcpMessageTransportConnection,1> *)local_140.AllocatorInstance.Data,
             local_140.ArrayNum);
  if ((FTcpListener *)local_140.AllocatorInstance.Data != (FTcpListener *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  if (pTStack_110 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTStack_110->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTStack_110->_padding_ + 8))(pTStack_110,1);
    }
  }
  return bVar14;
}

