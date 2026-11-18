// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 26

// FFileConstructorStatistics @ 14327fa00

FFileConstructorStatistics * __thiscall
BuildPatchServices::FFileConstructorStatistics::FFileConstructorStatistics
          (FFileConstructorStatistics *this,ISpeedRecorder *param_1,ISpeedRecorder *param_2,
          FBuildPatchProgress *param_3,IFileOperationTracker *param_4)

{
  this->ReadSpeedRecorder = param_1;
  this->_padding_ = (longlong)&___7FFileConstructorStatistics_BuildPatchServices__6B_;
  this->FileOperationTracker = param_4;
  this->WriteSpeedRecorder = param_2;
  this->BuildProgress = param_3;
  (this->TotalBytesProcessed).Counter = 0;
  (this->TotalBytesRequired).Counter = 0;
  (this->TotalBytesConstructed).Counter = 0;
  this->bResumeCompleted = (FThreadSafeBool)0x0;
  (this->TotalFilesConstructed).Counter = 0;
  this->bIsAdministering = (FThreadSafeBool)0x0;
  (this->LastAdministerCycles).Counter = 0;
  this->bIsReading = (FThreadSafeBool)0x0;
  (this->LastReadCycles).Counter = 0;
  this->bIsWriting = (FThreadSafeBool)0x0;
  (this->LastWriteCycles).Counter = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ThreadLockCs,4000);
  (this->CurrentChunk).A = 0;
  (this->CurrentChunk).B = 0;
  (this->CurrentChunk).C = 0;
  (this->CurrentChunk).D = 0;
  (this->CurrentFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentFile).Data.ArrayNum = 0;
  (this->CurrentFile).Data.ArrayMax = 0;
  this->CurrentFileSize = 0;
  this->CurrentFileProgress = 0;
  this->LastByteRangeStateUpdate = 0;
  return this;
}

// ~FFileConstructorStatistics @ 1432882c0

void __thiscall
BuildPatchServices::FFileConstructorStatistics::~FFileConstructorStatistics
          (FFileConstructorStatistics *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FFileConstructorStatistics_BuildPatchServices__6B_;
  pFVar1 = (this->CurrentFile).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ThreadLockCs);
  this->_padding_ = (longlong)&___7IFileConstructorStat_BuildPatchServices__6B_;
  return;
}

// GetBytesConstructed @ 1432d3760

ulong64 __thiscall
BuildPatchServices::FFileConstructorStatistics::GetBytesConstructed
          (FFileConstructorStatistics *this)

{
  return (this->TotalBytesConstructed).Counter;
}

// GetCurrentChunk @ 1432d4200

