// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 21

// FCloudChunkSourceStatistics @ 14327f0e0

FCloudChunkSourceStatistics * __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::FCloudChunkSourceStatistics
          (FCloudChunkSourceStatistics *this,IInstallerAnalytics *param_1,
          FBuildPatchProgress *param_2,IFileOperationTracker *param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  
  this->InstallerAnalytics = param_1;
  this->_padding_ = (longlong)&___7FCloudChunkSourceStatistics_BuildPatchServices__6B_;
  this->BuildProgress = param_2;
  this->FileOperationTracker = param_3;
  (this->TotalBytesReceived).Counter = 0;
  (this->TotalBytesRequired).Counter = 0;
  (this->NumDownloadsCorrupt).Counter = 0;
  (this->NumDownloadsAborted).Counter = 0;
  (this->ChunkSuccessRate).Counter = 0;
  (this->CurrentRequestCount).Counter = 0;
  this->PeakRequestCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ThreadLockCs,4000);
  piVar1 = &(this->HealthStateTimes).ArrayNum;
  this->CurrentHealth = Excellent;
  piVar2 = &(this->HealthStateTimes).ArrayMax;
  *piVar1 = 0;
  this->CyclesAtLastHealthState = 0;
  (this->HealthStateTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,5,&(this->HealthStateTimes).AllocatorInstance,piVar1,piVar2);
  pFVar4 = (this->HealthStateTimes).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar5 * 4;
  *(undefined8 *)pFVar3 = 0;
  *(undefined8 *)(pFVar3 + 8) = 0;
  *(undefined4 *)(pFVar4 + (longlong)iVar5 * 4 + 0x10) = 0;
  return this;
}

// ~FCloudChunkSourceStatistics @ 143287f10

void __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::~FCloudChunkSourceStatistics
          (FCloudChunkSourceStatistics *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FCloudChunkSourceStatistics_BuildPatchServices__6B_;
  pFVar1 = (this->HealthStateTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ThreadLockCs);
  this->_padding_ = (longlong)&___7ICloudChunkSourceStat_BuildPatchServices__6B_;
  return;
}

// GetCurrentRequestCount @ 1432d4980

uint __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::GetCurrentRequestCount
          (FCloudChunkSourceStatistics *this)

{
  return (this->CurrentRequestCount).Counter;
}

// GetDownloadHealth @ 1432d6620

EBuildPatchDownloadHealth __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::GetDownloadHealth
          (FCloudChunkSourceStatistics *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  EBuildPatchDownloadHealth EVar1;
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar1 = this->CurrentHealth;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return EVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetDownloadHealthTimers @ 1432d6670

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::GetDownloadHealthTimers
          (FCloudChunkSourceStatistics *this,
          TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *_Src;
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar1 = (this->HealthStateTimes).ArrayNum;
    _Src = (this->HealthStateTimes).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                 &__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetDownloadSuccessRate @ 1432d6770

float __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::GetDownloadSuccessRate
          (FCloudChunkSourceStatistics *this)

{
  return (float)(this->ChunkSuccessRate).Counter * __real_38d1b717;
}

// GetNumAbortedChunkDownloads @ 1432d8460

ulong64 __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::GetNumAbortedChunkDownloads
          (FCloudChunkSourceStatistics *this)

{
  return (longlong)(this->NumDownloadsAborted).Counter;
}

// GetNumCorruptChunkDownloads @ 1432d8480

ulong64 __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::GetNumCorruptChunkDownloads
          (FCloudChunkSourceStatistics *this)

{
  return (longlong)(this->NumDownloadsCorrupt).Counter;
}

// GetPeakRequestCount @ 1432d8b30

uint __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::GetPeakRequestCount
          (FCloudChunkSourceStatistics *this)

{
  return this->PeakRequestCount;
}

// GetRequiredDownloadSize @ 1432d92b0

ulong64 __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::GetRequiredDownloadSize
          (FCloudChunkSourceStatistics *this)

{
  return (this->TotalBytesRequired).Counter;
}

// OnAcceptedNewRequirements @ 1432dddb0

void __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::OnAcceptedNewRequirements
          (FCloudChunkSourceStatistics *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432dddbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->FileOperationTracker + 0x20))(this->FileOperationTracker,param_1,5);
  return;
}

// OnActiveRequestCountUpdated @ 1432dddf0

void __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::OnActiveRequestCountUpdated
          (FCloudChunkSourceStatistics *this,uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  (**(code **)(this->BuildProgress->_padding_ + 0x68))(this->BuildProgress,param_1 != 0);
  LOCK();
  (this->CurrentRequestCount).Counter = param_1;
  UNLOCK();
  do {
    uVar1 = this->PeakRequestCount;
    if ((int)param_1 <= (int)uVar1) {
      return;
    }
    LOCK();
    bVar2 = uVar1 == this->PeakRequestCount;
    if (bVar2) {
      this->PeakRequestCount = param_1;
    }
    UNLOCK();
  } while (!bVar2);
  return;
}

