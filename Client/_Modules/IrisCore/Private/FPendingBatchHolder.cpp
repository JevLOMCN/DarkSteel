// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 4

// CreateConstIterator @ 1442b9410

TConstIterator * __thiscall
UE::Net::Private::FPendingBatchHolder::CreateConstIterator
          (FPendingBatchHolder *this,TConstIterator *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(this->PendingBatches).field_0x28;
  puVar1 = &(this->PendingBatches).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(this->PendingBatches).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1442b94a8;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_1442b94a8:
  *(FPendingBatchHolder **)__return_storage_ptr__ = this;
  *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uVar5,iVar8);
  *(undefined1 **)&__return_storage_ptr__->field_0x10 = puVar1;
  *(ulonglong *)&__return_storage_ptr__->field_0x18 = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)&__return_storage_ptr__->field_0x20 = CONCAT44(iVar6,iVar9);
  return __return_storage_ptr__;
}

// CreatePendingBatch @ 1442b98a0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FPendingBatchData * __thiscall
UE::Net::Private::FPendingBatchHolder::CreatePendingBatch
          (FPendingBatchHolder *this,FNetRefHandle param_1)

{
  ForElementType<UE::Net::FNetRefHandle> FVar1;
  ForElementType<UE::Net::Private::FQueuedDataChunk> FVar2;
  ForElementType<unsigned_int> FVar3;
  FPendingBatchData *pFVar4;
  FPendingBatchData *_Dst;
  LARGE_INTEGER local_res8;
  FNetRefHandle_u_0 local_res10;
  FPendingBatchData *local_res18;
  FNetRefHandle_u_0 *local_18;
  FPendingBatchData **local_10;
  
  local_res10 = param_1.field0_0x0;
  QueryPerformanceCounter(&local_res8);
  _Dst = ::operator_new(0x180);
  if (_Dst == (FPendingBatchData *)0x0) {
    _Dst = (FPendingBatchData *)0x0;
  }
  else {
    memset(_Dst,0,0x180);
    (_Dst->DataChunkStorage).ArrayMax = 0x20;
    (_Dst->QueuedDataChunks).ArrayMax = 4;
    (_Dst->PendingMustBeMappedReferences).ArrayMax = 4;
    (_Dst->ResolvedReferences).ArrayMax = 4;
    (_Dst->CreationDependentParents).ArrayMax = 4;
    _Dst->NextWarningTimeout = 0.0;
    _Dst->IrisAsyncLoadingPriority = Invalid;
  }
  (_Dst->Owner).field0_0x0._s_0 = (FNetRefHandle_u_0_s_0)local_res10;
  _Dst->PendingBatchStartCycles = (ulong64)local_res8;
  local_18 = &local_res10;
  local_10 = &local_res18;
  _Dst->NextWarningTimeout =
       (double)(ulonglong)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle64 +
       (double)QueuedBatchTimeoutSeconds;
  local_res18 = _Dst;
  TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Net::FNetRefHandle_const_&,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_&&>_>
            ((TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<UE::Net::FNetRefHandle_const_&,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_&&>
                      *)&local_res8.s,(bool *)&local_18);
  pFVar4 = local_res18;
  if (local_res18 != (FPendingBatchData *)0x0) {
    FVar1 = (local_res18->CreationDependentParents).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    FVar1 = (pFVar4->ResolvedReferences).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    FVar1 = (pFVar4->PendingMustBeMappedReferences).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    FVar2 = (pFVar4->QueuedDataChunks).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::Net::Private::FQueuedDataChunk>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar3 = (pFVar4->DataChunkStorage).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    ::operator_delete(pFVar4,0x180);
  }
  return _Dst;
}

// Find @ 1442c0450

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FPendingBatchData * __thiscall
UE::Net::Private::FPendingBatchHolder::Find(FPendingBatchHolder *this,FNetRefHandle param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  
  uVar4 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  if (*(int *)&(this->PendingBatches).field_0x8 != *(int *)&(this->PendingBatches).field_0x34) {
    puVar5 = *(undefined1 **)&(this->PendingBatches).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->PendingBatches).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                              (ulonglong)(*(int *)&(this->PendingBatches).field_0x48 - 1)) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->PendingBatches + (longlong)iVar2 * 0x18;
        if ((*(ulonglong *)(*(longlong *)&this->PendingBatches + (longlong)iVar2 * 0x18) &
            0x3fffffffffffff) == uVar4) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar3 = (undefined8 *)0x0;
          }
          if (puVar3 == (undefined8 *)0x0) {
            return (FPendingBatchData *)0x0;
          }
          return (FPendingBatchData *)*puVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (FPendingBatchData *)0x0;
}

