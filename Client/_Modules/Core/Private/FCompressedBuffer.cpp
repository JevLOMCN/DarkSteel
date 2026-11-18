// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 18

// Compress @ 14148e1b0

FCompressedBuffer * __cdecl
FCompressedBuffer::Compress(FCompressedBuffer *__return_storage_ptr__,FCompositeBuffer *param_1)

{
  Compress(__return_storage_ptr__,param_1,Mermaid,VeryFast,0);
  return __return_storage_ptr__;
}

// Compress @ 14148e1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCompressedBuffer * __cdecl
FCompressedBuffer::Compress
          (FCompressedBuffer *__return_storage_ptr__,FCompositeBuffer *param_1,ECompressor param_2,
          ECompressionLevel param_3,ulong64 param_4)

{
  int *piVar1;
  int iVar2;
  FUniqueBuffer FVar3;
  FCompositeBuffer *pFVar4;
  FBlake3Hash *pFVar5;
  FSharedBuffer FVar6;
  ForElementType<FSharedBuffer> FVar7;
  ForElementType<FSharedBuffer> FVar8;
  void *pvVar9;
  ForElementType<FSharedBuffer> FVar10;
  ulong64 uVar11;
  undefined1 auStackY_108 [32];
  FUniqueBuffer local_c8 [2];
  TMemoryView<void> local_b8;
  FHeader local_a8;
  FCompressedBuffer local_68;
  FBlake3Hash local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_108;
  piVar1 = &(__return_storage_ptr__->CompressedData).Segments.ArrayMax;
  pvVar9 = (void *)0x0;
  (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  (__return_storage_ptr__->CompressedData).Segments.ArrayNum = 0;
  *piVar1 = 1;
  if (param_3 != None) {
    local_b8.Size = CONCAT71(CONCAT61(local_b8.Size._2_6_,param_3),param_2);
    local_b8.Data = &___7FOodleEncoder_Private_CompressedBuffer_UE__6B_;
    uVar11 = 0x40000;
    if (param_4 != 0) {
      uVar11 = param_4;
    }
    pFVar4 = UE::CompressedBuffer::Private::FBlockEncoder::Compress
                       ((FBlockEncoder *)&local_b8,(FCompositeBuffer *)&local_50,param_1,uVar11);
    FCompositeBuffer::operator=(&__return_storage_ptr__->CompressedData,pFVar4);
    FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)&local_50);
  }
  if ((__return_storage_ptr__->CompressedData).Segments.ArrayNum == 0) {
    local_a8.Magic = 0xb7756362;
    local_a8.Crc32 = 0;
    local_a8.Compressor = '\0';
    local_a8.CompressionLevel = '\0';
    local_a8.BlockSizeExponent = '\0';
    local_a8.Method = None;
    local_a8.BlockCount = 1;
    local_a8.TotalRawSize = FCompositeBuffer::GetSize(param_1);
    local_a8.TotalCompressedSize = local_a8.TotalRawSize + 0x40;
    pFVar5 = FBlake3::HashBuffer(&local_50,param_1);
    local_a8.RawHash.Hash._0_8_ = *(undefined8 *)pFVar5->Hash;
    local_a8.RawHash.Hash._8_8_ = *(undefined8 *)(pFVar5->Hash + 8);
    local_a8.RawHash.Hash._16_8_ = *(undefined8 *)(pFVar5->Hash + 0x10);
    local_a8.RawHash.Hash._24_8_ = *(undefined8 *)(pFVar5->Hash + 0x18);
    FUniqueBuffer::Alloc((ulong64)local_c8);
    FVar3.Owner.Owner = local_c8[0].Owner.Owner;
    if (local_c8[0].Owner.Owner == (FBufferOwner *)0x0) {
      uVar11 = 0;
    }
    else {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_c8[0].Owner.Owner + 0x18) >>
           0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_c8[0].Owner.Owner + 8))(local_c8[0].Owner.Owner);
      }
      uVar11 = *(ulong64 *)((longlong)FVar3.Owner.Owner + 0x10);
      if (local_c8[0].Owner.Owner != (FBufferOwner *)0x0) {
        if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_c8[0].Owner.Owner + 0x18) >>
             0x3c & 4) == 0) {
          (**(code **)(*(longlong *)local_c8[0].Owner.Owner + 8))(local_c8[0].Owner.Owner);
        }
        pvVar9 = *(void **)((longlong)local_c8[0].Owner.Owner + 8);
      }
    }
    local_b8.Data = pvVar9;
    local_b8.Size = uVar11;
    UE::CompressedBuffer::Private::FHeader::Write(&local_a8,&local_b8);
    pFVar4 = FCompositeBuffer::MakeOwned(param_1,(FCompositeBuffer *)&local_50);
    FVar6 = FUniqueBuffer::MoveToShared(local_c8);
    FCompositeBuffer::FCompositeBuffer<FSharedBuffer,FCompositeBuffer,0>
              (&local_68.CompressedData,(FSharedBuffer *)FVar6.Owner.Owner,pFVar4);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_b8);
    FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)&local_50);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_c8[0].Owner);
    if (__return_storage_ptr__ != &local_68) {
      FVar10 = (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FSharedBuffer>)__return_storage_ptr__;
      if (FVar10 != (ForElementType<FSharedBuffer>)0x0) {
        FVar7 = FVar10;
      }
      DestructItems<FSharedBuffer,int>
                ((FSharedBuffer *)FVar7,(__return_storage_ptr__->CompressedData).Segments.ArrayNum);
      iVar2 = *piVar1;
      FVar10 = (ForElementType<FSharedBuffer>)&local_68;
      if (local_68.CompressedData.Segments.AllocatorInstance.SecondaryData !=
          (ForElementType<FSharedBuffer>)0x0) {
        FVar10 = local_68.CompressedData.Segments.AllocatorInstance.SecondaryData;
      }
      (__return_storage_ptr__->CompressedData).Segments.ArrayNum =
           local_68.CompressedData.Segments.ArrayNum;
      if ((local_68.CompressedData.Segments.ArrayNum == 0) && (iVar2 == 0)) {
        *piVar1 = 1;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                  (8,8,local_68.CompressedData.Segments.ArrayNum,iVar2,
                   (ForElementType<FSharedBuffer> *)__return_storage_ptr__,
                   local_68.CompressedData.Segments.ArrayNum,piVar1);
        FVar7 = (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData;
        FVar8 = (ForElementType<FSharedBuffer>)__return_storage_ptr__;
        if (FVar7 != (ForElementType<FSharedBuffer>)0x0) {
          FVar8 = FVar7;
        }
        ConstructItems<FSharedBuffer,FSharedBuffer,int>
                  ((void *)FVar8,(FSharedBuffer *)FVar10,local_68.CompressedData.Segments.ArrayNum);
      }
    }
    FCompositeBuffer::~FCompositeBuffer(&local_68.CompressedData);
  }
  return __return_storage_ptr__;
}

