// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// FCompressedBufferReader @ 14147d170

FCompressedBufferReader * __thiscall
FCompressedBufferReader::FCompressedBufferReader(FCompressedBufferReader *this,FArchive *param_1)

{
  this->SourceArchive = (FArchive *)0x0;
  this->SourceBuffer = (FCompressedBuffer *)0x0;
  (this->Context).HeaderOffset = 0xffffffffffffffff;
  (this->Context).HeaderSize = 0;
  (this->Context).HeaderCrc32 = 0;
  (this->Context).RawBlockIndex = 0xffffffff;
  (this->Context).Header.Owner.Owner = (FBufferOwner *)0x0;
  (this->Context).RawBlock.Owner.Owner = (FBufferOwner *)0x0;
  (this->Context).CompressedBlock.Owner.Owner = (FBufferOwner *)0x0;
  if (this->SourceArchive != param_1) {
    this->SourceArchive = param_1;
    this->SourceBuffer = (FCompressedBuffer *)0x0;
  }
  return this;
}

// FCompressedBufferReader @ 14147d1c0

FCompressedBufferReader * __thiscall
FCompressedBufferReader::FCompressedBufferReader
          (FCompressedBufferReader *this,FCompressedBuffer *param_1)

{
  this->SourceBuffer = (FCompressedBuffer *)0x0;
  this->SourceArchive = (FArchive *)0x0;
  (this->Context).HeaderOffset = 0xffffffffffffffff;
  (this->Context).HeaderSize = 0;
  (this->Context).HeaderCrc32 = 0;
  (this->Context).RawBlockIndex = 0xffffffff;
  (this->Context).Header.Owner.Owner = (FBufferOwner *)0x0;
  (this->Context).RawBlock.Owner.Owner = (FBufferOwner *)0x0;
  (this->Context).CompressedBlock.Owner.Owner = (FBufferOwner *)0x0;
  if (this->SourceBuffer != param_1) {
    this->SourceArchive = (FArchive *)0x0;
    this->SourceBuffer = param_1;
  }
  return this;
}

// Decompress @ 141490140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSharedBuffer __thiscall
FCompressedBufferReader::Decompress(FCompressedBufferReader *this,ulong64 param_1,ulong64 param_2)

