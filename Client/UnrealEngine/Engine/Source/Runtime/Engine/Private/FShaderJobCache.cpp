// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 27

// FShaderJobCache @ 14850f2e0

FShaderJobCache * __thiscall
FShaderJobCache::FShaderJobCache(FShaderJobCache *this,FWindowsRecursiveMutex *param_1)

{
  uint uVar1;
  FShaderCompilerJobTable *pFVar2;
  longlong lVar3;
  longlong lVar4;
  
  this->CompileQueueSection = param_1;
  (this->JobLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->PendingSubmitJobTaskJobs = (FShaderCommonCompileJob *)0x0;
  (this->NumPendingJobs).Elements[0] = (atomic<int>)0x0;
  (this->NumPendingJobs).Elements[1] = (atomic<int>)0x0;
  (this->NumPendingJobs).Elements[2] = (atomic<int>)0x0;
  (this->NumPendingJobs).Elements[3] = (atomic<int>)0x0;
  (this->NumPendingJobs).Elements[4] = (atomic<int>)0x0;
  pFVar2 = &this->JobTable;
  (this->NumOutstandingJobs).Counter = 0;
  lVar3 = 0x80;
  do {
    pFVar2->Stripes[0][0].Jobs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar2->Stripes[0][0].Jobs.ArrayNum = 0;
    pFVar2->Stripes[0][0].Jobs.ArrayMax = 0;
    pFVar2->Stripes[0][0].FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar2->Stripes[0][0].FreeIndices.ArrayNum = 0;
    pFVar2->Stripes[0][0].FreeIndices.ArrayMax = 0;
    pFVar2->Stripes[0][0].JobHash.HashSize = 0x400;
    pFVar2->Stripes[0][0].JobHash.HashMask = 0;
    pFVar2->Stripes[0][0].JobHash.IndexSize = 0;
    pFVar2->Stripes[0][0].JobHash.Hash = FHashTable::EmptyHash;
    pFVar2->Stripes[0][0].JobHash.NextIndex = (uint *)0x0;
    pFVar2->Stripes[0][0].StripeLock.Mutex.Mutex.Ptr = (void *)0x0;
    pFVar2 = (FShaderCompilerJobTable *)(pFVar2->Stripes[0] + 1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *(undefined8 *)&this->Outputs = 0;
  *(undefined8 *)&(this->Outputs).field_0x8 = 0;
  *(undefined8 *)&(this->Outputs).field_0x20 = 0;
  *(undefined4 *)&(this->Outputs).field_0x28 = 0;
  *(undefined4 *)&(this->Outputs).field_0x2c = 0x80;
  *(undefined4 *)&(this->Outputs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Outputs).field_0x34 = 0;
  *(undefined8 *)&(this->Outputs).field_0x40 = 0;
  *(undefined4 *)&(this->Outputs).field_0x48 = 0;
  *(undefined8 *)&this->CachedJobNames = 0;
  *(undefined8 *)&(this->CachedJobNames).field_0x8 = 0;
  *(undefined8 *)&(this->CachedJobNames).field_0x20 = 0;
  *(undefined4 *)&(this->CachedJobNames).field_0x28 = 0;
  *(undefined4 *)&(this->CachedJobNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedJobNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedJobNames).field_0x34 = 0;
  *(undefined8 *)&(this->CachedJobNames).field_0x40 = 0;
  *(undefined4 *)&(this->CachedJobNames).field_0x48 = 0;
  (this->InputHashToJobData).DataBlocks.Array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InputHashToJobData).DataBlocks.Array.ArrayNum = 0;
  (this->InputHashToJobData).DataBlocks.Array.ArrayMax = 0;
  (this->InputHashToJobData).NumItems = 0;
  (this->InputHashToJobData).HashTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputHashToJobData).HashTable.ArrayNum = 0;
  (this->InputHashToJobData).HashTable.ArrayMax = 0;
  (this->InputHashToJobData).HashTableMask = 0;
  FShaderJobDataMap::Reserve(&this->InputHashToJobData,0x200);
  (this->DuplicateJobs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DuplicateJobs).ArrayNum = 0;
  (this->DuplicateJobs).ArrayMax = 0;
  this->TotalSearchAttempts = 0;
  this->TotalCacheHits = 0;
  this->TotalCacheDuplicates = 0;
  this->TotalCacheDDCQueries = 0;
  this->TotalCacheDDCHits = 0;
  (this->PendingJobsHead).Elements[0] = (FShaderCommonCompileJob *)0x0;
  (this->PendingJobsHead).Elements[1] = (FShaderCommonCompileJob *)0x0;
  (this->PendingJobsHead).Elements[2] = (FShaderCommonCompileJob *)0x0;
  (this->PendingJobsHead).Elements[3] = (FShaderCommonCompileJob *)0x0;
  (this->PendingJobsHead).Elements[4] = (FShaderCommonCompileJob *)0x0;
  (this->NumPendingJobs).Elements[0] = (atomic<int>)0x0;
  (this->NumPendingJobs).Elements[1] = (atomic<int>)0x0;
  (this->NumPendingJobs).Elements[2] = (atomic<int>)0x0;
  (this->NumPendingJobs).Elements[3] = (atomic<int>)0x0;
  (this->NumPendingJobs).Elements[4] = (atomic<int>)0x0;
  (this->PendingJobsTail).Elements[0] = (this->PendingJobsHead).Elements;
  (this->PendingJobsTail).Elements[1] = (this->PendingJobsHead).Elements + 1;
  (this->PendingJobsTail).Elements[2] = (this->PendingJobsHead).Elements + 2;
  (this->PendingJobsTail).Elements[3] = (this->PendingJobsHead).Elements + 3;
  (this->PendingJobsTail).Elements[4] = (this->PendingJobsHead).Elements + 4;
  lVar3 = (longlong)(this->InputHashToJobData).HashTable.ArrayMax +
          ((longlong)(this->InputHashToJobData).DataBlocks.Array.ArrayNum * 0x1600 +
          (longlong)(this->InputHashToJobData).DataBlocks.Array.ArrayMax) * 2;
  uVar1 = *(uint *)&(this->Outputs).field_0x48;
  lVar4 = lVar3 + (int)uVar1;
  if (uVar1 < 2) {
    lVar4 = lVar3;
  }
  this->CurrentlyAllocatedMemory =
       (ulonglong)((*(int *)&(this->Outputs).field_0x2c + 0x1fU >> 5) << 2) +
       ((longlong)*(int *)&(this->Outputs).field_0xc * 0xc + 0x966 + lVar4) * 4;
  return this;
}

// ~FShaderJobCache @ 148511460

void __thiscall FShaderJobCache::~FShaderJobCache(FShaderJobCache *this)

{
  TMap<FBlake3Hash,FShaderJobCacheStoredOutput_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBlake3Hash,FShaderJobCacheStoredOutput_*,0>_>
  *this_00;
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FShaderJobCacheStoredOutput_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FShaderJobCacheStoredOutput_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FShaderJobCacheStoredOutput_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this_00 = &this->Outputs;
  TSet<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FShaderJobCacheStoredOutput_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FShaderJobCacheStoredOutput_*,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar8 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FShaderJobCacheStoredOutput_*,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      pvVar1 = *(void **)(*local_48 + 0x20 + (longlong)(int)uVar8 * 0x30);
      if (pvVar1 != (void *)0x0) {
        if (*(void **)((longlong)pvVar1 + 0x30) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar1 + 0x30));
        }
        DestructItems<FCompressedBuffer,int>
                  (*(FCompressedBuffer **)((longlong)pvVar1 + 0x20),
                   *(int *)((longlong)pvVar1 + 0x28));
        if (*(void **)((longlong)pvVar1 + 0x20) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar1 + 0x20));
        }
        DestructItems<FCompositeBuffer,int>
                  (*(FCompositeBuffer **)((longlong)pvVar1 + 0x10),*(int *)((longlong)pvVar1 + 0x18)
                  );
        if (*(void **)((longlong)pvVar1 + 0x10) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar1 + 0x10));
        }
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                  ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)((longlong)pvVar1 + 8))
        ;
        ::operator_delete(pvVar1,0x40);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar8 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar9 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar7 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar3 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_18->HashSize < iVar7)) || (iVar7 < local_18->HashSize)) {
        local_18->HashSize = iVar7;
        TSet<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FShaderJobCacheStoredOutput_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  pFVar2 = (this->DuplicateJobs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InputHashToJobData).HashTable.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TIndirectArray<FShaderJobDataBlock,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<FShaderJobDataBlock,TSizedDefaultAllocator<32>_>
            (&(this->InputHashToJobData).DataBlocks);
  *(undefined4 *)&(this->CachedJobNames).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedJobNames).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FBlake3Hash,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FBlake3Hash,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FBlake3Hash,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedJobNames);
  *(undefined4 *)&(this->Outputs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Outputs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  FShaderCompilerJobTable::~FShaderCompilerJobTable(&this->JobTable);
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->JobLock);
  if (BVar5 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->JobLock);
  }
  return;
}

// operator() @ 148514610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `FShaderJobCache::SubmitJobs'::__l14::<lambda_1>::operator()(void *this)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  LARGE_INTEGER local_50;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1537,"ShaderJobTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
               ,0x601);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1537);
  }
  QueryPerformanceCounter(&local_58);
  dVar4 = (double)local_58.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (0 < GShaderCompilerDebugStallSubmitJob) {
    FWindowsPlatformProcess::Sleep((float)GShaderCompilerDebugStallSubmitJob * __real_3a83126f);
  }
  bVar5 = PreprocessShader(*(FShaderCommonCompileJob **)this);
  puVar1 = *(undefined8 **)this;
  (**(code **)*puVar1)(puVar1,local_48);
  if (((*(byte *)(puVar1 + 8) & 0x10) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInputHashSet",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCompilerJobTypes.h"
                         ,0xd3,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((puVar1[0x14] == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(longlong *)puVar1[0x14] = (longlong)puVar1 + 0x44;
  lVar2 = *(longlong *)this;
  if ((*(longlong *)(lVar2 + 0xa0) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  *(undefined1 *)(*(longlong *)(lVar2 + 0xa0) + 8) = 1;
  UNLOCK();
  if (bVar5) {
    FShaderJobCache::SubmitJob
              (*(FShaderJobCache **)((longlong)this + 8),*(FShaderCommonCompileJob **)this);
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)&(*(FShaderJobCache **)((longlong)this + 8))->JobLock);
    lVar2 = *(longlong *)this;
    if (*(longlong *)(lVar2 + 8) != 0) {
      *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10) = *(undefined8 *)(lVar2 + 0x10);
    }
    if (*(undefined8 **)(lVar2 + 0x10) != (undefined8 *)0x0) {
      **(undefined8 **)(lVar2 + 0x10) = *(undefined8 *)(lVar2 + 8);
    }
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)((longlong)this + 8) + 8));
    FShaderJobCache::ProcessFinishedJob
              (*(FShaderJobCache **)((longlong)this + 8),*(FShaderCommonCompileJob **)this,Skipped);
  }
  QueryPerformanceCounter(&local_50);
  *(double *)(*(longlong *)this + 0x80) =
       (double)local_50.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar4;
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AddDuplicateJob @ 148515d50

void __thiscall
FShaderJobCache::AddDuplicateJob(FShaderJobCache *this,FShaderCommonCompileJob *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FShaderCommonCompileJob_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FShaderCommonCompileJob *local_res10 [3];
  
  local_res10[0] = param_1;
  if ((param_1->JobCacheRef).DuplicateIndex != -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DuplicateJob->JobCacheRef.DuplicateIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                       ,0x81e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = &this->DuplicateJobs;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->DuplicateJobs).ArrayMax * 8
     )) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->DuplicateJobs).ArrayNum;
  piVar1 = &(this->DuplicateJobs).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar6->AllocatorInstance,piVar1);
  }
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  (this->DuplicateJobs).ArrayNum = iVar5 + 1;
  *(FShaderCommonCompileJob **)(pFVar2 + (longlong)iVar5 * 8) = local_res10[0];
  (local_res10[0]->JobCacheRef).DuplicateIndex = iVar5;
  return;
}

// AddJobOutput @ 148515e50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderJobCache::AddJobOutput
          (FShaderJobCache *this,FShaderJobData *param_1,FShaderCommonCompileJob *param_2,
          FBlake3Hash *param_3,FShaderCacheSaveContext *param_4,int param_5,bool param_6)

{
  FBlake3Hash *_Buf2;
  bool *pbVar1;
  longlong *plVar2;
  atomic<unsigned___int64> *paVar3;
  atomic<unsigned___int64> aVar4;
  int iVar5;
  int *piVar6;
  FBufferOwner *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  uchar *puVar10;
  TConsoleVariableData<bool> *pTVar11;
  FShaderCacheSaveContext *pFVar12;
  bool bVar13;
  int iVar14;
  FBlake3Hash *pFVar15;
  FBlake3Hash *pFVar16;
  FString *pFVar17;
  FShaderCommonCompileJob *pFVar18;
  FShaderCommonCompileJob *pFVar19;
  ulong64 uVar20;
  IFileManager *pIVar21;
  undefined1 *puVar22;
  longlong lVar23;
  uint uVar24;
  void *_Buf1;
  uint uVar25;
  int iVar26;
  FShaderCommonCompileJob *pFVar27;
  int iVar28;
  ForAnyElementType FVar29;
  longlong lVar30;
  bool bVar31;
  bool bVar32;
  undefined1 auStackY_1218 [32];
  FShaderCommonCompileJob *local_11d8;
  FString local_11d0;
  FShaderCommonCompileJob *local_11c0;
  FShaderCacheSaveContext *local_11b8;
  FScriptContainerElement *local_11b0;
  undefined1 local_11a8 [8];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_11a0;
  FString local_1198;
  FString local_1188;
  FString local_1178;
  FString local_1168;
  FScriptContainerElement *local_1158;
  uint uStack_1150;
  undefined4 uStack_114c;
  FBlake3Hash *local_1148;
  FShaderCommonCompileJob **local_1140;
  FBlake3Hash *local_1138;
  FString *local_1130;
  FString local_1128;
  uchar *local_1118;
  longlong lStack_1110;
  FShaderCommonCompileJob *local_1108;
  longlong lStack_1100;
  FString local_10f8;
  TStringView<wchar_t> local_10e8;
  TArrayView<unsigned_char_const_,__int64> local_10d8;
  TArrayView<unsigned_char_const_,__int64> local_10c8;
  FString local_10b8;
  FBlake3Hash local_10a8;
  TStringBuilderBase<wchar_t> local_1088;
  wchar_t local_1068 [1024];
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x148515e72;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1218;
  local_11b8 = param_4;
  bVar31 = -1 < CpuChannel->Enabled;
  local_11d8 = (FShaderCommonCompileJob *)param_1;
  local_11c0 = param_2;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2131,"FShaderJobCache::Add",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
               ,0x853);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2131);
  }
  pTVar11 = CVarShaderCompilerDebugValidateJobCache.Ref;
  _Buf2 = &param_1->OutputHash;
  pFVar27 = (FShaderCommonCompileJob *)0x0;
  pbVar1 = &param_1->bOutputFromDDC;
  uVar25 = 0;
  pFVar15 = _Buf2;
  pFVar16 = _Buf2;
  if (_Buf2 == (FBlake3Hash *)pbVar1) {
LAB_148515f61:
    ComputeJobHash(this,&local_10a8,(FShaderCacheSerializeContext *)param_4);
    goto joined_r0x000148515f76;
  }
  do {
    if (*(int *)pFVar15->Hash != 0) {
      bVar13 = IsInParallelGameThread();
      if (bVar13) {
LAB_148515f4f:
        pFVar18 = pFVar27;
      }
      else {
        bVar13 = IsInGameThread();
        pFVar18 = (FShaderCommonCompileJob *)&DAT_00000001;
        if (bVar13) goto LAB_148515f4f;
      }
      param_2 = local_11c0;
      if (pTVar11->ShadowedValue[(longlong)((longlong)(pFVar18->InputHash).Hash + -0x44)] == false)
      goto LAB_148516a6b;
      goto LAB_148515f61;
    }
    puVar10 = pFVar15->Hash;
    pFVar15 = (FBlake3Hash *)(puVar10 + 4);
  } while ((FBlake3Hash *)(puVar10 + 4) != (FBlake3Hash *)pbVar1);
  ComputeJobHash(this,&local_10a8,(FShaderCacheSerializeContext *)param_4);
  do {
    pTVar11 = CVarShaderCompilerDebugValidateJobCache.Ref;
    if (*(int *)pFVar16->Hash != 0) {
      bVar13 = IsInParallelGameThread();
      if (bVar13) {
LAB_14851613e:
        pFVar18 = pFVar27;
      }
      else {
        bVar13 = IsInGameThread();
        pFVar18 = (FShaderCommonCompileJob *)&DAT_00000001;
        if (bVar13) goto LAB_14851613e;
      }
      if (pTVar11->ShadowedValue[(longlong)((longlong)(pFVar18->InputHash).Hash + -0x44)] != false)
      {
        iVar14 = memcmp(&local_10a8,_Buf2,0x20);
        if (iVar14 != 0) {
          local_1088.Base = local_1068;
          local_1088.bIsDynamic = false;
          local_1088.bIsExternal = false;
          local_1088.CurPos = local_1068;
          local_1088.End = (wchar_t *)&local_868;
          (**(code **)(*(longlong *)((FBlake3Hash *)&param_2->_padding_)->Hash + 0x28))
                    (param_2,&local_1088);
          iVar14 = TSet<TTuple<FBlake3Hash,FString>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FString,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FBlake3Hash>
                             ((TSet<TTuple<FBlake3Hash,FString>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FString,0>,FDefaultSetAllocator>
                               *)&this->CachedJobNames,*(uint *)_Buf2->Hash,_Buf2);
          if (iVar14 == -1) {
LAB_1485161e3:
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("CachedJobName",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                ,0x864,L"");
            if (bVar13) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          else {
            lVar23 = (longlong)iVar14 * 0x38 + *(longlong *)&this->CachedJobNames;
            pFVar18 = (FShaderCommonCompileJob *)(lVar23 + 0x20);
            if (lVar23 == 0) {
              pFVar18 = pFVar27;
            }
            if (pFVar18 == (FShaderCommonCompileJob *)0x0) goto LAB_1485161e3;
          }
          if (2 < (byte)LogShaderCompilers._0_1_) {
            if (local_1088.End < (TStringBuilderBase<wchar_t> *)(local_1088.CurPos + 1)) {
              TStringBuilderBase<wchar_t>::Extend(&local_1088,1);
            }
            *local_1088.CurPos = L'\0';
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers)
            ;
          }
          if ((GDumpShaderDebugInfo != Always) && (bOnce == false)) {
            if (2 < (byte)LogShaderCompilers._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
            }
            bOnce = true;
          }
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1088);
        }
        goto LAB_148516a6b;
      }
      break;
    }
    pFVar16 = (FBlake3Hash *)(pFVar16->Hash + 4);
