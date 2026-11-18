// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// FSlateThrottleManager @ 14242dbc0

FSlateThrottleManager * __thiscall
FSlateThrottleManager::FSlateThrottleManager(FSlateThrottleManager *this)

{
  this->bShouldThrottle = 1;
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&this->CVarAllowThrottle,L"Slate.bAllowThrottling",&this->bShouldThrottle,
             L"Allow Slate to throttle parts of the engine to ensure the UI is responsive",0);
  this->ThrottleCount = 0;
  this->DisableThrottleCount = 0;
  return this;
}

// DisableThrottle @ 14243af50

void __thiscall FSlateThrottleManager::DisableThrottle(FSlateThrottleManager *this,bool param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  
  piVar1 = &this->DisableThrottleCount;
  *piVar1 = *piVar1 + (uint)param_1 * 2 + -1;
  if (*piVar1 < 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8798098084740464584>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Application\\ThrottleManager.cpp"
                       ,0x38,"DisableThrottleCount >= 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// EnterResponsiveMode @ 14243b850

FThrottleRequest __thiscall FSlateThrottleManager::EnterResponsiveMode(FSlateThrottleManager *this)

{
  uint *in_RDX;
  
  this->ThrottleCount = this->ThrottleCount + 1;
  *in_RDX = this->ThrottleCount;
  return (FThrottleRequest)(int)in_RDX;
}

// Get @ 14243e540

FSlateThrottleManager * __cdecl FSlateThrottleManager::Get(void)

{
  FSlateThrottleManager *pFVar1;
  
  if (::Instance == (FSlateThrottleManager *)0x0) {
    pFVar1 = ::operator_new(0x20);
    if (pFVar1 != (FSlateThrottleManager *)0x0) {
      pFVar1->bShouldThrottle = 1;
      FAutoConsoleVariableRef::FAutoConsoleVariableRef
                (&pFVar1->CVarAllowThrottle,L"Slate.bAllowThrottling",&pFVar1->bShouldThrottle,
                 L"Allow Slate to throttle parts of the engine to ensure the UI is responsive",0);
      pFVar1->ThrottleCount = 0;
      pFVar1->DisableThrottleCount = 0;
      ::Instance = pFVar1;
      return pFVar1;
    }
    ::Instance = (FSlateThrottleManager *)0x0;
  }
  return ::Instance;
}

// IsAllowingExpensiveTasks @ 142445730

bool __thiscall FSlateThrottleManager::IsAllowingExpensiveTasks(FSlateThrottleManager *this)

{
  if (((this->ThrottleCount != 0) && (this->bShouldThrottle != 0)) &&
     (this->DisableThrottleCount < 1)) {
    return false;
  }
  return true;
}

// LeaveResponsiveMode @ 142445d50

void __thiscall
FSlateThrottleManager::LeaveResponsiveMode(FSlateThrottleManager *this,FThrottleRequest *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->Index != -1) {
    if (this->ThrottleCount == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThrottleCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Application\\ThrottleManager.cpp"
                         ,0x2e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->ThrottleCount = this->ThrottleCount - 1;
    param_1->Index = -1;
  }
  return;
}

