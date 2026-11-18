// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 140

// StatNamedEvent<char> @ 141617820

void __cdecl FGenericPlatformMisc::StatNamedEvent<char>(char *param_1)

{
  if (GTrackCsvNamedEvents) {
    LOCK();
    GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
    UNLOCK();
  }
  return;
}

// StatNamedEvent<wchar_t> @ 141617840

void __cdecl FGenericPlatformMisc::StatNamedEvent<wchar_t>(wchar_t *param_1)

{
  if (GTrackCsvNamedEvents) {
    LOCK();
    GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
    UNLOCK();
  }
  return;
}

// AddAdditionalRootDirectory @ 141626590

void __cdecl FGenericPlatformMisc::AddAdditionalRootDirectory(FString *param_1)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  FStaticData *pFVar5;
  FStaticData *pFVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FString local_18;
  
  pFVar5 = TLazySingleton<FGenericPlatformMisc::FStaticData>::Get();
  AcquireSRWLockExclusive((PSRWLOCK)&pFVar5->AdditionalRootDirectoriesLock);
  pFVar6 = TLazySingleton<FGenericPlatformMisc::FStaticData>::Get();
  local_18.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar7 = (longlong)local_18.Data.ArrayNum;
  pFVar8 = (param_1->Data).AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_18.Data.ArrayNum == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,local_18.Data.ArrayNum,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,pFVar8,lVar7 * 2);
  }
  FPaths::MakePlatformFilename(&local_18);
  pFVar8 = (pFVar6->AdditionalRootDirectories).AllocatorInstance.Data;
  if ((pFVar8 <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 <
      pFVar8 + (longlong)(pFVar6->AdditionalRootDirectories).ArrayMax * 0x10)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (pFVar6->AdditionalRootDirectories).ArrayNum;
  piVar1 = &(pFVar6->AdditionalRootDirectories).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(pFVar6->AdditionalRootDirectories).AllocatorInstance,piVar1);
  }
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  (pFVar6->AdditionalRootDirectories).ArrayNum = iVar4 + 1;
  pFVar8 = (pFVar6->AdditionalRootDirectories).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)&pFVar8->field_0x0 = 0;
  lVar7 = (longlong)local_18.Data.ArrayNum;
  *(int *)&pFVar8[8].field_0x0 = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == 0) {
    *(int *)(pFVar8 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)pFVar8,local_18.Data.ArrayNum,
               (int *)(pFVar8 + 0xc));
    memcpy(*(void **)&pFVar8->field_0x0,_Src.Data,lVar7 * 2);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&pFVar5->AdditionalRootDirectoriesLock);
  return;
}

// AddNetworkListener @ 141627c70

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __cdecl
FGenericPlatformMisc::AddNetworkListener
          (TDelegate<void___cdecl(ENetworkConnectionType),FDefaultDelegateUserPolicy> *param_1)

{
  if (2 < (byte)LogGenericPlatformMisc._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGenericPlatformMisc);
    *(undefined8 *)param_1 = 0;
    return (FDelegateHandle)(ulong64)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (FDelegateHandle)(ulong64)param_1;
}

// AllowThreadHeartBeat @ 141629370

bool __cdecl FGenericPlatformMisc::AllowThreadHeartBeat(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar2 = FCommandLine::Get();
      bVar1 = FParse::Param(pwVar2,L"noheartbeatthread");
      bHeartbeat = !bVar1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bHeartbeat;
}

// BeginNamedEvent @ 14162bc80

void __cdecl FGenericPlatformMisc::BeginNamedEvent(FColor *param_1,char *param_2)

{
  bool bVar1;
  
  bVar1 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
  if ((bVar1) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
    (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
              (FActiveExternalProfilerBase::ActiveProfiler,param_1,param_2);
  }
  if (GTrackCsvNamedEvents != false) {
    LOCK();
    GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
    UNLOCK();
  }
  return;
}

// BeginNamedEvent @ 14162bce0

void __cdecl FGenericPlatformMisc::BeginNamedEvent(FColor *param_1,wchar_t *param_2)

{
  bool bVar1;
  
  bVar1 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
  if ((bVar1) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
    (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x40))
              (FActiveExternalProfilerBase::ActiveProfiler,param_1,param_2);
  }
  if (GTrackCsvNamedEvents != false) {
    LOCK();
    GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
    UNLOCK();
  }
  return;
}

// BeginNamedEventFrame @ 14162bd40

void __cdecl FGenericPlatformMisc::BeginNamedEventFrame(void)

{
  atomic<unsigned_int> aVar1;
  
  aVar1 = GNamedEventMarkers;
  if (GTrackCsvNamedEvents) {
    LOCK();
    GNamedEventMarkers = (atomic<unsigned_int>)0x0;
    UNLOCK();
    if (!__CsvProfilerStat782) {
      FCsvProfilerTrace::OutputInlineStat("NamedEventMarkers",0);
      __CsvProfilerStat782 = true;
    }
    FCsvProfiler::RecordCustomStat("NamedEventMarkers",0,(int)aVar1,Set);
    return;
  }
  return;
}

// CacheLaunchDir @ 14162cf70

void __cdecl FGenericPlatformMisc::CacheLaunchDir(void)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FStaticData *pFVar4;
  FString *pFVar5;
  int iVar6;
  FString local_28;
  FString local_18;
  
  pFVar4 = TLazySingleton<FGenericPlatformMisc::FStaticData>::Get();
  pFVar1 = &pFVar4->LaunchDir;
  iVar2 = (pFVar4->LaunchDir).Data.ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if (iVar6 == 0) {
    pFVar5 = FWindowsPlatformProcess::GetCurrentWorkingDirectory(&local_18);
    ::FString::ConcatFC(&local_28,pFVar5,L"/");
    if (pFVar1 != &local_28) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (pFVar4->LaunchDir).Data.ArrayNum = local_28.Data.ArrayNum;
      (pFVar4->LaunchDir).Data.ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CloudDir @ 14162ee20

FString * __cdecl FGenericPlatformMisc::CloudDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = FPaths::ProjectSavedDir();
  ::FString::ConcatFC(__return_storage_ptr__,pFVar1,L"Cloud/");
  return __return_storage_ptr__;
}

// CreateGuid @ 141632a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericPlatformMisc::CreateGuid(FGuid *param_1)

{
  int *piVar1;
  bool bVar2;
  atomic<unsigned_int> aVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FGenericPlatformMisc::CreateGuid(FGuid_&)_::_2_::FStat_STAT_FGenericPlatformMisc_CreateGuid>
  FVar8;
  FDateTime FVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FNameEntryId FVar10;
  FName FVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  uint local_res8;
  uint uStackX_c;
  FName local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_88;
  LARGE_INTEGER local_80;
  FName local_78;
  FName local_70 [2];
  FName local_60;
  FStatMessage local_50 [2];
  undefined1 auVar12 [16];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FGenericPlatformMisc_CreateGuid ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_FGenericPlatformMisc::CreateGuid(FGuid_&)_::_2_::FStat_STAT_FGenericPlatformMisc_CreateGuid>
         )0x0) {
      pFVar7 = ::FName::FName(&local_78,"STAT_FGenericPlatformMisc_CreateGuid");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGenericPlatformMisc_CreateGuid,*pFVar7,
                 L"STAT_FGenericPlatformMisc_CreateGuid","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar8 = StatPtr_STAT_FGenericPlatformMisc_CreateGuid;
  if (StatPtr_STAT_FGenericPlatformMisc_CreateGuid ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FGenericPlatformMisc::CreateGuid(FGuid_&)_::_2_::FStat_STAT_FGenericPlatformMisc_CreateGuid>
       )0x0) {
    pFVar7 = ::FName::FName(local_70,"STAT_FGenericPlatformMisc_CreateGuid");
    FVar8 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FGenericPlatformMisc::CreateGuid(FGuid_&)_::_2_::FStat_STAT_FGenericPlatformMisc_CreateGuid>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FGenericPlatformMisc_CreateGuid,
                         *pFVar7,L"STAT_FGenericPlatformMisc_CreateGuid","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar4 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar6 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8 = 0;
      bVar4 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar4) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                  (FActiveExternalProfilerBase::ActiveProfiler,&local_res8);
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      bVar4 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                   ,0x403);
        bVar4 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar10.Value;
      uStackX_c = uVar6;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar2 = true;
      goto LAB_141632be9;
    }
  }
  bVar2 = false;
  FVar11 = local_60;
LAB_141632be9:
  aVar3 = IncrementCounter;
  LOCK();
  UNLOCK();
  if (IncrementCounter == (atomic<unsigned_int>)0x0) {
    IncrementCounter = (atomic<unsigned_int>)((int)IncrementCounter + 1);
    FWindowsPlatformTime::InitTiming();
    FVar9 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
    InitialDateTime.Ticks = *FVar9.Ticks;
    QueryPerformanceCounter(&local_res18);
    InitialCycleCounter = local_res18.QuadPart;
    FVar9.Ticks = InitialDateTime.Ticks;
  }
  else {
    IncrementCounter = (atomic<unsigned_int>)((int)IncrementCounter + 1);
    QueryPerformanceCounter(&local_res20);
    auVar12._8_8_ = extraout_XMM0_Qb;
    auVar12._0_8_ = extraout_XMM0_Qa;
    auVar13._8_8_ = 0;
    auVar13._0_8_ =
         (double)(local_res20.QuadPart - InitialCycleCounter) *
         FGenericPlatformTime::SecondsPerCycle64 * __real_416312d000000000 + __real_3fe0000000000000
    ;
    auVar13 = roundpd(auVar12,auVar13,1);
    FVar9.Ticks = (longlong)auVar13._0_8_ + InitialDateTime.Ticks;
  }
  uVar6 = rand();
  QueryPerformanceCounter(&local_88);
  param_1->A = ((uint)aVar3 >> 0x10 | (int)aVar3 << 0x10) ^ uVar6;
  param_1->B = (uint)((ulonglong)FVar9.Ticks >> 0x20);
  param_1->C = (uint)FVar9.Ticks;
  param_1->D = local_88.s.LowPart;
  if (((bVar5) && (bVar5 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar5)) &&
     (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
    (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar2) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_50[0].NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_80);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_80.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_80.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_80.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,local_50);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// CustomNamedStat @ 141633600

void __cdecl
FGenericPlatformMisc::CustomNamedStat(char *param_1,float param_2,char *param_3,char *param_4)

{
  return;
}

// CustomNamedStat @ 141633610

void __cdecl
FGenericPlatformMisc::CustomNamedStat
          (wchar_t *param_1,float param_2,wchar_t *param_3,wchar_t *param_4)

{
  return;
}

// DeleteStoredSection @ 141633820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FGenericPlatformMisc::DeleteStoredSection(FString *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar8;
  int iVar9;
  int iVar10;
  wchar_t *pwVar11;
  int iVar12;
  undefined1 auStack_1a8 [32];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_188;
  FString local_178;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_168;
  FString local_158;
  FString local_148;
  FConfigFile local_138;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  pwVar11 = L"";
  if (((param_1->Data).ArrayNum < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InStoreId.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                         ,0x395,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (((param_2->Data).ArrayNum < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InSectionName.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                         ,0x396,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pFVar6 = ::FString::FString(&local_148,L"KeyValueStore.ini");
  pwVar7 = FWindowsPlatformProcess::ApplicationSettingsDir();
  pTVar8 = &::FString::FString(&local_158,pwVar7)->Data;
  iVar5 = (param_1->Data).ArrayNum;
  iVar12 = 2;
  iVar10 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar10 = 0;
  }
  if ((pTVar8->ArrayNum != 0) || (iVar5 = 2, iVar10 == -1)) {
    iVar5 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_188,pTVar8,iVar10 + iVar5);
  ::FString::PathAppend
            ((FString *)&local_188,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar10);
  iVar5 = (pFVar6->Data).ArrayNum;
  iVar9 = 0;
  iVar10 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar10 = iVar9;
  }
  if ((local_188.ArrayNum != 0) || (iVar10 == -1)) {
    iVar12 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_168,&local_188,iVar10 + iVar12);
  ::FString::PathAppend
            ((FString *)&local_168,(wchar_t *)(pFVar6->Data).AllocatorInstance.Data,iVar10);
  if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  FConfigFile::FConfigFile(&local_138);
  FConfigFile::Read(&local_138,(FString *)&local_168);
  AcquireSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if ((int)local_138._padding_ == local_138._padding_._4_4_) {
    ReleaseSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  }
  else {
    iVar5 = (param_2->Data).ArrayNum;
    if (iVar5 != 0) {
      pwVar11 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      iVar9 = iVar5 + -1;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar11);
    iVar5 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>
                      ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                        *)&local_138,uVar4,param_2);
    ReleaseSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
    if (iVar5 != 0) {
      local_138.Dirty = true;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.Data.ArrayNum = 0;
      local_178.Data.ArrayMax = 0;
      bVar2 = FConfigFile::Write(&local_138,(FString *)&local_168,true,&local_178);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      goto LAB_141633a40;
    }
  }
  bVar2 = false;
LAB_141633a40:
  FConfigFile::~FConfigFile(&local_138);
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return bVar2;
}

// DeleteStoredValue @ 141633a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FGenericPlatformMisc::DeleteStoredValue(FString *param_1,FString *param_2,FString *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar7;
  FName *pFVar8;
  wchar_t *pwVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_1b8 [32];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_198;
  FString local_188;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_178;
  FName local_168;
  FString local_160;
  FString local_150;
  FConfigFile local_138;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pwVar9 = L"";
  if ((param_1->Data).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStoreId.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                       ,0x381,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((param_2->Data).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InSectionName.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                       ,0x382,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((param_3->Data).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InKeyName.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                       ,899,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar5 = ::FString::FString(&local_150,L"KeyValueStore.ini");
  pwVar6 = FWindowsPlatformProcess::ApplicationSettingsDir();
  pTVar7 = &::FString::FString(&local_160,pwVar6)->Data;
  iVar4 = (param_1->Data).ArrayNum;
  iVar11 = 2;
  iVar10 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar10 = 0;
  }
  if ((pTVar7->ArrayNum != 0) || (iVar4 = 2, iVar10 == -1)) {
    iVar4 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_198,pTVar7,iVar10 + iVar4);
  ::FString::PathAppend
            ((FString *)&local_198,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar10);
  iVar4 = (pFVar5->Data).ArrayNum;
  iVar10 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar10 = 0;
  }
  if ((local_198.ArrayNum != 0) || (iVar10 == -1)) {
    iVar11 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_178,&local_198,iVar10 + iVar11);
  ::FString::PathAppend
            ((FString *)&local_178,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar10);
  if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AllocatorInstance.Data);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  FConfigFile::FConfigFile(&local_138);
  FConfigFile::Read(&local_138,(FString *)&local_178);
  if ((param_3->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  pFVar8 = ::FName::FName(&local_168,pwVar6);
  if ((param_2->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  bVar2 = FConfigFile::RemoveKeyFromSection(&local_138,pwVar9,*pFVar8);
  if (bVar2) {
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.Data.ArrayNum = 0;
    local_188.Data.ArrayMax = 0;
    bVar2 = FConfigFile::Write(&local_138,(FString *)&local_178,true,&local_188);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
  }
  else {
    bVar2 = false;
  }
  FConfigFile::~FConfigFile(&local_138);
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  return bVar2;
}

// EndNamedEvent @ 1416382c0

void __cdecl FGenericPlatformMisc::EndNamedEvent(void)

{
  bool bVar1;
  
  bVar1 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
  if ((bVar1) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001416382e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
    return;
  }
  return;
}

// EngineDir @ 141638410

wchar_t * __cdecl FGenericPlatformMisc::EngineDir(void)

{
  int iVar1;
  FStaticData *pFVar2;
  int iVar3;
  
  pFVar2 = TLazySingleton<FGenericPlatformMisc::FStaticData>::Get();
  iVar1 = (pFVar2->EngineDirectory).Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (iVar3 == 0) {
    MakeEngineDir(&pFVar2->EngineDirectory);
  }
  if ((pFVar2->EngineDirectory).Data.ArrayNum != 0) {
    return (wchar_t *)(pFVar2->EngineDirectory).Data.AllocatorInstance.Data;
  }
  return L"";
}

// FileExistsInPlatformPackage @ 14163a030

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericPlatformMisc::FileExistsInPlatformPackage(FString *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  wchar_t *pwVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  IPlatformFile *pIVar5;
  ForAnyElementType FVar6;
  int iVar7;
  int iVar8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  TStringView<wchar_t> local_18;
  
  local_28.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  iVar8 = (param_1->Data).ArrayNum;
  local_28.ArrayNum = iVar8 + -1;
  if (iVar8 == 0) {
    local_28.ArrayNum = 0;
  }
  local_18._12_4_ = local_28.ArrayMax;
  local_18.Size = local_28.ArrayNum;
  local_18.DataPtr = (wchar_t *)local_28.AllocatorInstance.Data;
  bVar1 = FPathViews::IsRelativePath(&local_18);
  if (!bVar1) {
    if (2 < (byte)LogGenericPlatformMisc._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGenericPlatformMisc);
    }
    return false;
  }
  pwVar3 = RootDir();
  iVar8 = (param_1->Data).ArrayNum;
  iVar7 = 1;
  if (iVar8 == 0) {
    iVar8 = 1;
  }
  pTVar4 = &::FString::FString((FString *)&local_18,pwVar3)->Data;
  if ((pTVar4->ArrayNum != 0) || (iVar8 == 0)) {
    iVar7 = 0;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_28,pTVar4,iVar7 + iVar8);
  if ((FScriptContainerElement *)local_18.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.DataPtr);
  }
  iVar7 = (param_1->Data).ArrayNum;
  iVar8 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar8 = 0;
  }
  ::FString::PathAppend
            ((FString *)&local_28,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar8);
  pIVar5 = IPlatformFile::GetPlatformPhysical();
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.ArrayNum != 0) {
    FVar6.Data = local_28.AllocatorInstance.Data;
  }
  uVar2 = (**(code **)((longlong)*pIVar5 + 0x78))(pIVar5,FVar6.Data);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// GamePersistentDownloadDir @ 14163d820

