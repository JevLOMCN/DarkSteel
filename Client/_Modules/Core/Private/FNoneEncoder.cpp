// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Compress @ 14148e530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCompositeBuffer * __thiscall
UE::CompressedBuffer::Private::FNoneEncoder::Compress
          (FNoneEncoder *this,FCompositeBuffer *__return_storage_ptr__,FCompositeBuffer *param_1,
          ulong64 param_2)

{
  FUniqueBuffer FVar1;
  FBlake3Hash *pFVar2;
  FCompositeBuffer *pFVar3;
  FSharedBuffer FVar4;
  ulong64 uVar5;
  void *pvVar6;
  undefined1 auStack_d8 [32];
  FUniqueBuffer local_b8 [2];
  TMemoryView<void> local_a8;
  FHeader local_98;
  FBlake3Hash local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pvVar6 = (void *)0x0;
  local_98.Magic = 0xb7756362;
  local_98.Crc32 = 0;
  local_98.Compressor = '\0';
  local_98.CompressionLevel = '\0';
  local_98.BlockSizeExponent = '\0';
  local_98.Method = None;
  local_98.BlockCount = 1;
  local_98.TotalRawSize = FCompositeBuffer::GetSize(param_1);
  local_98.TotalCompressedSize = local_98.TotalRawSize + 0x40;
  pFVar2 = FBlake3::HashBuffer(&local_58,param_1);
  local_98.RawHash.Hash._0_8_ = *(undefined8 *)pFVar2->Hash;
  local_98.RawHash.Hash._8_8_ = *(undefined8 *)(pFVar2->Hash + 8);
  local_98.RawHash.Hash._16_8_ = *(undefined8 *)(pFVar2->Hash + 0x10);
  local_98.RawHash.Hash._24_8_ = *(undefined8 *)(pFVar2->Hash + 0x18);
  FUniqueBuffer::Alloc((ulong64)local_b8);
  FVar1.Owner.Owner = local_b8[0].Owner.Owner;
  if (local_b8[0].Owner.Owner == (FBufferOwner *)0x0) {
    uVar5 = 0;
  }
  else {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_b8[0].Owner.Owner + 0x18) >> 0x3c
        & 4) == 0) {
      (**(code **)(*(longlong *)local_b8[0].Owner.Owner + 8))(local_b8[0].Owner.Owner);
    }
    uVar5 = *(ulong64 *)((longlong)FVar1.Owner.Owner + 0x10);
    if (local_b8[0].Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_b8[0].Owner.Owner + 0x18) >>
           0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_b8[0].Owner.Owner + 8))(local_b8[0].Owner.Owner);
      }
      pvVar6 = *(void **)((longlong)local_b8[0].Owner.Owner + 8);
    }
  }
  local_a8.Data = pvVar6;
  local_a8.Size = uVar5;
  Private::FHeader::Write(&local_98,&local_a8);
  pFVar3 = FCompositeBuffer::MakeOwned(param_1,(FCompositeBuffer *)&local_58);
  FVar4 = FUniqueBuffer::MoveToShared(local_b8);
  FCompositeBuffer::FCompositeBuffer<FSharedBuffer,FCompositeBuffer,0>
            (__return_storage_ptr__,(FSharedBuffer *)FVar4.Owner.Owner,pFVar3);
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_a8);
  FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)&local_58);
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_b8[0].Owner);
  return __return_storage_ptr__;
}

