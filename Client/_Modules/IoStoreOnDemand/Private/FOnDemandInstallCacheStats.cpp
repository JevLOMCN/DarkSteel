// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 9

// OnBlockDeleted @ 1445e2d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::IoStore::FOnDemandInstallCacheStats::OnBlockDeleted(long64 param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  longlong local_res8;
  bool local_res10 [8];
  double local_res18;
  wchar_t *local_res20;
  wchar_t *local_48;
  FOnDemandImmediateAnalytic local_40;
  
  local_res10[0] = param_2;
  FDateTime::UtcNow();
  lVar3 = 0x7fffffffffffffff;
  if (param_1 < 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4351094748962879942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\Statistics.cpp"
                       ,0x63a,"BlockAccess.GetTicks() >= 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (local_res8 < 0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4351094748962879941>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\Statistics.cpp"
                       ,0x63b,"Now.GetTicks() >= 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (local_res8 < param_1) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4351094748962879940>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\Statistics.cpp"
                       ,0x63c,"Now >= BlockAccess");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    lVar3 = local_res8 - param_1;
  }
  ::FString::FString(&local_40.EventName,L"IadCacheBlockDeleted");
  local_40.AnalyticsArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.AnalyticsArray.ArrayNum = 0;
  local_40.AnalyticsArray.ArrayMax = 0;
  local_res18 = (double)lVar3 * ___real_3e1ca213d840baf8;
  DestructItems<FAnalyticsEventAttribute,int>((FAnalyticsEventAttribute *)0x0,0);
  bVar2 = local_40.AnalyticsArray.ArrayMax != 2;
  local_40.AnalyticsArray._8_8_ = (ulonglong)(uint)local_40.AnalyticsArray.ArrayMax << 0x20;
  if (bVar2) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,2,&local_40.AnalyticsArray.AllocatorInstance,0,
               &local_40.AnalyticsArray.ArrayMax);
  }
  local_res20 = L"BlockAgeMinutes";
  ImplMakeAnalyticsEventAttributeArray::
  AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,double>
            (&local_40.AnalyticsArray,&local_res20,&local_res18);
  local_48 = L"FromDefrag";
  ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,bool>
            (&local_40.AnalyticsArray,&local_48,local_res10);
  SendImmediateAnalytic(&local_40);
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_40.AnalyticsArray.AllocatorInstance.Data,
             local_40.AnalyticsArray.ArrayNum);
  if ((FAnalyticsEventAttribute *)local_40.AnalyticsArray.AllocatorInstance.Data !=
      (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_40.AnalyticsArray.AllocatorInstance.Data);
  }
  if (local_40.EventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.EventName.Data.AllocatorInstance.Data);
  }
  return;
}

// OnCacheUsage @ 1445e3420

void __cdecl
UE::IoStore::FOnDemandInstallCacheStats::OnCacheUsage
          (ulong64 param_1,ulong64 param_2,ulong64 param_3,ulong64 param_4,ulong64 param_5,
          long64 param_6)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  bool bVar3;
  
  LOCK();
  bVar3 = FInstallCacheAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    FInstallCacheAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    FMutex::LockSlow(&FInstallCacheAnalytics::Mutex);
  }
  if (param_2 < InstallCacheAnalytics.MaxCacheUsageSize) {
    param_2 = InstallCacheAnalytics.MaxCacheUsageSize;
  }
  if (param_3 < InstallCacheAnalytics.MaxReferencedBlockSize) {
    param_3 = InstallCacheAnalytics.MaxReferencedBlockSize;
  }
  if (param_4 < InstallCacheAnalytics.MaxReferencedSize) {
    param_4 = InstallCacheAnalytics.MaxReferencedSize;
  }
  if (param_5 < InstallCacheAnalytics.MaxFragmentedSize) {
    param_5 = InstallCacheAnalytics.MaxFragmentedSize;
  }
  if (InstallCacheAnalytics.OldestBlockAccess < param_6) {
    param_6 = InstallCacheAnalytics.OldestBlockAccess;
  }
  LOCK();
  aVar2 = FInstallCacheAnalytics::Mutex.State + -1;
  UNLOCK();
  bVar1 = (byte)FInstallCacheAnalytics::Mutex.State & 2;
  InstallCacheAnalytics.MaxCacheSize = param_1;
  InstallCacheAnalytics.MaxCacheUsageSize = param_2;
  InstallCacheAnalytics.MaxReferencedBlockSize = param_3;
  InstallCacheAnalytics.MaxReferencedSize = param_4;
  InstallCacheAnalytics.MaxFragmentedSize = param_5;
  InstallCacheAnalytics.OldestBlockAccess = param_6;
  FInstallCacheAnalytics::Mutex.State = aVar2;
  if (bVar1 != 0) {
    FMutex::WakeWaitingThread(&FInstallCacheAnalytics::Mutex);
  }
  return;
}

