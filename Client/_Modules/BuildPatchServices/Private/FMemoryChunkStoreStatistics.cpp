// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 17

// FMemoryChunkStoreStatistics @ 1432815a0

FMemoryChunkStoreStatistics * __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::FMemoryChunkStoreStatistics
          (FMemoryChunkStoreStatistics *this,IFileOperationTracker *param_1)

{
  this->FileOperationTracker = param_1;
  this->_padding_ = (longlong)&___7FMemoryChunkStoreStatistics_BuildPatchServices__6B_;
  (this->StoreUseTracker).UsesCount.Counter = 0;
  (this->StoreUseTracker).SumCurrentUses.Counter = 0;
  (this->StoreUseTracker).CurrentUse.Counter = 0;
  (this->StoreUseTracker).PeakUse = 0;
  (this->StoreRetainTracker).UsesCount.Counter = 0;
  (this->StoreRetainTracker).SumCurrentUses.Counter = 0;
  (this->StoreRetainTracker).CurrentUse.Counter = 0;
  (this->StoreRetainTracker).PeakUse = 0;
  (this->NumChunksBooted).Counter = 0;
  (this->StoreSize).Counter = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->MultipleReferencedChunksCS,4000);
  *(undefined8 *)&(this->MultipleReferencedChunks).Elements = 0;
  *(undefined8 *)&(this->MultipleReferencedChunks).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MultipleReferencedChunks).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MultipleReferencedChunks).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MultipleReferencedChunks).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MultipleReferencedChunks).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MultipleReferencedChunks).Elements.field_0x34 = 0;
  (this->MultipleReferencedChunks).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MultipleReferencedChunks).HashSize = 0;
  return this;
}

// ~FMemoryChunkStoreStatistics @ 143288a10

void __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::~FMemoryChunkStoreStatistics
          (FMemoryChunkStoreStatistics *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7FMemoryChunkStoreStatistics_BuildPatchServices__6B_;
  (this->MultipleReferencedChunks).HashSize = 0;
  FVar1 = (this->MultipleReferencedChunks).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->MultipleReferencedChunks).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->MultipleReferencedChunksCS);
  this->_padding_ = (longlong)&___7IMemoryChunkStoreStat_BuildPatchServices__6B_;
  return;
}

// GetAverageStoreRetained @ 1432d3500

float __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::GetAverageStoreRetained
          (FMemoryChunkStoreStatistics *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  fVar2 = (float)(this->StoreRetainTracker).UsesCount.Counter;
  if (0.0 < fVar2) {
    fVar1 = (float)(this->StoreRetainTracker).SumCurrentUses.Counter / fVar2;
  }
  return fVar1;
}

// GetAverageStoreUse @ 1432d3540

float __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::GetAverageStoreUse
          (FMemoryChunkStoreStatistics *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 0.0;
  fVar2 = (float)(this->StoreUseTracker).UsesCount.Counter;
  if (0.0 < fVar2) {
    fVar1 = (float)(this->StoreUseTracker).SumCurrentUses.Counter / fVar2;
  }
  return fVar1;
}

// GetNumBooted @ 1432d8470

int __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::GetNumBooted(FMemoryChunkStoreStatistics *this)

{
  return (this->NumChunksBooted).Counter;
}

// GetPeakStoreRetained @ 1432d8b40

int __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::GetPeakStoreRetained
          (FMemoryChunkStoreStatistics *this)

{
  return (this->StoreRetainTracker).PeakUse;
}

// GetPeakStoreUse @ 1432d8b50

int __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::GetPeakStoreUse(FMemoryChunkStoreStatistics *this)

{
  return (this->StoreUseTracker).PeakUse;
}

// GetStoreRetained @ 1432d9840

int __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::GetStoreRetained(FMemoryChunkStoreStatistics *this)

{
  return (this->StoreRetainTracker).CurrentUse.Counter;
}

// GetStoreSize @ 1432d9850

int __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::GetStoreSize(FMemoryChunkStoreStatistics *this)

{
  return (this->StoreSize).Counter;
}

// GetStoreUse @ 1432d9860

int __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::GetStoreUse(FMemoryChunkStoreStatistics *this)

{
  return (this->StoreUseTracker).CurrentUse.Counter;
}

// IsMultipleReferenced @ 1432dc360

bool __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::IsMultipleReferenced
          (FMemoryChunkStoreStatistics *this,FGuid *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  ulong64 uVar2;
  
  lpCriticalSection = &this->MultipleReferencedChunksCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar2 = CityHash64((char *)param_1,0x10);
    iVar1 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                      (&this->MultipleReferencedChunks,(uint)uVar2,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1 != -1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnChunkBooted @ 1432de170

void __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::OnChunkBooted
          (FMemoryChunkStoreStatistics *this,FGuid *param_1)

{
  LOCK();
  (this->NumChunksBooted).Counter = (this->NumChunksBooted).Counter + 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001432de177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))();
  return;
}

// OnChunkReleased @ 1432de1f0

void __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::OnChunkReleased
          (FMemoryChunkStoreStatistics *this,FGuid *param_1)

