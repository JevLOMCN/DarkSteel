// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// FChunkReadFileRequest @ 141f20e10

FChunkReadFileRequest * __thiscall
UE::BulkData::Private::FChunkReadFileRequest::FChunkReadFileRequest
          (FChunkReadFileRequest *this,TFunction<void___cdecl(bool,IAsyncReadRequest_*)> *param_1,
          FIoBuffer *param_2)

{
  *(undefined ***)this = &___7FChunkRequest_Private_BulkData_UE__6B_;
  *(undefined8 *)&this->field_0x8 = 0;
  *(BufCore **)&this->field_0x8 = (param_2->CorePtr).Reference;
  (param_2->CorePtr).Reference = (BufCore *)0x0;
  this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x20 = 0xffffffffffffffff;
  IAsyncReadRequest::IAsyncReadRequest
            ((IAsyncReadRequest *)&this->field_0x30,param_1,false,(uchar *)0x0);
  *(undefined ***)this = &_vftable__for__UE__BulkData__Private__FChunkRequest__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncReadRequest__;
  *(undefined8 *)&this->field_0x38 = **(undefined8 **)&this->field_0x8;
  return this;
}

// ~FChunkReadFileRequest @ 141f237f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::BulkData::Private::FChunkReadFileRequest::~FChunkReadFileRequest(FChunkReadFileRequest *this)

{
  EIoErrorCode EVar1;
  code *pcVar2;
  bool bVar3;
  TIoStatusOr<unsigned_char_*> *pTVar4;
  undefined1 auStack_48 [32];
  TIoStatusOr<unsigned_char_*> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  *(undefined ***)this = &_vftable__for__UE__BulkData__Private__FChunkRequest__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncReadRequest__;
  FChunkRequest::WaitForChunkRequest((FChunkRequest *)this,0.0);
  if ((*(longlong *)&this->field_0x38 == 0) &&
     ((*(byte *)(*(longlong *)&this->field_0x8 + 0x19) & 1) != 0)) {
    pTVar4 = FIoBuffer::Release((FIoBuffer *)&this->field_0x8,&local_28);
    EVar1 = (pTVar4->StatusValue).ErrorCode;
    FIoStatus::operator=(&local_28.StatusValue,Unknown);
    FIoStatus::~FIoStatus(&local_28.StatusValue);
    if (EVar1 != Ok) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bReleased",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                         ,0xa4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  *(undefined8 *)&this->field_0x38 = 0;
  IAsyncReadRequest::~IAsyncReadRequest((IAsyncReadRequest *)&this->field_0x30);
  FChunkRequest::~FChunkRequest((FChunkRequest *)this);
  return;
}

// CancelImpl @ 141f2aea0

void __thiscall
UE::BulkData::Private::FChunkReadFileRequest::CancelImpl(FChunkReadFileRequest *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->field_0x43 = 1;
  if ((*(int *)&this[-1].field_0x78 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() != EChunkRequestStatus::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                         ,0x7d,L"The request must be issued before it can be canceled"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  LOCK();
  bVar2 = *(int *)&this[-1].field_0x78 == 1;
  if (bVar2) {
    *(undefined4 *)&this[-1].field_0x78 = 2;
  }
  UNLOCK();
  if (!bVar2) {
    return;
  }
  FIoRequest::Cancel((FIoRequest *)&this[-1].field_0x68);
  return;
}

// HandleChunkResult @ 141f37010

void __thiscall
UE::BulkData::Private::FChunkReadFileRequest::HandleChunkResult
          (FChunkReadFileRequest *this,TIoStatusOr<FIoBuffer> *param_1)

{
  this->field_0x73 = (param_1->StatusValue).ErrorCode != Ok;
  IAsyncReadRequest::SetDataComplete((IAsyncReadRequest *)&this->field_0x30);
  this->field_0x71 = 1;
  return;
}

// ReleaseMemoryOwnershipImpl @ 141f434a0

void __thiscall
UE::BulkData::Private::FChunkReadFileRequest::ReleaseMemoryOwnershipImpl
          (FChunkReadFileRequest *this)

{
  return;
}

// WaitCompletionImpl @ 141f50660

void __thiscall
UE::BulkData::Private::FChunkReadFileRequest::WaitCompletionImpl
          (FChunkReadFileRequest *this,float param_1)

{
  FChunkRequest::WaitForChunkRequest((FChunkRequest *)&this[-1].field_0x50,param_1);
  return;
}