// Compress @ 14148e440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCompressedBuffer * __cdecl
FCompressedBuffer::Compress(FCompressedBuffer *__return_storage_ptr__,FSharedBuffer *param_1)

{
  FCompositeBuffer *pFVar1;
  undefined1 auStackY_58 [32];
  FCompositeBuffer local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_58;
  pFVar1 = FCompositeBuffer::FCompositeBuffer<FSharedBuffer_const_&,0>(&local_28,param_1);
  Compress(__return_storage_ptr__,pFVar1,Mermaid,VeryFast,0);
  FCompositeBuffer::~FCompositeBuffer(&local_28);
  return __return_storage_ptr__;
}

// Compress @ 14148e4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCompressedBuffer * __cdecl
FCompressedBuffer::Compress
          (FCompressedBuffer *__return_storage_ptr__,FSharedBuffer *param_1,ECompressor param_2,
          ECompressionLevel param_3,ulong64 param_4)

{
  FCompositeBuffer *pFVar1;
  undefined1 auStackY_78 [32];
  FCompositeBuffer local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_78;
  pFVar1 = FCompositeBuffer::FCompositeBuffer<FSharedBuffer_const_&,0>(&local_48,param_1);
  Compress(__return_storage_ptr__,pFVar1,param_2,param_3,param_4);
  FCompositeBuffer::~FCompositeBuffer(&local_48);
  return __return_storage_ptr__;
}

// Decompress @ 14148ffa0

FSharedBuffer __thiscall FCompressedBuffer::Decompress(FCompressedBuffer *this)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FUniqueBuffer FVar3;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> in_RDX;
  FCompressedBufferReader local_48;
  
  if ((this->CompressedData).Segments.ArrayNum != 0) {
    local_48.Context.HeaderSize = 0;
    local_48.Context.HeaderCrc32 = 0;
    local_48.Context.RawBlockIndex = 0xffffffff;
    local_48.Context.Header.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    local_48.Context.RawBlock.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    local_48.Context.CompressedBlock.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    local_48.Context.HeaderOffset = 0xffffffffffffffff;
    local_48.SourceArchive = (FArchive *)0x0;
    local_48.SourceBuffer = this;
    FCompressedBufferReader::Decompress(&local_48,(ulong64)in_RDX.Owner,0);
    FVar3.Owner.Owner = local_48.Context.CompressedBlock.Owner.Owner;
    if (local_48.Context.CompressedBlock.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)
               ((longlong)local_48.Context.CompressedBlock.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_48.Context.CompressedBlock.Owner.Owner + 0x10))
                  (local_48.Context.CompressedBlock.Owner.Owner);
        *(void **)((longlong)FVar3.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar3.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar3.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar3.Owner.Owner)(FVar3.Owner.Owner,1);
        }
      }
    }
    FVar3.Owner.Owner = local_48.Context.RawBlock.Owner.Owner;
    if (local_48.Context.RawBlock.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Context.RawBlock.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_48.Context.RawBlock.Owner.Owner + 0x10))
                  (local_48.Context.RawBlock.Owner.Owner);
        *(void **)((longlong)FVar3.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar3.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar3.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar3.Owner.Owner)(FVar3.Owner.Owner,1);
        }
      }
    }
    FVar3.Owner.Owner = local_48.Context.Header.Owner.Owner;
    if (local_48.Context.Header.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_48.Context.Header.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_48.Context.Header.Owner.Owner + 0x10))
                  (local_48.Context.Header.Owner.Owner);
        *(void **)((longlong)FVar3.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar3.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar3.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar3.Owner.Owner)(FVar3.Owner.Owner,1);
        }
      }
    }
    return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
  }
  (in_RDX.Owner)->_padding_ = 0;
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)in_RDX.Owner;
}