wchar_t * __cdecl FGenericPlatformMisc::GamePersistentDownloadDir(void)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FStaticData *pFVar4;
  FString *pFVar5;
  int iVar6;
  FString local_18;
  
  pFVar4 = TLazySingleton<FGenericPlatformMisc::FStaticData>::Get();
  pFVar1 = &pFVar4->GamePersistentDownloadDir;
  iVar2 = (pFVar4->GamePersistentDownloadDir).Data.ArrayNum;
  iVar6 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  if (iVar6 == 0) {
    pFVar5 = FPaths::ProjectSavedDir();
    pFVar5 = ::operator/(&local_18,pFVar5,L"PersistentDownloadDir");
    if (pFVar1 != pFVar5) {
      pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar4->GamePersistentDownloadDir).Data.ArrayNum = (pFVar5->Data).ArrayNum;
      (pFVar4->GamePersistentDownloadDir).Data.ArrayMax = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((pFVar4->GamePersistentDownloadDir).Data.ArrayNum != 0) {
    return (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  return L"";
}

// GameTemporaryDownloadDir @ 14163d8d0

wchar_t * __cdecl FGenericPlatformMisc::GameTemporaryDownloadDir(void)

{
  return (wchar_t *)0x0;
}

// GeneratedConfigDir @ 14163da10

wchar_t * __cdecl FGenericPlatformMisc::GeneratedConfigDir(void)

{
  wchar_t *pwVar1;
  FString *pFVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = FPaths::ProjectSavedDir();
      ::operator/(&Dir,pFVar2,L"Config/");
      atexit(`FGenericPlatformMisc::GeneratedConfigDir'::__l2::_dynamic_atexit_destructor_for__Dir__
            );
      _Init_thread_footer(&::_TSS0);
    }
  }
  pwVar1 = L"";
  if (Dir.Data.ArrayNum != 0) {
    pwVar1 = (wchar_t *)Dir.Data.AllocatorInstance.Data;
  }
  return pwVar1;
}

// GetAdditionalRootDirectories @ 14163e4b0

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FGenericPlatformMisc::GetAdditionalRootDirectories
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FStaticData *pFVar3;
  FStaticData *pFVar4;
  
  pFVar3 = TLazySingleton<FGenericPlatformMisc::FStaticData>::Get();
  AcquireSRWLockShared((PSRWLOCK)&pFVar3->AdditionalRootDirectoriesLock);
  pFVar4 = TLazySingleton<FGenericPlatformMisc::FStaticData>::Get();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar4->AdditionalRootDirectories).ArrayNum;
  pFVar2 = (pFVar4->AdditionalRootDirectories).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
               &__return_storage_ptr__->ArrayMax);
    ConstructItems<FString,FString,int>
              ((__return_storage_ptr__->AllocatorInstance).Data,(FString *)pFVar2,iVar1);
  }
  ReleaseSRWLockShared((PSRWLOCK)&pFVar3->AdditionalRootDirectoriesLock);
  return __return_storage_ptr__;
}

// GetAllowedDeviceOrientation @ 14163e6d0

EDeviceScreenOrientation __cdecl FGenericPlatformMisc::GetAllowedDeviceOrientation(void)

{
  return AllowedDeviceOrientation;
}

// GetCPUBrand @ 14163ecb0

FString * __cdecl FGenericPlatformMisc::GetCPUBrand(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GenericCPUBrand");
  return __return_storage_ptr__;
}

// GetCPUChipset @ 14163ece0

FString * __cdecl FGenericPlatformMisc::GetCPUChipset(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"Unknown");
  return __return_storage_ptr__;
}

// GetCPUInfo @ 14163ed10

uint __cdecl FGenericPlatformMisc::GetCPUInfo(void)

{
  return 0;
}

// GetCPUMicrocodeRevision @ 14163ed20

uint __cdecl FGenericPlatformMisc::GetCPUMicrocodeRevision(void)

{
  return 0;
}

// GetCPUModelID @ 14163ed30

uint __cdecl FGenericPlatformMisc::GetCPUModelID(void)

{
  return 0;
}

// GetCPUVendor @ 14163ed40

FString * __cdecl FGenericPlatformMisc::GetCPUVendor(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GenericCPUVendor");
  return __return_storage_ptr__;
}

// GetConfigRuleVars @ 14163ee50

TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> * __cdecl
FGenericPlatformMisc::GetConfigRuleVars(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FGenericPlatformMisc::GetConfigRuleVars'::__l2::_dynamic_atexit_destructor_for__Temp__
            );
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &Temp;
}

// GetConfigRulesVariable @ 14163eec0

FString * __cdecl FGenericPlatformMisc::GetConfigRulesVariable(FString *param_1)

{
  FString *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FGenericPlatformMisc::GetConfigRuleVars'::__l2::_dynamic_atexit_destructor_for__Temp__
            );
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)&Temp,param_1);
  return pFVar1;
}

// GetConfiguredCoreLimits @ 14163ef40

void __cdecl
FGenericPlatformMisc::GetConfiguredCoreLimits
          (int param_1,int param_2,bool *param_3,int *param_4,int *param_5,bool *param_6)

{
  bool bVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  int local_18;
  int local_14 [3];
  
  bVar1 = FCommandLine::IsInitialized();
  if (bVar1) {
    local_18 = 0;
    local_14[0] = 0;
    pwVar2 = FCommandLine::Get();
    FParse::Value(pwVar2,L"-physicalcorelimit=",&local_18);
    FParse::Value(pwVar2,L"-corelimit=",local_14);
    bVar1 = FParse::Param(pwVar2,L"usehyperthreading");
    iVar3 = local_18;
    if ((!bVar1) && (0 < param_1)) {
      iVar3 = (local_18 * param_2) / param_1;
    }
    iVar4 = iVar3;
    if (0 < local_14[0]) {
      iVar4 = local_14[0];
      if ((local_18 != 0) && (iVar4 = local_14[0], local_18 < local_14[0])) {
        iVar4 = local_18;
      }
      local_18 = iVar4;
      iVar4 = local_14[0];
      if ((iVar3 != 0) && (iVar3 < local_14[0])) {
        iVar4 = iVar3;
      }
    }
    *param_3 = true;
    *param_4 = local_18;
    *param_5 = iVar4;
    *param_6 = bVar1;
  }
  else {
    *param_3 = false;
    *param_4 = 0;
    *param_5 = 0;
    *param_6 = false;
  }
  return;
}

// GetConvertibleLaptopMode @ 141640660

EConvertibleLaptopMode __cdecl FGenericPlatformMisc::GetConvertibleLaptopMode(void)

{
  return NotSupported;
}

// GetDefaultDeviceProfileName @ 141640a80

wchar_t * __cdecl FGenericPlatformMisc::GetDefaultDeviceProfileName(void)

{
  return L"Default";
}

// GetDefaultLanguage @ 141640a90

FString * __cdecl FGenericPlatformMisc::GetDefaultLanguage(FString *__return_storage_ptr__)

{
  FWindowsPlatformMisc::GetDefaultLocale(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDefaultLocale @ 141640ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FGenericPlatformMisc::GetDefaultLocale(FString *__return_storage_ptr__)

{
  Locale *pLVar1;
  undefined1 auStack_118 [32];
  Locale local_f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  pLVar1 = icu_64::Locale::getDefault();
  icu_64::Locale::Locale(&local_f8,pLVar1);
  ::FString::FString(__return_storage_ptr__,local_f8.fullName);
  icu_64::Locale::~Locale(&local_f8);
  return __return_storage_ptr__;
}

// GetDefaultPathSeparator @ 141640b20

wchar_t * __cdecl FGenericPlatformMisc::GetDefaultPathSeparator(void)

{
  return L"/";
}

// GetDeviceId @ 141641440

FString * __cdecl FGenericPlatformMisc::GetDeviceId(FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDeviceMakeAndModel @ 141641460

FString * __cdecl FGenericPlatformMisc::GetDeviceMakeAndModel(FString *__return_storage_ptr__)

{
  int iVar1;
  FString *pFVar2;
  bool bVar3;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar2 = FWindowsPlatformMisc::GetCPUVendor(&local_18);
  ::FString::TrimStartAndEnd(pFVar2,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = FWindowsPlatformMisc::GetCPUBrand(&local_18);
  ::FString::TrimStartAndEnd(pFVar2,&local_38);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"Unknown");
  ::FString::TrimStartAndEnd(&local_18,&local_48);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_18,L"Unknown");
  if (local_48.Data.ArrayNum == local_18.Data.ArrayNum) {
    if (local_48.Data.ArrayNum < 2) {
      bVar3 = false;
    }
    else {
      iVar1 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                     (wchar_t *)local_18.Data.AllocatorInstance.Data);
      bVar3 = iVar1 != 0;
    }
  }
  else {
    bVar3 = local_48.Data.ArrayNum + local_18.Data.ArrayNum != 1;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    iVar1 = ::FString::Find(&local_38,L"|",1,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) {
      ::FString::PrintfImpl(__return_storage_ptr__,L"%s|%s|%s");
    }
    else {
      ::FString::Replace(&local_38,&local_18,L"|",L"_",IgnoreCase);
      ::FString::PrintfImpl(__return_storage_ptr__,L"%s|%s|%s");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s|%s");
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDeviceOrientation @ 141641690

EDeviceScreenOrientation __cdecl FGenericPlatformMisc::GetDeviceOrientation(void)

{
  return Unknown;
}

// GetDeviceTag @ 1416416a0

FString * __cdecl FGenericPlatformMisc::GetDeviceTag(FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  
  ::FString::FString(__return_storage_ptr__,L"");
  pwVar1 = FCommandLine::Get();
  FParse::Value(pwVar1,L"DeviceTag=",__return_storage_ptr__,true,(wchar_t **)0x0);
  return __return_storage_ptr__;
}

// GetDeviceTemperatureLevel @ 1416416f0

float __cdecl FGenericPlatformMisc::GetDeviceTemperatureLevel(void)

{
  return __real_bf800000;
}

// GetDeviceVolume @ 141641700

int __cdecl FGenericPlatformMisc::GetDeviceVolume(void)

{
  return -1;
}

// GetDiskTotalAndFreeSpace @ 141641710

bool __cdecl
FGenericPlatformMisc::GetDiskTotalAndFreeSpace(FString *param_1,ulong64 *param_2,ulong64 *param_3)

{
  *param_2 = 0;
  *param_3 = 0;
  return false;
}

// GetEngineAndProjectAbsoluteDirsFromExecutable @ 141641780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FGenericPlatformMisc::GetEngineAndProjectAbsoluteDirsFromExecutable
          (FString *param_1,FString *param_2)

{
  char cVar1;
  IPlatformFile *pIVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStackY_198 [32];
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  undefined1 local_e8 [96];
  void *local_88;
  undefined4 local_80;
  TStringView<wchar_t> local_78;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pIVar2 = IPlatformFile::GetPlatformPhysical();
  pwVar3 = FWindowsPlatformProcess::ExecutablePath();
  ::FString::FString((FString *)&local_78,pwVar3);
  FPaths::GetPath(&local_108,(FString *)&local_78);
  if (local_78.DataPtr != (wchar_t *)0x0) {
    FMemory::Free(local_78.DataPtr);
  }
  FPaths::NormalizeFilename(&local_108);
  local_78.DataPtr = (wchar_t *)local_108.Data.AllocatorInstance.Data;
  local_60 = 5;
  iVar10 = 0;
  local_78.Size = local_108.Data.ArrayNum + -1;
  if (local_108.Data.ArrayNum == 0) {
    local_78.Size = iVar10;
  }
  local_68 = L"../..";
  FPaths::CombineInternal(&local_128,&local_78,2);
  FPaths::CollapseRelativeDirectories(&local_128,false);
  iVar9 = local_128.Data.ArrayNum;
  FVar6.Data = local_128.Data.AllocatorInstance.Data;
  local_138.Data.ArrayNum = local_128.Data.ArrayNum;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar8 = (10 - (uint)(local_128.Data.ArrayNum != 0)) + local_128.Data.ArrayNum;
  if ((int)uVar8 < local_128.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar8,0,(ForAnyElementType *)&local_138,local_128.Data.ArrayNum,
             &local_138.Data.ArrayMax);
  if (iVar9 != 0) {
    memcpy(local_138.Data.AllocatorInstance.Data,FVar6.Data,(longlong)iVar9 * 2);
  }
  ::FString::PathAppend(&local_138,L"Binaries",8);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_138.Data.ArrayNum != 0) {
    FVar6.Data = local_138.Data.AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x118))(pIVar2,FVar6.Data);
  if (cVar1 == '\0') {
    bVar7 = false;
  }
  else {
    iVar9 = local_128.Data.ArrayNum + -1;
    if (local_128.Data.ArrayNum == 0) {
      iVar9 = iVar10;
    }
    ::FString::AssignRange(param_2,(wchar_t *)local_128.Data.AllocatorInstance.Data,iVar9);
    local_78.DataPtr = (wchar_t *)local_108.Data.AllocatorInstance.Data;
    local_60 = 8;
    local_58 = GInternalProjectName;
    local_78.Size = local_108.Data.ArrayNum + -1;
    if (local_108.Data.ArrayNum == 0) {
      local_78.Size = iVar10;
    }
    local_68 = L"../../..";
    sVar4 = wcslen(GInternalProjectName);
    local_50 = (undefined4)sVar4;
    FPaths::CombineInternal(&local_118,&local_78,3);
    FPaths::CollapseRelativeDirectories(&local_118,false);
    iVar10 = local_118.Data.ArrayNum;
    FVar6.Data = local_118.Data.AllocatorInstance.Data;
    local_158.Data.ArrayNum = local_118.Data.ArrayNum;
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar8 = (10 - (uint)(local_118.Data.ArrayNum != 0)) + local_118.Data.ArrayNum;
    if ((int)uVar8 < local_118.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar8,0,(ForAnyElementType *)&local_158,local_118.Data.ArrayNum,
               &local_158.Data.ArrayMax);
    if (iVar10 != 0) {
      memcpy(local_158.Data.AllocatorInstance.Data,FVar6.Data,(longlong)iVar10 * 2);
    }
    ::FString::PathAppend(&local_158,L"Binaries",8);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_158.Data.ArrayNum != 0) {
      FVar6.Data = local_158.Data.AllocatorInstance.Data;
    }
    cVar1 = (**(code **)((longlong)*pIVar2 + 0x118))(pIVar2,FVar6.Data);
    if (cVar1 == '\0') {
      LowLevelOutputDebugStringf(L"Failed to find game directory: %s\n");
      FVar6.Data = local_128.Data.AllocatorInstance.Data;
      local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar8 = (4 - (uint)(local_128.Data.ArrayNum != 0)) + local_128.Data.ArrayNum;
      if ((int)uVar8 < local_128.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar8,0,(ForAnyElementType *)&local_148,local_128.Data.ArrayNum,
                 &local_148.Data.ArrayMax);
      if (local_128.Data.ArrayNum != 0) {
        memcpy(local_148.Data.AllocatorInstance.Data,FVar6.Data,
               (longlong)local_128.Data.ArrayNum * 2);
      }
      ::FString::PathAppend(&local_148,L"..",2);
      FPaths::CollapseRelativeDirectories(&local_148,false);
      FUProjectDictionary::FUProjectDictionary((FUProjectDictionary *)local_e8,&local_148);
      FUProjectDictionary::GetProjectPathForGame
                ((FUProjectDictionary *)local_e8,&local_f8,GInternalProjectName);
      if (local_f8.Data.ArrayNum < 2) {
        bVar7 = false;
      }
      else {
        pFVar5 = FPaths::GetPath((FString *)&local_78,&local_f8);
        ::FString::operator=(param_1,pFVar5);
        if ((FScriptContainerElement *)local_78.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.DataPtr);
        }
        bVar7 = true;
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      local_80 = 0;
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_e8 + 0x20));
      DestructItems<FString,int>((FString *)local_e8._16_8_,local_e8._24_4_);
      if ((FScriptContainerElement *)local_e8._16_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e8._16_8_);
      }
      if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e8._0_8_);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar10 = local_118.Data.ArrayNum + -1;
      if (local_118.Data.ArrayNum == 0) {
        iVar10 = 0;
      }
      ::FString::AssignRange(param_1,(wchar_t *)local_118.Data.AllocatorInstance.Data,iVar10);
      bVar7 = true;
    }
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// GetEngineMode @ 141641ca0

wchar_t * __cdecl FGenericPlatformMisc::GetEngineMode(void)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"Commandlet";
  if (!PRIVATE_GIsRunningCommandlet) {
    pwVar1 = L"Game";
  }
  return pwVar1;
}

// GetEnvironmentVariable @ 141641cc0

FString * __cdecl
FGenericPlatformMisc::GetEnvironmentVariable(FString *__return_storage_ptr__,wchar_t *param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetEpicAccountId @ 141641ce0

FString * __cdecl FGenericPlatformMisc::GetEpicAccountId(FString *__return_storage_ptr__)

{
  FString local_38;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::FString(&local_18,L"AccountId");
  ::FString::FString(&local_28,L"Unreal Engine/Identifiers");
  ::FString::FString(&local_38,L"Epic Games");
  FWindowsPlatformMisc::GetStoredValue(&local_38,&local_28,&local_18,__return_storage_ptr__);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetExternalAppMaxPathLength @ 141641e10

int __cdecl FGenericPlatformMisc::GetExternalAppMaxPathLength(void)

{
  bool bVar1;
  int iVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  INT_PTR IVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      hModule = GetModuleHandleW(L"ntdll.dll");
      bVar1 = false;
      if (hModule != (HMODULE)0x0) {
        pFVar3 = GetProcAddress(hModule,"RtlAreLongPathsEnabled");
        if (pFVar3 == (FARPROC)0x0) {
          bVar1 = FWindowsPlatformMisc::IsWine();
        }
        else {
          IVar4 = (*pFVar3)();
          bVar1 = (char)IVar4 != '\0';
        }
      }
      LongPathsEnabled.bValue = bVar1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar2 = 0x104;
  if (LongPathsEnabled.bValue != false) {
    iVar2 = 0x7fff;
  }
  return iVar2;
}

// GetFileManagerName @ 141641ed0

FText * __cdecl FGenericPlatformMisc::GetFileManagerName(FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"GenericPlatform",L"FileManagerName",L"File Manager");
  return __return_storage_ptr__;
}

// GetGPUDriverInfo @ 141642510

FGPUDriverInfo * __cdecl
FGenericPlatformMisc::GetGPUDriverInfo(FGPUDriverInfo *__return_storage_ptr__,FString *param_1)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  (__return_storage_ptr__->DeviceDescription).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->DeviceDescription).Data.ArrayNum = 0;
  (__return_storage_ptr__->DeviceDescription).Data.ArrayMax = 0;
  (__return_storage_ptr__->ProviderName).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ProviderName).Data.ArrayNum = 0;
  (__return_storage_ptr__->ProviderName).Data.ArrayMax = 0;
  (__return_storage_ptr__->InternalDriverVersion).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->InternalDriverVersion).Data.ArrayNum = 0;
  (__return_storage_ptr__->InternalDriverVersion).Data.ArrayMax = 0;
  (__return_storage_ptr__->UserDriverVersion).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UserDriverVersion).Data.ArrayNum = 0;
  (__return_storage_ptr__->UserDriverVersion).Data.ArrayMax = 0;
  (__return_storage_ptr__->DriverDate).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->DriverDate).Data.ArrayNum = 0;
  (__return_storage_ptr__->DriverDate).Data.ArrayMax = 0;
  (__return_storage_ptr__->RHIName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RHIName).Data.ArrayNum = 0;
  (__return_storage_ptr__->RHIName).Data.ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetHashedMacAddressString @ 141642720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FGenericPlatformMisc::GetHashedMacAddressString(FString *__return_storage_ptr__)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  size_t sVar6;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  FString local_178;
  FString local_168;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_158;
  FString local_148;
  FMD5 local_138;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_d8;
  uchar local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  FWindowsPlatformMisc::GetMacAddress(&local_158);
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  uVar10 = 0;
  uVar9 = uVar10;
  while ((uVar8 = (uint)uVar9, -1 < (int)uVar8 && (iVar11 = local_158.ArrayNum, (int)uVar8 < iVar11)
         )) {
    uVar4 = 0;
    if ((int)uVar8 < iVar11) {
      uVar4 = ~uVar8 >> 0x1f;
    }
    if (uVar4 == 0) {
      local_180 = (longlong)iVar11;
      local_188 = (longlong)(int)uVar8;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
    }
    ::FString::PrintfImpl(&local_168,L"%02x");
    uVar4 = local_168.Data.ArrayNum - 1;
    if (local_168.Data.ArrayNum == 0) {
      uVar4 = 0;
    }
    ::FString::AppendChars(&local_178,(wchar_t *)local_168.Data.AllocatorInstance.Data,uVar4);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    uVar9 = (ulonglong)(uVar8 + 1);
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  if (local_178.Data.ArrayNum < 2) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    sVar6 = wcslen((wchar_t *)local_178.Data.AllocatorInstance.Data);
    pTVar7 = StringCast<char,128,wchar_t>
                       (&local_d8,(wchar_t *)local_178.Data.AllocatorInstance.Data);
    puVar1 = (uchar *)pTVar7->Ptr;
    FMD5::FMD5(&local_138);
    FMD5::Update(&local_138,puVar1,(longlong)(int)sVar6);
    FMD5::Final(&local_138,local_38);
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    do {
      ::FString::PrintfImpl(&local_148,L"%02x");
      iVar11 = local_148.Data.ArrayNum + -1;
      if (local_148.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_148.Data.AllocatorInstance.Data,iVar11);
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < 0x10);
    FMD5::~FMD5(&local_138);
    if ((void *)local_d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._padding_);
    }
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetHostArchitecture @ 141642ad0

FString * __cdecl FGenericPlatformMisc::GetHostArchitecture(FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetLocalCurrencyCode @ 141642fc0

FString * __cdecl FGenericPlatformMisc::GetLocalCurrencyCode(FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetLocalCurrencySymbol @ 141642fe0

FString * __cdecl FGenericPlatformMisc::GetLocalCurrencySymbol(FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetLoginId @ 141643100

FString * __cdecl FGenericPlatformMisc::GetLoginId(FString *__return_storage_ptr__)

{
  FGuid local_28;
  FString local_18;
  
  GetMachineId(&local_28);
  if (((local_28.D == 0 && local_28.C == 0) && local_28.B == 0) && local_28.A == 0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FGuid::AppendString(&local_28,&local_18,Digits);
  ::FString::ToLower(&local_18,__return_storage_ptr__);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetMacAddress @ 141643180

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __cdecl
FGenericPlatformMisc::GetMacAddress
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetMacAddressString @ 1416431a0

FString * __cdecl FGenericPlatformMisc::GetMacAddressString(FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  uint uVar5;
  int iVar6;
  FString local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  FWindowsPlatformMisc::GetMacAddress(&local_18);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  for (uVar5 = 0; (-1 < (int)uVar5 && ((int)uVar5 < local_18.ArrayNum)); uVar5 = uVar5 + 1) {
    uVar3 = 0;
    if ((int)uVar5 < local_18.ArrayNum) {
      uVar3 = ~uVar5 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
    }
    ::FString::PrintfImpl(&local_28,L"%02x");
    iVar6 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar6);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetMachineId @ 1416432a0

FGuid * __cdecl FGenericPlatformMisc::GetMachineId(FGuid *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FGuid *pFVar5;
  FString local_58;
  FString local_48;
  FString local_38;
  ForAnyElementType local_28;
  
  bVar2 = false;
  bVar1 = false;
  bVar4 = false;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  if (((MachineId.D == 0 && MachineId.C == 0) && MachineId.B == 0) && MachineId.A == 0) {
    ::FString::FString((FString *)&local_28,L"MachineId");
    ::FString::FString(&local_38,L"Unreal Engine/Identifiers");
    ::FString::FString(&local_48,L"Epic Games");
    bVar3 = FWindowsPlatformMisc::GetStoredValue(&local_48,&local_38,(FString *)&local_28,&local_58)
    ;
    bVar2 = true;
    bVar1 = true;
    bVar4 = true;
    if (bVar3) {
      bVar3 = FGuid::Parse(&local_58,&MachineId);
      if (bVar3) goto LAB_14164334a;
    }
    bVar3 = true;
  }
  else {
LAB_14164334a:
    bVar3 = false;
  }
  if (bVar4) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (bVar1) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar2) && (local_28.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data);
  }
  if (bVar3) {
    pFVar5 = FGuid::NewGuid((FGuid *)&local_28);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    MachineId = *pFVar5;
    FGuid::AppendString(&MachineId,&local_48,Digits);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.ArrayMax = local_48.Data.ArrayMax;
    local_58.Data.ArrayNum = local_48.Data.ArrayNum;
    ::FString::FString(&local_48,L"MachineId");
    ::FString::FString(&local_38,L"Unreal Engine/Identifiers");
    ::FString::FString((FString *)&local_28,L"Epic Games");
    bVar4 = FWindowsPlatformMisc::SetStoredValue((FString *)&local_28,&local_38,&local_48,&local_58)
    ;
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (!bVar4) {
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      MachineId = (FGuid)(ZEXT816(0) << 0x40);
    }
  }
  *__return_storage_ptr__ = MachineId;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetMobilePropagateAlphaSetting @ 1416439b0

int __cdecl FGenericPlatformMisc::GetMobilePropagateAlphaSetting(void)

{
  int iVar1;
  IConsoleManager *pIVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pIVar2 = IConsoleManager::Get();
      PropagateAlphaCVar =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar2 + 0xc0))(pIVar2,L"r.Mobile.PropagateAlpha",1);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (PropagateAlphaCVar != (IConsoleVariable *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416439ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(longlong *)PropagateAlphaCVar + 200))();
    return iVar1;
  }
  return 0;
}

// GetNetworkConnectionStatus @ 141643cb0

ENetworkConnectionStatus __cdecl FGenericPlatformMisc::GetNetworkConnectionStatus(void)

{
  return CurrentNetworkConnectionStatus;
}

// GetNullRHIShaderFormat @ 141643cc0

wchar_t * __cdecl FGenericPlatformMisc::GetNullRHIShaderFormat(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  pwVar2 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar2,L"sm5");
  pwVar2 = L"PCD3D_SM6";
  if (bVar1) {
    pwVar2 = L"PCD3D_SM5";
  }
  return pwVar2;
}

// GetOSVersion @ 141643d00

FString * __cdecl FGenericPlatformMisc::GetOSVersion(FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetOSVersions @ 141643d20

void __cdecl FGenericPlatformMisc::GetOSVersions(FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = ::FString::FString(&local_18,L"GenericOSVersionLabel");
  if (param_1 != pFVar2) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (param_1->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::FString(&local_18,L"GenericOSSubVersionLabel");
  if (param_2 != pFVar2) {
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_2->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_2->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (param_2->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetOperatingSystemId @ 141643f20

FString * __cdecl FGenericPlatformMisc::GetOperatingSystemId(FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPakFilenamePrefix @ 141643f70

TStringView<wchar_t> * __cdecl
FGenericPlatformMisc::GetPakFilenamePrefix(TStringView<wchar_t> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 8;
  __return_storage_ptr__->DataPtr = L"pakchunk";
  return __return_storage_ptr__;
}

// GetPakchunkIndexFromPakFile @ 141643fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001416442e8) */

int __cdecl FGenericPlatformMisc::GetPakchunkIndexFromPakFile(TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar6;
  size_t sVar7;
  FString *pFVar8;
  void *pvVar9;
  ulong64 uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  ForAnyElementType _Str;
  undefined1 auStack_148 [32];
  uint local_128;
  int local_120;
  int local_118;
  TStringView<wchar_t> local_110;
  FString local_100;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_f0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_e0;
  FString local_d0;
  FString local_c0;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  TStringBuilderBase<wchar_t> local_78;
  wchar_t local_58 [16];
  ulonglong local_38 [2];
  longlong *plVar20;
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_148;
  plVar14 = (longlong *)0x0;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  pTVar6 = &::FString::ConstructFromPtrSize(&local_c0,L"pakchunk",8)->Data;
  uVar18 = 0;
  uVar11 = uVar18;
  if (&local_f0 != pTVar6) {
    local_f0.AllocatorInstance.Data =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar6->AllocatorInstance)->
         AllocatorInstance).Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar6->AllocatorInstance)->AllocatorInstance)
    .Data = (FScriptContainerElement *)0x0;
    uVar11 = pTVar6->ArrayNum;
    local_f0.ArrayNum = pTVar6->ArrayNum;
    local_f0.ArrayMax = pTVar6->ArrayMax;
    pTVar6->ArrayNum = 0;
    pTVar6->ArrayMax = 0;
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_e0,&local_f0,2 - (uint)(uVar11 != 0));
  ::FString::AppendChar((FString *)&local_e0,L'-');
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  FPathViews::GetBaseFilename(&local_110,param_1);
  local_118 = -1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::PakChunkIdOverrideDelegate,&local_b0);
  uVar11 = 0;
  if (((FCoreDelegates::PakChunkIdOverrideDelegate._16_4_ == 0) ||
      (FCoreDelegates::PakChunkIdOverrideDelegate._8_8_ == 0)) ||
     (cVar2 = (**(code **)(*(longlong *)FCoreDelegates::PakChunkIdOverrideDelegate._8_8_ + 0x38))(),
     cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b0);
    uVar13 = local_110._8_8_;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b0);
    if (local_e0.ArrayNum == 0) {
      _Str.Data = (FScriptContainerElement *)L"";
LAB_1416440ee:
      sVar7 = wcslen((wchar_t *)_Str.Data);
      uVar19 = (uint)sVar7;
    }
    else {
      _Str.Data = local_e0.AllocatorInstance.Data;
      uVar19 = uVar18;
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_1416440ee;
    }
    uVar13 = local_110._8_8_;
    uVar12 = local_110.Size;
    uVar15 = uVar12;
    if ((int)uVar19 < (int)uVar12) {
      uVar15 = uVar19;
    }
    uVar16 = uVar18;
    if (0 < (int)uVar15) {
      uVar16 = uVar15;
    }
    if ((uVar19 == uVar16) &&
       ((((uVar19 == 0 || (uVar16 == 0)) ||
         (iVar4 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)_Str.Data,local_110.DataPtr,(longlong)(int)uVar16),
         iVar4 == 0)) && (uVar19 == uVar16)))) {
      uVar19 = local_e0.ArrayNum - 1;
      if (local_e0.ArrayNum == 0) {
        uVar19 = uVar11;
      }
      if ((int)uVar19 < (int)uVar12) {
        lVar17 = (longlong)(int)uVar19 * 2;
        plVar20 = plVar14;
        uVar15 = uVar19;
        do {
          uVar18 = (uint)plVar20;
          if ((((int)uVar15 < 0) || ((int)uVar13 <= (int)uVar15)) &&
             (local_128 = uVar15, local_120 = (int)uVar13,
             bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index >= 0 && Index < Size",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                ,0x234,
                                L"Index out of bounds on StringView: index %i on a view with a length of %i"
                               ), uVar13 = local_110._8_8_, bVar3)) {
            pcVar1 = (code *)swi(3);
            iVar4 = (*pcVar1)();
            return iVar4;
          }
          uVar12 = (uint)uVar13;
          if (*(short *)(lVar17 + (longlong)local_110.DataPtr) == 0x2d) break;
          uVar18 = uVar18 + 1;
          plVar20 = (longlong *)(ulonglong)uVar18;
          uVar15 = uVar15 + 1;
          lVar17 = lVar17 + 2;
        } while ((int)uVar15 < (int)uVar12);
      }
      local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.Data.ArrayNum = 0;
      local_100.Data.ArrayMax = 0;
      uVar15 = uVar11;
      if ((int)uVar19 < 0) {
        uVar15 = uVar19;
      }
      uVar16 = uVar19 - uVar15;
      if ((int)uVar12 < (int)(uVar19 - uVar15)) {
        uVar16 = uVar12;
      }
      uVar19 = uVar12 - uVar16;
      if ((int)(uVar15 + uVar18) < (int)(uVar12 - uVar16)) {
        uVar19 = uVar15 + uVar18;
      }
      if (0 < (int)uVar19) {
        uVar11 = uVar19;
      }
      pFVar8 = ::FString::ConstructFromPtrSize(&local_d0,local_110.DataPtr + (int)uVar16,uVar11);
      if (&local_100 != pFVar8) {
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        local_100.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_100.Data.ArrayNum = (pFVar8->Data).ArrayNum;
        local_100.Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FCoreDelegates::PakChunkIdOverrideDelegate,&local_98);
      if (FCoreDelegates::PakChunkIdOverrideDelegate._16_4_ != 0) {
        plVar14 = (longlong *)FCoreDelegates::PakChunkIdOverrideDelegate._8_8_;
      }
      iVar4 = (**(code **)(*plVar14 + 0x60))(plVar14,&local_100);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_98);
      if (iVar4 == -1) {
        iVar4 = local_118;
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
          iVar4 = local_118;
        }
      }
      else if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      goto LAB_141644446;
    }
  }
  uVar19 = (uint)uVar13;
  uVar18 = uVar19;
  if (8 < (int)uVar19) {
    uVar18 = 8;
  }
  uVar15 = uVar11;
  if (0 < (int)uVar18) {
    uVar15 = uVar18;
  }
  iVar4 = local_118;
  if (((uVar15 == 8) &&
      (iVar5 = FGenericPlatformStricmp::Strnicmp(L"pakchunk",local_110.DataPtr,8), iVar4 = local_118
      , iVar5 == 0)) && (8 < (int)uVar19)) {
    uVar18 = 8;
    lVar17 = 0x10;
    do {
      uVar19 = (uint)plVar14;
      if ((((int)uVar18 < 0) || ((int)uVar13 <= (int)uVar18)) &&
         (local_128 = uVar18, local_120 = (int)uVar13,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index < Size",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                            ,0x234,
                            L"Index out of bounds on StringView: index %i on a view with a length of %i"
                           ), bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      iVar4 = iswdigit(*(wint_t *)(lVar17 + (longlong)local_110.DataPtr));
      iVar5 = local_110.Size;
      if (iVar4 == 0) break;
      uVar19 = uVar19 + 1;
      plVar14 = (longlong *)(ulonglong)uVar19;
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 2;
      uVar13 = local_110._8_8_;
    } while ((int)uVar18 < iVar5);
    iVar4 = local_118;
    if ((0 < (int)uVar19) && ((int)(uVar19 + 8) <= iVar5)) {
      local_78.bIsDynamic = false;
      local_78.bIsExternal = false;
      iVar4 = 8;
      if (iVar5 < 8) {
        iVar4 = iVar5;
      }
      uVar18 = iVar5 - iVar4;
      if ((int)uVar19 < iVar5 - iVar4) {
        uVar18 = uVar19;
      }
      local_78.Base = local_58;
      if (0 < (int)uVar18) {
        uVar11 = uVar18;
      }
      local_78.End = (wchar_t *)local_38;
      uVar10 = (ulong64)(int)uVar11;
      local_78.CurPos = local_58;
      if (local_38 < local_58 + uVar10) {
        TStringBuilderBase<wchar_t>::Extend(&local_78,uVar10);
      }
      if (uVar11 != 0) {
        pvVar9 = memcpy(local_78.CurPos,local_110.DataPtr + iVar4,uVar10 * 2);
        local_78.CurPos = (wchar_t *)(uVar10 * 2 + (longlong)pvVar9);
      }
      if (local_78.End < local_78.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_78,1);
      }
      *local_78.CurPos = L'\0';
      local_118 = _wtoi(local_78.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_78);
      iVar4 = local_118;
    }
  }
LAB_141644446:
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  return iVar4;
}

// GetPathVarDelimiter @ 141644510

wchar_t * __cdecl FGenericPlatformMisc::GetPathVarDelimiter(void)

{
  return L";";
}

// GetPendingActivationProtocol @ 141644520

FString * __cdecl
FGenericPlatformMisc::GetPendingActivationProtocol(FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPlatformChunkInstall @ 141644a30

IPlatformChunkInstall * __cdecl FGenericPlatformMisc::GetPlatformChunkInstall(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FGenericPlatformMisc::GetPlatformChunkInstall'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return (IPlatformChunkInstall *)&::Singleton;
    }
  }
  return (IPlatformChunkInstall *)&::Singleton;
}

// GetPlatformHostCommunication @ 141644ab0

IPlatformHostCommunication * __cdecl FGenericPlatformMisc::GetPlatformHostCommunication(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FGenericPlatformMisc::GetPlatformHostCommunication'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return (IPlatformHostCommunication *)&::Singleton;
    }
  }
  return (IPlatformHostCommunication *)&::Singleton;
}

// GetPlatformUserForUserIndex @ 141644b90

FPlatformUserId __cdecl FGenericPlatformMisc::GetPlatformUserForUserIndex(int param_1)

{
  undefined4 in_register_0000000c;
  undefined4 in_EDX;
  
  *(undefined4 *)CONCAT44(in_register_0000000c,param_1) = in_EDX;
  return (FPlatformUserId)param_1;
}

// GetPreferredLanguages @ 1416457c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FGenericPlatformMisc::GetPreferredLanguages
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FCulture *this;
  code *pcVar2;
  bool bVar3;
  FInternationalization *this_00;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  FString *pFVar5;
  
  this_00 = FInternationalization::Get();
  if ((this_00->CurrentLanguage).Object == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar1 = (this_00->CurrentLanguage).SharedReferenceCount.ReferenceController;
  this = (this_00->CurrentLanguage).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this == (FCulture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar5 = FCulture::GetName(this);
  FInternationalization::GetPrioritizedCultureNames(this_00,__return_storage_ptr__,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetPrimaryGPUBrand @ 141645920

FString * __cdecl FGenericPlatformMisc::GetPrimaryGPUBrand(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"GenericGPUBrand");
  return __return_storage_ptr__;
}

// GetProcessDiagnostics @ 141645980

EProcessDiagnosticFlags __cdecl FGenericPlatformMisc::GetProcessDiagnostics(void)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t wVar4;
  wchar_t *pwVar5;
  EProcessDiagnosticFlags EVar6;
  EProcessDiagnosticFlags EVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pwVar3 = FCommandLine::Get();
    if (pwVar3 == (wchar_t *)0x0) {
      EVar7 = None;
    }
    else {
      wVar4 = *pwVar3;
      pwVar1 = pwVar3;
      while (wVar4 != L'\0') {
        pwVar5 = pwVar1 + 1;
        if (((wchar_t)(wVar4 - (-(ushort)((ushort)wVar4 - 0x61 < 0x1a) & 0x20)) == 0x2d) &&
           (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar5,L"ansimalloc",10), iVar2 == 0)) {
          wVar4 = *pwVar3;
          EVar7 = -(uint)(pwVar1 != (wchar_t *)0x0) & AnsiMalloc;
          EVar6 = EVar7;
          goto LAB_141645a50;
        }
        pwVar1 = pwVar5;
        wVar4 = *pwVar5;
      }
      EVar6 = None;
      EVar7 = None;
      wVar4 = *pwVar3;
      while (wVar4 != L'\0') {
LAB_141645a50:
        pwVar3 = pwVar3 + 1;
        if (((wchar_t)(wVar4 - (-(ushort)((ushort)wVar4 - 0x61 < 0x1a) & 0x20)) == 0x2d) &&
           (iVar2 = FGenericPlatformStricmp::Strnicmp(pwVar3,L"stompmalloc",0xb), iVar2 == 0)) {
          EVar7 = EVar6;
          if (pwVar3 != (wchar_t *)&DAT_00000002) {
            EVar7 = EVar6 | StompMalloc;
          }
          break;
        }
        wVar4 = *pwVar3;
      }
    }
    FoundDiagnostics = EVar7;
    _Init_thread_footer(&::_TSS0);
  }
  return FoundDiagnostics;
}

// GetProcessorGroupDesc @ 141645af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FProcessorGroupDesc * __cdecl FGenericPlatformMisc::GetProcessorGroupDesc(void)

{
  undefined6 uStack_16;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::Desc.ThreadAffinities[0] = ___xmm_ffffffffffffffffffffffffffffffff;
      ::Desc.ThreadAffinities[1] = _UNK_15060db28;
      ::Desc.ThreadAffinities[2] = ___xmm_ffffffffffffffffffffffffffffffff;
      ::Desc.ThreadAffinities[3] = _UNK_15060db28;
      ::Desc.ThreadAffinities[4] = ___xmm_ffffffffffffffffffffffffffffffff;
      ::Desc.ThreadAffinities[5] = _UNK_15060db28;
      ::Desc.ThreadAffinities[6] = ___xmm_ffffffffffffffffffffffffffffffff;
      ::Desc.ThreadAffinities[7] = _UNK_15060db28;
      ::Desc.ThreadAffinities[8] = ___xmm_ffffffffffffffffffffffffffffffff;
      ::Desc.ThreadAffinities[9] = _UNK_15060db28;
      ::Desc.ThreadAffinities[10] = ___xmm_ffffffffffffffffffffffffffffffff;
      ::Desc.ThreadAffinities[0xb] = _UNK_15060db28;
      ::Desc.ThreadAffinities[0xc] = ___xmm_ffffffffffffffffffffffffffffffff;
      ::Desc.ThreadAffinities[0xd] = _UNK_15060db28;
      ::Desc.ThreadAffinities[0xe] = ___xmm_ffffffffffffffffffffffffffffffff;
      ::Desc.ThreadAffinities[0xf] = _UNK_15060db28;
      ::Desc._130_6_ = uStack_16;
      ::Desc.NumProcessorGroups = 1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Desc;
}

// GetSHA256Signature @ 141645e00

bool __cdecl
FGenericPlatformMisc::GetSHA256Signature(void *param_1,uint param_2,FSHA256Signature *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                     ,0x6e8,L"No SHA256 Platform implementation");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  param_3->Signature[0] = '\0';
  param_3->Signature[1] = '\0';
  param_3->Signature[2] = '\0';
  param_3->Signature[3] = '\0';
  param_3->Signature[4] = '\0';
  param_3->Signature[5] = '\0';
  param_3->Signature[6] = '\0';
  param_3->Signature[7] = '\0';
  param_3->Signature[8] = '\0';
  param_3->Signature[9] = '\0';
  param_3->Signature[10] = '\0';
  param_3->Signature[0xb] = '\0';
  param_3->Signature[0xc] = '\0';
  param_3->Signature[0xd] = '\0';
  param_3->Signature[0xe] = '\0';
  param_3->Signature[0xf] = '\0';
  param_3->Signature[0x10] = '\0';
  param_3->Signature[0x11] = '\0';
  param_3->Signature[0x12] = '\0';
  param_3->Signature[0x13] = '\0';
  param_3->Signature[0x14] = '\0';
  param_3->Signature[0x15] = '\0';
  param_3->Signature[0x16] = '\0';
  param_3->Signature[0x17] = '\0';
  param_3->Signature[0x18] = '\0';
  param_3->Signature[0x19] = '\0';
  param_3->Signature[0x1a] = '\0';
  param_3->Signature[0x1b] = '\0';
  param_3->Signature[0x1c] = '\0';
  param_3->Signature[0x1d] = '\0';
  param_3->Signature[0x1e] = '\0';
  param_3->Signature[0x1f] = '\0';
  return false;
}

// GetStoredValue @ 141646380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FGenericPlatformMisc::GetStoredValue
          (FString *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar10;
  wchar_t *pwVar11;
  FConfigSection *this;
  int iVar12;
  undefined1 auStack_1b8 [32];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_198;
  FString local_188;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_178;
  FString local_168;
  FString local_158;
  FConfigFile local_148;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if (((param_1->Data).ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InStoreId.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                         ,0x372,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if (((param_2->Data).ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InSectionName.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                         ,0x373,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if (((param_3->Data).ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InKeyName.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                         ,0x374,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  pFVar8 = ::FString::FString(&local_158,L"KeyValueStore.ini");
  pwVar9 = FWindowsPlatformProcess::ApplicationSettingsDir();
  pTVar10 = &::FString::FString(&local_168,pwVar9)->Data;
  iVar5 = (param_1->Data).ArrayNum;
  iVar12 = 2;
  iVar7 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  if ((pTVar10->ArrayNum != 0) || (iVar5 = 2, iVar7 == -1)) {
    iVar5 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_198,pTVar10,iVar7 + iVar5);
  ::FString::PathAppend
            ((FString *)&local_198,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar7);
  iVar5 = (pFVar8->Data).ArrayNum;
  iVar7 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  if ((local_198.ArrayNum != 0) || (iVar7 == -1)) {
    iVar12 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_178,&local_198,iVar7 + iVar12);
  ::FString::PathAppend
            ((FString *)&local_178,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar7);
  if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AllocatorInstance.Data);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  FConfigFile::FConfigFile(&local_148);
  FConfigFile::Read(&local_148,(FString *)&local_178);
  if ((param_3->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  if ((param_2->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  ::FString::FString(&local_188,pwVar11);
  AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  iVar7 = local_188.Data.ArrayNum + -1;
  FVar2.Data = local_188.Data.AllocatorInstance.Data;
  if (local_188.Data.ArrayNum == 0) {
    iVar7 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar2.Data);
  iVar7 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                      *)&local_148,uVar6,&local_188);
  if (iVar7 == -1) {
    local_148._padding_ = 0;
  }
  else {
    local_148._padding_ = (longlong)iVar7 * 0x110 + local_148._padding_;
  }
  this = (FConfigSection *)(local_148._padding_ + 0x10);
  if (local_148._padding_ == 0) {
    this = (FConfigSection *)0x0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  bVar3 = false;
  if (this != (FConfigSection *)0x0) {
    bVar3 = FConfigSection::GetString(this,pwVar9,param_4);
  }
  FConfigFile::~FConfigFile(&local_148);
  if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.AllocatorInstance.Data);
  }
  return bVar3;
}

// GetSystemErrorMessage @ 141646d40

wchar_t * __cdecl
FGenericPlatformMisc::GetSystemErrorMessage(wchar_t *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if ((param_1 == (wchar_t *)0x0) || (param_2 < 0x51)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutBuffer && BufferCount > 80",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                       ,0x3fb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  wcsncpy(param_1,L"No system errors available on this platform.",(longlong)param_2 - 1);
  param_1[(longlong)param_2 + -1] = L'\0';
  return param_1;
}

// GetSystemFontBytes @ 141646db0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __cdecl
FGenericPlatformMisc::GetSystemFontBytes
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTimeZoneId @ 141647180

FString * __cdecl FGenericPlatformMisc::GetTimeZoneId(FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetUBTArchitecture @ 1416471b0

wchar_t * __cdecl FGenericPlatformMisc::GetUBTArchitecture(void)

{
  return L"x64";
}

// GetUBTPlatform @ 1416471c0

wchar_t * __cdecl FGenericPlatformMisc::GetUBTPlatform(void)

{
  return L"Win64";
}

// GetUBTTarget @ 1416471d0

wchar_t * __cdecl FGenericPlatformMisc::GetUBTTarget(void)

{
  return L"Game";
}

// GetUBTTargetName @ 1416471e0

wchar_t * __cdecl FGenericPlatformMisc::GetUBTTargetName(void)

{
  return u_UnrealGame_154b76d70;
}

// GetUniqueAdvertisingId @ 141647310

FString * __cdecl FGenericPlatformMisc::GetUniqueAdvertisingId(FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetUserIndexForPlatformUser @ 141647370

int __cdecl FGenericPlatformMisc::GetUserIndexForPlatformUser(FPlatformUserId param_1)

{
  return param_1.InternalId;
}

// GetValidTargetPlatforms @ 141647380

/* WARNING: Removing unreachable block (ram,0x000141647463) */

void __cdecl
FGenericPlatformMisc::GetValidTargetPlatforms(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FString local_18;
  
  ::FString::FString(&local_18,"Windows");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  return;
}

// HasNonoptionalCPUFeatures @ 1416474a0

bool __cdecl FGenericPlatformMisc::HasNonoptionalCPUFeatures(void)

{
  return false;
}

// HasSeparateChannelForDebugOutput @ 1416479f0

bool __cdecl FGenericPlatformMisc::HasSeparateChannelForDebugOutput(void)

{
  return true;
}

// IsEnsureAllowed @ 141649d30

bool __cdecl FGenericPlatformMisc::IsEnsureAllowed(void)

{
  uint uVar1;
  
  if (!GenericPlatformMisc::GEnsureSettingsEverUpdated) {
    UpdateHotfixableEnsureSettings();
  }
  uVar1 = rand();
  return (float)(uVar1 & 0x7fff) * __real_38000100 < GenericPlatformMisc::GEnsureChance;
}

// IsLowLevelOutputDebugStringStructured @ 141649fb0

bool __cdecl FGenericPlatformMisc::IsLowLevelOutputDebugStringStructured(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  bVar1 = FCommandLine::IsInitialized();
  if (!bVar1) {
    return false;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar2 = FCommandLine::Get();
      bJsonDebugOutput = FParse::Param(pwVar2,L"JsonDebugOutput");
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bJsonDebugOutput;
}

// IsPGIActive @ 14164a170

bool __cdecl FGenericPlatformMisc::IsPGIActive(void)

{
  return false;
}

// IsPGICapableBinary @ 14164a180

bool __cdecl FGenericPlatformMisc::IsPGICapableBinary(void)

{
  return false;
}

// IsPGOEnabled @ 14164a190

bool __cdecl FGenericPlatformMisc::IsPGOEnabled(void)

{
  return false;
}

// IsRegisteredForRemoteNotifications @ 14164a220

bool __cdecl FGenericPlatformMisc::IsRegisteredForRemoteNotifications(void)

{
  return false;
}

// IsRunningOnBattery @ 14164a230

bool __cdecl FGenericPlatformMisc::IsRunningOnBattery(void)

{
  return false;
}

// LaunchDir @ 14164aca0

wchar_t * __cdecl FGenericPlatformMisc::LaunchDir(void)

{
  FStaticData *pFVar1;
  
  pFVar1 = TLazySingleton<FGenericPlatformMisc::FStaticData>::Get();
  if ((pFVar1->LaunchDir).Data.ArrayNum != 0) {
    return (wchar_t *)(pFVar1->LaunchDir).Data.AllocatorInstance.Data;
  }
  return L"";
}

// LoadTextFileFromPlatformPackage @ 14164c510

FString * __cdecl
FGenericPlatformMisc::LoadTextFileFromPlatformPackage
          (FString *__return_storage_ptr__,FString *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  FPlatformFileManager *this;
  IPlatformFile *pIVar4;
  ForAnyElementType FVar5;
  int iVar6;
  int iVar7;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  pwVar2 = RootDir();
  iVar7 = (param_1->Data).ArrayNum;
  if (iVar7 == 0) {
    iVar7 = 1;
  }
  pTVar3 = &::FString::FString(&local_28,pwVar2)->Data;
  if ((pTVar3->ArrayNum != 0) || (iVar6 = 1, iVar7 == 0)) {
    iVar6 = 0;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_38,pTVar3,iVar6 + iVar7);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar6 = (param_1->Data).ArrayNum;
  iVar7 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar7 = 0;
  }
  ::FString::PathAppend
            ((FString *)&local_38,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar7);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_38.ArrayNum != 0) {
    FVar5.Data = local_38.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  this = FPlatformFileManager::Get();
  pIVar4 = FPlatformFileManager::GetPlatformPhysical(this);
  bVar1 = FFileHelper::LoadFileToString(__return_storage_ptr__,pIVar4,(wchar_t *)FVar5.Data,None,0);
  if (!bVar1) {
    ::FString::Empty(__return_storage_ptr__);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// LocalPrint @ 14164c610

void __cdecl FGenericPlatformMisc::LocalPrint(wchar_t *param_1)

{
  wprintf(L"%s");
  return;
}

// LogNameEventStatsInit @ 14164d020

void __cdecl FGenericPlatformMisc::LogNameEventStatsInit(void)

{
  return;
}

// LowLevelOutputDebugString @ 14164d030

void __cdecl FGenericPlatformMisc::LowLevelOutputDebugString(wchar_t *param_1)

{
  uint uVar1;
  size_t sVar2;
  ForAnyElementType lpOutputString;
  uint uVar3;
  uint uVar4;
  FString FStack_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeSRWLock((PSRWLOCK)&PrivateLock);
      ::Lock = &PrivateLock;
      _Init_thread_footer(&::_TSS0);
    }
  }
  sVar2 = wcslen(param_1);
  if ((int)sVar2 < 0x7fff) {
    AcquireSRWLockShared((PSRWLOCK)::Lock);
    OutputDebugStringW(param_1);
                    /* WARNING: Could not recover jumptable at 0x000141ab55f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared((PSRWLOCK)::Lock);
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)::Lock);
  FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_18.Data.ArrayNum = 0;
  FStack_18.Data.ArrayMax = 0;
  do {
    uVar4 = (uint)sVar2;
    uVar1 = uVar4;
    if (0x7ffe < (int)uVar4) {
      uVar1 = 0x7ffe;
    }
    uVar3 = 0;
    if (0 < (int)uVar1) {
      uVar3 = uVar1;
    }
    ::FString::AssignRange(&FStack_18,param_1,uVar3);
    lpOutputString.Data = (FScriptContainerElement *)L"";
    if (FStack_18.Data.ArrayNum != 0) {
      lpOutputString.Data = FStack_18.Data.AllocatorInstance.Data;
    }
    OutputDebugStringW((LPCWSTR)lpOutputString.Data);
    uVar1 = uVar4;
    if ((int)(uVar4 - 0x7ffe) < (int)uVar4) {
      uVar1 = uVar4 - 0x7ffe;
    }
    uVar3 = 0;
    if (0 < (int)uVar1) {
      uVar3 = uVar1;
    }
    sVar2 = (size_t)uVar3;
    param_1 = param_1 + ((longlong)(int)uVar4 - (longlong)(int)uVar3);
  } while (uVar3 != 0);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)::Lock);
  return;
}

// LowLevelOutputDebugStringf @ 14164d040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FGenericPlatformMisc::LowLevelOutputDebugStringf(wchar_t *param_1)

{
  int iVar1;
  ulong64 *puVar2;
  wchar_t *_Memory;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined1 auStackY_488 [32];
  wchar_t local_458 [512];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_488;
  _Memory = (wchar_t *)0x0;
  lVar3 = 0x200;
  puVar2 = __local_stdio_printf_options();
  pwVar4 = local_458;
  while( true ) {
    iVar1 = __stdio_common_vswprintf(*puVar2);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    if ((-1 < iVar1) && (iVar1 < (int)lVar3 + -1)) break;
    MemoryTrace_Free((ulong64)_Memory,0,0);
    free(_Memory);
    lVar3 = (longlong)((int)lVar3 * 2);
    _Memory = malloc(lVar3 * 2);
    MemoryTrace_Alloc((ulong64)_Memory,lVar3 * 2,0,0,0);
    pwVar4 = _Memory;
    if (_Memory == (wchar_t *)0x0) {
      return;
    }
  }
  pwVar4[iVar1] = L'\0';
  FWindowsPlatformMisc::LocalPrint(pwVar4);
  MemoryTrace_Free((ulong64)_Memory,0,0);
  free(_Memory);
  return;
}

// MemoryBarrier @ 14164dbb0

void __cdecl FGenericPlatformMisc::MemoryBarrier(void)

{
  return;
}

// MessageBoxExt @ 14164dde0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl FGenericPlatformMisc::MessageBoxExt(Type param_1,wchar_t *param_2,wchar_t *param_3)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  if (2 < (byte)LogGenericPlatformMisc._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGenericPlatformMisc);
  }
  LowLevelOutputDebugStringf(L"MessageBox: %s : %s\n");
  switch(param_1) {
  case Ok:
    return Ok;
  case YesNo:
  case YesNoYesAllNoAll:
    return No;
  case OkCancel:
  case YesNoCancel:
  case CancelRetryContinue:
    goto switchD_14164de3f_caseD_2;
  case YesNoYesAllNoAllCancel:
    return Yes;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                       ,0x468,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3 = (*pcVar1)();
      return TVar3;
    }
switchD_14164de3f_caseD_2:
    return Cancel;
  }
}

// NeedsNonoptionalCPUFeaturesCheck @ 14164dff0

bool __cdecl FGenericPlatformMisc::NeedsNonoptionalCPUFeaturesCheck(void)

{
  return false;
}

// NumberOfCores @ 14164e150

int __cdecl FGenericPlatformMisc::NumberOfCores(void)

{
  return 1;
}

// NumberOfCoresIncludingHyperthreads @ 14164e160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl FGenericPlatformMisc::NumberOfCoresIncludingHyperthreads(void)

{
  uint uVar1;
  undefined1 auStackY_f8 [32];
  bool bStack_c8;
  bool abStack_c7 [3];
  uint uStack_c4;
  uint auStack_c0 [3];
  int aiStack_b4 [3];
  FProcessorGroupDesc FStack_a8;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (CoreCount < 1) {
    FStack_a8.NumProcessorGroups = 0;
    auStack_c0[1] = 0;
    auStack_c0[0] = 0;
    FStack_a8.ThreadAffinities[0] = 0;
    FStack_a8.ThreadAffinities[1] = 0;
    uStack_c4 = 0;
    FStack_a8.ThreadAffinities[2] = 0;
    FStack_a8.ThreadAffinities[3] = 0;
    FStack_a8.ThreadAffinities[4] = 0;
    FStack_a8.ThreadAffinities[5] = 0;
    FStack_a8.ThreadAffinities[6] = 0;
    FStack_a8.ThreadAffinities[7] = 0;
    FStack_a8.ThreadAffinities[8] = 0;
    FStack_a8.ThreadAffinities[9] = 0;
    FStack_a8.ThreadAffinities[10] = 0;
    FStack_a8.ThreadAffinities[0xb] = 0;
    FStack_a8.ThreadAffinities[0xc] = 0;
    FStack_a8.ThreadAffinities[0xd] = 0;
    FStack_a8.ThreadAffinities[0xe] = 0;
    FStack_a8.ThreadAffinities[0xf] = 0;
    QueryCpuInformation(&FStack_a8,auStack_c0 + 1,auStack_c0,&uStack_c4,false);
    uVar1 = auStack_c0[0];
    GetConfiguredCoreLimits
              (auStack_c0[0],uStack_c4,abStack_c7,(int *)(auStack_c0 + 2),aiStack_b4,&bStack_c8);
    if (bStack_c8 != false) {
      uVar1 = uStack_c4;
    }
    CoreCount = uVar1;
    if ((0 < (int)auStack_c0[2]) && (CoreCount = auStack_c0[2], (int)uVar1 < (int)auStack_c0[2])) {
      CoreCount = uVar1;
    }
  }
  return CoreCount;
}

// NumberOfIOWorkerThreadsToSpawn @ 14164e170

int __cdecl FGenericPlatformMisc::NumberOfIOWorkerThreadsToSpawn(void)

{
  return 4;
}

// NumberOfWorkerThreadsToSpawn @ 14164e180

int __cdecl FGenericPlatformMisc::NumberOfWorkerThreadsToSpawn(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FWindowsPlatformMisc::NumberOfCores();
  iVar1 = MaxGameThreads;
  if (iVar2 + -1 < MaxGameThreads) {
    iVar1 = iVar2 + -1;
  }
  iVar2 = 2;
  if (2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// ParseChunkIdPakchunkIndexMapping @ 14164fb10

void __cdecl
FGenericPlatformMisc::ParseChunkIdPakchunkIndexMapping
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined1 *puVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [4];
  uint *local_38;
  uint *local_30;
  
  bVar2 = 1 < *(int *)&param_2->field_0x48;
  if (!bVar2) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)param_2);
  }
  *(undefined4 *)&param_2->field_0x8 = 0;
  if (*(int *)&param_2->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
  }
  *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
  *(undefined4 *)&param_2->field_0x34 = 0;
  *(undefined4 *)&param_2->field_0x28 = 0;
  if ((*(int *)&param_2->field_0x2c < 0) || (0x80 < *(int *)&param_2->field_0x2c)) {
    *(undefined4 *)&param_2->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
  }
  if (bVar2) {
    *(undefined4 *)&param_2->field_0x48 = 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               param_2);
  }
  iVar1 = param_1->ArrayNum;
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x10;
  do {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar7 == pFVar6) {
      DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      pFVar7 = (param_1->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      return;
    }
    ::FString::TrimStartAndEndInline((FString *)pFVar7);
    ::FString::ReplaceInline((FString *)pFVar7,L"(",L"",IgnoreCase);
    ::FString::ReplaceInline((FString *)pFVar7,L")",L"",IgnoreCase);
    local_res10[0] = 0xffffffff;
    local_res18[0] = 0xffffffff;
    if (*(int *)(pFVar7 + 8) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)&pFVar7->field_0x0;
    }
    FParse::Value(pwVar4,L"Old=",(int *)local_res10);
    if (*(int *)(pFVar7 + 8) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)&pFVar7->field_0x0;
    }
    FParse::Value(pwVar4,L"New=",(int *)local_res18);
    if (((local_res10[0] != 0xffffffff) && (local_res18[0] != 0xffffffff)) &&
       (local_res10[0] != local_res18[0])) {
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar5 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar3 = *(int *)(puVar5 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & local_res10[0]) *
                                  4);
        if (iVar3 != -1) {
          do {
            if (*(uint *)(*(longlong *)param_2 + (longlong)iVar3 * 0x10) == local_res10[0])
            goto LAB_14164fcf7;
            iVar3 = *(int *)(*(longlong *)param_2 + 8 + (longlong)iVar3 * 0x10);
          } while (iVar3 != -1);
        }
      }
      local_38 = local_res10;
      local_30 = local_res18;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)param_2,(TPairInitializer<int_const_&,int_const_&> *)(local_res18 + 2),
                 (bool *)&local_38);
    }
LAB_14164fcf7:
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// PlatformPreInit @ 141650330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __cdecl FGenericPlatformMisc::PlatformPreInit(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FCulture *this;
  code *pcVar4;
  EBuildConfiguration EVar5;
  bool bVar6;
  FEngineVersion *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  FInternationalization *pFVar10;
  FTSTicker *this_00;
  undefined8 *puVar11;
  ulong64 uVar12;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_01;
  uint uVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  undefined1 auStackY_4c8 [32];
  FString FStack_490;
  undefined1 auStack_480 [8];
  FDelegateAllocation FStack_478;
  FString FStack_468;
  FString FStack_458;
  FString FStack_448;
  FString FStack_438;
  FGuid FStack_428;
  FString FStack_418;
  FString FStack_408;
  FString FStack_3f8;
  FString FStack_3e8;
  FString FStack_3d8;
  FString FStack_3c8;
  FString FStack_3b8;
  FString FStack_3a8;
  FString FStack_398;
  FString FStack_388;
  FString FStack_378;
  FDestructionSentinel FStack_368;
  FDestructionSentinel FStack_350;
  FDelegateAllocation *pFStack_338;
  <lambda_1> a<Stack_330 [8];
  <lambda_3> a<Stack_328 [8];
  <lambda_4> a<Stack_320 [8];
  <lambda_5> a<Stack_318 [8];
  <lambda_6> a<Stack_310 [8];
  <lambda_7> a<Stack_308 [8];
  <lambda_8> a<Stack_300 [8];
  undefined1 auStack_2f8 [8];
  FString FStack_2f0;
  FString FStack_2e0;
  FString FStack_2d0;
  FString FStack_2c0;
  FString FStack_2b0;
  FString FStack_2a0;
  FString FStack_290;
  FString FStack_280;
  TWeakPtr<FTSTicker::FElement,1> TStack_270;
  <lambda_9> a<Stack_260 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  NCached::Session.bIsInternalBuild = FEngineBuildSettings::IsInternalBuild();
  NCached::Session.bIsPerforceBuild = FEngineBuildSettings::IsPerforceBuild();
  NCached::Session.bWithDebugInfo = FApp::GetIsWithDebugInfo();
  NCached::Session.bIsSourceDistribution = FEngineBuildSettings::IsSourceDistribution();
  NCached::Session.ProcessId = FWindowsPlatformProcess::GetCurrentProcessId();
  pFVar7 = FEngineVersion::Current();
  pFVar8 = FEngineVersion::ToString(pFVar7,&FStack_2f0,Branch);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.EngineVersion,pwVar9,0x3f);
  NCached::Session.EngineVersion[0x3f] = L'\0';
  if (FStack_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2f0.Data.AllocatorInstance.Data);
  }
  pFVar7 = FEngineVersion::Current();
  pFVar8 = FEngineVersion::ToString(pFVar7,&FStack_2e0,Branch);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.EngineCompatibleVersion,pwVar9,0x3f);
  NCached::Session.EngineCompatibleVersion[0x3f] = L'\0';
  if (FStack_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e0.Data.AllocatorInstance.Data);
  }
  pwVar9 = FApp::GetBuildVersion();
  wcsncpy(NCached::Session.BuildVersion,pwVar9,0x3f);
  NCached::Session.BuildVersion[0x3f] = L'\0';
  ::FString::PrintfImpl(&FStack_408,L"UE-%s");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (FStack_408.Data.ArrayNum != 0) {
    FVar15.Data = FStack_408.Data.AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.GameName,(wchar_t *)FVar15.Data,0x3f);
  NCached::Session.GameName[0x3f] = L'\0';
  if (FStack_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_408.Data.AllocatorInstance.Data);
  }
  wcsncpy(NCached::Session.GameSessionID,L"",0x3f);
  NCached::Session.GameSessionID[0x3f] = L'\0';
  wcsncpy(NCached::Session.GameStateName,L"",0x3f);
  NCached::Session.GameStateName[0x3f] = L'\0';
  wcsncpy(NCached::Session.UserActivityHint,L"",0x3f);
  NCached::Session.UserActivityHint[0x3f] = L'\0';
  EVar5 = FApp::GetBuildConfiguration();
  pwVar9 = L"Unknown";
  if (EVar5 == Debug) {
    pwVar14 = L"Debug";
  }
  else if (EVar5 == DebugGame) {
    pwVar14 = L"DebugGame";
  }
  else if (EVar5 == Development) {
    pwVar14 = L"Development";
  }
  else if (EVar5 == Shipping) {
    pwVar14 = L"Shipping";
  }
  else if (EVar5 == Test) {
    pwVar14 = L"Test";
  }
  else {
    pwVar14 = L"Unknown";
  }
  wcsncpy(NCached::Session.BuildConfigurationName,pwVar14,0x3f);
  NCached::Session.BuildConfigurationName[0x3f] = L'\0';
  pwVar14 = FWindowsPlatformProcess::ExecutableName(true);
  wcsncpy(NCached::Session.ExecutableName,pwVar14,0x3f);
  NCached::Session.ExecutableName[0x3f] = L'\0';
  pwVar14 = FWindowsPlatformProcess::BaseDir();
  wcsncpy(NCached::Session.BaseDir,pwVar14,0xff);
  NCached::Session.BaseDir[0xff] = L'\0';
  pwVar14 = RootDir();
  wcsncpy(NCached::Session.RootDir,pwVar14,0xff);
  NCached::Session.RootDir[0xff] = L'\0';
  FStack_468.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_468.Data.ArrayNum = 0;
  FStack_468.Data.ArrayMax = 0;
  ::FString::FString(&FStack_3c8,L"AccountId");
  ::FString::FString(&FStack_3d8,L"Unreal Engine/Identifiers");
  ::FString::FString(&FStack_3e8,L"Epic Games");
  FWindowsPlatformMisc::GetStoredValue(&FStack_3e8,&FStack_3d8,&FStack_3c8,&FStack_468);
  if (FStack_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3e8.Data.AllocatorInstance.Data);
  }
  if (FStack_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3d8.Data.AllocatorInstance.Data);
  }
  if (FStack_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3c8.Data.AllocatorInstance.Data);
  }
  FVar15.Data = (FScriptContainerElement *)L"";
  if (FStack_468.Data.ArrayNum != 0) {
    FVar15.Data = FStack_468.Data.AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.EpicAccountId,(wchar_t *)FVar15.Data,0x3f);
  NCached::Session.EpicAccountId[0x3f] = L'\0';
  if (FStack_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_468.Data.AllocatorInstance.Data);
  }
  GetMachineId(&FStack_428);
  if (((FStack_428.C == 0 && FStack_428.A == 0) && FStack_428.D == 0) && FStack_428.B == 0) {
    FStack_458.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_458.Data.ArrayNum = 0;
    FStack_458.Data.ArrayMax = 0;
  }
  else {
    FStack_418.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_418.Data.ArrayNum = 0;
    FStack_418.Data.ArrayMax = 0;
    FGuid::AppendString(&FStack_428,&FStack_418,Digits);
    ::FString::ToLower(&FStack_418,&FStack_458);
    if (FStack_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_418.Data.AllocatorInstance.Data);
    }
    FVar15.Data = FStack_458.Data.AllocatorInstance.Data;
    if (FStack_458.Data.ArrayNum != 0) goto LAB_141648143;
  }
  FVar15.Data = (FScriptContainerElement *)L"";
LAB_141648143:
  wcsncpy(NCached::Session.LoginIdStr,(wchar_t *)FVar15.Data,0x3f);
  NCached::Session.LoginIdStr[0x3f] = L'\0';
  if (FStack_458.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_458.Data.AllocatorInstance.Data);
  }
  FApp::GetBuildVersion();
  ::FString::PrintfImpl(&FStack_490,L"%s");
  ::FString::PrintfImpl(&FStack_3b8,L"%s-%s-%s");
  pFVar8 = ::FString::Replace(&FStack_3b8,&FStack_2d0,L"+",L"*",IgnoreCase);
  if (&FStack_490 != pFVar8) {
    if (FStack_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_490.Data.AllocatorInstance.Data);
    }
    FStack_490.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_490.Data.ArrayNum = (pFVar8->Data).ArrayNum;
    FStack_490.Data.ArrayMax = (pFVar8->Data).ArrayMax;
    (pFVar8->Data).ArrayNum = 0;
    (pFVar8->Data).ArrayMax = 0;
  }
  if (FStack_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2d0.Data.AllocatorInstance.Data);
  }
  if (FStack_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3b8.Data.AllocatorInstance.Data);
  }
  FVar15.Data = (FScriptContainerElement *)L"";
  if (FStack_490.Data.ArrayNum != 0) {
    FVar15.Data = FStack_490.Data.AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.SymbolsLabel,(wchar_t *)FVar15.Data,0x7f);
  NCached::Session.SymbolsLabel[0x7f] = L'\0';
  uVar13 = FStack_490.Data.ArrayNum - 1;
  if (FStack_490.Data.ArrayNum == 0) {
    uVar13 = 0;
  }
  if ((0x7f < uVar13) && (1 < (byte)LogInit._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  FStack_438.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_438.Data.ArrayNum = 0;
  FStack_438.Data.ArrayMax = 0;
  FStack_448.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_448.Data.ArrayNum = 0;
  FStack_448.Data.ArrayMax = 0;
  FWindowsPlatformMisc::GetOSVersions(&FStack_438,&FStack_448);
  FVar15.Data = (FScriptContainerElement *)L"";
  if (FStack_438.Data.ArrayNum != 0) {
    FVar15.Data = FStack_438.Data.AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.OsVersion,(wchar_t *)FVar15.Data,0x3f);
  NCached::Session.OsVersion[0x3f] = L'\0';
  FVar15.Data = (FScriptContainerElement *)L"";
  if (FStack_448.Data.ArrayNum != 0) {
    FVar15.Data = FStack_448.Data.AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.OsSubVersion,(wchar_t *)FVar15.Data,0x3f);
  NCached::Session.OsSubVersion[0x3f] = L'\0';
  NCached::Session.NumberOfCores = FWindowsPlatformMisc::NumberOfCores();
  NCached::Session.NumberOfCoresIncludingHyperthreads =
       FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  pFVar8 = FWindowsPlatformMisc::GetCPUVendor(&FStack_2c0);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.CPUVendor,pwVar14,0x3f);
  NCached::Session.CPUVendor[0x3f] = L'\0';
  if (FStack_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2c0.Data.AllocatorInstance.Data);
  }
  pFVar8 = FWindowsPlatformMisc::GetCPUBrand(&FStack_2b0);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.CPUBrand,pwVar14,0x3f);
  NCached::Session.CPUBrand[0x3f] = L'\0';
  if (FStack_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b0.Data.AllocatorInstance.Data);
  }
  NCached::Session.CPUModelID = FWindowsPlatformMisc::GetCPUModelID();
  NCached::Session.CPUMicrocodeRevision = FWindowsPlatformMisc::GetCPUMicrocodeRevision();
  pFVar8 = FWindowsPlatformMisc::GetPrimaryGPUBrand(&FStack_2a0);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.PrimaryGPUBrand,pwVar14,0x3f);
  NCached::Session.PrimaryGPUBrand[0x3f] = L'\0';
  if (FStack_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a0.Data.AllocatorInstance.Data);
  }
  pwVar14 = FWindowsPlatformProcess::UserName(true);
  wcsncpy(NCached::Session.UserName,pwVar14,0x3f);
  NCached::Session.UserName[0x3f] = L'\0';
  pFVar8 = FWindowsPlatformMisc::GetDefaultLocale(&FStack_290);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  wcsncpy(NCached::Session.DefaultLocale,pwVar14,0x3f);
  NCached::Session.DefaultLocale[0x3f] = L'\0';
  if (FStack_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_290.Data.AllocatorInstance.Data);
  }
  TStack_258._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&TStack_258,"Windows",7,Yes);
  wcsncpy(NCached::Session.PlatformName,TStack_258.Ptr,0x3f);
  NCached::Session.PlatformName[0x3f] = L'\0';
  if ((void *)TStack_258._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_258._padding_);
  }
  TStack_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&TStack_138,"Windows",7,Yes);
  wcsncpy(NCached::Session.PlatformNameIni,TStack_138.Ptr,0x3f);
  NCached::Session.PlatformNameIni[0x3f] = L'\0';
  if ((void *)TStack_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_138._padding_);
  }
  wcsncpy(NCached::Session.AttendedStatus,L"Unknown",0x3f);
  NCached::Session.AttendedStatus[0x3f] = L'\0';
  bVar6 = FCommandLine::IsInitialized();
  if (bVar6) {
    NCached::Session.bIsUERelease = FApp::IsEngineInstalled();
    bVar6 = FCommandLine::IsInitialized();
    if (bVar6) {
      pwVar14 = FCommandLine::GetOriginalForLogging();
    }
    else {
      pwVar14 = L"";
    }
    wcsncpy(NCached::Session.CommandLine,pwVar14,0x3ff);
    pwVar14 = L"Commandlet";
    NCached::Session.CommandLine[0x3ff] = L'\0';
    if (PRIVATE_GIsRunningCommandlet == false) {
      pwVar14 = L"Game";
    }
    wcsncpy(NCached::Session.EngineMode,pwVar14,0x3f);
    NCached::Session.EngineMode[0x3f] = L'\0';
    wcsncpy(NCached::Session.EngineModeEx,L"Unset",0x3f);
    NCached::Session.EngineModeEx[0x3f] = L'\0';
    pFVar8 = FGenericPlatformOutputDevices::GetAbsoluteLogFilename(&FStack_280);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    wcsncpy(NCached::UserSettings.LogFilePath,pwVar14,0xff);
    NCached::UserSettings.LogFilePath[0xff] = L'\0';
    if (FStack_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_280.Data.AllocatorInstance.Data);
    }
    pwVar14 = FCommandLine::Get();
    FParse::Value(pwVar14,L"EPICAPP=",NCached::Session.DeploymentName,0x40,true,(wchar_t **)0x0);
    NCached::Session.CrashDumpMode = 0;
    bVar6 = FCommandLine::IsInitialized();
    if (bVar6) {
      pwVar14 = FCommandLine::Get();
      bVar6 = FParse::Param(pwVar14,L"fullcrashdumpalways");
      if (bVar6) {
        NCached::Session.CrashDumpMode = 2;
      }
      else {
        bVar6 = FParse::Param(pwVar14,L"fullcrashdump");
        if (bVar6) {
          NCached::Session.CrashDumpMode = 1;
        }
      }
    }
    NCached::UserSettings.bNoDialog = FApp::IsUnattended();
    uVar13 = (uint)NCached::UserSettings.bNoDialog;
    if (uVar13 != 0xffffffff) {
      if (uVar13 == 0) {
        pwVar9 = L"Attended";
      }
      else if (uVar13 == 1) {
        pwVar9 = L"Unattended";
      }
    }
    wcsncpy(NCached::Session.AttendedStatus,pwVar9,0x3f);
    NCached::Session.AttendedStatus[0x3f] = L'\0';
  }
  FGenericCrashContext::GenerateNewCrashGuidBase(&FStack_3f8);
  if (4 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  bVar6 = FInternationalization::IsAvailable();
  if (bVar6) {
    pFVar10 = FInternationalization::Get();
    if (((pFVar10->CurrentLanguage).Object == (FCulture *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar3 = (pFVar10->CurrentLanguage).SharedReferenceCount.ReferenceController;
    this = (pFVar10->CurrentLanguage).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this == (FCulture *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    NCached::Session.LanguageLCID = FCulture::GetLCID(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddLambda<_FGenericCrashContext::Initialize_::__l57::<lambda_1>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pFVar10->CultureChangedEvent,a<Stack_330);
  }
  this_00 = FTSTicker::GetCoreTicker();
  auStack_480 = (undefined1  [8])0x0;
  FStack_478.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  FStack_478.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_480,
             (FWriteAccessScope *)&FStack_350);
  pFStack_338 = &FStack_478;
  puVar11 = UE::Core::Private::DelegateAllocate(0x20,&FStack_478);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &TBaseFunctorDelegateInstance<bool___cdecl(float),FDefaultDelegateUserPolicy,`FGenericCrashContext::Initialize'::`2'::<lambda_2>_>
                ::_vftable_;
  }
  if (FStack_350.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_350.Accessor,&FStack_350);
  }
  FTSTicker::AddTicker
            (this_00,&TStack_270,
             (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)auStack_480,
             __real_3f800000);
  if (TStack_270.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(TStack_270.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((TStack_270.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (TStack_270.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_480,
             (FWriteAccessScope *)&FStack_368);
  if ((FStack_478.DelegateSize != 0) &&
     (FStack_478.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)FStack_478.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_478,0,0,0x10);
    FStack_478.DelegateSize = 0;
  }
  if (FStack_368.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_368.Accessor,&FStack_368);
  }
  if (FStack_478.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)FStack_478.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_480);
  TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
  AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_3>_>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::UserActivityStringChanged,a<Stack_328);
  TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
  AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_4>_>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::GameSessionIDChanged,a<Stack_320);
  TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
  AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_5>_>
            ((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::GameStateClassChanged,a<Stack_318);
  TMulticastDelegateRegistration<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy>
  ::AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_6>_>
            ((TMulticastDelegateRegistration<void___cdecl(FCrashOverrideParameters_const_&),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::CrashOverrideParamsChanged,a<Stack_310);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_7>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,a<Stack_308);
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_8>_>
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::IsVanillaProductChanged,a<Stack_300);
  this_01 = FCoreDelegates::TSConfigReadyForUse();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             this_01,(_func___cdecl_void *)auStack_2f8);
  TMulticastDelegateRegistration<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy>::
  AddLambda<_FGenericCrashContext::Initialize_::__l2::<lambda_9>_>
            (&FCoreDelegates::OnPostFork,a<Stack_260);
  pwVar9 = FApp::GetBuildURL();
  if (pwVar9 != (wchar_t *)0x0) {
    ::FString::FString(&FStack_398,pwVar9);
    ::FString::FString(&FStack_3a8,L"BuildURL");
    FGenericCrashContext::SetEngineData(&FStack_3a8,&FStack_398);
    if (FStack_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3a8.Data.AllocatorInstance.Data);
    }
    if (FStack_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_398.Data.AllocatorInstance.Data);
    }
  }
  pwVar9 = FApp::GetExecutingJobURL();
  if (pwVar9 != (wchar_t *)0x0) {
    ::FString::FString(&FStack_378,pwVar9);
    ::FString::FString(&FStack_388,L"ExecutingJobURL");
    FGenericCrashContext::SetEngineData(&FStack_388,&FStack_378);
    if (FStack_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_388.Data.AllocatorInstance.Data);
    }
    if (FStack_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_378.Data.AllocatorInstance.Data);
    }
  }
  FGenericCrashContext::SerializeTempCrashContextToFile();
  FGenericCrashContext::CleanupPlatformSpecificFiles();
  FGenericCrashContext::bIsInitialized = true;
  if (FStack_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3f8.Data.AllocatorInstance.Data);
  }
  if (FStack_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_448.Data.AllocatorInstance.Data);
  }
  if (FStack_438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_438.Data.AllocatorInstance.Data);
  }
  if (FStack_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_490.Data.AllocatorInstance.Data);
  }
  return;
}