FGuid * __thiscall
BuildPatchServices::FFileConstructorStatistics::GetCurrentChunk
          (FFileConstructorStatistics *this,FGuid *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = (this->CurrentChunk).B;
    uVar2 = (this->CurrentChunk).C;
    uVar3 = (this->CurrentChunk).D;
    __return_storage_ptr__->A = (this->CurrentChunk).A;
    __return_storage_ptr__->B = uVar1;
    __return_storage_ptr__->C = uVar2;
    __return_storage_ptr__->D = uVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetCurrentFile @ 1432d48b0

FString * __thiscall
BuildPatchServices::FFileConstructorStatistics::GetCurrentFile
          (FFileConstructorStatistics *this,FString *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::FString(__return_storage_ptr__,&this->CurrentFile);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetCurrentFileProgress @ 1432d4910

float __thiscall
BuildPatchServices::FFileConstructorStatistics::GetCurrentFileProgress
          (FFileConstructorStatistics *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = 0.0;
    if (0 < this->CurrentFileSize) {
      fVar1 = (float)this->CurrentFileProgress / (float)this->CurrentFileSize;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFilesConstructed @ 1432d6f60

ulong64 __thiscall
BuildPatchServices::FFileConstructorStatistics::GetFilesConstructed
          (FFileConstructorStatistics *this)

{
  return (longlong)(this->TotalFilesConstructed).Counter;
}

// GetRequiredConstructSize @ 1432d92a0

long64 __thiscall
BuildPatchServices::FFileConstructorStatistics::GetRequiredConstructSize
          (FFileConstructorStatistics *this)

{
  return (this->TotalBytesRequired).Counter;
}

// IsCurrentlyAdministering @ 1432dbae0

bool __thiscall
BuildPatchServices::FFileConstructorStatistics::IsCurrentlyAdministering
          (FFileConstructorStatistics *this)

{
  longlong lVar1;
  ulong64 uVar2;
  double dVar3;
  
  lVar1 = (this->LastAdministerCycles).Counter;
  uVar2 = FStatsCollector::GetCycles();
  if (this->bIsAdministering == (FThreadSafeBool)0x0) {
    dVar3 = FStatsCollector::CyclesToSeconds(uVar2 - lVar1);
    if (__real_3fa999999999999a <= dVar3) {
      return false;
    }
  }
  return true;
}

// IsCurrentlyReading @ 1432dbb50

bool __thiscall
BuildPatchServices::FFileConstructorStatistics::IsCurrentlyReading(FFileConstructorStatistics *this)

{
  longlong lVar1;
  ulong64 uVar2;
  double dVar3;
  
  lVar1 = (this->LastReadCycles).Counter;
  uVar2 = FStatsCollector::GetCycles();
  if (this->bIsReading == (FThreadSafeBool)0x0) {
    dVar3 = FStatsCollector::CyclesToSeconds(uVar2 - lVar1);
    if (__real_3fa999999999999a <= dVar3) {
      return false;
    }
  }
  return true;
}

// IsCurrentlyWriting @ 1432dbc70

bool __thiscall
BuildPatchServices::FFileConstructorStatistics::IsCurrentlyWriting(FFileConstructorStatistics *this)

{
  longlong lVar1;
  ulong64 uVar2;
  double dVar3;
  
  lVar1 = (this->LastWriteCycles).Counter;
  uVar2 = FStatsCollector::GetCycles();
  if (this->bIsWriting == (FThreadSafeBool)0x0) {
    dVar3 = FStatsCollector::CyclesToSeconds(uVar2 - lVar1);
    if (__real_3fa999999999999a <= dVar3) {
      return false;
    }
  }
  return true;
}

// OnAfterAdminister @ 1432ddeb0

void __thiscall
BuildPatchServices::FFileConstructorStatistics::OnAfterAdminister
          (FFileConstructorStatistics *this,FRecord *param_1)

{
  ulong64 local_18 [2];
  
  local_18[0] = FStatsCollector::GetCycles();
  if (&this->LastAdministerCycles != (FThreadSafeCounter64 *)local_18) {
    LOCK();
    (this->LastAdministerCycles).Counter = local_18[0];
    UNLOCK();
  }
  LOCK();
  this->bIsAdministering = (FThreadSafeBool)0x0;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001432ddefa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->WriteSpeedRecorder + 8))(this->WriteSpeedRecorder,param_1);
  return;
}

// OnAfterRead @ 1432ddf10

void __thiscall
BuildPatchServices::FFileConstructorStatistics::OnAfterRead
          (FFileConstructorStatistics *this,FRecord *param_1)

{
  ulong64 local_18 [2];
  
  local_18[0] = FStatsCollector::GetCycles();
  if (&this->LastReadCycles != (FThreadSafeCounter64 *)local_18) {
    LOCK();
    (this->LastReadCycles).Counter = local_18[0];
    UNLOCK();
  }
  LOCK();
  this->bIsReading = (FThreadSafeBool)0x0;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001432ddf5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->ReadSpeedRecorder + 8))(this->ReadSpeedRecorder,param_1);
  return;
}

// OnAfterWrite @ 1432ddf70

void __thiscall
BuildPatchServices::FFileConstructorStatistics::OnAfterWrite
          (FFileConstructorStatistics *this,FRecord *param_1)

{
  ulong64 local_18 [2];
  
  local_18[0] = FStatsCollector::GetCycles();
  if (&this->LastWriteCycles != (FThreadSafeCounter64 *)local_18) {
    LOCK();
    (this->LastWriteCycles).Counter = local_18[0];
    UNLOCK();
  }
  LOCK();
  this->bIsWriting = (FThreadSafeBool)0x0;
  UNLOCK();
  (**(code **)((longlong)*this->WriteSpeedRecorder + 8))(this->WriteSpeedRecorder,param_1);
  LOCK();
  (this->TotalBytesConstructed).Counter = (this->TotalBytesConstructed).Counter + param_1->Size;
  UNLOCK();
  return;
}

// OnBeforeAdminister @ 1432ddff0

void __thiscall
BuildPatchServices::FFileConstructorStatistics::OnBeforeAdminister(FFileConstructorStatistics *this)