{
  code *pcVar1;
  FUniqueBuffer FVar2;
  bool bVar3;
  char cVar4;
  undefined ***pppuVar5;
  ulonglong in_R9;
  FLZ4Decoder *pFVar6;
  ulong64 uVar7;
  undefined1 auStack_138 [32];
  TMemoryView<void_const_> *local_118;
  ulong64 local_110;
  void **local_108;
  undefined4 local_100;
  FUniqueBuffer local_f8 [2];
  TMemoryView<void_const_> local_e8;
  undefined **local_d8;
  FCompressedBuffer *local_d0;
  void *local_c8;
  ulong64 local_c0;
  undefined **local_b8;
  FArchive *local_b0;
  ulong64 local_a8;
  FHeader local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  uVar7 = 0;
  local_98.Magic = 0xb7756362;
  local_98.Crc32 = 0;
  local_98.Method = None;
  local_98.Compressor = '\0';
  local_98.CompressionLevel = '\0';
  local_98.BlockSizeExponent = '\0';
  local_98.BlockCount = 0;
  local_98.TotalRawSize = 0;
  local_98.TotalCompressedSize = 0;
  local_e8.Data = (void *)0x0;
  local_e8.Size = 0;
  local_98.RawHash.Hash[0] = '\0';
  local_98.RawHash.Hash[1] = '\0';
  local_98.RawHash.Hash[2] = '\0';
  local_98.RawHash.Hash[3] = '\0';
  local_98.RawHash.Hash[4] = '\0';
  local_98.RawHash.Hash[5] = '\0';
  local_98.RawHash.Hash[6] = '\0';
  local_98.RawHash.Hash[7] = '\0';
  local_98.RawHash.Hash[8] = '\0';
  local_98.RawHash.Hash[9] = '\0';
  local_98.RawHash.Hash[10] = '\0';
  local_98.RawHash.Hash[0xb] = '\0';
  local_98.RawHash.Hash[0xc] = '\0';
  local_98.RawHash.Hash[0xd] = '\0';
  local_98.RawHash.Hash[0xe] = '\0';
  local_98.RawHash.Hash[0xf] = '\0';
  local_98.RawHash.Hash[0x10] = '\0';
  local_98.RawHash.Hash[0x11] = '\0';
  local_98.RawHash.Hash[0x12] = '\0';
  local_98.RawHash.Hash[0x13] = '\0';
  local_98.RawHash.Hash[0x14] = '\0';
  local_98.RawHash.Hash[0x15] = '\0';
  local_98.RawHash.Hash[0x16] = '\0';
  local_98.RawHash.Hash[0x17] = '\0';
  local_98.RawHash.Hash[0x18] = '\0';
  local_98.RawHash.Hash[0x19] = '\0';
  local_98.RawHash.Hash[0x1a] = '\0';
  local_98.RawHash.Hash[0x1b] = '\0';
  local_98.RawHash.Hash[0x1c] = '\0';
  local_98.RawHash.Hash[0x1d] = '\0';
  local_98.RawHash.Hash[0x1e] = '\0';
  local_98.RawHash.Hash[0x1f] = '\0';
  if (this->SourceArchive == (FArchive *)0x0) {
    if (this->SourceBuffer == (FCompressedBuffer *)0x0) goto LAB_141490342;
    bVar3 = UE::CompressedBuffer::Private::TryReadHeader
                      (&this->Context,&this->SourceBuffer->CompressedData,&local_98,&local_e8);
  }
  else {
    bVar3 = UE::CompressedBuffer::Private::TryReadHeader
                      (&this->Context,this->SourceArchive,&local_98,&local_e8);
  }
  if (bVar3 == false) goto LAB_141490342;
  if (in_R9 == 0xffffffffffffffff) {
    in_R9 = local_98.TotalRawSize - param_2;
  }
  if ((local_98.TotalRawSize < param_2) || (local_98.TotalRawSize - param_2 < in_R9))
  goto LAB_141490342;
  if (local_98.Method == None) {
    pFVar6 = (FLZ4Decoder *)&::None;
  }
  else if (local_98.Method == Oodle) {
    pFVar6 = (FLZ4Decoder *)&Oodle;
  }
  else {
    if (local_98.Method != LZ4) goto LAB_141490342;
    pFVar6 = &LZ4;
  }
  FUniqueBuffer::Alloc((ulong64)local_f8);
  FVar2.Owner.Owner = local_f8[0].Owner.Owner;
  pcVar1 = *(code **)((longlong)*pFVar6 + 8);
  if (local_f8[0].Owner.Owner == (FBufferOwner *)0x0) {
LAB_14149029a:
    local_c8 = (void *)0x0;
  }
  else {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_f8[0].Owner.Owner + 0x18) >> 0x3c
        & 4) == 0) {
      (**(code **)(*(longlong *)local_f8[0].Owner.Owner + 8))();
    }
    uVar7 = *(ulong64 *)((longlong)FVar2.Owner.Owner + 0x10);
    if (local_f8[0].Owner.Owner == (FBufferOwner *)0x0) goto LAB_14149029a;
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_f8[0].Owner.Owner + 0x18) >> 0x3c
        & 4) == 0) {
      (**(code **)(*(longlong *)local_f8[0].Owner.Owner + 8))(local_f8[0].Owner.Owner);
    }
    local_c8 = *(void **)((longlong)local_f8[0].Owner.Owner + 8);
  }
  if (this->SourceArchive == (FArchive *)0x0) {
    local_d8 = &___7FBufferDecoderSource_Private_CompressedBuffer_UE__6B_;
    pppuVar5 = &local_d8;
    local_d0 = this->SourceBuffer;
  }
  else {
    local_a8 = (this->Context).HeaderOffset;
    local_b8 = &___7FArchiveDecoderSource_Private_CompressedBuffer_UE__6B_;
    pppuVar5 = &local_b8;
    local_b0 = this->SourceArchive;
  }
  local_108 = &local_c8;
  local_100 = 0;
  local_118 = &local_e8;
  local_110 = param_2;
  local_c0 = uVar7;
  cVar4 = (*pcVar1)(pFVar6,&this->Context,pppuVar5,&local_98);
  if (cVar4 != '\0') {
    FUniqueBuffer::MoveToShared(local_f8);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_f8[0].Owner);
    return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_f8[0].Owner);
LAB_141490342:
  *(undefined8 *)param_1 = 0;
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

// DecompressToComposite @ 141490810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCompositeBuffer * __thiscall
FCompressedBufferReader::DecompressToComposite
          (FCompressedBufferReader *this,FCompositeBuffer *__return_storage_ptr__,ulong64 param_1,
          ulong64 param_2)