{
  FThreadSafeCounter *pFVar1;
  FThreadSafeCounter64 *pFVar2;
  bool bVar3;
  int iVar4;
  
  LOCK();
  pFVar1 = &(this->StoreUseTracker).CurrentUse;
  iVar4 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  LOCK();
  pFVar2 = &(this->StoreUseTracker).SumCurrentUses;
  pFVar2->Counter = pFVar2->Counter + (longlong)(iVar4 + -1);
  UNLOCK();
  LOCK();
  (this->StoreUseTracker).UsesCount.Counter = (this->StoreUseTracker).UsesCount.Counter + 1;
  UNLOCK();
  bVar3 = IsMultipleReferenced(this,param_1);
  if (bVar3) {
    LOCK();
    pFVar1 = &(this->StoreRetainTracker).CurrentUse;
    iVar4 = pFVar1->Counter;
    pFVar1->Counter = pFVar1->Counter + -1;
    UNLOCK();
    iVar4 = iVar4 + -1;
  }
  else {
    iVar4 = (this->StoreRetainTracker).CurrentUse.Counter;
  }
  LOCK();
  pFVar2 = &(this->StoreRetainTracker).SumCurrentUses;
  pFVar2->Counter = pFVar2->Counter + (longlong)iVar4;
  UNLOCK();
  LOCK();
  (this->StoreRetainTracker).UsesCount.Counter = (this->StoreRetainTracker).UsesCount.Counter + 1;
  UNLOCK();
  return;
}

// OnChunkStored @ 1432de250

void __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::OnChunkStored
          (FMemoryChunkStoreStatistics *this,FGuid *param_1)

{
  FThreadSafeCounter *pFVar1;
  FThreadSafeCounter64 *pFVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  LOCK();
  pFVar1 = &(this->StoreUseTracker).CurrentUse;
  iVar5 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  iVar5 = iVar5 + 1;
  LOCK();
  pFVar2 = &(this->StoreUseTracker).SumCurrentUses;
  pFVar2->Counter = pFVar2->Counter + (longlong)iVar5;
  UNLOCK();
  LOCK();
  (this->StoreUseTracker).UsesCount.Counter = (this->StoreUseTracker).UsesCount.Counter + 1;
  UNLOCK();
  do {
    iVar4 = (this->StoreUseTracker).PeakUse;
    if (iVar5 <= iVar4) break;
    piVar3 = &(this->StoreUseTracker).PeakUse;
    LOCK();
    bVar6 = iVar4 == *piVar3;
    if (bVar6) {
      *piVar3 = iVar5;
    }
    UNLOCK();
  } while (!bVar6);
  (**(code **)((longlong)*this->FileOperationTracker + 0x28))(this->FileOperationTracker,param_1,9);
  bVar6 = IsMultipleReferenced(this,param_1);
  if (bVar6) {
    LOCK();
    pFVar1 = &(this->StoreRetainTracker).CurrentUse;
    iVar5 = pFVar1->Counter;
    pFVar1->Counter = pFVar1->Counter + 1;
    UNLOCK();
    iVar5 = iVar5 + 1;
    LOCK();
    pFVar2 = &(this->StoreRetainTracker).SumCurrentUses;
    pFVar2->Counter = pFVar2->Counter + (longlong)iVar5;
    UNLOCK();
    LOCK();
    (this->StoreRetainTracker).UsesCount.Counter = (this->StoreRetainTracker).UsesCount.Counter + 1;
    UNLOCK();
    while (iVar4 = (this->StoreRetainTracker).PeakUse, iVar4 < iVar5) {
      piVar3 = &(this->StoreRetainTracker).PeakUse;
      LOCK();
      bVar6 = iVar4 == *piVar3;
      if (bVar6) {
        *piVar3 = iVar5;
      }
      UNLOCK();
      if (bVar6) {
        return;
      }
    }
  }
  else {
    LOCK();
    pFVar2 = &(this->StoreRetainTracker).SumCurrentUses;
    pFVar2->Counter = pFVar2->Counter + (longlong)(this->StoreRetainTracker).CurrentUse.Counter;
    UNLOCK();
    LOCK();
    (this->StoreRetainTracker).UsesCount.Counter = (this->StoreRetainTracker).UsesCount.Counter + 1;
    UNLOCK();
  }
  return;
}

// OnStoreSizeUpdated @ 1432e1220

void __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::OnStoreSizeUpdated
          (FMemoryChunkStoreStatistics *this,int param_1)

{
  LOCK();
  (this->StoreSize).Counter = param_1;
  UNLOCK();
  return;
}

// OnStoreUseUpdated @ 1432e1230

void __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::OnStoreUseUpdated
          (FMemoryChunkStoreStatistics *this,int param_1)

{
  return;
}

// SetMultipleReferencedChunk @ 1432edba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
BuildPatchServices::FMemoryChunkStoreStatistics::SetMultipleReferencedChunk
          (FMemoryChunkStoreStatistics *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ForElementType<FSetElementId> FVar1;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_38;
  lpCriticalSection = &this->MultipleReferencedChunksCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (&this->MultipleReferencedChunks != param_1) {
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
      Move<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
                (&this->MultipleReferencedChunks,param_1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    param_1->HashSize = 0;
    FVar1 = (param_1->Hash).SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&param_1->Elements);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

