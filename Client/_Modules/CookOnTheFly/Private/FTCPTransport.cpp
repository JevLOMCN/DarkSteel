// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 7

// FTCPTransport @ 14311bb00

FTCPTransport * __thiscall FTCPTransport::FTCPTransport(FTCPTransport *this)

{
  this->_padding_ = (longlong)&___7FTCPTransport__6B_;
  this->FileSocket = (FSocket *)0x0;
  this->MCSocket = (FMultichannelTcpSocket *)0x0;
  (this->HostName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HostName).Data.ArrayNum = 0;
  (this->HostName).Data.ArrayMax = 0;
  return this;
}

// ~FTCPTransport @ 14311c0e0

void __thiscall FTCPTransport::~FTCPTransport(FTCPTransport *this)

{
  FMultichannelTcpSocket *pFVar1;
  FRunnableThread *pFVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  ISocketSubsystem *pIVar5;
  FName local_res8;
  
  pFVar1 = this->MCSocket;
  this->_padding_ = (longlong)&___7FTCPTransport__6B_;
  if (pFVar1 != (FMultichannelTcpSocket *)0x0) {
    FMultichannelTcpSender::~FMultichannelTcpSender(&pFVar1->Sender);
    pFVar2 = (pFVar1->Receiver).Thread;
    (pFVar1->Receiver)._padding_ = (longlong)&___7FMultichannelTcpReceiver__6B_;
    if (pFVar2 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,1);
      pFVar2 = (pFVar1->Receiver).Thread;
      if (pFVar2 != (FRunnableThread *)0x0) {
        (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar1->Receiver).ReceiveDelegate);
    (pFVar1->Receiver)._padding_ = (longlong)&___7FRunnable__6B_;
    DeleteCriticalSection((LPCRITICAL_SECTION)&pFVar1->ReceiveBuffersCriticalSection);
    *(undefined4 *)&(pFVar1->ReceiveBuffers).field_0x48 = 0;
    pvVar3 = *(void **)&(pFVar1->ReceiveBuffers).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMultichannelTcpSocket::FReceiveBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMultichannelTcpSocket::FReceiveBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMultichannelTcpSocket::FReceiveBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->ReceiveBuffers);
    ::operator_delete(pFVar1,0x180);
  }
  this->MCSocket = (FMultichannelTcpSocket *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pIVar5 = ISocketSubsystem::Get(&local_res8);
  (**(code **)(pIVar5->_padding_ + 0x38))(pIVar5,this->FileSocket);
  this->FileSocket = (FSocket *)0x0;
  pFVar4 = (this->HostName).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7ICookOnTheFlyServerTransport__6B_;
  return;
}

// Disconnect @ 14311d540

void __thiscall FTCPTransport::Disconnect(FTCPTransport *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014311d547. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->FileSocket->_padding_ + 0x10))();
  return;
}

// HasPendingPayload @ 14311e0c0

bool __thiscall FTCPTransport::HasPendingPayload(FTCPTransport *this)

{
  undefined1 uVar1;
  undefined1 local_res8 [32];
  
  uVar1 = (**(code **)(this->FileSocket->_padding_ + 0x40))(this->FileSocket,local_res8);
  return (bool)uVar1;
}

// Initialize @ 14311e2e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTCPTransport::Initialize(FTCPTransport *this,wchar_t *param_1)