// ProjectDir @ 141651770

wchar_t * __cdecl FGenericPlatformMisc::ProjectDir(void)

{
  FString *this;
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  FStaticData *pFVar5;
  FString *pFVar6;
  int iVar7;
  wchar_t wVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar5 = TLazySingleton<FGenericPlatformMisc::FStaticData>::Get();
  this = &pFVar5->ProjectDir;
  FPaths::IsStaged();
  if ((GConfig == (FConfigCacheIni *)0x0) || (GConfig->bIsReadyForUse == false)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bWasIniReady != bVar2) {
    ::FString::Reset(this,0);
    bWasIniReady = bVar2;
  }
  if ((bWasProjectFilePathReady == false) && (bVar2 = FPaths::IsProjectFilePathSet(), bVar2)) {
    ::FString::Reset(this,0);
    bWasProjectFilePathReady = true;
  }
  iVar3 = (pFVar5->ProjectDir).Data.ArrayNum;
  iVar7 = 0;
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = iVar7;
  }
  if (iVar4 == 0) {
    iVar3 = FWindowsPlatformMisc::GetMaxPathLength();
    ::FString::Reserve(this,iVar3);
    iVar3 = GOverrideProjectDir.Data.ArrayNum + -1;
    if (GOverrideProjectDir.Data.ArrayNum == 0) {
      iVar3 = iVar7;
    }
    ::FString::AssignRange(this,(wchar_t *)GOverrideProjectDir.Data.AllocatorInstance.Data,iVar3);
  }
  iVar3 = (pFVar5->ProjectDir).Data.ArrayNum;
  pwVar14 = L"";
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  if (iVar4 != 0) goto LAB_141651d6f;
  iVar3 = FWindowsPlatformMisc::GetMaxPathLength();
  ::FString::Reserve(this,iVar3);
  bVar2 = FPaths::IsProjectFilePathSet();
  if (bVar2) {
    pFVar6 = FPaths::GetProjectFilePath(&local_38);
    FPaths::GetPath(&local_98,pFVar6);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FPaths::NormalizeFilename(&local_98);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_98.Data.ArrayNum != 0) {
      FVar9.Data = local_98.Data.AllocatorInstance.Data;
    }
    pFVar6 = FFileManagerGeneric::DefaultConvertToRelativePath(&local_38,(wchar_t *)FVar9.Data);
    if (&local_98 != pFVar6) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_98.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_58,"/");
    iVar3 = local_58.Data.ArrayNum + -1;
    FVar9.Data = local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.ArrayNum == 0) {
      iVar3 = iVar7;
      FVar9.Data = (FScriptContainerElement *)L"";
    }
    bVar2 = ::FString::EndsWith(&local_98,(wchar_t *)FVar9.Data,iVar3,IgnoreCase);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (!bVar2) {
      ::FString::AppendChars(&local_98,L"/",1);
    }
    iVar3 = local_98.Data.ArrayNum + -1;
    if (local_98.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AssignRange(this,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar3);
    local_68.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
  }
  else if (GInternalProjectName[0] == L'\0') {
LAB_141651ce4:
    pFVar6 = FPaths::EngineUserDir(&local_38);
    ::FString::operator=(this,pFVar6);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FPaths::NormalizeFilename(this);
    if ((pFVar5->ProjectDir).Data.ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(this->Data).AllocatorInstance.Data;
    }
    pFVar6 = FFileManagerGeneric::DefaultConvertToRelativePath(&local_38,pwVar12);
    ::FString::operator=(this,pFVar6);
    local_68.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  }
  else {
    pwVar13 = L"None";
    pwVar12 = GInternalProjectName;
    wVar8 = GInternalProjectName[0];
    while( true ) {
      while( true ) {
        wVar1 = *pwVar13;
        pwVar12 = pwVar12 + 1;
        pwVar13 = pwVar13 + 1;
        if (wVar8 != wVar1) break;
        if (wVar8 == L'\0') goto LAB_141651ce4;
        wVar8 = *pwVar12;
      }
      if (((wVar1 | wVar8) & 0xff80U) != 0) break;
      if (""[(ushort)wVar8] != ""[(ushort)wVar1]) goto LAB_1416519f4;
      wVar8 = *pwVar12;
    }
    if (wVar8 == wVar1) goto LAB_141651ce4;
LAB_1416519f4:
    ::FString::operator=(this,L"../../");
    pwVar12 = FWindowsPlatformProcess::BaseDir();
    ::FString::FString(&local_68,pwVar12);
    FPaths::RootDir(&local_38);
    FVar9.Data = local_38.Data.AllocatorInstance.Data;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = local_38.Data.ArrayNum;
    if (local_38.Data.ArrayNum == 0) {
      local_78.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_38.Data.ArrayNum,
                 &local_78.Data.ArrayMax);
      memcpy(local_78.Data.AllocatorInstance.Data,FVar9.Data,(longlong)local_38.Data.ArrayNum * 2);
    }
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar9.Data = local_68.Data.AllocatorInstance.Data;
    }
    FPaths::MakePathRelativeTo(&local_78,(wchar_t *)FVar9.Data);
    FVar9.Data = local_68.Data.AllocatorInstance.Data;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = local_68.Data.ArrayNum;
    uVar11 = (8 - (uint)(local_68.Data.ArrayNum != 0)) + local_68.Data.ArrayNum;
    if ((int)uVar11 < local_68.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar11,0,(ForAnyElementType *)&local_a8,local_68.Data.ArrayNum,
               &local_a8.Data.ArrayMax);
    if (local_68.Data.ArrayNum != 0) {
      memcpy(local_a8.Data.AllocatorInstance.Data,FVar9.Data,(longlong)local_68.Data.ArrayNum * 2);
    }
    ::FString::PathAppend(&local_a8,L"../../",6);
    FPaths::CollapseRelativeDirectories(&local_a8,false);
    pFVar6 = FPaths::RootDir(&local_88);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    FPaths::MakePathRelativeTo(&local_a8,pwVar12);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    FVar9.Data = local_78.Data.AllocatorInstance.Data;
    iVar3 = local_a8.Data.ArrayNum + -1;
    if (local_a8.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    iVar4 = iVar3 + 1;
    if ((local_78.Data.ArrayNum == 0) && (iVar4 != 0)) {
      iVar4 = iVar3 + 2;
LAB_141651b71:
      local_88.Data.ArrayNum = local_78.Data.ArrayNum;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar4 != 0) goto LAB_141651b7b;
      local_88.Data.ArrayMax = 0;
    }
    else {
      if (local_78.Data.ArrayNum == 0) goto LAB_141651b71;
LAB_141651b7b:
      local_88.Data.ArrayNum = local_78.Data.ArrayNum;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar11 = iVar4 + local_78.Data.ArrayNum;
      if ((int)uVar11 < local_78.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar11,0,(ForAnyElementType *)&local_88,local_78.Data.ArrayNum,
                 &local_88.Data.ArrayMax);
      if (local_78.Data.ArrayNum != 0) {
        memcpy(local_88.Data.AllocatorInstance.Data,FVar9.Data,(longlong)local_78.Data.ArrayNum * 2)
        ;
      }
    }
    ::FString::PathAppend(&local_88,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar3);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_a8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    local_a8.Data.ArrayNum = local_88.Data.ArrayNum;
    local_a8.Data.ArrayMax = local_88.Data.ArrayMax;
    bVar2 = ::FString::EndsWith(&local_a8,L"/",1,IgnoreCase);
    if (!bVar2) {
      ::FString::AppendChars(&local_a8,L"/",1);
    }
    FPaths::ConvertRelativePathToFull(&local_58,&local_a8);
    FPaths::ConvertRelativePathToFull(&local_48,this);
    FVar10.Data = local_48.Data.AllocatorInstance.Data;
    FVar9.Data = local_58.Data.AllocatorInstance.Data;
    if (local_58.Data.ArrayNum == local_48.Data.ArrayNum) {
      if (1 < local_58.Data.ArrayNum) {
        iVar3 = StricmpImpl<wchar_t,wchar_t>
                          ((wchar_t *)local_58.Data.AllocatorInstance.Data,
                           (wchar_t *)local_48.Data.AllocatorInstance.Data);
        bVar2 = iVar3 == 0;
        goto LAB_141651c6e;
      }
LAB_141651c75:
      iVar3 = local_a8.Data.ArrayNum + -1;
      if (local_a8.Data.ArrayNum == 0) {
        iVar3 = iVar7;
      }
      ::FString::AssignRange(this,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar3);
      FVar10.Data = local_48.Data.AllocatorInstance.Data;
      FVar9.Data = local_58.Data.AllocatorInstance.Data;
    }
    else {
      bVar2 = local_58.Data.ArrayNum + local_48.Data.ArrayNum == 1;
LAB_141651c6e:
      if (bVar2) goto LAB_141651c75;
    }
    if (FVar10.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar10.Data);
      FVar9.Data = local_58.Data.AllocatorInstance.Data;
    }
    if (FVar9.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar9.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  bVar2 = ::FString::EndsWith(this,L"/",1,IgnoreCase);
  if (!bVar2) {
    ::FString::AppendChars(this,L"/",1);
  }
LAB_141651d6f:
  if ((pFVar5->ProjectDir).Data.ArrayNum != 0) {
    pwVar14 = (wchar_t *)(this->Data).AllocatorInstance.Data;
  }
  return (wchar_t *)(FScriptContainerElement *)pwVar14;
}

