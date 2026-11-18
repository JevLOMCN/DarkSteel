// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 55

// TIoStatusOr<UE::FIoFileHandle> @ 14147c7c0

TIoStatusOr<UE::FIoFileHandle> * __thiscall
TIoStatusOr<UE::FIoFileHandle>::TIoStatusOr<UE::FIoFileHandle>
          (TIoStatusOr<UE::FIoFileHandle> *this,FIoFileHandle *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  *(ulong64 *)(this->Value).Pad = param_1->Handle;
  return this;
}

// TIoStatusOr<UE::FIoFileHandle> @ 14147c800

TIoStatusOr<UE::FIoFileHandle> * __thiscall
TIoStatusOr<UE::FIoFileHandle>::TIoStatusOr<UE::FIoFileHandle>
          (TIoStatusOr<UE::FIoFileHandle> *this,FIoStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<UE::FIoFileHandle> *pTVar3;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  if (param_1->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<UE::FIoFileHandle> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  FIoStatus::~FIoStatus(param_1);
  return this;
}

// ~TIoStatusOr<UE::FIoFileHandle> @ 141480380

void __thiscall
TIoStatusOr<UE::FIoFileHandle>::~TIoStatusOr<UE::FIoFileHandle>
          (TIoStatusOr<UE::FIoFileHandle> *this)

{
  FIoStatus::operator=(&this->StatusValue,Unknown);
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// Reset @ 1414aeb40

void __thiscall TIoStatusOr<UE::FIoFileHandle>::Reset(TIoStatusOr<UE::FIoFileHandle> *this)

{
  FIoStatus::operator=(&this->StatusValue,Unknown);
  return;
}

// TIoStatusOr<unsigned_char_*> @ 141733320

TIoStatusOr<unsigned_char_*> * __thiscall
TIoStatusOr<unsigned_char_*>::TIoStatusOr<unsigned_char_*>
          (TIoStatusOr<unsigned_char_*> *this,uchar **param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  *(uchar **)(this->Value).Pad = *param_1;
  return this;
}

// TIoStatusOr<unsigned_char_*> @ 141733360

TIoStatusOr<unsigned_char_*> * __thiscall
TIoStatusOr<unsigned_char_*>::TIoStatusOr<unsigned_char_*>
          (TIoStatusOr<unsigned_char_*> *this,FIoStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<unsigned_char_*> *pTVar3;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  if (param_1->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<unsigned_char_*> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  FIoStatus::~FIoStatus(param_1);
  return this;
}

// TIoStatusOr<FIoOffsetAndLength> @ 1417333d0

TIoStatusOr<FIoOffsetAndLength> * __thiscall
TIoStatusOr<FIoOffsetAndLength>::TIoStatusOr<FIoOffsetAndLength>
          (TIoStatusOr<FIoOffsetAndLength> *this,FIoOffsetAndLength *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  *(undefined8 *)(this->Value).Pad = *(undefined8 *)param_1->OffsetAndLength;
  *(undefined2 *)((this->Value).Pad + 8) = *(undefined2 *)(param_1->OffsetAndLength + 8);
  return this;
}

// TIoStatusOr<FIoOffsetAndLength> @ 141733420

TIoStatusOr<FIoOffsetAndLength> * __thiscall
TIoStatusOr<FIoOffsetAndLength>::TIoStatusOr<FIoOffsetAndLength>
          (TIoStatusOr<FIoOffsetAndLength> *this,FIoStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<FIoOffsetAndLength> *pTVar3;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  if (param_1->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<FIoOffsetAndLength> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  FIoStatus::~FIoStatus(param_1);
  return this;
}

// ~TIoStatusOr<unsigned_char_*> @ 1417381d0

void __thiscall
TIoStatusOr<unsigned_char_*>::~TIoStatusOr<unsigned_char_*>(TIoStatusOr<unsigned_char_*> *this)

{
  FIoStatus::operator=(&this->StatusValue,Unknown);
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// ~TIoStatusOr<FIoOffsetAndLength> @ 141738200

void __thiscall
TIoStatusOr<FIoOffsetAndLength>::~TIoStatusOr<FIoOffsetAndLength>
          (TIoStatusOr<FIoOffsetAndLength> *this)

{
  FIoStatus::operator=(&this->StatusValue,Unknown);
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// Reset @ 1417773c0

void __thiscall TIoStatusOr<unsigned_char_*>::Reset(TIoStatusOr<unsigned_char_*> *this)

{
  FIoStatus::operator=(&this->StatusValue,Unknown);
  return;
}

// Reset @ 1417773d0

void __thiscall TIoStatusOr<FIoOffsetAndLength>::Reset(TIoStatusOr<FIoOffsetAndLength> *this)

{
  FIoStatus::operator=(&this->StatusValue,Unknown);
  return;
}

// TIoStatusOr<FIoMappedRegion> @ 14179bfb0

TIoStatusOr<FIoMappedRegion> * __thiscall
TIoStatusOr<FIoMappedRegion>::TIoStatusOr<FIoMappedRegion>
          (TIoStatusOr<FIoMappedRegion> *this,TIoStatusOr<FIoMappedRegion> *param_1)

{
  int iVar1;
  EIoErrorCode EVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Ok;
  (this->StatusValue).SystemErrorCode = 0;
  pwVar4 = (param_1->StatusValue).ErrorMessage.Chars;
  if (pwVar4 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar4 + -4) = *(int *)(pwVar4 + -4) + 1;
    UNLOCK();
  }
  (this->StatusValue).ErrorMessage.Chars = pwVar4;
  EVar2 = (param_1->StatusValue).ErrorCode;
  (this->StatusValue).ErrorCode = EVar2;
  (this->StatusValue).SystemErrorCode = (param_1->StatusValue).SystemErrorCode;
  if (EVar2 == Ok) {
    uVar3 = *(undefined8 *)((param_1->Value).Pad + 8);
    *(undefined8 *)(this->Value).Pad = *(undefined8 *)(param_1->Value).Pad;
    *(undefined8 *)((this->Value).Pad + 8) = uVar3;
    pwVar4 = (param_1->StatusValue).ErrorMessage.Chars;
    if (pwVar4 != (wchar_t *)0x0) {
      pwVar4 = pwVar4 + -4;
      LOCK();
      iVar1 = *(int *)pwVar4;
      *(int *)pwVar4 = *(int *)pwVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        FMemory::Free(pwVar4);
      }
    }
    (param_1->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
    (param_1->StatusValue).ErrorCode = Unknown;
    (param_1->StatusValue).SystemErrorCode = 0;
  }
  return this;
}

// TIoStatusOr<FIoMappedRegion> @ 14179c040

TIoStatusOr<FIoMappedRegion> * __thiscall
TIoStatusOr<FIoMappedRegion>::TIoStatusOr<FIoMappedRegion>
          (TIoStatusOr<FIoMappedRegion> *this,FIoStatus *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  TIoStatusOr<FIoMappedRegion> *pTVar5;
  wchar_t *pwVar6;
  
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Ok;
  (this->StatusValue).SystemErrorCode = 0;
  if (param_1->ErrorCode == Ok) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TIoStatusOr<FIoMappedRegion> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pwVar2 = (param_1->ErrorMessage).Chars;
  pwVar6 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar2 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar2 + -4) = *(int *)(pwVar2 + -4) + 1;
    UNLOCK();
  }
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar6 = pwVar6 + -4;
    LOCK();
    iVar1 = *(int *)pwVar6;
    *(int *)pwVar6 = *(int *)pwVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar6);
    }
  }
  (this->StatusValue).ErrorMessage.Chars = pwVar2;
  (this->StatusValue).ErrorCode = param_1->ErrorCode;
  (this->StatusValue).SystemErrorCode = param_1->SystemErrorCode;
  pwVar6 = (param_1->ErrorMessage).Chars;
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar6 = pwVar6 + -4;
    LOCK();
    iVar1 = *(int *)pwVar6;
    *(int *)pwVar6 = *(int *)pwVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar6);
    }
  }
  return this;
}

