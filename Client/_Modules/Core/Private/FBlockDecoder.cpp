// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// DecompressToComposite @ 1414903f0

FCompositeBuffer * __thiscall
UE::CompressedBuffer::Private::FBlockDecoder::DecompressToComposite
          (FBlockDecoder *this,FCompositeBuffer *__return_storage_ptr__,FDecoderContext *param_1,
          FDecoderSource *param_2,FHeader *param_3,TMemoryView<void_const_> *param_4,ulong64 param_5
          ,ulong64 param_6)

{
  FUniqueBuffer FVar1;
  bool bVar2;
  FSharedBuffer FVar3;
  ulong64 uVar4;
  FUniqueBuffer local_48 [2];
  TMemoryView<void> local_38;
  TMemoryView<void_const_> local_28;
  
  FUniqueBuffer::Alloc((ulong64)local_48);
  FVar1.Owner.Owner = local_48[0].Owner.Owner;
  if (local_48[0].Owner.Owner == (FBufferOwner *)0x0) {
    uVar4 = 0;
  }
  else {
    if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_48[0].Owner.Owner + 0x18) >> 0x3c
        & 4) == 0) {
      (**(code **)(*(longlong *)local_48[0].Owner.Owner + 8))(local_48[0].Owner.Owner);
    }
    uVar4 = *(ulong64 *)((longlong)FVar1.Owner.Owner + 0x10);
    if (local_48[0].Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_48[0].Owner.Owner + 0x18) >>
           0x3c & 4) == 0) {
        (**(code **)(*(longlong *)local_48[0].Owner.Owner + 8))(local_48[0].Owner.Owner);
      }
      local_38.Data = *(void **)((longlong)local_48[0].Owner.Owner + 8);
      goto LAB_141490474;
    }
  }
  local_38.Data = (void *)0x0;
LAB_141490474:
  local_28.Data = param_4->Data;
  local_28.Size = param_4->Size;
  local_38.Size = uVar4;
  bVar2 = TryDecompressTo(this,param_1,param_2,param_3,&local_28,param_5,&local_38,None);
  if (bVar2) {
    FVar3 = FUniqueBuffer::MoveToShared(local_48);
    FCompositeBuffer::FCompositeBuffer<FSharedBuffer,0>
              (__return_storage_ptr__,(FSharedBuffer *)FVar3.Owner.Owner);
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&param_4);
  }
  else {
    (__return_storage_ptr__->Segments).AllocatorInstance.SecondaryData =
         (ForElementType<FSharedBuffer>)0x0;
    (__return_storage_ptr__->Segments).ArrayNum = 0;
    (__return_storage_ptr__->Segments).ArrayMax = 1;
  }
  SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_48[0].Owner);
  return __return_storage_ptr__;
}

// GetHeaderSize @ 1414994d0

ulong64 __thiscall
UE::CompressedBuffer::Private::FBlockDecoder::GetHeaderSize(FBlockDecoder *this,FHeader *param_1)

{
  return (ulonglong)param_1->BlockCount * 4 + 0x40;
}

// TryDecompressTo @ 1414b5890

bool __thiscall
UE::CompressedBuffer::Private::FBlockDecoder::TryDecompressTo
          (FBlockDecoder *this,FDecoderContext *param_1,FDecoderSource *param_2,FHeader *param_3,
          TMemoryView<void_const_> *param_4,ulong64 param_5,TMemoryView<void> *param_6,
          ECompressedBufferDecompressFlags param_7)