// DecompressToComposite @ 141490540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCompositeBuffer * __thiscall
FCompressedBuffer::DecompressToComposite
          (FCompressedBuffer *this,FCompositeBuffer *__return_storage_ptr__)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FUniqueBuffer FVar3;
  bool bVar4;
  FOodleDecoder FVar5;
  FLZ4Decoder *pFVar6;
  undefined ***pppuVar7;
  undefined1 auStack_128 [32];
  FHeader *local_108;
  TMemoryView<void_const_> *local_100;
  undefined8 local_f8;
  ulong64 local_f0;
  TMemoryView<void_const_> local_e8;
  longlong local_d8;
  FCompressedBuffer *local_d0;
  FDecoderContext local_c8;
  undefined **local_98;
  FCompressedBuffer *local_90;
  undefined **local_88;
  longlong local_80;
  ulong64 local_78;
  FHeader local_68;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  if ((this->CompressedData).Segments.ArrayNum == 0) {
    (__return_storage_ptr__->Segments).AllocatorInstance.SecondaryData =
         (ForElementType<FSharedBuffer>)0x0;
    (__return_storage_ptr__->Segments).ArrayNum = 0;
    (__return_storage_ptr__->Segments).ArrayMax = 1;
    return __return_storage_ptr__;
  }
  local_c8.HeaderOffset = 0xffffffffffffffff;
  local_c8.HeaderSize = 0;
  local_c8.HeaderCrc32 = 0;
  local_c8.RawBlockIndex = 0xffffffff;
  local_c8.CompressedBlock.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_d8 = 0;
  local_68.Magic = 0xb7756362;
  local_68.Crc32 = 0;
  local_68.Method = None;
  local_68.Compressor = '\0';
  local_68.CompressionLevel = '\0';
  local_68.BlockSizeExponent = '\0';
  local_68.BlockCount = 0;
  local_68.TotalRawSize = 0;
  local_68.TotalCompressedSize = 0;
  local_e8.Data = (void *)0x0;
  local_e8.Size = 0;
  local_c8.Header.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_c8.RawBlock.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_68.RawHash.Hash[0] = '\0';
  local_68.RawHash.Hash[1] = '\0';
  local_68.RawHash.Hash[2] = '\0';
  local_68.RawHash.Hash[3] = '\0';
  local_68.RawHash.Hash[4] = '\0';
  local_68.RawHash.Hash[5] = '\0';
  local_68.RawHash.Hash[6] = '\0';
  local_68.RawHash.Hash[7] = '\0';
  local_68.RawHash.Hash[8] = '\0';
  local_68.RawHash.Hash[9] = '\0';
  local_68.RawHash.Hash[10] = '\0';
  local_68.RawHash.Hash[0xb] = '\0';
  local_68.RawHash.Hash[0xc] = '\0';
  local_68.RawHash.Hash[0xd] = '\0';
  local_68.RawHash.Hash[0xe] = '\0';
  local_68.RawHash.Hash[0xf] = '\0';
  local_68.RawHash.Hash[0x10] = '\0';
  local_68.RawHash.Hash[0x11] = '\0';
  local_68.RawHash.Hash[0x12] = '\0';
  local_68.RawHash.Hash[0x13] = '\0';
  local_68.RawHash.Hash[0x14] = '\0';
  local_68.RawHash.Hash[0x15] = '\0';
  local_68.RawHash.Hash[0x16] = '\0';
  local_68.RawHash.Hash[0x17] = '\0';
  local_68.RawHash.Hash[0x18] = '\0';
  local_68.RawHash.Hash[0x19] = '\0';
  local_68.RawHash.Hash[0x1a] = '\0';
  local_68.RawHash.Hash[0x1b] = '\0';
  local_68.RawHash.Hash[0x1c] = '\0';
  local_68.RawHash.Hash[0x1d] = '\0';
  local_68.RawHash.Hash[0x1e] = '\0';
  local_68.RawHash.Hash[0x1f] = '\0';
  local_d0 = this;
  if ((this == (FCompressedBuffer *)0x0) ||
     (bVar4 = UE::CompressedBuffer::Private::TryReadHeader
                        (&local_c8,&this->CompressedData,&local_68,&local_e8), !bVar4)) {
LAB_1414906bd:
    (__return_storage_ptr__->Segments).AllocatorInstance.SecondaryData =
         (ForElementType<FSharedBuffer>)0x0;
    (__return_storage_ptr__->Segments).ArrayNum = 0;
    (__return_storage_ptr__->Segments).ArrayMax = 1;
  }
  else {
    if (local_68.Method == None) {
      FVar5 = (FOodleDecoder)::None;
      pFVar6 = (FLZ4Decoder *)&::None;
    }
    else if (local_68.Method == Oodle) {
      FVar5 = Oodle;
      pFVar6 = (FLZ4Decoder *)&Oodle;
    }
    else {
      if (local_68.Method != LZ4) goto LAB_1414906bd;
      pFVar6 = &LZ4;
      FVar5 = (FOodleDecoder)LZ4;
    }
    if (local_d8 == 0) {
      local_98 = &___7FBufferDecoderSource_Private_CompressedBuffer_UE__6B_;
      pppuVar7 = &local_98;
      local_90 = local_d0;
    }
    else {
      local_80 = local_d8;
      pppuVar7 = &local_88;
      local_78 = local_c8.HeaderOffset;
      local_88 = &___7FArchiveDecoderSource_Private_CompressedBuffer_UE__6B_;
    }
    local_f0 = local_68.TotalRawSize;
    local_100 = &local_e8;
    local_f8 = 0;
    local_108 = &local_68;
    (**(code **)((longlong)FVar5 + 0x10))(pFVar6,__return_storage_ptr__,&local_c8,pppuVar7);
  }
  FVar3.Owner.Owner = local_c8.CompressedBlock.Owner.Owner;
  if (local_c8.CompressedBlock.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_c8.CompressedBlock.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_c8.CompressedBlock.Owner.Owner + 0x10))
                (local_c8.CompressedBlock.Owner.Owner);
      *(void **)((longlong)FVar3.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar3.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar3.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar3.Owner.Owner)(FVar3.Owner.Owner,1);
      }
    }
  }
  FVar3.Owner.Owner = local_c8.RawBlock.Owner.Owner;
  if (local_c8.RawBlock.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_c8.RawBlock.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_c8.RawBlock.Owner.Owner + 0x10))
                (local_c8.RawBlock.Owner.Owner);
      *(void **)((longlong)FVar3.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar3.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar3.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar3.Owner.Owner)(FVar3.Owner.Owner,1);
      }
    }
  }
  FVar3.Owner.Owner = local_c8.Header.Owner.Owner;
  if (local_c8.Header.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_c8.Header.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_c8.Header.Owner.Owner + 0x10))(local_c8.Header.Owner.Owner);
      *(void **)((longlong)FVar3.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar3.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar3.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar3.Owner.Owner)(FVar3.Owner.Owner,1);
      }
    }
  }
  return __return_storage_ptr__;
}

// FromCompressed @ 141496910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCompressedBuffer * __cdecl
FCompressedBuffer::FromCompressed
          (FCompressedBuffer *__return_storage_ptr__,FCompositeBuffer *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  ForElementType<FSharedBuffer> FVar5;
  ForElementType<FSharedBuffer> FVar6;
  ForElementType<FSharedBuffer> FVar7;
  undefined1 auStackY_c8 [32];
  FCompressedBuffer local_80;
  FCompositeBuffer local_68;
  FCompositeBuffer local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  piVar1 = &(__return_storage_ptr__->CompressedData).Segments.ArrayMax;
  (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  (__return_storage_ptr__->CompressedData).Segments.ArrayNum = 0;
  *piVar1 = 1;
  bVar4 = UE::CompressedBuffer::Private::FHeader::IsValid(param_1);
  if (!bVar4) {
    local_68.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
    FVar5 = (ForElementType<FSharedBuffer>)&local_68;
    local_68.Segments.ArrayNum = 0;
    local_68.Segments.ArrayMax = 1;
  }
  else {
    FVar5 = (ForElementType<FSharedBuffer>)
            FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>(&local_50,param_1);
  }
  local_80.CompressedData.Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  iVar2 = *(int *)((longlong)FVar5 + 0x10);
  FVar6 = *(ForElementType<FSharedBuffer> *)((longlong)FVar5 + 8);
  if (*(ForElementType<FSharedBuffer> *)((longlong)FVar5 + 8) == (ForElementType<FSharedBuffer>)0x0)
  {
    FVar6 = FVar5;
  }
  local_80.CompressedData.Segments.ArrayNum = iVar2;
  if (iVar2 == 0) {
    local_80.CompressedData.Segments.ArrayMax = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
              (8,8,iVar2,0,(ForElementType<FSharedBuffer> *)&local_80,iVar2,
               &local_80.CompressedData.Segments.ArrayMax);
    FVar5 = (ForElementType<FSharedBuffer>)&local_80;
    if (local_80.CompressedData.Segments.AllocatorInstance.SecondaryData !=
        (ForElementType<FSharedBuffer>)0x0) {
      FVar5 = local_80.CompressedData.Segments.AllocatorInstance.SecondaryData;
    }
    ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar5,(FSharedBuffer *)FVar6,iVar2);
  }
  if (!bVar4) {
    FCompositeBuffer::~FCompositeBuffer(&local_68);
  }
  else {
    FCompositeBuffer::~FCompositeBuffer(&local_50);
  }
  if (__return_storage_ptr__ != &local_80) {
    FVar5 = (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData;
    FVar6 = (ForElementType<FSharedBuffer>)__return_storage_ptr__;
    if (FVar5 != (ForElementType<FSharedBuffer>)0x0) {
      FVar6 = FVar5;
    }
    DestructItems<FSharedBuffer,int>
              ((FSharedBuffer *)FVar6,(__return_storage_ptr__->CompressedData).Segments.ArrayNum);
    iVar3 = local_80.CompressedData.Segments.ArrayNum;
    iVar2 = *piVar1;
    FVar5 = (ForElementType<FSharedBuffer>)&local_80;
    if (local_80.CompressedData.Segments.AllocatorInstance.SecondaryData !=
        (ForElementType<FSharedBuffer>)0x0) {
      FVar5 = local_80.CompressedData.Segments.AllocatorInstance.SecondaryData;
    }
    (__return_storage_ptr__->CompressedData).Segments.ArrayNum =
         local_80.CompressedData.Segments.ArrayNum;
    if ((local_80.CompressedData.Segments.ArrayNum == 0) && (iVar2 == 0)) {
      *piVar1 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                (8,8,local_80.CompressedData.Segments.ArrayNum,iVar2,
                 (ForElementType<FSharedBuffer> *)__return_storage_ptr__,
                 local_80.CompressedData.Segments.ArrayNum,piVar1);
      FVar6 = (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FSharedBuffer>)__return_storage_ptr__;
      if (FVar6 != (ForElementType<FSharedBuffer>)0x0) {
        FVar7 = FVar6;
      }
      ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar7,(FSharedBuffer *)FVar5,iVar3);
    }
  }
  FCompositeBuffer::~FCompositeBuffer(&local_80.CompressedData);
  return __return_storage_ptr__;
}

