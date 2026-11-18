// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// FShaderCompileJobCollection @ 14850de80

FShaderCompileJobCollection * __thiscall
FShaderCompileJobCollection::FShaderCompileJobCollection
          (FShaderCompileJobCollection *this,FWindowsRecursiveMutex *param_1)

{
  FShaderJobCache *pFVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  FShaderCompileJobCollection *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  IConsoleObject *pIVar7;
  ulong64 *puVar8;
  code *pcVar9;
  ulong64 *puVar10;
  FShaderCompileJobCollection local_78;
  FDelegateAllocation local_68;
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  puVar10 = (ulong64 *)0x0;
  (this->JobsCache).Ptr = (FShaderJobCache *)0x0;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar3)) {
    pcVar9 = (code *)swi(3);
    pFVar4 = (FShaderCompileJobCollection *)(*pcVar9)();
    return pFVar4;
  }
  pIVar2 = IConsoleManager::Singleton;
  local_78.PrintStatsCmd = (IConsoleObject *)0x0;
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  pcVar9 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_78.PrintStatsCmd,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_68;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_68);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFShaderCompileJobCollection____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = HandlePrintStats;
    puVar5[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  pIVar7 = (IConsoleObject *)
           (*pcVar9)(pIVar2,L"r.ShaderCompiler.PrintStats",
                     L"Prints out to the log the stats for the shader compiler.",
                     &local_78.PrintStatsCmd,0);
  this->PrintStatsCmd = pIVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_78.PrintStatsCmd,
             (FWriteAccessScope *)&local_58);
  if ((local_68.DelegateSize != 0) &&
     (local_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_68.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_68,0,0,0x10);
    local_68.DelegateSize = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (local_68.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_68.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_78.PrintStatsCmd);
  puVar8 = ::operator_new(0x25b0);
  if (puVar8 != (ulong64 *)0x0) {
    puVar8[1] = 0;
    *puVar8 = (ulong64)UE::Core::Private::PimplPtr::DeleterFunc<FShaderJobCache>;
    FShaderJobCache::FShaderJobCache((FShaderJobCache *)(puVar8 + 2),param_1);
    puVar10 = puVar8;
  }
  if (&local_78 == this) {
    if ((FShaderJobCache *)(puVar10 + 2) == (FShaderJobCache *)0x0) {
      return this;
    }
    pcVar9 = (code *)*puVar10;
  }
  else {
    pFVar1 = (this->JobsCache).Ptr;
    (this->JobsCache).Ptr = (FShaderJobCache *)(puVar10 + 2);
    if (pFVar1 == (FShaderJobCache *)0x0) {
      return this;
    }
    pcVar9 = (code *)pFVar1[-1].TotalCacheDDCHits;
    puVar10 = &pFVar1[-1].TotalCacheDDCHits;
  }
  (*pcVar9)(puVar10);
  return this;
}

// AddToCacheAndProcessPending @ 148516ae0

void __thiscall
FShaderCompileJobCollection::AddToCacheAndProcessPending
          (FShaderCompileJobCollection *this,FShaderCommonCompileJob *param_1)

{
  FShaderJobCache::AddToCacheAndProcessPending((this->JobsCache).Ptr,param_1);
  return;
}

// GetCachingStats @ 1485291d0

void __thiscall
FShaderCompileJobCollection::GetCachingStats
          (FShaderCompileJobCollection *this,FShaderCompilerStats *param_1)

{
  FShaderJobCache *this_00;
  ulong64 uVar1;
  
  this_00 = (this->JobsCache).Ptr;
  AcquireSRWLockShared((PSRWLOCK)&this_00->JobLock);
  (param_1->Counters).TotalCacheSearchAttempts = this_00->TotalSearchAttempts;
  (param_1->Counters).TotalCacheHits = this_00->TotalCacheHits;
  (param_1->Counters).TotalCacheDuplicates = (uint)this_00->TotalCacheDuplicates;
  (param_1->Counters).TotalCacheDDCQueries = (uint)this_00->TotalCacheDDCQueries;
  (param_1->Counters).TotalCacheDDCHits = (uint)this_00->TotalCacheDDCHits;
  (param_1->Counters).UniqueCacheInputHashes = (longlong)(this_00->InputHashToJobData).NumItems;
  (param_1->Counters).UniqueCacheOutputs =
       (longlong)(*(int *)&(this_00->Outputs).field_0x8 - *(int *)&(this_00->Outputs).field_0x34);
  (param_1->Counters).CacheMemUsed = this_00->CurrentlyAllocatedMemory;
  uVar1 = FShaderJobCache::GetCurrentMemoryBudget(this_00);
  (param_1->Counters).CacheMemBudget = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000148529282. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this_00->JobLock);
  return;
}

