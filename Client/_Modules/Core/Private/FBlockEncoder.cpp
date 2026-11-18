// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// operator() @ 141482350

FBlockContext * __thiscall
`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_1>::operator()
          (void *this,FBlockContext *__return_storage_ptr__,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FUniqueBuffer FVar8;
  ulonglong uVar9;
  FBlockContext *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_28;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_20;
  
  if (param_2 == 1) {
    uVar11 = 0;
    plVar3 = *(longlong **)this;
    if (*(longlong *)((longlong)this + 0x10) != 0) {
      if (*(longlong *)((longlong)this + 0x10) == 1) {
        (**(code **)(*plVar3 + 0x20))(plVar3,*(undefined8 *)((longlong)this + 0x20));
      }
      else {
        (**(code **)(*plVar3 + 0x20))(plVar3,*(undefined8 *)((longlong)this + 0x18));
      }
    }
    FVar8 = FUniqueBuffer::Alloc((ulong64)&local_28);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
              (*(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> **)((longlong)this + 0x28),
               (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar8.Owner.Owner);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_28);
    (__return_storage_ptr__->RawBlockCopy).Owner.Owner = (FBufferOwner *)0x0;
    plVar4 = *(longlong **)((longlong)this + 0x28);
    uVar14 = *(ulonglong *)((longlong)this + 8);
    plVar3 = (longlong *)*plVar4;
    uVar13 = uVar11;
    if (plVar3 != (longlong *)0x0) {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      uVar13 = plVar3[2];
    }
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != (longlong *)0x0) {
      if (((ulonglong)plVar4[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      uVar11 = plVar4[1];
    }
    uVar9 = 0x40;
    if (uVar13 < 0x40) {
      uVar9 = uVar13;
    }
    uVar13 = uVar13 - uVar9;
    if (uVar13 < uVar14) {
      uVar14 = uVar13;
    }
    (__return_storage_ptr__->CompressedBlocksView).Data = (void *)(uVar9 + uVar14 + uVar11);
    (__return_storage_ptr__->CompressedBlocksView).Size = uVar13 - uVar14;
  }
  else {
    if (param_1 == 0) {
      FVar8 = FUniqueBuffer::Alloc((ulong64)&local_20);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
                (*(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> **)((longlong)this + 0x28)
                 ,(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar8.Owner.Owner);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_20);
      this_00 = *(TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x30);
      iVar1 = this_00->ArrayNum;
      uVar2 = *(uint *)((longlong)this + 0x10);
      if (iVar1 < (int)uVar2) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,uVar2 - iVar1,&this_00->AllocatorInstance,&this_00->ArrayNum,
                           &this_00->ArrayMax);
        memset((this_00->AllocatorInstance).Data + (longlong)iVar7 * 8,0,
               (longlong)(int)(uVar2 - iVar1) << 3);
      }
      else {
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
        }
        if ((int)uVar2 < iVar1) {
          uVar12 = iVar1 - uVar2;
          if (((int)(uVar12 | uVar2) < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FBlockContext *)(*pcVar5)();
            return pFVar10;
          }
          if (uVar12 != 0) {
            TArray<FSharedBuffer,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar2,uVar12);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&this_00->AllocatorInstance,this_00->ArrayNum,&this_00->ArrayMax);
          }
        }
      }
    }
    (__return_storage_ptr__->RawBlockCopy).Owner.Owner = (FBufferOwner *)0x0;
    (__return_storage_ptr__->CompressedBlocksView).Data = (void *)0x0;
    (__return_storage_ptr__->CompressedBlocksView).Size = 0;
  }
  return __return_storage_ptr__;
}

// operator() @ 141483540

void __thiscall
`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>::operator()
          (void *this,FBlockContext *param_1,int param_2)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  ulonglong uVar3;
  FUniqueBuffer FVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  FUniqueBuffer FVar8;
  ulong64 uVar9;
  char cVar10;
  bool bVar11;
  longlong lVar12;
  ulonglong uVar13;
  FUniqueBuffer FVar14;
  ulonglong uVar15;
  FSharedBuffer FVar16;
  uint uVar17;
  ulong64 uVar18;
  FUniqueBuffer local_res8;
  FBlockContext *local_res10;
  uint local_res18;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_res20;
  TMemoryView<void_const_> local_b8;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_a8;
  ulong64 uStack_a0;
  TMemoryView<void_const_> local_98;
  TMemoryView<void_const_> local_88;
  void *local_78;
  ulonglong uStack_70;
  FSharedBuffer local_68;
  ulonglong uStack_60;
  
  uVar3 = *(ulonglong *)((longlong)this + 0x20);
  lVar12 = (longlong)param_2;
  uVar13 = *(longlong *)((longlong)this + 0x18) - uVar3 * lVar12;
  uVar15 = uVar3;
  if (uVar13 < uVar3) {
    uVar15 = uVar13;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  FCompositeBuffer::ViewOrCopyRange
            (*(FCompositeBuffer **)((longlong)this + 0x10),&local_98,uVar3 * lVar12,uVar15,
             &param_1->RawBlockCopy);
  local_a8.Owner = (param_1->CompressedBlocksView).Data;
  uStack_a0 = (param_1->CompressedBlocksView).Size;
  uVar18 = 0;
  local_res8.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  if ((param_1->CompressedBlocksView).Size == 0) {
    (**(code **)(**(longlong **)this + 0x20))(*(longlong **)this,uVar15);
    FVar14 = FUniqueBuffer::Alloc((ulong64)&local_res20);
    FVar8.Owner.Owner = local_res8.Owner.Owner;
    FVar4.Owner.Owner =
         *(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar14.Owner.Owner;
    *(undefined8 *)FVar14.Owner.Owner = 0;
    if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        lVar5 = *(longlong *)local_res8.Owner.Owner;
        local_res8.Owner.Owner = FVar4.Owner.Owner;
        (**(code **)(lVar5 + 0x10))(FVar8.Owner.Owner);
        *(void **)((longlong)FVar8.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar8.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar8.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
        UNLOCK();
        FVar4.Owner.Owner = local_res8.Owner.Owner;
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar8.Owner.Owner)(FVar8.Owner.Owner,1);
          FVar4.Owner.Owner = local_res8.Owner.Owner;
        }
      }
    }
    local_res8.Owner.Owner = FVar4.Owner.Owner;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_res20);
    FVar4.Owner.Owner = local_res8.Owner.Owner;
    if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
      if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >> 0x3c
          & 4) == 0) {
        (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
      }
      FVar8.Owner.Owner = local_res8.Owner.Owner;
      uVar18 = *(ulong64 *)((longlong)FVar4.Owner.Owner + 0x10);
      if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
        if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18) >>
             0x3c & 4) == 0) {
          (**(code **)(*(longlong *)local_res8.Owner.Owner + 8))(local_res8.Owner.Owner);
        }
        local_a8.Owner = *(void **)((longlong)FVar8.Owner.Owner + 8);
        uStack_a0 = uVar18;
        goto LAB_1414836bf;
      }
    }
    local_a8.Owner = (FBufferOwner *)0x0;
    uStack_a0 = uVar18;
  }
  else {
    local_88.Data = local_98.Data;
    local_88.Size = local_98.Size;
    FBlake3::Update(*(FBlake3 **)((longlong)this + 8),&local_88);
  }