// TIoStatusOr<FIoStoreCompressedReadResult> @ 14179c110

TIoStatusOr<FIoStoreCompressedReadResult> * __thiscall
TIoStatusOr<FIoStoreCompressedReadResult>::TIoStatusOr<FIoStoreCompressedReadResult>
          (TIoStatusOr<FIoStoreCompressedReadResult> *this,FIoStoreCompressedReadResult *param_1)

{
  TSharedString<wchar_t> TVar1;
  
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Ok;
  TVar1 = FIoStatus::Ok.ErrorMessage;
  (this->StatusValue).SystemErrorCode = 0;
  if (FIoStatus::Ok.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  (this->StatusValue).ErrorMessage.Chars = TVar1.Chars;
  (this->StatusValue).ErrorCode = FIoStatus::Ok.ErrorCode;
  (this->StatusValue).SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  (this->Value).Pad[0] = '\0';
  (this->Value).Pad[1] = '\0';
  (this->Value).Pad[2] = '\0';
  (this->Value).Pad[3] = '\0';
  (this->Value).Pad[4] = '\0';
  (this->Value).Pad[5] = '\0';
  (this->Value).Pad[6] = '\0';
  (this->Value).Pad[7] = '\0';
  *(BufCore **)(this->Value).Pad = (param_1->IoBuffer).CorePtr.Reference;
  (param_1->IoBuffer).CorePtr.Reference = (BufCore *)0x0;
  (this->Value).Pad[8] = '\0';
  (this->Value).Pad[9] = '\0';
  (this->Value).Pad[10] = '\0';
  (this->Value).Pad[0xb] = '\0';
  (this->Value).Pad[0xc] = '\0';
  (this->Value).Pad[0xd] = '\0';
  (this->Value).Pad[0xe] = '\0';
  (this->Value).Pad[0xf] = '\0';
  *(FScriptContainerElement **)((this->Value).Pad + 8) = (param_1->Blocks).AllocatorInstance.Data;
  (param_1->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x10) = (param_1->Blocks).ArrayNum;
  *(int *)((this->Value).Pad + 0x14) = (param_1->Blocks).ArrayMax;
  (param_1->Blocks).ArrayNum = 0;
  (param_1->Blocks).ArrayMax = 0;
  *(ulong64 *)((this->Value).Pad + 0x18) = param_1->UncompressedOffset;
  *(ulong64 *)((this->Value).Pad + 0x20) = param_1->UncompressedSize;
  *(ulong64 *)((this->Value).Pad + 0x28) = param_1->TotalCompressedSize;
  return this;
}

// TIoStatusOr<FIoStoreCompressedReadResult> @ 14179c190

TIoStatusOr<FIoStoreCompressedReadResult> * __thiscall
TIoStatusOr<FIoStoreCompressedReadResult>::TIoStatusOr<FIoStoreCompressedReadResult>
          (TIoStatusOr<FIoStoreCompressedReadResult> *this,FIoStatus *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  TIoStatusOr<FIoStoreCompressedReadResult> *pTVar5;
  wchar_t *pwVar6;
  
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Ok;
  (this->StatusValue).SystemErrorCode = 0;
  if (param_1->ErrorCode == Ok) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TIoStatusOr<FIoStoreCompressedReadResult> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pwVar2 = (param_1->ErrorMessage).Chars;
  pwVar6 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar2 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar2 + -4) = *(int *)(pwVar2 + -4) + 1;
    UNLOCK();
  }
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar6 = pwVar6 + -4;
    LOCK();
    iVar1 = *(int *)pwVar6;
    *(int *)pwVar6 = *(int *)pwVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar6);
    }
  }
  (this->StatusValue).ErrorMessage.Chars = pwVar2;
  (this->StatusValue).ErrorCode = param_1->ErrorCode;
  (this->StatusValue).SystemErrorCode = param_1->SystemErrorCode;
  pwVar6 = (param_1->ErrorMessage).Chars;
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar6 = pwVar6 + -4;
    LOCK();
    iVar1 = *(int *)pwVar6;
    *(int *)pwVar6 = *(int *)pwVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar6);
    }
  }
  return this;
}

// TIoStatusOr<FIoStoreTocChunkInfo> @ 14179c260

TIoStatusOr<FIoStoreTocChunkInfo> * __thiscall
TIoStatusOr<FIoStoreTocChunkInfo>::TIoStatusOr<FIoStoreTocChunkInfo>
          (TIoStatusOr<FIoStoreTocChunkInfo> *this,FIoStoreTocChunkInfo *param_1)

