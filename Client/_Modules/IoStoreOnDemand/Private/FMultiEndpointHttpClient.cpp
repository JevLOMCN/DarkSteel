// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 21

// FMultiEndpointHttpClient @ 1445a3b60

/* WARNING: Enum "Type": Some values do not have unique names */

FMultiEndpointHttpClient * __thiscall
UE::IoStore::FMultiEndpointHttpClient::FMultiEndpointHttpClient
          (FMultiEndpointHttpClient *this,FMultiEndpointHttpClientConfig *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  EHttpRedirects EVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined5 uVar8;
  Type TVar9;
  undefined7 uVar10;
  
  iVar1 = param_1->ReceiveBufferSize;
  iVar2 = param_1->SendBufferSize;
  iVar3 = param_1->MaxRetryCount;
  (this->Config).MaxConnectionCount = param_1->MaxConnectionCount;
  (this->Config).ReceiveBufferSize = iVar1;
  (this->Config).SendBufferSize = iVar2;
  (this->Config).MaxRetryCount = iVar3;
  EVar4 = param_1->Redirects;
  bVar5 = param_1->bEnableThreadSafetyChecks;
  bVar6 = param_1->bAllowChunkedTransfer;
  bVar7 = param_1->bResponseBodyOnError;
  uVar8 = *(undefined5 *)&param_1->field_0x1b;
  (this->Config).TimeoutMs = param_1->TimeoutMs;
  (this->Config).Redirects = EVar4;
  (this->Config).bEnableThreadSafetyChecks = bVar5;
  (this->Config).bAllowChunkedTransfer = bVar6;
  (this->Config).bResponseBodyOnError = bVar7;
  *(undefined5 *)&(this->Config).field_0x1b = uVar8;
  TVar9 = param_1->LogVerbosity;
  uVar10 = *(undefined7 *)&param_1->field_0x29;
  (this->Config).LogCategory = param_1->LogCategory;
  (this->Config).LogVerbosity = TVar9;
  *(undefined7 *)&(this->Config).field_0x29 = uVar10;
  (this->Connections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Connections).ArrayNum = 0;
  (this->Connections).ArrayMax = 0;
  HTTP::FEventLoop::FEventLoop(&this->EventLoop);
  (this->Retries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Retries).ArrayNum = 0;
  (this->Retries).ArrayMax = 0;
  (this->TicketLookupMutex).State = (atomic<unsigned_int>)0x0;
  (this->TicketLookupMutex).ThreadId = (atomic<unsigned_int>)0x0;
  *(undefined8 *)&this->TicketLookupMap = 0;
  *(undefined8 *)&(this->TicketLookupMap).field_0x8 = 0;
  *(undefined8 *)&(this->TicketLookupMap).field_0x20 = 0;
  *(undefined4 *)&(this->TicketLookupMap).field_0x28 = 0;
  *(undefined4 *)&(this->TicketLookupMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TicketLookupMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TicketLookupMap).field_0x34 = 0;
  *(undefined8 *)&(this->TicketLookupMap).field_0x40 = 0;
  *(undefined4 *)&(this->TicketLookupMap).field_0x48 = 0;
  HTTP::FEventLoop::SetFailTimeout(&this->EventLoop,(this->Config).TimeoutMs);
  return this;
}

// ~FMultiEndpointHttpClient @ 1445a8980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::FMultiEndpointHttpClient::~FMultiEndpointHttpClient(FMultiEndpointHttpClient *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar4 = HTTP::FEventLoop::IsIdle(&this->EventLoop);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventLoop.IsIdle()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                       ,0xad,L"FMultiEndpointHttpClient still has active requests on shutdown");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)&(this->TicketLookupMap).field_0x8 != *(int *)&(this->TicketLookupMap).field_0x34) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TicketLookupMap.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                       ,0xae,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined4 *)&(this->TicketLookupMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TicketLookupMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TicketLookupMap);
  DestructItems<UE::IoStore::FMultiEndpointHttpClient::FRequest,int>
            ((FRequest *)(this->Retries).AllocatorInstance.Data,(this->Retries).ArrayNum);
  pFVar2 = (this->Retries).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  HTTP::FEventLoop::~FEventLoop(&this->EventLoop);
  DestructItems<TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>,int>
            ((TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>
              *)(this->Connections).AllocatorInstance.Data,(this->Connections).ArrayNum);
  pFVar2 = (this->Connections).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 1445ab980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::__l2::<lambda_1>::operator()
          (void *this,FTicketStatus *param_1)