{
  FString *pFVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  FNameEntryId FVar7;
  ISocketSubsystem *pIVar8;
  undefined8 uVar9;
  undefined4 extraout_var;
  FSocket *pFVar10;
  undefined8 *puVar11;
  short sVar12;
  ForAnyElementType FVar13;
  bool bVar14;
  undefined4 local_res8 [4];
  undefined1 local_res18 [8];
  FIPv4Address_u_0 local_res20;
  short local_res24;
  FName local_98;
  FString local_90;
  FString local_80;
  longlong *local_70;
  TReferenceControllerBase<1> *local_68;
  FString local_60;
  FString local_50;
  
  local_res8[0] = 0;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  pIVar8 = ISocketSubsystem::Get(&local_98);
  ::FString::FString(&local_60,param_1);
  bVar14 = false;
  ::FString::RemoveFromStart(&local_60,L"tcp://",6,IgnoreCase);
  (**(code **)(pIVar8->_padding_ + 0x90))(pIVar8,&local_70);
  ::FString::FString(&local_90,param_1);
  bVar5 = FIPv4Endpoint::Parse(&local_90,(FIPv4Endpoint *)&local_res20._s_0);
  if (bVar5) {
LAB_14311e393:
    bVar5 = true;
    bVar4 = true;
    if (bVar14) goto LAB_14311e39b;
  }
  else {
    ::FString::FString(&local_80,param_1);
    bVar14 = true;
    bVar5 = FIPv4Endpoint::FromHostAndPort(&local_80,(FIPv4Endpoint *)&local_res20._s_0);
    if (bVar5) goto LAB_14311e393;
    bVar4 = false;
LAB_14311e39b:
    bVar5 = bVar4;
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  if ((void *)CONCAT44(local_90.Data.AllocatorInstance.Data._4_4_,
                       local_90.Data.AllocatorInstance.Data._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_90.Data.AllocatorInstance.Data._4_4_,
                                   local_90.Data.AllocatorInstance.Data._0_4_));
  }
  if (bVar5) {
    (**(code **)(*local_70 + 0x18))(local_70,local_res20.Value);
    sVar12 = -0x5c55;
    if (local_res24 != 0) {
      sVar12 = local_res24;
    }
    (**(code **)(*local_70 + 0x28))(local_70,sVar12);
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
  }
  else {
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar13.Data = local_60.Data.AllocatorInstance.Data;
    }
    (**(code **)(*local_70 + 0x10))(local_70,FVar13.Data,local_res8);
    (**(code **)(*local_70 + 0x28))(local_70,0xa3ab);
    if ((char)local_res8[0] == '\0') goto LAB_14311e549;
  }
  pcVar2 = *(code **)(pIVar8->_padding_ + 0x18);
  uVar9 = (**(code **)(*local_70 + 0xa8))(local_70,&local_80);
  ::FString::FString(&local_50,L"COTF tcp");
  FVar7 = FNameEntryId::FromValidEName((EName)local_res18);
  local_90.Data.AllocatorInstance.Data._0_4_ = *(undefined4 *)CONCAT44(extraout_var,FVar7.Value);
  local_90.Data.AllocatorInstance.Data._4_4_ = 0;
  pFVar10 = (FSocket *)(*pcVar2)(pIVar8,&local_90,&local_50,uVar9);
  this->FileSocket = pFVar10;
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  pFVar10 = this->FileSocket;
  if ((pFVar10 == (FSocket *)0x0) ||
     (cVar6 = (**(code **)(pFVar10->_padding_ + 0x28))(pFVar10,local_70), cVar6 == '\0')) {
    (**(code **)(pIVar8->_padding_ + 0x38))(pIVar8,this->FileSocket);
    this->FileSocket = (FSocket *)0x0;
    if (1 < (byte)LogCookOnTheFly._0_1_) {
      (**(code **)(*local_70 + 0x80))(local_70,&local_50,1);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCookOnTheFly);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
  }
  puVar11 = (undefined8 *)(**(code **)(*local_70 + 0x80))(local_70,&local_50,0);
  pFVar1 = &this->HostName;
  if (pFVar1 != (FString *)puVar11) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar11;
    *puVar11 = 0;
    (this->HostName).Data.ArrayNum = *(int *)(puVar11 + 1);
    (this->HostName).Data.ArrayMax = *(int *)((longlong)puVar11 + 0xc);
    puVar11[1] = 0;
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
LAB_14311e549:
  if ((this->FileSocket == (FSocket *)0x0) && (this->MCSocket == (FMultichannelTcpSocket *)0x0)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return bVar14;
}

// ReceivePayload @ 14311ee10

bool __thiscall FTCPTransport::ReceivePayload(FTCPTransport *this,FArrayReader *param_1)

{
  bool bVar1;
  FSimpleAbstractSocket local_18;
  FSocket *local_10;
  
  local_18 = (FSimpleAbstractSocket)&___7FSimpleAbstractSocket_FSocket__6B_;
  local_10 = this->FileSocket;
  bVar1 = FNFSMessageHeader::ReceivePayload(param_1,&local_18);
  return bVar1;
}

// SendPayload @ 14311fa70

bool __thiscall
FTCPTransport::SendPayload
          (FTCPTransport *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  FSimpleAbstractSocket local_18;
  FSocket *local_10;
  
  local_18 = (FSimpleAbstractSocket)&___7FSimpleAbstractSocket_FSocket__6B_;
  local_10 = this->FileSocket;
  bVar1 = FNFSMessageHeader::WrapAndSendPayload(param_1,&local_18);
  return bVar1;
}