// GetNumOutstandingJobs @ 14852bae0

int __thiscall FShaderCompileJobCollection::GetNumOutstandingJobs(FShaderCompileJobCollection *this)

{
  return (((this->JobsCache).Ptr)->NumOutstandingJobs).Counter;
}

// GetNumPendingJobs @ 14852bb30

int __thiscall
FShaderCompileJobCollection::GetNumPendingJobs
          (FShaderCompileJobCollection *this,EShaderCompileJobPriority param_1)

{
  return (int)(((this->JobsCache).Ptr)->NumPendingJobs).Elements[param_1];
}

// GetNumPendingJobs @ 14852bb50

int __thiscall FShaderCompileJobCollection::GetNumPendingJobs(FShaderCompileJobCollection *this)

{
  FShaderJobCache *pFVar1;
  atomic<int> *paVar2;
  longlong lVar3;
  TStaticArray<std::atomic<int>,5,4294967295> *pTVar4;
  int iVar5;
  
  pFVar1 = (this->JobsCache).Ptr;
  AcquireSRWLockShared((PSRWLOCK)&pFVar1->JobLock);
  iVar5 = 0;
  pTVar4 = &pFVar1->NumPendingJobs;
  lVar3 = 5;
  do {
    paVar2 = pTVar4->Elements;
    pTVar4 = (TStaticArray<std::atomic<int>,5,4294967295> *)(pTVar4->Elements + 1);
    iVar5 = iVar5 + (int)*paVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  ReleaseSRWLockShared((PSRWLOCK)&pFVar1->JobLock);
  return iVar5;
}

// GetPendingJobs @ 14852be10

int __thiscall
FShaderCompileJobCollection::GetPendingJobs
          (FShaderCompileJobCollection *this,EShaderCompilerWorkerType param_1,
          EShaderCompileJobPriority param_2,int param_3,int param_4,
          TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  
  iVar1 = FShaderJobCache::GetPendingJobs
                    ((this->JobsCache).Ptr,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}

// HandlePrintStats @ 14852f630

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FShaderCompileJobCollection::HandlePrintStats(FShaderCompileJobCollection *this)

{
  FShaderCompilingManager::PrintStats(GShaderCompilingManager);
  return;
}

// PrepareJob @ 148539f90

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

FShaderCompileJob * __thiscall
FShaderCompileJobCollection::PrepareJob
          (FShaderCompileJobCollection *this,uint param_1,FShaderCompileJobKey *param_2,
          EShaderCompileJobPriority param_3)

{
  FShaderCompilerJobTable *this_00;
  FShaderJobCache *this_01;
  bool bVar1;
  bool bVar2;
  uint uVar3;
  FShaderCompileJob *pFVar4;
  FPlatformRWLock *SRWLock;
  
  this_01 = (this->JobsCache).Ptr;
  this_00 = &this_01->JobTable;
  uVar3 = FShaderCompileJobKey::MakeHash(param_2,param_1);
  SRWLock = &this_00->Stripes[0][uVar3 >> 0x1a].StripeLock;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar4 = FShaderCompilerJobTable::InternalFindJob<FShaderCompileJob,FShaderCompileJobKey>
                     (this_00,uVar3,param_1,param_2);
  bVar2 = false;
  if (pFVar4 == (FShaderCompileJob *)0x0) {
    pFVar4 = ::operator_new(0x800);
    if (pFVar4 == (FShaderCompileJob *)0x0) {
      FShaderCompilerJobTable::InternalAddJob(this_00,(FShaderCommonCompileJob *)0x0);
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      return (FShaderCompileJob *)0x0;
    }
    pFVar4 = FShaderCompileJob::FShaderCompileJob(pFVar4,uVar3,param_1,param_3,param_2);
    FShaderCompilerJobTable::InternalAddJob(this_00,(FShaderCommonCompileJob *)pFVar4);
    bVar1 = true;
    bVar2 = true;
    if (pFVar4 == (FShaderCompileJob *)0x0) goto LAB_14853a04c;
  }
  bVar1 = bVar2;
  LOCK();
  *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
  UNLOCK();
LAB_14853a04c:
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (bVar1) {
    if (pFVar4 != (FShaderCompileJob *)0x0) {
      FShaderCommonCompileJob::Release((FShaderCommonCompileJob *)pFVar4);
    }
  }
  else {
    if (*(EShaderCompileJobPriority *)((longlong)&pFVar4->_padding_ + 1) < param_3) {
      FShaderJobCache::InternalSetPriority(this_01,(FShaderCommonCompileJob *)pFVar4,param_3);
    }
    FShaderCommonCompileJob::Release((FShaderCommonCompileJob *)pFVar4);
    pFVar4 = (FShaderCompileJob *)0x0;
  }
  return pFVar4;
}

// PrepareJob @ 14853a0d0

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

FShaderPipelineCompileJob * __thiscall
FShaderCompileJobCollection::PrepareJob
          (FShaderCompileJobCollection *this,uint param_1,FShaderPipelineCompileJobKey *param_2,
          EShaderCompileJobPriority param_3)

{
  FShaderCompilerJobTable *this_00;
  FShaderJobCache *this_01;
  bool bVar1;
  bool bVar2;
  uint uVar3;
  FShaderPipelineCompileJob *pFVar4;
  FPlatformRWLock *SRWLock;
  
  this_01 = (this->JobsCache).Ptr;
  this_00 = &this_01->JobTable;
  uVar3 = FShaderPipelineCompileJobKey::MakeHash(param_2,param_1);
  SRWLock = &this_00->Stripes[1][uVar3 >> 0x1a].StripeLock;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  pFVar4 = FShaderCompilerJobTable::
           InternalFindJob<FShaderPipelineCompileJob,FShaderPipelineCompileJobKey>
                     (this_00,uVar3,param_1,param_2);
  bVar2 = false;
  if (pFVar4 == (FShaderPipelineCompileJob *)0x0) {
    pFVar4 = ::operator_new(0xd8);
    if (pFVar4 == (FShaderPipelineCompileJob *)0x0) {
      FShaderCompilerJobTable::InternalAddJob(this_00,(FShaderCommonCompileJob *)0x0);
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      return (FShaderPipelineCompileJob *)0x0;
    }
    pFVar4 = FShaderPipelineCompileJob::FShaderPipelineCompileJob
                       (pFVar4,uVar3,param_1,param_3,param_2);
    FShaderCompilerJobTable::InternalAddJob(this_00,(FShaderCommonCompileJob *)pFVar4);
    bVar1 = true;
    bVar2 = true;
    if (pFVar4 == (FShaderPipelineCompileJob *)0x0) goto LAB_14853a18f;
  }
  bVar1 = bVar2;
  LOCK();
  *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
  UNLOCK();
LAB_14853a18f:
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  if (bVar1) {
    if (pFVar4 != (FShaderPipelineCompileJob *)0x0) {
      FShaderCommonCompileJob::Release((FShaderCommonCompileJob *)pFVar4);
    }
  }
  else {
    if (*(EShaderCompileJobPriority *)((longlong)&pFVar4->_padding_ + 1) < param_3) {
      FShaderJobCache::InternalSetPriority(this_01,(FShaderCommonCompileJob *)pFVar4,param_3);
    }
    FShaderCommonCompileJob::Release((FShaderCommonCompileJob *)pFVar4);
    pFVar4 = (FShaderPipelineCompileJob *)0x0;
  }
  return pFVar4;
}

// ProcessFinishedJob @ 14853b310

void __thiscall
FShaderCompileJobCollection::ProcessFinishedJob
          (FShaderCompileJobCollection *this,FShaderCommonCompileJob *param_1,
          EShaderCompileJobStatus param_2)

{
  FShaderJobCache::ProcessFinishedJob((this->JobsCache).Ptr,param_1,param_2);
  return;
}

// RemoveAllPendingJobsWithId @ 1485400a0

int __thiscall
FShaderCompileJobCollection::RemoveAllPendingJobsWithId
          (FShaderCompileJobCollection *this,uint param_1)

{
  int iVar1;
  
  iVar1 = FShaderJobCache::RemoveAllPendingJobsWithId((this->JobsCache).Ptr,param_1);
  return iVar1;
}

// RemoveJob @ 148540fb0

void __thiscall
FShaderCompileJobCollection::RemoveJob
          (FShaderCompileJobCollection *this,FShaderCommonCompileJob *param_1)

{
  FShaderCompilerJobTable::RemoveJob(&((this->JobsCache).Ptr)->JobTable,param_1);
  return;
}

// SubmitJobs @ 148548d40

void __thiscall
FShaderCompileJobCollection::SubmitJobs
          (FShaderCompileJobCollection *this,
          TArray<TRefCountPtr<FShaderCommonCompileJob>,TSizedDefaultAllocator<32>_> *param_1)

{
  FShaderJobCache::SubmitJobs((this->JobsCache).Ptr,param_1);
  return;
}

