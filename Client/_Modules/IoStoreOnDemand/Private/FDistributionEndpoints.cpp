// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 3

// ~<lambda_1> @ 1445a6a50

void __thiscall
`UE::IoStore::FDistributionEndpoints::ResolveEndpoints'::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  BufCore *pBVar3;
  
  pBVar3 = *(BufCore **)((longlong)this + 0x28);
  if (pBVar3 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(pBVar3);
    LOCK();
    piVar1 = &pBVar3->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar3);
      ::operator_delete(pBVar3,0x20);
    }
  }
  pBVar3 = *(BufCore **)((longlong)this + 0x20);
  if (pBVar3 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(pBVar3);
    LOCK();
    piVar1 = &pBVar3->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(pBVar3);
      ::operator_delete(pBVar3,0x20);
    }
  }
  return;
}

// operator() @ 1445ac6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::IoStore::FDistributionEndpoints::ResolveEndpoints'::__l2::<lambda_1>::operator()
          (void *this,FTicketStatus *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  EResult *pEVar4;
  EId EVar5;
  EResult EVar6;
  EStatusCodeClass EVar7;
  uint uVar8;
  FIoBuffer FVar9;
  FResponse *this_00;
  long64 lVar10;
  longlong lVar11;
  longlong local_res18;
  FIoBuffer local_res20;
  FError local_18;
  
  EVar5 = UE::IoStore::HTTP::FTicketStatus::GetId(param_1);
  if (EVar5 == Error) {
    UE::IoStore::HTTP::FTicketStatus::GetError(param_1,&local_18);
    if (2 < (byte)LogIas._0_1_) {
      UE::Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&,unsigned_int_&>
                ((FLogCategoryBase *)&LogIas,&::LOG_Static,&local_18.Reason,&local_18.Code);
      return;
    }
  }
  else {
    EVar5 = UE::IoStore::HTTP::FTicketStatus::GetId(param_1);
    if (EVar5 < Cancelled) {
      EVar5 = UE::IoStore::HTTP::FTicketStatus::GetId(param_1);
      if (EVar5 == Content) {
        if ((*(char *)((longlong)this + 0x18) == '\0') ||
           (*(char *)(*(longlong *)((longlong)this + 0x28) + 0x18) == '\0' &&
            *(int *)(*(longlong *)((longlong)this + 0x28) + 8) == 0)) {
          LOCK();
          **(undefined1 **)this = 1;
          UNLOCK();
          local_res18 = *(longlong *)((longlong)this + 0x20);
          pTVar3 = *(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)this + 8);
          if (local_res18 != 0) {
            LOCK();
            *(int *)(local_res18 + 0xc) = *(int *)(local_res18 + 0xc) + 1;
            UNLOCK();
          }
          pEVar4 = *(EResult **)((longlong)this + 0x10);
          EVar6 = UE::IoStore::ParseResponse((FIoBuffer)&local_res18,pTVar3);
          *pEVar4 = EVar6;
          return;
        }
        FVar9 = UE::IoStore::JoinIoBuffers(&local_res20,(FIoBuffer *)((longlong)this + 0x20));
        FIoBuffer::operator=
                  ((FIoBuffer *)((longlong)this + 0x20),(FIoBuffer *)FVar9.CorePtr.Reference);
        if (local_res20.CorePtr.Reference != (BufCore *)0x0) {
          FIoBuffer::BufCore::CheckRefCount((BufCore *)local_res20.CorePtr.Reference);
          LOCK();
          piVar1 = (int *)((longlong)local_res20.CorePtr.Reference + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FIoBuffer::BufCore::~BufCore((BufCore *)local_res20.CorePtr.Reference);
            ::operator_delete((void *)local_res20.CorePtr.Reference,0x20);
            return;
          }
        }
      }
      else {
        this_00 = UE::IoStore::HTTP::FTicketStatus::GetResponse(param_1);
        EVar7 = UE::IoStore::HTTP::FResponse::GetStatus(this_00);
        if (EVar7 == Successful) {
          lVar10 = UE::IoStore::HTTP::FResponse::GetContentLength(this_00);
          *(bool *)((longlong)this + 0x18) = lVar10 == -1;
          lVar11 = 0x20;
          if (lVar10 == -1) {
            lVar11 = 0x28;
          }
          UE::IoStore::HTTP::FResponse::SetDestination
                    (this_00,(FIoBuffer *)(lVar11 + (longlong)this));
        }
        else if (2 < (byte)LogIas._0_1_) {
          uVar8 = UE::IoStore::HTTP::FResponse::GetStatusCode(this_00);
          local_res18 = CONCAT44(local_res18._4_4_,uVar8);
          UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,unsigned_int>
                    ((FLogCategoryBase *)&LogIas,&::LOG_Static,(uint *)&local_res18);
          return;
        }
      }
    }
  }
  return;
}

// ResolveEndpoints @ 1445fb960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EResult __thiscall
UE::IoStore::FDistributionEndpoints::ResolveEndpoints
          (FDistributionEndpoints *this,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  EResult EVar3;
  uint uVar4;
  wchar_t *pwVar5;
  ENullTerminatedString EVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_1c8 [32];
  int *local_1a8;
  EResult local_198 [8];
  FEventLoop local_190;
  undefined1 local_188 [16];
  TStringView<char> local_178;
  TStringView<char> local_160;
  undefined4 local_150;
  undefined4 local_14c;
  char local_148;
  EResult *local_140;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_138;
  EResult *local_130;
  undefined1 local_128;
  FIoBuffer local_120;
  FIoBuffer local_118 [2];
  code *local_108 [5];
  undefined8 *local_e0;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_d8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId41,"FDistributionEndpoints::ResolveEndpoints",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\DistributionEndpoints.cpp"
               ,0x29);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId41);
  }
  if (4 < (byte)LogIas._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
  }
  local_140 = local_198 + 1;
  local_198[1] = 0;
  local_130 = local_198;
  local_198[0] = Failure;
  local_128 = 0;
  local_138 = param_2;
  FIoBuffer::FIoBuffer(&local_120);
  FIoBuffer::FIoBuffer(local_118);
  iVar2 = (param_1->Data).ArrayNum;
  iVar7 = 0;
  local_d8._padding_ = 0;
  EVar6 = No;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar7 = iVar2 + -1;
    if ((FScriptContainerElement *)pwVar5 == (FScriptContainerElement *)0x0) {
      local_d8.Ptr = (char *)0x0;
      local_d8.StringLength = 0;
      goto LAB_1445fba8c;
    }
  }
  if ((0 < iVar7) && (*(short *)((longlong)pwVar5 + ((longlong)iVar7 + -1) * 2) == 0)) {
    EVar6 = Yes;
    iVar7 = iVar7 + -1;
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::Init(&local_d8,pwVar5,iVar7,EVar6);
LAB_1445fba8c:
  HTTP::FEventLoop::FEventLoop(&local_190);
  if (-1 < GDistributedEndpointTimeout) {
    HTTP::FEventLoop::SetFailTimeout(&local_190,GDistributedEndpointTimeout * 1000);
  }
  local_160._8_8_ = 0;
  local_150 = 0;
  local_148 = (GIaxHttpVersion == 2) + '\x01';
  local_14c = 0x1000100;
  if (GIaxHttpVersion == 2) {
    local_160._8_8_ = HTTP::FCertRoots::Default();
  }
  local_188._8_4_ = local_d8.StringLength;
  local_1a8 = &local_160.Size;
  local_178.Size = 3;
  local_178.DataPtr = "GET";
  local_188._0_8_ = local_d8.Ptr;
  HTTP::FEventLoop::Request(&local_190,&local_160,&local_178,(FRequestParams *)local_188);
  local_178.Size = 0x10;
  local_188._8_4_ = 6;
  local_188._0_8_ = "accept";
  local_178.DataPtr = "application/json";
  HTTP::FRequest::Header((FRequest *)&local_160,(TStringView<char> *)local_188,&local_178);
  local_108[0] = (code *)0x0;
  local_e0 = FMemory::Malloc(0x38,8);
  *local_e0 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::IoStore::FDistributionEndpoints::ResolveEndpoints'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_e0[1] = local_140;
  local_e0[2] = local_138;
  local_e0[3] = local_130;
  *(undefined1 *)(local_e0 + 4) = local_128;
  local_e0[5] = 0;
  ((TRefCountPtr<FIoBuffer::BufCore> *)(local_e0 + 5))->Reference =
       (BufCore *)local_120.CorePtr.Reference;
  if (local_120.CorePtr.Reference != (BufCore *)0x0) {
    LOCK();
    *(int *)((longlong)local_120.CorePtr.Reference + 0xc) =
         *(int *)((longlong)local_120.CorePtr.Reference + 0xc) + 1;
    UNLOCK();
  }
  local_e0[6] = 0;
  ((TRefCountPtr<FIoBuffer::BufCore> *)(local_e0 + 6))->Reference =
       (BufCore *)local_118[0].CorePtr.Reference;
  if (local_118[0].CorePtr.Reference != (BufCore *)0x0) {
    LOCK();
    *(int *)((longlong)local_118[0].CorePtr.Reference + 0xc) =
         *(int *)((longlong)local_118[0].CorePtr.Reference + 0xc) + 1;
    UNLOCK();
  }
  if (local_e0 + 1 != (longlong *)0x0) {
    local_108[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::IoStore::FDistributionEndpoints::ResolveEndpoints'::__l2::<lambda_1>,void,UE::IoStore::HTTP::FTicketStatus_const_&>
                   ::Call;
  }
  HTTP::FEventLoop::Send
            (&local_190,(FRequest *)&local_160,
             (TFunction<void___cdecl(UE::IoStore::HTTP::FTicketStatus_const_&)> *)local_108,0);
  do {
    uVar4 = HTTP::FEventLoop::Tick(&local_190,-1);
  } while (uVar4 != 0);
  if (4 < (byte)LogIas._0_1_) {
    if (local_198[0] == Success) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    }
    if ((4 < (byte)LogIas._0_1_) && (local_198[0] != Success)) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIas);
    }
  }
  EVar3 = local_198[0];
  HTTP::FRequest::~FRequest((FRequest *)&local_160);
  HTTP::FEventLoop::~FEventLoop(&local_190);
  if ((void *)local_d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._padding_);
  }
  if (local_118[0].CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_118[0].CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)local_118[0].CorePtr.Reference + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)local_118[0].CorePtr.Reference);
      ::operator_delete((void *)local_118[0].CorePtr.Reference,0x20);
    }
  }
  if (local_120.CorePtr.Reference != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount((BufCore *)local_120.CorePtr.Reference);
    LOCK();
    piVar1 = (int *)((longlong)local_120.CorePtr.Reference + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore((BufCore *)local_120.CorePtr.Reference);
      ::operator_delete((void *)local_120.CorePtr.Reference,0x20);
    }
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar3;
}

