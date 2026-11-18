// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FConditionalScopeLogTime @ 1419cd730

FConditionalScopeLogTime * __thiscall
FConditionalScopeLogTime::FConditionalScopeLogTime
          (FConditionalScopeLogTime *this,bool param_1,char *param_2,
          TKeyValuePair<double,unsigned_int> *param_3,EScopeLogTimeUnits param_4)

{
  EScopeLogTimeUnits EVar1;
  double dVar2;
  LARGE_INTEGER local_res8;
  
  if (param_1) {
    QueryPerformanceCounter(&local_res8);
    dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
  }
  else {
    dVar2 = 0.0;
  }
  this->StartTime = dVar2;
  ::FString::FString(&this->Name,param_2);
  this->Cumulative = param_3;
  EVar1 = ScopeLog_DontLog;
  if (param_1) {
    EVar1 = param_4;
  }
  this->Units = EVar1;
  return this;
}

// FConditionalScopeLogTime @ 1419cd7c0

FConditionalScopeLogTime * __thiscall
FConditionalScopeLogTime::FConditionalScopeLogTime
          (FConditionalScopeLogTime *this,bool param_1,wchar_t *param_2,
          TKeyValuePair<double,unsigned_int> *param_3,EScopeLogTimeUnits param_4)

{
  EScopeLogTimeUnits EVar1;
  double dVar2;
  LARGE_INTEGER local_res8;
  
  if (param_1) {
    QueryPerformanceCounter(&local_res8);
    dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
  }
  else {
    dVar2 = 0.0;
  }
  this->StartTime = dVar2;
  ::FString::FString(&this->Name,param_2);
  this->Cumulative = param_3;
  EVar1 = ScopeLog_DontLog;
  if (param_1) {
    EVar1 = param_4;
  }
  this->Units = EVar1;
  return this;
}

// ~FConditionalScopeLogTime @ 1419d20a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FConditionalScopeLogTime::~FConditionalScopeLogTime(FConditionalScopeLogTime *this)

{
  uint *puVar1;
  double dVar2;
  TKeyValuePair<double,unsigned_int> *pTVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  wchar_t *pwVar6;
  LARGE_INTEGER local_res8 [4];
  FString local_28 [2];
  
  if (this->Units != ScopeLog_DontLog) {
    QueryPerformanceCounter(local_res8);
    pwVar6 = L"s";
    if (this->Units != ScopeLog_Seconds) {
      pwVar6 = L"ms";
    }
    dVar5 = (double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    dVar2 = this->StartTime;
    ::FString::FString(local_28,pwVar6);
    pTVar3 = this->Cumulative;
    if (pTVar3 == (TKeyValuePair<double,unsigned_int> *)0x0) {
      if (4 < (byte)LogStats._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
      }
    }
    else {
      pTVar3->Key = (dVar5 - dVar2) + pTVar3->Key;
      puVar1 = &this->Cumulative->Value;
      *puVar1 = *puVar1 + 1;
      if (4 < (byte)LogStats._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStats);
      }
    }
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
    return;
  }
  return;
}

// GetDisplayScopedTime @ 1419fd510

double __thiscall
FConditionalScopeLogTime::GetDisplayScopedTime(FConditionalScopeLogTime *this,double param_1)

{
  if (this->Units != ScopeLog_Seconds) {
    param_1 = param_1 * __real_408f400000000000;
  }
  return param_1;
}

// GetDisplayUnitsString @ 1419fd530

FString * __thiscall
FConditionalScopeLogTime::GetDisplayUnitsString
          (FConditionalScopeLogTime *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"s";
  if (this->Units != ScopeLog_Seconds) {
    pwVar1 = L"ms";
  }
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

