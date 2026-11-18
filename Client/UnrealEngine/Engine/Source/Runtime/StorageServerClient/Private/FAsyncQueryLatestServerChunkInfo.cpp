// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 7

// FAsyncQueryLatestServerChunkInfo @ 148cb2dd0

FAsyncQueryLatestServerChunkInfo * __thiscall
FStorageServerConnection::FAsyncQueryLatestServerChunkInfo::FAsyncQueryLatestServerChunkInfo
          (FAsyncQueryLatestServerChunkInfo *this,FStorageServerConnection *param_1)

{
  FEvent *pFVar1;
  FRunnableThread *pFVar2;
  
  this->Owner = param_1;
  this->_padding_ = (longlong)&___7FAsyncQueryLatestServerChunkInfo_FStorageServerConnection__6B_;
  pFVar1 = FGenericPlatformProcess::GetSynchEventFromPool(true);
  this->IsCompleted = pFVar1;
  pFVar2 = FRunnableThread::Create
                     ((FRunnable *)this,L"StorageServerCacheEntriesInit",0,TPri_Normal,
                      0xffffffffffffffff,None);
  if (pFVar2 == (FRunnableThread *)0x0) {
    (**(code **)(this->IsCompleted->_padding_ + 0x10))();
  }
  return this;
}

// ~FAsyncQueryLatestServerChunkInfo @ 148cb5c60

void __thiscall
FStorageServerConnection::FAsyncQueryLatestServerChunkInfo::~FAsyncQueryLatestServerChunkInfo
          (FAsyncQueryLatestServerChunkInfo *this)

{
  this->_padding_ = (longlong)&___7FAsyncQueryLatestServerChunkInfo_FStorageServerConnection__6B_;
  (**(code **)(this->IsCompleted->_padding_ + 0x20))(this->IsCompleted,0xffffffff,0);
  FGenericPlatformProcess::ReturnSynchEventToPool(this->IsCompleted);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// operator() @ 148cb84a0

void __thiscall
`FStorageServerConnection::FAsyncQueryLatestServerChunkInfo::Run'::__l2::<lambda_1>::operator()
          (void *this,FIoChunkId *param_1,FCacheChunkInfo *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  longlong lVar7;
  ulong64 uVar8;
  
  if ((param_2->ModTag).bIsSet == false) {
    uVar8 = 0;
  }
  else {
    uVar8 = (param_2->ModTag).TypedValue;
  }
  pFVar4 = *(ForAnyElementType **)this;
  uVar2 = *(undefined8 *)param_1->Id;
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  uVar3 = *(undefined4 *)(param_1->Id + 8);
  iVar6 = *(int *)&pFVar4[1].Data;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,pFVar4,piVar1);
  }
  lVar7 = (longlong)iVar6;
  *(int *)&pFVar4[1].Data = iVar6 + 1;
  pFVar5 = pFVar4->Data;
  *(undefined8 *)(pFVar5 + lVar7 * 0x30) = uVar2;
  *(undefined4 *)(pFVar5 + lVar7 * 0x30 + 8) = uVar3;
  pFVar5[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)0x1;
  *(undefined8 *)(pFVar5 + lVar7 * 0x30 + 0x10) = 0;
  *(undefined8 *)(pFVar5 + lVar7 * 0x30 + 0x18) = 0xffffffffffffffff;
  *(ulong64 *)(pFVar5 + lVar7 * 0x30 + 0x20) = uVar8;
  return;
}

// operator() @ 148cb8d30

void __thiscall
`FStorageServerConnection::FAsyncQueryLatestServerChunkInfo::Run'::__l2::<lambda_2>::operator()
          (void *this,FIoChunkId *param_1,EStorageServerContentType param_2,FIoBuffer param_3,
          TOptional<unsigned___int64> *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  BufCore *this_00;
  bool bVar4;
  FIoChunkId local_28;
  
  if (param_4->bIsSet == false) {
    TSet<FIoChunkId,DefaultKeyFuncs<FIoChunkId,0>,FDefaultSetAllocator>::Emplace<FIoChunkId_const_&>
              (*(TSet<FIoChunkId,DefaultKeyFuncs<FIoChunkId,0>,FDefaultSetAllocator> **)
                ((longlong)this + 8),&local_28,(bool *)param_1);
  }
  else {
    bVar4 = -1 < CpuChannel->Enabled;
    if (bVar4) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1123,"StorageServerRefreshCacheEntries::Invalidate",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
                 ,0x463);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1123);
    }
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)this + 8) + 8);
    (**(code **)(*plVar3 + 8))(plVar3,param_1);
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  this_00 = *(BufCore **)param_3.CorePtr.Reference;
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
  return;
}