// OnCasVerificationError @ 1445e35a0

void __cdecl UE::IoStore::FOnDemandInstallCacheStats::OnCasVerificationError(int param_1)

{
  FMutex FVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = FInstallCacheAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
  if (bVar2) {
    FInstallCacheAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar2) {
    FMutex::LockSlow(&FInstallCacheAnalytics::Mutex);
  }
  FVar1.State = FInstallCacheAnalytics::Mutex.State;
  InstallCacheAnalytics.VerificationRemovedBlockCount =
       InstallCacheAnalytics.VerificationRemovedBlockCount + (longlong)param_1;
  LOCK();
  FInstallCacheAnalytics::Mutex.State = FInstallCacheAnalytics::Mutex.State + -1;
  UNLOCK();
  if (((byte)FVar1.State & 2) == 0) {
    return;
  }
  FMutex::WakeWaitingThread(&FInstallCacheAnalytics::Mutex);
  return;
}

// OnDefrag @ 1445e3600

void __cdecl
UE::IoStore::FOnDemandInstallCacheStats::OnDefrag
          (TValueOrError<void,UE::UnifiedError::FError> *param_1,ulong64 param_2)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *local_res8;
  ulong64 local_res10;
  FOnDemandImmediateAnalytic local_28;
  
  local_res10 = param_2;
  if (((param_1->Error).bIsSet == false) ||
     (bVar3 = UnifiedError::IsCancellationError((FError *)param_1), !bVar3)) {
    LOCK();
    bVar3 = FInstallCacheAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
    if (bVar3) {
      FInstallCacheAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar3) {
      FMutex::LockSlow(&FInstallCacheAnalytics::Mutex);
    }
    if ((param_1->Error).bIsSet != false) {
      InstallCacheAnalytics.DefragErrorCount = InstallCacheAnalytics.DefragErrorCount + 1;
    }
    InstallCacheAnalytics.DefragCount = InstallCacheAnalytics.DefragCount + 1;
    InstallCacheAnalytics.FragmentedBytes = InstallCacheAnalytics.FragmentedBytes + param_2;
    LOCK();
    aVar2 = FInstallCacheAnalytics::Mutex.State + -1;
    UNLOCK();
    bVar1 = (byte)FInstallCacheAnalytics::Mutex.State & 2;
    FInstallCacheAnalytics::Mutex.State = aVar2;
    if (bVar1 != 0) {
      FMutex::WakeWaitingThread(&FInstallCacheAnalytics::Mutex);
    }
    MakeAnalyticsEventFromResult(&local_28,L"IadCacheDefrag",param_1);
    uVar4 = local_28.AnalyticsArray.ArrayNum + 1;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (local_28.AnalyticsArray.ArrayMax < (int)uVar4) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar4,&local_28.AnalyticsArray.AllocatorInstance,
                 local_28.AnalyticsArray.ArrayNum,&local_28.AnalyticsArray.ArrayMax);
    }
    local_res8 = L"FragmentedBytes";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (&local_28.AnalyticsArray,&local_res8,&local_res10);
    SendImmediateAnalytic(&local_28);
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)local_28.AnalyticsArray.AllocatorInstance.Data,
               local_28.AnalyticsArray.ArrayNum);
    if ((FAnalyticsEventAttribute *)local_28.AnalyticsArray.AllocatorInstance.Data !=
        (FAnalyticsEventAttribute *)0x0) {
      FMemory::Free(local_28.AnalyticsArray.AllocatorInstance.Data);
    }
    if (local_28.EventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.EventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnFlush @ 1445e4470

void __cdecl
UE::IoStore::FOnDemandInstallCacheStats::OnFlush
          (TValueOrError<void,UE::UnifiedError::FError> *param_1,long64 param_2)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  bool bVar3;
  
  if (((param_1->Error).bIsSet == false) ||
     (bVar3 = UnifiedError::IsCancellationError((FError *)param_1), !bVar3)) {
    LOCK();
    bVar3 = FInstallCacheAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
    if (bVar3) {
      FInstallCacheAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar3) {
      FMutex::LockSlow(&FInstallCacheAnalytics::Mutex);
    }
    if ((param_1->Error).bIsSet != false) {
      InstallCacheAnalytics.FlushErrorCount = InstallCacheAnalytics.FlushErrorCount + 1;
    }
    InstallCacheAnalytics.FlushCount = InstallCacheAnalytics.FlushCount + 1;
    InstallCacheAnalytics.FlushedBytes = InstallCacheAnalytics.FlushedBytes + param_2;
    LOCK();
    aVar2 = FInstallCacheAnalytics::Mutex.State + -1;
    UNLOCK();
    bVar1 = (byte)FInstallCacheAnalytics::Mutex.State & 2;
    FInstallCacheAnalytics::Mutex.State = aVar2;
    if (bVar1 != 0) {
      FMutex::WakeWaitingThread(&FInstallCacheAnalytics::Mutex);
    }
  }
  return;
}