{
  bool bVar1;
  FOodleDecoder FVar2;
  FLZ4Decoder *pFVar3;
  undefined ***pppuVar4;
  undefined1 auStack_108 [32];
  FHeader *local_e8;
  TMemoryView<void_const_> *local_e0;
  ulong64 local_d8;
  ulonglong local_d0;
  TMemoryView<void_const_> local_c8;
  undefined **local_b8;
  FCompressedBuffer *local_b0;
  undefined **local_a8;
  FArchive *local_a0;
  ulong64 local_98;
  FHeader local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_88.Magic = 0xb7756362;
  local_88.Crc32 = 0;
  local_88.Method = None;
  local_88.Compressor = '\0';
  local_88.CompressionLevel = '\0';
  local_88.BlockSizeExponent = '\0';
  local_88.BlockCount = 0;
  local_88.TotalRawSize = 0;
  local_88.TotalCompressedSize = 0;
  local_c8.Data = (void *)0x0;
  local_c8.Size = 0;
  local_88.RawHash.Hash[0] = '\0';
  local_88.RawHash.Hash[1] = '\0';
  local_88.RawHash.Hash[2] = '\0';
  local_88.RawHash.Hash[3] = '\0';
  local_88.RawHash.Hash[4] = '\0';
  local_88.RawHash.Hash[5] = '\0';
  local_88.RawHash.Hash[6] = '\0';
  local_88.RawHash.Hash[7] = '\0';
  local_88.RawHash.Hash[8] = '\0';
  local_88.RawHash.Hash[9] = '\0';
  local_88.RawHash.Hash[10] = '\0';
  local_88.RawHash.Hash[0xb] = '\0';
  local_88.RawHash.Hash[0xc] = '\0';
  local_88.RawHash.Hash[0xd] = '\0';
  local_88.RawHash.Hash[0xe] = '\0';
  local_88.RawHash.Hash[0xf] = '\0';
  local_88.RawHash.Hash[0x10] = '\0';
  local_88.RawHash.Hash[0x11] = '\0';
  local_88.RawHash.Hash[0x12] = '\0';
  local_88.RawHash.Hash[0x13] = '\0';
  local_88.RawHash.Hash[0x14] = '\0';
  local_88.RawHash.Hash[0x15] = '\0';
  local_88.RawHash.Hash[0x16] = '\0';
  local_88.RawHash.Hash[0x17] = '\0';
  local_88.RawHash.Hash[0x18] = '\0';
  local_88.RawHash.Hash[0x19] = '\0';
  local_88.RawHash.Hash[0x1a] = '\0';
  local_88.RawHash.Hash[0x1b] = '\0';
  local_88.RawHash.Hash[0x1c] = '\0';
  local_88.RawHash.Hash[0x1d] = '\0';
  local_88.RawHash.Hash[0x1e] = '\0';
  local_88.RawHash.Hash[0x1f] = '\0';
  if (this->SourceArchive == (FArchive *)0x0) {
    if (this->SourceBuffer == (FCompressedBuffer *)0x0) goto LAB_141490983;
    bVar1 = UE::CompressedBuffer::Private::TryReadHeader
                      (&this->Context,&this->SourceBuffer->CompressedData,&local_88,&local_c8);
  }
  else {
    bVar1 = UE::CompressedBuffer::Private::TryReadHeader
                      (&this->Context,this->SourceArchive,&local_88,&local_c8);
  }
  if (bVar1 != false) {
    local_d0 = param_2;
    if (param_2 == 0xffffffffffffffff) {
      local_d0 = local_88.TotalRawSize - param_1;
    }
    if ((param_1 <= local_88.TotalRawSize) && (local_d0 <= local_88.TotalRawSize - param_1)) {
      if (local_88.Method == None) {
        FVar2 = (FOodleDecoder)::None;
        pFVar3 = (FLZ4Decoder *)&::None;
      }
      else if (local_88.Method == Oodle) {
        FVar2 = Oodle;
        pFVar3 = (FLZ4Decoder *)&Oodle;
      }
      else {
        if (local_88.Method != LZ4) goto LAB_141490983;
        pFVar3 = &LZ4;
        FVar2 = (FOodleDecoder)LZ4;
      }
      if (this->SourceArchive == (FArchive *)0x0) {
        local_b8 = &___7FBufferDecoderSource_Private_CompressedBuffer_UE__6B_;
        pppuVar4 = &local_b8;
        local_b0 = this->SourceBuffer;
      }
      else {
        local_98 = (this->Context).HeaderOffset;
        pppuVar4 = &local_a8;
        local_a8 = &___7FArchiveDecoderSource_Private_CompressedBuffer_UE__6B_;
        local_a0 = this->SourceArchive;
      }
      local_e0 = &local_c8;
      local_e8 = &local_88;
      local_d8 = param_1;
      (**(code **)((longlong)FVar2 + 0x10))(pFVar3,__return_storage_ptr__,&this->Context,pppuVar4);
      return __return_storage_ptr__;
    }
  }
LAB_141490983:
  (__return_storage_ptr__->Segments).AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  (__return_storage_ptr__->Segments).ArrayNum = 0;
  (__return_storage_ptr__->Segments).ArrayMax = 1;
  return __return_storage_ptr__;
}

// GetCompressedSize @ 1414985b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __thiscall FCompressedBufferReader::GetCompressedSize(FCompressedBufferReader *this)