// RaiseException @ 141652250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FGenericPlatformMisc::RaiseException(uint param_1)

{
  FPlatformMemoryStats *pFVar1;
  FPlatformMemoryStats local_98;
  
  pFVar1 = FWindowsPlatformMemory::GetStats(&local_98);
  NCached::Session.MemoryStats._padding_ = pFVar1->_padding_;
  NCached::Session.MemoryStats._padding_ = pFVar1->_padding_;
  NCached::Session.MemoryStats._padding_ = pFVar1->_padding_;
  NCached::Session.MemoryStats._padding_ = pFVar1->_padding_;
  NCached::Session.MemoryStats._padding_ = pFVar1->_padding_;
  NCached::Session.MemoryStats._padding_ = pFVar1->_padding_;
  NCached::Session.MemoryStats._padding_ = pFVar1->_padding_;
  NCached::Session.MemoryStats._padding_ = pFVar1->_padding_;
  NCached::Session.MemoryStats._padding_ = pFVar1->_padding_;
  NCached::Session.MemoryStats._padding_ = pFVar1->_padding_;
  NCached::Session.MemoryStats._padding_ = pFVar1->_padding_;
  NCached::Session.MemoryStats._padding_ = pFVar1->_padding_;
  NCached::Session.MemoryStats._padding_ = pFVar1->_padding_;
  NCached::Session.MemoryStats._padding_ = pFVar1->_padding_;
  NCached::Session.MemoryStats._padding_ = pFVar1->_padding_;
  NCached::Session.MemoryStats.WindowsSpecificMemoryStat = pFVar1->WindowsSpecificMemoryStat;
  NCached::Session.MemoryStats.MemoryPressureStatus = pFVar1->MemoryPressureStatus;
  NCached::Session.MemoryStats._129_7_ = *(undefined7 *)&pFVar1->field_0x81;
  NCached::Session.bIsOOM = FGenericPlatformMemory::bIsOOM;
  NCached::Session.OOMAllocationSize = FGenericPlatformMemory::OOMAllocationSize;
  NCached::Session.OOMAllocationAlignment = FGenericPlatformMemory::OOMAllocationAlignment;
  FGenericCrashContext::SerializeTempCrashContextToFile();
  _DAT_00000003 = param_1;
  return;
}

