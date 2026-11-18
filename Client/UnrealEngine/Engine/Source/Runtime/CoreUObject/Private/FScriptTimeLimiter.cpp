// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// Get @ 14220cee0

FScriptTimeLimiter * __cdecl UE::FScriptTimeLimiter::Get(void)

{
  return (FScriptTimeLimiter *)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd38);
}

// HasExceededTimeLimit @ 1422107d0

bool __thiscall
UE::FScriptTimeLimiter::HasExceededTimeLimit(FScriptTimeLimiter *this,double param_1)

{
  bool bVar1;
  
  bVar1 = VerseHangDetection::IsComputationLimitExceeded(this->StartingTime,param_1);
  return bVar1;
}

// HasExceededTimeLimit @ 1422107e0

bool __thiscall UE::FScriptTimeLimiter::HasExceededTimeLimit(FScriptTimeLimiter *this)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = VerseHangDetection::VerseHangThreshold();
  bVar1 = VerseHangDetection::IsComputationLimitExceeded(this->StartingTime,(double)fVar2);
  return bVar1;
}

// StartTimer @ 14222ddd0

void __thiscall UE::FScriptTimeLimiter::StartTimer(FScriptTimeLimiter *this)

{
  code *pcVar1;
  bool bVar2;
  LARGE_INTEGER local_res8 [4];
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptTimeLimiter.cpp"
                       ,0x10,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->NestingDepth == 0) {
    QueryPerformanceCounter(local_res8);
    this->StartingTime =
         (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
  }
  this->NestingDepth = this->NestingDepth + 1;
  return;
}

// StopTimer @ 14222e0f0

void __thiscall UE::FScriptTimeLimiter::StopTimer(FScriptTimeLimiter *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptTimeLimiter.cpp"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->NestingDepth = this->NestingDepth + -1;
  if (this->NestingDepth < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NestingDepth >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ScriptTimeLimiter.cpp"
                       ,0x1f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->NestingDepth == 0) {
    this->StartingTime = 0.0;
  }
  return;
}