{
  undefined8 uVar1;
  TSharedString<wchar_t> TVar2;
  
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Ok;
  TVar2 = FIoStatus::Ok.ErrorMessage;
  (this->StatusValue).SystemErrorCode = 0;
  if (FIoStatus::Ok.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  (this->StatusValue).ErrorMessage.Chars = TVar2.Chars;
  (this->StatusValue).ErrorCode = FIoStatus::Ok.ErrorCode;
  (this->StatusValue).SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  *(undefined8 *)(this->Value).Pad = *(undefined8 *)(param_1->Id).Id;
  *(undefined4 *)((this->Value).Pad + 8) = *(undefined4 *)((param_1->Id).Id + 8);
  uVar1 = *(undefined8 *)((param_1->ChunkHash).Hash + 8);
  *(undefined8 *)((this->Value).Pad + 0xc) = *(undefined8 *)(param_1->ChunkHash).Hash;
  *(undefined8 *)((this->Value).Pad + 0x14) = uVar1;
  *(undefined4 *)((this->Value).Pad + 0x1c) = *(undefined4 *)((param_1->ChunkHash).Hash + 0x10);
  uVar1 = *(undefined8 *)((param_1->Hash).Hash + 8);
  *(undefined8 *)((this->Value).Pad + 0x20) = *(undefined8 *)(param_1->Hash).Hash;
  *(undefined8 *)((this->Value).Pad + 0x28) = uVar1;
  uVar1 = *(undefined8 *)((param_1->Hash).Hash + 0x18);
  *(undefined8 *)((this->Value).Pad + 0x30) = *(undefined8 *)((param_1->Hash).Hash + 0x10);
  *(undefined8 *)((this->Value).Pad + 0x38) = uVar1;
  (this->Value).Pad[0x40] = '\0';
  (this->Value).Pad[0x41] = '\0';
  (this->Value).Pad[0x42] = '\0';
  (this->Value).Pad[0x43] = '\0';
  (this->Value).Pad[0x44] = '\0';
  (this->Value).Pad[0x45] = '\0';
  (this->Value).Pad[0x46] = '\0';
  (this->Value).Pad[0x47] = '\0';
  *(FScriptContainerElement **)((this->Value).Pad + 0x40) =
       (param_1->FileName).Data.AllocatorInstance.Data;
  (param_1->FileName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 0x48) = (param_1->FileName).Data.ArrayNum;
  *(int *)((this->Value).Pad + 0x4c) = (param_1->FileName).Data.ArrayMax;
  (param_1->FileName).Data.ArrayNum = 0;
  (param_1->FileName).Data.ArrayMax = 0;
  *(ulong64 *)((this->Value).Pad + 0x50) = param_1->Offset;
  *(ulong64 *)((this->Value).Pad + 0x58) = param_1->OffsetOnDisk;
  *(ulong64 *)((this->Value).Pad + 0x60) = param_1->Size;
  *(ulong64 *)((this->Value).Pad + 0x68) = param_1->CompressedSize;
  *(uint *)((this->Value).Pad + 0x70) = param_1->NumCompressedBlocks;
  *(int *)((this->Value).Pad + 0x74) = param_1->PartitionIndex;
  (this->Value).Pad[0x78] = param_1->ChunkType;
  (this->Value).Pad[0x79] = param_1->bHasValidFileName;
  (this->Value).Pad[0x7a] = param_1->bForceUncompressed;
  (this->Value).Pad[0x7b] = param_1->bIsMemoryMapped;
  (this->Value).Pad[0x7c] = param_1->bIsCompressed;
  return this;
}

// TIoStatusOr<FIoStoreTocChunkInfo> @ 14179c350

TIoStatusOr<FIoStoreTocChunkInfo> * __thiscall
TIoStatusOr<FIoStoreTocChunkInfo>::TIoStatusOr<FIoStoreTocChunkInfo>
          (TIoStatusOr<FIoStoreTocChunkInfo> *this,FIoStatus *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  TIoStatusOr<FIoStoreTocChunkInfo> *pTVar5;
  wchar_t *pwVar6;
  
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Ok;
  (this->StatusValue).SystemErrorCode = 0;
  if (param_1->ErrorCode == Ok) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TIoStatusOr<FIoStoreTocChunkInfo> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pwVar2 = (param_1->ErrorMessage).Chars;
  pwVar6 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar2 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar2 + -4) = *(int *)(pwVar2 + -4) + 1;
    UNLOCK();
  }
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar6 = pwVar6 + -4;
    LOCK();
    iVar1 = *(int *)pwVar6;
    *(int *)pwVar6 = *(int *)pwVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar6);
    }
  }
  (this->StatusValue).ErrorMessage.Chars = pwVar2;
  (this->StatusValue).ErrorCode = param_1->ErrorCode;
  (this->StatusValue).SystemErrorCode = param_1->SystemErrorCode;
  pwVar6 = (param_1->ErrorMessage).Chars;
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar6 = pwVar6 + -4;
    LOCK();
    iVar1 = *(int *)pwVar6;
    *(int *)pwVar6 = *(int *)pwVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar6);
    }
  }
  return this;
}

// TIoStatusOr<FIoBuffer> @ 14179c420

TIoStatusOr<FIoBuffer> * __thiscall
TIoStatusOr<FIoBuffer>::TIoStatusOr<FIoBuffer>
          (TIoStatusOr<FIoBuffer> *this,TIoStatusOr<FIoBuffer> *param_1)

{
  int iVar1;
  EIoErrorCode EVar2;
  wchar_t *pwVar3;
  
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Ok;
  (this->StatusValue).SystemErrorCode = 0;
  pwVar3 = (param_1->StatusValue).ErrorMessage.Chars;
  if (pwVar3 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar3 + -4) = *(int *)(pwVar3 + -4) + 1;
    UNLOCK();
  }
  (this->StatusValue).ErrorMessage.Chars = pwVar3;
  EVar2 = (param_1->StatusValue).ErrorCode;
  (this->StatusValue).ErrorCode = EVar2;
  (this->StatusValue).SystemErrorCode = (param_1->StatusValue).SystemErrorCode;
  if (EVar2 == Ok) {
    *(undefined8 *)(this->Value).Pad = 0;
    *(undefined8 *)(this->Value).Pad = *(undefined8 *)(param_1->Value).Pad;
    *(undefined8 *)(param_1->Value).Pad = 0;
    pwVar3 = (param_1->StatusValue).ErrorMessage.Chars;
    if (pwVar3 != (wchar_t *)0x0) {
      pwVar3 = pwVar3 + -4;
      LOCK();
      iVar1 = *(int *)pwVar3;
      *(int *)pwVar3 = *(int *)pwVar3 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        FMemory::Free(pwVar3);
      }
    }
    (param_1->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
    (param_1->StatusValue).ErrorCode = Unknown;
    (param_1->StatusValue).SystemErrorCode = 0;
  }
  return this;
}

// TIoStatusOr<FIoBuffer> @ 14179c4b0

TIoStatusOr<FIoBuffer> * __thiscall
TIoStatusOr<FIoBuffer>::TIoStatusOr<FIoBuffer>(TIoStatusOr<FIoBuffer> *this,FIoBuffer *param_1)