// RegisterForRemoteNotifications @ 141654630

void __cdecl FGenericPlatformMisc::RegisterForRemoteNotifications(void)

{
  return;
}

// RemoveNetworkListener @ 141657a60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericPlatformMisc::RemoveNetworkListener(FDelegateHandle param_1)

{
  if (2 < (byte)LogGenericPlatformMisc._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGenericPlatformMisc);
  }
  return false;
}

// RequestDeviceCheckToken @ 141657c70

bool __cdecl
FGenericPlatformMisc::RequestDeviceCheckToken
          (TFunction<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const_&)>
           *param_1,TFunction<void___cdecl(FString_const_&,FString_const_&)> *param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)param_1 != 0) {
    plVar1 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar1 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return false;
}

// RequestExit @ 141657cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericPlatformMisc::RequestExit(bool param_1,wchar_t *param_2)

{
  if (4 < (byte)LogGenericPlatformMisc._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGenericPlatformMisc);
  }
  if (param_1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  RequestEngineExit(L"GenericPlatform RequestExit");
  return;
}

// RequestExitWithStatus @ 141657d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FGenericPlatformMisc::RequestExitWithStatus(bool param_1,uchar param_2,wchar_t *param_3)

{
  if (2 < (byte)LogGenericPlatformMisc._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGenericPlatformMisc);
  }
  FWindowsPlatformMisc::RequestExit(param_1,param_3);
  return;
}

