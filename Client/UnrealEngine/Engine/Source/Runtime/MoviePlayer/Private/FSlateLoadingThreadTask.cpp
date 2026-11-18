// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 5

// Exit @ 146c7bfa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateLoadingThreadTask::Exit(FSlateLoadingThreadTask *this)

{
  code *pcVar1;
  DWORD DVar2;
  bool bVar3;
  
  DVar2 = GetCurrentThreadId();
  LOCK();
  bVar3 = DVar2 == GSlateLoadingThreadId;
  if (bVar3) {
    GSlateLoadingThreadId = 0;
  }
  UNLOCK();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousThreadId == CurrentThreadId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\MoviePlayerThreading.cpp"
                         ,0xdd,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Init @ 146c7d5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FSlateLoadingThreadTask::Init(FSlateLoadingThreadTask *this)

{
  uint uVar1;
  bool bVar2;
  undefined1 local_res10 [24];
  
  uVar1 = GetCurrentThreadId();
  LOCK();
  bVar2 = GSlateLoadingThreadId == 0;
  if (!bVar2) {
    uVar1 = GSlateLoadingThreadId;
  }
  GSlateLoadingThreadId = uVar1;
  UNLOCK();
  if (!bVar2) {
    `FSlateLoadingThreadTask::Init'::__l2::<lambda_1>::operator()(local_res10);
    LOCK();
    this->SyncMechanism->bMainLoopRunning = (TAtomic<bool>)0x0;
    UNLOCK();
  }
  return bVar2;
}

// Run @ 146c802b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

uint __thiscall FSlateLoadingThreadTask::Run(FSlateLoadingThreadTask *this)

{
  code *pcVar1;
  bool bVar2;
  DWORD DVar3;
  uint uVar4;
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,ESlateThread);
  DVar3 = GetCurrentThreadId();
  if (GSlateLoadingThreadId != DVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GSlateLoadingThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\MoviePlayerThreading.cpp"
                       ,0xd1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  FSlateLoadingSynchronizationMechanism::SlateThreadRunMainLoop(this->SyncMechanism);
  FTaskTagScope::~FTaskTagScope(&local_18);
  return 0;
}

// Stop @ 146c81300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateLoadingThreadTask::Stop(FSlateLoadingThreadTask *this)

{
  LOCK();
  (this->SyncMechanism->IsSlateDrawEnqueued).Counter = 0;
  UNLOCK();
  LOCK();
  (this->SyncMechanism->IsRunningSlateMainLoop).Counter = 0;
  UNLOCK();
  return;
}

// operator() @ 1504fb110

bool __thiscall `FSlateLoadingThreadTask::Init'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6857611051291115322>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6857611051291115322>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