{
  TSharedString<wchar_t> TVar1;
  
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Ok;
  TVar1 = FIoStatus::Ok.ErrorMessage;
  (this->StatusValue).SystemErrorCode = 0;
  if (FIoStatus::Ok.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  (this->StatusValue).ErrorMessage.Chars = TVar1.Chars;
  (this->StatusValue).ErrorCode = FIoStatus::Ok.ErrorCode;
  (this->StatusValue).SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  *(undefined8 *)(this->Value).Pad = 0;
  *(BufCore **)(this->Value).Pad = (param_1->CorePtr).Reference;
  (param_1->CorePtr).Reference = (BufCore *)0x0;
  return this;
}

// TIoStatusOr<FIoBuffer> @ 14179c500

TIoStatusOr<FIoBuffer> * __thiscall
TIoStatusOr<FIoBuffer>::TIoStatusOr<FIoBuffer>
          (TIoStatusOr<FIoBuffer> *this,TIoStatusOr<FIoBuffer> *param_1)

{
  EIoErrorCode EVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Ok;
  (this->StatusValue).SystemErrorCode = 0;
  pwVar2 = (param_1->StatusValue).ErrorMessage.Chars;
  if (pwVar2 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar2 + -4) = *(int *)(pwVar2 + -4) + 1;
    UNLOCK();
  }
  (this->StatusValue).ErrorMessage.Chars = pwVar2;
  EVar1 = (param_1->StatusValue).ErrorCode;
  (this->StatusValue).ErrorCode = EVar1;
  (this->StatusValue).SystemErrorCode = (param_1->StatusValue).SystemErrorCode;
  if (EVar1 == Ok) {
    *(undefined8 *)(this->Value).Pad = 0;
    lVar3 = *(longlong *)(param_1->Value).Pad;
    *(longlong *)(this->Value).Pad = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
    }
  }
  return this;
}

// TIoStatusOr<FIoBuffer> @ 14179c550

TIoStatusOr<FIoBuffer> * __thiscall
TIoStatusOr<FIoBuffer>::TIoStatusOr<FIoBuffer>(TIoStatusOr<FIoBuffer> *this,FIoStatus *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  TIoStatusOr<FIoBuffer> *pTVar5;
  wchar_t *pwVar6;
  
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Ok;
  (this->StatusValue).SystemErrorCode = 0;
  if (param_1->ErrorCode == Ok) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TIoStatusOr<FIoBuffer> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pwVar2 = (param_1->ErrorMessage).Chars;
  pwVar6 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar2 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar2 + -4) = *(int *)(pwVar2 + -4) + 1;
    UNLOCK();
  }
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar6 = pwVar6 + -4;
    LOCK();
    iVar1 = *(int *)pwVar6;
    *(int *)pwVar6 = *(int *)pwVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar6);
    }
  }
  (this->StatusValue).ErrorMessage.Chars = pwVar2;
  (this->StatusValue).ErrorCode = param_1->ErrorCode;
  (this->StatusValue).SystemErrorCode = param_1->SystemErrorCode;
  pwVar6 = (param_1->ErrorMessage).Chars;
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar6 = pwVar6 + -4;
    LOCK();
    iVar1 = *(int *)pwVar6;
    *(int *)pwVar6 = *(int *)pwVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar6);
    }
  }
  return this;
}

// TIoStatusOr<unsigned___int64> @ 14179c620

TIoStatusOr<unsigned___int64> * __thiscall
TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>
          (TIoStatusOr<unsigned___int64> *this,TIoStatusOr<unsigned___int64> *param_1)

{
  int iVar1;
  EIoErrorCode EVar2;
  wchar_t *pwVar3;
  
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Ok;
  (this->StatusValue).SystemErrorCode = 0;
  pwVar3 = (param_1->StatusValue).ErrorMessage.Chars;
  if (pwVar3 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar3 + -4) = *(int *)(pwVar3 + -4) + 1;
    UNLOCK();
  }
  (this->StatusValue).ErrorMessage.Chars = pwVar3;
  EVar2 = (param_1->StatusValue).ErrorCode;
  (this->StatusValue).ErrorCode = EVar2;
  (this->StatusValue).SystemErrorCode = (param_1->StatusValue).SystemErrorCode;
  if (EVar2 == Ok) {
    *(undefined8 *)(this->Value).Pad = *(undefined8 *)(param_1->Value).Pad;
    pwVar3 = (param_1->StatusValue).ErrorMessage.Chars;
    if (pwVar3 != (wchar_t *)0x0) {
      pwVar3 = pwVar3 + -4;
      LOCK();
      iVar1 = *(int *)pwVar3;
      *(int *)pwVar3 = *(int *)pwVar3 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        FMemory::Free(pwVar3);
      }
    }
    (param_1->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
    (param_1->StatusValue).ErrorCode = Unknown;
    (param_1->StatusValue).SystemErrorCode = 0;
  }
  return this;
}

// TIoStatusOr<unsigned___int64> @ 14179c6b0

TIoStatusOr<unsigned___int64> * __thiscall
TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>
          (TIoStatusOr<unsigned___int64> *this,ulong64 *param_1)

{
  TSharedString<wchar_t> TVar1;
  
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Ok;
  TVar1 = FIoStatus::Ok.ErrorMessage;
  (this->StatusValue).SystemErrorCode = 0;
  if (FIoStatus::Ok.ErrorMessage.Chars != (wchar_t *)0x0) {
    LOCK();
    *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) =
         *(int *)(FIoStatus::Ok.ErrorMessage.Chars + -4) + 1;
    UNLOCK();
  }
  (this->StatusValue).ErrorMessage.Chars = TVar1.Chars;
  (this->StatusValue).ErrorCode = FIoStatus::Ok.ErrorCode;
  (this->StatusValue).SystemErrorCode = FIoStatus::Ok.SystemErrorCode;
  *(ulong64 *)(this->Value).Pad = *param_1;
  return this;
}

// TIoStatusOr<unsigned___int64> @ 14179c6f0

TIoStatusOr<unsigned___int64> * __thiscall
TIoStatusOr<unsigned___int64>::TIoStatusOr<unsigned___int64>
          (TIoStatusOr<unsigned___int64> *this,FIoStatus *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  TIoStatusOr<unsigned___int64> *pTVar5;
  wchar_t *pwVar6;
  
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Ok;
  (this->StatusValue).SystemErrorCode = 0;
  if (param_1->ErrorCode == Ok) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TIoStatusOr<unsigned___int64> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pwVar2 = (param_1->ErrorMessage).Chars;
  pwVar6 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar2 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar2 + -4) = *(int *)(pwVar2 + -4) + 1;
    UNLOCK();
  }
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar6 = pwVar6 + -4;
    LOCK();
    iVar1 = *(int *)pwVar6;
    *(int *)pwVar6 = *(int *)pwVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar6);
    }
  }
  (this->StatusValue).ErrorMessage.Chars = pwVar2;
  (this->StatusValue).ErrorCode = param_1->ErrorCode;
  (this->StatusValue).SystemErrorCode = param_1->SystemErrorCode;
  pwVar6 = (param_1->ErrorMessage).Chars;
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar6 = pwVar6 + -4;
    LOCK();
    iVar1 = *(int *)pwVar6;
    *(int *)pwVar6 = *(int *)pwVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar6);
    }
  }
  return this;
}