// RestartApplication @ 141658ee0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericPlatformMisc::RestartApplication(void)

{
  if (3 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  return false;
}

// RestartApplicationWithCmdLine @ 141658f10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericPlatformMisc::RestartApplicationWithCmdLine(char *param_1)

{
  if (3 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  return false;
}

// RootDir @ 141659040

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

wchar_t * __cdecl FGenericPlatformMisc::RootDir(void)

{
  ushort uVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FStaticData *pFVar9;
  wchar_t *pwVar10;
  size_t sVar11;
  FStaticData *pFVar12;
  int iVar13;
  ForAnyElementType FVar14;
  ForAnyElementType FVar15;
  bool bVar16;
  ushort *puVar17;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar16 = false;
  pFVar9 = TLazySingleton<FGenericPlatformMisc::FStaticData>::Get();
  iVar13 = (pFVar9->RootDir).Data.ArrayNum;
  iVar5 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) goto LAB_141659502;
  FPaths::EngineDir(&local_68);
  iVar5 = ::FString::Find(&local_68,L"/Engine",7,IgnoreCase,FromEnd,-1);
  iVar13 = 0;
  if (iVar5 == -1) {
    pwVar10 = FWindowsPlatformProcess::BaseDir();
    ::FString::operator=(&local_68,pwVar10);
    iVar5 = local_68.Data.ArrayNum + -1;
    FVar14.Data = local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.ArrayNum == 0) {
      iVar5 = iVar13;
      FVar14.Data = (FScriptContainerElement *)L"";
    }
    iVar7 = iVar5;
    if (1 < iVar5) {
      iVar7 = 1;
    }
    iVar6 = iVar13;
    if (0 < iVar7) {
      iVar6 = iVar7;
    }
    ::FString::FString(&local_58,(wchar_t *)(FVar14.Data + ((longlong)iVar5 - (longlong)iVar6) * 2))
    ;
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar14.Data = local_58.Data.AllocatorInstance.Data;
    }
    puVar17 = (ushort *)&u__;
    do {
      while( true ) {
        uVar1 = *(ushort *)(FVar14.Data + -0x15063ed88 + (longlong)puVar17);
        uVar2 = *puVar17;
        puVar17 = puVar17 + 1;
        iVar5 = 0;
        if (uVar1 != uVar2) break;
        iVar7 = iVar5;
        if (uVar1 == 0) goto LAB_1416591cf;
      }
      if (((uVar2 | uVar1) & 0xff80) != 0) {
        iVar7 = (uint)uVar1 - (uint)uVar2;
        break;
      }
      iVar7 = (uint)""[uVar1] - (uint)""[uVar2];
    } while ((uint)""[uVar1] - (uint)""[uVar2] == 0);
LAB_1416591cf:
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (iVar7 == 0) {
      iVar7 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar7 = iVar5;
      }
      if (iVar7 + -1 < iVar7) {
        iVar7 = iVar7 + -1;
      }
      iVar6 = iVar5;
      if (0 < iVar7) {
        iVar6 = iVar7;
      }
      ::FString::RemoveAt(&local_68,iVar6,1,No);
    }
    ::FString::PrintfImpl(&local_58,L"/%s/Binaries");
    if (local_58.Data.ArrayNum == 0) {
      pwVar10 = L"";
LAB_14165923f:
      sVar11 = wcslen(pwVar10);
      iVar7 = ::FString::Find(&local_68,pwVar10,(int)sVar11,IgnoreCase,FromStart,-1);
    }
    else {
      pwVar10 = (wchar_t *)local_58.Data.AllocatorInstance.Data;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14165923f;
      iVar7 = -1;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (iVar7 == -1) {
      iVar7 = ::FString::Find(&local_68,L"/../Binaries",0xc,IgnoreCase,FromEnd,-1);
      FVar14.Data = local_58.Data.AllocatorInstance.Data;
      if (iVar7 == -1) {
        do {
          iVar7 = local_68.Data.ArrayNum + -1;
          if (local_68.Data.ArrayNum == 0) {
            iVar7 = iVar5;
          }
          if (iVar7 == 0) {
LAB_1416593fe:
            bVar4 = false;
          }
          else {
            bVar16 = true;
            FVar14.Data = (FScriptContainerElement *)L"";
            if (local_68.Data.ArrayNum != 0) {
              FVar14.Data = local_68.Data.AllocatorInstance.Data;
            }
            iVar6 = iVar7;
            if (1 < iVar7) {
              iVar6 = 1;
            }
            iVar8 = iVar13;
            if (0 < iVar6) {
              iVar8 = iVar6;
            }
            ::FString::FString(&local_58,
                               (wchar_t *)(FVar14.Data + ((longlong)iVar7 - (longlong)iVar8) * 2));
            puVar17 = (ushort *)&u__;
            FVar15.Data = (FScriptContainerElement *)L"";
            if (local_58.Data.ArrayNum != 0) {
              FVar15.Data = local_58.Data.AllocatorInstance.Data;
            }
            do {
              while( true ) {
                uVar1 = *(ushort *)(FVar15.Data + -0x15063ed88 + (longlong)puVar17);
                uVar2 = *puVar17;
                puVar17 = puVar17 + 1;
                FVar14.Data = local_58.Data.AllocatorInstance.Data;
                if (uVar1 != uVar2) break;
                if (uVar1 == 0) goto LAB_1416593fe;
              }
              if (((uVar2 | uVar1) & 0xff80) != 0) {
                if (uVar1 == uVar2) goto LAB_1416593fe;
                bVar4 = true;
                goto LAB_141659400;
              }
            } while (""[uVar1] == ""[uVar2]);
            bVar4 = true;
          }
LAB_141659400:
          if ((bVar16) && (bVar16 = false, FVar14.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(FVar14.Data);
            FVar14.Data = local_58.Data.AllocatorInstance.Data;
          }
          if (!bVar4) goto LAB_141659494;
          iVar7 = local_68.Data.ArrayNum + -1;
          if (local_68.Data.ArrayNum == 0) {
            iVar7 = iVar5;
          }
          if (iVar7 + -1 < iVar7) {
            iVar7 = iVar7 + -1;
          }
          iVar6 = iVar13;
          if (0 < iVar7) {
            iVar6 = iVar7;
          }
          ::FString::RemoveAt(&local_68,iVar6,1,No);
        } while( true );
      }
      iVar13 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar13 = iVar5;
      }
      if (iVar7 + 1 < iVar13) {
        iVar13 = iVar7 + 1;
      }
      if (0 < iVar13) {
        iVar5 = iVar13;
      }
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar14.Data = local_68.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_48,(wchar_t *)FVar14.Data,iVar5);
      ::FString::ConcatFC(&local_58,&local_48,L"../../");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_68.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      local_68.Data.ArrayNum = local_58.Data.ArrayNum;
      local_68.Data.ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar13 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar13 = iVar5;
      }
      iVar6 = iVar13;
      if (iVar7 + 1 < iVar13) {
        iVar6 = iVar7 + 1;
      }
      if (0 < iVar6) {
        iVar5 = iVar6;
      }
      ::FString::RemoveAt(&local_68,iVar5,iVar13 - iVar5,No);
    }
  }
  else {
    iVar7 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar7 = iVar13;
    }
    iVar6 = iVar7;
    if (iVar5 + 1 < iVar7) {
      iVar6 = iVar5 + 1;
    }
    if (0 < iVar6) {
      iVar13 = iVar6;
    }
    ::FString::RemoveAt(&local_68,iVar13,iVar7 - iVar13,No);
  }