// FromCompressed @ 141496ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCompressedBuffer * __cdecl
FCompressedBuffer::FromCompressed(FCompressedBuffer *__return_storage_ptr__,FSharedBuffer *param_1)

{
  FCompositeBuffer *pFVar1;
  undefined1 auStack_48 [32];
  FCompositeBuffer local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  (__return_storage_ptr__->CompressedData).Segments.ArrayNum = 0;
  (__return_storage_ptr__->CompressedData).Segments.ArrayMax = 1;
  pFVar1 = UE::CompressedBuffer::Private::ValidBufferOrEmpty<FSharedBuffer>(&local_28,param_1);
  FCompositeBuffer::operator=(&__return_storage_ptr__->CompressedData,pFVar1);
  FCompositeBuffer::~FCompositeBuffer(&local_28);
  return __return_storage_ptr__;
}

// FromCompressed @ 141496b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCompressedBuffer * __cdecl
FCompressedBuffer::FromCompressed
          (FCompressedBuffer *__return_storage_ptr__,FCompositeBuffer *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  FCompositeBuffer *pFVar4;
  ForElementType<FSharedBuffer> FVar5;
  ForElementType<FSharedBuffer> FVar6;
  ForElementType<FSharedBuffer> FVar7;
  int iVar8;
  FCompositeBuffer *pFVar9;
  int iVar10;
  undefined1 auStackY_c8 [32];
  FCompressedBuffer local_80;
  FCompositeBuffer local_68;
  FCompositeBuffer local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  piVar1 = &(__return_storage_ptr__->CompressedData).Segments.ArrayMax;
  (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  (__return_storage_ptr__->CompressedData).Segments.ArrayNum = 0;
  *piVar1 = 1;
  bVar3 = UE::CompressedBuffer::Private::FHeader::IsValid(param_1);
  iVar10 = 0;
  if (bVar3) {
    iVar8 = (param_1->Segments).ArrayNum;
    FVar5 = (param_1->Segments).AllocatorInstance.SecondaryData;
    local_68.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
    local_68.Segments.ArrayNum = iVar8;
    if (FVar5 != (ForElementType<FSharedBuffer>)0x0) {
      param_1 = (FCompositeBuffer *)FVar5;
    }
    if (iVar8 == 0) {
      local_68.Segments.ArrayMax = 1;
      pFVar4 = &local_68;
      iVar8 = 0;
      iVar10 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                (8,8,iVar8,0,(ForElementType<FSharedBuffer> *)&local_68,iVar8,
                 &local_68.Segments.ArrayMax);
      FVar5 = (ForElementType<FSharedBuffer>)&local_68;
      if (local_68.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0) {
        FVar5 = local_68.Segments.AllocatorInstance.SecondaryData;
      }
      ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar5,(FSharedBuffer *)param_1,iVar8);
      pFVar4 = &local_68;
      iVar8 = iVar10;
      iVar10 = 1;
    }
  }
  else {
    local_50.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
    pFVar4 = &local_50;
    local_50.Segments.ArrayNum = 0;
    local_50.Segments.ArrayMax = 1;
    iVar8 = 2;
  }
  pFVar9 = *(FCompositeBuffer **)&(pFVar4->Segments).AllocatorInstance.SecondaryData.field_0x0;
  local_80.CompressedData.Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  iVar2 = (pFVar4->Segments).ArrayNum;
  if (pFVar9 == (FCompositeBuffer *)0x0) {
    pFVar9 = pFVar4;
  }
  local_80.CompressedData.Segments.ArrayNum = iVar2;
  if (iVar2 == 0) {
    local_80.CompressedData.Segments.ArrayMax = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
              (8,8,iVar2,0,(ForElementType<FSharedBuffer> *)&local_80,iVar2,
               &local_80.CompressedData.Segments.ArrayMax);
    FVar5 = (ForElementType<FSharedBuffer>)&local_80;
    if (local_80.CompressedData.Segments.AllocatorInstance.SecondaryData !=
        (ForElementType<FSharedBuffer>)0x0) {
      FVar5 = local_80.CompressedData.Segments.AllocatorInstance.SecondaryData;
    }
    ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar5,(FSharedBuffer *)pFVar9,iVar2);
  }
  if (iVar8 != 0) {
    FCompositeBuffer::~FCompositeBuffer(&local_50);
  }
  if (iVar10 != 0) {
    FCompositeBuffer::~FCompositeBuffer(&local_68);
  }
  if (__return_storage_ptr__ != &local_80) {
    FVar5 = (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData;
    FVar6 = (ForElementType<FSharedBuffer>)__return_storage_ptr__;
    if (FVar5 != (ForElementType<FSharedBuffer>)0x0) {
      FVar6 = FVar5;
    }
    DestructItems<FSharedBuffer,int>
              ((FSharedBuffer *)FVar6,(__return_storage_ptr__->CompressedData).Segments.ArrayNum);
    iVar8 = local_80.CompressedData.Segments.ArrayNum;
    iVar10 = *piVar1;
    FVar5 = (ForElementType<FSharedBuffer>)&local_80;
    if (local_80.CompressedData.Segments.AllocatorInstance.SecondaryData !=
        (ForElementType<FSharedBuffer>)0x0) {
      FVar5 = local_80.CompressedData.Segments.AllocatorInstance.SecondaryData;
    }
    (__return_storage_ptr__->CompressedData).Segments.ArrayNum =
         local_80.CompressedData.Segments.ArrayNum;
    if ((local_80.CompressedData.Segments.ArrayNum == 0) && (iVar10 == 0)) {
      *piVar1 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                (8,8,local_80.CompressedData.Segments.ArrayNum,iVar10,
                 (ForElementType<FSharedBuffer> *)__return_storage_ptr__,
                 local_80.CompressedData.Segments.ArrayNum,piVar1);
      FVar6 = (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FSharedBuffer>)__return_storage_ptr__;
      if (FVar6 != (ForElementType<FSharedBuffer>)0x0) {
        FVar7 = FVar6;
      }
      ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar7,(FSharedBuffer *)FVar5,iVar8);
    }
  }
  FCompositeBuffer::~FCompositeBuffer(&local_80.CompressedData);
  return __return_storage_ptr__;
}