{
  bool bVar1;
  undefined1 auStack_88 [32];
  TMemoryView<void_const_> local_68;
  FHeader local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58.Crc32 = 0;
  local_58.Magic = 0xb7756362;
  local_58.Method = None;
  local_58.Compressor = '\0';
  local_58.CompressionLevel = '\0';
  local_58.BlockSizeExponent = '\0';
  local_58.BlockCount = 0;
  local_58.TotalRawSize = 0;
  local_58.TotalCompressedSize = 0;
  local_68.Data = (void *)0x0;
  local_68.Size = 0;
  local_58.RawHash.Hash[0] = '\0';
  local_58.RawHash.Hash[1] = '\0';
  local_58.RawHash.Hash[2] = '\0';
  local_58.RawHash.Hash[3] = '\0';
  local_58.RawHash.Hash[4] = '\0';
  local_58.RawHash.Hash[5] = '\0';
  local_58.RawHash.Hash[6] = '\0';
  local_58.RawHash.Hash[7] = '\0';
  local_58.RawHash.Hash[8] = '\0';
  local_58.RawHash.Hash[9] = '\0';
  local_58.RawHash.Hash[10] = '\0';
  local_58.RawHash.Hash[0xb] = '\0';
  local_58.RawHash.Hash[0xc] = '\0';
  local_58.RawHash.Hash[0xd] = '\0';
  local_58.RawHash.Hash[0xe] = '\0';
  local_58.RawHash.Hash[0xf] = '\0';
  local_58.RawHash.Hash[0x10] = '\0';
  local_58.RawHash.Hash[0x11] = '\0';
  local_58.RawHash.Hash[0x12] = '\0';
  local_58.RawHash.Hash[0x13] = '\0';
  local_58.RawHash.Hash[0x14] = '\0';
  local_58.RawHash.Hash[0x15] = '\0';
  local_58.RawHash.Hash[0x16] = '\0';
  local_58.RawHash.Hash[0x17] = '\0';
  local_58.RawHash.Hash[0x18] = '\0';
  local_58.RawHash.Hash[0x19] = '\0';
  local_58.RawHash.Hash[0x1a] = '\0';
  local_58.RawHash.Hash[0x1b] = '\0';
  local_58.RawHash.Hash[0x1c] = '\0';
  local_58.RawHash.Hash[0x1d] = '\0';
  local_58.RawHash.Hash[0x1e] = '\0';
  local_58.RawHash.Hash[0x1f] = '\0';
  if (this->SourceArchive == (FArchive *)0x0) {
    if (this->SourceBuffer == (FCompressedBuffer *)0x0) {
      return 0;
    }
    bVar1 = UE::CompressedBuffer::Private::TryReadHeader
                      (&this->Context,&this->SourceBuffer->CompressedData,&local_58,&local_68);
  }
  else {
    bVar1 = UE::CompressedBuffer::Private::TryReadHeader
                      (&this->Context,this->SourceArchive,&local_58,&local_68);
  }
  if (bVar1 == false) {
    return 0;
  }
  return local_58.TotalCompressedSize;
}

// GetRawHash @ 141499ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIoHash * __thiscall
FCompressedBufferReader::GetRawHash(FCompressedBufferReader *this,FIoHash *__return_storage_ptr__)