LAB_141659494:
  pFVar12 = (FStaticData *)FPaths::ConvertRelativePathToFull(&local_48,&local_68);
  if (pFVar9 != pFVar12) {
    pFVar3 = (pFVar9->RootDir).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar9->RootDir).Data.AllocatorInstance.Data = (pFVar12->RootDir).Data.AllocatorInstance.Data;
    (pFVar12->RootDir).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar9->RootDir).Data.ArrayNum = (pFVar12->RootDir).Data.ArrayNum;
    (pFVar9->RootDir).Data.ArrayMax = (pFVar12->RootDir).Data.ArrayMax;
    (pFVar12->RootDir).Data.ArrayNum = 0;
    (pFVar12->RootDir).Data.ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FPaths::RemoveDuplicateSlashes(&pFVar9->RootDir);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_141659502:
  if ((pFVar9->RootDir).Data.ArrayNum != 0) {
    return (wchar_t *)(pFVar9->RootDir).Data.AllocatorInstance.Data;
  }
  return L"";
}

// SetAllowedDeviceOrientation @ 14165cd10

void __cdecl FGenericPlatformMisc::SetAllowedDeviceOrientation(EDeviceScreenOrientation param_1)

{
  AllowedDeviceOrientation = param_1;
  return;
}

// SetDeviceOrientation @ 14165cfb0

