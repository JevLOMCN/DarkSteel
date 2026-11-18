// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// GetArchiveName @ 1418dd890

FString * __thiscall
FBufferReaderWithSHA::GetArchiveName(FBufferReaderWithSHA *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FBufferReaderWithSHA");
  return __return_storage_ptr__;
}

// ~FBufferReaderWithSHA @ 14191b120

void __thiscall FBufferReaderWithSHA::~FBufferReaderWithSHA(FBufferReaderWithSHA *this)

{
  bool bVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FQueuedThreadPool *pFVar5;
  FAutoDeleteAsyncTask<FAsyncSHAVerify> *this_00;
  wchar_t *pwVar6;
  
  this->_padding_ = (longlong)&___7FBufferReaderWithSHA__6B_;
  if (this->_padding_ != 0) {
    this_00 = ::operator_new(0x78);
    if (this_00 == (FAutoDeleteAsyncTask<FAsyncSHAVerify> *)0x0) {
      this_00 = (FAutoDeleteAsyncTask<FAsyncSHAVerify> *)0x0;
    }
    else {
      if ((this->SourcePathname).Data.ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(this->SourcePathname).Data.AllocatorInstance.Data;
      }
      this_00->_padding_ = 0;
      this_00->_padding_ = (longlong)&___7__FAutoDeleteAsyncTask_VFAsyncSHAVerify____6B_;
      bVar1 = this->bIsUnfoundHashAnError;
      lVar4 = this->_padding_;
      pvVar2 = (void *)this->_padding_;
      (this_00->Task).BufferSize = this->_padding_;
      (this_00->Task).Buffer = pvVar2;
      ::FString::FString(&(this_00->Task).Pathname,pwVar6);
      (this_00->Task).bShouldDeleteBuffer = SUB81(lVar4,0);
      (this_00->Task).bIsUnfoundHashAnError = bVar1;
    }
    pFVar5 = GThreadPool;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    if (pFVar5 == (FQueuedThreadPool *)0x0) {
      FAutoDeleteAsyncTask<FAsyncSHAVerify>::DoWork(this_00);
    }
    else {
      (**(code **)((longlong)*pFVar5 + 0x18))(pFVar5,this_00,3);
    }
    this->_padding_ = 0;
  }
  pFVar3 = (this->SourcePathname).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7FBufferReaderBase__6B_;
  FArchive::~FArchive((FArchive *)this);
  return;
}

// Close @ 14192d0a0

bool __thiscall FBufferReaderWithSHA::Close(FBufferReaderWithSHA *this)

{
  bool bVar1;
  void *pvVar2;
  longlong lVar3;
  FQueuedThreadPool *pFVar4;
  FAutoDeleteAsyncTask<FAsyncSHAVerify> *this_00;
  wchar_t *pwVar5;
  
  if (this->_padding_ != 0) {
    this_00 = ::operator_new(0x78);
    if (this_00 == (FAutoDeleteAsyncTask<FAsyncSHAVerify> *)0x0) {
      this_00 = (FAutoDeleteAsyncTask<FAsyncSHAVerify> *)0x0;
    }
    else {
      if ((this->SourcePathname).Data.ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(this->SourcePathname).Data.AllocatorInstance.Data;
      }
      this_00->_padding_ = 0;
      this_00->_padding_ = (longlong)&___7__FAutoDeleteAsyncTask_VFAsyncSHAVerify____6B_;
      bVar1 = this->bIsUnfoundHashAnError;
      lVar3 = this->_padding_;
      pvVar2 = (void *)this->_padding_;
      (this_00->Task).BufferSize = this->_padding_;
      (this_00->Task).Buffer = pvVar2;
      ::FString::FString(&(this_00->Task).Pathname,pwVar5);
      (this_00->Task).bShouldDeleteBuffer = SUB81(lVar3,0);
      (this_00->Task).bIsUnfoundHashAnError = bVar1;
    }
    pFVar4 = GThreadPool;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_00->_padding_)
    ;
    if (pFVar4 == (FQueuedThreadPool *)0x0) {
      FAutoDeleteAsyncTask<FAsyncSHAVerify>::DoWork(this_00);
    }
    else {
      (**(code **)((longlong)*pFVar4 + 0x18))(pFVar4,this_00,3);
    }
    this->_padding_ = 0;
  }
  return (bool)((byte)~*(byte *)((longlong)&this->_padding_ + 1) >> 1 & 1);
}