{
  FUniqueBuffer *this_00;
  uint uVar1;
  FBufferOwner *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  ulong64 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  FUniqueBuffer FVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  size_t sVar15;
  longlong lVar16;
  uint *puVar17;
  uint *puVar18;
  ulonglong uVar19;
  void *_Dst;
  void *pvVar20;
  uint uVar21;
  bool bVar22;
  uint local_e8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  TArrayView<unsigned_int_const_,int> local_a0;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  ulonglong local_70;
  void *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar11 = param_6->Size + param_5;
  if (param_3->TotalRawSize < uVar11) {
    return false;
  }
  uVar13 = uVar11 - 1 >> (param_3->BlockSizeExponent & 0x3f);
  uVar11 = param_5 >> (param_3->BlockSizeExponent & 0x3f);
  bVar22 = -1 < CpuChannel->Enabled;
  local_b0 = uVar13;
  local_a8 = uVar11;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId470,"FBlockDecoder::TryDecompressTo",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\CompressedBuffer.cpp"
               ,0x1d6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId470);
  }
  local_e8 = (uint)uVar11;
  uVar7 = 0x40;
  if (param_4->Size < 0x40) {
    uVar7 = param_4->Size;
  }
  puVar17 = (uint *)(uVar7 + (longlong)param_4->Data);
  local_a0.DataPtr = puVar17;
  local_a0.ArrayNum = local_e8;
  if (((int)local_e8 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  puVar18 = puVar17;
  uVar7 = Algo::
          TransformAccumulate<unsigned___int64,TArrayView<unsigned_int_const_,int>,_UE::CompressedBuffer::Private::FBlockDecoder::TryDecompressTo_::__l2::<lambda_1>,TPlus<void>_>
                    (&local_a0,param_5._0_1_,0,(TPlus<void>)param_5._0_1_);
  uVar12 = uVar11 & 0xffffffff;
  lVar16 = uVar7 + ((ulonglong)param_3->BlockCount + 0x10) * 4;
  if (local_e8 <= (uint)uVar13) {
    do {
      uVar13 = 1L << (param_3->BlockSizeExponent & 0x3f);
      uVar21 = (uint)uVar12;
      if (uVar21 == (uint)uVar11) {
        uVar14 = uVar13 - 1 & param_5;
      }
      else {
        uVar14 = 0;
      }
      lVar8 = uVar12 << (param_3->BlockSizeExponent & 0x3f);
      uVar19 = param_3->TotalRawSize - lVar8;
      if (uVar13 < uVar19) {
        uVar19 = uVar13;
      }
      uVar13 = 0;
      if (uVar21 != (uint)uVar11) {
        uVar13 = lVar8 - param_5;
      }
      uVar11 = param_6->Size;
      uVar1 = puVar18[uVar12];
      if (uVar11 < uVar13) {
        uVar13 = uVar11;
      }
      uVar9 = (ulonglong)
              (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
      _Dst = (void *)((longlong)param_6->Data + uVar13);
      uVar12 = uVar19 - uVar14;
      if (uVar11 - uVar13 < uVar19 - uVar14) {
        uVar12 = uVar11 - uVar13;
      }
      if (uVar9 < uVar19) {
        sVar15 = uVar12;
        if (param_1->RawBlockIndex != uVar21) {
          if ((uVar12 != uVar19) ||
             (uVar11 = uVar12, pvVar20 = _Dst, (param_7 & IntermediateBuffer) != None)) {
            this_00 = &param_1->RawBlock;
            pFVar2 = (param_1->RawBlock).Owner.Owner;
            if (pFVar2 == (FBufferOwner *)0x0) {
              uVar11 = 0;
            }
            else {
              if (((ulonglong)pFVar2->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
                (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
              }
              uVar11 = pFVar2->Size;
            }
            if (uVar11 < uVar19) {
              FVar10 = FUniqueBuffer::Alloc((ulong64)&local_b8);
              SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
              operator=(&this_00->Owner,
                        (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar10.Owner.Owner
                       );
              SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
              ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_b8);
            }
            pFVar2 = (this_00->Owner).Owner;
            if (pFVar2 == (FBufferOwner *)0x0) {
              uVar7 = 0;
            }
            else {
              if (((ulonglong)pFVar2->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
                (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
              }
              uVar7 = pFVar2->Size;
            }
            pFVar2 = (this_00->Owner).Owner;
            if (pFVar2 == (FBufferOwner *)0x0) {
              pvVar20 = (void *)0x0;
            }
            else {
              if (((ulonglong)pFVar2->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
                (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
              }
              pvVar20 = pFVar2->Data;
            }
            uVar11 = uVar19;
            if (uVar7 < uVar19) {
              uVar11 = uVar7;
            }
            param_1->RawBlockIndex = local_e8;
            uVar21 = local_e8;
          }
          (**(code **)((longlong)*param_2 + 0x10))(param_2,&local_88,lVar16,uVar9,param_1);
          if (CONCAT44(uStack_7c,uStack_80) != 0) {
            local_58 = local_88;
            uStack_54 = uStack_84;
            uStack_50 = uStack_80;
            uStack_4c = uStack_7c;
            local_78 = pvVar20;
            local_70 = uVar11;
            cVar6 = (**(code **)((longlong)*this + 0x18))(this,&local_78,&local_58);
            if (cVar6 != '\0') {
              if ((uVar12 == uVar19) && ((param_7 & IntermediateBuffer) == None))
              goto LAB_1414b5b79;
              if (uVar11 < uVar14) {
                uVar14 = uVar11;
              }
              pvVar20 = (void *)((longlong)pvVar20 + uVar14);
              if (uVar11 - uVar14 < uVar12) {
                sVar15 = uVar11 - uVar14;
              }
              if ((uVar12 < sVar15) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InView.Size <= Size",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                                     ,0xdb,
                                     L"Failed to copy from a view of %llu bytes to a view of %llu bytes."
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              goto joined_r0x0001414b5b59;
            }
          }
          bVar4 = false;
          goto LAB_1414b5dd5;
        }
        pFVar2 = (param_1->RawBlock).Owner.Owner;
        uVar7 = 0;
        if (pFVar2 != (FBufferOwner *)0x0) {
          if (((ulonglong)pFVar2->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
            (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
          }
          uVar7 = pFVar2->Size;
        }
        pFVar2 = (param_1->RawBlock).Owner.Owner;
        if (pFVar2 == (FBufferOwner *)0x0) {
          pvVar20 = (void *)0x0;
        }
        else {
          if (((ulonglong)pFVar2->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
            (**(code **)(pFVar2->_padding_ + 8))(pFVar2);
          }
          pvVar20 = pFVar2->Data;
        }
        if (uVar7 < uVar14) {
          uVar14 = uVar7;
        }
        pvVar20 = (void *)(uVar14 + (longlong)pvVar20);
        if (uVar7 - uVar14 < uVar12) {
          sVar15 = uVar7 - uVar14;
        }
        if ((uVar12 < sVar15) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InView.Size <= Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                               ,0xdb,
                               L"Failed to copy from a view of %llu bytes to a view of %llu bytes.")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
joined_r0x0001414b5b59:
        if (sVar15 != 0) {
          memcpy(_Dst,pvVar20,sVar15);
        }
      }
      else {
        local_68 = _Dst;
        local_60 = uVar12;
        (**(code **)((longlong)*param_2 + 8))(param_2,uVar14 + lVar16,&local_68);
      }
LAB_1414b5b79:
      local_e8 = uVar21 + 1;
      uVar12 = (ulonglong)local_e8;
      lVar16 = lVar16 + uVar9;
      puVar18 = puVar17;
      uVar11 = local_a8;
    } while (local_e8 <= (uint)local_b0);
  }
  bVar4 = true;
LAB_1414b5dd5:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