void __cdecl FGenericPlatformMisc::SetDeviceOrientation(EDeviceScreenOrientation param_1)

{
  AllowedDeviceOrientation = param_1;
  return;
}

// SetEnvironmentVar @ 14165d230

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericPlatformMisc::SetEnvironmentVar(wchar_t *param_1,wchar_t *param_2)

{
  if (1 < (byte)LogGenericPlatformMisc._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGenericPlatformMisc);
    return;
  }
  return;
}

// SetNetworkConnectionStatus @ 14165db50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericPlatformMisc::SetNetworkConnectionStatus(ENetworkConnectionStatus param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FGenericPlatformMisc::SetNetworkConnectionStatus(ENetworkConnectionStatus)_::_5_::FStat_STAT_FGenericPlatformMisc_SetNetworkConnectionStatus>
  FVar11;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FNameEntryId FVar12;
  FName FVar13;
  longlong lVar14;
  uint uVar15;
  undefined4 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_88;
  FName local_80;
  FStatMessage local_70;
  FDestructionSentinel local_60;
  
  if (CurrentNetworkConnectionStatus == param_1) {
    return;
  }
  CurrentNetworkConnectionStatus = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FGenericPlatformMisc_SetNetworkConnectionStatus ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_FGenericPlatformMisc::SetNetworkConnectionStatus(ENetworkConnectionStatus)_::_5_::FStat_STAT_FGenericPlatformMisc_SetNetworkConnectionStatus>
         )0x0) {
      pFVar10 = ::FName::FName(&local_res20,"STAT_FGenericPlatformMisc_SetNetworkConnectionStatus");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FGenericPlatformMisc_SetNetworkConnectionStatus,*pFVar10,
                 L"STAT_FGenericPlatformMisc_SetNetworkConnectionStatus","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_FGenericPlatformMisc_SetNetworkConnectionStatus;
  if (StatPtr_STAT_FGenericPlatformMisc_SetNetworkConnectionStatus ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FGenericPlatformMisc::SetNetworkConnectionStatus(ENetworkConnectionStatus)_::_5_::FStat_STAT_FGenericPlatformMisc_SetNetworkConnectionStatus>
       )0x0) {
    pFVar10 = ::FName::FName(&local_88,"STAT_FGenericPlatformMisc_SetNetworkConnectionStatus");
    FVar11 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FGenericPlatformMisc::SetNetworkConnectionStatus(ENetworkConnectionStatus)_::_5_::FStat_STAT_FGenericPlatformMisc_SetNetworkConnectionStatus>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FGenericPlatformMisc_SetNetworkConnectionStatus,*pFVar10,
                          L"STAT_FGenericPlatformMisc_SetNetworkConnectionStatus","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar5 = false;
  bVar8 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar15 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0] = 0;
      bVar5 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar5) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))
                  (FActiveExternalProfilerBase::ActiveProfiler,local_res8);
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar12.Value;
        local_res10.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                   ,0x1de);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar12.Value;
      local_res18.s.HighPart = uVar15;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_14165dd1f;
    }
  }
  bVar4 = false;
  FVar13 = local_80;
LAB_14165dd1f:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::OnNetworkConnectionStatusChanged,(FWriteAccessScope *)&local_60);
  bVar3 = false;
  FCoreDelegates::OnNetworkConnectionStatusChanged._28_4_ =
       FCoreDelegates::OnNetworkConnectionStatusChanged._28_4_ + 1;
  uVar15 = FCoreDelegates::OnNetworkConnectionStatusChanged._16_4_ - 1;
  if (-1 < (int)uVar15) {
    lVar14 = (longlong)(int)uVar15 << 4;
    bVar3 = false;
    do {
      uVar9 = 0;
      if ((int)uVar15 < (int)FCoreDelegates::OnNetworkConnectionStatusChanged._16_4_) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(lVar14 + 8 + FCoreDelegates::OnNetworkConnectionStatusChanged._8_8_) == 0) ||
          (*(longlong **)(lVar14 + FCoreDelegates::OnNetworkConnectionStatusChanged._8_8_) ==
           (longlong *)0x0)) ||
         (cVar7 = (**(code **)(**(longlong **)
                                 (lVar14 + FCoreDelegates::OnNetworkConnectionStatusChanged._8_8_) +
                              0x68))(), cVar7 == '\0')) {
        bVar3 = true;
      }
      lVar14 = lVar14 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  FCoreDelegates::OnNetworkConnectionStatusChanged._28_4_ =
       FCoreDelegates::OnNetworkConnectionStatusChanged._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnNetworkConnectionStatusChanged,false);
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (((bVar8) && (bVar8 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar8)) &&
     (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
    (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar13 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_70.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_70);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// SetOverrideProjectDir @ 14165e550

void __cdecl FGenericPlatformMisc::SetOverrideProjectDir(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (param_1 != &GOverrideProjectDir) {
    iVar1 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    GOverrideProjectDir.Data.ArrayNum = iVar1;
    if ((iVar1 == 0) && (GOverrideProjectDir.Data.ArrayMax == 0)) {
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,GOverrideProjectDir.Data.ArrayMax,(ForAnyElementType *)&GOverrideProjectDir
               ,iVar1,&GOverrideProjectDir.Data.ArrayMax);
    if (iVar1 != 0) {
      memcpy(GOverrideProjectDir.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
  }
  return;
}

// SetStoredValue @ 14165e690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FGenericPlatformMisc::SetStoredValue
          (FString *param_1,FString *param_2,FString *param_3,FString *param_4)

{
  code *pcVar1;
  FString *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar7;
  wchar_t *pwVar8;
  int iVar9;
  wchar_t *pwVar10;
  int iVar11;
  undefined1 auStack_1c8 [32];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_1a8;
  FString local_198;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_188;
  FString *local_178;
  FString local_170;
  FString local_160;
  FConfigFile local_148;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pwVar8 = L"";
  if ((param_1->Data).ArrayNum < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStoreId.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                       ,0x362,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  if ((param_2->Data).ArrayNum < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InSectionName.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                       ,0x363,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  if ((param_3->Data).ArrayNum < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InKeyName.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                       ,0x364,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  local_178 = ::FString::FString(&local_160,L"KeyValueStore.ini");
  pwVar6 = FWindowsPlatformProcess::ApplicationSettingsDir();
  pTVar7 = &::FString::FString(&local_170,pwVar6)->Data;
  iVar5 = (param_1->Data).ArrayNum;
  iVar11 = 2;
  iVar9 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar9 = 0;
  }
  if ((pTVar7->ArrayNum != 0) || (iVar5 = 2, iVar9 == -1)) {
    iVar5 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_1a8,pTVar7,iVar9 + iVar5);
  ::FString::PathAppend
            ((FString *)&local_1a8,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar9);
  pFVar2 = local_178;
  iVar5 = (local_178->Data).ArrayNum;
  iVar9 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar9 = 0;
  }
  if ((local_1a8.ArrayNum != 0) || (iVar9 == -1)) {
    iVar11 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_188,&local_1a8,iVar9 + iVar11);
  ::FString::PathAppend
            ((FString *)&local_188,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar9);
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  FConfigFile::FConfigFile(&local_148);
  FConfigFile::Read(&local_148,(FString *)&local_188);
  if ((param_4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
  }
  if ((param_3->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  }
  if ((param_2->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  FConfigFile::SetString(&local_148,pwVar8,pwVar10,pwVar6);
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Data.ArrayNum = 0;
  local_198.Data.ArrayMax = 0;
  bVar3 = FConfigFile::Write(&local_148,(FString *)&local_188,true,&local_198);
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  FConfigFile::~FConfigFile(&local_148);
  if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.AllocatorInstance.Data);
  }
  return bVar3;
}

// SetStoredValues @ 14165e900

bool __cdecl
FGenericPlatformMisc::SetStoredValues
          (FString *param_1,FString *param_2,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_3)

{
  undefined1 *puVar1;
  FString *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&param_3->field_0x28;
  puVar1 = &param_3->field_0x10;
  iVar15 = 0;
  uVar8 = 1;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&param_3->field_0x20;
    if (*(uint **)&param_3->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar12 = *puVar13;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar15;
      iVar16 = iVar16 + 0x20;
      iVar15 = iVar15 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14165e9ad;
      uVar12 = puVar13[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iVar9 = local_res20 + -1 + iVar16;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14165e9ad:
  uVar12 = *(uint *)&param_3->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar15);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar8 = *(uint *)&param_3->field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&param_3->field_0x20;
    if (*(undefined1 **)&param_3->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar15 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar15;
      uVar11 = uVar11 + 0x20;
      iVar15 = iVar15 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14165eab0;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14165eab0:
  while( true ) {
    if (*(int *)&param_3->field_0x8 - *(int *)&param_3->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar2 = (FString *)(*(longlong *)param_3 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    bVar6 = FWindowsPlatformMisc::SetStoredValue(param_1,param_2,pFVar2,pFVar2 + 1);
    if (!bVar6) {
      return false;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return true;
}

// SetUBTTargetName @ 14165eb60

void __cdecl FGenericPlatformMisc::SetUBTTargetName(wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  
  sVar3 = wcslen(param_1);
  if (0x7e < (uint)sVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FCString::Strlen(InTargetName) < ((sizeof(UEArrayCountHelper(UBTTargetName)) - 1) - 1)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformMisc.cpp"
                       ,0x624,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  wcscpy(u_UnrealGame_154b76d70,param_1);
  return;
}

// SetUTF8Output @ 14165ebc0

void __cdecl FGenericPlatformMisc::SetUTF8Output(void)

{
  return;
}

// ShowConsoleWindow @ 141660360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericPlatformMisc::ShowConsoleWindow(void)

{
  if (4 < (byte)LogGenericPlatformMisc._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGenericPlatformMisc);
    return;
  }
  return;
}

// SubmitErrorReport @ 141662a80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericPlatformMisc::SubmitErrorReport(wchar_t *param_1,Type param_2)

{
  bool bVar1;
  wchar_t *pwVar2;
  int local_res18 [4];
  
  bVar1 = FWindowsPlatformMisc::IsDebuggerPresent();
  if ((!bVar1) || (GAlwaysReportCrash != false)) {
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar2,L"CrashForUAT");
    if (!bVar1) {
      if (GUseCrashReportClient == false) {
        if (1 < (byte)LogGenericPlatformMisc._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogGenericPlatformMisc);
          return;
        }
      }
      else {
        local_res18[0] = 0;
        pwVar2 = FCommandLine::Get();
        FParse::Value(pwVar2,L"AutomatedPerfTesting=",local_res18);
        bVar1 = FApp::IsUnattended();
        if ((bVar1) && (local_res18[0] != 0)) {
          pwVar2 = FCommandLine::Get();
          bVar1 = FParse::Param(pwVar2,L"KillAllPopUpBlockingWindows");
          if ((bVar1) && (1 < (byte)LogGenericPlatformMisc._0_1_)) {
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogGenericPlatformMisc);
            return;
          }
        }
      }
    }
  }
  return;
}

// TearDown @ 141663fc0

void __cdecl FGenericPlatformMisc::TearDown(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<struct_FGenericPlatformMisc::FStaticData>&___ptr64___cdecl_TLazySingleton<FGenericPlatformMisc::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<struct_FGenericPlatformMisc::FStaticData>&___ptr64___cdecl_TLazySingleton<FGenericPlatformMisc::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<struct_FGenericPlatformMisc::FStaticData>&___ptr64___cdecl_TLazySingleton<FGenericPlatformMisc::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_154ea84b0 = 0;
      atexit(`TLazySingleton<FGenericPlatformMisc::FStaticData>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_FGenericPlatformMisc::FStaticData>&___ptr64___cdecl_TLazySingleton<FGenericPlatformMisc::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  TLazySingleton<FGenericPlatformMisc::FStaticData>::Reset
            ((TLazySingleton<FGenericPlatformMisc::FStaticData> *)
             &`private:_static_class_TLazySingleton<struct_FGenericPlatformMisc::FStaticData>&___ptr64___cdecl_TLazySingleton<FGenericPlatformMisc::FStaticData>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton);
  return;
}

// TickHotfixables @ 141664170

void __cdecl FGenericPlatformMisc::TickHotfixables(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  float afStackX_8 [2];
  float afStackX_10 [6];
  
  afStackX_8[0] = 100.0;
  if ((GConfig == (FConfigCacheIni *)0x0) ||
     (bVar1 = FConfigCacheIni::GetFloat
                        (GConfig,L"Core.System",L"HandleEnsurePercent",afStackX_8,&GEngineIni),
     afStackX_10[0] = afStackX_8[0], !bVar1)) {
    afStackX_10[0] = 100.0;
    bVar1 = FCommandLine::IsInitialized();
    if (!bVar1) goto LAB_141668e76;
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Value(pwVar2,L"handleensurepercent=",afStackX_10);
    if (!bVar1) goto LAB_141668e76;
  }
  GenericPlatformMisc::GEnsureChance = afStackX_10[0] * __real_3c23d70a;
LAB_141668e76:
  GenericPlatformMisc::GEnsureSettingsEverUpdated = true;
  if (__real_3f800000 <= GenericPlatformMisc::GEnsureChance) {
    GenericPlatformMisc::GEnsureChance = 1.01;
  }
  return;
}

// TickStatNamedEvents @ 141664180

void __cdecl FGenericPlatformMisc::TickStatNamedEvents(void)

{
  atomic<unsigned_int> aVar1;
  
  aVar1 = GNamedEventMarkers;
  if (GTrackCsvNamedEvents) {
    LOCK();
    GNamedEventMarkers = (atomic<unsigned_int>)0x0;
    UNLOCK();
    if (!__CsvProfilerStat782) {
      FCsvProfilerTrace::OutputInlineStat("NamedEventMarkers",0);
      __CsvProfilerStat782 = true;
    }
    FCsvProfiler::RecordCustomStat("NamedEventMarkers",0,(int)aVar1,Set);
    return;
  }
  return;
}

// UnregisterForRemoteNotifications @ 141667010

void __cdecl FGenericPlatformMisc::UnregisterForRemoteNotifications(void)

{
  return;
}

// UpdateHotfixableEnsureSettings @ 141668de0

void __cdecl FGenericPlatformMisc::UpdateHotfixableEnsureSettings(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  float local_res8 [2];
  float local_res10 [6];
  
  local_res8[0] = 100.0;
  if ((GConfig == (FConfigCacheIni *)0x0) ||
     (bVar1 = FConfigCacheIni::GetFloat
                        (GConfig,L"Core.System",L"HandleEnsurePercent",local_res8,&GEngineIni),
     local_res10[0] = local_res8[0], !bVar1)) {
    local_res10[0] = 100.0;
    bVar1 = FCommandLine::IsInitialized();
    if (!bVar1) goto LAB_141668e76;
    pwVar2 = FCommandLine::Get();
    bVar1 = FParse::Value(pwVar2,L"handleensurepercent=",local_res10);
    if (!bVar1) goto LAB_141668e76;
  }
  GenericPlatformMisc::GEnsureChance = local_res10[0] * __real_3c23d70a;
LAB_141668e76:
  GenericPlatformMisc::GEnsureSettingsEverUpdated = true;
  if (__real_3f800000 <= GenericPlatformMisc::GEnsureChance) {
    GenericPlatformMisc::GEnsureChance = 1.01;
  }
  return;
}

// UseRenderThread @ 141668f30

bool __cdecl FGenericPlatformMisc::UseRenderThread(void)

{
  bool bVar1;
  int iVar2;
  wchar_t *pwVar3;
  FLowLevelMemTracker *this;
  
  pwVar3 = FCommandLine::Get();
  bVar1 = FParse::Param(pwVar3,L"norenderthread");
  if (!bVar1) {
    pwVar3 = FCommandLine::Get();
    bVar1 = FParse::Param(pwVar3,L"onethread");
    if (!bVar1) {
      iVar2 = FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
      if (1 < iVar2) {
        bVar1 = FGenericPlatformProcess::SupportsMultithreading();
        if (bVar1) {
          this = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            this = FLowLevelMemTracker::Construct();
          }
          bVar1 = FLowLevelMemTracker::ShouldReduceThreads(this);
          if (!bVar1) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// VersionCheckPlatformName @ 141669030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FGenericPlatformMisc::VersionCheckPlatformName(FString *__return_storage_ptr__)

{
  bool bVar1;
  undefined1 auStackY_178 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  bVar1 = FConfigCacheIni::GetString
                    (GConfig,L"PatchConfig",L"PlatformOverrideName",&local_148,&GEngineIni);
  if (bVar1) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_148.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_148.Data.ArrayMax;
  }
  else {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"Windows",7,Yes);
    ::FString::FString(__return_storage_ptr__,local_138.Ptr);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

