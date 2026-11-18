// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PreLoadScreen
// Functions: 4

// Exit @ 145ac8690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FPreLoadScreenSlateThreadTask::Exit(FPreLoadScreenSlateThreadTask *this)

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
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadSlateThreading.cpp"
                         ,0x30,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Init @ 145acb5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall FPreLoadScreenSlateThreadTask::Init(FPreLoadScreenSlateThreadTask *this)

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
    `FPreLoadScreenSlateThreadTask::Init'::__l2::<lambda_1>::operator()(local_res10);
  }
  return bVar2;
}

// Run @ 145acffb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

uint __thiscall FPreLoadScreenSlateThreadTask::Run(FPreLoadScreenSlateThreadTask *this)

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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PreLoadScreen\\Private\\PreLoadSlateThreading.cpp"
                       ,0x24,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  FPreLoadScreenSlateSynchMechanism::RunMainLoop_SlateThread(this->SyncMechanism);
  FTaskTagScope::~FTaskTagScope(&local_18);
  return 0;
}

// operator() @ 1504d71f0

bool __thiscall `FPreLoadScreenSlateThreadTask::Init'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8163699829931769827>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8163699829931769827>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