// OnJournalCommit @ 1445e5880

void __cdecl
UE::IoStore::FOnDemandInstallCacheStats::OnJournalCommit
          (TValueOrError<void,UE::UnifiedError::FError> *param_1,long64 param_2)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  bool bVar3;
  
  if (((param_1->Error).bIsSet == false) ||
     (bVar3 = UnifiedError::IsCancellationError((FError *)param_1), !bVar3)) {
    LOCK();
    bVar3 = FInstallCacheAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
    if (bVar3) {
      FInstallCacheAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar3) {
      FMutex::LockSlow(&FInstallCacheAnalytics::Mutex);
    }
    if ((param_1->Error).bIsSet != false) {
      InstallCacheAnalytics.JournalCommitErrorCount =
           InstallCacheAnalytics.JournalCommitErrorCount + 1;
    }
    InstallCacheAnalytics.JournalCommitCount = InstallCacheAnalytics.JournalCommitCount + 1;
    LOCK();
    aVar2 = FInstallCacheAnalytics::Mutex.State + -1;
    UNLOCK();
    bVar1 = (byte)FInstallCacheAnalytics::Mutex.State & 2;
    FInstallCacheAnalytics::Mutex.State = aVar2;
    if (bVar1 != 0) {
      FMutex::WakeWaitingThread(&FInstallCacheAnalytics::Mutex);
      return;
    }
  }
  return;
}

// OnPurge @ 1445e6530