// OnDownloadAborted @ 1432de9f0

void __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::OnDownloadAborted
          (FCloudChunkSourceStatistics *this,FGuid *param_1,FString *param_2,double param_3,
          double param_4,double param_5,double param_6)

{
  (**(code **)((longlong)*this->InstallerAnalytics + 0x10))
            (this->InstallerAnalytics,param_2,param_5,param_3,param_4,param_6);
  LOCK();
  (this->NumDownloadsAborted).Counter = (this->NumDownloadsAborted).Counter + 1;
  UNLOCK();
  return;
}

// OnDownloadCorrupt @ 1432def70

void __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::OnDownloadCorrupt
          (FCloudChunkSourceStatistics *this,FGuid *param_1,FString *param_2,
          EChunkLoadResult param_3)

{
  IInstallerAnalytics *pIVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  EChunkLoadResult local_res20 [8];
  FString local_18;
  
  pIVar1 = this->InstallerAnalytics;
  pcVar2 = *(code **)((longlong)*pIVar1 + 8);
  local_res20[0] = param_3;
  pwVar3 = BuildPatchServices::ToString(local_res20);
  ::FString::FString(&local_18,pwVar3);
  (*pcVar2)(pIVar1,param_2,0xffffffff,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  LOCK();
  (this->NumDownloadsCorrupt).Counter = (this->NumDownloadsCorrupt).Counter + 1;
  UNLOCK();
  return;
}

// OnDownloadFailed @ 1432df0b0

void __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::OnDownloadFailed
          (FCloudChunkSourceStatistics *this,FGuid *param_1,FString *param_2)

{
  return;
}

// OnDownloadHealthUpdated @ 1432df150

void __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::OnDownloadHealthUpdated
          (FCloudChunkSourceStatistics *this,EBuildPatchDownloadHealth param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  EBuildPatchDownloadHealth EVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulong64 uVar6;
  double dVar7;
  
  lpCriticalSection = &this->ThreadLockCs;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar6 = FStatsCollector::GetCycles();
  if (0 < this->CyclesAtLastHealthState) {
    dVar7 = FStatsCollector::CyclesToSeconds(uVar6 - this->CyclesAtLastHealthState);
    EVar1 = this->CurrentHealth;
    uVar5 = 0;
    if ((int)EVar1 < (this->HealthStateTimes).ArrayNum) {
      uVar5 = ~EVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->HealthStateTimes).AllocatorInstance.Data;
    *(float *)(pFVar2 + (longlong)(int)EVar1 * 4) =
         (float)((double)*(float *)(pFVar2 + (longlong)(int)EVar1 * 4) + dVar7);
  }
  this->CurrentHealth = param_1;
  LOCK();
  this->CyclesAtLastHealthState = uVar6;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001432df240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// OnDownloadRequested @ 1432df3d0

void __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::OnDownloadRequested
          (FCloudChunkSourceStatistics *this,FGuid *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001432df3dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->FileOperationTracker + 0x28))(this->FileOperationTracker,param_1,6);
  return;
}

// OnDownloadSuccess @ 1432df4e0

void __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::OnDownloadSuccess
          (FCloudChunkSourceStatistics *this,FGuid *param_1)

{
  return;
}

// OnReceivedDataUpdated @ 1432e0ff0

void __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::OnReceivedDataUpdated
          (FCloudChunkSourceStatistics *this,long64 param_1)

{
  longlong lVar1;
  float local_res8 [4];
  undefined4 local_res18 [4];
  
  LOCK();
  (this->TotalBytesReceived).Counter = param_1;
  UNLOCK();
  lVar1 = (this->TotalBytesRequired).Counter;
  if (0 < lVar1) {
    local_res18[0] = 3;
    local_res8[0] = (float)((double)param_1 / (double)lVar1);
    (**(code **)(this->BuildProgress->_padding_ + 0x18))(this->BuildProgress,local_res18,local_res8)
    ;
  }
  return;
}

// OnRequiredDataUpdated @ 1432e10c0

void __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::OnRequiredDataUpdated
          (FCloudChunkSourceStatistics *this,long64 param_1)

{
  float local_res8 [2];
  undefined4 local_res10 [6];
  
  LOCK();
  (this->TotalBytesRequired).Counter = param_1;
  UNLOCK();
  if (0 < param_1) {
    local_res10[0] = 3;
    local_res8[0] = (float)((double)(this->TotalBytesReceived).Counter / (double)param_1);
    (**(code **)(this->BuildProgress->_padding_ + 0x18))(this->BuildProgress,local_res10,local_res8)
    ;
  }
  return;
}

// OnSuccessRateUpdated @ 1432e1240

void __thiscall
BuildPatchServices::FCloudChunkSourceStatistics::OnSuccessRateUpdated
          (FCloudChunkSourceStatistics *this,float param_1)

{
  LOCK();
  (this->ChunkSuccessRate).Counter = (int)(param_1 * __real_461c4000);
  UNLOCK();
  return;
}

