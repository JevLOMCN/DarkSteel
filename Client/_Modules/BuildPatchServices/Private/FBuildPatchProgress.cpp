// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 17

// FBuildPatchProgress @ 1431bbb80

FBuildPatchProgress * __thiscall
BuildPatchServices::FBuildPatchProgress::FBuildPatchProgress(FBuildPatchProgress *this)

{
  this->_padding_ = (longlong)&___7FBuildPatchProgress_BuildPatchServices__6B_;
  this->bShouldAbort = (FThreadSafeBool)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ThreadLock,4000);
  this->TotalWeight = 0.0;
  this->CurrentState = Queued;
  this->CurrentProgress = 0.0;
  this->bIsDownloading = false;
  LOCK();
  this->bShouldAbort = (FThreadSafeBool)0x0;
  UNLOCK();
  this->StateProgressValues[0] = 0.0;
  this->StateProgressValues[1] = 0.0;
  this->StateProgressWeights[0] = 1.0;
  this->StateProgressWeights[1] = 1.0;
  this->StateProgressValues[2] = 0.0;
  this->StateProgressValues[3] = 0.0;
  this->StateProgressWeights[2] = 1.0;
  this->StateProgressWeights[3] = 1.0;
  this->StateProgressValues[4] = 0.0;
  this->StateProgressValues[5] = 0.0;
  this->StateProgressWeights[4] = 1.0;
  this->StateProgressWeights[5] = 1.0;
  this->StateProgressValues[6] = 0.0;
  this->StateProgressValues[7] = 0.0;
  this->StateProgressWeights[6] = 1.0;
  this->StateProgressWeights[7] = 1.0;
  this->StateProgressValues[8] = 0.0;
  this->StateProgressValues[9] = 0.0;
  this->StateProgressWeights[8] = 1.0;
  this->StateProgressWeights[9] = 1.0;
  this->StateProgressValues[10] = 0.0;
  this->StateProgressValues[0xb] = 0.0;
  this->StateProgressWeights[10] = 1.0;
  this->StateProgressWeights[0xb] = 1.0;
  this->TotalWeight = 5.0;
  UpdateProgressInfo(this);
  return this;
}

// Abort @ 1431c2980

void __thiscall BuildPatchServices::FBuildPatchProgress::Abort(FBuildPatchProgress *this)