LAB_1414836bf:
  local_78 = local_98.Data;
  uStack_70 = local_98.Size;
  cVar10 = (**(code **)(**(longlong **)this + 0x28))(*(longlong **)this,&local_a8,&local_78);
  if (cVar10 != '\0') {
    uVar18 = uStack_a0;
    uVar9 = uStack_a0;
    if (uVar15 <= uStack_a0) {
      if ((uStack_a0 < local_98.Size) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InView.Size <= Size",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                              ,0xdb,
                              L"Failed to copy from a view of %llu bytes to a view of %llu bytes."),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_98.Size != 0) {
        memcpy(local_a8.Owner,local_98.Data,local_98.Size);
      }
      uVar18 = uVar15;
      uVar9 = uVar15;
      if (uStack_a0 < uVar15) {
        uVar9 = uStack_a0;
      }
    }
    uStack_a0 = uVar9;
    if (local_res8.Owner.Owner == (FBufferOwner *)0x0) {
      uVar3 = (local_res10->CompressedBlocksView).Size;
      uVar15 = uVar18;
      if (uVar3 < uVar18) {
        uVar15 = uVar3;
      }
      (local_res10->CompressedBlocksView).Data =
           (void *)((longlong)(local_res10->CompressedBlocksView).Data + uVar15);
      (local_res10->CompressedBlocksView).Size = uVar3 - uVar15;
    }
    else {
      FUniqueBuffer::MoveToShared(&local_res8);
      local_68.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)local_a8.Owner;
      uStack_60 = uStack_a0;
      FVar16 = FSharedBuffer::MakeView(&local_b8,&local_68);
      plVar6 = *(longlong **)((longlong)this + 0x28);
      uVar17 = 0;
      if ((int)local_res18 < (int)plVar6[1]) {
        uVar17 = ~local_res18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::operator=
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(*plVar6 + lVar12 * 8),
                 (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)FVar16.Owner.Owner);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_b8);
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_b8.Size);
    }
    if ((uVar18 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("CompressedBlockSize > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\CompressedBuffer.cpp"
                            ,0x177,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar6 = *(longlong **)((longlong)this + 0x30);
    uVar17 = 0;
    if (lVar12 < plVar6[1]) {
      uVar17 = (uint)(param_2 >> 0x1f) >> 0x1f ^ 1;
    }
    if ((uVar17 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(int *)(*plVar6 + lVar12 * 4) = (int)uVar18;
  }
  FVar4.Owner.Owner = local_res8.Owner.Owner;
  if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_res8.Owner.Owner + 0x10))(local_res8.Owner.Owner);
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
  return;
}

// operator() @ 141483950

void __thiscall
`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>::operator()(void *this)

{
  if (*(int *)(*(longlong *)((longlong)this + 0x10) + 8) < 2) {
    return;
  }
  if (CpuChannel->Enabled < 0) {
    FBlake3::Update(*(FBlake3 **)this,*(FCompositeBuffer **)((longlong)this + 8));
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId386,"FBlockEncoder.RawHash",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\CompressedBuffer.cpp"
             ,0x182);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId386);
  FBlake3::Update(*(FBlake3 **)this,*(FCompositeBuffer **)((longlong)this + 8));
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// Compress @ 14148dab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCompositeBuffer * __thiscall
UE::CompressedBuffer::Private::FBlockEncoder::Compress
          (FBlockEncoder *this,FCompositeBuffer *__return_storage_ptr__,FCompositeBuffer *param_1,
          ulong64 param_2)

{
  ulonglong _Size;
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  FUniqueBuffer FVar6;
  FBlockEncoder *pFVar7;
  bool bVar8;
  FCompositeBuffer *pFVar9;
  ulonglong uVar10;
  long64 lVar11;
  FBufferOwner *pFVar12;
  FBlake3Hash *pFVar13;
  FSharedBuffer FVar14;
  FScriptContainerElement *pFVar15;
  FBufferOwner *pFVar16;
  ulonglong uVar17;
  uchar uVar18;
  FBufferOwner *pFVar19;
  ForAnyElementType FVar20;
  FBufferOwner *pFVar21;
  bool bVar22;
  undefined1 auStackY_9b8 [32];
  undefined1 local_978;
  undefined1 local_977 [7];
  FUniqueBuffer local_970;
  TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> local_968;
  TArray<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext,TSizedDefaultAllocator<32>_>
  local_958;
  TArray<unsigned_int,TSizedDefaultAllocator<64>_> local_948;
  FScriptContainerElement *local_930;
  undefined1 *local_928;
  undefined1 *local_920;
  FBlockEncoder *local_918;
  TMemoryView<void> local_908;
  undefined4 local_8f8;
  FCompositeBuffer *local_8f0;
  longlong local_8e8;
  TMemoryView<void_const_> local_8e0;
  FHeader local_8c8;
  <lambda_3> local_888;
  <lambda_2> local_870;
  <lambda_1> local_838;
  FSharedBuffer local_7f8;
  FBufferOwner *pFStack_7f0;
  FBlake3Hash local_7e8;
  FBlake3 local_7c8;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_9b8;
  bVar22 = -1 < CpuChannel->Enabled;
  local_918 = this;
  local_8f0 = __return_storage_ptr__;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId274,"FBlockEncoder.Compress",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\CompressedBuffer.cpp"
               ,0x112);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId274);
  }
  if ((((param_2 & param_2 - 1) != 0) || (0xffffffff < param_2)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FMath::IsPowerOfTwo(BlockSize) && BlockSize <= ((uint32) 0xffffffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\CompressedBuffer.cpp"
                         ,0x115,L"BlockSize must be a 32-bit power of two but was %llu."), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FCompositeBuffer *)(*pcVar5)();
    return pFVar9;
  }
  local_928 = (undefined1 *)FCompositeBuffer::GetSize(param_1);
  if (local_928 == (undefined1 *)0x0) {
    (__return_storage_ptr__->Segments).AllocatorInstance.SecondaryData =
         (ForElementType<FSharedBuffer>)0x0;
    (__return_storage_ptr__->Segments).ArrayNum = 0;
    (__return_storage_ptr__->Segments).ArrayMax = 1;
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_928 + (param_2 - 1);
    auVar4 = auVar4 / auVar3;
    uVar10 = auVar4._0_8_;
    if ((longlong)uVar10 < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlockCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\CompressedBuffer.cpp"
                         ,0x11e,L"");
      if (bVar8) {
code_r0x00014148dc2b:
        pcVar5 = (code *)swi(3);
        pFVar9 = (FCompositeBuffer *)(*pcVar5)();
        return pFVar9;
      }
    }
    else if ((0x7fffffff < (longlong)uVar10) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("BlockCount <= ((int32) 0x7fffffff)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Compression\\CompressedBuffer.cpp"
                                ,0x120,
                                L"Raw data of size %llu with block size %llu requires %llu blocks, but the limit is %d."
                               ), bVar8)) goto code_r0x00014148dc2b;
    FBlake3::Reset(&local_7c8);
    pFVar19 = (FBufferOwner *)0x0;
    local_8e8 = uVar10 * 4;
    local_970.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    local_948.ArrayMax = 0;
    local_968.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_968.ArrayNum = 0;
    local_968.ArrayMax = 0;
    local_948.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_948.ArrayNum = 0;
    if ((longlong)uVar10 < 1) {
      if ((longlong)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar10);
      }
    }
    else {
      lVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                         (4,4,uVar10,&local_948.AllocatorInstance,&local_948.ArrayNum,
                          &local_948.ArrayMax);
      memset(local_948.AllocatorInstance.Data + lVar11 * 4,0,uVar10 * 4);
    }
    local_888.RawHash = &local_7c8;
    local_870.CompressedBlocks = &local_968;
    local_888.BlockContexts = &local_958;
    local_870.__this = local_918;
    local_870.RawHash = &local_7c8;
    local_870.RawSize = (ulong64)local_928;
    local_838.RawSize = (ulong64)local_928;
    local_838.CompressedData = &local_970;
    local_838.CompressedBlocks = &local_968;
    local_870.CompressedBlockSizes = &local_948;
    local_838.__this = local_918;
    local_838.MetaSize = uVar10 * 4;
    local_958.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_958.ArrayNum = 0;
    local_958.ArrayMax = 0;
    local_888.RawData = param_1;
    local_870.RawData = param_1;
    local_870.BlockSize = param_2;
    local_838.BlockCount = uVar10;
    local_838.BlockSize = param_2;
    ParallelForWithPreWorkWithTaskContext<_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::FBlockContext,TSizedDefaultAllocator<32>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_1>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_2>,_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::<lambda_3>_>
              (L"BlockEncoder.Compress.PF",&local_958,auVar4._0_4_,1,&local_838,&local_870,
               &local_888,None);
    local_920 = (undefined1 *)local_948.ArrayNum;
    pFVar15 = local_948.AllocatorInstance.Data + local_948.ArrayNum * 4;
    FVar20.Data = local_948.AllocatorInstance.Data;
    pFVar21 = pFVar19;
    local_930 = pFVar15;
    while( true ) {
      uVar18 = '\0';
      if ((undefined1 *)local_948.ArrayNum != local_920) {
        local_978 = 0;
        `TCheckedPointerIterator<unsigned_int,__int64,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_978);
        pFVar15 = local_930;
      }
      lVar11 = local_948.ArrayNum;
      if (FVar20.Data == pFVar15) break;
      if ((ulonglong)*(uint *)FVar20.Data == 0) goto LAB_14148ddf3;
      pFVar21 = (FBufferOwner *)((longlong)&pFVar21->_padding_ + (ulonglong)*(uint *)FVar20.Data);
      FVar20.Data = FVar20.Data + 4;
    }
    local_920 = (undefined1 *)((longlong)&pFVar21->_padding_ + uVar10 * 4);
    if (local_920 < local_928) {
      pFVar15 = local_948.AllocatorInstance.Data + local_948.ArrayNum * 4;
      FVar20.Data = local_948.AllocatorInstance.Data;
      while( true ) {
        if (local_948.ArrayNum != lVar11) {
          local_977[0] = 0;
          `TCheckedPointerIterator<unsigned_int,__int64,0>::operator!='::__l2::<lambda_1>::
          operator()(local_977);
        }
        FVar6.Owner.Owner = local_970.Owner.Owner;
        if (FVar20.Data == pFVar15) break;
        uVar1 = *(uint *)FVar20.Data;
        *(uint *)FVar20.Data =
             uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        FVar20.Data = FVar20.Data + 4;
      }
      pFVar21 = pFVar19;
      if (local_970.Owner.Owner != (FBufferOwner *)0x0) {
        if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_970.Owner.Owner + 0x18) >>
             0x3c & 4) == 0) {
          (**(code **)(*(longlong *)local_970.Owner.Owner + 8))(local_970.Owner.Owner);
        }
        pFVar21 = *(FBufferOwner **)((longlong)FVar6.Owner.Owner + 0x10);
      }
      FVar6.Owner.Owner = local_970.Owner.Owner;
      pFVar16 = pFVar19;
      if (local_970.Owner.Owner != (FBufferOwner *)0x0) {
        if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_970.Owner.Owner + 0x18) >>
             0x3c & 4) == 0) {
          (**(code **)(*(longlong *)local_970.Owner.Owner + 8))(local_970.Owner.Owner);
        }
        pFVar16 = *(void **)((longlong)FVar6.Owner.Owner + 8);
      }
      __return_storage_ptr__ = local_8f0;
      FVar20.Data = local_948.AllocatorInstance.Data;
      pFVar12 = (FBufferOwner *)&DAT_00000040;
      if (pFVar21 < (FBufferOwner *)&DAT_00000040) {
        pFVar12 = pFVar21;
      }
      local_930 = (FScriptContainerElement *)
                  ((longlong)&pFVar12->_padding_ + (longlong)&pFVar16->_padding_);
      uVar17 = uVar10 * 4;
      if ((ulonglong)((longlong)pFVar21 - (longlong)pFVar12) < uVar10 * 4) {
        uVar17 = (longlong)pFVar21 - (longlong)pFVar12;
      }
      _Size = local_948.ArrayNum * 4;
      if ((uVar17 <= _Size && _Size - uVar17 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InView.Size <= Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Memory\\MemoryView.h"
                             ,0xdb,
                             L"Failed to copy from a view of %llu bytes to a view of %llu bytes."),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FCompositeBuffer *)(*pcVar5)();
        return pFVar9;
      }
      if (_Size != 0) {
        memcpy(local_930,FVar20.Data,_Size);
      }
      pFVar7 = local_918;
      local_8c8.Magic = 0xb7756362;
      local_8c8.Crc32 = 0;
      local_8c8.RawHash.Hash[0] = '\0';
      local_8c8.RawHash.Hash[1] = '\0';
      local_8c8.RawHash.Hash[2] = '\0';
      local_8c8.RawHash.Hash[3] = '\0';
      local_8c8.RawHash.Hash[4] = '\0';
      local_8c8.RawHash.Hash[5] = '\0';
      local_8c8.RawHash.Hash[6] = '\0';
      local_8c8.RawHash.Hash[7] = '\0';
      local_8c8.RawHash.Hash[8] = '\0';
      local_8c8.RawHash.Hash[9] = '\0';
      local_8c8.RawHash.Hash[10] = '\0';
      local_8c8.RawHash.Hash[0xb] = '\0';
      local_8c8.RawHash.Hash[0xc] = '\0';
      local_8c8.RawHash.Hash[0xd] = '\0';
      local_8c8.RawHash.Hash[0xe] = '\0';
      local_8c8.RawHash.Hash[0xf] = '\0';
      local_8c8.RawHash.Hash[0x10] = '\0';
      local_8c8.RawHash.Hash[0x11] = '\0';
      local_8c8.RawHash.Hash[0x12] = '\0';
      local_8c8.RawHash.Hash[0x13] = '\0';
      local_8c8.RawHash.Hash[0x14] = '\0';
      local_8c8.RawHash.Hash[0x15] = '\0';
      local_8c8.RawHash.Hash[0x16] = '\0';
      local_8c8.RawHash.Hash[0x17] = '\0';
      local_8c8.RawHash.Hash[0x18] = '\0';
      local_8c8.RawHash.Hash[0x19] = '\0';
      local_8c8.RawHash.Hash[0x1a] = '\0';
      local_8c8.RawHash.Hash[0x1b] = '\0';
      local_8c8.RawHash.Hash[0x1c] = '\0';
      local_8c8.RawHash.Hash[0x1d] = '\0';
      local_8c8.RawHash.Hash[0x1e] = '\0';
      local_8c8.RawHash.Hash[0x1f] = '\0';
      local_8c8.Method = (**(code **)((longlong)*local_918 + 8))(local_918);
      local_8c8.Compressor = (**(code **)((longlong)*pFVar7 + 0x10))(pFVar7);
      local_8c8.CompressionLevel = (**(code **)((longlong)*pFVar7 + 0x18))(pFVar7);
      lVar2 = 0x3f;
      if (param_2 != 0) {
        for (; param_2 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      local_8f8 = (undefined4)lVar2;
      if (param_2 != 0) {
        uVar18 = (uchar)lVar2;
      }
      local_8c8.BlockSizeExponent = uVar18;
      if (((uVar10 != (uVar10 & 0xffffffff)) || (auVar4[7] < '\0')) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8
         )) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FCompositeBuffer *)(*pcVar5)();
        return pFVar9;
      }
      local_8c8.TotalRawSize = (ulong64)local_928;
      local_8c8.TotalCompressedSize = (ulong64)(local_920 + 0x40);
      local_8c8.BlockCount = auVar4._0_4_;
      pFVar13 = FBlake3::Finalize(&local_7c8,&local_7e8);
      FVar6.Owner.Owner = local_970.Owner.Owner;
      local_8c8.RawHash.Hash._0_8_ = *(undefined8 *)pFVar13->Hash;
      local_8c8.RawHash.Hash._8_8_ = *(undefined8 *)(pFVar13->Hash + 8);
      local_8c8.RawHash.Hash._16_8_ = *(undefined8 *)(pFVar13->Hash + 0x10);
      local_8c8.RawHash.Hash._24_8_ = *(undefined8 *)(pFVar13->Hash + 0x18);
      pFVar21 = pFVar19;
      if (local_970.Owner.Owner != (FBufferOwner *)0x0) {
        if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_970.Owner.Owner + 0x18) >>
             0x3c & 4) == 0) {
          (**(code **)(*(longlong *)local_970.Owner.Owner + 8))(local_970.Owner.Owner);
        }
        pFVar21 = *(FBufferOwner **)((longlong)FVar6.Owner.Owner + 0x10);
      }
      FVar6.Owner.Owner = local_970.Owner.Owner;
      local_908.Data = pFVar19;
      if (local_970.Owner.Owner != (FBufferOwner *)0x0) {
        if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_970.Owner.Owner + 0x18) >>
             0x3c & 4) == 0) {
          (**(code **)(*(longlong *)local_970.Owner.Owner + 8))(local_970.Owner.Owner);
        }
        local_908.Data = *(void **)((longlong)FVar6.Owner.Owner + 8);
      }
      local_908.Size = (ulong64)(local_8e8 + 0x40);
      if (pFVar21 < (FBufferOwner *)(local_8e8 + 0x40)) {
        local_908.Size = (ulong64)pFVar21;
      }
      Private::FHeader::Write(&local_8c8,&local_908);
      FVar6.Owner.Owner = local_970.Owner.Owner;
      pFVar21 = pFVar19;
      if (local_970.Owner.Owner != (FBufferOwner *)0x0) {
        if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_970.Owner.Owner + 0x18) >>
             0x3c & 4) == 0) {
          (**(code **)(*(longlong *)local_970.Owner.Owner + 8))(local_970.Owner.Owner);
        }
        pFVar21 = *(FBufferOwner **)((longlong)FVar6.Owner.Owner + 0x10);
      }
      FVar6.Owner.Owner = local_970.Owner.Owner;
      if (local_970.Owner.Owner != (FBufferOwner *)0x0) {
        if (((ulonglong)*(atomic<unsigned___int64> *)((longlong)local_970.Owner.Owner + 0x18) >>
             0x3c & 4) == 0) {
          (**(code **)(*(longlong *)local_970.Owner.Owner + 8))(local_970.Owner.Owner);
        }
        pFVar19 = *(void **)((longlong)FVar6.Owner.Owner + 8);
      }
      local_908.Size = local_8c8.TotalCompressedSize;
      if (pFVar21 < local_8c8.TotalCompressedSize) {
        local_908.Size = (ulong64)pFVar21;
      }
      local_908.Data = pFVar19;
      FUniqueBuffer::MoveToShared(&local_970);
      local_7f8.Owner.Owner =
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
           (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)local_908.Data;
      pFStack_7f0 = (FBufferOwner *)local_908.Size;
      FVar14 = FSharedBuffer::MakeView(&local_8e0,&local_7f8);
      FCompositeBuffer::
      FCompositeBuffer<FSharedBuffer,TArray<FSharedBuffer,TSizedDefaultAllocator<32>_>,0>
                (__return_storage_ptr__,(FSharedBuffer *)FVar14.Owner.Owner,&local_968);
      SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_8e0);
      SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_8e0.Size);
      goto LAB_14148e106;
    }
LAB_14148ddf3:
    (__return_storage_ptr__->Segments).AllocatorInstance.SecondaryData =
         (ForElementType<FSharedBuffer>)0x0;
    (__return_storage_ptr__->Segments).ArrayNum = 0;
    (__return_storage_ptr__->Segments).ArrayMax = 1;
LAB_14148e106:
    DestructItems<_UE::CompressedBuffer::Private::FBlockEncoder::Compress_::__l2::FBlockContext,int>
              ((FBlockContext *)local_958.AllocatorInstance.Data,local_958.ArrayNum);
    if ((FBlockContext *)local_958.AllocatorInstance.Data != (FBlockContext *)0x0) {
      FMemory::Free(local_958.AllocatorInstance.Data);
    }
    DestructItems<FSharedBuffer,int>
              ((FSharedBuffer *)local_968.AllocatorInstance.Data,local_968.ArrayNum);
    if (local_968.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_968.AllocatorInstance.Data);
    }
    if (local_948.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_948.AllocatorInstance.Data);
    }
    SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_970.Owner);
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