// ~TIoStatusOr<FIoMappedRegion> @ 1417a6040

void __thiscall
TIoStatusOr<FIoMappedRegion>::~TIoStatusOr<FIoMappedRegion>(TIoStatusOr<FIoMappedRegion> *this)

{
  int iVar1;
  wchar_t *pwVar2;
  
  pwVar2 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar2 != (wchar_t *)0x0) {
    pwVar2 = pwVar2 + -4;
    LOCK();
    iVar1 = *(int *)pwVar2;
    *(int *)pwVar2 = *(int *)pwVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar2);
    }
  }
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Unknown;
  (this->StatusValue).SystemErrorCode = 0;
  return;
}

// ~TIoStatusOr<FIoStoreCompressedReadResult> @ 1417a6090

void __thiscall
TIoStatusOr<FIoStoreCompressedReadResult>::~TIoStatusOr<FIoStoreCompressedReadResult>
          (TIoStatusOr<FIoStoreCompressedReadResult> *this)

{
  int *piVar1;
  int iVar2;
  EIoErrorCode EVar3;
  void *pvVar4;
  BufCore *this_00;
  wchar_t *pwVar5;
  
  EVar3 = (this->StatusValue).ErrorCode;
  pwVar5 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar5 != (wchar_t *)0x0) {
    pwVar5 = pwVar5 + -4;
    LOCK();
    iVar2 = *(int *)pwVar5;
    *(int *)pwVar5 = *(int *)pwVar5 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FMemory::Free(pwVar5);
    }
  }
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Unknown;
  (this->StatusValue).SystemErrorCode = 0;
  if (EVar3 == Ok) {
    pvVar4 = *(void **)((this->Value).Pad + 8);
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    this_00 = *(BufCore **)(this->Value).Pad;
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
      }
    }
  }
  pwVar5 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar5 != (wchar_t *)0x0) {
    pwVar5 = pwVar5 + -4;
    LOCK();
    iVar2 = *(int *)pwVar5;
    *(int *)pwVar5 = *(int *)pwVar5 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FMemory::Free(pwVar5);
    }
  }
  return;
}

// ~TIoStatusOr<FIoStoreTocChunkInfo> @ 1417a6150

void __thiscall
TIoStatusOr<FIoStoreTocChunkInfo>::~TIoStatusOr<FIoStoreTocChunkInfo>
          (TIoStatusOr<FIoStoreTocChunkInfo> *this)

{
  int iVar1;
  EIoErrorCode EVar2;
  void *pvVar3;
  wchar_t *pwVar4;
  
  EVar2 = (this->StatusValue).ErrorCode;
  pwVar4 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar4 != (wchar_t *)0x0) {
    pwVar4 = pwVar4 + -4;
    LOCK();
    iVar1 = *(int *)pwVar4;
    *(int *)pwVar4 = *(int *)pwVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar4);
    }
  }
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Unknown;
  (this->StatusValue).SystemErrorCode = 0;
  if ((EVar2 == Ok) && (pvVar3 = *(void **)((this->Value).Pad + 0x40), pvVar3 != (void *)0x0)) {
    FMemory::Free(pvVar3);
  }
  pwVar4 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar4 != (wchar_t *)0x0) {
    pwVar4 = pwVar4 + -4;
    LOCK();
    iVar1 = *(int *)pwVar4;
    *(int *)pwVar4 = *(int *)pwVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar4);
    }
  }
  return;
}

// ~TIoStatusOr<FIoBuffer> @ 1417a61e0

void __thiscall TIoStatusOr<FIoBuffer>::~TIoStatusOr<FIoBuffer>(TIoStatusOr<FIoBuffer> *this)

{
  int iVar1;
  wchar_t *pwVar2;
  
  Reset(this);
  pwVar2 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar2 != (wchar_t *)0x0) {
    pwVar2 = pwVar2 + -4;
    LOCK();
    iVar1 = *(int *)pwVar2;
    *(int *)pwVar2 = *(int *)pwVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar2);
      return;
    }
  }
  return;
}

// ~TIoStatusOr<unsigned___int64> @ 1417a6220

void __thiscall
TIoStatusOr<unsigned___int64>::~TIoStatusOr<unsigned___int64>(TIoStatusOr<unsigned___int64> *this)

{
  int iVar1;
  wchar_t *pwVar2;
  
  pwVar2 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar2 != (wchar_t *)0x0) {
    pwVar2 = pwVar2 + -4;
    LOCK();
    iVar1 = *(int *)pwVar2;
    *(int *)pwVar2 = *(int *)pwVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar2);
    }
  }
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Unknown;
  (this->StatusValue).SystemErrorCode = 0;
  return;
}

// operator= @ 1417a7c80

TIoStatusOr<FIoBuffer> * __thiscall
TIoStatusOr<FIoBuffer>::operator=(TIoStatusOr<FIoBuffer> *this,FIoBuffer *param_1)

{
  TTypeCompatibleBytes<FIoBuffer> *pTVar1;
  int iVar2;
  BufCore *pBVar3;
  wchar_t *pwVar4;
  
  pTVar1 = &this->Value;
  if (param_1 != (FIoBuffer *)pTVar1) {
    Reset(this);
    *(undefined8 *)pTVar1->Pad = 0;
    pBVar3 = (param_1->CorePtr).Reference;
    *(BufCore **)pTVar1->Pad = pBVar3;
    if (pBVar3 != (BufCore *)0x0) {
      LOCK();
      pBVar3->NumRefs = pBVar3->NumRefs + 1;
      UNLOCK();
    }
    pwVar4 = (this->StatusValue).ErrorMessage.Chars;
    if (pwVar4 != (wchar_t *)0x0) {
      pwVar4 = pwVar4 + -4;
      LOCK();
      iVar2 = *(int *)pwVar4;
      *(int *)pwVar4 = *(int *)pwVar4 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FMemory::Free(pwVar4);
      }
    }
    (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
    (this->StatusValue).ErrorCode = Ok;
    (this->StatusValue).SystemErrorCode = 0;
  }
  return this;
}

// operator= @ 1417a7d00