{
  bool bVar1;
  undefined1 auStack_88 [32];
  TMemoryView<void_const_> local_68;
  FHeader local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58.Magic = 0xb7756362;
  local_58.Crc32 = 0;
  local_58.Method = None;
  local_58.Compressor = '\0';
  local_58.CompressionLevel = '\0';
  local_58.BlockSizeExponent = '\0';
  local_58.BlockCount = 0;
  local_58.TotalRawSize = 0;
  local_58.TotalCompressedSize = 0;
  local_68.Data = (void *)0x0;
  local_68.Size = 0;
  local_58.RawHash.Hash[0] = '\0';
  local_58.RawHash.Hash[1] = '\0';
  local_58.RawHash.Hash[2] = '\0';
  local_58.RawHash.Hash[3] = '\0';
  local_58.RawHash.Hash[4] = '\0';
  local_58.RawHash.Hash[5] = '\0';
  local_58.RawHash.Hash[6] = '\0';
  local_58.RawHash.Hash[7] = '\0';
  local_58.RawHash.Hash[8] = '\0';
  local_58.RawHash.Hash[9] = '\0';
  local_58.RawHash.Hash[10] = '\0';
  local_58.RawHash.Hash[0xb] = '\0';
  local_58.RawHash.Hash[0xc] = '\0';
  local_58.RawHash.Hash[0xd] = '\0';
  local_58.RawHash.Hash[0xe] = '\0';
  local_58.RawHash.Hash[0xf] = '\0';
  local_58.RawHash.Hash[0x10] = '\0';
  local_58.RawHash.Hash[0x11] = '\0';
  local_58.RawHash.Hash[0x12] = '\0';
  local_58.RawHash.Hash[0x13] = '\0';
  local_58.RawHash.Hash[0x14] = '\0';
  local_58.RawHash.Hash[0x15] = '\0';
  local_58.RawHash.Hash[0x16] = '\0';
  local_58.RawHash.Hash[0x17] = '\0';
  local_58.RawHash.Hash[0x18] = '\0';
  local_58.RawHash.Hash[0x19] = '\0';
  local_58.RawHash.Hash[0x1a] = '\0';
  local_58.RawHash.Hash[0x1b] = '\0';
  local_58.RawHash.Hash[0x1c] = '\0';
  local_58.RawHash.Hash[0x1d] = '\0';
  local_58.RawHash.Hash[0x1e] = '\0';
  local_58.RawHash.Hash[0x1f] = '\0';
  if (this->SourceArchive == (FArchive *)0x0) {
    if (this->SourceBuffer == (FCompressedBuffer *)0x0) goto LAB_141499d38;
    bVar1 = UE::CompressedBuffer::Private::TryReadHeader
                      (&this->Context,&this->SourceBuffer->CompressedData,&local_58,&local_68);
  }
  else {
    bVar1 = UE::CompressedBuffer::Private::TryReadHeader
                      (&this->Context,this->SourceArchive,&local_58,&local_68);
  }
  if (bVar1 != false) {
    *(undefined8 *)__return_storage_ptr__->Hash = local_58.RawHash.Hash._0_8_;
    *(undefined8 *)(__return_storage_ptr__->Hash + 8) = local_58.RawHash.Hash._8_8_;
    *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = local_58.RawHash.Hash._16_4_;
    return __return_storage_ptr__;
  }
LAB_141499d38:
  __return_storage_ptr__->Hash[0] = '\0';
  __return_storage_ptr__->Hash[1] = '\0';
  __return_storage_ptr__->Hash[2] = '\0';
  __return_storage_ptr__->Hash[3] = '\0';
  __return_storage_ptr__->Hash[4] = '\0';
  __return_storage_ptr__->Hash[5] = '\0';
  __return_storage_ptr__->Hash[6] = '\0';
  __return_storage_ptr__->Hash[7] = '\0';
  __return_storage_ptr__->Hash[8] = '\0';
  __return_storage_ptr__->Hash[9] = '\0';
  __return_storage_ptr__->Hash[10] = '\0';
  __return_storage_ptr__->Hash[0xb] = '\0';
  __return_storage_ptr__->Hash[0xc] = '\0';
  __return_storage_ptr__->Hash[0xd] = '\0';
  __return_storage_ptr__->Hash[0xe] = '\0';
  __return_storage_ptr__->Hash[0xf] = '\0';
  __return_storage_ptr__->Hash[0x10] = '\0';
  __return_storage_ptr__->Hash[0x11] = '\0';
  __return_storage_ptr__->Hash[0x12] = '\0';
  __return_storage_ptr__->Hash[0x13] = '\0';
  return __return_storage_ptr__;
}

// GetRawSize @ 141499e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __thiscall FCompressedBufferReader::GetRawSize(FCompressedBufferReader *this)

{
  bool bVar1;
  undefined1 auStack_88 [32];
  TMemoryView<void_const_> local_68;
  FHeader local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58.Crc32 = 0;
  local_58.Magic = 0xb7756362;
  local_58.Method = None;
  local_58.Compressor = '\0';
  local_58.CompressionLevel = '\0';
  local_58.BlockSizeExponent = '\0';
  local_58.BlockCount = 0;
  local_58.TotalRawSize = 0;
  local_58.TotalCompressedSize = 0;
  local_68.Data = (void *)0x0;
  local_68.Size = 0;
  local_58.RawHash.Hash[0] = '\0';
  local_58.RawHash.Hash[1] = '\0';
  local_58.RawHash.Hash[2] = '\0';
  local_58.RawHash.Hash[3] = '\0';
  local_58.RawHash.Hash[4] = '\0';
  local_58.RawHash.Hash[5] = '\0';
  local_58.RawHash.Hash[6] = '\0';
  local_58.RawHash.Hash[7] = '\0';
  local_58.RawHash.Hash[8] = '\0';
  local_58.RawHash.Hash[9] = '\0';
  local_58.RawHash.Hash[10] = '\0';
  local_58.RawHash.Hash[0xb] = '\0';
  local_58.RawHash.Hash[0xc] = '\0';
  local_58.RawHash.Hash[0xd] = '\0';
  local_58.RawHash.Hash[0xe] = '\0';
  local_58.RawHash.Hash[0xf] = '\0';
  local_58.RawHash.Hash[0x10] = '\0';
  local_58.RawHash.Hash[0x11] = '\0';
  local_58.RawHash.Hash[0x12] = '\0';
  local_58.RawHash.Hash[0x13] = '\0';
  local_58.RawHash.Hash[0x14] = '\0';
  local_58.RawHash.Hash[0x15] = '\0';
  local_58.RawHash.Hash[0x16] = '\0';
  local_58.RawHash.Hash[0x17] = '\0';
  local_58.RawHash.Hash[0x18] = '\0';
  local_58.RawHash.Hash[0x19] = '\0';
  local_58.RawHash.Hash[0x1a] = '\0';
  local_58.RawHash.Hash[0x1b] = '\0';
  local_58.RawHash.Hash[0x1c] = '\0';
  local_58.RawHash.Hash[0x1d] = '\0';
  local_58.RawHash.Hash[0x1e] = '\0';
  local_58.RawHash.Hash[0x1f] = '\0';
  if (this->SourceArchive == (FArchive *)0x0) {
    if (this->SourceBuffer == (FCompressedBuffer *)0x0) {
      return 0;
    }
    bVar1 = UE::CompressedBuffer::Private::TryReadHeader
                      (&this->Context,&this->SourceBuffer->CompressedData,&local_58,&local_68);
  }
  else {
    bVar1 = UE::CompressedBuffer::Private::TryReadHeader
                      (&this->Context,this->SourceArchive,&local_58,&local_68);
  }
  if (bVar1 == false) {
    return 0;
  }
  return local_58.TotalRawSize;
}