joined_r0x000148515f76:
  } while (pFVar16 != (FBlake3Hash *)pbVar1);
  pTVar11 = CVarDumpShaderOutputCacheHits.Ref;
  bVar13 = IsInParallelGameThread();
  if (bVar13) {
LAB_148515fa7:
    pFVar18 = pFVar27;
  }
  else {
    bVar13 = IsInGameThread();
    pFVar18 = (FShaderCommonCompileJob *)&DAT_00000001;
    if (bVar13) goto LAB_148515fa7;
  }
  bVar13 = pTVar11->ShadowedValue[(longlong)((longlong)(pFVar18->InputHash).Hash + -0x44)];
  local_11d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_11d0.Data.ArrayNum = 0;
  local_11d0.Data.ArrayMax = 0;
  local_11b0 = (FScriptContainerElement *)0x0;
  if (bVar13 != false) {
    pFVar18 = pFVar27;
    if (param_2->Type == Single) {
      pFVar18 = param_2;
    }
    if ((pFVar18 != (FShaderCommonCompileJob *)0x0) && (1 < *(int *)&pFVar18[2].PrevLink)) {
      ::FString::operator=(&local_11d0,(FString *)&pFVar18[2].NextLink);
      FPaths::GetCleanFilename(&local_1168,(FString *)((longlong)pFVar18[1].InputHash.Hash + 0xc));
      pFVar17 = FPaths::GetBaseFilename(&local_10f8,&local_1168,true);
      if (&local_10b8 != pFVar17) {
        local_11b0 = (pFVar17->Data).AllocatorInstance.Data;
        (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar17->Data).ArrayNum = 0;
        (pFVar17->Data).ArrayMax = 0;
      }
      if (local_10f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_10f8.Data.AllocatorInstance.Data);
      }
      if (local_1168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1168.Data.AllocatorInstance.Data);
      }
    }
  }
  bVar32 = GShaderCompilerDebugDiscardCacheOutputs != 0;
  if (GShaderCompilerDebugDiscardCacheOutputs == 0) {
    *(ulonglong *)_Buf2->Hash = CONCAT44(local_10a8.Hash._4_4_,local_10a8.Hash._0_4_);
    *(undefined8 *)((param_1->OutputHash).Hash + 8) = local_10a8.Hash._8_8_;
    local_11d8->field_0x40 = false;
    *(undefined8 *)((param_1->OutputHash).Hash + 0x10) = local_10a8.Hash._16_8_;
    *(undefined8 *)((param_1->OutputHash).Hash + 0x18) = local_10a8.Hash._24_8_;
  }
  if (*(int *)&(this->Outputs).field_0x8 != *(int *)&(this->Outputs).field_0x34) {
    puVar22 = *(undefined1 **)&(this->Outputs).field_0x40;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = &(this->Outputs).field_0x38;
    }
    iVar14 = *(int *)(puVar22 +
                     (ulonglong)(*(int *)&(this->Outputs).field_0x48 - 1U & local_10a8.Hash._0_4_) *
                     4);
    if (iVar14 != -1) {
      lVar23 = *(longlong *)&(this->Outputs).field_0x0;
      do {
        _Buf1 = (void *)((longlong)iVar14 * 0x30 + lVar23);
        iVar14 = memcmp(_Buf1,&local_10a8,0x20);
        if (iVar14 == 0) {
          pFVar18 = (FShaderCommonCompileJob *)((longlong)_Buf1 + 0x20);
          if (_Buf1 == (void *)0x0) {
            pFVar18 = pFVar27;
          }
          if (pFVar18 != (FShaderCommonCompileJob *)0x0) {
            piVar6 = *(int **)((FBlake3Hash *)&pFVar18->_padding_)->Hash;
            if (!bVar32) {
              *piVar6 = *piVar6 + 1;
            }
            if ((bVar13 != false) &&
               (1 < *(int *)(*(longlong *)((FBlake3Hash *)&pFVar18->_padding_)->Hash + 0x38))) {
              ::FString::PrintfImpl(&local_1198,L"%s/%s.%d.cachehit");
              pIVar21 = IFileManager::Get();
              local_1158 = local_11d0.Data.AllocatorInstance.Data;
              FVar29.Data = (FScriptContainerElement *)L"";
              if (local_1198.Data.ArrayNum != 0) {
                FVar29.Data = local_1198.Data.AllocatorInstance.Data;
              }
              uStack_1150 = local_11d0.Data.ArrayNum - 1;
              if (local_11d0.Data.ArrayNum == 0) {
                uStack_1150 = uVar25;
              }
              local_10e8._12_4_ = uStack_114c;
              local_10e8.Size = uStack_1150;
              local_10e8.DataPtr = (wchar_t *)local_11d0.Data.AllocatorInstance.Data;
              FFileHelper::SaveStringToFile(&local_10e8,(wchar_t *)FVar29.Data,AutoDetect,pIVar21,0)
              ;
              if (local_1198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1198.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_148516a4a;
          }
          break;
        }
        iVar14 = *(int *)((longlong)_Buf1 + 0x28);
      } while (iVar14 != -1);
    }
  }
  if (bVar32) goto LAB_1485165da;
  uVar24 = *(uint *)&(this->Outputs).field_0x48;
  pFVar18 = pFVar27;
  if (1 < uVar24) {
    pFVar18 = (FShaderCommonCompileJob *)((longlong)(int)uVar24 << 2);
  }
  iVar14 = *(int *)&(this->Outputs).field_0x2c;
  iVar26 = *(int *)&(this->Outputs).field_0xc;
  plVar2 = &local_11b8->_padding_;
  if (((local_11b8->_padding_ == 0) || ((int)local_11b8->_padding_ == 0)) &&
     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                         ("SaveContext.HasData()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                          ,0x8b8,L""), bVar32)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar19 = ::operator_new(0x40);
  local_11d8 = pFVar27;
  if (pFVar19 != (FShaderCommonCompileJob *)0x0) {
    *(uchar *)&pFVar19->_padding_ = '\0';
    *(uchar *)((longlong)&pFVar19->_padding_ + 1) = '\0';
    *(uchar *)((longlong)&pFVar19->_padding_ + 2) = '\0';
    *(uchar *)((longlong)&pFVar19->_padding_ + 3) = '\0';
    pFVar19->NextLink = (FShaderCommonCompileJob *)0x0;
    pFVar19->PrevLink = (FShaderCommonCompileJob **)0x0;
    (pFVar19->PendingShaderMap).Reference = (FPendingShaderMapCompileResults *)0x0;
    *(uchar *)&(pFVar19->NumRefs).Counter = '\0';
    *(uchar *)((longlong)&(pFVar19->NumRefs).Counter + 1) = '\0';
    *(uchar *)((longlong)&(pFVar19->NumRefs).Counter + 2) = '\0';
    *(uchar *)((longlong)&(pFVar19->NumRefs).Counter + 3) = '\0';
    *(uchar *)&pFVar19->JobIndex = '\0';
    *(uchar *)((longlong)&pFVar19->JobIndex + 1) = '\0';
    *(uchar *)((longlong)&pFVar19->JobIndex + 2) = '\0';
    *(uchar *)((longlong)&pFVar19->JobIndex + 3) = '\0';
    pFVar19->Hash = 0;
    pFVar19->Id = 0;
    pFVar19->Type = Single;
    pFVar19->Priority = Low;
    pFVar19->PendingPriority = Low;
    pFVar19->CurrentWorker = None;
    *(undefined4 *)&pFVar19->field_0x34 = 0;
    (pFVar19->RequestOwner).Ptr = (FRequestOwner *)0x0;
    local_11d8 = pFVar19;
  }
  *(int *)(((FBlake3Hash *)&local_11d8->_padding_)->Hash + 4) = param_5;
  FSharedBuffer::operator=((FSharedBuffer *)&local_11d8->NextLink,(FSharedBuffer *)plVar2);
  FShaderCacheSerializeContext::MoveCode
            ((FShaderCacheSerializeContext *)local_11b8,
             (TArray<FCompositeBuffer,TSizedDefaultAllocator<32>_> *)&local_11d8->PrevLink,
             (TArray<FCompressedBuffer,TSizedDefaultAllocator<32>_> *)&local_11d8->NumRefs);
  iVar28 = local_11d0.Data.ArrayNum + -1;
  if (local_11d0.Data.ArrayNum == 0) {
    iVar28 = 0;
  }
  ::FString::AssignRange
            ((FString *)&local_11d8->Type,(wchar_t *)local_11d0.Data.AllocatorInstance.Data,iVar28);
  *(int *)((FBlake3Hash *)&local_11d8->_padding_)->Hash =
       *(int *)((FBlake3Hash *)&local_11d8->_padding_)->Hash + 1;
  local_1148 = &local_10a8;
  local_1140 = &local_11d8;
  TSet<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FShaderJobCacheStoredOutput_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FBlake3Hash_const_&,FShaderJobCacheStoredOutput_*_const_&>_>
            ((TSet<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FShaderJobCacheStoredOutput_*,0>,FDefaultSetAllocator>
              *)&this->Outputs,
             (TPairInitializer<FBlake3Hash_const_&,FShaderJobCacheStoredOutput_*_const_&> *)
             local_11a8,(bool *)&local_1148);
  pTVar11 = CVarShaderCompilerDebugValidateJobCache.Ref;
  bVar32 = IsInParallelGameThread();
  if (bVar32) {
LAB_1485164a6:
    pFVar19 = pFVar27;
  }
  else {
    bVar32 = IsInGameThread();
    pFVar19 = (FShaderCommonCompileJob *)&DAT_00000001;
    if (bVar32) goto LAB_1485164a6;
  }
  if (pTVar11->ShadowedValue[(longlong)((longlong)(pFVar19->InputHash).Hash + -0x44)] != false) {
    local_868.Base = local_848;
    local_868.CurPos = local_848;
    local_868.bIsDynamic = false;
    local_868.bIsExternal = false;
    local_868.End = (wchar_t *)&local_48;
    (**(code **)(*(longlong *)((FBlake3Hash *)&local_11c0->_padding_)->Hash + 0x28))
              (local_11c0,&local_868);
    if (local_868.End < local_868.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,1);
    }
    *local_868.CurPos = L'\0';
    ::FString::FString(&local_1128,local_868.Base);
    local_1138 = &local_10a8;
    local_1130 = &local_1128;
    TSet<TTuple<FBlake3Hash,FString>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FBlake3Hash_const_&,FString_&&>_>
              ((TSet<TTuple<FBlake3Hash,FString>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FString,0>,FDefaultSetAllocator>
                *)&this->CachedJobNames,
               (TPairInitializer<FBlake3Hash_const_&,FString_&&> *)(local_11a8 + 4),
               (bool *)&local_1138);
    if (local_1128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1128.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  }
  uVar24 = *(uint *)&(this->Outputs).field_0x48;
  pFVar19 = pFVar27;
  if (1 < uVar24) {
    pFVar19 = (FShaderCommonCompileJob *)((longlong)(int)uVar24 << 2);
  }
  iVar28 = *(int *)&(this->Outputs).field_0x2c;
  iVar5 = *(int *)&(this->Outputs).field_0xc;
  uVar20 = FShaderJobCacheStoredOutput::GetAllocatedSize((FShaderJobCacheStoredOutput *)local_11d8);
  this->CurrentlyAllocatedMemory =
       (ulong64)((longlong)pFVar19 +
                this->CurrentlyAllocatedMemory +
                uVar20 + (((longlong)iVar5 * 0x30 + (ulonglong)((iVar28 + 0x1fU >> 5) << 2)) -
                         ((longlong)&pFVar18->InputHash +
                         (longlong)iVar26 * 0x30 + (ulonglong)((iVar14 + 0x1fU >> 5) << 2) + -0x44))
                );
LAB_1485165da:
  if ((bVar13 != false) && (1 < local_11d0.Data.ArrayNum)) {
    ::FString::PrintfImpl(&local_1178,L"%s/%s.joboutput");
    pIVar21 = IFileManager::Get();
    pFVar12 = local_11b8;
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_1178.Data.ArrayNum != 0) {
      FVar29.Data = local_1178.Data.AllocatorInstance.Data;
    }
    uVar20 = FSharedBuffer::GetSize((FSharedBuffer *)&local_11b8->_padding_);
    local_1118 = FSharedBuffer::GetData((FSharedBuffer *)&pFVar12->_padding_);
    if (((int)uVar20 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lStack_1110 = (longlong)(int)uVar20;
    local_10d8.DataPtr = local_1118;
    local_10d8.ArrayNum = lStack_1110;
    FFileHelper::SaveArrayToFile(&local_10d8,(wchar_t *)FVar29.Data,pIVar21,0);
    local_11c0 = (FShaderCommonCompileJob *)((ulonglong)local_11c0 & 0xffffffff00000000);
    pFVar18 = pFVar27;
    pFVar19 = pFVar27;
    if (0 < (int)local_11b8->_padding_) {
      do {
        pFVar12 = local_11b8;
        ::FString::PrintfImpl(&local_1188,L"%s/%s_%d.bytecode");
        uVar24 = uVar25;
        if ((int)(uint)pFVar18 < (int)pFVar12->_padding_) {
          uVar24 = ~(uint)pFVar18 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar23 = (longlong)(pFVar19->InputHash).Hash + pFVar12->_padding_ + -0x44;
        if (*(int *)(lVar23 + 0x10) < 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L"");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
LAB_148516763:
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("JobCode.GetSegments().Num() == 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                              ,0x8d7,L"");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else if (*(int *)(lVar23 + 0x10) != 2) goto LAB_148516763;
        lVar30 = lVar23;
        if (*(longlong *)(lVar23 + 8) != 0) {
          lVar30 = *(longlong *)(lVar23 + 8);
        }
        if (*(int *)(lVar23 + 0x10) < 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L"");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
LAB_1485167c0:
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar13) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else if (*(int *)(lVar23 + 0x10) < 2) goto LAB_1485167c0;
        pFVar7 = *(FBufferOwner **)(lVar30 + 8);
        if (pFVar7 != (FBufferOwner *)0x0) {
          LOCK();
          paVar3 = &pFVar7->ReferenceCountsAndFlags;
          aVar4 = *paVar3;
          *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + 1);
          UNLOCK();
          if (((ulonglong)aVar4 & 0x3fffffff) == 0) {
            LOCK();
            pFVar7->ReferenceCountsAndFlags =
                 (atomic<unsigned___int64>)((longlong)pFVar7->ReferenceCountsAndFlags + 0x40000000);
            UNLOCK();
          }
        }
        local_11a0.Owner = pFVar7;
        pIVar21 = IFileManager::Get();
        FVar29.Data = (FScriptContainerElement *)L"";
        if (local_1188.Data.ArrayNum != 0) {
          FVar29.Data = local_1188.Data.AllocatorInstance.Data;
        }
        pFVar18 = pFVar27;
        uVar24 = uVar25;
        if (pFVar7 != (FBufferOwner *)0x0) {
          if (((ulonglong)pFVar7->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
            (*(code *)(((FShaderJobCacheStoredOutput *)pFVar7->_padding_)->JobOutput).Owner.Owner)
                      (pFVar7);
          }
          uVar20 = pFVar7->Size;
          if (((ulonglong)pFVar7->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
            (*(code *)(((FShaderJobCacheStoredOutput *)pFVar7->_padding_)->JobOutput).Owner.Owner)
                      (pFVar7);
          }
          pFVar18 = pFVar7->Data;
          uVar24 = (uint)uVar20;
        }
        if (((int)uVar24 < 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lStack_1100 = (longlong)(int)uVar24;
        local_1108 = pFVar18;
        local_10c8.DataPtr = (uchar *)pFVar18;
        local_10c8.ArrayNum = lStack_1100;
        FFileHelper::SaveArrayToFile(&local_10c8,(wchar_t *)FVar29.Data,pIVar21,0);
        UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
        ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_11a0);
        if (local_1188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1188.Data.AllocatorInstance.Data);
        }
        uVar24 = (int)local_11c0 + 1;
        local_11c0 = (FShaderCommonCompileJob *)CONCAT44(local_11c0._4_4_,uVar24);
        pFVar18 = (FShaderCommonCompileJob *)(ulonglong)uVar24;
        pFVar19 = (FShaderCommonCompileJob *)&pFVar19->PendingShaderMap;
      } while ((int)uVar24 < (int)local_11b8->_padding_);
    }
    if (local_1178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1178.Data.AllocatorInstance.Data);
    }
  }
  uVar20 = GetCurrentMemoryBudget(this);
  if ((uVar20 != 0) && (uVar20 < this->CurrentlyAllocatedMemory)) {
    bVar13 = -1 < CpuChannel->Enabled;
    if (bVar13) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2276,"FShaderJobCache::Trim",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                 ,0x8e4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2276);
    }
    iVar14 = 100;
    if (GShaderCompilerJobCacheOverflowReducePercent < 100) {
      iVar14 = GShaderCompilerJobCacheOverflowReducePercent;
    }
    iVar26 = 0;
    if (0 < iVar14) {
      iVar26 = iVar14;
    }
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (longlong)iVar26 * uVar20;
    lVar23 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar9,8);
    CullOutputsToMemoryBudget(this,lVar23 + ((longlong)iVar26 * uVar20 - lVar23 >> 1) >> 6);
    if (3 < (byte)LogShaderCompilers._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
LAB_148516a4a:
  if (local_11b0 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11b0);
  }
  if (local_11d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_11d0.Data.AllocatorInstance.Data);
  }
LAB_148516a6b:
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AddToCacheAndProcessPending @ 148516af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderJobCache::AddToCacheAndProcessPending(FShaderJobCache *this,FShaderCommonCompileJob *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FShaderCommonCompileJob *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  FShaderJobData *pFVar10;
  undefined1 auStackY_208 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  FShaderCommonCompileJob *local_1a0;
  longlong local_198 [2];
  FShaderCacheSaveContext local_188;
  FString local_f8;
  TArrayView<FCompressedBuffer,int> local_e8;
  TArrayView<FCompositeBuffer,int> local_d8;
  FShaderCacheLoadContext local_c8;
  FBlake3Hash local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((param_1->JobCacheRef).Block != (FShaderJobDataBlock *)0x0) {
    if (param_1->bInputHashSet == '\0') {
      local_1b8 = 0;
      `FShaderJobCache::AddToCacheAndProcessPending'::__l2::<lambda_1>::operator()(&local_1b8);
    }
    (**(code **)param_1->_padding_)(param_1,&local_58);
    FShaderCacheSaveContext::FShaderCacheSaveContext(&local_188);
    (**(code **)(param_1->_padding_ + 8))(param_1,&local_188);
    FShaderCacheSaveContext::Finalize(&local_188);
    if (((param_1->JobCacheRef).Block == (FShaderJobDataBlock *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CacheRef.Block",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                           ,0x36e,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar10 = ((param_1->JobCacheRef).Block)->Data + (param_1->JobCacheRef).IndexInBlock;
    local_1b0.Data = (FScriptContainerElement *)0x0;
    local_1a8 = 0;
    AcquireSRWLockExclusive((PSRWLOCK)&this->JobLock);
    for (local_1a0 = pFVar10->DuplicateJobsWaitList; local_1a0 != (FShaderCommonCompileJob *)0x0;
        local_1a0 = local_1a0->NextLink) {
      if ((local_1a0 == param_1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurHead != FinishedJob",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                             ,0x660,
                             L"Job that is being added to cache was also on a waiting list! Error in bookkeeping."
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((local_1b0.Data <= (FScriptContainerElement *)&local_1a0) &&
          ((FScriptContainerElement *)&local_1a0 < local_1b0.Data + (longlong)local_1a8._4_4_ * 8))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (int)local_1a8;
      if ((int)local_1a8 == local_1a8._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_1b0,(int *)((longlong)&local_1a8 + 4));
      }
      local_1a8 = CONCAT44(local_1a8._4_4_,iVar7 + 1);
      *(FShaderCommonCompileJob **)(local_1b0.Data + (longlong)iVar7 * 8) = local_1a0;
      RemoveDuplicateJob(this,local_1a0);
    }
    pFVar10->DuplicateJobsWaitList = (FShaderCommonCompileJob *)0x0;
    if (param_1->bSucceeded != '\0') {
      if (((bool)param_1->bBypassCache) ||
         ((GShaderCompilerPerShaderDDCGlobal == 0 &&
          (param_1->bIsDefaultMaterial != '\0' || param_1->bIsGlobalShader != '\0')))) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      AddJobOutput(this,pFVar10,param_1,&local_58,&local_188,(int)local_1a8,bVar6);
    }
    pFVar4 = (pFVar10->JobInFlight).Reference;
    if (pFVar4 != (FShaderCommonCompileJob *)0x0) {
      (pFVar10->JobInFlight).Reference = (FShaderCommonCompileJob *)0x0;
      FShaderCommonCompileJob::Release(pFVar4);
    }
    (param_1->JobCacheRef).Block = (FShaderJobDataBlock *)0x0;
    (param_1->JobCacheRef).IndexInBlock = -1;
    (param_1->JobCacheRef).DuplicateIndex = -1;
    ReleaseSRWLockExclusive((PSRWLOCK)&this->JobLock);
    if ((int)local_1a8 != 0) {
      if (6 < (byte)LogShaderCompilers._0_1_) {
        ::LexToString(&local_f8,&local_58);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      if (((local_188._padding_ == 0) || ((int)local_188._padding_ == 0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("SaveContext.HasData()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                             ,0x689,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_e8.DataPtr = (FCompressedBuffer *)local_188._padding_;
      local_e8._8_8_ = local_188._padding_;
      local_d8.DataPtr = (FCompositeBuffer *)local_188._padding_;
      if (local_188._padding_ != 0) {
        LOCK();
        lVar2 = local_188._padding_ + 0x18;
        uVar8 = *(ulonglong *)lVar2;
        *(longlong *)lVar2 = *(longlong *)lVar2 + 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 0) {
          LOCK();
          *(longlong *)(local_188._padding_ + 0x18) =
               *(longlong *)(local_188._padding_ + 0x18) + 0x40000000;
          UNLOCK();
        }
      }
      local_198[0] = local_188._padding_;
      FShaderCacheLoadContext::FShaderCacheLoadContext
                (&local_c8,(FSharedBuffer)local_198,&local_d8,&local_e8);
      iVar7 = (int)local_1a8;
      uVar8 = (ulonglong)(int)local_1a8;
      pFVar3 = local_1b0.Data + uVar8 * 8;
      FVar9.Data = local_1b0.Data;
      while( true ) {
        if ((int)uVar8 != iVar7) {
          local_1b7[0] = 0;
          `TCheckedPointerIterator<FShaderCommonCompileJob_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_1b7);
        }
        if (FVar9.Data == pFVar3) break;
        pFVar4 = *(FShaderCommonCompileJob **)FVar9.Data;
        FShaderCacheLoadContext::Reuse(&local_c8);
        (**(code **)(pFVar4->_padding_ + 8))(pFVar4,&local_c8);
        if ((((pFVar4->field_0x40 ^ param_1->field_0x40) & 2) != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("DuplicateJob->bSucceeded == FinishedJob->bSucceeded",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                               ,0x691,L"Different success status for the job with the same ihash"),
           bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((param_1->JobStatusPtr).Object == (FShaderCompileJobStatus *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ProcessFinishedJob(this,pFVar4,
                           (EShaderCompileJobStatus)((param_1->JobStatusPtr).Object)->Status);
        uVar8 = local_1a8 & 0xffffffff;
        FVar9.Data = FVar9.Data + 8;
      }
      if (local_c8.Reader.Ptr != (FMemoryReaderView *)0x0) {
        (**(code **)(local_c8.Reader.Ptr)->_padding_)(local_c8.Reader.Ptr,1);
      }
      DestructItems<FCompressedBuffer,int>
                ((FCompressedBuffer *)local_c8._padding_,(int)local_c8._padding_);
      if ((FCompressedBuffer *)local_c8._padding_ != (FCompressedBuffer *)0x0) {
        FMemory::Free((void *)local_c8._padding_);
      }
      DestructItems<FCompositeBuffer,int>
                ((FCompositeBuffer *)local_c8._padding_,(int)local_c8._padding_);
      if ((FCompositeBuffer *)local_c8._padding_ != (FCompositeBuffer *)0x0) {
        FMemory::Free((void *)local_c8._padding_);
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_c8._padding_);
    }
    if (local_1b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.Data);
    }
    if (local_188.Writer.Ptr != (FMemoryWriter64 *)0x0) {
      (*(code *)**(undefined8 **)local_188.Writer.Ptr)(local_188.Writer.Ptr,1);
    }
    if (local_188.ShaderObjectRawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.ShaderObjectRawData.AllocatorInstance.Data);
    }
    DestructItems<FCompressedBuffer,int>
              ((FCompressedBuffer *)local_188._padding_,(int)local_188._padding_);
    if ((FCompressedBuffer *)local_188._padding_ != (FCompressedBuffer *)0x0) {
      FMemory::Free((void *)local_188._padding_);
    }
    DestructItems<FCompositeBuffer,int>
              ((FCompositeBuffer *)local_188._padding_,(int)local_188._padding_);
    if ((FCompositeBuffer *)local_188._padding_ != (FCompositeBuffer *)0x0) {
      FMemory::Free((void *)local_188._padding_);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_188._padding_);
  }
  return;
}

// ComputeAllocatedMemory @ 14851d940

ulong64 __thiscall FShaderJobCache::ComputeAllocatedMemory(FShaderJobCache *this)

{
  undefined1 *puVar1;
  FCompositeBuffer *pFVar2;
  FCompressedBuffer *pFVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  ulong64 uVar11;
  ulong64 uVar12;
  undefined1 *puVar13;
  FCompositeBuffer *this_00;
  FCompressedBuffer *this_01;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  int local_98;
  int iStack_94;
  undefined4 uStack_8c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  lVar10 = (longlong)(this->InputHashToJobData).HashTable.ArrayMax +
           ((longlong)(this->InputHashToJobData).DataBlocks.Array.ArrayNum * 0x1600 +
           (longlong)(this->InputHashToJobData).DataBlocks.Array.ArrayMax) * 2;
  uVar9 = *(uint *)&(this->Outputs).field_0x48;
  lVar16 = lVar10 + (int)uVar9;
  if (uVar9 < 2) {
    lVar16 = lVar10;
  }
  puVar1 = &(this->Outputs).field_0x10;
  iVar5 = *(int *)&(this->Outputs).field_0x28;
  iVar17 = 0;
  TStack_70.BaseBitIndex = 0;
  uVar9 = 1;
  uVar11 = (ulonglong)((*(int *)&(this->Outputs).field_0x2c + 0x1fU >> 5) << 2) +
           ((longlong)*(int *)&(this->Outputs).field_0xc * 0xc + 0x966 + lVar16) * 4;
  TStack_70._28_4_ = 0;
  if (iVar5 != 0) {
    puVar18 = *(uint **)&(this->Outputs).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar15 = *puVar18;
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar17;
      TStack_70.BaseBitIndex = TStack_70.BaseBitIndex + 0x20;
      iVar17 = iVar17 + 1;
      TStack_70._28_4_ = iVar5;
      if ((int)((iVar5 + -1 >> 0x1f & 0x1fU) + iVar5 + -1) >> 5 < iVar17) goto LAB_14851da4d;
      uVar15 = puVar18[lVar10 + 1];
    }
    uVar9 = -uVar15 & uVar15;
    uVar4 = (ulonglong)uVar9 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    TStack_70._28_4_ = TStack_70.BaseBitIndex + -1 + local_res20;
    if (iVar5 < (int)TStack_70._28_4_) {
      TStack_70._28_4_ = iVar5;
    }
  }
LAB_14851da4d:
  uVar15 = *(uint *)&(this->Outputs).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar9,iVar17);
  TStack_70.CurrentBitIndex = TStack_70._28_4_;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar15 >> 5;
  uStack_50 = CONCAT44(uStack_8c,
                       *(int *)&(this->Outputs).field_0x8 - *(int *)&(this->Outputs).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar5 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar11 = (*pcVar7)();
    return uVar11;
  }
  uVar9 = *(uint *)&(this->Outputs).field_0x28;
  if (uVar15 != uVar9) {
    puVar13 = *(undefined1 **)&(this->Outputs).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar17 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar17;
      uVar14 = uVar14 + 0x20;
      iVar17 = iVar17 + 1;
      uVar15 = uVar9;
      if ((int)(((int)(uVar9 - 1) >> 0x1f & 0x1fU) + (uVar9 - 1)) >> 5 < iVar17) goto LAB_14851db50;
      uVar15 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar14;
    if ((int)uVar9 < (int)uVar15) {
      uVar15 = uVar9;
    }
  }