TIoStatusOr<FIoBuffer> * __thiscall
TIoStatusOr<FIoBuffer>::operator=(TIoStatusOr<FIoBuffer> *this,FIoStatus *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  TIoStatusOr<FIoBuffer> *pTVar5;
  wchar_t *pwVar6;
  
  if (param_1->ErrorCode == Ok) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!OtherStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x15f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TIoStatusOr<FIoBuffer> *)(*pcVar3)();
      return pTVar5;
    }
  }
  Reset(this);
  pwVar2 = (param_1->ErrorMessage).Chars;
  pwVar6 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar2 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar2 + -4) = *(int *)(pwVar2 + -4) + 1;
    UNLOCK();
  }
  if (pwVar6 != (wchar_t *)0x0) {
    pwVar6 = pwVar6 + -4;
    LOCK();
    iVar1 = *(int *)pwVar6;
    *(int *)pwVar6 = *(int *)pwVar6 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar6);
    }
  }
  (this->StatusValue).ErrorMessage.Chars = pwVar2;
  (this->StatusValue).ErrorCode = param_1->ErrorCode;
  (this->StatusValue).SystemErrorCode = param_1->SystemErrorCode;
  return this;
}

// IsOk @ 1417de530

bool __thiscall TIoStatusOr<FIoMappedRegion>::IsOk(TIoStatusOr<FIoMappedRegion> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// IsOk @ 1417de540

bool __thiscall TIoStatusOr<unsigned___int64>::IsOk(TIoStatusOr<unsigned___int64> *this)

{
  return (this->StatusValue).ErrorCode == Ok;
}

// Reset @ 1417f5df0

void __thiscall TIoStatusOr<FIoMappedRegion>::Reset(TIoStatusOr<FIoMappedRegion> *this)

{
  int iVar1;
  wchar_t *pwVar2;
  
  pwVar2 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar2 != (wchar_t *)0x0) {
    pwVar2 = pwVar2 + -4;
    LOCK();
    iVar1 = *(int *)pwVar2;
    *(int *)pwVar2 = *(int *)pwVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar2);
    }
  }
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Unknown;
  (this->StatusValue).SystemErrorCode = 0;
  return;
}

// Reset @ 1417f5e40

void __thiscall
TIoStatusOr<FIoStoreCompressedReadResult>::Reset(TIoStatusOr<FIoStoreCompressedReadResult> *this)

{
  int *piVar1;
  int iVar2;
  EIoErrorCode EVar3;
  void *pvVar4;
  BufCore *this_00;
  wchar_t *pwVar5;
  
  EVar3 = (this->StatusValue).ErrorCode;
  pwVar5 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar5 != (wchar_t *)0x0) {
    pwVar5 = pwVar5 + -4;
    LOCK();
    iVar2 = *(int *)pwVar5;
    *(int *)pwVar5 = *(int *)pwVar5 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FMemory::Free(pwVar5);
    }
  }
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Unknown;
  (this->StatusValue).SystemErrorCode = 0;
  if (EVar3 == Ok) {
    pvVar4 = *(void **)((this->Value).Pad + 8);
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    this_00 = *(BufCore **)(this->Value).Pad;
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
      }
    }
  }
  return;
}

// Reset @ 1417f5ee0

void __thiscall TIoStatusOr<FIoStoreTocChunkInfo>::Reset(TIoStatusOr<FIoStoreTocChunkInfo> *this)

{
  int iVar1;
  EIoErrorCode EVar2;
  void *pvVar3;
  wchar_t *pwVar4;
  
  EVar2 = (this->StatusValue).ErrorCode;
  pwVar4 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar4 != (wchar_t *)0x0) {
    pwVar4 = pwVar4 + -4;
    LOCK();
    iVar1 = *(int *)pwVar4;
    *(int *)pwVar4 = *(int *)pwVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar4);
    }
  }
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Unknown;
  (this->StatusValue).SystemErrorCode = 0;
  if ((EVar2 == Ok) && (pvVar3 = *(void **)((this->Value).Pad + 0x40), pvVar3 != (void *)0x0)) {
    FMemory::Free(pvVar3);
  }
  return;
}

// Reset @ 1417f5f40

void __thiscall TIoStatusOr<FIoBuffer>::Reset(TIoStatusOr<FIoBuffer> *this)

{
  int *piVar1;
  int iVar2;
  EIoErrorCode EVar3;
  BufCore *this_00;
  wchar_t *pwVar4;
  
  EVar3 = (this->StatusValue).ErrorCode;
  pwVar4 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar4 != (wchar_t *)0x0) {
    pwVar4 = pwVar4 + -4;
    LOCK();
    iVar2 = *(int *)pwVar4;
    *(int *)pwVar4 = *(int *)pwVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FMemory::Free(pwVar4);
    }
  }
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Unknown;
  (this->StatusValue).SystemErrorCode = 0;
  if ((EVar3 == Ok) && (this_00 = *(BufCore **)(this->Value).Pad, this_00 != (BufCore *)0x0)) {
    FIoBuffer::BufCore::CheckRefCount(this_00);
    LOCK();
    piVar1 = &this_00->NumRefs;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FIoBuffer::BufCore::~BufCore(this_00);
      ::operator_delete(this_00,0x20);
    }
  }
  return;
}

// Reset @ 1417f5fd0

void __thiscall TIoStatusOr<unsigned___int64>::Reset(TIoStatusOr<unsigned___int64> *this)

{
  int iVar1;
  wchar_t *pwVar2;
  
  pwVar2 = (this->StatusValue).ErrorMessage.Chars;
  if (pwVar2 != (wchar_t *)0x0) {
    pwVar2 = pwVar2 + -4;
    LOCK();
    iVar1 = *(int *)pwVar2;
    *(int *)pwVar2 = *(int *)pwVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FMemory::Free(pwVar2);
    }
  }
  (this->StatusValue).ErrorMessage.Chars = (wchar_t *)0x0;
  (this->StatusValue).ErrorCode = Unknown;
  (this->StatusValue).SystemErrorCode = 0;
  return;
}

// TIoStatusOr<FIoStatusTestType><FString_const_&> @ 141bce820

TIoStatusOr<FIoStatusTestType> * __thiscall
TIoStatusOr<FIoStatusTestType>::TIoStatusOr<FIoStatusTestType><FString_const_&>
          (TIoStatusOr<FIoStatusTestType> *this,FString *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  ::FString::FString((FString *)&this->Value,param_1);
  return this;
}

// TIoStatusOr<FIoStatusTestType><FString> @ 141bceaf0

TIoStatusOr<FIoStatusTestType> * __thiscall
TIoStatusOr<FIoStatusTestType>::TIoStatusOr<FIoStatusTestType><FString>
          (TIoStatusOr<FIoStatusTestType> *this,FString *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  (this->Value).Pad[0] = '\0';
  (this->Value).Pad[1] = '\0';
  (this->Value).Pad[2] = '\0';
  (this->Value).Pad[3] = '\0';
  (this->Value).Pad[4] = '\0';
  (this->Value).Pad[5] = '\0';
  (this->Value).Pad[6] = '\0';
  (this->Value).Pad[7] = '\0';
  *(FScriptContainerElement **)(this->Value).Pad = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 8) = (param_1->Data).ArrayNum;
  *(int *)((this->Value).Pad + 0xc) = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  return this;
}