// ResetBuffers @ 1414aeb50

void __thiscall FCompressedBufferReader::ResetBuffers(FCompressedBufferReader *this)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_20;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TStack_18;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_10;
  
  if ((this->SourceArchive != (FArchive *)0x0) &&
     ((this->Context).HeaderOffset != 0xffffffffffffffff)) {
    (**(code **)(*(longlong *)this->SourceArchive + 0x1b8))();
  }
  uVar5 = 0;
  uVar4 = 0xffffffffffffffff;
  uVar6 = 0;
  local_10.Owner = (FBufferOwner *)0x0;
  local_20.Owner = (FBufferOwner *)0x0;
  TStack_18.Owner = (FBufferOwner *)0x0;
  (this->Context).HeaderOffset = 0xffffffffffffffff;
  (this->Context).HeaderSize = 0;
  (this->Context).HeaderCrc32 = 0;
  (this->Context).RawBlockIndex = 0xffffffff;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
            (&(this->Context).Header.Owner,&local_20);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
            (&(this->Context).RawBlock.Owner,&TStack_18);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
            (&(this->Context).CompressedBlock.Owner,&local_10);
  TVar3.Owner = local_10.Owner;
  if (local_10.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &(local_10.Owner)->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)((local_10.Owner)->_padding_ + 0x10))(local_10.Owner);
      (TVar3.Owner)->Data = (void *)0x0;
      (TVar3.Owner)->Size = 0;
      LOCK();
      paVar1 = &(TVar3.Owner)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)(TVar3.Owner)->_padding_)(TVar3.Owner,1,in_R8,in_R9,uVar4,uVar5,uVar6);
      }
    }
  }
  TVar3.Owner = TStack_18.Owner;
  if (TStack_18.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &(TStack_18.Owner)->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)((TStack_18.Owner)->_padding_ + 0x10))(TStack_18.Owner);
      (TVar3.Owner)->Data = (void *)0x0;
      (TVar3.Owner)->Size = 0;
      LOCK();
      paVar1 = &(TVar3.Owner)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)(TVar3.Owner)->_padding_)(TVar3.Owner,1);
      }
    }
  }
  TVar3.Owner = local_20.Owner;
  if (local_20.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &(local_20.Owner)->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)((local_20.Owner)->_padding_ + 0x10))(local_20.Owner);
      (TVar3.Owner)->Data = (void *)0x0;
      (TVar3.Owner)->Size = 0;
      LOCK();
      paVar1 = &(TVar3.Owner)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)(TVar3.Owner)->_padding_)(TVar3.Owner,1);
      }
    }
  }
  return;
}

// ResetSource @ 1414aed00

void __thiscall FCompressedBufferReader::ResetSource(FCompressedBufferReader *this)

{
  (this->Context).HeaderOffset = 0xffffffffffffffff;
  this->SourceArchive = (FArchive *)0x0;
  this->SourceBuffer = (FCompressedBuffer *)0x0;
  return;
}

// SetSource @ 1414b0810

void __thiscall FCompressedBufferReader::SetSource(FCompressedBufferReader *this,FArchive *param_1)

{
  if (this->SourceArchive != param_1) {
    (this->Context).HeaderOffset = 0xffffffffffffffff;
    this->SourceArchive = param_1;
    this->SourceBuffer = (FCompressedBuffer *)0x0;
  }
  return;
}

// SetSource @ 1414b0830

void __thiscall
FCompressedBufferReader::SetSource(FCompressedBufferReader *this,FCompressedBuffer *param_1)

{
  if (this->SourceBuffer != param_1) {
    (this->Context).HeaderOffset = 0xffffffffffffffff;
    this->SourceArchive = (FArchive *)0x0;
    this->SourceBuffer = param_1;
  }
  return;
}

