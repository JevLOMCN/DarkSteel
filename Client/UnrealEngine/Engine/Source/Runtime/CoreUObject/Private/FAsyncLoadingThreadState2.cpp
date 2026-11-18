// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// FAsyncLoadingThreadState2 @ 142308120

FAsyncLoadingThreadState2 * __thiscall
FAsyncLoadingThreadState2::FAsyncLoadingThreadState2(FAsyncLoadingThreadState2 *this)

{
  atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*> aVar1;
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar2;
  
  (this->NodesToFire).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodesToFire).ArrayNum = 0;
  (this->NodesToFire).ArrayMax = 0;
  (this->CurrentlyExecutingEventNodeStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentlyExecutingEventNodeStack).ArrayNum = 0;
  (this->CurrentlyExecutingEventNodeStack).ArrayMax = 0;
  (this->SyncLoadContextStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SyncLoadContextStack).ArrayNum = 0;
  (this->SyncLoadContextStack).ArrayMax = 0;
  (this->PackagesOnStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackagesOnStack).ArrayNum = 0;
  (this->PackagesOnStack).ArrayMax = 0;
  (this->SyncLoadContextsCreatedOnOtherThreads).Head =
       (atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>)0x0;
  aVar1 = (atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>)
          FMemory::Malloc(0x10,8);
  *(undefined8 *)aVar1 = 0;
  (this->SyncLoadContextsCreatedOnOtherThreads).Head = aVar1;
  (this->SyncLoadContextsCreatedOnOtherThreads).Tail = (FNode *)aVar1;
  (this->PackagesToReprioritize).Head = (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0;
  aVar2 = (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
  *(undefined8 *)aVar2 = 0;
  (this->PackagesToReprioritize).Head = aVar2;
  (this->PackagesToReprioritize).Tail = (FNode *)aVar2;
  this->LastTestTime = -1.0;
  this->bIsAsyncLoadingThread = false;
  this->bCanAccessAsyncLoadingThreadData = false;
  this->bIsActive = (atomic<bool>)0x0;
  this->bShouldFireNodes = true;
  this->bUseTimeLimit = false;
  this->TimeLimit = 0.0;
  this->StartTime = 0.0;
  return this;
}

// ~FAsyncLoadingThreadState2 @ 14230a050

void __thiscall
FAsyncLoadingThreadState2::~FAsyncLoadingThreadState2(FAsyncLoadingThreadState2 *this)

{
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar1;
  atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*> aVar2;
  FScriptContainerElement *pFVar3;
  
  aVar1 = ((this->PackagesToReprioritize).Tail)->Next;
  FMemory::Free((this->PackagesToReprioritize).Tail);
  while (aVar1 != (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0) {
    (this->PackagesToReprioritize).Tail = (FNode *)aVar1;
    aVar1 = *(atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> *)aVar1;
    FMemory::Free((this->PackagesToReprioritize).Tail);
  }
  aVar2 = ((this->SyncLoadContextsCreatedOnOtherThreads).Tail)->Next;
  FMemory::Free((this->SyncLoadContextsCreatedOnOtherThreads).Tail);
  while (aVar2 != (atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*>)0x0) {
    (this->SyncLoadContextsCreatedOnOtherThreads).Tail = (FNode *)aVar2;
    aVar2 = *(atomic<TMpscQueue<FAsyncLoadingSyncLoadContext_*,FMemory>::FNode_*> *)aVar2;
    FMemory::Free((this->SyncLoadContextsCreatedOnOtherThreads).Tail);
  }
  pFVar3 = (this->PackagesOnStack).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SyncLoadContextStack).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->CurrentlyExecutingEventNodeStack).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->NodesToFire).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// Get @ 142326650

FAsyncLoadingThreadState2 * __cdecl FAsyncLoadingThreadState2::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FAsyncLoadingThreadState2 *pFVar3;
  
  if (TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0xc89,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAsyncLoadingThreadState2 *)(*pcVar1)();
      return pFVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014232668d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = TlsGetValue(TlsSlot);
  return pFVar3;
}

// IsTimeLimitExceeded @ 14232af90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FAsyncLoadingThreadState2::IsTimeLimitExceeded
          (FAsyncLoadingThreadState2 *this,wchar_t *param_1,UObject *param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  LARGE_INTEGER local_res8;
  
  if (this->bUseTimeLimit != false) {
    QueryPerformanceCounter(&local_res8);
    dVar1 = this->TimeLimit;
    dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    bVar4 = dVar1 < dVar2 - this->StartTime;
    if ((bVar4) && (GWarnIfTimeLimitExceeded != 0)) {
      IsTimeLimitExceededPrint(this->StartTime,dVar2,this->LastTestTime,dVar1,param_1,param_2);
      this->LastTestTime = dVar2;
      return true;
    }
    this->LastTestTime = dVar2;
    if (bVar4) {
      return true;
    }
  }
  bVar4 = false;
  if (((GGCSingleton->GCWantsToRunCounter != (TAtomic<int>)0x0) &&
      ((this->SyncLoadContextStack).ArrayNum == 0)) && (bVar3 = IsInParallelLoadingThread(), !bVar3)
     ) {
    if (5 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_bool___cdecl_FAsyncLoadingThreadState2::IsTimeLimitExceeded(wchar_t_const*___ptr64,UObject*___ptr64)___ptr64'
                  ::__l15::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    bVar4 = true;
  }
  return bVar4;
}

// Set @ 14233d430

void __cdecl FAsyncLoadingThreadState2::Set(FAsyncLoadingThreadState2 *param_1)

{
  code *pcVar1;
  bool bVar2;
  LPVOID pvVar3;
  
  if (TlsSlot == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0xc7c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pvVar3 = TlsGetValue(TlsSlot);
  if (pvVar3 != (LPVOID)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FPlatformTLS::GetTlsValue(TlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading2.cpp"
                       ,0xc7d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014233d4ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(TlsSlot,param_1);
  return;
}