// FromCompressed @ 141496d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCompressedBuffer * __cdecl
FCompressedBuffer::FromCompressed(FCompressedBuffer *__return_storage_ptr__,FSharedBuffer *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FCompositeBuffer *pFVar5;
  ForElementType<FSharedBuffer> FVar6;
  ForElementType<FSharedBuffer> FVar7;
  ForElementType<FSharedBuffer> FVar8;
  undefined1 auStackY_d8 [32];
  FCompressedBuffer local_90;
  FCompositeBuffer local_78;
  FCompositeBuffer local_60;
  FCompositeBuffer local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  piVar1 = &(__return_storage_ptr__->CompressedData).Segments.ArrayMax;
  (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  (__return_storage_ptr__->CompressedData).Segments.ArrayNum = 0;
  *piVar1 = 1;
  pFVar5 = FCompositeBuffer::FCompositeBuffer<FSharedBuffer_const_&,0>(&local_60,param_1);
  bVar4 = UE::CompressedBuffer::Private::FHeader::IsValid(pFVar5);
  FCompositeBuffer::~FCompositeBuffer(&local_60);
  if (!bVar4) {
    local_78.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
    FVar6 = (ForElementType<FSharedBuffer>)&local_78;
    local_78.Segments.ArrayNum = 0;
    local_78.Segments.ArrayMax = 1;
  }
  else {
    FVar6 = (ForElementType<FSharedBuffer>)
            FCompositeBuffer::FCompositeBuffer<FSharedBuffer_const_&,0>(&local_48,param_1);
  }
  local_90.CompressedData.Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  iVar2 = *(int *)((longlong)FVar6 + 0x10);
  FVar7 = *(ForElementType<FSharedBuffer> *)((longlong)FVar6 + 8);
  if (*(ForElementType<FSharedBuffer> *)((longlong)FVar6 + 8) == (ForElementType<FSharedBuffer>)0x0)
  {
    FVar7 = FVar6;
  }
  local_90.CompressedData.Segments.ArrayNum = iVar2;
  if (iVar2 == 0) {
    local_90.CompressedData.Segments.ArrayMax = 1;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
              (8,8,iVar2,0,(ForElementType<FSharedBuffer> *)&local_90,iVar2,
               &local_90.CompressedData.Segments.ArrayMax);
    FVar6 = (ForElementType<FSharedBuffer>)&local_90;
    if (local_90.CompressedData.Segments.AllocatorInstance.SecondaryData !=
        (ForElementType<FSharedBuffer>)0x0) {
      FVar6 = local_90.CompressedData.Segments.AllocatorInstance.SecondaryData;
    }
    ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar6,(FSharedBuffer *)FVar7,iVar2);
  }
  if (!bVar4) {
    FCompositeBuffer::~FCompositeBuffer(&local_78);
  }
  else {
    FCompositeBuffer::~FCompositeBuffer(&local_48);
  }
  if (__return_storage_ptr__ != &local_90) {
    FVar6 = (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<FSharedBuffer>)__return_storage_ptr__;
    if (FVar6 != (ForElementType<FSharedBuffer>)0x0) {
      FVar7 = FVar6;
    }
    DestructItems<FSharedBuffer,int>
              ((FSharedBuffer *)FVar7,(__return_storage_ptr__->CompressedData).Segments.ArrayNum);
    iVar3 = local_90.CompressedData.Segments.ArrayNum;
    iVar2 = *piVar1;
    FVar6 = (ForElementType<FSharedBuffer>)&local_90;
    if (local_90.CompressedData.Segments.AllocatorInstance.SecondaryData !=
        (ForElementType<FSharedBuffer>)0x0) {
      FVar6 = local_90.CompressedData.Segments.AllocatorInstance.SecondaryData;
    }
    (__return_storage_ptr__->CompressedData).Segments.ArrayNum =
         local_90.CompressedData.Segments.ArrayNum;
    if ((local_90.CompressedData.Segments.ArrayNum == 0) && (iVar2 == 0)) {
      *piVar1 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                (8,8,local_90.CompressedData.Segments.ArrayNum,iVar2,
                 (ForElementType<FSharedBuffer> *)__return_storage_ptr__,
                 local_90.CompressedData.Segments.ArrayNum,piVar1);
      FVar7 = (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FSharedBuffer>)__return_storage_ptr__;
      if (FVar7 != (ForElementType<FSharedBuffer>)0x0) {
        FVar8 = FVar7;
      }
      ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar8,(FSharedBuffer *)FVar6,iVar3);
    }
  }
  FCompositeBuffer::~FCompositeBuffer(&local_90.CompressedData);
  return __return_storage_ptr__;
}

// GetCompressedSize @ 1414985a0

ulong64 __thiscall FCompressedBuffer::GetCompressedSize(FCompressedBuffer *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSharedBuffer> FVar3;
  longlong *plVar4;
  ulong64 uVar5;
  undefined1 auStackX_8 [8];
  
  uVar5 = 0;
  FVar3 = (this->CompressedData).Segments.AllocatorInstance.SecondaryData;
  piVar1 = &(this->CompressedData).Segments.ArrayNum;
  iVar2 = *piVar1;
  if (FVar3 != (ForElementType<FSharedBuffer>)0x0) {
    this = (FCompressedBuffer *)FVar3;
  }
  FVar3 = (ForElementType<FSharedBuffer>)((longlong)this + (longlong)iVar2 * 8);
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<FSharedBuffer_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if ((ForElementType<FSharedBuffer>)this == FVar3) break;
    plVar4 = *(longlong **)this;
    if (plVar4 == (longlong *)0x0) {
      this = (FCompressedBuffer *)((longlong)this + 8);
    }
    else {
      if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      uVar5 = uVar5 + plVar4[2];
      this = (FCompressedBuffer *)((longlong)this + 8);
    }
  }
  return uVar5;
}