// TIoStatusOr<FIoStatusTestType> @ 141be15e0

TIoStatusOr<FIoStatusTestType> * __thiscall
TIoStatusOr<FIoStatusTestType>::TIoStatusOr<FIoStatusTestType>
          (TIoStatusOr<FIoStatusTestType> *this,FIoStatusTestType *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  (this->Value).Pad[0] = '\0';
  (this->Value).Pad[1] = '\0';
  (this->Value).Pad[2] = '\0';
  (this->Value).Pad[3] = '\0';
  (this->Value).Pad[4] = '\0';
  (this->Value).Pad[5] = '\0';
  (this->Value).Pad[6] = '\0';
  (this->Value).Pad[7] = '\0';
  *(FScriptContainerElement **)(this->Value).Pad = (param_1->Text).Data.AllocatorInstance.Data;
  (param_1->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)((this->Value).Pad + 8) = (param_1->Text).Data.ArrayNum;
  *(int *)((this->Value).Pad + 0xc) = (param_1->Text).Data.ArrayMax;
  (param_1->Text).Data.ArrayNum = 0;
  (param_1->Text).Data.ArrayMax = 0;
  return this;
}

// TIoStatusOr<FIoStatusTestType> @ 141be1640

TIoStatusOr<FIoStatusTestType> * __thiscall
TIoStatusOr<FIoStatusTestType>::TIoStatusOr<FIoStatusTestType>
          (TIoStatusOr<FIoStatusTestType> *this,FIoStatusTestType *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Ok);
  ::FString::FString((FString *)&this->Value,&param_1->Text);
  return this;
}

// TIoStatusOr<FIoStatusTestType> @ 141be1690

TIoStatusOr<FIoStatusTestType> * __thiscall
TIoStatusOr<FIoStatusTestType>::TIoStatusOr<FIoStatusTestType>
          (TIoStatusOr<FIoStatusTestType> *this,TIoStatusOr<FIoStatusTestType> *param_1)

{
  FIoStatus::FIoStatus(&this->StatusValue);
  FIoStatus::operator=(&this->StatusValue,&param_1->StatusValue);
  if ((this->StatusValue).ErrorCode == Ok) {
    ::FString::FString((FString *)&this->Value,(FString *)&param_1->Value);
  }
  return this;
}

// TIoStatusOr<FIoStatusTestType> @ 141be16e0

TIoStatusOr<FIoStatusTestType> * __thiscall
TIoStatusOr<FIoStatusTestType>::TIoStatusOr<FIoStatusTestType>
          (TIoStatusOr<FIoStatusTestType> *this,FIoStatus *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIoStatusOr<FIoStatusTestType> *pTVar3;
  
  FIoStatus::FIoStatus(&this->StatusValue);
  if (param_1->ErrorCode == Ok) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIoStatusOr<FIoStatusTestType> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  FIoStatus::~FIoStatus(param_1);
  return this;
}

// ~TIoStatusOr<FIoStatusTestType> @ 141bec660

void __thiscall
TIoStatusOr<FIoStatusTestType>::~TIoStatusOr<FIoStatusTestType>
          (TIoStatusOr<FIoStatusTestType> *this)

{
  EIoErrorCode EVar1;
  void *pvVar2;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if ((EVar1 == Ok) && (pvVar2 = *(void **)(this->Value).Pad, pvVar2 != (void *)0x0)) {
    FMemory::Free(pvVar2);
  }
  FIoStatus::~FIoStatus(&this->StatusValue);
  return;
}

// operator= @ 141becf20

TIoStatusOr<FIoStatusTestType> * __thiscall
TIoStatusOr<FIoStatusTestType>::operator=
          (TIoStatusOr<FIoStatusTestType> *this,FIoStatusTestType *param_1)