{
  LOCK();
  this->bShouldAbort = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// CancelAbort @ 1431c5450

void __thiscall BuildPatchServices::FBuildPatchProgress::CancelAbort(FBuildPatchProgress *this)

{
  LOCK();
  this->bShouldAbort = (FThreadSafeBool)0x0;
  UNLOCK();
  return;
}

// GetPauseState @ 1431e2070

bool __thiscall BuildPatchServices::FBuildPatchProgress::GetPauseState(FBuildPatchProgress *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  EBuildPatchState EVar1;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar1 = this->CurrentState;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return EVar1 == Paused;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetProgress @ 1431e27a0

float __thiscall BuildPatchServices::FBuildPatchProgress::GetProgress(FBuildPatchProgress *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  fVar1 = __real_bf800000;
  if (bHasProgressValue[this->CurrentState] != false) {
    fVar1 = this->CurrentProgress;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return fVar1;
}

// GetProgressNoMarquee @ 1431e2810

float __thiscall
BuildPatchServices::FBuildPatchProgress::GetProgressNoMarquee(FBuildPatchProgress *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = this->CurrentProgress;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetState @ 1431e32c0

EBuildPatchState __thiscall
BuildPatchServices::FBuildPatchProgress::GetState(FBuildPatchProgress *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  EBuildPatchState EVar1;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar1 = this->CurrentState;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return EVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetStateProgress @ 1431e3310

float __thiscall
BuildPatchServices::FBuildPatchProgress::GetStateProgress
          (FBuildPatchProgress *this,EBuildPatchState *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = this->StateProgressValues[*param_1];
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetStateWeight @ 1431e3380

float __thiscall
BuildPatchServices::FBuildPatchProgress::GetStateWeight
          (FBuildPatchProgress *this,EBuildPatchState *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = this->StateProgressWeights[*param_1];
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetIsDownloading @ 1431fa7f0

void __thiscall
BuildPatchServices::FBuildPatchProgress::SetIsDownloading(FBuildPatchProgress *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->bIsDownloading != param_1) {
      this->bIsDownloading = param_1;
      UpdateProgressInfo(this);
    }
                    /* WARNING: Could not recover jumptable at 0x0001431fa83e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetPaused @ 1431fa9d0

void __thiscall
BuildPatchServices::FBuildPatchProgress::SetPaused(FBuildPatchProgress *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  char cVar1;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    cVar1 = (**(code **)(this->_padding_ + 0x60))(this);
    if ((bool)cVar1 != param_1) {
      (**(code **)(this->_padding_ + 0x50))(this);
    }
                    /* WARNING: Could not recover jumptable at 0x0001431faa23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetStateProgress @ 1431faa40

void __thiscall
BuildPatchServices::FBuildPatchProgress::SetStateProgress
          (FBuildPatchProgress *this,EBuildPatchState *param_1,float *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = _isnan((double)*param_2);
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FMath::IsNaN(Value)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchProgress.cpp"
                       ,0x36,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*param_2 != this->StateProgressValues[*param_1]) {
      this->StateProgressValues[*param_1] = *param_2;
      UpdateProgressInfo(this);
    }
                    /* WARNING: Could not recover jumptable at 0x0001431faadd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetStateWeight @ 1431faaf0

void __thiscall
BuildPatchServices::FBuildPatchProgress::SetStateWeight
          (FBuildPatchProgress *this,EBuildPatchState *param_1,float *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = _isnan((double)*param_2);
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FMath::IsNaN(Value)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchProgress.cpp"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (bCountsTowardsProgress[*param_1] != false) {
      this->TotalWeight = (*param_2 - this->StateProgressWeights[*param_1]) + this->TotalWeight;
      this->StateProgressWeights[*param_1] = *param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x0001431fab9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TogglePauseState @ 1431fcb40

bool __thiscall BuildPatchServices::FBuildPatchProgress::TogglePauseState(FBuildPatchProgress *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar1 = this->CurrentState != Paused;
    if (bVar1) {
      this->CurrentState = Paused;
    }
    else {
      this->CurrentState = NUM_PROGRESS_STATES;
      UpdateProgressInfo(this);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateCachedValues @ 1431feac0

void __thiscall
BuildPatchServices::FBuildPatchProgress::UpdateCachedValues(FBuildPatchProgress *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  fVar3 = this->StateProgressWeights[3] + this->StateProgressWeights[4] +
          this->StateProgressWeights[5] + this->StateProgressWeights[6] +
          this->StateProgressWeights[7];
  this->TotalWeight = fVar3;
  if (fVar3 == 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TotalWeight != 0.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchProgress.cpp"
                       ,0xda,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// UpdateProgressInfo @ 1431feb20

void __thiscall
BuildPatchServices::FBuildPatchProgress::UpdateProgressInfo(FBuildPatchProgress *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  EBuildPatchState EVar6;
  bool *pbVar7;
  float fVar8;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  fVar2 = __real_3f800000;
  if ((this->bShouldAbort == (FThreadSafeBool)0x0) && (this->CurrentState != Paused)) {
    pfVar5 = this->StateProgressValues;
    EVar6 = Queued;
    pbVar7 = bCountsTowardsProgress;
    this->CurrentState = NUM_PROGRESS_STATES;
    this->CurrentProgress = 0.0;
    do {
      if ((this->CurrentState == NUM_PROGRESS_STATES) && (*pfVar5 <= fVar2 && fVar2 != *pfVar5)) {
        this->CurrentState = EVar6;
      }
      if (*pbVar7 != false) {
        fVar8 = (pfVar5[0xc] / this->TotalWeight) * *pfVar5 + this->CurrentProgress;
        this->CurrentProgress = fVar8;
        iVar4 = _isnan((double)fVar8);
        if (iVar4 != 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!FMath::IsNaN(CurrentProgress)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\BuildPatchProgress.cpp"
                             ,0xbf,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      EVar6 = EVar6 + Initializing;
      pfVar5 = pfVar5 + 1;
      pbVar7 = pbVar7 + 1;
    } while (EVar6 < NUM_PROGRESS_STATES);
    fVar8 = this->CurrentProgress;
    if (fVar2 <= this->CurrentProgress) {
      fVar8 = fVar2;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    this->CurrentProgress = fVar8;
    if ((this->CurrentState == Downloading) && (this->bIsDownloading == false)) {
      this->CurrentState = Installing;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001431fec48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// WaitWhilePaused @ 1431fec60

double __thiscall
BuildPatchServices::FBuildPatchProgress::WaitWhilePaused(FBuildPatchProgress *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  char cVar5;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  dVar3 = __real_4170000000000000;
  dVar2 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  cVar5 = (**(code **)(this->_padding_ + 0x60))(this);
  fVar4 = __real_3dcccccd;
  dVar1 = dVar2;
  while (cVar5 != '\0') {
    FWindowsPlatformProcess::Sleep(fVar4);
    QueryPerformanceCounter(local_res8);
    dVar1 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3;
    cVar5 = (**(code **)(this->_padding_ + 0x60))(this);
  }
  return dVar1 - dVar2;
}

