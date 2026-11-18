// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// Get @ 14c084f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTimerManager * __cdecl FDS_TimerManager::Get(UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this;
  FTimerManager *pFVar3;
  
  pFVar3 = RealTimerManager;
  if (RealTimerManager == (FTimerManager *)0x0) {
    if (param_1 != (UObject *)0x0) {
      this = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))();
      if (this != (UWorld *)0x0) {
        pFVar3 = UWorld::GetTimerManager(this);
        return pFVar3;
      }
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4385932787773866013>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_TimerManager.cpp"
                       ,0x1d,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTimerManager *)(*pcVar1)();
      return pFVar3;
    }
    pFVar3 = &DummyTimerManager;
  }
  return pFVar3;
}

// Initialize @ 14c08e220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FDS_TimerManager::Initialize(FTimerManager *param_1)

{
  RealTimerManager = param_1;
  return;
}

// Shutdown @ 14c0a1e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FDS_TimerManager::Shutdown(void)

{
  RealTimerManager = (FTimerManager *)0x0;
  return;
}