// FindOrCreate @ 1442c1270

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

FPendingBatchData * __thiscall
UE::Net::Private::FPendingBatchHolder::FindOrCreate(FPendingBatchHolder *this,FNetRefHandle param_1)

{
  longlong lVar1;
  ForElementType<UE::Net::FNetRefHandle> FVar2;
  ForElementType<UE::Net::Private::FQueuedDataChunk> FVar3;
  ForElementType<unsigned_int> FVar4;
  int iVar5;
  FPendingBatchData *pFVar6;
  FPendingBatchData *pFVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  LARGE_INTEGER local_res8;
  FNetRefHandle_u_0 local_res10;
  FPendingBatchData *local_res18 [2];
  FNetRefHandle_u_0 *local_28;
  FPendingBatchData **local_20;
  
  pFVar7 = (FPendingBatchData *)0x0;
  uVar9 = (ulonglong)param_1.field0_0x0 & 0x3fffffffffffff;
  if (*(int *)&(this->PendingBatches).field_0x8 != *(int *)&(this->PendingBatches).field_0x34) {
    puVar8 = *(undefined1 **)&(this->PendingBatches).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->PendingBatches).field_0x38;
    }
    iVar5 = *(int *)(puVar8 + ((uVar9 >> 0x20) * 0x17 + uVar9 &
                              (ulonglong)(*(int *)&(this->PendingBatches).field_0x48 - 1)) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&this->PendingBatches + (longlong)iVar5 * 0x18;
        if ((*(ulonglong *)(*(longlong *)&this->PendingBatches + (longlong)iVar5 * 0x18) &
            0x3fffffffffffff) == uVar9) {
          pFVar6 = (FPendingBatchData *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar6 = pFVar7;
          }
          if (pFVar6 != (FPendingBatchData *)0x0) {
            return *(FPendingBatchData **)(pFVar6->DataChunkStorage).AllocatorInstance.InlineData;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  local_res10 = param_1.field0_0x0;
  QueryPerformanceCounter(&local_res8);
  pFVar6 = ::operator_new(0x180);
  if (pFVar6 != (FPendingBatchData *)0x0) {
    memset(pFVar6,0,0x180);
    (pFVar6->DataChunkStorage).ArrayMax = 0x20;
    (pFVar6->QueuedDataChunks).ArrayMax = 4;
    (pFVar6->PendingMustBeMappedReferences).ArrayMax = 4;
    (pFVar6->ResolvedReferences).ArrayMax = 4;
    (pFVar6->CreationDependentParents).ArrayMax = 4;
    pFVar6->NextWarningTimeout = 0.0;
    pFVar6->IrisAsyncLoadingPriority = Invalid;
    pFVar7 = pFVar6;
  }
  (pFVar7->Owner).field0_0x0._s_0 = (FNetRefHandle_u_0_s_0)local_res10;
  pFVar7->PendingBatchStartCycles = (ulong64)local_res8;
  local_28 = &local_res10;
  local_20 = local_res18;
  pFVar7->NextWarningTimeout =
       (double)(ulonglong)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle64 +
       (double)QueuedBatchTimeoutSeconds;
  local_res18[0] = pFVar7;
  TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::Net::FNetRefHandle_const_&,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_&&>_>
            ((TSet<TTuple<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_>,TDefaultMapHashableKeyFuncs<UE::Net::FNetRefHandle,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<UE::Net::FNetRefHandle_const_&,TUniquePtr<UE::Net::Private::FPendingBatchData,TDefaultDelete<UE::Net::Private::FPendingBatchData>_>_&&>
                      *)&local_res8.s,(bool *)&local_28);
  pFVar6 = local_res18[0];
  if (local_res18[0] != (FPendingBatchData *)0x0) {
    FVar2 = (local_res18[0]->CreationDependentParents).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar2 = (pFVar6->ResolvedReferences).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar2 = (pFVar6->PendingMustBeMappedReferences).AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<UE::Net::FNetRefHandle>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar3 = (pFVar6->QueuedDataChunks).AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<UE::Net::Private::FQueuedDataChunk>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    FVar4 = (pFVar6->DataChunkStorage).AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    ::operator_delete(pFVar6,0x180);
  }
  return pFVar7;
}