{
  int *piVar1;
  code *pcVar2;
  EId EVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TArrayView<FAnsiString_const_,int> *pTVar7;
  FIoBuffer FVar8;
  FResponse *this_00;
  long64 lVar9;
  TStringView<char> *pTVar10;
  FString *pFVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 local_res18 [8];
  FIoBuffer local_res20;
  FString local_c8;
  FString local_b8;
  code *local_a8 [2];
  undefined **local_98;
  longlong local_90;
  undefined8 local_80;
  code *local_78 [2];
  undefined **local_68;
  undefined1 *local_60;
  undefined8 local_50;
  TArrayView<FAnsiString_const_,int> local_48;
  TStringView<char> local_38;
  
  EVar3 = UE::IoStore::HTTP::FTicketStatus::GetId(param_1);
  if (EVar3 != Response) {
    if (EVar3 == Content) {
      if ((*(char *)((longlong)this + 0xbd) != '\0') &&
         (*(char *)(*(longlong *)((longlong)this + 0x90) + 0x18) != '\0' ||
          *(int *)(*(longlong *)((longlong)this + 0x90) + 8) != 0)) {
        if ((99 < *(int *)((longlong)this + 0xb4) - 200U) &&
           (*(char *)(*(longlong *)this + 0x1a) == '\0')) {
          return;
        }
        FVar8 = UE::IoStore::JoinIoBuffers(&local_res20,(FIoBuffer *)((longlong)this + 0x88));
        FIoBuffer::operator=
                  ((FIoBuffer *)((longlong)this + 0x88),(FIoBuffer *)FVar8.CorePtr.Reference);
        if (local_res20.CorePtr.Reference == (BufCore *)0x0) {
          return;
        }
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_res20.CorePtr.Reference);
        LOCK();
        piVar1 = (int *)((longlong)local_res20.CorePtr.Reference + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 != 1) {
          return;
        }
        FIoBuffer::BufCore::~BufCore((BufCore *)local_res20.CorePtr.Reference);
        ::operator_delete((void *)local_res20.CorePtr.Reference,0x20);
        return;
      }
    }
    else if ((EVar3 != Cancelled) && (EVar3 != Error)) {
      return;
    }
    iVar6 = *(int *)((longlong)this + 0xc0);
    *(int *)((longlong)this + 0xc0) = iVar6 + 1;
    if ((iVar6 != *(int *)((longlong)this + 0xb0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Request.SinkCounter++ == Request.RetryCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                           ,0x1cc,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UE::IoStore::FMultiEndpointHttpClient::Log
              (*(FMultiEndpointHttpClient **)this,(FRequest *)((longlong)this + 0x10),param_1);
    if ((*(int *)((longlong)this + 0xb4) - 500U < 100) ||
       (EVar3 = UE::IoStore::HTTP::FTicketStatus::GetId(param_1), EVar3 == Error)) {
      uVar5 = *(uint *)(*(longlong *)this + 0xc);
      if (uVar5 == 0xffffffff) {
        pTVar7 = UE::IoStore::FOnDemandHostGroup::Hosts
                           (*(FOnDemandHostGroup **)((longlong)this + 0x80),&local_48);
        uVar5 = pTVar7->ArrayNum;
      }
      if (*(uint *)((longlong)this + 0xb0) < uVar5) {
        UE::IoStore::FMultiEndpointHttpClient::RetryRequest
                  (*(FMultiEndpointHttpClient **)this,(FRequest *)((longlong)this + 0x10));
        return;
      }
    }
    UE::IoStore::FMultiEndpointHttpClient::CompleteRequest
              (*(FMultiEndpointHttpClient **)this,(FRequest *)((longlong)this + 0x10),param_1);
    return;
  }
  this_00 = UE::IoStore::HTTP::FTicketStatus::GetResponse(param_1);
  uVar5 = UE::IoStore::HTTP::FResponse::GetStatusCode(this_00);
  *(uint *)((longlong)this + 0xb4) = uVar5;
  lVar9 = UE::IoStore::HTTP::FResponse::GetContentLength(this_00);
  *(bool *)((longlong)this + 0xbd) = lVar9 == -1;
  if ((*(byte *)((longlong)this + 0xbc) & 1) != 0) {
    DestructItems<FAnsiString,int>
              (*(FAnsiString **)((longlong)this + 0x50),*(int *)((longlong)this + 0x58));
    *(undefined4 *)((longlong)this + 0x58) = 0;
    if (*(int *)((longlong)this + 0x5c) != 0x10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0x10,(ForAnyElementType *)((longlong)this + 0x50),0,
                 (int *)((longlong)this + 0x5c));
    }
    local_80 = 0;
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<``UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::`2'::<lambda_1>::operator()'::`8'::<lambda_1>,0,0>
                ::_vftable_;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
                  ::Call;
    local_90 = (longlong)this + 0x10;
    UE::IoStore::HTTP::FResponse::ReadHeaders
              (this_00,(TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)local_a8);
  }
  if (*(int *)((longlong)this + 0xb4) - 200U < 100) {
    local_res18[0] = 0xff;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UE::IoStore::TrackCdnCacheStats'::`2'::<lambda_1>,0,0>::
                _vftable_;
    local_60 = local_res18;
    local_50 = 0;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UE::IoStore::TrackCdnCacheStats'::__l2::<lambda_1>,bool,TStringView<char>,TStringView<char>_>
                  ::Call;
    UE::IoStore::HTTP::FResponse::ReadHeaders
              (this_00,(TFunction<bool___cdecl(TStringView<char>,TStringView<char>)> *)local_78);
    *(undefined1 *)((longlong)this + 0xbe) = local_res18[0];
  }
  else {
    pTVar10 = UE::IoStore::HTTP::FResponse::GetStatusMessage(this_00,&local_38);
    uVar13 = (ulonglong)pTVar10->Size;
    uVar5 = 0;
    uVar14 = uVar13;
    if (pTVar10->Size != 0) {
      do {
        uVar5 = (uint)uVar13;
        iVar6 = isspace((uint)(byte)pTVar10->DataPtr[uVar14 - 1]);
        if (iVar6 == 0) break;
        uVar5 = uVar5 - 1;
        uVar13 = (ulonglong)uVar5;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    pFVar11 = ::FString::ConstructFromPtrSize(&local_b8,pTVar10->DataPtr,uVar5);
    if (&local_c8 != pFVar11) {
      local_c8.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = (pFVar11->Data).ArrayNum;
      local_c8.Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    ::FString::operator=((FString *)((longlong)this + 0x98),&local_c8);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  lVar12 = 0x88;
  if (*(char *)((longlong)this + 0xbd) != '\0') {
    lVar12 = 0x90;
  }
  UE::IoStore::HTTP::FResponse::SetDestination(this_00,(FIoBuffer *)(lVar12 + (longlong)this));
  return;
}

// operator() @ 1445ae270

void __thiscall
`UE::IoStore::FMultiEndpointHttpClient::Get'::__l7::<lambda_1>::operator()
          (void *this,FTicketStatus *param_1)

{
  uint *puVar1;
  TStringBuilderBase<wchar_t> *pTVar2;
  EId EVar3;
  uint uVar4;
  FResponse *pFVar5;
  FError *pFVar6;
  FError local_18;
  
  EVar3 = UE::IoStore::HTTP::FTicketStatus::GetId(param_1);
  if (EVar3 == Response) {
    pFVar5 = UE::IoStore::HTTP::FTicketStatus::GetResponse(param_1);
    UE::IoStore::HTTP::FResponse::SetDestination(pFVar5,*(FIoBuffer **)this);
    puVar1 = *(uint **)((longlong)this + 0x10);
    pFVar5 = UE::IoStore::HTTP::FTicketStatus::GetResponse(param_1);
    uVar4 = UE::IoStore::HTTP::FResponse::GetStatusCode(pFVar5);
    *puVar1 = uVar4;
    return;
  }
  EVar3 = UE::IoStore::HTTP::FTicketStatus::GetId(param_1);
  if (EVar3 == Error) {
    pTVar2 = *(TStringBuilderBase<wchar_t> **)((longlong)this + 8);
    pFVar6 = UE::IoStore::HTTP::FTicketStatus::GetError(param_1,&local_18);
    operator<<<wchar_t,char_const_*>(pTVar2,&pFVar6->Reason);
  }
  return;
}

// CancelRequest @ 1445b6bc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::FMultiEndpointHttpClient::CancelRequest(FMultiEndpointHttpClient *this,uint param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  ulong64 *puVar4;
  
  if (param_1 != 0) {
    FRecursiveMutex::Lock(&this->TicketLookupMutex);
    if (*(int *)&(this->TicketLookupMap).field_0x8 != *(int *)&(this->TicketLookupMap).field_0x34) {
      puVar3 = *(undefined1 **)&(this->TicketLookupMap).field_0x40;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &(this->TicketLookupMap).field_0x38;
      }
      uVar1 = *(uint *)(puVar3 + (ulonglong)
                                 (*(int *)&(this->TicketLookupMap).field_0x48 - 1U & param_1) * 4);
      if (uVar1 != 0xffffffff) {
        do {
          puVar2 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&this->TicketLookupMap);
          if (*puVar2 == param_1) {
            puVar4 = (ulong64 *)(puVar2 + 2);
            if (puVar2 == (uint *)0x0) {
              puVar4 = (ulong64 *)0x0;
            }
            if ((puVar4 != (ulong64 *)0x0) && (*(undefined1 *)(puVar4 + 1) = 1, *puVar4 != 0)) {
              FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                             ,0x14c,&((this->Config).LogCategory)->CategoryName,Verbose,
                             L"Canceling FHttpTicketId %u with FTicket: %llu");
              HTTP::FEventLoop::Cancel(&this->EventLoop,*puVar4);
            }
            break;
          }
          uVar1 = puVar2[6];
        } while (uVar1 != 0xffffffff);
      }
    }
    FRecursiveMutex::Unlock(&this->TicketLookupMutex);
  }
  return;
}

// CompleteRequest @ 1445bbcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::FMultiEndpointHttpClient::CompleteRequest
          (FMultiEndpointHttpClient *this,FRequest *param_1,FTicketStatus *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  int iVar4;
  TRefCountPtr<FIoBuffer::BufCore> TVar5;
  BufCore *pBVar6;
  undefined1 auVar7 [16];
  double dVar8;
  uchar *puVar9;
  FIoBuffer FVar10;
  ForAnyElementType this_00;
  code *pcVar11;
  EId EVar12;
  FTicketPerf *this_01;
  FSample FVar13;
  FError *pFVar14;
  FIoBuffer *pFVar15;
  undefined8 uVar16;
  FIoOffsetAndLength *pFVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  ulong64 uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_108 [32];
  LARGE_INTEGER local_e8;
  ulonglong local_e0;
  FIoBuffer local_d8;
  FScriptContainerElement *local_d0;
  int local_c8;
  int local_c4;
  FString local_c0;
  undefined8 local_b0;
  longlong local_a8;
  uint local_a0;
  uint local_9c;
  int local_98;
  undefined1 local_94;
  schar local_93;
  FString local_88;
  code *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  FIoBuffer::FIoBuffer(&local_d8);
  local_d0 = (param_1->ResponseHeaders).AllocatorInstance.Data;
  (param_1->ResponseHeaders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8 = (param_1->ResponseHeaders).ArrayNum;
  local_c4 = (param_1->ResponseHeaders).ArrayMax;
  (param_1->ResponseHeaders).ArrayNum = 0;
  (param_1->ResponseHeaders).ArrayMax = 0;
  local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Data.ArrayNum = 0;
  local_c0.Data.ArrayMax = 0;
  local_b0 = 0;
  QueryPerformanceCounter(&local_e8);
  FVar10.CorePtr.Reference = local_d8.CorePtr.Reference;
  local_a8 = 0;
  dVar8 = (double)(local_e8.QuadPart - param_1->StartTime) * FGenericPlatformTime::SecondsPerCycle64
          * __real_408f400000000000;
  if ((__real_43e0000000000000 <= dVar8) &&
     (dVar8 = dVar8 - __real_43e0000000000000, dVar8 < __real_43e0000000000000)) {
    local_a8 = -0x8000000000000000;
  }
  local_94 = 0;
  local_a8 = (longlong)dVar8 + local_a8;
  local_a0 = param_1->StatusCode;
  local_9c = param_1->RetryCount;
  local_98 = param_1->Host;
  local_93 = param_1->CDNCacheStatus;
  if ((local_a0 - 200 < 100) || ((this->Config).bResponseBodyOnError != false)) {
    if (local_a0 == 0xce) {
LAB_1445bbe03:
      pFVar15 = &param_1->Body;
      if (&local_d8 != pFVar15) {
        TVar5.Reference = (pFVar15->CorePtr).Reference;
        (pFVar15->CorePtr).Reference = (BufCore *)0x0;
        bVar23 = local_d8.CorePtr.Reference != (BufCore *)0x0;
        local_d8.CorePtr.Reference =
             (TRefCountPtr<FIoBuffer::BufCore>)(TRefCountPtr<FIoBuffer::BufCore>)TVar5.Reference;
        if (bVar23) {
          FIoBuffer::BufCore::CheckRefCount((BufCore *)FVar10.CorePtr.Reference);
          LOCK();
          piVar1 = (int *)((longlong)FVar10.CorePtr.Reference + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            FIoBuffer::BufCore::~BufCore((BufCore *)FVar10.CorePtr.Reference);
            ::operator_delete((void *)FVar10.CorePtr.Reference,0x20);
          }
        }
      }
    }
    else {
      pFVar17 = &param_1->Range;
      do {
        if (&param_1->field_0x6a <= pFVar17) goto LAB_1445bbe03;
        puVar9 = pFVar17->OffsetAndLength;
        pFVar17 = (FIoOffsetAndLength *)(pFVar17->OffsetAndLength + 1);
      } while (*puVar9 == '\0');
      pBVar6 = (param_1->Body).CorePtr.Reference;
      uVar22 = (ulonglong)CONCAT14(pBVar6->DataSizeHigh,pBVar6->DataSizeLow);
      local_e0 = (ulonglong)
                 CONCAT41(CONCAT31(CONCAT21(CONCAT11((param_1->Range).OffsetAndLength[5],
                                                     (param_1->Range).OffsetAndLength[6]),
                                            (param_1->Range).OffsetAndLength[7]),
                                   (param_1->Range).OffsetAndLength[8]),
                          (param_1->Range).OffsetAndLength[9]);
      uVar18 = (ulonglong)
               CONCAT41(CONCAT31(CONCAT21(CONCAT11((param_1->Range).OffsetAndLength[0],
                                                   (param_1->Range).OffsetAndLength[1]),
                                          (param_1->Range).OffsetAndLength[2]),
                                 (param_1->Range).OffsetAndLength[3]),
                        (param_1->Range).OffsetAndLength[4]);
      if (uVar22 < uVar18) {
        uVar18 = uVar22;
      }
      local_e8.QuadPart = uVar18 + (longlong)pBVar6->DataPtr;
      if (uVar22 - uVar18 < local_e0) {
        local_e0 = uVar22 - uVar18;
      }
      pFVar15 = FIoBuffer::FIoBuffer
                          ((FIoBuffer *)&local_88,(TMemoryView<void_const_> *)&local_e8.s,
                           &param_1->Body);
      FVar10.CorePtr.Reference = local_d8.CorePtr.Reference;
      if (&local_d8 != pFVar15) {
        TVar5.Reference = (pFVar15->CorePtr).Reference;
        (pFVar15->CorePtr).Reference = (BufCore *)0x0;
        bVar23 = local_d8.CorePtr.Reference != (BufCore *)0x0;
        local_d8.CorePtr.Reference =
             (TRefCountPtr<FIoBuffer::BufCore>)(TRefCountPtr<FIoBuffer::BufCore>)TVar5.Reference;
        if (bVar23) {
          FIoBuffer::BufCore::CheckRefCount((BufCore *)FVar10.CorePtr.Reference);
          LOCK();
          piVar1 = (int *)((longlong)FVar10.CorePtr.Reference + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            FIoBuffer::BufCore::~BufCore((BufCore *)FVar10.CorePtr.Reference);
            ::operator_delete((void *)FVar10.CorePtr.Reference,0x20);
          }
        }
      }
      this_00.Data = local_88.Data.AllocatorInstance.Data;
      if ((BufCore *)local_88.Data.AllocatorInstance.Data != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_88.Data.AllocatorInstance.Data);
        LOCK();
        pFVar2 = this_00.Data + 0xc;
        iVar4 = *(int *)pFVar2;
        *(int *)pFVar2 = *(int *)pFVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)this_00.Data);
          ::operator_delete(this_00.Data,0x20);
        }
      }
      if ((2 < (byte)LogIoStoreOnDemand._0_1_) &&
         (auVar7._8_8_ = 0, auVar7._0_8_ = LogCounter,
         lVar20 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar7,8), uVar21 = LogCounter + 1,
         bVar23 = LogCounter == ((LogCounter - lVar20 >> 1) + lVar20 >> 5) * 0x32,
         LogCounter = uVar21, bVar23)) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
    }
  }
  EVar12 = HTTP::FTicketStatus::GetId(param_2);
  if (EVar12 == Content) {
    this_01 = HTTP::FTicketStatus::GetPerf(param_2);
    FVar13 = HTTP::FTicketPerf::GetSample(this_01);
    local_b0 = *(undefined8 *)FVar13;
  }
  EVar12 = HTTP::FTicketStatus::GetId(param_2);
  if (EVar12 == Error) {
    pFVar14 = HTTP::FTicketStatus::GetError(param_2,(FError *)&local_e8.s);
    ::FString::FString(&local_88,pFVar14->Reason);
    if ((BufCore *)local_c0.Data.AllocatorInstance.Data != (BufCore *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    local_c0.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
  }
  else {
    EVar12 = HTTP::FTicketStatus::GetId(param_2);
    if (EVar12 == Cancelled) {
      ::FString::operator=(&local_c0,L"Canceled");
      local_94 = 1;
      goto LAB_1445bc0a2;
    }
    if (((param_1->ResponseMessage).Data.ArrayNum < 2) ||
       (pFVar3 = &param_1->ResponseMessage, &local_c0 == pFVar3)) goto LAB_1445bc0a2;
    if ((BufCore *)local_c0.Data.AllocatorInstance.Data != (BufCore *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    local_c0.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = (param_1->ResponseMessage).Data.ArrayNum;
    local_88.Data.ArrayMax = (param_1->ResponseMessage).Data.ArrayMax;
    (param_1->ResponseMessage).Data.ArrayNum = 0;
    (param_1->ResponseMessage).Data.ArrayMax = 0;
  }
  local_c0.Data.ArrayMax = local_88.Data.ArrayMax;
  local_c0.Data.ArrayNum = local_88.Data.ArrayNum;
LAB_1445bc0a2:
  FRecursiveMutex::Lock(&this->TicketLookupMutex);
  TSet<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo,0>,FDefaultSetAllocator>
  ::Remove((TSet<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo,0>,FDefaultSetAllocator>
            *)&this->TicketLookupMap,param_1->TicketId);
  FRecursiveMutex::Unlock(&this->TicketLookupMutex);
  local_78 = *(code **)&param_1->OnResponse;
  local_50 = *(longlong **)&(param_1->OnResponse).field_0x28;
  *(undefined8 *)&(param_1->OnResponse).field_0x28 = 0;
  local_58 = *(undefined8 *)&(param_1->OnResponse).field_0x20;
  local_68 = *(longlong *)&(param_1->OnResponse).field_0x10;
  uStack_60 = *(undefined8 *)&(param_1->OnResponse).field_0x18;
  if (local_78 != (code *)0x0) {
    *(undefined8 *)&param_1->OnResponse = 0;
  }
  Core::Private::Function::CheckCallable(local_78);
  pcVar11 = local_78;
  plVar19 = &local_68;
  if (local_50 != (longlong *)0x0) {
    plVar19 = local_50;
  }
  uVar16 = (**(code **)(*plVar19 + 8))();
  (*pcVar11)(uVar16,&local_d8);
  if (local_78 != (code *)0x0) {
    plVar19 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar19 = local_50;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if ((BufCore *)local_c0.Data.AllocatorInstance.Data != (BufCore *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnsiString,int>((FAnsiString *)local_d0,local_c8);
  if (local_d0 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0);
  }
  FVar10.CorePtr.Reference = local_d8.CorePtr.Reference;
  if (local_d8.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_d8.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)FVar10.CorePtr.Reference + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)FVar10.CorePtr.Reference);
      ::operator_delete((void *)FVar10.CorePtr.Reference,0x20);
    }
  }
  return;
}

// Create @ 1445be9f0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<UE::IoStore::FMultiEndpointHttpClient,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient>_>
 __cdecl UE::IoStore::FMultiEndpointHttpClient::Create(FMultiEndpointHttpClientConfig *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *in_RDX;
  
  puVar2 = ::operator_new(0xb0);
  if (puVar2 == (undefined8 *)0x0) {
    param_1->MaxConnectionCount = 0;
    param_1->ReceiveBufferSize = 0;
  }
  else {
    uVar1 = in_RDX[1];
    *puVar2 = *in_RDX;
    puVar2[1] = uVar1;
    uVar1 = in_RDX[3];
    puVar2[2] = in_RDX[2];
    puVar2[3] = uVar1;
    uVar1 = in_RDX[5];
    puVar2[4] = in_RDX[4];
    puVar2[5] = uVar1;
    puVar2[6] = 0;
    puVar2[7] = 0;
    HTTP::FEventLoop::FEventLoop((FEventLoop *)(puVar2 + 8));
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0x10] = 0;
    *(undefined4 *)(puVar2 + 0x11) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x8c) = 0x80;
    *(undefined4 *)(puVar2 + 0x12) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x94) = 0;
    puVar2[0x14] = 0;
    *(undefined4 *)(puVar2 + 0x15) = 0;
    HTTP::FEventLoop::SetFailTimeout((FEventLoop *)(puVar2 + 8),*(int *)(puVar2 + 2));
    *(undefined8 **)param_1 = puVar2;
  }
  return (TUniquePtr<UE::IoStore::FMultiEndpointHttpClient,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient>_>
          )(FMultiEndpointHttpClient *)param_1;
}

// CreateConnection @ 1445beca0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>
__thiscall
UE::IoStore::FMultiEndpointHttpClient::CreateConnection
          (FMultiEndpointHttpClient *this,TStringView<char> *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>
  TVar5;
  FConnectionPool *pFVar6;
  undefined8 *in_R8;
  TStringView<char> local_48;
  FParams local_38;
  
  local_38.HostName.DataPtr = (char *)0x0;
  local_38.HostName.Size = 0;
  local_38.VerifyCert = HTTP::FCertRoots::NoTls();
  local_48.DataPtr = (char *)*in_R8;
  local_48._8_8_ = in_R8[1];
  local_38.SendBufSize = -1;
  local_38.RecvBufSize = -1;
  local_38.Port = 0;
  local_38.ConnectionCount = 1;
  local_38.HttpVersion = One;
  local_38.MaxInflight = '\x01';
  iVar4 = HTTP::FConnectionPool::FParams::SetHostFromUrl(&local_38,&local_48);
  if (iVar4 < 0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1334794450261508748>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                       ,0x28c,"Params.SetHostFromUrl(HostUrl) >= 0");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      TVar5.Ptr = (FConnectionPool *)(*pcVar1)();
      return (TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>
              )TVar5.Ptr;
    }
  }
  iVar4 = (this->Config).ReceiveBufferSize;
  iVar2 = local_38.RecvBufSize;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  iVar4 = (this->Config).SendBufferSize;
  if (-1 < iVar4) {
    local_38.SendBufSize = iVar4;
  }
  local_38.RecvBufSize = iVar2;
  local_38.HttpVersion = (GIaxHttpVersion == 2) + One;
  local_38.ConnectionCount = (ushort)(this->Config).MaxConnectionCount;
  iVar4 = 0x40;
  if (GIaxHttpMaxInflight < 0x40) {
    iVar4 = GIaxHttpMaxInflight;
  }
  local_38.MaxInflight = '\x01';
  if (1 < iVar4) {
    local_38.MaxInflight = (uchar)iVar4;
  }
  if (GIaxHttpVersion == 2) {
    local_38.ConnectionCount = 1;
    local_38.VerifyCert = HTTP::FCertRoots::Default();
  }
  pFVar6 = ::operator_new(8);
  if (pFVar6 == (FConnectionPool *)0x0) {
    param_1->DataPtr = (char *)0x0;
  }
  else {
    pFVar6 = HTTP::FConnectionPool::FConnectionPool(pFVar6,&local_38);
    param_1->DataPtr = (char *)pFVar6;
  }
  return (TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>
          )(FConnectionPool *)param_1;
}

// FindConnection @ 1445cd800

/* WARNING: Enum "Type": Some values do not have unique names */

FConnection * __thiscall
UE::IoStore::FMultiEndpointHttpClient::FindConnection
          (FMultiEndpointHttpClient *this,FOnDemandHostGroup *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FConnection *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->Connections).AllocatorInstance.Data;
  iVar2 = (this->Connections).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Connections).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    if ((*(longlong *)pFVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Conn.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                           ,0x2bf,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FConnection *)(*pcVar3)();
      return pFVar5;
    }
    if (((*(FConnection **)pFVar6)->HostGroup).Impl.Object == (param_1->Impl).Object) {
      return *(FConnection **)pFVar6;
    }
    pFVar6 = pFVar6 + 8;
  }
  return (FConnection *)0x0;
}

// Get @ 1445d0910

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
UE::IoStore::FMultiEndpointHttpClient::Get
          (FMultiEndpointHttpClient *this,FOnDemandHostGroup *param_1,TStringView<char> *param_2,
          TFunction<void___cdecl(UE::IoStore::FMultiEndpointHttpClientResponse_&&)> *param_3)

{
  uint uVar1;
  FIoOffsetAndLength local_38;
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> local_28;
  TStringView<char> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_38.OffsetAndLength[0] = '\0';
  local_38.OffsetAndLength[1] = '\0';
  local_38.OffsetAndLength[2] = '\0';
  local_38.OffsetAndLength[3] = '\0';
  local_38.OffsetAndLength[4] = '\0';
  local_38.OffsetAndLength[5] = '\0';
  local_38.OffsetAndLength[6] = '\0';
  local_38.OffsetAndLength[7] = '\0';
  local_38.OffsetAndLength[8] = '\0';
  local_38.OffsetAndLength[9] = '\0';
  uVar1 = Get(this,param_1,&local_18,&local_38,&local_28,None,param_3);
  DestructItems<FAnsiString,int>((FAnsiString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return uVar1;
}

// Get @ 1445d0990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
UE::IoStore::FMultiEndpointHttpClient::Get
          (FMultiEndpointHttpClient *this,FOnDemandHostGroup *param_1,TStringView<char> *param_2,
          FIoOffsetAndLength *param_3,TArray<FAnsiString,TSizedDefaultAllocator<32>_> *param_4,
          EMultiEndpointRequestFlags param_5,
          TFunction<void___cdecl(UE::IoStore::FMultiEndpointHttpClientResponse_&&)> *param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint uVar5;
  FConnection *pFVar6;
  FAnsiString *pFVar7;
  longlong *plVar8;
  undefined1 auStack_148 [32];
  LARGE_INTEGER local_128 [2];
  undefined1 local_118 [48];
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  FAnsiString local_c8;
  uchar local_b8 [8];
  uchar local_b0 [4];
  uint local_ac;
  FConnection *local_a8;
  FIoBuffer local_a0;
  FIoBuffer local_98;
  ForAnyElementType local_90;
  undefined8 uStack_88;
  LARGE_INTEGER local_80;
  undefined8 local_78;
  int local_70;
  EMultiEndpointRequestFlags local_6c;
  undefined2 local_6b;
  int local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  pFVar6 = GetConnection(this,param_1);
  local_118._0_8_ = *(undefined8 *)param_6;
  local_118._40_8_ = *(undefined8 *)&param_6->field_0x28;
  *(undefined8 *)&param_6->field_0x28 = 0;
  local_118._32_8_ = *(undefined8 *)&param_6->field_0x20;
  local_118._16_8_ = *(undefined8 *)&param_6->field_0x10;
  local_118._24_8_ = *(undefined8 *)&param_6->field_0x18;
  if (local_118._0_8_ != 0) {
    *(undefined8 *)param_6 = 0;
  }
  local_e8.Data = (param_4->AllocatorInstance).Data;
  uVar3 = *(undefined8 *)&param_2->Size;
  pcVar4 = param_2->DataPtr;
  (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_e0 = param_4->ArrayNum;
  local_dc = param_4->ArrayMax;
  param_4->ArrayNum = 0;
  param_4->ArrayMax = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0._0_4_ = 0;
  local_d0._4_4_ = 0;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  pFVar7 = FAnsiString::ConstructFromPtrSize((FAnsiString *)&local_128[0].s,pcVar4,(int)uVar3);
  if (&local_c8 != pFVar7) {
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    local_c8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    local_c8.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if ((void *)local_128[0].QuadPart != (void *)0x0) {
    FMemory::Free((void *)local_128[0]);
  }
  local_b8 = *(uchar (*) [8])param_3->OffsetAndLength;
  local_b0._0_2_ = *(undefined2 *)(param_3->OffsetAndLength + 8);
  local_ac = 0;
  local_a8 = pFVar6;
  FIoBuffer::FIoBuffer(&local_a0);
  FIoBuffer::FIoBuffer(&local_98);
  local_90.Data = (FScriptContainerElement *)0x0;
  uStack_88._0_4_ = 0;
  uStack_88._4_4_ = 0;
  QueryPerformanceCounter(local_128);
  local_80.s = local_128[0].s;
  local_70 = pFVar6->CurrentHost;
  local_6c = param_5;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  local_6b._0_1_ = false;
  local_6b._1_1_ = -1;
  local_68 = 0;
  uVar5 = IssueRequest(this,(FRequest *)local_118);
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  if (local_98.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_98.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)local_98.CorePtr.Reference + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)local_98.CorePtr.Reference);
      ::operator_delete((void *)local_98.CorePtr.Reference,0x20);
    }
  }
  if (local_a0.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_a0.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)local_a0.CorePtr.Reference + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)local_a0.CorePtr.Reference);
      ::operator_delete((void *)local_a0.CorePtr.Reference,0x20);
    }
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnsiString,int>((FAnsiString *)local_d8.Data,(int)local_d0);
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  DestructItems<FAnsiString,int>((FAnsiString *)local_e8.Data,local_e0);
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  if (local_118._0_8_ != 0) {
    plVar8 = (longlong *)(local_118 + 0x10);
    if ((longlong *)local_118._40_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_118._40_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return uVar5;
}

// Get @ 1445d0c10

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
UE::IoStore::FMultiEndpointHttpClient::Get
          (FMultiEndpointHttpClient *this,FOnDemandHostGroup *param_1,TStringView<char> *param_2,
          FIoOffsetAndLength *param_3,
          TFunction<void___cdecl(UE::IoStore::FMultiEndpointHttpClientResponse_&&)> *param_4)

{
  uint uVar1;
  TArray<FAnsiString,TSizedDefaultAllocator<32>_> local_28;
  TStringView<char> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  uVar1 = Get(this,param_1,&local_18,param_3,&local_28,None,param_4);
  DestructItems<FAnsiString,int>((FAnsiString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return uVar1;
}

// Get @ 1445d0c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> * __cdecl
UE::IoStore::FMultiEndpointHttpClient::Get
          (TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> *__return_storage_ptr__,
          TStringView<char> *param_1,FMultiEndpointHttpClientConfig *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  FIoBuffer FVar8;
  bool bVar9;
  uint uVar10;
  FRequest FVar11;
  void *pvVar12;
  FIoStatus *this;
  TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> *pTVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_2c8 [32];
  ulong64 *local_2a8;
  int local_298 [2];
  FIoBuffer local_290;
  FEventLoop local_288;
  LARGE_INTEGER local_280;
  ulong64 local_278;
  undefined4 local_270;
  undefined2 local_26c;
  undefined1 local_26a;
  undefined1 local_269;
  char local_268;
  undefined1 local_260 [8];
  LARGE_INTEGER local_258 [2];
  char *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  TStringView<wchar_t> local_238;
  undefined1 local_228 [16];
  TStringView<char> local_218;
  code *local_208 [5];
  undefined8 *local_1e0;
  undefined8 local_1b0;
  FIoStatus local_188;
  TStringBuilderBase<wchar_t> local_178;
  wchar_t local_158 [128];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_2c8;
  uVar15 = 0;
  local_269 = 1;
  local_26a = param_2->Redirects == Follow;
  local_26c = 0x100;
  local_278 = 0;
  local_270 = 0;
  local_268 = (GIaxHttpVersion == 2) + '\x01';
  if (GIaxHttpVersion == 2) {
    local_278 = HTTP::FCertRoots::Default();
  }
  HTTP::FEventLoop::FEventLoop(&local_288);
  FIoBuffer::FIoBuffer(&local_290);
  local_178.Base = local_158;
  local_178.CurPos = local_158;
  local_178.bIsDynamic = false;
  local_178.bIsExternal = false;
  local_178.End = (wchar_t *)local_58;
  local_298[0] = 0;
  uVar5 = param_2->MaxRetryCount;
  if (param_2->MaxRetryCount == 0xffffffff) {
    uVar5 = 3;
  }
  QueryPerformanceCounter(&local_280);
  pcVar6 = param_1->DataPtr;
  uVar7._0_4_ = param_1->Size;
  uVar7._4_2_ = *(ushort *)&param_1->field_0xc;
  uVar7._6_1_ = (bool)param_1->field_0xe;
  uVar7._7_1_ = (bool)param_1->field_0xf;
  while( true ) {
    local_208[0] = (code *)0x0;
    local_1e0 = (undefined8 *)0x0;
    local_1e0 = FMemory::Malloc(0x20,8);
    *local_1e0 = &Core::Private::Function::
                  TFunction_OwnedObject<`UE::IoStore::FMultiEndpointHttpClient::Get'::`7'::<lambda_1>,0,1>
                  ::_vftable_;
    local_1e0[1] = &local_290;
    local_1e0[2] = &local_178;
    local_1e0[3] = local_298;
    if (local_1e0 + 1 != (longlong *)0x0) {
      local_208[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::IoStore::FMultiEndpointHttpClient::Get'::__l7::<lambda_1>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                     ::Call;
    }
    uStack_240 = 3;
    local_248 = "GET";
    local_218._12_4_ = uStack_23c;
    local_218.Size = 3;
    local_2a8 = &local_278;
    local_218.DataPtr = "GET";
    local_228._0_8_ = pcVar6;
    local_228._8_8_ = uVar7;
    FVar11 = HTTP::FEventLoop::Request
                       (&local_288,(TStringView<char> *)local_260,&local_218,
                        (FRequestParams *)local_228);
    HTTP::FEventLoop::Send
              (&local_288,(FRequest *)FVar11.Ptr,
               (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_208,0);
    HTTP::FRequest::~FRequest((FRequest *)local_260);
    do {
      uVar10 = HTTP::FEventLoop::Tick(&local_288,-1);
      FVar8.CorePtr.Reference = local_290.CorePtr.Reference;
    } while (uVar10 != 0);
    if (local_298[0] - 200U < 100) break;
    uVar15 = uVar15 + 1;
    if (uVar5 < uVar15) {
      if ((int)((longlong)local_178.CurPos - (longlong)local_178.Base >> 1) == 0) {
        if (local_178.End < local_178.CurPos + 0xc) {
          TStringBuilderBase<wchar_t>::Extend(&local_178,0xc);
        }
        pvVar12 = FGenericPlatformString::Memcpy(local_178.CurPos,L"StatusCode: ",0x18);
        local_178.CurPos = (wchar_t *)((longlong)pvVar12 + 0x18);
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_178,L"%u");
      }
      local_238.DataPtr = local_178.Base;
      local_238.Size = (int)((longlong)local_178.CurPos - (longlong)local_178.Base >> 1);
      this = FIoStatus::FIoStatus(&local_188,ReadError,&local_238);
      FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
      if ((this->ErrorCode == Ok) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InStatus.IsOk()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                             ,0x102,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        pTVar13 = (TIoStatusOr<UE::IoStore::FMultiEndpointHttpClientResponse> *)(*pcVar3)();
        return pTVar13;
      }
      FIoStatus::operator=(&__return_storage_ptr__->StatusValue,this);
      FIoStatus::~FIoStatus(this);
LAB_1445d1020:
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_178);
      FVar8.CorePtr.Reference = local_290.CorePtr.Reference;
      if (local_290.CorePtr.Reference != (BufCore *)0x0) {
        FIoBuffer::BufCore::CheckRefCount((BufCore *)local_290.CorePtr.Reference);
        LOCK();
        piVar1 = (int *)((longlong)FVar8.CorePtr.Reference + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FIoBuffer::BufCore::~BufCore((BufCore *)FVar8.CorePtr.Reference);
          ::operator_delete((void *)FVar8.CorePtr.Reference,0x20);
        }
      }
      HTTP::FEventLoop::~FEventLoop(&local_288);
      return __return_storage_ptr__;
    }
  }
  local_290.CorePtr.Reference = (TRefCountPtr<FIoBuffer::BufCore>)(BufCore *)0x0;
  local_1b0 = 0;
  QueryPerformanceCounter(local_258);
  iVar2 = local_298[0];
  lVar14 = 0;
  dVar4 = (double)(ulonglong)(local_258[0].QuadPart - (longlong)local_280) *
          FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000;
  if ((__real_43e0000000000000 <= dVar4) &&
     (dVar4 = dVar4 - __real_43e0000000000000, dVar4 < __real_43e0000000000000)) {
    lVar14 = -0x8000000000000000;
  }
  FIoStatus::FIoStatus(&__return_storage_ptr__->StatusValue);
  FIoStatus::operator=(&__return_storage_ptr__->StatusValue,&FIoStatus::Ok);
  *(TRefCountPtr<FIoBuffer::BufCore> *)(__return_storage_ptr__->Value).Pad = FVar8.CorePtr.Reference
  ;
  (__return_storage_ptr__->Value).Pad[8] = '\0';
  (__return_storage_ptr__->Value).Pad[9] = '\0';
  (__return_storage_ptr__->Value).Pad[10] = '\0';
  (__return_storage_ptr__->Value).Pad[0xb] = '\0';
  (__return_storage_ptr__->Value).Pad[0xc] = '\0';
  (__return_storage_ptr__->Value).Pad[0xd] = '\0';
  (__return_storage_ptr__->Value).Pad[0xe] = '\0';
  (__return_storage_ptr__->Value).Pad[0xf] = '\0';
  (__return_storage_ptr__->Value).Pad[0x10] = '\0';
  (__return_storage_ptr__->Value).Pad[0x11] = '\0';
  (__return_storage_ptr__->Value).Pad[0x12] = '\0';
  (__return_storage_ptr__->Value).Pad[0x13] = '\0';
  (__return_storage_ptr__->Value).Pad[0x14] = '\0';
  (__return_storage_ptr__->Value).Pad[0x15] = '\0';
  (__return_storage_ptr__->Value).Pad[0x16] = '\0';
  (__return_storage_ptr__->Value).Pad[0x17] = '\0';
  (__return_storage_ptr__->Value).Pad[0x18] = '\0';
  (__return_storage_ptr__->Value).Pad[0x19] = '\0';
  (__return_storage_ptr__->Value).Pad[0x1a] = '\0';
  (__return_storage_ptr__->Value).Pad[0x1b] = '\0';
  (__return_storage_ptr__->Value).Pad[0x1c] = '\0';
  (__return_storage_ptr__->Value).Pad[0x1d] = '\0';
  (__return_storage_ptr__->Value).Pad[0x1e] = '\0';
  (__return_storage_ptr__->Value).Pad[0x1f] = '\0';
  (__return_storage_ptr__->Value).Pad[0x20] = '\0';
  (__return_storage_ptr__->Value).Pad[0x21] = '\0';
  (__return_storage_ptr__->Value).Pad[0x22] = '\0';
  (__return_storage_ptr__->Value).Pad[0x23] = '\0';
  (__return_storage_ptr__->Value).Pad[0x24] = '\0';
  (__return_storage_ptr__->Value).Pad[0x25] = '\0';
  (__return_storage_ptr__->Value).Pad[0x26] = '\0';
  (__return_storage_ptr__->Value).Pad[0x27] = '\0';
  *(undefined8 *)((__return_storage_ptr__->Value).Pad + 0x28) = local_1b0;
  *(longlong *)((__return_storage_ptr__->Value).Pad + 0x30) = (longlong)dVar4 + lVar14;
  *(int *)((__return_storage_ptr__->Value).Pad + 0x38) = iVar2;
  *(uint *)((__return_storage_ptr__->Value).Pad + 0x3c) = uVar15;
  (__return_storage_ptr__->Value).Pad[0x40] = 0xff;
  (__return_storage_ptr__->Value).Pad[0x41] = 0xff;
  (__return_storage_ptr__->Value).Pad[0x42] = 0xff;
  (__return_storage_ptr__->Value).Pad[0x43] = 0xff;
  (__return_storage_ptr__->Value).Pad[0x44] = '\0';
  (__return_storage_ptr__->Value).Pad[0x45] = 0xff;
  DestructItems<FAnsiString,int>((FAnsiString *)0x0,0);
  goto LAB_1445d1020;
}

// GetConnection @ 1445d3400

/* WARNING: Enum "Type": Some values do not have unique names */

FConnection * __thiscall
UE::IoStore::FMultiEndpointHttpClient::GetConnection
          (FMultiEndpointHttpClient *this,FOnDemandHostGroup *param_1)

{
  int *piVar1;
  TArray<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  FScriptContainerElement *pFVar2;
  FConnectionPool *pFVar3;
  uint uVar4;
  TReferenceControllerBase<1> *pTVar5;
  FHost *this_01;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FConnection *pFVar10;
  FConnection *pFVar11;
  TArrayView<FAnsiString_const_,int> *pTVar12;
  TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>
  TVar13;
  ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
  FVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  TStringView<char> local_res18;
  TArrayView<FAnsiString_const_,int> local_58;
  TStringView<char> local_48;
  
  pFVar15 = (this->Connections).AllocatorInstance.Data;
  iVar8 = (this->Connections).ArrayNum;
  pFVar10 = (FConnection *)0x0;
  pFVar2 = pFVar15 + (longlong)iVar8 * 8;
  while( true ) {
    if ((this->Connections).ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar2) break;
    if ((*(longlong *)pFVar15 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Conn.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                           ,0x2a8,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar10 = (FConnection *)(*pcVar6)();
      return pFVar10;
    }
    if (((*(FConnection **)pFVar15)->HostGroup).Impl.Object == (param_1->Impl).Object) {
      return *(FConnection **)pFVar15;
    }
    pFVar15 = pFVar15 + 8;
  }
  pFVar11 = ::operator_new(0x48);
  if (pFVar11 != (FConnection *)0x0) {
    (pFVar11->HostGroup).Impl.Object = (param_1->Impl).Object;
    pTVar5 = (param_1->Impl).SharedReferenceCount.ReferenceController;
    (pFVar11->HostGroup).Impl.SharedReferenceCount.ReferenceController = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    (pFVar11->Pools).AllocatorInstance.SecondaryData =
         (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
          )0x0;
    (pFVar11->Pools).ArrayNum = 0;
    (pFVar11->Pools).ArrayMax = 4;
    pFVar11->CurrentHost = -1;
    pFVar10 = pFVar11;
  }
  iVar8 = (this->Connections).ArrayNum;
  piVar1 = &(this->Connections).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Connections).AllocatorInstance,piVar1);
  }
  (this->Connections).ArrayNum = iVar8 + 1;
  this_00 = &pFVar10->Pools;
  *(FConnection **)((this->Connections).AllocatorInstance.Data + (longlong)iVar8 * 8) = pFVar10;
  pTVar12 = FOnDemandHostGroup::Hosts(param_1,&local_58);
  iVar8 = (pFVar10->Pools).ArrayNum;
  piVar1 = &(pFVar10->Pools).ArrayNum;
  uVar4 = pTVar12->ArrayNum;
  if (iVar8 < (int)uVar4) {
    iVar9 = Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>_>
                      (8,8,uVar4 - iVar8,&this_00->AllocatorInstance,piVar1,
                       &(pFVar10->Pools).ArrayMax);
    FVar14 = (pFVar10->Pools).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
                   )0x0) {
      FVar14 = (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
                )this_00;
    }
    memset((void *)((longlong)FVar14 + (longlong)iVar9 * 8),0,(longlong)(int)(uVar4 - iVar8) << 3);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar8) {
      uVar16 = iVar8 - uVar4;
      if (((int)(uVar16 | uVar4) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FConnection *)(*pcVar6)();
        return pFVar10;
      }
      if (uVar16 != 0) {
        TArray<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        ::RemoveAtImpl(this_00,uVar4,uVar16);
        Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>_>
                  (8,8,&this_00->AllocatorInstance,*piVar1,&(pFVar10->Pools).ArrayMax);
      }
    }
  }
  iVar8 = FOnDemandHostGroup::PrimaryHostIndex(param_1);
  pFVar10->CurrentHost = iVar8;
  FOnDemandHostGroup::PrimaryHost(param_1,&local_48);
  TVar13 = CreateConnection(this,&local_res18);
  uVar4 = pFVar10->CurrentHost;
  uVar16 = 0;
  if ((int)uVar4 < (pFVar10->Pools).ArrayNum) {
    uVar16 = ~uVar4 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar10 = (FConnection *)(*pcVar6)();
    return pFVar10;
  }
  FVar14 = (pFVar10->Pools).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
                 )0x0) {
    FVar14 = (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
              )this_00;
  }
  pFVar3 = (FConnectionPool *)((longlong)FVar14 + (longlong)(int)uVar4 * 8);
  if (pFVar3 != TVar13.Ptr) {
    this_01 = pFVar3->Ptr;
    pFVar3->Ptr = (TVar13.Ptr)->Ptr;
    (TVar13.Ptr)->Ptr = (FHost *)0x0;
    if (this_01 != (FHost *)0x0) {
      HTTP::FConnectionPool::~FConnectionPool((FConnectionPool *)this_01);
      ::operator_delete(this_01,8);
    }
  }
  if ((FConnectionPool *)local_res18.DataPtr != (FConnectionPool *)0x0) {
    HTTP::FConnectionPool::~FConnectionPool((FConnectionPool *)local_res18.DataPtr);
    ::operator_delete(local_res18.DataPtr,8);
  }
  return pFVar10;
}

