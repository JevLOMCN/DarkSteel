// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// FChunkRequest @ 141f20e90

FChunkRequest * __thiscall
UE::BulkData::Private::FChunkRequest::FChunkRequest(FChunkRequest *this,FIoBuffer *param_1)

{
  this->_padding_ = (longlong)&___7FChunkRequest_Private_BulkData_UE__6B_;
  (this->Buffer).CorePtr.Reference = (BufCore *)0x0;
  (this->Buffer).CorePtr.Reference = (param_1->CorePtr).Reference;
  (param_1->CorePtr).Reference = (BufCore *)0x0;
  (this->DoneEvent).State = (atomic<unsigned_char>)0x0;
  (this->Request).Impl = (FIoRequestImpl *)0x0;
  this->SizeResult = -1;
  this->Status = (atomic<unsigned_int>)0x0;
  return this;
}

// ~FChunkRequest @ 141f238d0

void __thiscall UE::BulkData::Private::FChunkRequest::~FChunkRequest(FChunkRequest *this)

{
  int *piVar1;
  int iVar2;
  BufCore *this_00;
  FMonotonicTimePoint FVar3;
  
  FVar3.Time = __real_7ff0000000000000.Time;
  this->_padding_ = (longlong)&___7FChunkRequest_Private_BulkData_UE__6B_;
  FManualResetEvent::WaitUntil(&this->DoneEvent,FVar3);
  FIoRequest::~FIoRequest(&this->Request);
  this_00 = (this->Buffer).CorePtr.Reference;
  if (this_00 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
      return;
    }
  }
  return;
}

// operator() @ 141f26c20

void __thiscall
`UE::BulkData::Private::FChunkRequest::Issue'::__l2::<lambda_1>::operator()
          (void *this,TIoStatusOr<FIoBuffer> *param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = 2;
  if ((param_1->StatusValue).ErrorCode == Ok) {
    lVar3 = *(longlong *)(param_1->Value).Pad;
    uVar4 = 4;
    *(ulonglong *)(*(longlong *)this + 0x20) =
         (ulonglong)CONCAT14(*(undefined1 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 8));
  }
  *(uint *)(*(longlong *)this + 0x28) = uVar4;
  (**(code **)(**(longlong **)this + 8))(*(longlong **)this,param_1);
  *(uint *)(*(longlong *)this + 0x28) = uVar4 | 8;
  lVar3 = *(longlong *)this;
  LOCK();
  pbVar1 = (byte *)(lVar3 + 0x10);
  bVar2 = *pbVar1;
  *pbVar1 = 1;
  UNLOCK();
  if ((bVar2 & 3) == 2) {
    UE::ParkingLot::WakeAll((void *)(lVar3 + 0x10));
  }
  TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(param_1);
  return;
}

// CancelChunkRequest @ 141f2ae20

void __thiscall UE::BulkData::Private::FChunkRequest::CancelChunkRequest(FChunkRequest *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Status == (atomic<unsigned_int>)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() != EChunkRequestStatus::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                         ,0x7d,L"The request must be issued before it can be canceled"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  LOCK();
  bVar2 = this->Status == (atomic<unsigned_int>)0x1;
  if (bVar2) {
    this->Status = (atomic<unsigned_int>)0x2;
  }
  UNLOCK();
  if (!bVar2) {
    return;
  }
  FIoRequest::Cancel(&this->Request);
  return;
}

// Issue @ 141f3a980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::BulkData::Private::FChunkRequest::Issue
          (FChunkRequest *this,FIoChunkId *param_1,FIoReadOptions *param_2,int param_3)

{
  BufCore *pBVar1;
  code *pcVar2;
  bool bVar3;
  FIoDispatcher *this_00;
  FIoRequest FVar4;
  undefined ***pppuVar5;
  undefined1 auStackY_b8 [32];
  undefined4 in_stack_ffffffffffffff6c;
  undefined1 local_88 [32];
  code *local_68;
  undefined **local_58;
  FChunkRequest *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  this->Status = (atomic<unsigned_int>)0x1;
  pBVar1 = (this->Buffer).CorePtr.Reference;
  if (param_2->RequestedSize != (ulonglong)CONCAT14(pBVar1->DataSizeHigh,pBVar1->DataSizeLow)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Options.GetSize() == Buffer.GetSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                       ,0x5c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  param_2->TargetVa = ((this->Buffer).CorePtr.Reference)->DataPtr;
  this_00 = FIoDispatcher::Get();
  FIoDispatcher::NewBatch(this_00,(FIoBatch *)(local_88 + 8));
  local_40 = (undefined ***)0x0;
  local_58 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::BulkData::Private::FChunkRequest::Issue'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_68 = Core::Private::Function::
             TFunctionRefCaller<`UE::BulkData::Private::FChunkRequest::Issue'::__l2::<lambda_1>,void,TIoStatusOr<FIoBuffer>_>
             ::Call;
  local_50 = this;
  FVar4 = FIoBatch::ReadWithCallback
                    ((FIoBatch *)(local_88 + 8),(FIoChunkId *)local_88,(FIoReadOptions *)param_1,
                     (int)param_2,
                     (TFunction<void___cdecl(TIoStatusOr<FIoBuffer>)> *)
                     CONCAT44(in_stack_ffffffffffffff6c,param_3));
  FIoRequest::operator=(&this->Request,(FIoRequest *)FVar4.Impl);
  FIoRequest::~FIoRequest((FIoRequest *)local_88);
  if (local_68 != (code *)0x0) {
    pppuVar5 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar5 = local_40;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  FIoBatch::Issue((FIoBatch *)(local_88 + 8));
  FIoBatch::~FIoBatch((FIoBatch *)(local_88 + 8));
  return;
}

// WaitForChunkRequest @ 141f506e0

bool __thiscall
UE::BulkData::Private::FChunkRequest::WaitForChunkRequest(FChunkRequest *this,float param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  FMonotonicTimePoint FVar5;
  
  if ((this->Status == (atomic<unsigned_int>)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() != EChunkRequestStatus::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                         ,0x76,L"The request must be issued before waiting for completion"), bVar3))
  {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  dVar2 = __real_7ff0000000000000;
  if ((0.0 < param_1) && (dVar2 = (double)param_1, (double)param_1 == 0.0)) {
    return (bool)((byte)(this->DoneEvent).State & 1);
  }
  FVar5 = FMonotonicTimePoint::Now();
                    /* WARNING: Load size is inaccurate */
  bVar3 = FManualResetEvent::WaitUntil(&this->DoneEvent,(FMonotonicTimePoint)(dVar2 + *FVar5.Time));
  return bVar3;
}

