// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// FChunkBatchReadRequest @ 141f20af0

FChunkBatchReadRequest * __thiscall
FChunkBatchReadRequest::FChunkBatchReadRequest(FChunkBatchReadRequest *this)

{
  this->_padding_ = (longlong)&___7FChunkBatchReadRequest__6B_;
  this->Batch = (IHandle *)0x0;
  (this->IoHandle).Impl = (FIoRequestImpl *)0x0;
  return this;
}

// ~FChunkBatchReadRequest @ 141f23750

void __thiscall FChunkBatchReadRequest::~FChunkBatchReadRequest(FChunkBatchReadRequest *this)

{
  FIoRequest::~FIoRequest(&this->IoHandle);
  this->_padding_ = (longlong)&___7IHandle_FBulkDataRequest__6B_;
  return;
}

// AddRef @ 141f29210

void __thiscall FChunkBatchReadRequest::AddRef(FChunkBatchReadRequest *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f29217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->Batch + 8))();
  return;
}

// Cancel @ 141f2a9b0

bool __thiscall FChunkBatchReadRequest::Cancel(FChunkBatchReadRequest *this)

{
  EIoErrorCode EVar1;
  FIoStatus *pFVar2;
  FIoStatus local_18;
  
  pFVar2 = FIoRequest::Status(&this->IoHandle,&local_18);
  EVar1 = pFVar2->ErrorCode;
  FIoStatus::~FIoStatus(&local_18);
  if (EVar1 == Unknown) {
    FIoRequest::Cancel(&this->IoHandle);
    return true;
  }
  return false;
}

// GetRefCount @ 141f36100

uint __thiscall FChunkBatchReadRequest::GetRefCount(FChunkBatchReadRequest *this)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141f36107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->Batch + 0x18))();
  return uVar1;
}

// GetStatus @ 141f36d10

EStatus __thiscall FChunkBatchReadRequest::GetStatus(FChunkBatchReadRequest *this)

{
  EIoErrorCode EVar1;
  FIoStatus *pFVar2;
  FIoStatus local_18;
  
  pFVar2 = FIoRequest::Status(&this->IoHandle,&local_18);
  EVar1 = pFVar2->ErrorCode;
  if (EVar1 == Unknown) {
    FIoStatus::~FIoStatus(&local_18);
    return Pending;
  }
  if (EVar1 == Ok) {
    FIoStatus::~FIoStatus(&local_18);
    return Ok;
  }
  FIoStatus::~FIoStatus(&local_18);
  return (EVar1 != Cancelled) + Cancelled;
}

// Release @ 141f43440

void __thiscall FChunkBatchReadRequest::Release(FChunkBatchReadRequest *this)

{
                    /* WARNING: Could not recover jumptable at 0x000141f43447. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->Batch + 0x10))();
  return;
}

// UpdatePriority @ 141f4ff80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */

void __thiscall
FChunkBatchReadRequest::UpdatePriority
          (FChunkBatchReadRequest *this,EAsyncIOPriorityAndFlags param_1)

{
  EIoErrorCode EVar1;
  FIoStatus *pFVar2;
  FIoStatus local_28;
  undefined4 local_18;
  undefined4 local_14;
  
  pFVar2 = FIoRequest::Status(&this->IoHandle,&local_28);
  EVar1 = pFVar2->ErrorCode;
  FIoStatus::~FIoStatus(&local_28);
  if ((int)EVar1 < 2) {
    local_28.ErrorMessage.Chars = ___xmm_00000000ffffffffc000000080000000;
    local_28.ErrorCode = _UNK_1507f9e48;
    local_28.SystemErrorCode = _UNK_1507f9e4c;
    local_18 = 0x3fffffff;
    local_14 = 0x7fffffff;
    FIoRequest::UpdatePriority
              (&this->IoHandle,
               *(int *)((longlong)&local_28.ErrorMessage.Chars +
                       (ulonglong)(param_1 & AIOP_PRIORITY_MASK) * 4));
  }
  return;
}

// Wait @ 141f50520

bool __thiscall FChunkBatchReadRequest::Wait(FChunkBatchReadRequest *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\BulkDataStreaming.cpp"
                     ,0x253,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return true;
}