{
  LOCK();
  this->bIsAdministering = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// OnBeforeRead @ 1432de150

void __thiscall
BuildPatchServices::FFileConstructorStatistics::OnBeforeRead(FFileConstructorStatistics *this)

{
  LOCK();
  this->bIsReading = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// OnBeforeWrite @ 1432de160

void __thiscall
BuildPatchServices::FFileConstructorStatistics::OnBeforeWrite(FFileConstructorStatistics *this)

{
  LOCK();
  this->bIsWriting = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// OnChunkGet @ 1432de190

void __thiscall
BuildPatchServices::FFileConstructorStatistics::OnChunkGet
          (FFileConstructorStatistics *this,FGuid *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = param_1->B;
    uVar2 = param_1->C;
    uVar3 = param_1->D;
    (this->CurrentChunk).A = param_1->A;
    (this->CurrentChunk).B = uVar1;
    (this->CurrentChunk).C = uVar2;
    (this->CurrentChunk).D = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0001432de1d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnConstructionCompleted @ 1432de310

void __thiscall
BuildPatchServices::FFileConstructorStatistics::OnConstructionCompleted
          (FFileConstructorStatistics *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->CurrentChunk).C = 0;
    (this->CurrentChunk).D = 0;
    (this->CurrentChunk).A = 0;
    (this->CurrentChunk).B = 0;
                    /* WARNING: Could not recover jumptable at 0x0001432de34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnFileCompleted @ 1432df710

void __thiscall
BuildPatchServices::FFileConstructorStatistics::OnFileCompleted
          (FFileConstructorStatistics *this,FString *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  if (this->bResumeCompleted != (FThreadSafeBool)0x0) {
    LOCK();
    (this->TotalFilesConstructed).Counter = (this->TotalFilesConstructed).Counter + 1;
    UNLOCK();
  }
  (**(code **)((longlong)*this->FileOperationTracker + 0x40))(this->FileOperationTracker,param_1,10)
  ;
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::Empty(&this->CurrentFile);
    this->CurrentFileSize = 0;
                    /* WARNING: Could not recover jumptable at 0x0001432df76f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnFileProgress @ 1432df860

void __thiscall
BuildPatchServices::FFileConstructorStatistics::OnFileProgress
          (FFileConstructorStatistics *this,FString *param_1,long64 param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulong64 local_18;
  long64 local_10;
  
  local_18 = this->LastByteRangeStateUpdate;
  local_10 = param_2;
  (**(code **)((longlong)*this->FileOperationTracker + 0x48))
            (this->FileOperationTracker,param_1,&local_18,10);
  lpCriticalSection = &this->ThreadLockCs;
  this->LastByteRangeStateUpdate = param_2;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::operator=(&this->CurrentFile,param_1);
    this->CurrentFileProgress = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001432df8e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnFileStarted @ 1432df990

void __thiscall
BuildPatchServices::FFileConstructorStatistics::OnFileStarted
          (FFileConstructorStatistics *this,FString *param_1,long64 param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->ThreadLockCs;
  this->LastByteRangeStateUpdate = 0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::FString::operator=(&this->CurrentFile,param_1);
    this->CurrentFileSize = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001432df9f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnProcessedDataUpdated @ 1432e0f00

void __thiscall
BuildPatchServices::FFileConstructorStatistics::OnProcessedDataUpdated
          (FFileConstructorStatistics *this,long64 param_1)

{
  longlong lVar1;
  float local_res8 [4];
  undefined4 local_res18 [4];
  
  LOCK();
  (this->TotalBytesProcessed).Counter = param_1;
  UNLOCK();
  lVar1 = (this->TotalBytesRequired).Counter;
  if (0 < lVar1) {
    local_res18[0] = 4;
    local_res8[0] = (float)((double)param_1 / (double)lVar1);
    (**(code **)(this->BuildProgress->_padding_ + 0x18))(this->BuildProgress,local_res18,local_res8)
    ;
  }
  return;
}

// OnResumeCompleted @ 1432e1190

void __thiscall
BuildPatchServices::FFileConstructorStatistics::OnResumeCompleted(FFileConstructorStatistics *this)

{
  undefined4 local_res8 [2];
  undefined4 local_res10 [6];
  
  local_res8[0] = 0x3f800000;
  local_res10[0] = 2;
  (**(code **)(this->BuildProgress->_padding_ + 0x18))(this->BuildProgress,local_res10,local_res8);
  LOCK();
  this->bResumeCompleted = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// OnResumeStarted @ 1432e11e0

void __thiscall
BuildPatchServices::FFileConstructorStatistics::OnResumeStarted(FFileConstructorStatistics *this)

{
  undefined4 local_res8 [2];
  undefined4 local_res10 [6];
  
  local_res8[0] = 0;
  local_res10[0] = 2;
  (**(code **)(this->BuildProgress->_padding_ + 0x18))(this->BuildProgress,local_res10,local_res8);
  LOCK();
  this->bResumeCompleted = (FThreadSafeBool)0x0;
  UNLOCK();
  return;
}

// OnTotalRequiredUpdated @ 1432e12d0

void __thiscall
BuildPatchServices::FFileConstructorStatistics::OnTotalRequiredUpdated
          (FFileConstructorStatistics *this,long64 param_1)

{
  float local_res8 [2];
  undefined4 local_res10 [6];
  
  LOCK();
  (this->TotalBytesRequired).Counter = param_1;
  UNLOCK();
  if (0 < param_1) {
    local_res10[0] = 4;
    local_res8[0] = (float)((double)(this->TotalBytesProcessed).Counter / (double)param_1);
    (**(code **)(this->BuildProgress->_padding_ + 0x18))(this->BuildProgress,local_res10,local_res8)
    ;
  }
  return;
}

