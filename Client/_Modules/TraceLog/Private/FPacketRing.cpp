// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceLog
// Functions: 12

// Append<UE::Trace::Private::TTidPacket<0>_> @ 14145cbc0

TTidPacket<0> * __thiscall
UE::Trace::Private::FPacketRing::Append<UE::Trace::Private::TTidPacket<0>_>
          (FPacketRing *this,uint param_1)

{
  FTidPacketBase *pFVar1;
  
  pFVar1 = AppendImpl(this,param_1 + 4);
  return (TTidPacket<0> *)pFVar1;
}

// Append<UE::Trace::Private::TTidPacketEncoded<0>_> @ 14145cbd0

TTidPacketEncoded<0> * __thiscall
UE::Trace::Private::FPacketRing::Append<UE::Trace::Private::TTidPacketEncoded<0>_>
          (FPacketRing *this,uint param_1)

{
  TTidPacketEncoded<0> *pTVar1;
  
  pTVar1 = (TTidPacketEncoded<0> *)AppendImpl(this,param_1 + 6);
  return pTVar1;
}

// BackUp<UE::Trace::Private::TTidPacketEncoded<0>_> @ 14145cbe0

void __thiscall
UE::Trace::Private::FPacketRing::BackUp<UE::Trace::Private::TTidPacketEncoded<0>_>
          (FPacketRing *this,uint param_1)

{
  this->Cursor = this->Cursor + (-6 - param_1);
  return;
}

// AppendImpl @ 14145d8e0

FTidPacketBase * __thiscall
UE::Trace::Private::FPacketRing::AppendImpl(FPacketRing *this,uint param_1)

{
  uchar *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = this->Size;
  if (uVar2 < param_1) {
    this->Right = uVar2;
    this->Cursor = 0;
    this->Left = uVar2;
    return (FTidPacketBase *)0x0;
  }
  uVar3 = this->Cursor + param_1;
  if (uVar2 < uVar3) {
    this->Right = this->Cursor;
    this->Cursor = 0;
    this->Left = 0;
    uVar3 = param_1;
  }
  uVar2 = this->Left;
  if (uVar2 < uVar3) {
    do {
      if (this->Right <= uVar2) break;
      uVar2 = uVar2 + *(ushort *)(this->Data + uVar2);
      this->Left = uVar2;
    } while (uVar2 < uVar3);
  }
  uVar2 = this->Cursor;
  puVar1 = this->Data;
  ((FTidPacketBase *)(puVar1 + uVar2))->PacketSize = (ushort)param_1;
  this->Cursor = uVar3;
  return (FTidPacketBase *)(puVar1 + uVar2);
}

// BackUp @ 14145d970

void __thiscall UE::Trace::Private::FPacketRing::BackUp(FPacketRing *this,uint param_1)

{
  this->Cursor = this->Cursor - param_1;
  return;
}

// GetBackPackets @ 14145e730

FRange * __thiscall
UE::Trace::Private::FPacketRing::GetBackPackets(FPacketRing *this,FRange *__return_storage_ptr__)

{
  uint uVar1;
  
  uVar1 = this->Left;
  __return_storage_ptr__->Data = this->Data + uVar1;
  __return_storage_ptr__->Size = this->Right - uVar1;
  return __return_storage_ptr__;
}

// GetFrontPackets @ 14145e7c0

FRange * __thiscall
UE::Trace::Private::FPacketRing::GetFrontPackets(FPacketRing *this,FRange *__return_storage_ptr__)

{
  __return_storage_ptr__->Data = this->Data;
  __return_storage_ptr__->Size = this->Cursor;
  return __return_storage_ptr__;
}

// GetSize @ 14145e840

uint __thiscall UE::Trace::Private::FPacketRing::GetSize(FPacketRing *this)

{
  return this->Size;
}

// Initialize @ 14145f3a0

void __thiscall UE::Trace::Private::FPacketRing::Initialize(FPacketRing *this,uint param_1)

{
  uchar *puVar1;
  
  puVar1 = Writer_MemoryAllocate((ulonglong)param_1,0x10);
  this->Data = puVar1;
  LOCK();
  GTraceStatistics.FixedBufferAllocated = GTraceStatistics.FixedBufferAllocated + param_1;
  UNLOCK();
  this->Size = param_1;
  this->Cursor = 0;
  this->Right = param_1;
  this->Left = param_1;
  return;
}

// IsActive @ 14145fa10

bool __thiscall UE::Trace::Private::FPacketRing::IsActive(FPacketRing *this)

{
  return this->Data != (uchar *)0x0;
}

// Reset @ 14146a3d0

void __thiscall UE::Trace::Private::FPacketRing::Reset(FPacketRing *this)

{
  this->Right = this->Size;
  this->Left = this->Size;
  this->Cursor = 0;
  return;
}

// Shutdown @ 14146a620

void __thiscall UE::Trace::Private::FPacketRing::Shutdown(FPacketRing *this)

{
  uint uVar1;
  
  uVar1 = this->Size;
  if (FreeHook == (_func___cdecl_void_void_ptr_ulong64 *)0x0) {
    _aligned_free(this->Data);
  }
  else {
    (*FreeHook)(this->Data,(ulonglong)uVar1);
  }
  LOCK();
  GTraceStatistics.MemoryUsed = GTraceStatistics.MemoryUsed - uVar1;
  UNLOCK();
  LOCK();
  GTraceStatistics.FixedBufferAllocated = GTraceStatistics.FixedBufferAllocated - this->Size;
  UNLOCK();
  this->Data = (uchar *)0x0;
  return;
}

