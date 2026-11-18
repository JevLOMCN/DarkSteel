// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 8

// FInstallChunkSourceStatistics @ 143280f80

FInstallChunkSourceStatistics * __thiscall
BuildPatchServices::FInstallChunkSourceStatistics::FInstallChunkSourceStatistics
          (FInstallChunkSourceStatistics *this,ISpeedRecorder *param_1,IInstallerAnalytics *param_2,
          IFileOperationTracker *param_3)

{
  this->SpeedRecorder = param_1;
  this->_padding_ = (longlong)&___7FInstallChunkSourceStatistics_BuildPatchServices__6B_;
  this->InstallerAnalytics = param_2;
  this->FileOperationTracker = param_3;
  (this->NumSuccessfulLoads).Counter = 0;
  (this->NumFailedLoads).Counter = 0;
  (this->TotalBytesRead).Counter = 0;
  this->bIsReading = (FThreadSafeBool)0x0;
  (this->LastReadCycles).Counter = 0;
  return this;
}

// ~FInstallChunkSourceStatistics @ 143288580

void __thiscall
BuildPatchServices::FInstallChunkSourceStatistics::~FInstallChunkSourceStatistics
          (FInstallChunkSourceStatistics *this)

{
  this->_padding_ = (longlong)&___7IInstallChunkSourceStat_BuildPatchServices__6B_;
  return;
}

// GetBytesRead @ 1432d3780

ulong64 __thiscall
BuildPatchServices::FInstallChunkSourceStatistics::GetBytesRead(FInstallChunkSourceStatistics *this)

{
  return (this->TotalBytesRead).Counter;
}

// GetNumFailedChunkRecycles @ 1432d8550

int __thiscall
BuildPatchServices::FInstallChunkSourceStatistics::GetNumFailedChunkRecycles
          (FInstallChunkSourceStatistics *this)

{
  return (this->NumFailedLoads).Counter;
}

// GetNumSuccessfulChunkRecycles @ 1432d85a0

int __thiscall
BuildPatchServices::FInstallChunkSourceStatistics::GetNumSuccessfulChunkRecycles
          (FInstallChunkSourceStatistics *this)

{
  return (this->NumSuccessfulLoads).Counter;
}

// IsCurrentlyReading @ 1432dbbb0

bool __thiscall
BuildPatchServices::FInstallChunkSourceStatistics::IsCurrentlyReading
          (FInstallChunkSourceStatistics *this)

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

// OnLoadComplete @ 1432e01b0

void __thiscall
BuildPatchServices::FInstallChunkSourceStatistics::OnLoadComplete
          (FInstallChunkSourceStatistics *this,FGuid *param_1,ELoadResult *param_2,FRecord *param_3)

{
  int *piVar1;
  IInstallerAnalytics *pIVar2;
  code *pcVar3;
  DWORD DVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 local_58;
  FString local_50;
  FString local_40;
  FString local_30;
  
  if (*param_2 == Success) {
    lVar5 = 0x20;
  }
  else {
    (**(code **)((longlong)*this->FileOperationTracker + 0x28))
              (this->FileOperationTracker,param_1,5);
    pIVar2 = this->InstallerAnalytics;
    pcVar3 = *(code **)((longlong)*pIVar2 + 0x18);
    switch(*param_2) {
    case MissingHashInfo:
      pwVar6 = L"MissingHashInfo";
      break;
    case MissingPartInfo:
      pwVar6 = L"MissingPartInfo";
      break;
    case OpenFileFail:
      pwVar6 = L"OpenFileFail";
      break;
    default:
      pwVar6 = L"Unknown";
      break;
    case HashCheckFailed:
      pwVar6 = L"HashCheckFailed";
      break;
    case Aborted:
      pwVar6 = L"Aborted";
      break;
    case InvalidChunkParts:
      pwVar6 = L"InvalidChunkParts";
    }
    ::FString::FString(&local_30,pwVar6);
    ::FString::FString(&local_40,L"InstallChunkSourceLoad");
    DVar4 = FWindowsPlatformMisc::GetLastError();
    ::FString::FString(&local_50,L"");
    (*pcVar3)(pIVar2,param_1,&local_50,DVar4,&local_40,&local_30);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    lVar5 = 0x24;
  }
  LOCK();
  piVar1 = (int *)((longlong)&this->_padding_ + lVar5);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  (**(code **)((longlong)*this->SpeedRecorder + 8))(this->SpeedRecorder,param_3);
  LOCK();
  (this->TotalBytesRead).Counter = (this->TotalBytesRead).Counter + param_3->Size;
  UNLOCK();
  LOCK();
  this->bIsReading = (FThreadSafeBool)0x0;
  UNLOCK();
  if (&this->LastReadCycles != (FThreadSafeCounter64 *)&local_58) {
    LOCK();
    (this->LastReadCycles).Counter = param_3->CyclesEnd;
    UNLOCK();
  }
  return;
}

// OnLoadStarted @ 1432e03c0

void __thiscall
BuildPatchServices::FInstallChunkSourceStatistics::OnLoadStarted
          (FInstallChunkSourceStatistics *this,FGuid *param_1)

{
  LOCK();
  this->bIsReading = (FThreadSafeBool)0x1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001432e03d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->FileOperationTracker + 0x28))(this->FileOperationTracker,param_1,4);
  return;
}