// TryDecompressTo @ 1414b6190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FCompressedBufferReader::TryDecompressTo
          (FCompressedBufferReader *this,TMemoryView<void> *param_1,ulong64 param_2,
          ECompressedBufferDecompressFlags param_3)

{
  bool bVar1;
  char cVar2;
  FOodleDecoder FVar3;
  FLZ4Decoder *pFVar4;
  undefined ***pppuVar5;
  undefined1 auStack_108 [32];
  TMemoryView<void_const_> *local_e8;
  ulong64 local_e0;
  undefined4 *local_d8;
  ECompressedBufferDecompressFlags local_d0;
  TMemoryView<void_const_> local_c8;
  undefined **local_b8;
  FCompressedBuffer *local_b0;
  undefined **local_a8;
  FArchive *local_a0;
  ulong64 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FHeader local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_78.Magic = 0xb7756362;
  local_78.Crc32 = 0;
  local_78.Method = None;
  local_78.Compressor = '\0';
  local_78.CompressionLevel = '\0';
  local_78.BlockSizeExponent = '\0';
  local_78.BlockCount = 0;
  local_78.TotalRawSize = 0;
  local_78.TotalCompressedSize = 0;
  local_c8.Data = (void *)0x0;
  local_c8.Size = 0;
  local_78.RawHash.Hash[0] = '\0';
  local_78.RawHash.Hash[1] = '\0';
  local_78.RawHash.Hash[2] = '\0';
  local_78.RawHash.Hash[3] = '\0';
  local_78.RawHash.Hash[4] = '\0';
  local_78.RawHash.Hash[5] = '\0';
  local_78.RawHash.Hash[6] = '\0';
  local_78.RawHash.Hash[7] = '\0';
  local_78.RawHash.Hash[8] = '\0';
  local_78.RawHash.Hash[9] = '\0';
  local_78.RawHash.Hash[10] = '\0';
  local_78.RawHash.Hash[0xb] = '\0';
  local_78.RawHash.Hash[0xc] = '\0';
  local_78.RawHash.Hash[0xd] = '\0';
  local_78.RawHash.Hash[0xe] = '\0';
  local_78.RawHash.Hash[0xf] = '\0';
  local_78.RawHash.Hash[0x10] = '\0';
  local_78.RawHash.Hash[0x11] = '\0';
  local_78.RawHash.Hash[0x12] = '\0';
  local_78.RawHash.Hash[0x13] = '\0';
  local_78.RawHash.Hash[0x14] = '\0';
  local_78.RawHash.Hash[0x15] = '\0';
  local_78.RawHash.Hash[0x16] = '\0';
  local_78.RawHash.Hash[0x17] = '\0';
  local_78.RawHash.Hash[0x18] = '\0';
  local_78.RawHash.Hash[0x19] = '\0';
  local_78.RawHash.Hash[0x1a] = '\0';
  local_78.RawHash.Hash[0x1b] = '\0';
  local_78.RawHash.Hash[0x1c] = '\0';
  local_78.RawHash.Hash[0x1d] = '\0';
  local_78.RawHash.Hash[0x1e] = '\0';
  local_78.RawHash.Hash[0x1f] = '\0';
  if (this->SourceArchive == (FArchive *)0x0) {
    if (this->SourceBuffer == (FCompressedBuffer *)0x0) {
      return false;
    }
    bVar1 = UE::CompressedBuffer::Private::TryReadHeader
                      (&this->Context,&this->SourceBuffer->CompressedData,&local_78,&local_c8);
  }
  else {
    bVar1 = UE::CompressedBuffer::Private::TryReadHeader
                      (&this->Context,this->SourceArchive,&local_78,&local_c8);
  }
  if (((bVar1 != false) && (param_2 <= local_78.TotalRawSize)) &&
     (param_1->Size <= local_78.TotalRawSize - param_2)) {
    if (local_78.Method == None) {
      FVar3 = (FOodleDecoder)::None;
      pFVar4 = (FLZ4Decoder *)&::None;
    }
    else if (local_78.Method == Oodle) {
      FVar3 = Oodle;
      pFVar4 = (FLZ4Decoder *)&Oodle;
    }
    else {
      if (local_78.Method != LZ4) {
        return false;
      }
      pFVar4 = &LZ4;
      FVar3 = (FOodleDecoder)LZ4;
    }
    if (this->SourceArchive == (FArchive *)0x0) {
      local_b8 = &___7FBufferDecoderSource_Private_CompressedBuffer_UE__6B_;
      pppuVar5 = &local_b8;
      local_b0 = this->SourceBuffer;
    }
    else {
      local_98 = (this->Context).HeaderOffset;
      local_a8 = &___7FArchiveDecoderSource_Private_CompressedBuffer_UE__6B_;
      pppuVar5 = &local_a8;
      local_a0 = this->SourceArchive;
    }
    local_88 = *(undefined4 *)&param_1->Data;
    uStack_84 = *(undefined4 *)((longlong)&param_1->Data + 4);
    uStack_80 = (undefined4)param_1->Size;
    uStack_7c = *(undefined4 *)((longlong)&param_1->Size + 4);
    local_d8 = &local_88;
    local_e8 = &local_c8;
    local_e0 = param_2;
    local_d0 = param_3;
    cVar2 = (**(code **)((longlong)FVar3 + 8))(pFVar4,&this->Context,pppuVar5,&local_78);
    return cVar2 != '\0';
  }
  return false;
}