// GetRawHash @ 141499bf0

FIoHash * __thiscall
FCompressedBuffer::GetRawHash(FCompressedBuffer *this,FIoHash *__return_storage_ptr__)

{
  ulong64 uVar1;
  TMemoryView<void> local_68 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  uStack_20._0_4_ = 0;
  uStack_20._4_4_ = 0;
  local_18._0_4_ = 0;
  if ((this->CompressedData).Segments.ArrayNum != 0) {
    local_48 = 0xb7756362;
    local_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_10 = 0;
    uVar1 = FCompositeBuffer::GetSize(&this->CompressedData);
    if (0x3f < uVar1) {
      local_68[0].Data = &local_48;
      local_68[0].Size = 0x40;
      FCompositeBuffer::CopyTo(&this->CompressedData,local_68,0);
    }
  }
  local_68[0].Data = (void *)CONCAT44(local_28._4_4_,(undefined4)local_28);
  local_68[0].Size = CONCAT44(uStack_20._4_4_,(undefined4)uStack_20);
  *(void **)__return_storage_ptr__->Hash = local_68[0].Data;
  *(ulong64 *)(__return_storage_ptr__->Hash + 8) = local_68[0].Size;
  *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = (undefined4)local_18;
  return __return_storage_ptr__;
}

// GetRawSize @ 141499d70

ulong64 __thiscall FCompressedBuffer::GetRawSize(FCompressedBuffer *this)

{
  ulong64 uVar1;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulong64 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  TMemoryView<void> local_18;
  
  local_48 = 0;
  if ((this->CompressedData).Segments.ArrayNum != 0) {
    local_58 = 0xb7756362;
    local_38 = 0;
    uStack_30 = 0;
    local_54 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uVar1 = FCompositeBuffer::GetSize(&this->CompressedData);
    if (0x3f < uVar1) {
      local_18.Data = &local_58;
      local_18.Size = 0x40;
      FCompositeBuffer::CopyTo(&this->CompressedData,&local_18,0);
      return local_48 >> 0x38 | (local_48 & 0xff000000000000) >> 0x28 |
             (local_48 & 0xff0000000000) >> 0x18 | (local_48 & 0xff00000000) >> 8 |
             (local_48 & 0xff000000) << 8 | (local_48 & 0xff0000) << 0x18 |
             (local_48 & 0xff00) << 0x28 | local_48 << 0x38;
    }
  }
  return local_48;
}

// Load @ 1414a24c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCompressedBuffer * __cdecl
FCompressedBuffer::Load(FCompressedBuffer *__return_storage_ptr__,FArchive *param_1)

{
  code *pcVar1;
  FUniqueBuffer FVar2;
  bool bVar3;
  FCompressedBuffer *pFVar4;
  FSharedBuffer FVar5;
  FCompositeBuffer *pFVar6;
  FUniqueBuffer FVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 *local_a0;
  FUniqueBuffer local_98;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_90;
  uint local_88;
  uint uStack_84;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  FCompositeBuffer local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (((param_1->field_0x28 & 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\CompressedBuffer.cpp"
                         ,0x436,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FCompressedBuffer *)(*pcVar1)();
    return pFVar4;
  }
  puVar10 = (undefined8 *)0x0;
  local_88 = 0xb7756362;
  uStack_84 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_88,0x40);
  uStack_84 = uStack_84 >> 0x18 | (uStack_84 & 0xff0000) >> 8 | (uStack_84 & 0xff00) << 8 |
              uStack_84 << 0x18;
  uStack_80 = CONCAT44(uStack_80._4_4_ >> 0x18 | (uStack_80._4_4_ & 0xff0000) >> 8 |
                       (uStack_80._4_4_ & 0xff00) << 8 | uStack_80._4_4_ << 0x18,
                       (undefined4)uStack_80);
  local_88 = local_88 >> 0x18 | (local_88 & 0xff0000) >> 8 | (local_88 & 0xff00) << 8 |
             local_88 << 0x18;
  (__return_storage_ptr__->CompressedData).Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  (__return_storage_ptr__->CompressedData).Segments.ArrayNum = 0;
  (__return_storage_ptr__->CompressedData).Segments.ArrayMax = 1;
  local_78 = local_78 >> 0x38 | (local_78 & 0xff000000000000) >> 0x28 |
             (local_78 & 0xff0000000000) >> 0x18 | (local_78 & 0xff00000000) >> 8 |
             (local_78 & 0xff000000) << 8 | (local_78 & 0xff0000) << 0x18 |
             (local_78 & 0xff00) << 0x28 | local_78 << 0x38;
  uStack_70 = uStack_70 >> 0x38 | (uStack_70 & 0xff000000000000) >> 0x28 |
              (uStack_70 & 0xff0000000000) >> 0x18 | (uStack_70 & 0xff00000000) >> 8 |
              (uStack_70 & 0xff000000) << 8 | (uStack_70 & 0xff0000) << 0x18 |
              (uStack_70 & 0xff00) << 0x28 | uStack_70 << 0x38;
  if ((local_88 == 0xb7756362) && (uStack_70 - 0x40 < 0xffffffffffc1)) {
    FUniqueBuffer::Alloc((ulong64)&local_98);
    FVar2.Owner.Owner = local_98.Owner.Owner;
    local_88 = local_88 >> 0x18 | (local_88 & 0xff0000) >> 8 | (local_88 & 0xff00) << 8 |
               local_88 << 0x18;
    uStack_84 = uStack_84 >> 0x18 | (uStack_84 & 0xff0000) >> 8 | (uStack_84 & 0xff00) << 8 |
                uStack_84 << 0x18;
    uStack_80 = CONCAT44(uStack_80._4_4_ >> 0x18 | (uStack_80._4_4_ & 0xff0000) >> 8 |
                         (uStack_80._4_4_ & 0xff00) << 8 | uStack_80._4_4_ << 0x18,
                         (undefined4)uStack_80);
    local_78 = local_78 >> 0x38 | (local_78 & 0xff000000000000) >> 0x28 |
               (local_78 & 0xff0000000000) >> 0x18 | (local_78 & 0xff00000000) >> 8 |
               (local_78 & 0xff000000) << 8 | (local_78 & 0xff0000) << 0x18 |
               (local_78 & 0xff00) << 0x28 | local_78 << 0x38;
    uStack_70 = uStack_70 >> 0x38 | (uStack_70 & 0xff000000000000) >> 0x28 |
                (uStack_70 & 0xff0000000000) >> 0x18 | (uStack_70 & 0xff00000000) >> 8 |
                (uStack_70 & 0xff000000) << 8 | (uStack_70 & 0xff0000) << 0x18 |
                (uStack_70 & 0xff00) << 0x28 | uStack_70 << 0x38;
    FVar7.Owner.Owner = local_98.Owner.Owner;
    puVar8 = puVar10;
    if (local_98.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_98.Owner.Owner + 0x18) >> 0x3c &
          4) == 0) {
        (**(code **)(*(longlong *)local_98.Owner.Owner + 8))(local_98.Owner.Owner);
      }
      FVar7.Owner.Owner = local_98.Owner.Owner;
      puVar8 = *(undefined8 **)((longlong)FVar2.Owner.Owner + 0x10);
    }
    if (FVar7.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)((FBufferOwner *)FVar7.Owner.Owner)->ReferenceCountsAndFlags >> 0x3c & 4) == 0
         ) {
        (**(code **)(((FBufferOwner *)FVar7.Owner.Owner)->_padding_ + 8))(FVar7.Owner.Owner);
      }
      puVar10 = ((FBufferOwner *)FVar7.Owner.Owner)->Data;
    }
    if (puVar8 < &DAT_00000040) {
      local_a8 = 0x40;
      local_a0 = puVar8;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView.Size <= Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                         ,0xdb,L"Failed to copy from a view of %llu bytes to a view of %llu bytes.")
      ;
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCompressedBuffer *)(*pcVar1)();
        return pFVar4;
      }
    }
    *puVar10 = CONCAT44(uStack_84,local_88);
    puVar10[1] = uStack_80;
    puVar9 = (undefined8 *)&DAT_00000040;
    if (puVar8 < &DAT_00000040) {
      puVar9 = puVar8;
    }
    puVar10[2] = local_78;
    puVar10[3] = uStack_70;
    *(undefined4 *)(puVar10 + 4) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar10 + 0x24) = local_68._4_4_;
    *(undefined4 *)(puVar10 + 5) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_60._4_4_;
    *(undefined4 *)(puVar10 + 6) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar10 + 0x34) = local_58._4_4_;
    *(undefined4 *)(puVar10 + 7) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = uStack_50._4_4_;
    (**(code **)(*(longlong *)param_1 + 0x188))
              (param_1,(undefined1 *)((longlong)puVar9 + (longlong)puVar10),
               (longlong)puVar8 - (longlong)puVar9);
    if ((param_1->field_0x29 & 2) == 0) {
      FVar5 = FUniqueBuffer::MoveToShared(&local_98);
      pFVar6 = UE::CompressedBuffer::Private::ValidBufferOrEmpty<FSharedBuffer>
                         (&local_48,(FSharedBuffer *)FVar5.Owner.Owner);
      FCompositeBuffer::operator=(&__return_storage_ptr__->CompressedData,pFVar6);
      FCompositeBuffer::~FCompositeBuffer(&local_48);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_90);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_98.Owner);
  }
  if ((__return_storage_ptr__->CompressedData).Segments.ArrayNum == 0) {
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return __return_storage_ptr__;
}