// GetRetryLimitForRequest @ 1445d7840

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
UE::IoStore::FMultiEndpointHttpClient::GetRetryLimitForRequest
          (FMultiEndpointHttpClient *this,FRequest *param_1)

{
  uint uVar1;
  TArrayView<FAnsiString_const_,int> *pTVar2;
  TArrayView<FAnsiString_const_,int> local_18;
  
  uVar1 = (this->Config).MaxRetryCount;
  if (uVar1 == 0xffffffff) {
    pTVar2 = FOnDemandHostGroup::Hosts(&param_1->Connection->HostGroup,&local_18);
    uVar1 = pTVar2->ArrayNum;
  }
  return uVar1;
}

// IssueRequest @ 1445de4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
UE::IoStore::FMultiEndpointHttpClient::IssueRequest
          (FMultiEndpointHttpClient *this,FRequest *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  FConnection *pFVar3;
  FHost *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uchar *puVar7;
  atomic<unsigned_int> aVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  TStringBuilderBase<char> *pTVar13;
  ulong64 uVar14;
  uint uVar15;
  ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
  FVar16;
  FIoOffsetAndLength *pFVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStackY_328 [32];
  atomic<unsigned_int> local_2f8 [2];
  undefined1 local_2f0 [16];
  uint uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined2 local_2cc;
  undefined1 local_2ca;
  undefined1 local_2c9;
  undefined1 local_2c8;
  TPairInitializer<unsigned_int_const_&,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo_&&>
  local_2c0;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  char *local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  char *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  char *local_288;
  uint uStack_280;
  undefined4 uStack_27c;
  char *local_278;
  uint uStack_270;
  undefined4 uStack_26c;
  TStringView<char> local_268;
  char *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  ulong64 local_248;
  undefined1 local_240;
  atomic<unsigned_int> *local_238;
  ulong64 *local_230;
  TStringView<char> local_228;
  FConnectionPool local_218;
  undefined8 uStack_210;
  TStringView<char> local_208;
  TStringView<char> local_1f8;
  TStringView<char> local_1e8;
  TStringView<char> local_1d8;
  TStringView<char> local_1c8;
  TStringView<char> local_1b8;
  code *local_1a8 [5];
  undefined8 *local_180;
  TStringBuilderBase<char> local_178;
  char local_158 [64];
  FMultiEndpointHttpClient *local_118 [2];
  FRequest local_108;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  bVar9 = FOnDemandHostGroup::IsEmpty(&param_1->Connection->HostGroup);
  if ((bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request.Connection.HostGroup.IsEmpty() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                         ,0x16c,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return uVar10;
  }
  pFVar3 = param_1->Connection;
  uVar10 = pFVar3->CurrentHost;
  uVar15 = 0;
  if ((int)uVar10 < (pFVar3->Pools).ArrayNum) {
    uVar15 = ~uVar10 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return uVar10;
  }
  FVar16 = (pFVar3->Pools).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
                 )0x0) {
    FVar16 = (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
              )&pFVar3->Pools;
  }
  if ((*(longlong *)((longlong)FVar16 + (longlong)(int)uVar10 * 8) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request.Connection.Pools[Request.Connection.CurrentHost].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                         ,0x16d,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return uVar10;
  }
  pFVar3 = param_1->Connection;
  iVar2 = (param_1->RelativeUrl).Data.ArrayNum;
  pFVar4 = (FHost *)(param_1->RelativeUrl).Data.AllocatorInstance.Data;
  uVar10 = pFVar3->CurrentHost;
  uVar15 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar15 = 0;
  }
  uVar11 = 0;
  if ((int)uVar10 < (pFVar3->Pools).ArrayNum) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return uVar10;
  }
  FVar16 = (pFVar3->Pools).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
                 )0x0) {
    FVar16 = (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
              )&pFVar3->Pools;
  }
  uStack_2b0 = 3;
  pFVar17 = &param_1->Range;
  local_2d8 = 0;
  local_2c8 = 0;
  local_2d0 = CONCAT31(CONCAT21(CONCAT11((param_1->Range).OffsetAndLength[6],
                                         (param_1->Range).OffsetAndLength[7]),
                                (param_1->Range).OffsetAndLength[8]),
                       (param_1->Range).OffsetAndLength[9]);
  local_2ca = (this->Config).Redirects == Follow;
  local_2cc = 0x100;
  local_2c9 = (this->Config).bAllowChunkedTransfer;
  uStack_2dc = local_228._12_4_;
  uStack_210 = CONCAT44(local_228._12_4_,uVar15);
  local_2c0.Value = (FTicketInfo *)0x150d74d54;
  local_208._12_4_ = uStack_2ac;
  local_208.Size = 3;
  local_208.DataPtr = "GET";
  local_2f0._8_8_ = pFVar4;
  uStack_2e0 = uVar15;
  local_218.Ptr = pFVar4;
  HTTP::FEventLoop::Request
            (&this->EventLoop,(TStringView<char> *)local_2f0,&local_208,&local_218,
             *(FRequestParams **)((longlong)FVar16 + (longlong)(int)uVar10 * 8));
  uStack_2a0 = 0x11;
  local_2a8 = "akamai-x-cache-on";
  local_1f8._12_4_ = uStack_29c;
  local_1f8.Size = 0x11;
  local_298 = "pragma";
  uStack_290 = 6;
  local_1e8._12_4_ = uStack_28c;
  local_1e8.Size = 6;
  local_1e8.DataPtr = "pragma";
  local_1f8.DataPtr = "akamai-x-cache-on";
  HTTP::FRequest::Header((FRequest *)local_2f0,&local_1e8,&local_1f8);
  uVar10 = (param_1->RequestHeaders).ArrayNum;
  if (((uVar10 != 0) && ((uVar10 & 1) != 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request.RequestHeaders.IsEmpty() || ((Request.RequestHeaders.Num() % 2) == 0)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                         ,0x17f,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return uVar10;
  }
  iVar2 = (param_1->RequestHeaders).ArrayNum;
  uVar18 = 0;
  if ((iVar2 != 0) && (uVar19 = uVar18, 0 < iVar2)) {
    do {
      uVar10 = (uint)uVar19;
      uVar15 = 0;
      if ((int)(uVar10 + 1) < (param_1->RequestHeaders).ArrayNum) {
        uVar15 = ~(uVar10 + 1) >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return uVar10;
      }
      pFVar5 = (param_1->RequestHeaders).AllocatorInstance.Data;
      local_288 = *(char **)(pFVar5 + uVar18 + 0x10);
      iVar2 = *(int *)(pFVar5 + uVar18 + 0x18);
      uStack_280 = iVar2 - 1;
      if (iVar2 == 0) {
        uStack_280 = 0;
      }
      uVar15 = 0;
      if ((int)uVar10 < (param_1->RequestHeaders).ArrayNum) {
        uVar15 = ~uVar10 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return uVar10;
      }
      pFVar5 = (param_1->RequestHeaders).AllocatorInstance.Data;
      local_1d8._12_4_ = uStack_27c;
      local_1d8.Size = uStack_280;
      local_1d8.DataPtr = local_288;
      local_278 = *(char **)(pFVar5 + uVar18);
      iVar2 = *(int *)(pFVar5 + uVar18 + 8);
      uStack_270 = iVar2 - 1;
      if (iVar2 == 0) {
        uStack_270 = 0;
      }
      local_1c8._12_4_ = uStack_26c;
      local_1c8.Size = uStack_270;
      local_1c8.DataPtr = local_278;
      HTTP::FRequest::Header((FRequest *)local_2f0,&local_1c8,&local_1d8);
      uVar18 = uVar18 + 0x20;
      uVar19 = (ulonglong)(uVar10 + 2);
    } while ((int)(uVar10 + 2) < (param_1->RequestHeaders).ArrayNum);
  }
  if (GAllowPartialContentRequests != false) {
    do {
      if (&param_1->field_0x6a <= pFVar17) goto LAB_1445dea07;
      puVar7 = pFVar17->OffsetAndLength;
      pFVar17 = (FIoOffsetAndLength *)(pFVar17->OffsetAndLength + 1);
    } while (*puVar7 == '\0');
    local_268.Size = 1;
    local_178.bIsDynamic = false;
    local_178.bIsExternal = false;
    local_268.DataPtr = "-";
    local_178.Base = local_158;
    local_178.CurPos = local_158;
    local_178.End = (char *)local_118;
    pvVar12 = FGenericPlatformString::Memcpy(local_158,"bytes=",6);
    local_178.CurPos = (char *)((longlong)pvVar12 + 6);
    pTVar13 = TStringBuilderBase<char>::AppendfImpl(&local_178,"%llu");
    pTVar13 = operator<<<char,TStringView<char>_>(pTVar13,&local_268);
    TStringBuilderBase<char>::AppendfImpl(pTVar13,"%llu");
    iStack_250 = (int)local_178.CurPos - (int)local_178.Base;
    local_258 = local_178.Base;
    local_1b8._12_4_ = uStack_24c;
    local_1b8.Size = iStack_250;
    local_2f0._8_8_ = "range";
    uStack_2e0 = 5;
    local_228._12_4_ = uStack_2dc;
    local_228.Size = 5;
    local_228.DataPtr = "range";
    local_1b8.DataPtr = local_178.Base;
    HTTP::FRequest::Header((FRequest *)local_2f0,&local_228,&local_1b8);
    TStringBuilderBase<char>::~TStringBuilderBase<char>(&local_178);
  }
LAB_1445dea07:
  local_2f8[0] = (atomic<unsigned_int>)param_1->TicketId;
  aVar8 = NextFreeId;
  if (local_2f8[0] == (atomic<unsigned_int>)0x0) {
    do {
      NextFreeId = aVar8;
      local_2f8[0] = NextFreeId;
      LOCK();
      UNLOCK();
      aVar8 = (atomic<unsigned_int>)((int)NextFreeId + 1);
    } while (NextFreeId == (atomic<unsigned_int>)0x0);
    param_1->TicketId = (uint)NextFreeId;
    NextFreeId = aVar8;
  }
  local_118[0] = this;
  FRequest::FRequest(&local_108,param_1);
  local_1a8[0] = (code *)0x0;
  local_180 = FMemory::Malloc(0xe0,0x10);
  puVar1 = local_180 + 2;
  *local_180 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::`2'::<lambda_1>,0,1>
                ::_vftable_;
  *puVar1 = local_118[0];
  FRequest::FRequest((FRequest *)(local_180 + 4),&local_108);
  if (puVar1 != (undefined8 *)0x0) {
    local_1a8[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::IoStore::FMultiEndpointHttpClient::IssueRequest'::__l2::<lambda_1>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                   ::Call;
  }
  uVar14 = HTTP::FEventLoop::Send
                     (&this->EventLoop,(FRequest *)local_2f0,
                      (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_1a8
                      ,0);
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequestTicket != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                         ,0x1e2,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return uVar10;
  }
  FRecursiveMutex::Lock(&this->TicketLookupMutex);
  local_238 = local_2f8;
  local_230 = &local_248;
  local_240 = 0;
  local_248 = uVar14;
  TSet<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo_&&>_>
            ((TSet<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo,0>,FDefaultSetAllocator>
              *)&this->TicketLookupMap,&local_2c0,(bool *)&local_238);
  FRecursiveMutex::Unlock(&this->TicketLookupMutex);
  aVar8 = local_2f8[0];
  FRequest::~FRequest(&local_108);
  HTTP::FRequest::~FRequest((FRequest *)local_2f0);
  return (uint)aVar8;
}

// Log @ 1445e0720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::FMultiEndpointHttpClient::Log
          (FMultiEndpointHttpClient *this,FRequest *param_1,FTicketStatus *param_2)

{
  FLogCategoryBase *pFVar1;
  FScriptContainerElement *pFVar2;
  char *pcVar3;
  EId EVar4;
  void *pvVar5;
  FError *pFVar6;
  TStringView<char> *pTVar7;
  Type TVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  undefined1 auStackY_748 [32];
  LARGE_INTEGER local_6d8 [2];
  longlong local_6c8;
  FError local_6c0;
  TStringView<char> local_6b0;
  TStringBuilderBase<wchar_t> local_698;
  wchar_t local_678 [256];
  TStringBuilderBase<wchar_t> local_478;
  wchar_t local_458 [512];
  ulonglong local_58 [4];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStackY_748;
  TVar8 = (this->Config).LogVerbosity;
  if (((GIaxWarnOnFailure) && (99 < param_1->StatusCode - 200)) &&
     (EVar4 = HTTP::FTicketStatus::GetId(param_2), EVar4 != Cancelled)) {
    TVar8 = Warning;
  }
  pFVar1 = (this->Config).LogCategory;
  if ((pFVar1 != (FLogCategoryBase *)0x0) && ((TVar8 & VerbosityMask) <= pFVar1->Verbosity)) {
    QueryPerformanceCounter(local_6d8);
    local_6c8 = 0;
    dVar11 = (double)(CONCAT44(local_6d8[0].s.HighPart,local_6d8[0].s.LowPart) - param_1->StartTime)
             * FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000;
    if ((__real_43e0000000000000 <= dVar11) &&
       (dVar11 = dVar11 - __real_43e0000000000000, dVar11 < __real_43e0000000000000)) {
      local_6c8 = -0x8000000000000000;
    }
    local_6c8 = (longlong)dVar11 + local_6c8;
    local_698.Base = local_678;
    local_698.CurPos = local_678;
    local_698.End = (wchar_t *)&local_478;
    local_698.bIsDynamic = false;
    local_698.bIsExternal = false;
    EVar4 = HTTP::FTicketStatus::GetId(param_2);
    if (EVar4 == Error) {
      if (local_698.End < (TStringBuilderBase<wchar_t> *)(local_698.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_698,1);
      }
      pvVar5 = FGenericPlatformString::Memcpy(local_698.CurPos,&::u__,2);
      local_698.CurPos = (wchar_t *)((longlong)pvVar5 + 2);
      pFVar6 = HTTP::FTicketStatus::GetError(param_2,&local_6c0);
      operator<<<wchar_t,char_const_*>(&local_698,&pFVar6->Reason);
    }
    else {
      EVar4 = HTTP::FTicketStatus::GetId(param_2);
      if (EVar4 == Cancelled) {
        if (local_698.End < (TStringBuilderBase<wchar_t> *)(local_698.CurPos + 9)) {
          TStringBuilderBase<wchar_t>::Extend(&local_698,9);
        }
        pvVar5 = FGenericPlatformString::Memcpy(local_698.CurPos,L" Canceled",0x12);
        local_698.CurPos = (wchar_t *)((longlong)pvVar5 + 0x12);
      }
      else if (1 < (param_1->ResponseMessage).Data.ArrayNum) {
        if (local_698.End < (TStringBuilderBase<wchar_t> *)(local_698.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_698,1);
        }
        pvVar5 = FGenericPlatformString::Memcpy(local_698.CurPos,&::u__,2);
        local_698.CurPos = (wchar_t *)((longlong)pvVar5 + 2);
        iVar9 = (param_1->ResponseMessage).Data.ArrayNum;
        iVar10 = iVar9 + -1;
        if (iVar9 == 0) {
          iVar10 = 0;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  (&local_698,(wchar_t *)(param_1->ResponseMessage).Data.AllocatorInstance.Data,
                   iVar10);
      }
    }
    if (local_698.End < (TStringBuilderBase<wchar_t> *)(local_698.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_698,1);
    }
    *local_698.CurPos = L'\0';
    local_6c0.Reason = (char *)local_698.Base;
    if ((this->Config).MaxRetryCount == -1) {
      FOnDemandHostGroup::Hosts
                (&param_1->Connection->HostGroup,
                 (TArrayView<FAnsiString_const_,int> *)&local_6d8[0].s);
    }
    local_6d8[0]._0_4_ = param_1->RetryCount;
    pTVar7 = FOnDemandHostGroup::Host(&param_1->Connection->HostGroup,&local_6b0,param_1->Host);
    local_478.Base = local_458;
    local_478.bIsDynamic = false;
    local_478.bIsExternal = false;
    local_478.End = (wchar_t *)local_58;
    local_478.CurPos = local_458;
    pcVar3 = pTVar7->DataPtr;
    iVar9 = (int)*(undefined8 *)&pTVar7->Size;
    if (local_58 < local_458 + iVar9) {
      TStringBuilderBase<wchar_t>::Extend(&local_478,(longlong)iVar9);
    }
    if (iVar9 != 0) {
      local_478.CurPos =
           FGenericPlatformString::Convert<char,wchar_t>(local_478.CurPos,iVar9,pcVar3,iVar9);
    }
    iVar9 = (param_1->RelativeUrl).Data.ArrayNum;
    iVar10 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar10 = 0;
    }
    pFVar2 = (param_1->RelativeUrl).Data.AllocatorInstance.Data;
    if (local_478.End < local_478.CurPos + iVar10) {
      TStringBuilderBase<wchar_t>::Extend(&local_478,(longlong)iVar10);
    }
    if (iVar10 != 0) {
      local_478.CurPos =
           FGenericPlatformString::Convert<char,wchar_t>
                     (local_478.CurPos,iVar10,(char *)pFVar2,iVar10);
    }
    if (local_478.End < local_478.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_478,1);
    }
    *local_478.CurPos = L'\0';
    FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                   ,0x2f1,&((this->Config).LogCategory)->CategoryName,TVar8,
                   L"http-%3u: %5llums %5lluKiB [%4s] %s (Attempt %u/%u)%s");
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_478);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_698);
  }
  return;
}

// ProcessRetryAttempts @ 1445ed900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::FMultiEndpointHttpClient::ProcessRetryAttempts
          (FMultiEndpointHttpClient *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  code *pcVar4;
  double dVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  FIoBuffer this_00;
  bool bVar9;
  uint uVar10;
  undefined8 uVar11;
  uint *puVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  FRequest *pFVar17;
  bool bVar18;
  undefined1 auStackY_158 [32];
  longlong local_110;
  longlong local_100;
  FIoBuffer local_f8;
  FAnsiString *local_f0;
  undefined8 local_e8;
  FString local_e0;
  undefined8 local_d0;
  longlong local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  undefined1 local_b4;
  schar local_b3;
  LARGE_INTEGER local_a0;
  code *local_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if ((this->Retries).ArrayNum != 0) {
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId601,"FMultiEndpointHttpClient::ProcessRetryAttempts",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                 ,0x259);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId601);
    }
    FRecursiveMutex::Lock(&this->TicketLookupMutex);
    dVar8 = __real_43e0000000000000;
    dVar7 = __real_408f400000000000;
    uVar6 = 0x40 - param_1;
    if ((this->Retries).ArrayNum < (int)(0x40 - param_1)) {
      uVar6 = (this->Retries).ArrayNum;
    }
    uVar16 = 0;
    local_100 = (longlong)(int)uVar6;
    if (0 < (int)uVar6) {
      local_110 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar16 < (this->Retries).ArrayNum) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar17 = (FRequest *)((this->Retries).AllocatorInstance.Data + local_110);
        if (*(int *)&(this->TicketLookupMap).field_0x8 !=
            *(int *)&(this->TicketLookupMap).field_0x34) {
          puVar3 = *(undefined1 **)&(this->TicketLookupMap).field_0x40;
          puVar14 = &(this->TicketLookupMap).field_0x38;
          if (puVar3 != (undefined1 *)0x0) {
            puVar14 = puVar3;
          }
          uVar10 = *(uint *)(puVar14 +
                            (ulonglong)
                            (*(int *)&(this->TicketLookupMap).field_0x48 - 1U & pFVar17->TicketId) *
                            4);
          if (uVar10 != 0xffffffff) {
            do {
              puVar12 = (uint *)((longlong)(int)uVar10 * 0x20 + *(longlong *)&this->TicketLookupMap)
              ;
              if (*puVar12 == pFVar17->TicketId) {
                puVar15 = puVar12 + 2;
                if (puVar12 == (uint *)0x0) {
                  puVar15 = (uint *)0x0;
                }
                if (puVar15 != (uint *)0x0) {
                  if ((*(longlong *)puVar15 != 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("TicketInfo->HttpTicket == 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                                         ,0x263,L""), bVar9)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if ((char)puVar15[2] == '\0') {
                    IssueRequest(this,pFVar17);
                  }
                  else {
                    FIoBuffer::FIoBuffer(&local_f8);
                    local_f0 = (FAnsiString *)0x0;
                    local_e8 = 0;
                    ::FString::FString(&local_e0,L"Canceled");
                    local_d0 = 0;
                    QueryPerformanceCounter(&local_a0);
                    local_c8 = 0;
                    dVar5 = (double)(local_a0.QuadPart - pFVar17->StartTime) *
                            FGenericPlatformTime::SecondsPerCycle64 * dVar7;
                    if ((dVar8 <= dVar5) && (dVar5 = dVar5 - dVar8, dVar5 < dVar8)) {
                      local_c8 = -0x8000000000000000;
                    }
                    local_b4 = 1;
                    local_c8 = (longlong)dVar5 + local_c8;
                    local_c0 = pFVar17->StatusCode;
                    local_bc = pFVar17->RetryCount - 1;
                    local_b8 = pFVar17->Host;
                    local_b3 = pFVar17->CDNCacheStatus;
                    TSet<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo,0>,FDefaultSetAllocator>
                    ::Remove((TSet<TTuple<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::IoStore::FMultiEndpointHttpClient::FTicketInfo,0>,FDefaultSetAllocator>
                              *)&this->TicketLookupMap,pFVar17->TicketId);
                    local_98 = *(code **)&pFVar17->OnResponse;
                    local_70 = *(longlong **)&(pFVar17->OnResponse).field_0x28;
                    *(undefined8 *)&(pFVar17->OnResponse).field_0x28 = 0;
                    local_78 = *(undefined8 *)&(pFVar17->OnResponse).field_0x20;
                    local_88 = *(longlong *)&(pFVar17->OnResponse).field_0x10;
                    uStack_80 = *(undefined8 *)&(pFVar17->OnResponse).field_0x18;
                    if (local_98 != (code *)0x0) {
                      *(undefined8 *)&pFVar17->OnResponse = 0;
                    }
                    Core::Private::Function::CheckCallable(local_98);
                    pcVar4 = local_98;
                    plVar13 = &local_88;
                    if (local_70 != (longlong *)0x0) {
                      plVar13 = local_70;
                    }
                    uVar11 = (**(code **)(*plVar13 + 8))();
                    (*pcVar4)(uVar11,&local_f8);
                    if (local_98 != (code *)0x0) {
                      plVar13 = &local_88;
                      if (local_70 != (longlong *)0x0) {
                        plVar13 = local_70;
                      }
                      (**(code **)(*plVar13 + 0x10))();
                    }
                    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                    }
                    DestructItems<FAnsiString,int>(local_f0,(int)local_e8);
                    if (local_f0 != (FAnsiString *)0x0) {
                      FMemory::Free(local_f0);
                    }
                    this_00.CorePtr.Reference = local_f8.CorePtr.Reference;
                    if (local_f8.CorePtr.Reference != (BufCore *)0x0) {
                      FIoBuffer::BufCore::CheckRefCount((BufCore *)local_f8.CorePtr.Reference);
                      LOCK();
                      piVar1 = (int *)((longlong)this_00.CorePtr.Reference + 0xc);
                      iVar2 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar2 == 1) {
                        FIoBuffer::BufCore::~BufCore((BufCore *)this_00.CorePtr.Reference);
                        ::operator_delete((void *)this_00.CorePtr.Reference,0x20);
                      }
                    }
                  }
                  goto LAB_1445edb25;
                }
                break;
              }
              uVar10 = puVar12[6];
            } while (uVar10 != 0xffffffff);
          }
        }
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                           ,0x280,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
LAB_1445edb25:
        local_110 = local_110 + 0xc0;
        uVar16 = uVar16 + 1;
        local_100 = local_100 + -1;
      } while (local_100 != 0);
    }
    uVar16 = 0;
    if ((int)uVar6 <= (this->Retries).ArrayNum) {
      uVar16 = ~uVar6 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar6 != 0) {
      TArray<UE::IoStore::FMultiEndpointHttpClient::FRequest,TSizedDefaultAllocator<32>_>::
      RemoveAtSwapImpl(&this->Retries,0,uVar6);
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,0x10,&(this->Retries).AllocatorInstance,(this->Retries).ArrayNum,
                 &(this->Retries).ArrayMax);
    }
    FRecursiveMutex::Unlock(&this->TicketLookupMutex);
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// RetryRequest @ 1445fd370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::FMultiEndpointHttpClient::RetryRequest
          (FMultiEndpointHttpClient *this,FRequest *param_1)

{
  int *piVar1;
  FConnection *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>
  TVar6;
  uint *puVar7;
  uint uVar8;
  ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
  FVar9;
  uint *puVar10;
  undefined1 *puVar11;
  FConnectionPool *local_res8;
  TStringView<char> local_48;
  char *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  this_00 = param_1->Connection;
  if ((param_1->RetryCount != 0) && (param_1->Host == this_00->CurrentHost)) {
    FOnDemandHostGroup::CycleHost(&this_00->HostGroup,&local_48,&this_00->CurrentHost);
    uVar4 = this_00->CurrentHost;
    uVar8 = 0;
    if ((int)uVar4 < (this_00->Pools).ArrayNum) {
      uVar8 = ~uVar4 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar9 = (this_00->Pools).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
                  )0x0) {
      FVar9 = (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
               )&this_00->Pools;
    }
    if (*(longlong *)((longlong)FVar9 + (longlong)(int)uVar4 * 8) == 0) {
      local_38 = local_48.DataPtr;
      iStack_30 = local_48.Size;
      uStack_2c = local_48._12_4_;
      TVar6 = CreateConnection(this,(TStringView<char> *)&local_res8);
      uVar4 = this_00->CurrentHost;
      uVar8 = 0;
      if ((int)uVar4 < (this_00->Pools).ArrayNum) {
        uVar8 = ~uVar4 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar9 = (this_00->Pools).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
                    )0x0) {
        FVar9 = (ForElementType<TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>_>
                 )&this_00->Pools;
      }
      TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>
      ::operator=((TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>
                   *)((longlong)FVar9 + (longlong)(int)uVar4 * 8),
                  (TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>
                   *)TVar6.Ptr);
      if (local_res8 != (FConnectionPool *)0x0) {
        HTTP::FConnectionPool::~FConnectionPool(local_res8);
        ::operator_delete(local_res8,8);
      }
    }
  }
  FRecursiveMutex::Lock(&this->TicketLookupMutex);
  if (*(int *)&(this->TicketLookupMap).field_0x8 != *(int *)&(this->TicketLookupMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->TicketLookupMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->TicketLookupMap).field_0x38;
    }
    uVar4 = *(uint *)(puVar11 +
                     (ulonglong)
                     (*(int *)&(this->TicketLookupMap).field_0x48 - 1U & param_1->TicketId) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar10 = (uint *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&this->TicketLookupMap);
        if (*puVar10 == param_1->TicketId) {
          puVar7 = puVar10 + 2;
          if (puVar10 == (uint *)0x0) {
            puVar7 = (uint *)0x0;
          }
          if (puVar7 != (uint *)0x0) {
            puVar7[0] = 0;
            puVar7[1] = 0;
            goto LAB_1445fd581;
          }
          break;
        }
        uVar4 = puVar10[6];
      } while (uVar4 != 0xffffffff);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                     ,0x248,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1445fd581:
  FRecursiveMutex::Unlock(&this->TicketLookupMutex);
  param_1->RetryCount = param_1->RetryCount + 1;
  piVar1 = &(this->Retries).ArrayMax;
  param_1->StatusCode = 0;
  param_1->Host = this_00->CurrentHost;
  iVar5 = (this->Retries).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(this->Retries).AllocatorInstance,piVar1);
  }
  (this->Retries).ArrayNum = iVar5 + 1;
  FRequest::FRequest((FRequest *)((this->Retries).AllocatorInstance.Data + (longlong)iVar5 * 0xc0),
                     param_1);
  return;
}

// Tick @ 144601710

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::IoStore::FMultiEndpointHttpClient::Tick(FMultiEndpointHttpClient *this,int param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  FConnectionPool *this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  undefined1 local_res20 [8];
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId287,"FMultiEndpointHttpClient::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
               ,0x11f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId287);
  }
  HTTP::FEventLoop::Throttle(&this->EventLoop,param_2);
  uVar9 = HTTP::FEventLoop::Tick(&this->EventLoop,param_1);
  ProcessRetryAttempts(this,uVar9);
  bVar6 = HTTP::FEventLoop::IsIdle(&this->EventLoop);
  if (bVar6) {
    iVar2 = (this->Connections).ArrayNum;
    pFVar13 = (this->Connections).AllocatorInstance.Data;
    pFVar1 = pFVar13 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Connections).ArrayNum != iVar2) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar13 == pFVar1) break;
      uVar9 = 0;
      lVar11 = 0;
      iVar3 = *(int *)(*(longlong *)pFVar13 + 0x38);
      if (0 < (longlong)iVar3) {
        do {
          lVar4 = *(longlong *)pFVar13;
          if (uVar9 != *(uint *)(lVar4 + 0x40)) {
            uVar10 = 0;
            if ((int)uVar9 < *(int *)(lVar4 + 0x38)) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            lVar12 = lVar4 + 0x10;
            if (*(longlong *)(lVar4 + 0x30) != 0) {
              lVar12 = *(longlong *)(lVar4 + 0x30);
            }
            this_00 = *(FConnectionPool **)(lVar12 + lVar11 * 8);
            if (this_00 != (FConnectionPool *)0x0) {
              *(undefined8 *)(lVar12 + lVar11 * 8) = 0;
              HTTP::FConnectionPool::~FConnectionPool(this_00);
              ::operator_delete(this_00,8);
            }
          }
          uVar9 = uVar9 + 1;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar3);
      }
      pFVar13 = pFVar13 + 8;
    }
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return !bVar6;
}

// UpdateConnections @ 14460ba20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::IoStore::FMultiEndpointHttpClient::UpdateConnections(FMultiEndpointHttpClient *this)

{
  FScriptContainerElement *pFVar1;
  FConnectionPool *pFVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  FHost *this_00;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TUniquePtr<UE::IoStore::HTTP::FConnectionPool,TDefaultDelete<UE::IoStore::HTTP::FConnectionPool>_>
  TVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  FConnectionPool *local_res10;
  TStringView<char> local_48;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId342,"FMultiEndpointHttpClient::UpdateConnections",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
               ,0x156);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId342);
  }
  pFVar12 = (this->Connections).AllocatorInstance.Data;
  iVar3 = (this->Connections).ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar3 * 8;
  do {
    if ((this->Connections).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<UE::IoStore::FMultiEndpointHttpClient::FConnection,TDefaultDelete<UE::IoStore::FMultiEndpointHttpClient::FConnection>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar1) {
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    if ((*(longlong *)pFVar12 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Connection.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandHttpClient.cpp"
                           ,0x15a,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = FOnDemandHostGroup::PrimaryHostIndex(*(FOnDemandHostGroup **)pFVar12);
    *(int *)(*(longlong *)pFVar12 + 0x40) = iVar8;
    lVar5 = *(longlong *)pFVar12;
    uVar4 = *(uint *)(lVar5 + 0x40);
    if (uVar4 != 0xffffffff) {
      uVar9 = 0;
      if ((int)uVar4 < *(int *)(lVar5 + 0x38)) {
        uVar9 = ~uVar4 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar11 = lVar5 + 0x10;
      if (*(longlong *)(lVar5 + 0x30) != 0) {
        lVar11 = *(longlong *)(lVar5 + 0x30);
      }
      if (*(longlong *)(lVar11 + (longlong)(int)uVar4 * 8) == 0) {
        FOnDemandHostGroup::PrimaryHost(*(FOnDemandHostGroup **)pFVar12,&local_48);
        TVar10 = CreateConnection(this,(TStringView<char> *)&local_res10);
        lVar5 = *(longlong *)pFVar12;
        uVar4 = *(uint *)(lVar5 + 0x40);
        uVar9 = 0;
        if ((int)uVar4 < *(int *)(lVar5 + 0x38)) {
          uVar9 = ~uVar4 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar11 = lVar5 + 0x10;
        if (*(longlong *)(lVar5 + 0x30) != 0) {
          lVar11 = *(longlong *)(lVar5 + 0x30);
        }
        pFVar2 = (FConnectionPool *)(lVar11 + (longlong)(int)uVar4 * 8);
        if (pFVar2 != TVar10.Ptr) {
          this_00 = pFVar2->Ptr;
          pFVar2->Ptr = (TVar10.Ptr)->Ptr;
          (TVar10.Ptr)->Ptr = (FHost *)0x0;
          if (this_00 != (FHost *)0x0) {
            HTTP::FConnectionPool::~FConnectionPool((FConnectionPool *)this_00);
            ::operator_delete(this_00,8);
          }
        }
        pFVar2 = local_res10;
        if (local_res10 != (FConnectionPool *)0x0) {
          HTTP::FConnectionPool::~FConnectionPool(local_res10);
          ::operator_delete(pFVar2,8);
        }
      }
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