LAB_14851db50:
  while( true ) {
    if (*(int *)&(this->Outputs).field_0x8 - *(int *)&(this->Outputs).field_0x34 != (int)uStack_50)
    {
      `TSparseArray<TSparseSetElement<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar15) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar10 = *(longlong *)
              (*(longlong *)&this->Outputs + 0x20 + (longlong)TStack_70.CurrentBitIndex * 0x30);
    plVar6 = *(longlong **)(lVar10 + 8);
    if (plVar6 == (longlong *)0x0) {
      lVar16 = 0;
    }
    else {
      if (((ulonglong)plVar6[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      lVar16 = plVar6[2];
    }
    iVar5 = *(int *)(lVar10 + 0x18);
    lVar16 = lVar16 + 0x40;
    this_00 = *(FCompositeBuffer **)(lVar10 + 0x10);
    pFVar2 = this_00 + iVar5;
    while( true ) {
      if (*(int *)(lVar10 + 0x18) != iVar5) {
        `TCheckedPointerIterator<FCompositeBuffer_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (this_00 == pFVar2) break;
      uVar12 = FCompositeBuffer::GetSize(this_00);
      lVar16 = lVar16 + uVar12;
      this_00 = this_00 + 1;
    }
    iVar5 = *(int *)(lVar10 + 0x28);
    this_01 = *(FCompressedBuffer **)(lVar10 + 0x20);
    pFVar3 = this_01 + iVar5;
    while( true ) {
      if (*(int *)(lVar10 + 0x28) != iVar5) {
        `TCheckedPointerIterator<FCompressedBuffer_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (this_01 == pFVar3) break;
      uVar12 = FCompressedBuffer::GetCompressedSize(this_01);
      lVar16 = lVar16 + uVar12;
      this_01 = this_01 + 1;
    }
    uVar11 = uVar11 + lVar16;
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return uVar11;
}

// ComputeJobHash @ 14851dc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBlake3Hash * __thiscall
FShaderJobCache::ComputeJobHash
          (FShaderJobCache *this,FBlake3Hash *__return_storage_ptr__,
          FShaderCacheSerializeContext *param_1)

{
  FCompositeBuffer *pFVar1;
  ForElementType<FSharedBuffer> FVar2;
  int iVar3;
  FBufferOwner *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  FBlake3Hash *pFVar8;
  void *pvVar9;
  ulong64 uVar10;
  ForElementType<FSharedBuffer> FVar11;
  ForElementType<FSharedBuffer> FVar12;
  undefined1 auStack_7c8 [32];
  FBlake3 local_7a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_7c8;
  FBlake3::Reset(&local_7a8);
  if ((((param_1->ShaderObjectData).Owner.Owner == (FBufferOwner *)0x0) ||
      ((param_1->ShaderCode).ArrayNum == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SerializeContext.HasData()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                         ,0x28b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar8 = (FBlake3Hash *)(*pcVar6)();
    return pFVar8;
  }
  pFVar4 = (param_1->ShaderObjectData).Owner.Owner;
  if (pFVar4 == (FBufferOwner *)0x0) {
    uVar10 = 0;
  }
  else {
    if (((ulonglong)pFVar4->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar4->_padding_ + 8))(pFVar4);
    }
    uVar10 = pFVar4->Size;
  }
  pFVar4 = (param_1->ShaderObjectData).Owner.Owner;
  if (pFVar4 == (FBufferOwner *)0x0) {
    pvVar9 = (void *)0x0;
  }
  else {
    if (((ulonglong)pFVar4->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar4->_padding_ + 8))(pFVar4);
    }
    pvVar9 = pFVar4->Data;
  }
  FBlake3::Update(&local_7a8,pvVar9,uVar10);
  FVar12 = (ForElementType<FSharedBuffer>)(param_1->ShaderCode).DataPtr;
  pFVar1 = (FCompositeBuffer *)((longlong)FVar12 + (longlong)(param_1->ShaderCode).ArrayNum * 0x18);
  while( true ) {
    if (FVar12 == (ForElementType<FSharedBuffer>)pFVar1) {
      FBlake3::Finalize(&local_7a8,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    iVar3 = *(int *)((longlong)FVar12 + 0x10);
    FVar11 = FVar12;
    if (*(ForElementType<FSharedBuffer> *)((longlong)FVar12 + 8) !=
        (ForElementType<FSharedBuffer>)0x0) {
      FVar11 = *(ForElementType<FSharedBuffer> *)((longlong)FVar12 + 8);
    }
    if ((iVar3 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) break;
    FVar2 = (ForElementType<FSharedBuffer>)((longlong)FVar11 + (longlong)iVar3 * 8);
    for (; FVar11 != FVar2; FVar11 = (ForElementType<FSharedBuffer>)((longlong)FVar11 + 8)) {
      plVar5 = *(longlong **)FVar11;
      if (plVar5 == (longlong *)0x0) {
        uVar10 = 0;
      }
      else {
        if (((ulonglong)plVar5[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
        uVar10 = plVar5[2];
      }
      plVar5 = *(longlong **)FVar11;
      if (plVar5 == (longlong *)0x0) {
        pvVar9 = (void *)0x0;
      }
      else {
        if (((ulonglong)plVar5[3] >> 0x3c & 4) == 0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
        pvVar9 = (void *)plVar5[1];
      }
      FBlake3::Update(&local_7a8,pvVar9,uVar10);
    }
    FVar12 = (ForElementType<FSharedBuffer>)((longlong)FVar12 + 0x18);
  }
  pcVar6 = (code *)swi(3);
  pFVar8 = (FBlake3Hash *)(*pcVar6)();
  return pFVar8;
}

// CullOutputsToMemoryBudget @ 1485204c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FShaderJobCache::CullOutputsToMemoryBudget(FShaderJobCache *this,ulong64 param_1)

{
  uchar *puVar1;
  int *piVar2;
  FShaderJobDataMap *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  FShaderJobCacheStoredOutput *this_01;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  uchar *puVar10;
  ulong64 uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar21;
  ulonglong uVar20;
  
  uVar16 = 0;
  uVar18 = 0;
  if (0 < (this->InputHashToJobData).NumItems) {
    bVar21 = (this->InputHashToJobData).NumItems != 0;
    uVar17 = uVar16;
    uVar20 = uVar16;
    do {
      uVar18 = (uint)uVar16;
      if ((!bVar21) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)Index < (uint32)NumItems",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                              ,0x145,L""), bVar21)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar19 = (uint)uVar20;
      uVar8 = (int)(uVar19 + ((int)uVar19 >> 0x1f & 0x1ffU)) >> 9;
      uVar12 = 0;
      if ((int)uVar8 < (this->InputHashToJobData).DataBlocks.Array.ArrayNum) {
        uVar12 = ~uVar8 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar15 = (ulonglong)(uVar19 & 0x1ff) * 0x58 +
               *(longlong *)
                ((this->InputHashToJobData).DataBlocks.Array.AllocatorInstance.Data +
                (longlong)(int)uVar8 * 8);
      if (this->CurrentlyAllocatedMemory - uVar17 <= param_1) break;
      if (*(longlong *)(lVar15 + 0x48) == 0) {
        puVar1 = (uchar *)(lVar15 + 0x20);
        for (puVar10 = puVar1; (FBlake3Hash *)puVar10 != (FBlake3Hash *)(lVar15 + 0x40);
            puVar10 = puVar10 + 4) {
          if (*(int *)puVar10 != 0) {
            iVar9 = TSet<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FShaderJobCacheStoredOutput_*,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<FBlake3Hash>
                              ((TSet<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FShaderJobCacheStoredOutput_*,0>,FDefaultSetAllocator>
                                *)&this->Outputs,*(uint *)puVar1,(FBlake3Hash *)puVar1);
            if (iVar9 != -1) {
              lVar13 = (longlong)iVar9 * 0x30 + *(longlong *)&this->Outputs;
              puVar14 = (undefined8 *)(lVar13 + 0x20);
              if (lVar13 == 0) {
                puVar14 = (undefined8 *)0x0;
              }
              if (puVar14 != (undefined8 *)0x0) {
                this_01 = (FShaderJobCacheStoredOutput *)*puVar14;
                if ((this_01 == (FShaderJobCacheStoredOutput *)0x0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("StoredOutput",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                        ,0x3e9,
                                        L"Invalid entry found in FShaderJobCache Output hash table. All values are expected to be valid pointers."
                                       ), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar11 = FShaderJobCacheStoredOutput::GetAllocatedSize(this_01);
                if ((this_01->NumReferences < 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("NumReferences >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                        ,0x1a0,
                                        L"Attempting to release shader job cache output that was already released"
                                       ), bVar21)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                this_01->NumReferences = this_01->NumReferences + -1;
                if (this_01->NumReferences == 0) {
                  pFVar6 = (this_01->CachedDebugInfoPath).Data.AllocatorInstance.Data;
                  if (pFVar6 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar6);
                  }
                  DestructItems<FCompressedBuffer,int>
                            ((FCompressedBuffer *)(this_01->JobSymbols).AllocatorInstance.Data,
                             (this_01->JobSymbols).ArrayNum);
                  pFVar6 = (this_01->JobSymbols).AllocatorInstance.Data;
                  if (pFVar6 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar6);
                  }
                  DestructItems<FCompositeBuffer,int>
                            ((FCompositeBuffer *)(this_01->JobCode).AllocatorInstance.Data,
                             (this_01->JobCode).ArrayNum);
                  pFVar6 = (this_01->JobCode).AllocatorInstance.Data;
                  if (pFVar6 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar6);
                  }
                  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                  ::~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                            (&(this_01->JobOutput).Owner);
                  ::operator_delete(this_01,0x40);
                  if (*(int *)&(this->Outputs).field_0x8 != *(int *)&(this->Outputs).field_0x34) {
                    TSet<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FShaderJobCacheStoredOutput_*,0>,FDefaultSetAllocator>
                    ::RemoveImpl<FBlake3Hash>
                              ((TSet<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FShaderJobCacheStoredOutput_*,0>,FDefaultSetAllocator>
                                *)&this->Outputs,*(uint *)puVar1,(FBlake3Hash *)puVar1);
                  }
                  if (*(int *)&(this->CachedJobNames).field_0x8 !=
                      *(int *)&(this->CachedJobNames).field_0x34) {
                    TSet<TTuple<FBlake3Hash,FString>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FString,0>,FDefaultSetAllocator>
                    ::RemoveImpl<FBlake3Hash>
                              ((TSet<TTuple<FBlake3Hash,FString>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FString,0>,FDefaultSetAllocator>
                                *)&this->CachedJobNames,*(uint *)puVar1,(FBlake3Hash *)puVar1);
                  }
                  this->CurrentlyAllocatedMemory = this->CurrentlyAllocatedMemory - uVar11;
                }
              }
            }
            puVar1[0] = '\0';
            puVar1[1] = '\0';
            puVar1[2] = '\0';
            puVar1[3] = '\0';
            puVar1[4] = '\0';
            puVar1[5] = '\0';
            puVar1[6] = '\0';
            puVar1[7] = '\0';
            *(undefined8 *)(lVar15 + 0x28) = 0;
            *(undefined8 *)(lVar15 + 0x30) = 0;
            *(undefined8 *)(lVar15 + 0x38) = 0;
            break;
          }
        }
        if ((uVar19 == uVar18) && (uVar16 = (ulonglong)(uVar18 + 1), (uVar18 + 1 & 0x1ff) == 0)) {
          uVar17 = uVar17 + 0xb000;
        }
      }
      uVar18 = (uint)uVar16;
      uVar19 = uVar19 + 1;
      uVar20 = (ulonglong)uVar19;
      uVar12 = (this->InputHashToJobData).NumItems;
      bVar21 = uVar19 < uVar12;
    } while ((int)uVar19 < (int)uVar12);
  }
  iVar9 = (int)(uVar18 + ((int)uVar18 >> 0x1f & 0x1ffU)) >> 9;
  if (0 < iVar9) {
    iVar3 = (this->InputHashToJobData).DataBlocks.Array.ArrayNum;
    this_00 = &this->InputHashToJobData;
    iVar4 = (this->InputHashToJobData).DataBlocks.Array.ArrayMax;
    iVar5 = (this->InputHashToJobData).HashTable.ArrayMax;
    if ((iVar3 < iVar9) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("BlocksToRemove <= DataBlocks.Num() && BlocksToRemove > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                            ,0x155,L""), bVar21)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TIndirectArray<FShaderJobDataBlock,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this_00->DataBlocks,0,iVar9,Default);
    piVar2 = &(this->InputHashToJobData).NumItems;
    *piVar2 = *piVar2 + iVar9 * -0x200;
    if ((*piVar2 < 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumItems >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                            ,0x158,L""), bVar21)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((this->InputHashToJobData).NumItems == 0) {
      FShaderJobDataMap::Reserve(this_00,0x200);
    }
    else {
      uVar18 = (this->InputHashToJobData).DataBlocks.Array.ArrayNum;
      iVar9 = 1;
      if ((uVar18 & 0x3fffff) != 0) {
        iVar9 = uVar18 << 10;
      }
      uVar16 = (ulonglong)(iVar9 - 1) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      FShaderJobDataMap::ReHash(this_00,1 << ((byte)lVar15 & 0x1f));
    }
    this->CurrentlyAllocatedMemory =
         this->CurrentlyAllocatedMemory +
         ((longlong)(this->InputHashToJobData).HashTable.ArrayMax +
         ((longlong)(this->InputHashToJobData).DataBlocks.Array.ArrayNum * 0x1600 +
         (longlong)(this->InputHashToJobData).DataBlocks.Array.ArrayMax) * 2) * 4 +
         ((longlong)iVar5 + ((longlong)iVar3 * 0x1600 + (longlong)iVar4) * 2) * -4;
  }
  return;
}

// Find @ 1485254c0

FShaderJobData * __thiscall FShaderJobCache::Find(FShaderJobCache *this,FBlake3Hash *param_1)

{
  FShaderJobData *pFVar1;
  
  pFVar1 = FShaderJobDataMap::Find(&this->InputHashToJobData,param_1);
  return pFVar1;
}

// FindOrAdd @ 148525780

FShaderCacheLoadContext * __thiscall
FShaderJobCache::FindOrAdd
          (FShaderJobCache *this,FShaderCacheLoadContext *__return_storage_ptr__,
          FBlake3Hash *param_1,FShaderCommonCompileJob *param_2,bool param_3)

{
  FBlake3Hash *pFVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FShaderJobDataBlock *pFVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  ushort uVar11;
  int iVar12;
  FShaderJobCacheRef *pFVar13;
  FShaderCacheLoadContext *pFVar14;
  FBlake3Hash *pFVar15;
  TArrayView<FCompressedBuffer,int> *pTVar16;
  TArrayView<FCompositeBuffer,int> *pTVar17;
  longlong lVar18;
  longlong *plVar19;
  bool bVar20;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  uint uStack_bc;
  FName local_b8;
  longlong local_b0;
  FString local_a8;
  FString local_98;
  TArrayView<FCompressedBuffer,int> local_88;
  TArrayView<FCompositeBuffer,int> local_78;
  FShaderJobCacheRef local_68;
  TArrayView<FCompressedBuffer,int> local_58;
  TArrayView<FCompositeBuffer,int> local_48;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_ShaderCompiler.UniqueName,false,None,Default,true);
  local_b8 = LLMTagDeclaration_ShaderCompiler.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_b8,true);
  this->TotalSearchAttempts = this->TotalSearchAttempts + 1;
  LOCK();
  __GTraceCounterShaders_JobCacheSearchAttempts.Value =
       (atomic<__int64>)((longlong)__GTraceCounterShaders_JobCacheSearchAttempts.Value + 1);
  UNLOCK();
  if (-1 < CountersChannel->Enabled) {
    if (__GTraceCounterShaders_JobCacheSearchAttempts.CounterId == (atomic<unsigned_int>)0x0) {
      uVar11 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterShaders_JobCacheSearchAttempts.CounterName,
                          TraceCounterType_Int,
                          __GTraceCounterShaders_JobCacheSearchAttempts.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterShaders_JobCacheSearchAttempts.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterShaders_JobCacheSearchAttempts.CounterId._2_2_ = 0;
        __GTraceCounterShaders_JobCacheSearchAttempts.CounterId._0_2_ = uVar11;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterShaders_JobCacheSearchAttempts.CounterId._0_2_,
               (long64)__GTraceCounterShaders_JobCacheSearchAttempts.Value);
  }
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1786,"FShaderJobCache::Find",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
               ,0x6fa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1786);
  }
  iVar12 = (this->InputHashToJobData).DataBlocks.Array.ArrayNum;
  iVar4 = (this->InputHashToJobData).DataBlocks.Array.ArrayMax;
  iVar5 = (this->InputHashToJobData).HashTable.ArrayMax;
  pFVar13 = FShaderJobDataMap::FindOrAdd(&this->InputHashToJobData,&local_68,param_1);
  iVar6 = pFVar13->IndexInBlock;
  iVar9 = pFVar13->DuplicateIndex;
  (param_2->JobCacheRef).Block = pFVar13->Block;
  (param_2->JobCacheRef).IndexInBlock = iVar6;
  (param_2->JobCacheRef).DuplicateIndex = iVar9;
  if (((param_2->JobCacheRef).Block == (FShaderJobDataBlock *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CacheRef.Block",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                          ,0x36e,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    pFVar14 = (FShaderCacheLoadContext *)(*pcVar8)();
    return pFVar14;
  }
  iVar6 = (param_2->JobCacheRef).IndexInBlock;
  pFVar7 = (param_2->JobCacheRef).Block;
  pFVar1 = &pFVar7->Data[iVar6].OutputHash;
  this->CurrentlyAllocatedMemory =
       this->CurrentlyAllocatedMemory +
       ((longlong)(this->InputHashToJobData).HashTable.ArrayMax +
       ((longlong)(this->InputHashToJobData).DataBlocks.Array.ArrayNum * 0x1600 +
       (longlong)(this->InputHashToJobData).DataBlocks.Array.ArrayMax) * 2) * 4 +
       ((longlong)iVar5 + ((longlong)iVar12 * 0x1600 + (longlong)iVar4) * 2) * -4;
  pFVar15 = pFVar1;
  do {
    if (pFVar15 == (FBlake3Hash *)&pFVar7->Data[iVar6].bOutputFromDDC) {
      __return_storage_ptr__->_padding_ = 0;
      (__return_storage_ptr__->Reader).Ptr = (FMemoryReaderView *)0x0;
      *(undefined2 *)((longlong)&__return_storage_ptr__->_padding_ + 1) = 0;
      *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 3) = 0;
      __return_storage_ptr__->_padding_ = 0;
      *(undefined1 *)&__return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = 0;
      __return_storage_ptr__->_padding_ = (longlong)&___7FShaderCacheSerializeContext__6B_;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = (ulonglong)uStack_bc << 0x20;
      iVar12 = (int)__return_storage_ptr__->_padding_;
      if ((iVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FShaderCacheLoadContext *)(*pcVar8)();
        return pFVar14;
      }
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->_padding_ = CONCAT44(uStack_bc,iVar12);
      if (((int)__return_storage_ptr__->_padding_ != (int)__return_storage_ptr__->_padding_) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ShaderCode.Num() == ShaderSymbols.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Internal\\ShaderSerialization.h"
                              ,0x48,
                              L"It is required to serialize a (possibly empty, but non-null) symbols buffer for every code buffer."
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        pFVar14 = (FShaderCacheLoadContext *)(*pcVar8)();
        return pFVar14;
      }
      __return_storage_ptr__->_padding_ = (longlong)&___7FShaderCacheLoadContext__6B_;
      (__return_storage_ptr__->Reader).Ptr = (FMemoryReaderView *)0x0;
LAB_148525a3b:
      if (bVar20) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FMemScope::~FMemScope(&local_res20);
      FLLMScope::~FLLMScope(local_res8);
      return __return_storage_ptr__;
    }
    if (*(int *)pFVar15->Hash != 0) {
      this->TotalCacheHits = this->TotalCacheHits + 1;
      LOCK();
      __GTraceCounterShaders_JobCacheHits.Value =
           (atomic<__int64>)((longlong)__GTraceCounterShaders_JobCacheHits.Value + 1);
      UNLOCK();
      if (-1 < CountersChannel->Enabled) {
        if (__GTraceCounterShaders_JobCacheHits.CounterId == (atomic<unsigned_int>)0x0) {
          uVar11 = FCountersTrace::OutputInitCounter
                             (__GTraceCounterShaders_JobCacheHits.CounterName,TraceCounterType_Int,
                              __GTraceCounterShaders_JobCacheHits.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterShaders_JobCacheHits.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterShaders_JobCacheHits.CounterId._2_2_ = 0;
            __GTraceCounterShaders_JobCacheHits.CounterId._0_2_ = uVar11;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterShaders_JobCacheHits.CounterId._0_2_,
                   (long64)__GTraceCounterShaders_JobCacheHits.Value);
      }
      iVar12 = TSet<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FShaderJobCacheStoredOutput_*,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FBlake3Hash>
                         ((TSet<TTuple<FBlake3Hash,FShaderJobCacheStoredOutput_*>,TDefaultMapHashableKeyFuncs<FBlake3Hash,FShaderJobCacheStoredOutput_*,0>,FDefaultSetAllocator>
                           *)&this->Outputs,*(uint *)pFVar1->Hash,pFVar1);
      if (iVar12 == -1) {
        plVar19 = (longlong *)0x0;
LAB_148525b20:
        ::LexToString(&local_a8,pFVar1);
        ::LexToString(&local_98,param_1);
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("CannedOutput != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                            ,0x70a,
                            L"Inconsistency in FShaderJobCache - cache record for ihash %s (data 0x%p) exists, but output %s (%s) cannot be found."
                           );
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          pFVar14 = (FShaderCacheLoadContext *)(*pcVar8)();
          return pFVar14;
        }
      }
      else {
        lVar18 = (longlong)iVar12 * 0x30 + *(longlong *)&this->Outputs;
        plVar19 = (longlong *)(lVar18 + 0x20);
        if (lVar18 == 0) {
          plVar19 = (longlong *)0x0;
        }
        if (plVar19 == (longlong *)0x0) goto LAB_148525b20;
      }
      *(int *)(*plVar19 + 4) = *(int *)(*plVar19 + 4) + 1;
      pTVar16 = TArrayView<FCompressedBuffer,int>::
                TArrayView<FCompressedBuffer,int><TArray<FCompressedBuffer,TSizedDefaultAllocator<32>_>_&,TArray<FCompressedBuffer,TSizedDefaultAllocator<32>_>_>
                          (&local_58,
                           (TArray<FCompressedBuffer,TSizedDefaultAllocator<32>_> *)
                           (*plVar19 + 0x20));
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pTVar16->DataPtr;
      local_a8.Data.ArrayNum = pTVar16->ArrayNum;
      local_a8.Data.ArrayMax = *(int *)&pTVar16->field_0xc;
      pTVar17 = TArrayView<FCompositeBuffer,int>::
                TArrayView<FCompositeBuffer,int><TArray<FCompositeBuffer,TSizedDefaultAllocator<32>_>_&,TArray<FCompositeBuffer,TSizedDefaultAllocator<32>_>_>
                          (&local_48,
                           (TArray<FCompositeBuffer,TSizedDefaultAllocator<32>_> *)(*plVar19 + 0x10)
                          );
      local_78.DataPtr = pTVar17->DataPtr;
      local_78.ArrayNum = pTVar17->ArrayNum;
      local_78._12_4_ = *(undefined4 *)&pTVar17->field_0xc;
      local_b0 = *(longlong *)(*plVar19 + 8);
      if (local_b0 != 0) {
        LOCK();
        puVar2 = (ulonglong *)(local_b0 + 0x18);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 + 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 0) {
          LOCK();
          *(longlong *)(local_b0 + 0x18) = *(longlong *)(local_b0 + 0x18) + 0x40000000;
          UNLOCK();
        }
      }
      local_88.DataPtr = (FCompressedBuffer *)local_a8.Data.AllocatorInstance.Data;
      local_88.ArrayNum = local_a8.Data.ArrayNum;
      local_88._12_4_ = local_a8.Data.ArrayMax;
      FShaderCacheLoadContext::FShaderCacheLoadContext
                (__return_storage_ptr__,(FSharedBuffer)&local_b0,&local_78,&local_88);
      goto LAB_148525a3b;
    }
    pFVar15 = (FBlake3Hash *)(pFVar15->Hash + 4);
  } while( true );
}

// GetAllocatedMemory @ 148529020

ulong64 __thiscall FShaderJobCache::GetAllocatedMemory(FShaderJobCache *this)

{
  return this->CurrentlyAllocatedMemory;
}

// GetCurrentMemoryBudget @ 148529590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong64 __thiscall FShaderJobCache::GetCurrentMemoryBudget(FShaderJobCache *this)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  lVar4 = (longlong)GShaderCompilerMaxJobCacheMemoryMB;
  dVar5 = (double)GShaderCompilerMaxJobCacheMemoryPercent;
  if (__real_4059000000000000 <= (double)GShaderCompilerMaxJobCacheMemoryPercent) {
    dVar5 = __real_4059000000000000;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  uVar1 = FGenericPlatformMemory::GetPhysicalGBRam();
  lVar3 = 0;
  dVar5 = (double)uVar1 * ___real_41647ae147ae147b * dVar5;
  if ((__real_43e0000000000000 <= dVar5) &&
     (dVar5 = dVar5 - __real_43e0000000000000, dVar5 < __real_43e0000000000000)) {
    lVar3 = -0x8000000000000000;
  }
  uVar2 = (longlong)dVar5 + lVar3;
  if ((ulonglong)(lVar4 << 0x14) < (ulonglong)((longlong)dVar5 + lVar3)) {
    uVar2 = lVar4 << 0x14;
  }
  return uVar2;
}

// GetNumOutstandingJobs @ 14852bb20

int __thiscall FShaderJobCache::GetNumOutstandingJobs(FShaderJobCache *this)

{
  return (this->NumOutstandingJobs).Counter;
}

// GetNumPendingJobs @ 14852bc30

int __thiscall
FShaderJobCache::GetNumPendingJobs(FShaderJobCache *this,EShaderCompileJobPriority param_1)

{
  return (int)(this->NumPendingJobs).Elements[param_1];
}

// GetNumPendingJobs @ 14852bc40

int __thiscall FShaderJobCache::GetNumPendingJobs(FShaderJobCache *this)

{
  atomic<int> *paVar1;
  longlong lVar2;
  TStaticArray<std::atomic<int>,5,4294967295> *pTVar3;
  int iVar4;
  
  AcquireSRWLockShared((PSRWLOCK)&this->JobLock);
  iVar4 = 0;
  pTVar3 = &this->NumPendingJobs;
  lVar2 = 5;
  do {
    paVar1 = pTVar3->Elements;
    pTVar3 = (TStaticArray<std::atomic<int>,5,4294967295> *)(pTVar3->Elements + 1);
    iVar4 = iVar4 + (int)*paVar1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  ReleaseSRWLockShared((PSRWLOCK)&this->JobLock);
  return iVar4;
}

// GetPendingJobs @ 14852be20

int __thiscall
FShaderJobCache::GetPendingJobs
          (FShaderJobCache *this,EShaderCompilerWorkerType param_1,EShaderCompileJobPriority param_2
          ,int param_3,int param_4,
          TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *param_5)

{
  FPlatformRWLock *SRWLock;
  long64 *plVar1;
  atomic<int> *paVar2;
  double dVar3;
  EShaderCompileJobPriority EVar4;
  FShaderCommonCompileJob *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  FShaderCompilerStats *lpCriticalSection;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FShaderCommonCompileJob *pFVar15;
  FShaderCommonCompileJob *pFVar16;
  atomic<int> aVar17;
  uint uVar18;
  double dVar19;
  atomic<int> local_res20;
  int local_98;
  FShaderCommonCompileJob *local_90;
  LARGE_INTEGER local_88 [9];
  
  if ((param_1 == None) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InWorkerType != EShaderCompilerWorkerType::None",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                          ,0x6b0,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    iVar12 = (*pcVar7)();
    return iVar12;
  }
  if ((param_2 == None) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InPriority != EShaderCompileJobPriority::None",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                          ,0x6b1,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    iVar12 = (*pcVar7)();
    return iVar12;
  }
  SRWLock = &this->JobLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  aVar17 = (this->NumPendingJobs).Elements[param_2];
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  if ((int)aVar17 < param_3) {
    return 0;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  local_res20 = (this->NumPendingJobs).Elements[param_2];
  if ((int)local_res20 < param_3) {
    aVar17 = (atomic<int>)0x0;
  }
  else {
    aVar17 = local_res20;
    if (param_4 < (int)local_res20) {
      aVar17 = (atomic<int>)param_4;
    }
    uVar18 = param_5->ArrayNum + (int)aVar17;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if (param_5->ArrayMax < (int)uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar18,&param_5->AllocatorInstance,param_5->ArrayNum,&param_5->ArrayMax);
    }
    fVar10 = __real_38000100;
    dVar9 = __real_4170000000000000;
    pFVar16 = (this->PendingJobsHead).Elements[param_2];
    iVar12 = (int)local_res20 - (int)aVar17;
    local_98 = 0;
    if (0 < (int)aVar17) {
      do {
        lpCriticalSection = GShaderCompilerStats;
        if ((pFVar16->TimeAddedToPendingQueue == 0.0) &&
           (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<8530813070090437514>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerStats.cpp"
                                ,0x38a,"Job.TimeAddedToPendingQueue != 0.0"), bVar11)) {
          pcVar7 = (code *)swi(3);
          iVar12 = (*pcVar7)();
          return iVar12;
        }
        QueryPerformanceCounter(local_88);
        pFVar16->TimeAssignedToExecution =
             (double)local_88[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar9;
        if (lpCriticalSection == (FShaderCompilerStats *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        plVar1 = &(lpCriticalSection->Counters).JobsAssigned;
        *plVar1 = *plVar1 + 1;
        dVar19 = pFVar16->TimeAssignedToExecution - pFVar16->TimeAddedToPendingQueue;
        dVar3 = (lpCriticalSection->Counters).MaxPendingTime;
        dVar8 = dVar19;
        if (dVar19 <= dVar3) {
          dVar8 = dVar3;
        }
        (lpCriticalSection->Counters).AccumulatedPendingTime =
             dVar19 + (lpCriticalSection->Counters).AccumulatedPendingTime;
        (lpCriticalSection->Counters).MaxPendingTime = dVar8;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if ((pFVar16->bInputHashSet == '\0') &&
           (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<978537903879620311>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                ,0x6d7,"Job.bInputHashSet"), bVar11)) {
          pcVar7 = (code *)swi(3);
          iVar12 = (*pcVar7)();
          return iVar12;
        }
        pFVar15 = pFVar16->NextLink;
        if ((pFVar16->PendingPriority != param_2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(int32)Job.PendingPriority == PriorityIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                ,0x6db,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          iVar12 = (*pcVar7)();
          return iVar12;
        }
        EVar4 = pFVar16->PendingPriority;
        if ((ForceLocal < EVar4) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(uint32)PriorityIndex < (uint32)NumShaderCompileJobPriorities",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                ,0x328,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          iVar12 = (*pcVar7)();
          return iVar12;
        }
        if (((int)(this->NumPendingJobs).Elements[EVar4] < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumPendingJobs[PriorityIndex] > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                ,0x329,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          iVar12 = (*pcVar7)();
          return iVar12;
        }
        LOCK();
        paVar2 = (this->NumPendingJobs).Elements + EVar4;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if ((this->PendingJobsTail).Elements[EVar4] == &pFVar16->NextLink) {
          (this->PendingJobsTail).Elements[EVar4] = pFVar16->PrevLink;
        }
        pFVar5 = pFVar16->NextLink;
        if (pFVar5 != (FShaderCommonCompileJob *)0x0) {
          pFVar5->PrevLink = pFVar16->PrevLink;
        }
        if (pFVar16->PrevLink != (FShaderCommonCompileJob **)0x0) {
          *pFVar16->PrevLink = pFVar16->NextLink;
        }
        pFVar16->NextLink = (FShaderCommonCompileJob *)0x0;
        pFVar16->PrevLink = (FShaderCommonCompileJob **)0x0;
        pFVar16->CurrentWorker = param_1;
        pFVar16->PendingPriority = None;
        if (((pFVar16->JobStatusPtr).Object == (FShaderCompileJobStatus *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          iVar12 = (*pcVar7)();
          return iVar12;
        }
        LOCK();
        ((pFVar16->JobStatusPtr).Object)->Status =
             (atomic<EShaderCompileJobStatus>)((param_1 != Distributed) + '\x06');
        UNLOCK();
        if (pFVar16 != (FShaderCommonCompileJob *)0x0) {
          LOCK();
          (pFVar16->NumRefs).Counter = (pFVar16->NumRefs).Counter + 1;
          UNLOCK();
        }
        pFVar6 = (param_5->AllocatorInstance).Data;
        local_90 = pFVar16;
        if (((pFVar6 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 < pFVar6 + (longlong)param_5->ArrayMax * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          iVar12 = (*pcVar7)();
          return iVar12;
        }
        iVar13 = param_5->ArrayNum;
        if (iVar13 == param_5->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        param_5->ArrayNum = iVar13 + 1;
        pFVar6 = (param_5->AllocatorInstance).Data;
        *(undefined8 *)(pFVar6 + (longlong)iVar13 * 8) = 0;
        *(FShaderCommonCompileJob **)(pFVar6 + (longlong)iVar13 * 8) = local_90;
        local_90 = (FShaderCommonCompileJob *)0x0;
        if ((0 < iVar12) && (param_2 < High)) {
          pFVar16 = pFVar15;
          if (0 < iVar12 + 1) {
            uVar18 = rand();
            iVar14 = (int)((float)(uVar18 & 0x7fff) * (float)(iVar12 + 1) * fVar10);
            iVar13 = iVar12;
            if (iVar14 < iVar12) {
              iVar13 = iVar14;
            }
            if (0 < iVar13) {
              do {
                pFVar16 = (FShaderCommonCompileJob *)0x0;
                if (pFVar15 == (FShaderCommonCompileJob *)0x0) break;
                pFVar15 = pFVar15->NextLink;
                iVar13 = iVar13 + -1;
                iVar12 = iVar12 + -1;
                pFVar16 = pFVar15;
              } while (0 < iVar13);
              if ((iVar12 < 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("MaxJobsWeCanSkipOver >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                      ,0x6ec,L"We skipped over too many jobs"), bVar11)) {
                pcVar7 = (code *)swi(3);
                iVar12 = (*pcVar7)();
                return iVar12;
              }
            }
          }
          pFVar15 = pFVar16;
          if (((int)local_res20 < iVar12) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("MaxJobsWeCanSkipOver <= NumPendingJobsOfPriority - i",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                  ,0x6ed,
                                  L"Number of jobs to skip should stay less or equal than the number of nodes to go"
                                 ), bVar11)) {
            pcVar7 = (code *)swi(3);
            iVar12 = (*pcVar7)();
            return iVar12;
          }
        }
        local_98 = local_98 + 1;
        local_res20 = (atomic<int>)((int)local_res20 + -1);
        pFVar16 = pFVar15;
      } while (local_98 < (int)aVar17);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return (int)aVar17;
}

// GetStats @ 14852e4e0

void __thiscall FShaderJobCache::GetStats(FShaderJobCache *this,FShaderCompilerStats *param_1)

{
  ulong64 uVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&this->JobLock);
  (param_1->Counters).TotalCacheSearchAttempts = this->TotalSearchAttempts;
  (param_1->Counters).TotalCacheHits = this->TotalCacheHits;
  (param_1->Counters).TotalCacheDuplicates = (uint)this->TotalCacheDuplicates;
  (param_1->Counters).TotalCacheDDCQueries = (uint)this->TotalCacheDDCQueries;
  (param_1->Counters).TotalCacheDDCHits = (uint)this->TotalCacheDDCHits;
  (param_1->Counters).UniqueCacheInputHashes = (longlong)(this->InputHashToJobData).NumItems;
  (param_1->Counters).UniqueCacheOutputs =
       (longlong)(*(int *)&(this->Outputs).field_0x8 - *(int *)&(this->Outputs).field_0x34);
  (param_1->Counters).CacheMemUsed = this->CurrentlyAllocatedMemory;
  uVar1 = GetCurrentMemoryBudget(this);
  (param_1->Counters).CacheMemBudget = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00014852e592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->JobLock);
  return;
}

// InternalSetPriority @ 148531950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderJobCache::InternalSetPriority
          (FShaderJobCache *this,FShaderCommonCompileJob *param_1,EShaderCompileJobPriority param_2)

{
  undefined1 *puVar1;
  FShaderCompilerJobTable *this_00;
  atomic<int> *paVar2;
  FShaderCommonCompileJob ***pppFVar3;
  FShaderCommonCompileJob **ppFVar4;
  EShaderCompileJobPriority EVar5;
  char cVar6;
  byte bVar7;
  FShaderCommonCompileJob *pFVar8;
  code *pcVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  void *_Buf1;
  void *_Buf2;
  FShaderCompileJob *pFVar14;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [8];
  FShaderCompileJob *local_90;
  FShaderCompileJob *local_88;
  FShaderCompileJob **local_80;
  FShaderCompileJob **local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_90 = (FShaderCompileJob *)param_1;
  if (param_1->PendingPriority != None) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->JobLock);
    if (*(EShaderCompileJobPriority *)((longlong)&local_90->_padding_ + 2) != None) {
      if ((*(EShaderCompileJobPriority *)((longlong)&local_90->_padding_ + 2) !=
           *(EShaderCompileJobPriority *)((longlong)&local_90->_padding_ + 1)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Job->PendingPriority == Job->Priority",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                              ,0x4a2,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar14 = local_90;
      EVar5 = *(EShaderCompileJobPriority *)((longlong)&local_90->_padding_ + 2);
      if ((ForceLocal < EVar5) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)PriorityIndex < (uint32)NumShaderCompileJobPriorities",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                              ,0x328,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (((int)(this->NumPendingJobs).Elements[EVar5] < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumPendingJobs[PriorityIndex] > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                              ,0x329,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      LOCK();
      paVar2 = (this->NumPendingJobs).Elements + EVar5;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if ((this->PendingJobsTail).Elements[EVar5] == (FShaderCommonCompileJob **)&pFVar14->_padding_
         ) {
        (this->PendingJobsTail).Elements[EVar5] = (FShaderCommonCompileJob **)pFVar14->_padding_;
      }
      pFVar8 = (FShaderCommonCompileJob *)pFVar14->_padding_;
      if (pFVar8 != (FShaderCommonCompileJob *)0x0) {
        pFVar8->PrevLink = (FShaderCommonCompileJob **)pFVar14->_padding_;
      }
      if ((FShaderCommonCompileJob **)pFVar14->_padding_ != (FShaderCommonCompileJob **)0x0) {
        *(FShaderCommonCompileJob **)pFVar14->_padding_ =
             (FShaderCommonCompileJob *)pFVar14->_padding_;
      }
      *(EShaderCompileJobPriority *)((longlong)&pFVar14->_padding_ + 2) = None;
      pFVar14->_padding_ = 0;
      pFVar14->_padding_ = 0;
      if (((local_90->_padding_ & 0x10) == 0) &&
         (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<978537903879619749>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                              ,0x4a5,"Job->bInputHashSet"), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      *(EShaderCompileJobPriority *)((longlong)&local_90->_padding_ + 1) = param_2;
      pFVar14 = local_90;
      goto LAB_148531c98;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->JobLock);
  }
  if ((local_90->_padding_ & 1) != 0) {
    return;
  }
  if (*(char *)((longlong)&local_90->_padding_ + 3) != '\x02') {
    return;
  }
  if (param_2 != ForceLocal) {
    return;
  }
  cVar6 = (char)local_90->_padding_;
  if (cVar6 == '\0') {
    local_88 = (FShaderCompileJob *)CloneJob_Single(local_90);
  }
  else if (cVar6 == '\x01') {
    local_88 = (FShaderCompileJob *)CloneJob_Pipeline((FShaderPipelineCompileJob *)local_90);
  }
  else {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                        ,0x491,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_88 = (FShaderCompileJob *)0x0;
  }
  *(EShaderCompileJobPriority *)((longlong)&local_88->_padding_ + 1) = ForceLocal;
  LOCK();
  puVar1 = &((TRefCountPtr<FPendingShaderMapCompileResults> *)&local_88->_padding_)->Reference->
            field_0x20;
  iVar13 = *(int *)puVar1;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  UNLOCK();
  if ((iVar13 + 1 < 2) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewNumPendingJobs > 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                          ,0x4b4,
                          L"Invalid number of pending jobs %d, should have had at least 1 job previously"
                         ), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar14 = local_88;
  this_00 = &this->JobTable;
  bVar7 = (byte)local_88->_padding_;
  lVar11 = local_88->_padding_;
  if ((1 < bVar7) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(uint8)JobType < (uint8)NumShaderCompileJobTypes",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                          ,0x239,L"Out of range JobType index %u"), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar10 = (uint)lVar11 >> 0x1a;
  AcquireSRWLockExclusive((PSRWLOCK)&this_00->Stripes[bVar7][uVar10].StripeLock);
  FShaderCompilerJobTable::InternalAddJob(this_00,(FShaderCommonCompileJob *)pFVar14);
  ReleaseSRWLockExclusive((PSRWLOCK)&this_00->Stripes[bVar7][uVar10].StripeLock);
  FShaderCompilerStats::RegisterNewPendingJob
            (GShaderCompilerStats,(FShaderCommonCompileJob *)local_88);
  if ((((byte)local_90->_padding_ ^ (byte)local_88->_padding_) & 0x10) != 0) {
    local_80 = &local_90;
    local_78 = &local_88;
    `FShaderJobCache::InternalSetPriority'::__l18::<lambda_1>::operator()(&local_80);
  }
  _Buf1 = (void *)(**(code **)local_88->_padding_)(local_88,local_70);
  _Buf2 = (void *)(**(code **)local_90->_padding_)(local_90,local_50);
  iVar13 = memcmp(_Buf1,_Buf2,0x20);
  if (iVar13 != 0) {
    local_98[0] = 0;
    `FShaderJobCache::InternalSetPriority'::__l18::<lambda_2>::operator()(local_98);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&this->JobLock);
  LOCK();
  (this->NumOutstandingJobs).Counter = (this->NumOutstandingJobs).Counter + 1;
  UNLOCK();
  pFVar14 = local_88;
LAB_148531c98:
  EVar5 = *(EShaderCompileJobPriority *)((longlong)&pFVar14->_padding_ + 1);
  if ((ForceLocal < EVar5) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(uint32)PriorityIndex < (uint32)NumShaderCompileJobPriorities",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                          ,0x319,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((*(EShaderCompileJobPriority *)((longlong)&pFVar14->_padding_ + 2) != None) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Job.PendingPriority == EShaderCompileJobPriority::None",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                          ,0x31a,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  LOCK();
  paVar2 = (this->NumPendingJobs).Elements + EVar5;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  if ((((FShaderCommonCompileJob *)pFVar14->_padding_ != (FShaderCommonCompileJob *)0x0) ||
      ((FShaderCommonCompileJob **)pFVar14->_padding_ != (FShaderCommonCompileJob **)0x0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Job.NextLink == nullptr && Job.PrevLink == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                          ,0x30c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  LOCK();
  pppFVar3 = (this->PendingJobsTail).Elements + EVar5;
  ppFVar4 = *pppFVar3;
  *pppFVar3 = (FShaderCommonCompileJob **)&pFVar14->_padding_;
  UNLOCK();
  pFVar14->_padding_ = (longlong)ppFVar4;
  *ppFVar4 = (FShaderCommonCompileJob *)pFVar14;
  *(EShaderCompileJobPriority *)((longlong)&pFVar14->_padding_ + 2) =
       *(EShaderCompileJobPriority *)((longlong)&pFVar14->_padding_ + 1);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->JobLock);
  return;
}

// ProcessFinishedJob @ 14853b3d0

double __thiscall
FShaderJobCache::ProcessFinishedJob
          (FShaderJobCache *this,FShaderCommonCompileJob *param_1,EShaderCompileJobStatus param_2)

{
  undefined1 *puVar1;
  FThreadSafeCounter *pFVar2;
  atomic<EShaderCompileJobStatus> aVar3;
  FShaderCompileJobStatus *pFVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  FPendingShaderMapCompileResults *pFVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  FShaderCommonCompileJob *local_58;
  undefined1 local_50 [8];
  TTuple<EShaderFrequency,FString> *local_48;
  undefined8 local_40;
  
  if ((param_1->JobStatusPtr).Object == (FShaderCompileJobStatus *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      dVar8 = (double)(*pcVar7)();
      return dVar8;
    }
  }
  LOCK();
  ((param_1->JobStatusPtr).Object)->Status = (atomic<EShaderCompileJobStatus>)param_2;
  UNLOCK();
  local_50[0] = 0;
  local_48 = (TTuple<EShaderFrequency,FString> *)0x0;
  local_40 = 0;
  (**(code **)(param_1->_padding_ + 0x18))(param_1,local_50);
  if ((param_1->JobStatusPtr).Object == (FShaderCompileJobStatus *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      dVar8 = (double)(*pcVar7)();
      return dVar8;
    }
  }
  pFVar4 = (param_1->JobStatusPtr).Object;
  aVar3 = pFVar4->Status;
  if (((pFVar4->IsDuplicate == (atomic<bool>)0x0) && (aVar3 != (atomic<EShaderCompileJobStatus>)0x2)
      ) && (1 < (byte)((char)aVar3 - 9U))) {
    AddToCacheAndProcessPending(this,param_1);
  }
  FShaderCompilerStats::RegisterFinishedJob(GShaderCompilerStats,param_1);
  QueryPerformanceCounter(&local_res8);
  lpCriticalSection = (LPCRITICAL_SECTION)this->CompileQueueSection;
  dVar8 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    QueryPerformanceCounter(&local_res10);
    pFVar5 = (param_1->PendingShaderMap).Reference;
    dVar9 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    LOCK();
    (param_1->NumRefs).Counter = (param_1->NumRefs).Counter + 1;
    UNLOCK();
    local_58 = param_1;
    if ((*(FShaderCommonCompileJob ***)&pFVar5->field_0x10 <= &local_58) &&
       (&local_58 < *(FShaderCommonCompileJob ***)&pFVar5->field_0x10 + *(int *)&pFVar5->field_0x1c)
       ) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        dVar8 = (double)(*pcVar7)();
        return dVar8;
      }
    }
    iVar12 = *(int *)&pFVar5->field_0x18;
    if (iVar12 == *(int *)&pFVar5->field_0x1c) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&pFVar5->field_0x10,(int *)&pFVar5->field_0x1c)
      ;
    }
    *(int *)&pFVar5->field_0x18 = iVar12 + 1;
    lVar6 = *(longlong *)&pFVar5->field_0x10;
    *(undefined8 *)(lVar6 + (longlong)iVar12 * 8) = 0;
    *(FShaderCommonCompileJob **)(lVar6 + (longlong)iVar12 * 8) = local_58;
    local_58 = (FShaderCommonCompileJob *)0x0;
    if ((pFVar5->field_0x24 == '\0') || (param_1->bSucceeded == '\0')) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    pFVar5->field_0x24 = uVar11;
    LOCK();
    puVar1 = &pFVar5->field_0x20;
    iVar12 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar12 + -1 < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumPendingJobsForSM >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                          ,0x63b,
                          L"Problem tracking pending jobs for a SM (%d), number of pending jobs (%d) is negative!"
                         );
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        dVar8 = (double)(*pcVar7)();
        return dVar8;
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    LOCK();
    pFVar2 = &this->NumOutstandingJobs;
    iVar12 = pFVar2->Counter;
    pFVar2->Counter = pFVar2->Counter + -1;
    UNLOCK();
    if (iVar12 < 1) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PrevNumOutstandingJobs >= Value",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                          ,0x284,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        dVar8 = (double)(*pcVar7)();
        return dVar8;
      }
    }
    DestructItems<TTuple<enum_EShaderFrequency,FString>,int>(local_48,(int)local_40);
    if (local_48 != (TTuple<EShaderFrequency,FString> *)0x0) {
      FMemory::Free(local_48);
    }
    return dVar9 - dVar8;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RemoveAllPendingJobsWithId @ 1485400b0

int __thiscall FShaderJobCache::RemoveAllPendingJobsWithId(FShaderJobCache *this,uint param_1)

{
  FThreadSafeCounter *pFVar1;
  atomic<int> *paVar2;
  FShaderCommonCompileJob ***pppFVar3;
  FShaderCommonCompileJob **ppFVar4;
  EShaderCompileJobPriority EVar5;
  int iVar6;
  FShaderCommonCompileJob *pFVar7;
  FShaderJobDataBlock *pFVar8;
  FShaderCommonCompileJob *pFVar9;
  FShaderCommonCompileJob *pFVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  TStaticArray<FShaderCommonCompileJob_*,5,4294967295> *pTVar14;
  FShaderCommonCompileJob *pFVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  int local_res8;
  uint local_res18;
  longlong local_48;
  
  iVar16 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)&this->JobLock);
  pFVar7 = this->PendingSubmitJobTaskJobs;
  while (pFVar10 = pFVar7, pFVar10 != (FShaderCommonCompileJob *)0x0) {
    ppFVar4 = &pFVar10->NextLink;
    pFVar7 = *ppFVar4;
    if (pFVar10->Id == param_1) {
      if (pFVar7 != (FShaderCommonCompileJob *)0x0) {
        pFVar7->PrevLink = pFVar10->PrevLink;
      }
      if (pFVar10->PrevLink != (FShaderCommonCompileJob **)0x0) {
        *pFVar10->PrevLink = *ppFVar4;
      }
      *ppFVar4 = (FShaderCommonCompileJob *)0x0;
      pFVar10->PrevLink = (FShaderCommonCompileJob **)0x0;
      FShaderCompilerJobTable::RemoveJob(&this->JobTable,pFVar10);
      iVar16 = iVar16 + 1;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->JobLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->JobLock);
  pTVar14 = &this->PendingJobsHead;
  local_res18 = 0;
  local_48 = 5;
  local_res8 = iVar16;
  do {
    pFVar7 = pTVar14->Elements[0];
    while (pFVar10 = pFVar7, pFVar10 != (FShaderCommonCompileJob *)0x0) {
      pFVar7 = pFVar10->NextLink;
      if (pFVar10->Id == param_1) {
        pFVar8 = (pFVar10->JobCacheRef).Block;
        if (pFVar8 != (FShaderJobDataBlock *)0x0) {
          iVar6 = (pFVar10->JobCacheRef).IndexInBlock;
          if ((pFVar8->Data[iVar6].JobInFlight.Reference != pFVar10) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("JobData.JobInFlight == &Job",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                  ,0x503,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            iVar16 = (*pcVar11)();
            return iVar16;
          }
          pFVar15 = pFVar8->Data[iVar6].DuplicateJobsWaitList;
          for (pFVar9 = pFVar15;
              (pFVar9 != (FShaderCommonCompileJob *)0x0 && (pFVar9->Id == param_1));
              pFVar9 = pFVar9->NextLink) {
          }
          if (pFVar9 != (FShaderCommonCompileJob *)0x0) {
            if (pFVar15 == pFVar9) {
              pFVar8->Data[iVar6].DuplicateJobsWaitList = pFVar9->NextLink;
            }
            pFVar15 = (FShaderCommonCompileJob *)0x0;
            if (pFVar9->NextLink != (FShaderCommonCompileJob *)0x0) {
              pFVar9->NextLink->PrevLink = pFVar9->PrevLink;
              pFVar15 = pFVar9->NextLink;
            }
            if (pFVar9->PrevLink != (FShaderCommonCompileJob **)0x0) {
              *pFVar9->PrevLink = pFVar15;
            }
            pFVar9->NextLink = (FShaderCommonCompileJob *)0x0;
            pFVar9->PrevLink = (FShaderCommonCompileJob **)0x0;
            RemoveDuplicateJob(this,pFVar9);
            if (((pFVar9->JobStatusPtr).Object == (FShaderCompileJobStatus *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              iVar16 = (*pcVar11)();
              return iVar16;
            }
            LOCK();
            ((pFVar9->JobStatusPtr).Object)->IsDuplicate = (atomic<bool>)0x0;
            UNLOCK();
            FShaderCompilerStats::RegisterNewPendingJob(GShaderCompilerStats,pFVar9);
            EVar5 = pFVar9->Priority;
            if ((ForceLocal < EVar5) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(uint32)PriorityIndex < (uint32)NumShaderCompileJobPriorities",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                    ,0x319,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              iVar16 = (*pcVar11)();
              return iVar16;
            }
            if ((pFVar9->PendingPriority != None) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Job.PendingPriority == EShaderCompileJobPriority::None",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                    ,0x31a,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              iVar16 = (*pcVar11)();
              return iVar16;
            }
            LOCK();
            paVar2 = (this->NumPendingJobs).Elements + EVar5;
            *paVar2 = (atomic<int>)((int)*paVar2 + 1);
            UNLOCK();
            if (((pFVar9->NextLink != (FShaderCommonCompileJob *)0x0) ||
                (pFVar9->PrevLink != (FShaderCommonCompileJob **)0x0)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Job.NextLink == nullptr && Job.PrevLink == nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                    ,0x30c,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              iVar16 = (*pcVar11)();
              return iVar16;
            }
            LOCK();
            pppFVar3 = (this->PendingJobsTail).Elements + EVar5;
            ppFVar4 = *pppFVar3;
            *pppFVar3 = &pFVar9->NextLink;
            UNLOCK();
            pFVar9->PrevLink = ppFVar4;
            *ppFVar4 = pFVar9;
            pFVar9->PendingPriority = pFVar9->Priority;
            iVar16 = local_res8;
          }
          pFVar15 = pFVar8->Data[iVar6].JobInFlight.Reference;
          if (pFVar15 != pFVar9) {
            pFVar8->Data[iVar6].JobInFlight.Reference = pFVar9;
            if (pFVar9 != (FShaderCommonCompileJob *)0x0) {
              LOCK();
              (pFVar9->NumRefs).Counter = (pFVar9->NumRefs).Counter + 1;
              UNLOCK();
            }
            if (pFVar15 != (FShaderCommonCompileJob *)0x0) {
              FShaderCommonCompileJob::Release(pFVar15);
            }
          }
        }
        if ((pFVar10->PendingPriority != local_res18) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(int32)Job.PendingPriority == PriorityIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                ,0x526,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          iVar16 = (*pcVar11)();
          return iVar16;
        }
        EVar5 = pFVar10->PendingPriority;
        if ((ForceLocal < EVar5) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(uint32)PriorityIndex < (uint32)NumShaderCompileJobPriorities",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                ,0x328,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          iVar16 = (*pcVar11)();
          return iVar16;
        }
        if (((int)(this->NumPendingJobs).Elements[EVar5] < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumPendingJobs[PriorityIndex] > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                ,0x329,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          iVar16 = (*pcVar11)();
          return iVar16;
        }
        LOCK();
        paVar2 = (this->NumPendingJobs).Elements + EVar5;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if ((this->PendingJobsTail).Elements[EVar5] == &pFVar10->NextLink) {
          (this->PendingJobsTail).Elements[EVar5] = pFVar10->PrevLink;
        }
        if (pFVar10->NextLink != (FShaderCommonCompileJob *)0x0) {
          pFVar10->NextLink->PrevLink = pFVar10->PrevLink;
        }
        if (pFVar10->PrevLink != (FShaderCommonCompileJob **)0x0) {
          *pFVar10->PrevLink = pFVar10->NextLink;
        }
        pFVar10->NextLink = (FShaderCommonCompileJob *)0x0;
        pFVar10->PrevLink = (FShaderCommonCompileJob **)0x0;
        pFVar10->PendingPriority = None;
        FShaderCompilerJobTable::RemoveJob(&this->JobTable,pFVar10);
        iVar16 = iVar16 + 1;
        local_res8 = iVar16;
      }
    }
    local_res18 = local_res18 + 1;
    pTVar14 = (TStaticArray<FShaderCommonCompileJob_*,5,4294967295> *)(pTVar14->Elements + 1);
    local_48 = local_48 + -1;
    if (local_48 == 0) {
      uVar17 = 0;
      if (0 < (this->DuplicateJobs).ArrayNum) {
        lVar18 = 0;
        do {
          uVar13 = 0;
          if ((int)uVar17 < (this->DuplicateJobs).ArrayNum) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            iVar16 = (*pcVar11)();
            return iVar16;
          }
          pFVar7 = *(FShaderCommonCompileJob **)
                    ((this->DuplicateJobs).AllocatorInstance.Data + lVar18);
          if (((pFVar7->JobCacheRef).DuplicateIndex != uVar17) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("DuplicateJob->JobCacheRef.DuplicateIndex == DuplicateIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                  ,0x532,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            iVar16 = (*pcVar11)();
            return iVar16;
          }
          if (pFVar7->Id == param_1) {
            if (((pFVar7->JobCacheRef).Block == (FShaderJobDataBlock *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CacheRef.Block",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                    ,0x36e,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              iVar16 = (*pcVar11)();
              return iVar16;
            }
            iVar6 = (pFVar7->JobCacheRef).IndexInBlock;
            pFVar8 = (pFVar7->JobCacheRef).Block;
            pFVar10 = pFVar8->Data[iVar6].DuplicateJobsWaitList;
            if (pFVar10 == pFVar7) {
              pFVar8->Data[iVar6].DuplicateJobsWaitList = pFVar10->NextLink;
            }
            RemoveDuplicateJob(this,pFVar7);
            if ((pFVar7->PendingPriority != None) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("DuplicateJob->PendingPriority == EShaderCompileJobPriority::None"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                    ,0x542,L""), bVar12)) {
              pcVar11 = (code *)swi(3);
              iVar16 = (*pcVar11)();
              return iVar16;
            }
            if (pFVar7->NextLink != (FShaderCommonCompileJob *)0x0) {
              pFVar7->NextLink->PrevLink = pFVar7->PrevLink;
            }
            if (pFVar7->PrevLink != (FShaderCommonCompileJob **)0x0) {
              *pFVar7->PrevLink = pFVar7->NextLink;
            }
            pFVar7->NextLink = (FShaderCommonCompileJob *)0x0;
            pFVar7->PrevLink = (FShaderCommonCompileJob **)0x0;
            FShaderCompilerJobTable::RemoveJob(&this->JobTable,pFVar7);
            iVar16 = iVar16 + 1;
          }
          else {
            uVar17 = uVar17 + 1;
            lVar18 = lVar18 + 8;
          }
        } while ((int)uVar17 < (this->DuplicateJobs).ArrayNum);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&this->JobLock);
      LOCK();
      pFVar1 = &this->NumOutstandingJobs;
      iVar6 = pFVar1->Counter;
      pFVar1->Counter = pFVar1->Counter - iVar16;
      UNLOCK();
      if ((iVar6 < iVar16) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("PrevNumOutstandingJobs >= Value",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                              ,0x284,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        iVar16 = (*pcVar11)();
        return iVar16;
      }
      return iVar16;
    }
  } while( true );
}

// RemoveDuplicateJob @ 148540df0

void __thiscall
FShaderJobCache::RemoveDuplicateJob(FShaderJobCache *this,FShaderCommonCompileJob *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  uVar2 = (param_1->JobCacheRef).DuplicateIndex;
  lVar9 = (longlong)(int)uVar2;
  if ((-1 < (int)uVar2) && ((int)uVar2 < (this->DuplicateJobs).ArrayNum)) {
    if ((int)uVar2 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (*(FShaderCommonCompileJob **)((this->DuplicateJobs).AllocatorInstance.Data + lVar9 * 8) ==
        param_1) goto LAB_148540e91;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("DuplicateIndex >= 0 && DuplicateIndex < DuplicateJobs.Num() && DuplicateJobs[DuplicateIndex] == DuplicateJob"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                     ,0x827,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_148540e91:
  (param_1->JobCacheRef).DuplicateIndex = -1;
  uVar7 = 0;
  if ((int)uVar2 < (this->DuplicateJobs).ArrayNum) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar3 = (this->DuplicateJobs).ArrayNum;
  pFVar4 = (this->DuplicateJobs).AllocatorInstance.Data;
  iVar8 = iVar3 + ~uVar2;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    memmove(pFVar4 + lVar9 * 8,pFVar4 + (longlong)(iVar3 - iVar8) * 8,(longlong)iVar8 << 3);
  }
  piVar1 = &(this->DuplicateJobs).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&(this->DuplicateJobs).AllocatorInstance,(this->DuplicateJobs).ArrayNum,
             &(this->DuplicateJobs).ArrayMax);
  if ((int)uVar2 < (this->DuplicateJobs).ArrayNum) {
    if ((int)uVar2 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(uint *)(*(longlong *)((this->DuplicateJobs).AllocatorInstance.Data + lVar9 * 8) + 0x9c) =
         uVar2;
  }
  return;
}

// SubmitJob @ 148548560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderJobCache::SubmitJob(FShaderJobCache *this,FShaderCommonCompileJob *param_1)

{
  FShaderCommonCompileJob **ppFVar1;
  int *piVar2;
  TArray<FShaderCommonCompileJob_*,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<int> *paVar4;
  FShaderCommonCompileJob ***pppFVar5;
  undefined1 uVar6;
  EShaderCompileJobPriority EVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined1 uVar10;
  TConsoleVariableData<bool> *pTVar11;
  TConsoleVariableData<bool> *pTVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  FShaderJobData *pFVar17;
  FShaderCompileJobStatus *pFVar18;
  longlong lVar19;
  FShaderCommonCompileJob **ppFVar20;
  double dVar21;
  undefined1 auStackY_208 [32];
  FShaderCommonCompileJob *local_1b8;
  LARGE_INTEGER local_1b0;
  LARGE_INTEGER local_1a8;
  FString local_1a0;
  FString local_190;
  FShaderCacheLoadContext local_178;
  FShaderCacheLoadContext local_108;
  FBlake3Hash local_98;
  FBlake3Hash local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  *(undefined1 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9010) = 1;
  if ((param_1->Priority == None) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Job->Priority != EShaderCompileJobPriority::None",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                          ,0x55e,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((param_1->PendingPriority != None) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Job->PendingPriority == EShaderCompileJobPriority::None",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                          ,0x55f,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = CVarShaderCompilerDebugValidateJobCache.Ref;
  bVar13 = true;
  bVar14 = IsInParallelGameThread();
  if (bVar14) {
LAB_148548633:
    lVar19 = 0;
  }
  else {
    bVar14 = IsInGameThread();
    lVar19 = 1;
    if (bVar14) goto LAB_148548633;
  }
  pTVar12 = CVarShaderCompilerDebugValidateJobCache.Ref;
  if (pTVar11->ShadowedValue[lVar19] == false) {
    (**(code **)param_1->_padding_)(param_1,&local_98);
    bVar14 = bVar13;
    if ((GShaderCompilerPerShaderDDCGlobal == 0) &&
       (param_1->bIsDefaultMaterial != '\0' || param_1->bIsGlobalShader != '\0')) {
      bVar14 = false;
    }
    QueryPerformanceCounter(&local_1b0);
    dVar21 = (double)local_1b0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    AcquireSRWLockExclusive((PSRWLOCK)&this->JobLock);
    QueryPerformanceCounter(&local_1a8);
    param_1->TimeTaskSubmitJobsStall =
         ((double)local_1a8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar21) +
         param_1->TimeTaskSubmitJobsStall;
    if (param_1->PrevLink != (FShaderCommonCompileJob **)0x0) {
      if ((param_1->JobIndex == -1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Job->JobIndex != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                              ,0x57f,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FindOrAdd(this,&local_178,&local_98,param_1,bVar14);
      if ((local_178._padding_ == 0) || ((int)local_178._padding_ == 0)) {
        pFVar17 = GetShaderJobData(&param_1->JobCacheRef);
        FShaderCommonCompileJob::UpdateStatus(param_1,Queued);
        if ((pFVar17->JobInFlight).Reference == (FShaderCommonCompileJob *)0x0) {
          (pFVar17->JobInFlight).Reference = param_1;
          LOCK();
          (param_1->NumRefs).Counter = (param_1->NumRefs).Counter + 1;
          UNLOCK();
        }
        else {
          if (6 < (byte)LogShaderCompilers._0_1_) {
            ::LexToString(&local_190,&local_98);
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers)
            ;
            if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Data.AllocatorInstance.Data);
            }
          }
          ppFVar1 = &param_1->NextLink;
          if (param_1->NextLink != (FShaderCommonCompileJob *)0x0) {
            param_1->NextLink->PrevLink = param_1->PrevLink;
          }
          if (param_1->PrevLink != (FShaderCommonCompileJob **)0x0) {
            *param_1->PrevLink = *ppFVar1;
          }
          *ppFVar1 = (FShaderCommonCompileJob *)0x0;
          param_1->PrevLink = (FShaderCommonCompileJob **)0x0;
          if (pFVar17->DuplicateJobsWaitList == (FShaderCommonCompileJob *)0x0) {
            pFVar17->DuplicateJobsWaitList = param_1;
          }
          else {
            ppFVar20 = &pFVar17->DuplicateJobsWaitList->NextLink;
            param_1->PrevLink = ppFVar20;
            *ppFVar1 = *ppFVar20;
            *ppFVar20 = param_1;
            if (*ppFVar1 != (FShaderCommonCompileJob *)0x0) {
              (*ppFVar1)->PrevLink = ppFVar1;
            }
          }
          this->TotalCacheDuplicates = this->TotalCacheDuplicates + 1;
          pFVar18 = TSharedPtr<FShaderCompileJobStatus,1>::operator->(&param_1->JobStatusPtr);
          LOCK();
          pFVar18->IsDuplicate = (atomic<bool>)0x1;
          UNLOCK();
          local_1b8 = param_1;
          if (((param_1->JobCacheRef).DuplicateIndex != -1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("DuplicateJob->JobCacheRef.DuplicateIndex == INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                                  ,0x81e,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar3 = &this->DuplicateJobs;
          pFVar8 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar8 <= (FScriptContainerElement *)&local_1b8) &&
              ((FScriptContainerElement *)&local_1b8 <
               pFVar8 + (longlong)(this->DuplicateJobs).ArrayMax * 8)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar16 = (this->DuplicateJobs).ArrayNum;
          piVar2 = &(this->DuplicateJobs).ArrayMax;
          if (iVar16 == *piVar2) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar3->AllocatorInstance,piVar2);
          }
          pFVar8 = (pTVar3->AllocatorInstance).Data;
          (this->DuplicateJobs).ArrayNum = iVar16 + 1;
          *(FShaderCommonCompileJob **)(pFVar8 + (longlong)iVar16 * 8) = local_1b8;
          (local_1b8->JobCacheRef).DuplicateIndex = iVar16;
          ReleaseSRWLockExclusive((PSRWLOCK)&this->JobLock);
          bVar13 = false;
        }
      }
      else {
        if (param_1->NextLink != (FShaderCommonCompileJob *)0x0) {
          param_1->NextLink->PrevLink = param_1->PrevLink;
        }
        if (param_1->PrevLink != (FShaderCommonCompileJob **)0x0) {
          *param_1->PrevLink = param_1->NextLink;
        }
        param_1->NextLink = (FShaderCommonCompileJob *)0x0;
        param_1->PrevLink = (FShaderCommonCompileJob **)0x0;
        ReleaseSRWLockExclusive((PSRWLOCK)&this->JobLock);
        bVar13 = false;
        if (6 < (byte)LogShaderCompilers._0_1_) {
          ::LexToString(&local_1a0,&local_98);
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
          if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
          }
        }
        (**(code **)(param_1->_padding_ + 8))(param_1,&local_178);
        dVar21 = ProcessFinishedJob(this,param_1,CompleteFoundInCache);
        param_1->TimeTaskSubmitJobsStall = dVar21 + param_1->TimeTaskSubmitJobsStall;
      }
      if (local_178.Reader.Ptr != (FMemoryReaderView *)0x0) {
        (**(code **)(local_178.Reader.Ptr)->_padding_)(local_178.Reader.Ptr,1);
      }
      DestructItems<FCompressedBuffer,int>
                ((FCompressedBuffer *)local_178._padding_,(int)local_178._padding_);
      if ((FCompressedBuffer *)local_178._padding_ != (FCompressedBuffer *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      DestructItems<FCompositeBuffer,int>
                ((FCompositeBuffer *)local_178._padding_,(int)local_178._padding_);
      if ((FCompositeBuffer *)local_178._padding_ != (FCompositeBuffer *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_178._padding_);
      if (bVar13 == false) goto LAB_148548cf9;
      goto LAB_148548b2f;
    }
    if (3 < (byte)LogShaderCompilers._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
    if (((param_1->JobStatusPtr).Object == (FShaderCompileJobStatus *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    LOCK();
    ((param_1->JobStatusPtr).Object)->Status = (atomic<EShaderCompileJobStatus>)0x3;
    UNLOCK();
  }
  else {
    bVar13 = IsInParallelGameThread();
    if (bVar13) {
LAB_148548a91:
      lVar19 = 0;
    }
    else {
      bVar13 = IsInGameThread();
      lVar19 = 1;
      if (bVar13) goto LAB_148548a91;
    }
    bVar13 = false;
    if (pTVar12->ShadowedValue[lVar19] != false) {
      (**(code **)param_1->_padding_)(param_1,&local_78);
      AcquireSRWLockExclusive((PSRWLOCK)&this->JobLock);
      FindOrAdd(this,&local_108,&local_78,param_1,
                param_1->bIsDefaultMaterial == '\0' && param_1->bIsGlobalShader == '\0');
      bVar13 = true;
      if (local_108.Reader.Ptr != (FMemoryReaderView *)0x0) {
        (**(code **)(local_108.Reader.Ptr)->_padding_)(local_108.Reader.Ptr,1);
      }
      DestructItems<FCompressedBuffer,int>
                ((FCompressedBuffer *)local_108._padding_,(int)local_108._padding_);
      if ((FCompressedBuffer *)local_108._padding_ != (FCompressedBuffer *)0x0) {
        FMemory::Free((void *)local_108._padding_);
      }
      DestructItems<FCompositeBuffer,int>
                ((FCompositeBuffer *)local_108._padding_,(int)local_108._padding_);
      if ((FCompositeBuffer *)local_108._padding_ != (FCompositeBuffer *)0x0) {
        FMemory::Free((void *)local_108._padding_);
      }
      UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
      ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
                ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_108._padding_);
    }
LAB_148548b2f:
    FShaderCompilerStats::RegisterNewPendingJob(GShaderCompilerStats,param_1);
    if ((param_1->bInputHashSet == '\0') &&
       (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<978537903879620038>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                            ,0x5c6,"Job->bInputHashSet"), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (bVar13 == false) {
      bVar13 = true;
      AcquireSRWLockExclusive((PSRWLOCK)&this->JobLock);
      if (param_1->PrevLink == (FShaderCommonCompileJob **)0x0) {
        if (4 < (byte)LogShaderCompilers._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
        }
        FShaderCommonCompileJob::UpdateStatus(param_1,Cancelled);
        goto LAB_148548cef;
      }
      if ((param_1->JobIndex == -1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Job->JobIndex != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                              ,0x5d7,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if ((param_1->RequestOwner).Ptr == (FRequestOwner *)0x0) {
      if ((param_1->PrevLink == (FShaderCommonCompileJob **)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Job->PrevLink",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                              ,0x5de,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      ppFVar1 = &param_1->NextLink;
      if (param_1->NextLink != (FShaderCommonCompileJob *)0x0) {
        param_1->NextLink->PrevLink = param_1->PrevLink;
      }
      if (param_1->PrevLink != (FShaderCommonCompileJob **)0x0) {
        *param_1->PrevLink = *ppFVar1;
      }
      EVar7 = param_1->Priority;
      *ppFVar1 = (FShaderCommonCompileJob *)0x0;
      param_1->PrevLink = (FShaderCommonCompileJob **)0x0;
      if ((ForceLocal < EVar7) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)PriorityIndex < (uint32)NumShaderCompileJobPriorities",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                              ,0x319,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((param_1->PendingPriority != None) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Job.PendingPriority == EShaderCompileJobPriority::None",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                              ,0x31a,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      LOCK();
      paVar4 = (this->NumPendingJobs).Elements + EVar7;
      *paVar4 = (atomic<int>)((int)*paVar4 + 1);
      UNLOCK();
      if (((*ppFVar1 != (FShaderCommonCompileJob *)0x0) ||
          (param_1->PrevLink != (FShaderCommonCompileJob **)0x0)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Job.NextLink == nullptr && Job.PrevLink == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp"
                              ,0x30c,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      LOCK();
      pppFVar5 = (this->PendingJobsTail).Elements + EVar7;
      ppFVar20 = *pppFVar5;
      *pppFVar5 = ppFVar1;
      UNLOCK();
      param_1->PrevLink = ppFVar20;
      *ppFVar20 = param_1;
      param_1->PendingPriority = param_1->Priority;
    }
    if (bVar13 == false) goto LAB_148548cf9;
  }
LAB_148548cef:
  ReleaseSRWLockExclusive((PSRWLOCK)&this->JobLock);
LAB_148548cf9:
  *(undefined1 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9010) = 0;
  return;
}

// SubmitJobs @ 1485492a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FShaderJobCache::SubmitJobs
          (FShaderJobCache *this,
          TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *param_1)

{
  FShaderCommonCompileJob **ppFVar1;
  atomic<unsigned_int> *paVar2;
  FScriptContainerElement *pFVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  FShaderCommonCompileJob *pFVar6;
  FTaskBase *this_00;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  if (0 < param_1->ArrayNum) {
    LOCK();
    (this->NumOutstandingJobs).Counter = (this->NumOutstandingJobs).Counter + param_1->ArrayNum;
    UNLOCK();
    AcquireSRWLockExclusive((PSRWLOCK)&this->JobLock);
    pFVar7 = (param_1->AllocatorInstance).Data;
    iVar5 = param_1->ArrayNum;
    pFVar3 = pFVar7 + (longlong)iVar5 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar5) {
        `TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar7 == pFVar3) break;
      pFVar6 = *(FShaderCommonCompileJob **)pFVar7;
      ppFVar1 = &this->PendingSubmitJobTaskJobs;
      if (*ppFVar1 != (FShaderCommonCompileJob *)0x0) {
        (*ppFVar1)->PrevLink = &pFVar6->NextLink;
      }
      pFVar7 = pFVar7 + 8;
      pFVar6->NextLink = *ppFVar1;
      pFVar6->PrevLink = ppFVar1;
      *ppFVar1 = pFVar6;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->JobLock);
    pFVar7 = (param_1->AllocatorInstance).Data;
    iVar5 = param_1->ArrayNum;
    pFVar3 = pFVar7 + (longlong)iVar5 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar5) {
        `TCheckedPointerIterator<TRefCountPtr<FShaderCommonCompileJob>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar7 == pFVar3) break;
      pFVar6 = *(FShaderCommonCompileJob **)pFVar7;
      if (pFVar6 != (FShaderCommonCompileJob *)0x0) {
        LOCK();
        (pFVar6->NumRefs).Counter = (pFVar6->NumRefs).Counter + 1;
        UNLOCK();
      }
      this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&UE::Tasks::Private::SmallTaskAllocator);
      if (this_00 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
        this_00->_padding_ =
             (longlong)
             &UE::Tasks::Private::
              TExecutableTaskBase<`FShaderJobCache::SubmitJobs'::`14'::<lambda_1>,void,void>::
              _vftable_;
        UE::Tasks::Private::FTaskBase::Init
                  (this_00,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ShaderCompiler\\ShaderCompilerJobCache.cpp(1535)"
                   ,BackgroundNormal,None,None);
        this_00[1]._padding_ = (longlong)pFVar6;
        if (pFVar6 != (FShaderCommonCompileJob *)0x0) {
          LOCK();
          (pFVar6->NumRefs).Counter = (pFVar6->NumRefs).Counter + 1;
          UNLOCK();
        }
        this_00[1]._padding_ = (longlong)this;
        this_00->_padding_ =
             (longlong)
             &UE::Tasks::Private::TExecutableTask<`FShaderJobCache::SubmitJobs'::`14'::<lambda_1>_>
              ::_vftable_;
        UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
        LOCK();
        paVar2 = &this_00->RefCount;
        aVar4 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar4 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_00->_padding_)(this_00,1);
        }
      }
      if (pFVar6 != (FShaderCommonCompileJob *)0x0) {
        FShaderCommonCompileJob::Release(pFVar6);
      }
      pFVar7 = pFVar7 + 8;
    }
  }
  return;
}

// operator() @ 15052d340

bool __thiscall
`FShaderJobCache::AddToCacheAndProcessPending'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<978537903879620172>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<978537903879620172>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15052d6d0

bool __thiscall `FShaderJobCache::InternalSetPriority'::__l18::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<978537903879619771>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<978537903879619771>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15052d7e0

bool __thiscall `FShaderJobCache::InternalSetPriority'::__l18::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<978537903879619774>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<978537903879619774>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