void __cdecl
UE::IoStore::FOnDemandInstallCacheStats::OnPurge
          (TValueOrError<void,UE::UnifiedError::FError> *param_1,ulong64 param_2,ulong64 param_3,
          ulong64 param_4,ulong64 param_5)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *local_res8 [4];
  FOnDemandImmediateAnalytic local_28;
  
  if (((param_1->Error).bIsSet == false) ||
     (bVar3 = UnifiedError::IsCancellationError((FError *)param_1), !bVar3)) {
    LOCK();
    bVar3 = FInstallCacheAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
    if (bVar3) {
      FInstallCacheAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar3) {
      FMutex::LockSlow(&FInstallCacheAnalytics::Mutex);
    }
    if ((param_1->Error).bIsSet != false) {
      InstallCacheAnalytics.PurgeErrorCount = InstallCacheAnalytics.PurgeErrorCount + 1;
    }
    InstallCacheAnalytics.PurgeCount = InstallCacheAnalytics.PurgeCount + 1;
    InstallCacheAnalytics.PurgedBytes = InstallCacheAnalytics.PurgedBytes + param_5;
    LOCK();
    aVar2 = FInstallCacheAnalytics::Mutex.State + -1;
    UNLOCK();
    bVar1 = (byte)FInstallCacheAnalytics::Mutex.State & 2;
    FInstallCacheAnalytics::Mutex.State = aVar2;
    if (bVar1 != 0) {
      FMutex::WakeWaitingThread(&FInstallCacheAnalytics::Mutex);
    }
    MakeAnalyticsEventFromResult(&local_28,L"IadCachePurge",param_1);
    uVar4 = local_28.AnalyticsArray.ArrayNum + 1;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if (local_28.AnalyticsArray.ArrayMax < (int)uVar4) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar4,&local_28.AnalyticsArray.AllocatorInstance,
                 local_28.AnalyticsArray.ArrayNum,&local_28.AnalyticsArray.ArrayMax);
    }
    local_res8[0] = L"PurgedBytes";
    ImplMakeAnalyticsEventAttributeArray::
    AddElement<TSizedDefaultAllocator<32>,wchar_t_const_*,unsigned___int64>
              (&local_28.AnalyticsArray,local_res8,&param_5);
    SendImmediateAnalytic(&local_28);
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)local_28.AnalyticsArray.AllocatorInstance.Data,
               local_28.AnalyticsArray.ArrayNum);
    if ((FAnalyticsEventAttribute *)local_28.AnalyticsArray.AllocatorInstance.Data !=
        (FAnalyticsEventAttribute *)0x0) {
      FMemory::Free(local_28.AnalyticsArray.AllocatorInstance.Data);
    }
    if (local_28.EventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.EventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnReadCompleted @ 1445e6800

void __cdecl UE::IoStore::FOnDemandInstallCacheStats::OnReadCompleted(EIoErrorCode param_1)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  bool bVar3;
  
  if (param_1 != Cancelled) {
    LOCK();
    bVar3 = FInstallCacheAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
    if (bVar3) {
      FInstallCacheAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar3) {
      FMutex::LockSlow(&FInstallCacheAnalytics::Mutex);
    }
    if (param_1 != Ok) {
      InstallCacheAnalytics.ReadErrorCount = InstallCacheAnalytics.ReadErrorCount + 1;
    }
    InstallCacheAnalytics.ReadCount = InstallCacheAnalytics.ReadCount + 1;
    LOCK();
    aVar2 = FInstallCacheAnalytics::Mutex.State + -1;
    UNLOCK();
    bVar1 = (byte)FInstallCacheAnalytics::Mutex.State & 2;
    FInstallCacheAnalytics::Mutex.State = aVar2;
    if (bVar1 != 0) {
      FMutex::WakeWaitingThread(&FInstallCacheAnalytics::Mutex);
    }
  }
  return;
}

// OnStartupError @ 1445e6dc0

void __cdecl
UE::IoStore::FOnDemandInstallCacheStats::OnStartupError
          (TValueOrError<void,UE::UnifiedError::FError> *param_1)

{
  FOnDemandImmediateAnalytic local_28;
  
  if ((param_1->Error).bIsSet != false) {
    MakeAnalyticsEventFromResult(&local_28,L"IadStartupError",param_1);
    SendImmediateAnalytic(&local_28);
    DestructItems<FAnalyticsEventAttribute,int>
              ((FAnalyticsEventAttribute *)local_28.AnalyticsArray.AllocatorInstance.Data,
               local_28.AnalyticsArray.ArrayNum);
    if ((FAnalyticsEventAttribute *)local_28.AnalyticsArray.AllocatorInstance.Data !=
        (FAnalyticsEventAttribute *)0x0) {
      FMemory::Free(local_28.AnalyticsArray.AllocatorInstance.Data);
    }
    if (local_28.EventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.EventName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