// TryGetCompressParameters @ 1414b6850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FCompressedBufferReader::TryGetCompressParameters
          (FCompressedBufferReader *this,ECompressor *param_1,ECompressionLevel *param_2,
          ulong64 *param_3)

{
  bool bVar1;
  undefined1 auStack_a8 [32];
  TMemoryView<void_const_> local_88;
  FHeader local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78.Magic = 0xb7756362;
  local_78.Crc32 = 0;
  local_78.Method = None;
  local_78.Compressor = '\0';
  local_78.CompressionLevel = '\0';
  local_78.BlockSizeExponent = '\0';
  local_78.BlockCount = 0;
  local_78.TotalRawSize = 0;
  local_78.TotalCompressedSize = 0;
  local_88.Data = (void *)0x0;
  local_88.Size = 0;
  local_78.RawHash.Hash[0] = '\0';
  local_78.RawHash.Hash[1] = '\0';
  local_78.RawHash.Hash[2] = '\0';
  local_78.RawHash.Hash[3] = '\0';
  local_78.RawHash.Hash[4] = '\0';
  local_78.RawHash.Hash[5] = '\0';
  local_78.RawHash.Hash[6] = '\0';
  local_78.RawHash.Hash[7] = '\0';
  local_78.RawHash.Hash[8] = '\0';
  local_78.RawHash.Hash[9] = '\0';
  local_78.RawHash.Hash[10] = '\0';
  local_78.RawHash.Hash[0xb] = '\0';
  local_78.RawHash.Hash[0xc] = '\0';
  local_78.RawHash.Hash[0xd] = '\0';
  local_78.RawHash.Hash[0xe] = '\0';
  local_78.RawHash.Hash[0xf] = '\0';
  local_78.RawHash.Hash[0x10] = '\0';
  local_78.RawHash.Hash[0x11] = '\0';
  local_78.RawHash.Hash[0x12] = '\0';
  local_78.RawHash.Hash[0x13] = '\0';
  local_78.RawHash.Hash[0x14] = '\0';
  local_78.RawHash.Hash[0x15] = '\0';
  local_78.RawHash.Hash[0x16] = '\0';
  local_78.RawHash.Hash[0x17] = '\0';
  local_78.RawHash.Hash[0x18] = '\0';
  local_78.RawHash.Hash[0x19] = '\0';
  local_78.RawHash.Hash[0x1a] = '\0';
  local_78.RawHash.Hash[0x1b] = '\0';
  local_78.RawHash.Hash[0x1c] = '\0';
  local_78.RawHash.Hash[0x1d] = '\0';
  local_78.RawHash.Hash[0x1e] = '\0';
  local_78.RawHash.Hash[0x1f] = '\0';
  if (this->SourceArchive == (FArchive *)0x0) {
    if (this->SourceBuffer == (FCompressedBuffer *)0x0) {
      return false;
    }
    bVar1 = UE::CompressedBuffer::Private::TryReadHeader
                      (&this->Context,&this->SourceBuffer->CompressedData,&local_78,&local_88);
  }
  else {
    bVar1 = UE::CompressedBuffer::Private::TryReadHeader
                      (&this->Context,this->SourceArchive,&local_78,&local_88);
  }
  if (bVar1 != false) {
    if (local_78.Method == None) {
      *param_1 = NotSet;
      *param_2 = None;
      *param_3 = 0;
      return true;
    }
    if (local_78.Method == Oodle) {
      *param_1 = local_78.Compressor;
      *param_2 = local_78.CompressionLevel;
      *param_3 = 1L << (local_78.BlockSizeExponent & 0x3f);
      return true;
    }
  }
  return false;
}

// TryReadHeader @ 1414b73e0

bool __thiscall
FCompressedBufferReader::TryReadHeader
          (FCompressedBufferReader *this,FHeader *param_1,TMemoryView<void_const_> *param_2)

{
  bool bVar1;
  
  if (this->SourceArchive != (FArchive *)0x0) {
    bVar1 = UE::CompressedBuffer::Private::TryReadHeader
                      (&this->Context,this->SourceArchive,param_1,param_2);
    return bVar1;
  }
  if (this->SourceBuffer != (FCompressedBuffer *)0x0) {
    bVar1 = UE::CompressedBuffer::Private::TryReadHeader
                      (&this->Context,&this->SourceBuffer->CompressedData,param_1,param_2);
    return bVar1;
  }
  return false;
}