// Save @ 1414af4c0

void __thiscall FCompressedBuffer::Save(FCompressedBuffer *this,FArchive *param_1)

{
  int iVar1;
  ForElementType<FSharedBuffer> FVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (((param_1->field_0x28 & 4) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar.IsSaving()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\CompressedBuffer.cpp"
                         ,0x452,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->CompressedData).Segments.ArrayNum == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!CompressedData.IsNull()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\CompressedBuffer.cpp"
                         ,0x453,L"Serializing a null compressed buffer is not supported."), bVar5))
  {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar2 = (this->CompressedData).Segments.AllocatorInstance.SecondaryData;
  iVar1 = (this->CompressedData).Segments.ArrayNum;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    this = (FCompressedBuffer *)FVar2;
  }
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar2 = (ForElementType<FSharedBuffer>)((longlong)this + (longlong)iVar1 * 8);
  for (; (ForElementType<FSharedBuffer>)this != FVar2;
      this = (FCompressedBuffer *)((longlong)this + 8)) {
    plVar3 = *(longlong **)this;
    pcVar4 = *(code **)(*(longlong *)param_1 + 0x188);
    if (plVar3 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      lVar7 = plVar3[2];
    }
    plVar3 = *(longlong **)this;
    if (plVar3 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      lVar6 = plVar3[1];
    }
    (*pcVar4)(param_1,lVar6,lVar7);
  }
  return;
}