// IsFinished @ 148cccb50

bool __thiscall
FStorageServerConnection::FAsyncQueryLatestServerChunkInfo::IsFinished
          (FAsyncQueryLatestServerChunkInfo *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148cccb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->IsCompleted->_padding_ + 0x20))(this->IsCompleted,0,0);
  return (bool)uVar1;
}

// Run @ 148cdba00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall
FStorageServerConnection::FAsyncQueryLatestServerChunkInfo::Run
          (FAsyncQueryLatestServerChunkInfo *this)

{
  int iVar1;
  ICacheStrategy *pIVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ForElementType<unsigned_int> FVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_148 [32];
  undefined1 local_118 [8];
  TArray<FStorageServerConnection::FChunkBatchRequestEntry,TSizedDefaultAllocator<32>_> local_110;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined4 local_d8;
  uint uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  FAsyncQueryLatestServerChunkInfo *local_c8;
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_c0;
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b0;
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1104,"StorageServerRefreshCacheEntries",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
               ,0x450);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1104);
  }
  local_f8._0_8_ = &local_110;
  uVar6 = 0;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  pIVar2 = (this->Owner->CacheStrategy).Ptr;
  local_c0 = (TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_f8;
  local_c8 = (FAsyncQueryLatestServerChunkInfo *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`FStorageServerConnection::FAsyncQueryLatestServerChunkInfo::Run'::__l2::<lambda_1>,void,FIoChunkId_const_&,StorageServer::FCacheChunkInfo_const_&>
             ::Call;
  (**(code **)(pIVar2->_padding_ + 0x38))(pIVar2,&local_c8);
  iVar5 = local_110.ArrayNum;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_88.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.AllocationFlags.NumBits = 0;
  local_88.AllocationFlags.MaxBits = 0x80;
  local_88.FirstFreeIndex = -1;
  local_88.NumFreeIndices = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  if (local_110.ArrayNum == 0) goto LAB_148cdbdbe;
  if (local_110.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)local_110.ArrayNum);
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_88,local_110.ArrayNum);
  if ((uint)iVar5 < 4) {
    uVar12 = 1;
  }
  else {
    uVar12 = (ulonglong)(((uint)iVar5 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar12 = (ulonglong)(uint)(1 << ((byte)lVar4 & 0x1f));
  }
  uVar10 = (uint)uVar12;
  if ((local_40 != 0) && ((int)uVar10 <= (int)local_40)) goto LAB_148cdbdbe;
  local_40 = uVar10;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar10 != 0) {
    uVar9 = uVar10;
    if (uVar10 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar9 = 0;
        goto LAB_148cdbb5b;
      }
    }
    else {
LAB_148cdbb5b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar9,4);
    }
    if (0 < (int)uVar10) {
      uVar11 = uVar6;
      do {
        FVar8.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_48.Data;
        }
        uVar3 = uVar11 & (longlong)(int)uVar10 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(FVar8.Data + uVar3 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  if (local_40 != 0) {
    local_e8._8_8_ = &local_88.AllocationFlags;
    local_e8._0_4_ = 0;
    local_e8._4_4_ = 1;
    uStack_d4 = 0;
    uStack_d0 = 0;
    if (local_88.AllocationFlags.NumBits != 0) {
      FVar13 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
      if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar10 = *(uint *)FVar13;
      uVar12 = uVar6;
      while (uVar10 == 0) {
        uStack_d0 = (int)uVar12 + 0x20;
        uVar12 = (ulonglong)uStack_d0;
        iVar5 = (int)uVar6;
        local_e8._0_4_ = iVar5 + 1;
        uVar6 = (ulonglong)(uint)local_e8._0_4_;
        if ((int)((local_88.AllocationFlags.NumBits - 1U) +
                 ((int)(local_88.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            (int)local_e8._0_4_) goto LAB_148cdbc5c;
        uVar10 = *(uint *)((uchar *)((longlong)FVar13 + 4) + (longlong)iVar5 * 4);
      }
      local_e8._4_4_ = -uVar10 & uVar10;
      uVar6 = (ulonglong)(uint)local_e8._4_4_ * 2 + 1;
      lVar4 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_d4 = (int)lVar4 + -1 + uStack_d0;
      uVar6 = (ulonglong)uStack_d4;
      if (local_88.AllocationFlags.NumBits < (int)uStack_d4) {
LAB_148cdbc5c:
        uVar6 = (ulonglong)(uint)local_88.AllocationFlags.NumBits;
        uStack_d4 = local_88.AllocationFlags.NumBits;
      }
    }
    local_d8 = 0xffffffff;
    local_b8 = &local_88;
    local_b0._padding_ = CONCAT44(local_e8._4_4_,local_e8._0_4_);
    local_b0.CurrentBitIndex = uStack_d4;
    local_b0.UnvisitedBitMask = 0xffffffff;
    local_b0._28_4_ = uStack_cc;
    local_b0.BaseBitIndex = uStack_d0;
    local_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e8._8_8_;
    if ((int)uVar6 < local_88.AllocationFlags.NumBits) {
      do {
        pFVar14 = (local_b8->Data).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x14;
        uVar10 = *(uint *)(pFVar14 + 8);
        local_f8._0_8_ = *(undefined8 *)pFVar14;
        uVar10 = ((((((SUB84(local_f8._0_8_,4) >> 8 & 0xff) * 0x21 +
                     (SUB82(local_f8._0_8_,6) & 0xff)) * 0x21 + (uint)SUB81(local_f8._0_8_,7)) *
                    0x21 + (uVar10 & 0xff)) * 0x21 + (uVar10 >> 8 & 0xff)) * 0x21 +
                 (uVar10 >> 0x10 & 0xff)) * 0x21 + (SUB84(local_f8._0_8_,2) & 0xff) * 0x40a9121 +
                 (SUB84(local_f8._0_8_,3) & 0xff) * 0x747c7101 +
                 (SUB84(local_f8._0_8_,4) & 0xff) * -0x13be2b1f +
                 (SUB84(local_f8._0_8_,1) & 0xff) * -0x7aa34abf + (uVar10 >> 0x18) +
                 ((uint)local_f8._0_8_ & 0xff) * 0x30f35d61 + 0x58a2c485 & local_40 - 1;
        *(uint *)(pFVar14 + 0x10) = uVar10;
        FVar8.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar8.Data = local_48.Data;
        }
        uVar12 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar10;
        *(undefined4 *)(pFVar14 + 0xc) = *(undefined4 *)(FVar8.Data + uVar12 * 4);
        *(int *)(FVar8.Data + uVar12 * 4) = (int)uVar6;
        local_b0.UnvisitedBitMask = local_b0.UnvisitedBitMask & ~local_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b0);
        uVar6 = (ulonglong)(uint)local_b0.CurrentBitIndex;
      } while (local_b0.CurrentBitIndex < (local_b0.Array)->NumBits);
    }
  }
LAB_148cdbdbe:
  local_c0 = &local_88;
  local_f8._8_8_ = &local_c8;
  local_f8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FStorageServerConnection::FAsyncQueryLatestServerChunkInfo::Run'::__l2::<lambda_2>,void,FIoChunkId,enum_EStorageServerContentType,FIoBuffer,TOptional<unsigned___int64>_const_&>
       ::Call;
  local_c8 = this;
  ReadChunkBatchRequest
            (this->Owner,(FIoStatus *)local_e8,&local_110,
             (TFunctionRef<void___cdecl(FIoChunkId,EStorageServerContentType,FIoBuffer,TOptional<unsigned___int64>_const_&)>
              *)local_f8,true);
  FIoStatus::~FIoStatus((FIoStatus *)local_e8);
  iVar5 = local_110.ArrayNum;
  pFVar14 = local_110.AllocatorInstance.Data + (longlong)local_110.ArrayNum * 0x30;
  FVar8.Data = local_110.AllocatorInstance.Data;
  do {
    if (local_110.ArrayNum != iVar5) {
      `TCheckedPointerIterator<FStorageServerConnection::FChunkBatchRequestEntry,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_118);
    }
    if (FVar8.Data == pFVar14) {
      (**(code **)(this->IsCompleted->_padding_ + 0x10))();
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      TSparseArray<TSparseSetElement<FIoChunkId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FIoChunkId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FIoChunkId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_88);
      if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.AllocatorInstance.Data);
      }
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return 0;
    }
    uVar10 = *(uint *)(FVar8.Data + 8);
    local_f8._0_8_ = *(undefined8 *)FVar8.Data;
    uVar9 = (uint)((ulonglong)local_f8._0_8_ >> 0x20);
    if (local_88.Data.ArrayNum != local_88.NumFreeIndices) {
      FVar7.Data = local_50;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FVar7.Data = local_48.Data;
      }
      iVar1 = *(int *)(FVar7.Data +
                      (ulonglong)
                      (local_40 - 1 &
                      ((uint)local_f8._0_8_ & 0xff) * 0x30f35d61 + 0x58a2c485 +
                      ((((((uVar9 >> 8 & 0xff) * 0x21 +
                          ((ushort)((ulonglong)local_f8._0_8_ >> 0x30) & 0xff)) * 0x21 +
                         (uint)(byte)((ulonglong)local_f8._0_8_ >> 0x38)) * 0x21 + (uVar10 & 0xff))
                        * 0x21 + (uVar10 >> 8 & 0xff)) * 0x21 + (uVar10 >> 0x10 & 0xff)) * 0x21 +
                      (((uint)((ulonglong)local_f8._0_8_ >> 8) & 0xff) * 0x21 +
                      ((uint)((ulonglong)local_f8._0_8_ >> 0x10) & 0xff)) * 0x40a9121 +
                      ((uint)((ulonglong)local_f8._0_8_ >> 0x18) & 0xff) * 0x747c7101 +
                      (uVar9 & 0xff) * -0x13be2b1f + (uVar10 >> 0x18)) * 4);
      while (iVar1 != -1) {
        lVar4 = (longlong)iVar1;
        if ((*(longlong *)(local_88.Data.AllocatorInstance.Data + lVar4 * 0x14) ==
             *(longlong *)FVar8.Data) &&
           (*(int *)(local_88.Data.AllocatorInstance.Data + lVar4 * 0x14 + 8) ==
            *(int *)(FVar8.Data + 8))) goto LAB_148cdbfc1;
        iVar1 = *(int *)(local_88.Data.AllocatorInstance.Data + lVar4 * 0x14 + 0xc);
      }
    }
    bVar16 = -1 < CpuChannel->Enabled;
    if (bVar16) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1137,"StorageServerRefreshCacheEntries::Invalidate",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StorageServerClient\\Private\\StorageServerConnection.cpp"
                 ,0x471);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1137);
    }
    pIVar2 = (this->Owner->CacheStrategy).Ptr;
    (**(code **)(pIVar2->_padding_ + 8))(pIVar2,FVar8.Data);
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
LAB_148cdbfc1:
    FVar8.Data = FVar8.Data + 0x30;
  } while( true );
}

// Wait @ 148ce3890

void __thiscall
FStorageServerConnection::FAsyncQueryLatestServerChunkInfo::Wait
          (FAsyncQueryLatestServerChunkInfo *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148ce389f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->IsCompleted->_padding_ + 0x20))(this->IsCompleted,0xffffffff,0);
  return;
}