{
  TTypeCompatibleBytes<FIoStatusTestType> *pTVar1;
  EIoErrorCode EVar2;
  
  pTVar1 = &this->Value;
  if ((TTypeCompatibleBytes<FIoStatusTestType> *)param_1 != pTVar1) {
    EVar2 = (this->StatusValue).ErrorCode;
    FIoStatus::operator=(&this->StatusValue,Unknown);
    if ((EVar2 == Ok) && (*(void **)pTVar1->Pad != (void *)0x0)) {
      FMemory::Free(*(void **)pTVar1->Pad);
    }
    pTVar1->Pad[0] = '\0';
    pTVar1->Pad[1] = '\0';
    pTVar1->Pad[2] = '\0';
    pTVar1->Pad[3] = '\0';
    pTVar1->Pad[4] = '\0';
    pTVar1->Pad[5] = '\0';
    pTVar1->Pad[6] = '\0';
    pTVar1->Pad[7] = '\0';
    *(FScriptContainerElement **)pTVar1->Pad = (param_1->Text).Data.AllocatorInstance.Data;
    (param_1->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((this->Value).Pad + 8) = (param_1->Text).Data.ArrayNum;
    *(int *)((this->Value).Pad + 0xc) = (param_1->Text).Data.ArrayMax;
    (param_1->Text).Data.ArrayNum = 0;
    (param_1->Text).Data.ArrayMax = 0;
    FIoStatus::operator=(&this->StatusValue,Ok);
  }
  return this;
}

// operator= @ 141becfb0

TIoStatusOr<FIoStatusTestType> * __thiscall
TIoStatusOr<FIoStatusTestType>::operator=
          (TIoStatusOr<FIoStatusTestType> *this,TIoStatusOr<FIoStatusTestType> *param_1)

{
  EIoErrorCode EVar1;
  void *pvVar2;
  
  if (param_1 != this) {
    EVar1 = (this->StatusValue).ErrorCode;
    FIoStatus::operator=(&this->StatusValue,Unknown);
    if ((EVar1 == Ok) && (pvVar2 = *(void **)(this->Value).Pad, pvVar2 != (void *)0x0)) {
      FMemory::Free(pvVar2);
    }
    if ((param_1->StatusValue).ErrorCode == Ok) {
      (this->Value).Pad[0] = '\0';
      (this->Value).Pad[1] = '\0';
      (this->Value).Pad[2] = '\0';
      (this->Value).Pad[3] = '\0';
      (this->Value).Pad[4] = '\0';
      (this->Value).Pad[5] = '\0';
      (this->Value).Pad[6] = '\0';
      (this->Value).Pad[7] = '\0';
      *(undefined8 *)(this->Value).Pad = *(undefined8 *)(param_1->Value).Pad;
      (param_1->Value).Pad[0] = '\0';
      (param_1->Value).Pad[1] = '\0';
      (param_1->Value).Pad[2] = '\0';
      (param_1->Value).Pad[3] = '\0';
      (param_1->Value).Pad[4] = '\0';
      (param_1->Value).Pad[5] = '\0';
      (param_1->Value).Pad[6] = '\0';
      (param_1->Value).Pad[7] = '\0';
      *(undefined4 *)((this->Value).Pad + 8) = *(undefined4 *)((param_1->Value).Pad + 8);
      *(undefined4 *)((this->Value).Pad + 0xc) = *(undefined4 *)((param_1->Value).Pad + 0xc);
      (param_1->Value).Pad[8] = '\0';
      (param_1->Value).Pad[9] = '\0';
      (param_1->Value).Pad[10] = '\0';
      (param_1->Value).Pad[0xb] = '\0';
      (param_1->Value).Pad[0xc] = '\0';
      (param_1->Value).Pad[0xd] = '\0';
      (param_1->Value).Pad[0xe] = '\0';
      (param_1->Value).Pad[0xf] = '\0';
      FIoStatus::operator=(&param_1->StatusValue,Unknown);
      FIoStatus::operator=(&this->StatusValue,Ok);
      return this;
    }
    FIoStatus::operator=(&this->StatusValue,&param_1->StatusValue);
  }
  return this;
}

// operator= @ 141bed060

TIoStatusOr<FIoStatusTestType> * __thiscall
TIoStatusOr<FIoStatusTestType>::operator=
          (TIoStatusOr<FIoStatusTestType> *this,FIoStatusTestType *param_1)

{
  TTypeCompatibleBytes<FIoStatusTestType> *this_00;
  EIoErrorCode EVar1;
  
  this_00 = &this->Value;
  if ((TTypeCompatibleBytes<FIoStatusTestType> *)param_1 != this_00) {
    EVar1 = (this->StatusValue).ErrorCode;
    FIoStatus::operator=(&this->StatusValue,Unknown);
    if ((EVar1 == Ok) && (*(void **)this_00->Pad != (void *)0x0)) {
      FMemory::Free(*(void **)this_00->Pad);
    }
    ::FString::FString((FString *)this_00,&param_1->Text);
    FIoStatus::operator=(&this->StatusValue,Ok);
  }
  return this;
}

// operator= @ 141bed0e0

TIoStatusOr<FIoStatusTestType> * __thiscall
TIoStatusOr<FIoStatusTestType>::operator=
          (TIoStatusOr<FIoStatusTestType> *this,TIoStatusOr<FIoStatusTestType> *param_1)

{
  EIoErrorCode EVar1;
  void *pvVar2;
  
  if (param_1 != this) {
    EVar1 = (this->StatusValue).ErrorCode;
    FIoStatus::operator=(&this->StatusValue,Unknown);
    if ((EVar1 == Ok) && (pvVar2 = *(void **)(this->Value).Pad, pvVar2 != (void *)0x0)) {
      FMemory::Free(pvVar2);
    }
    if ((param_1->StatusValue).ErrorCode == Ok) {
      ::FString::FString((FString *)&this->Value,(FString *)&param_1->Value);
      FIoStatus::operator=(&this->StatusValue,Ok);
      return this;
    }
    FIoStatus::operator=(&this->StatusValue,&param_1->StatusValue);
  }
  return this;
}

// operator= @ 141bed170

TIoStatusOr<FIoStatusTestType> * __thiscall
TIoStatusOr<FIoStatusTestType>::operator=(TIoStatusOr<FIoStatusTestType> *this,FIoStatus *param_1)

{
  EIoErrorCode EVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  TIoStatusOr<FIoStatusTestType> *pTVar5;
  
  if (param_1->ErrorCode == Ok) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!OtherStatus.IsOk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\IO\\IoStatus.h"
                       ,0x15f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TIoStatusOr<FIoStatusTestType> *)(*pcVar3)();
      return pTVar5;
    }
  }
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if ((EVar1 == Ok) && (pvVar2 = *(void **)(this->Value).Pad, pvVar2 != (void *)0x0)) {
    FMemory::Free(pvVar2);
  }
  FIoStatus::operator=(&this->StatusValue,param_1);
  return this;
}

// ConsumeValueOrDie @ 141bf8700

FIoStatusTestType * __thiscall
TIoStatusOr<FIoStatusTestType>::ConsumeValueOrDie
          (TIoStatusOr<FIoStatusTestType> *this,FIoStatusTestType *__return_storage_ptr__)

{
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
  }
  FIoStatus::operator=(&this->StatusValue,&FIoStatus::Unknown);
  (__return_storage_ptr__->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Text).Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)(this->Value).Pad;
  (this->Value).Pad[0] = '\0';
  (this->Value).Pad[1] = '\0';
  (this->Value).Pad[2] = '\0';
  (this->Value).Pad[3] = '\0';
  (this->Value).Pad[4] = '\0';
  (this->Value).Pad[5] = '\0';
  (this->Value).Pad[6] = '\0';
  (this->Value).Pad[7] = '\0';
  (__return_storage_ptr__->Text).Data.ArrayNum = *(int *)((this->Value).Pad + 8);
  (__return_storage_ptr__->Text).Data.ArrayMax = *(int *)((this->Value).Pad + 0xc);
  (this->Value).Pad[8] = '\0';
  (this->Value).Pad[9] = '\0';
  (this->Value).Pad[10] = '\0';
  (this->Value).Pad[0xb] = '\0';
  (this->Value).Pad[0xc] = '\0';
  (this->Value).Pad[0xd] = '\0';
  (this->Value).Pad[0xe] = '\0';
  (this->Value).Pad[0xf] = '\0';
  return __return_storage_ptr__;
}

// Reset @ 141c09860

void __thiscall TIoStatusOr<FIoStatusTestType>::Reset(TIoStatusOr<FIoStatusTestType> *this)

{
  EIoErrorCode EVar1;
  void *pvVar2;
  
  EVar1 = (this->StatusValue).ErrorCode;
  FIoStatus::operator=(&this->StatusValue,Unknown);
  if ((EVar1 == Ok) && (pvVar2 = *(void **)(this->Value).Pad, pvVar2 != (void *)0x0)) {
    FMemory::Free(pvVar2);
  }
  return;
}

// Status @ 141c09c80

FIoStatus * __thiscall TIoStatusOr<FIoStatusTestType>::Status(TIoStatusOr<FIoStatusTestType> *this)

{
  return &this->StatusValue;
}

// ValueOrDie @ 141c597a0

FIoStatusTestType * __thiscall
TIoStatusOr<FIoStatusTestType>::ValueOrDie(TIoStatusOr<FIoStatusTestType> *this)

{
  if ((this->StatusValue).ErrorCode != Ok) {
    StatusOrCrash(&this->StatusValue);
    return (FIoStatusTestType *)&this->Value;
  }
  return (FIoStatusTestType *)&this->Value;
}