// TryDecompressTo @ 1414b5e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FCompressedBuffer::TryDecompressTo
          (FCompressedBuffer *this,TMemoryView<void> *param_1,
          ECompressedBufferDecompressFlags param_2)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  ulonglong uVar3;
  FUniqueBuffer FVar4;
  bool bVar5;
  char cVar6;
  ulong64 uVar7;
  FOodleDecoder FVar8;
  FLZ4Decoder *pFVar9;
  undefined ***pppuVar10;
  undefined1 auStack_158 [32];
  TMemoryView<void> *local_138;
  undefined8 local_130;
  undefined4 *local_128;
  ECompressedBufferDecompressFlags local_120;
  TMemoryView<void> local_118;
  longlong local_108;
  FCompressedBuffer *pFStack_100;
  FDecoderContext local_f8;
  undefined **local_c8;
  FCompressedBuffer *local_c0;
  undefined **local_b8;
  longlong local_b0;
  ulong64 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FHeader local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  if ((this->CompressedData).Segments.ArrayNum == 0) {
    return false;
  }
  local_108 = 0xb7756362;
  pFStack_100 = (FCompressedBuffer *)0x0;
  local_f8.HeaderOffset = 0;
  local_f8.HeaderSize = 0;
  local_f8.HeaderCrc32 = 0;
  local_f8.RawBlockIndex = 0;
  local_f8.Header.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_f8.RawBlock.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_f8.CompressedBlock.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  uVar7 = FCompositeBuffer::GetSize(&this->CompressedData);
  if (0x3f < uVar7) {
    local_118.Data = &local_108;
    local_118.Size = 0x40;
    FCompositeBuffer::CopyTo(&this->CompressedData,&local_118,0);
    local_f8.HeaderOffset =
         local_f8.HeaderOffset >> 0x38 | (local_f8.HeaderOffset & 0xff000000000000) >> 0x28 |
         (local_f8.HeaderOffset & 0xff0000000000) >> 0x18 |
         (local_f8.HeaderOffset & 0xff00000000) >> 8 | (local_f8.HeaderOffset & 0xff000000) << 8 |
         (local_f8.HeaderOffset & 0xff0000) << 0x18 | (local_f8.HeaderOffset & 0xff00) << 0x28 |
         local_f8.HeaderOffset << 0x38;
  }
  if (param_1->Size != local_f8.HeaderOffset) {
    return false;
  }
  uVar3 = param_1->Size;
  local_f8.HeaderSize = 0;
  local_f8.HeaderOffset = 0xffffffffffffffff;
  local_108 = 0;
  local_f8.HeaderCrc32 = 0;
  local_f8.RawBlockIndex = 0xffffffff;
  pFStack_100 = (FCompressedBuffer *)0x0;
  if (this != (FCompressedBuffer *)0x0) {
    pFStack_100 = this;
  }
  local_f8.CompressedBlock.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  if (this == (FCompressedBuffer *)0x0) {
    this = (FCompressedBuffer *)0x0;
  }
  local_88.Magic = 0xb7756362;
  local_88.Crc32 = 0;
  local_88.Method = None;
  local_88.Compressor = '\0';
  local_88.CompressionLevel = '\0';
  local_88.BlockSizeExponent = '\0';
  local_88.BlockCount = 0;
  local_88.TotalRawSize = 0;
  local_88.TotalCompressedSize = 0;
  local_118.Data = (void *)0x0;
  local_118.Size = 0;
  local_f8.Header.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_f8.RawBlock.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
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
  if (((this != (FCompressedBuffer *)0x0) &&
      (bVar5 = UE::CompressedBuffer::Private::TryReadHeader
                         (&local_f8,&this->CompressedData,&local_88,
                          (TMemoryView<void_const_> *)&local_118), bVar5)) &&
     (uVar3 <= local_88.TotalRawSize)) {
    if (local_88.Method == None) {
      FVar8 = (FOodleDecoder)::None;
      pFVar9 = (FLZ4Decoder *)&::None;
    }
    else if (local_88.Method == Oodle) {
      FVar8 = Oodle;
      pFVar9 = (FLZ4Decoder *)&Oodle;
    }
    else {
      if (local_88.Method != LZ4) goto LAB_1414b605d;
      pFVar9 = &LZ4;
      FVar8 = (FOodleDecoder)LZ4;
    }
    if (local_108 == 0) {
      local_c8 = &___7FBufferDecoderSource_Private_CompressedBuffer_UE__6B_;
      pppuVar10 = &local_c8;
      local_c0 = pFStack_100;
    }
    else {
      local_b0 = local_108;
      pppuVar10 = &local_b8;
      local_a8 = local_f8.HeaderOffset;
      local_b8 = &___7FArchiveDecoderSource_Private_CompressedBuffer_UE__6B_;
    }
    local_98 = *(undefined4 *)&param_1->Data;
    uStack_94 = *(undefined4 *)((longlong)&param_1->Data + 4);
    uStack_90 = (undefined4)param_1->Size;
    uStack_8c = *(undefined4 *)((longlong)&param_1->Size + 4);
    local_128 = &local_98;
    local_138 = &local_118;
    local_130 = 0;
    local_120 = param_2;
    cVar6 = (**(code **)((longlong)FVar8 + 8))(pFVar9,&local_f8,pppuVar10,&local_88);
    if (cVar6 != '\0') {
      bVar5 = true;
      goto LAB_1414b6060;
    }
  }
LAB_1414b605d:
  bVar5 = false;
LAB_1414b6060:
  FVar4.Owner.Owner = local_f8.CompressedBlock.Owner.Owner;
  if (local_f8.CompressedBlock.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_f8.CompressedBlock.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_f8.CompressedBlock.Owner.Owner + 0x10))
                (local_f8.CompressedBlock.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
  FVar4.Owner.Owner = local_f8.RawBlock.Owner.Owner;
  if (local_f8.RawBlock.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_f8.RawBlock.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_f8.RawBlock.Owner.Owner + 0x10))
                (local_f8.RawBlock.Owner.Owner);
      *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
      }
    }
  }
  FVar4.Owner.Owner = local_f8.Header.Owner.Owner;
  if (local_f8.Header.Owner.Owner == (FBufferOwner *)0x0) {
    return bVar5;
  }
  LOCK();
  paVar1 = (atomic<unsigned___int64> *)((longlong)local_f8.Header.Owner.Owner + 0x18);
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
  UNLOCK();
  if ((aVar2._0_4_ & 0x3fffffff) != 1) {
    return bVar5;
  }
  (**(code **)(*(longlong *)local_f8.Header.Owner.Owner + 0x10))(local_f8.Header.Owner.Owner);
  *(void **)((longlong)FVar4.Owner.Owner + 8) = (void *)0x0;
  *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10) = 0;
  LOCK();
  paVar1 = (atomic<unsigned___int64> *)((longlong)FVar4.Owner.Owner + 0x18);
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
  UNLOCK();
  if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
    (*(code *)**(undefined8 **)FVar4.Owner.Owner)(FVar4.Owner.Owner,1);
    return bVar5;
  }
  return bVar5;
}

// TryGetCompressParameters @ 1414b6740

bool __thiscall
FCompressedBuffer::TryGetCompressParameters
          (FCompressedBuffer *this,ECompressor *param_1,ECompressionLevel *param_2,ulong64 *param_3)

{
  ulong64 uVar1;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  TMemoryView<void> local_38;
  
  if ((this->CompressedData).Segments.ArrayNum == 0) {
    return false;
  }
  local_78 = 0xb7756362;
  local_74 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uVar1 = FCompositeBuffer::GetSize(&this->CompressedData);
  if (0x3f < uVar1) {
    local_38.Data = &local_78;
    local_38.Size = 0x40;
    FCompositeBuffer::CopyTo(&this->CompressedData,&local_38,0);
    local_70 = local_70 & 0xffffffff;
  }
  if ((char)local_70 != '\0') {
    if ((char)local_70 != '\x03') {
      return false;
    }
    *param_1 = (ECompressor)(local_70 >> 8);
    *param_2 = (ECompressionLevel)(local_70 >> 0x10);
    *param_3 = 1L << ((byte)(local_70 >> 0x18) & 0x3f);
    return true;
  }
  *param_1 = NotSet;
  *param_2 = None;
  *param_3 = 0;
  return true;
}

// MakeOwned @ 141d03330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCompressedBuffer * __thiscall
FCompressedBuffer::MakeOwned(FCompressedBuffer *this,FCompressedBuffer *__return_storage_ptr__)

{
  FCompositeBuffer *pFVar1;
  undefined1 auStack_48 [32];
  FCompositeBuffer local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pFVar1 = FCompositeBuffer::MakeOwned(&this->CompressedData,&local_28);
  FromCompressed(__return_storage_ptr__,pFVar1);
  FCompositeBuffer::~FCompositeBuffer(&local_28);
  return __return_storage_ptr__;
}

