// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 79

// ApplicationSettingsDir @ 141629cd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

wchar_t * __cdecl FGenericPlatformProcess::ApplicationSettingsDir(void)

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
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  
  bVar16 = false;
  pFVar9 = TLazySingleton<FGenericPlatformMisc::FStaticData>::Get();
  iVar13 = (pFVar9->RootDir).Data.ArrayNum;
  iVar5 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) goto LAB_141659502;
  FPaths::EngineDir(&FStack_68);
  iVar5 = ::FString::Find(&FStack_68,L"/Engine",7,IgnoreCase,FromEnd,-1);
  iVar13 = 0;
  if (iVar5 == -1) {
    pwVar10 = FWindowsPlatformProcess::BaseDir();
    ::FString::operator=(&FStack_68,pwVar10);
    iVar5 = FStack_68.Data.ArrayNum + -1;
    FVar14.Data = FStack_68.Data.AllocatorInstance.Data;
    if (FStack_68.Data.ArrayNum == 0) {
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
    ::FString::FString(&FStack_58,(wchar_t *)(FVar14.Data + ((longlong)iVar5 - (longlong)iVar6) * 2)
                      );
    FVar14.Data = (FScriptContainerElement *)L"";
    if (FStack_58.Data.ArrayNum != 0) {
      FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
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
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    if (iVar7 == 0) {
      iVar7 = FStack_68.Data.ArrayNum + -1;
      if (FStack_68.Data.ArrayNum == 0) {
        iVar7 = iVar5;
      }
      if (iVar7 + -1 < iVar7) {
        iVar7 = iVar7 + -1;
      }
      iVar6 = iVar5;
      if (0 < iVar7) {
        iVar6 = iVar7;
      }
      ::FString::RemoveAt(&FStack_68,iVar6,1,No);
    }
    ::FString::PrintfImpl(&FStack_58,L"/%s/Binaries");
    if (FStack_58.Data.ArrayNum == 0) {
      pwVar10 = L"";
LAB_14165923f:
      sVar11 = wcslen(pwVar10);
      iVar7 = ::FString::Find(&FStack_68,pwVar10,(int)sVar11,IgnoreCase,FromStart,-1);
    }
    else {
      pwVar10 = (wchar_t *)FStack_58.Data.AllocatorInstance.Data;
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14165923f;
      iVar7 = -1;
    }
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    if (iVar7 == -1) {
      iVar7 = ::FString::Find(&FStack_68,L"/../Binaries",0xc,IgnoreCase,FromEnd,-1);
      FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
      if (iVar7 == -1) {
        do {
          iVar7 = FStack_68.Data.ArrayNum + -1;
          if (FStack_68.Data.ArrayNum == 0) {
            iVar7 = iVar5;
          }
          if (iVar7 == 0) {
LAB_1416593fe:
            bVar4 = false;
          }
          else {
            bVar16 = true;
            FVar14.Data = (FScriptContainerElement *)L"";
            if (FStack_68.Data.ArrayNum != 0) {
              FVar14.Data = FStack_68.Data.AllocatorInstance.Data;
            }
            iVar6 = iVar7;
            if (1 < iVar7) {
              iVar6 = 1;
            }
            iVar8 = iVar13;
            if (0 < iVar6) {
              iVar8 = iVar6;
            }
            ::FString::FString(&FStack_58,
                               (wchar_t *)(FVar14.Data + ((longlong)iVar7 - (longlong)iVar8) * 2));
            puVar17 = (ushort *)&u__;
            FVar15.Data = (FScriptContainerElement *)L"";
            if (FStack_58.Data.ArrayNum != 0) {
              FVar15.Data = FStack_58.Data.AllocatorInstance.Data;
            }
            do {
              while( true ) {
                uVar1 = *(ushort *)(FVar15.Data + -0x15063ed88 + (longlong)puVar17);
                uVar2 = *puVar17;
                puVar17 = puVar17 + 1;
                FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
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
            FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
          }
          if (!bVar4) goto LAB_141659494;
          iVar7 = FStack_68.Data.ArrayNum + -1;
          if (FStack_68.Data.ArrayNum == 0) {
            iVar7 = iVar5;
          }
          if (iVar7 + -1 < iVar7) {
            iVar7 = iVar7 + -1;
          }
          iVar6 = iVar13;
          if (0 < iVar7) {
            iVar6 = iVar7;
          }
          ::FString::RemoveAt(&FStack_68,iVar6,1,No);
        } while( true );
      }
      iVar13 = FStack_68.Data.ArrayNum + -1;
      if (FStack_68.Data.ArrayNum == 0) {
        iVar13 = iVar5;
      }
      if (iVar7 + 1 < iVar13) {
        iVar13 = iVar7 + 1;
      }
      if (0 < iVar13) {
        iVar5 = iVar13;
      }
      FVar14.Data = (FScriptContainerElement *)L"";
      if (FStack_68.Data.ArrayNum != 0) {
        FVar14.Data = FStack_68.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&FStack_48,(wchar_t *)FVar14.Data,iVar5);
      ::FString::ConcatFC(&FStack_58,&FStack_48,L"../../");
      if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
      FStack_68.Data.AllocatorInstance.Data = FStack_58.Data.AllocatorInstance.Data;
      FStack_68.Data.ArrayNum = FStack_58.Data.ArrayNum;
      FStack_68.Data.ArrayMax = FStack_58.Data.ArrayMax;
      FStack_58.Data.ArrayNum = 0;
      FStack_58.Data.ArrayMax = 0;
      FStack_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar13 = FStack_68.Data.ArrayNum + -1;
      if (FStack_68.Data.ArrayNum == 0) {
        iVar13 = iVar5;
      }
      iVar6 = iVar13;
      if (iVar7 + 1 < iVar13) {
        iVar6 = iVar7 + 1;
      }
      if (0 < iVar6) {
        iVar5 = iVar6;
      }
      ::FString::RemoveAt(&FStack_68,iVar5,iVar13 - iVar5,No);
    }
  }
  else {
    iVar7 = FStack_68.Data.ArrayNum + -1;
    if (FStack_68.Data.ArrayNum == 0) {
      iVar7 = iVar13;
    }
    iVar6 = iVar7;
    if (iVar5 + 1 < iVar7) {
      iVar6 = iVar5 + 1;
    }
    if (0 < iVar6) {
      iVar13 = iVar6;
    }
    ::FString::RemoveAt(&FStack_68,iVar13,iVar7 - iVar13,No);
  }
LAB_141659494:
  pFVar12 = (FStaticData *)FPaths::ConvertRelativePathToFull(&FStack_48,&FStack_68);
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
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  FPaths::RemoveDuplicateSlashes(&pFVar9->RootDir);
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
LAB_141659502:
  if ((pFVar9->RootDir).Data.ArrayNum != 0) {
    return (wchar_t *)(pFVar9->RootDir).Data.AllocatorInstance.Data;
  }
  return L"";
}

// CanLaunchURL @ 14162dc40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericPlatformProcess::CanLaunchURL(wchar_t *param_1)

{
  if (2 < (byte)LogHAL._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  }
  return false;
}

// CeaseBeingFirstInstance @ 14162dfb0

void __cdecl FGenericPlatformProcess::CeaseBeingFirstInstance(void)

{
  GIsFirstInstance = false;
  return;
}

// CleanShaderWorkingDir @ 14162e2a0

void __cdecl FGenericPlatformProcess::CleanShaderWorkingDir(void)

{
  IFileManager *pIVar1;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar2;
  ForAnyElementType FVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  FString local_18;
  
  FWindowsPlatformProcess::ShaderWorkingDir(&local_28);
  pIVar1 = IFileManager::Get();
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar1 + 0x68))(pIVar1,FVar3.Data,0,1);
  pTVar2 = &FPaths::ProjectIntermediateDir(&local_18)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_38,pTVar2,0x1b - (uint)(pTVar2->ArrayNum != 0));
  ::FString::PathAppend((FString *)&local_38,L"Shaders/WorkingDirectory/",0x19);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pIVar1 = IFileManager::Get();
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_38.ArrayNum != 0) {
    FVar3.Data = local_38.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar1 + 0x68))(pIVar1,FVar3.Data,0,1);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// ClosePipe @ 14162ede0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericPlatformProcess::ClosePipe(void *param_1,void *param_2)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return;
}

// CloseProc @ 14162ee00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericPlatformProcess::CloseProc(FProcHandle *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return;
}

// ComputerName @ 14162ee50

wchar_t * __cdecl FGenericPlatformProcess::ComputerName(void)

{
  return L"GenericComputer";
}

// ConditionalSleep @ 14162ee60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FGenericPlatformProcess::ConditionalSleep(TFunctionRef<bool___cdecl(void)> *param_1,float param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_Sleep> FVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  LARGE_INTEGER local_res8 [2];
  FScopeIdle local_res18;
  LARGE_INTEGER local_res20;
  FStatMessage local_48 [2];
  
  cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
  if (cVar3 != '\0') {
    return;
  }
  FVar7 = StatPtr_STAT_Sleep;
  if (StatPtr_STAT_Sleep == (FThreadSafeStaticStat<FStat_STAT_Sleep>)0x0) {
    pFVar6 = ::FName::FName((FName *)&local_res20.s,"STAT_Sleep");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_Sleep>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Sleep,*pFVar6,L"CPU Stall - Sleep"
                       ,"STATGROUP_CPUStalls","STATCAT_Advanced",L"CPU Stalls",true,true,ST_int64,
                       true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar7;
  bVar4 = false;
  bVar5 = false;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_res8[0].s.LowPart = 0;
      bVar4 = FActiveExternalProfilerBase::AreScopedEventsEnabled();
      if ((bVar4) && (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
        (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x38))();
      }
      if (GTrackCsvNamedEvents != false) {
        LOCK();
        GNamedEventMarkers = (atomic<unsigned_int>)((int)GNamedEventMarkers + 1);
        UNLOCK();
      }
      bVar4 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8[0]._0_4_ = FVar11.Value;
        local_res8[0]._4_4_ = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8[0].s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformProcess.cpp"
                   ,0x1c2);
        bVar4 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8[0]._0_4_ = FVar11.Value;
      local_res8[0]._4_4_ = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar2 = true;
      goto LAB_14162f01f;
    }
  }
  bVar2 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_14162f01f:
  UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_res18,false);
  do {
    FWindowsPlatformProcess::SleepNoStats(param_2);
    cVar3 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
  } while (cVar3 == '\0');
  if (local_res18.bIgnore == false) {
    puVar8 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
    local_48[0].NameAndInfo = (FStatNameAndInfo)local_res8;
    local_48[0].StatData.Pad =
         (uchar  [8])
         UE::Core::Private::Function::
         TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
         ::Call;
    pFVar9 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)local_48,puVar8);
    QueryPerformanceCounter(&local_res20);
    *(DWORD *)(pFVar9 + 2) = *(int *)(pFVar9 + 2) + (local_res20.s.LowPart - local_res18.Start);
    if (0 < *(int *)(pFVar9 + 3)) {
      *(DWORD *)&pFVar9[2].field_0x4 =
           *(int *)&pFVar9[2].field_0x4 + (local_res20.s.LowPart - local_res18.Start);
    }
    pFVar9[3].field_0x4 = 0;
  }
  if (local_res18.TraceEventScope.bEnabled != false) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (bVar5 = FActiveExternalProfilerBase::AreScopedEventsEnabled(), bVar5)) &&
     (FActiveExternalProfilerBase::ActiveProfiler != (FExternalProfiler *)0x0)) {
    (**(code **)((longlong)*FActiveExternalProfilerBase::ActiveProfiler + 0x48))();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar2) && (FVar12 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48[0].NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar12 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(local_res8);
      local_48[0].StatData.Pad[4] = '\0';
      local_48[0].StatData.Pad[5] = '\0';
      local_48[0].StatData.Pad[6] = '\0';
      local_48[0].StatData.Pad[7] = '\0';
      local_48[0].StatData.Pad[0] = local_res8[0]._0_1_;
      local_48[0].StatData.Pad[1] = local_res8[0]._1_1_;
      local_48[0].StatData.Pad[2] = local_res8[0]._2_1_;
      local_48[0].StatData.Pad[3] = local_res8[0]._3_1_;
      FThreadStats::AddStatMessage(this,local_48);
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

// CreatePipe @ 141632ec0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericPlatformProcess::CreatePipe(void **param_1,void **param_2,bool param_3)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return false;
}

// CreateProc @ 141633100

/* WARNING: Enum "Type": Some values do not have unique names */

TTuple<FProcHandle,UE::HAL::EProcessId> * __cdecl
FGenericPlatformProcess::CreateProc
          (TTuple<FProcHandle,UE::HAL::EProcessId> *__return_storage_ptr__,
          FProcessStartInfo *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  return __return_storage_ptr__;
}

// CreateProc @ 141633140

/* WARNING: Enum "Type": Some values do not have unique names */

FProcHandle __cdecl
FGenericPlatformProcess::CreateProc
          (wchar_t *param_1,wchar_t *param_2,bool param_3,bool param_4,bool param_5,uint *param_6,
          int param_7,wchar_t *param_8,void *param_9,void *param_10,void *param_11)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  return (FProcHandle)param_1;
}

// CreateProc @ 141633180

/* WARNING: Enum "Type": Some values do not have unique names */

FProcHandle __cdecl
FGenericPlatformProcess::CreateProc
          (wchar_t *param_1,wchar_t *param_2,bool param_3,bool param_4,bool param_5,uint *param_6,
          int param_7,wchar_t *param_8,void *param_9,void *param_10)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  return (FProcHandle)param_1;
}

// CreateProcessSentinel @ 1416331c0

TSharedPtr<IProcessSentinel,1> * __cdecl
FGenericPlatformProcess::CreateProcessSentinel
          (TSharedPtr<IProcessSentinel,1> *__return_storage_ptr__,wchar_t *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<IProcessSentinel,1> *pTVar3;
  
  FWindowsPlatformProcess::CreateProcessSentinelObject(__return_storage_ptr__);
  if (__return_storage_ptr__->Object == (IProcessSentinel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<IProcessSentinel,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (**(code **)*__return_storage_ptr__->Object)(__return_storage_ptr__->Object,param_1,param_2);
  return __return_storage_ptr__;
}

// CreateProcessSentinelObject @ 141633230

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IProcessSentinel,1> * __cdecl
FGenericPlatformProcess::CreateProcessSentinelObject
          (TSharedPtr<IProcessSentinel,1> *__return_storage_ptr__)

{
  pmf_b6dbf194 pVar1;
  TReferenceControllerBase<1> *pTVar2;
  pmf_b6dbf194 pVar3;
  
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  pVar1 = (pmf_b6dbf194)::operator_new(0x20);
  pVar3 = (pmf_b6dbf194)0x0;
  if (pVar1 != (pmf_b6dbf194)0x0) {
    *(undefined8 *)((longlong)pVar1 + 8) = 0;
    *(undefined ***)pVar1 = &___7FGenericProcessSentinel__6B_;
    *(undefined8 *)((longlong)pVar1 + 0x10) = 0;
    *(undefined8 *)((longlong)pVar1 + 0x18) = 0;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddRaw<FGenericProcessSentinel>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnHandleSystemError,(FGenericProcessSentinel *)&stack0x00000008,
               pVar1);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddRaw<FGenericProcessSentinel>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnShutdownAfterError,(FGenericProcessSentinel *)&stack0x00000008,
               pVar1);
    pVar3 = pVar1;
  }
  __return_storage_ptr__->Object = (IProcessSentinel *)pVar3;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pTVar2->SharedReferenceCount = (atomic<int>)0x1;
  pTVar2->_padding_ =
       (longlong)
       &
       ___7__TReferenceControllerWithDeleter_VFGenericProcessSentinel__U__DefaultDeleter_VFGenericProcessSentinel___SharedPointerInternals___00_SharedPointerInternals__6B_
  ;
  pTVar2->WeakReferenceCount = (atomic<int>)0x1;
  pTVar2[1]._padding_ = (longlong)pVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  return __return_storage_ptr__;
}

// CreateRunnableThread @ 141633320

/* WARNING: Enum "Type": Some values do not have unique names */

FRunnableThread * __cdecl FGenericPlatformProcess::CreateRunnableThread(void)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return (FRunnableThread *)0x0;
}

// CreateSynchEvent @ 1416335d0

/* WARNING: Enum "Type": Some values do not have unique names */

FEvent * __cdecl FGenericPlatformProcess::CreateSynchEvent(bool param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return (FEvent *)0x0;
}

// Daemonize @ 141633620

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericPlatformProcess::Daemonize(void)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return false;
}

// DeleteInterprocessSynchObject @ 1416337f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericPlatformProcess::DeleteInterprocessSynchObject(FSemaphore *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return false;
}

// ExecElevatedProcess @ 141638c20

bool __cdecl
FGenericPlatformProcess::ExecElevatedProcess(wchar_t *param_1,wchar_t *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = FWindowsPlatformProcess::ExecProcess
                    (param_1,param_2,param_3,(FString *)0x0,(FString *)0x0,(wchar_t *)0x0,false);
  return bVar1;
}

// ExecProcess @ 141638c50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FGenericPlatformProcess::ExecProcess
          (wchar_t *param_1,wchar_t *param_2,int *param_3,FString *param_4,FString *param_5,
          wchar_t *param_6,bool param_7)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return false;
}

// ExecutableName @ 141638cb0

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl FGenericPlatformProcess::ExecutableName(bool param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return (wchar_t *)0x0;
}

// ExecutablePath @ 141638ce0

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl FGenericPlatformProcess::ExecutablePath(void)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return (wchar_t *)0x0;
}

// ExploreFolder @ 141639ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericPlatformProcess::ExploreFolder(wchar_t *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return;
}

// FlushPoolSyncEvents @ 14163bef0

void __cdecl FGenericPlatformProcess::FlushPoolSyncEvents(void)

{
  TEventPool<1> *this;
  FEvent *pFVar1;
  TEventPool<0> *this_00;
  
  this = TLazySingleton<TEventPool<1>_>::Get();
  pFVar1 = FLockFreePointerListLIFOBase<FEvent,64,1>::Pop
                     ((FLockFreePointerListLIFOBase<FEvent,64,1> *)this);
  while (pFVar1 != (FEvent *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    pFVar1 = FLockFreePointerListLIFOBase<FEvent,64,1>::Pop
                       ((FLockFreePointerListLIFOBase<FEvent,64,1> *)this);
  }
  this_00 = TLazySingleton<TEventPool<0>_>::Get();
  pFVar1 = FLockFreePointerListLIFOBase<FEvent,64,1>::Pop
                     ((FLockFreePointerListLIFOBase<FEvent,64,1> *)this_00);
  while (pFVar1 != (FEvent *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x28))(pFVar1,1);
    pFVar1 = FLockFreePointerListLIFOBase<FEvent,64,1>::Pop
                       ((FLockFreePointerListLIFOBase<FEvent,64,1> *)this_00);
  }
  return;
}

// FreeDllHandle @ 14163cff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericPlatformProcess::FreeDllHandle(void *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return;
}

// GenerateApplicationPath @ 14163d8e0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
FGenericPlatformProcess::GenerateApplicationPath
          (FString *__return_storage_ptr__,FString *param_1,EBuildConfiguration param_2)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetApplicationMemoryUsage @ 14163e6e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericPlatformProcess::GetApplicationMemoryUsage(uint param_1,ulong64 *param_2)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return false;
}

// GetApplicationName @ 14163e710

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl
FGenericPlatformProcess::GetApplicationName(FString *__return_storage_ptr__,uint param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetApplicationSettingsDir @ 14163e750

FString * __cdecl
FGenericPlatformProcess::GetApplicationSettingsDir
          (FString *__return_storage_ptr__,ApplicationSettingsContext *param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = FGenericPlatformMisc::RootDir();
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// GetArchitectureSuffix @ 14163e780

wchar_t * __cdecl FGenericPlatformProcess::GetArchitectureSuffix(void)

{
  return (wchar_t *)0x0;
}

// GetBinariesSubdirectory @ 14163e7b0

wchar_t * __cdecl FGenericPlatformProcess::GetBinariesSubdirectory(void)

{
  return L"";
}

// GetCurrentCoreNumber @ 141640a10

uint __cdecl FGenericPlatformProcess::GetCurrentCoreNumber(void)

{
  return 0;
}

// GetCurrentProcessId @ 141640a20

uint __cdecl FGenericPlatformProcess::GetCurrentProcessId(void)

{
  return 0;
}

// GetCurrentWorkingDirectory @ 141640a30

FString * __cdecl
FGenericPlatformProcess::GetCurrentWorkingDirectory(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetDesiredThreadForUObjectReferenceCollector @ 141641090

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl FGenericPlatformProcess::GetDesiredThreadForUObjectReferenceCollector(void)

{
  return AnyNormalThreadNormalTask;
}

// GetDllExport @ 141641720

/* WARNING: Enum "Type": Some values do not have unique names */

void * __cdecl FGenericPlatformProcess::GetDllExport(void *param_1,wchar_t *param_2)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return (void *)0x0;
}

// GetDllHandle @ 141641750

/* WARNING: Enum "Type": Some values do not have unique names */

void * __cdecl FGenericPlatformProcess::GetDllHandle(wchar_t *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return (void *)0x0;
}

// GetGameBundleId @ 141642550

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl FGenericPlatformProcess::GetGameBundleId(FString *__return_storage_ptr__)

{
  if (2 < (byte)LogHAL._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  }
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetModuleExtension @ 141643a50

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl FGenericPlatformProcess::GetModuleExtension(void)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return L"";
}

// GetModulePrefix @ 141643a80

wchar_t * __cdecl FGenericPlatformProcess::GetModulePrefix(void)

{
  return L"";
}

// GetModulesDirectory @ 141643b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FGenericPlatformProcess::GetModulesDirectory(FString *__return_storage_ptr__)

{
  wchar_t *_Str;
  FString *pFVar1;
  size_t sVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  FString local_58;
  TStringView<wchar_t> local_48;
  wchar_t *local_38;
  undefined4 local_30;
  wchar_t *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  _Str = FWindowsPlatformProcess::GetBinariesSubdirectory();
  pFVar1 = FPaths::EngineDir(&local_58);
  if ((pFVar1->Data).ArrayNum == 0) {
    local_48.DataPtr = L"";
  }
  else {
    local_48.DataPtr = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  iVar3 = 0;
  local_48.Size = iVar3;
  if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
    sVar2 = wcslen(local_48.DataPtr);
    local_48.Size = (int)sVar2;
  }
  local_38 = L"Binaries";
  local_30 = 8;
  local_28 = _Str;
  if (_Str != (wchar_t *)0x0) {
    sVar2 = wcslen(_Str);
    iVar3 = (int)sVar2;
  }
  local_20 = iVar3;
  FPaths::CombineInternal(__return_storage_ptr__,&local_48,3);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetProcReturnCode @ 141645950

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericPlatformProcess::GetProcReturnCode(FProcHandle *param_1,int *param_2)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return false;
}

// GetStackSize @ 141646180

uint __cdecl FGenericPlatformProcess::GetStackSize(void)

{
  return 0;
}

// GetSynchEventFromPool @ 141646c60

FEvent * __cdecl FGenericPlatformProcess::GetSynchEventFromPool(bool param_1)

{
  code *pcVar1;
  bool bVar2;
  TEventPool<1> *this;
  FEvent *pFVar3;
  FEvent *this_00;
  TEventPool<0> *this_01;
  
  if (param_1) {
    this = TLazySingleton<TEventPool<1>_>::Get();
    pFVar3 = ::operator_new(0x18);
    if (pFVar3 == (FEvent *)0x0) {
      return (FEvent *)0x0;
    }
    this_00 = FLockFreePointerListLIFOBase<FEvent,64,1>::Pop
                        ((FLockFreePointerListLIFOBase<FEvent,64,1> *)this);
    if (this_00 != (FEvent *)0x0) goto LAB_141646cff;
    bVar2 = true;
  }
  else {
    this_01 = TLazySingleton<TEventPool<0>_>::Get();
    pFVar3 = ::operator_new(0x18);
    if (pFVar3 == (FEvent *)0x0) {
      return (FEvent *)0x0;
    }
    this_00 = FLockFreePointerListLIFOBase<FEvent,64,1>::Pop
                        ((FLockFreePointerListLIFOBase<FEvent,64,1> *)this_01);
    if (this_00 != (FEvent *)0x0) goto LAB_141646cff;
    bVar2 = false;
  }
  this_00 = FWindowsPlatformProcess::CreateSynchEvent(bVar2);
  if ((this_00 == (FEvent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Event",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\EventPool.h"
                         ,0x8f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FEvent *)(*pcVar1)();
    return pFVar3;
  }
LAB_141646cff:
  FEvent::AdvanceStats(this_00);
  pFVar3->EventId = 0;
  pFVar3->EventStartCycles = (TAtomic<unsigned_int>)0x0;
  pFVar3->_padding_ = (longlong)&___7FSafeRecyclableEvent__6B_;
  pFVar3[1]._padding_ = (longlong)this_00;
  return pFVar3;
}

// IsApplicationRunning @ 141649c20

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericPlatformProcess::IsApplicationRunning(uint param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return false;
}

// IsApplicationRunning @ 141649c50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericPlatformProcess::IsApplicationRunning(wchar_t *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return false;
}

// IsFirstInstance @ 141649d90

bool __cdecl FGenericPlatformProcess::IsFirstInstance(void)

{
  return GIsFirstInstance;
}

// IsProcRunning @ 14164a1a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericPlatformProcess::IsProcRunning(FProcHandle *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return false;
}

// LaunchFileInDefaultExternalApplication @ 14164acd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FGenericPlatformProcess::LaunchFileInDefaultExternalApplication
          (wchar_t *param_1,wchar_t *param_2,Type param_3,bool param_4)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return false;
}

// LaunchURL @ 14164af80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericPlatformProcess::LaunchURL(wchar_t *param_1,wchar_t *param_2,FString *param_3)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return;
}

// LaunchURLFiltered @ 14164afa0

bool __cdecl
FGenericPlatformProcess::LaunchURLFiltered
          (wchar_t *param_1,wchar_t *param_2,FString *param_3,FURLRequestFilter *param_4)

{
  bool bVar1;
  size_t sVar2;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_1);
    local_18.Size = (int)sVar2;
  }
  bVar1 = UE::Core::FURLRequestFilter::IsRequestAllowed(param_4,&local_18);
  if (bVar1) {
    FWindowsPlatformProcess::LaunchURL(param_1,param_2,param_3);
  }
  else if (param_3 != (FString *)0x0) {
    ::FString::operator=(param_3,L"URL rejected by filter");
  }
  return bVar1;
}

// ModifyThreadAssignmentForUObjectReferenceCollector @ 14164dee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FGenericPlatformProcess::ModifyThreadAssignmentForUObjectReferenceCollector
          (int *param_1,int *param_2,Type *param_3,Type *param_4)

{
  return;
}

// ModuleExists @ 14164def0

bool __cdecl FGenericPlatformProcess::ModuleExists(FString *param_1)

{
  undefined1 uVar1;
  IFileManager *pIVar2;
  
  pIVar2 = IFileManager::Get();
  if ((param_1->Data).ArrayNum != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014193aad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,(param_1->Data).AllocatorInstance.Data);
    return (bool)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014193aae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,L"");
  return (bool)uVar1;
}

// NewInterprocessSynchObject @ 14164e0e0

/* WARNING: Enum "Type": Some values do not have unique names */

FSemaphore * __cdecl
FGenericPlatformProcess::NewInterprocessSynchObject(FString *param_1,bool param_2,uint param_3)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return (FSemaphore *)0x0;
}

// NewInterprocessSynchObject @ 14164e110

/* WARNING: Enum "Type": Some values do not have unique names */

FSemaphore * __cdecl
FGenericPlatformProcess::NewInterprocessSynchObject(wchar_t *param_1,bool param_2,uint param_3)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return (FSemaphore *)0x0;
}

// OpenProcess @ 14164f830

/* WARNING: Enum "Type": Some values do not have unique names */

FProcHandle __cdecl FGenericPlatformProcess::OpenProcess(uint param_1)

{
  undefined4 in_register_0000000c;
  FProcHandle FVar1;
  
  FVar1._4_4_ = in_register_0000000c;
  FVar1._0_4_ = param_1;
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  *(undefined8 *)FVar1 = 0;
  return FVar1;
}

// ReadPipe @ 141652320

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __cdecl FGenericPlatformProcess::ReadPipe(FString *__return_storage_ptr__,void *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// ReadPipeToArray @ 141652360

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FGenericPlatformProcess::ReadPipeToArray
          (void *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return false;
}

// ReturnSynchEventToPool @ 141658f40

void __cdecl FGenericPlatformProcess::ReturnSynchEventToPool(FEvent *param_1)

{
  FEvent *pFVar1;
  code *pcVar2;
  char cVar3;
  TLockFreePointerListLIFOPad<FEvent,64> *this;
  bool bVar4;
  
  if (param_1 != (FEvent *)0x0) {
    cVar3 = (**(code **)(param_1->_padding_ + 8))();
    if (cVar3 == '\0') {
      this = (TLockFreePointerListLIFOPad<FEvent,64> *)TLazySingleton<TEventPool<0>_>::Get();
      cVar3 = (**(code **)(param_1->_padding_ + 8))(param_1);
      bVar4 = cVar3 == '\0';
    }
    else {
      this = (TLockFreePointerListLIFOPad<FEvent,64> *)TLazySingleton<TEventPool<1>_>::Get();
      cVar3 = (**(code **)(param_1->_padding_ + 8))(param_1);
      bVar4 = cVar3 == '\x01';
    }
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Event->IsManualReset() == (PoolType == EEventMode::ManualReset)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\EventPool.h"
                         ,0x65,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (FEvent *)param_1[1]._padding_;
    param_1->_padding_ = (longlong)&___7FEvent__6B_;
    param_1[1]._padding_ = 0;
    ::operator_delete(param_1,0x18);
    if (pFVar1 == (FEvent *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Event",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\EventPool.h"
                         ,0x9c,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1);
    TLockFreePointerListLIFOPad<FEvent,64>::Push(this,pFVar1);
  }
  return;
}

// SetCurrentWorkingDirectoryToBaseDir @ 14165cec0

void __cdecl FGenericPlatformProcess::SetCurrentWorkingDirectoryToBaseDir(void)

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

// SetShaderDir @ 14165e650

void __cdecl FGenericPlatformProcess::SetShaderDir(wchar_t *param_1)

{
  size_t sVar1;
  
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    if ((int)sVar1 != 0) goto LAB_14165e66e;
  }
  param_1 = L"";
LAB_14165e66e:
  ::FString::operator=(&Generic_ShaderDir,param_1);
  return;
}

// SetThreadAffinityMask @ 14165eb40

void __cdecl FGenericPlatformProcess::SetThreadAffinityMask(ulong64 param_1)

{
  return;
}

// SetThreadPriority @ 14165eb50

void __cdecl FGenericPlatformProcess::SetThreadPriority(EThreadPriority param_1)

{
  return;
}

// ShaderDir @ 14165fef0

wchar_t * __cdecl FGenericPlatformProcess::ShaderDir(void)

{
  int iVar1;
  FString *pFVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  pwVar4 = L"";
  iVar1 = Generic_ShaderDir.Data.ArrayNum + -1;
  if (Generic_ShaderDir.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    pFVar2 = FPaths::EngineDir(&local_38);
    if ((pFVar2->Data).ArrayNum == 0) {
      local_28.DataPtr = L"";
    }
    else {
      local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    local_28.Size = 0;
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
      sVar3 = wcslen(local_28.DataPtr);
      local_28.Size = (int)sVar3;
    }
    local_10 = 7;
    local_18 = L"Shaders";
    FPaths::CombineInternal(&local_48,&local_28,2);
    if (Generic_ShaderDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(Generic_ShaderDir.Data.AllocatorInstance.Data);
    }
    Generic_ShaderDir.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    Generic_ShaderDir.Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    Generic_ShaderDir.Data.ArrayNum = local_48.Data.ArrayNum;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (Generic_ShaderDir.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)Generic_ShaderDir.Data.AllocatorInstance.Data;
  }
  return (wchar_t *)(FScriptContainerElement *)pwVar4;
}

// ShaderWorkingDir @ 14165ffe0

FString * __cdecl FGenericPlatformProcess::ShaderWorkingDir(FString *__return_storage_ptr__)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  FString local_18;
  
  pTVar1 = &FPaths::ProjectIntermediateDir(&local_18)->Data;
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&__return_storage_ptr__->Data,pTVar1,0xe - (uint)(pTVar1->ArrayNum != 0));
  ::FString::PathAppend(__return_storage_ptr__,L"Shaders/tmp/",0xc);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ShouldSaveToUserDir @ 141660310

bool __cdecl FGenericPlatformProcess::ShouldSaveToUserDir(void)

{
  return false;
}

// SupportsMultithreading @ 141662d20

bool __cdecl FGenericPlatformProcess::SupportsMultithreading(void)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  bVar1 = FCommandLine::IsInitialized();
  if (!bVar1) {
    return true;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar2 = FCommandLine::Get();
      bVar1 = FParse::Param(pwVar2,L"nothreading");
      bSupportsMultithreading = !bVar1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return bSupportsMultithreading;
}

// TearDown @ 141664040

void __cdecl FGenericPlatformProcess::TearDown(void)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar1 < `private:_static_class_TLazySingleton<class_TEventPool<0>_>&___ptr64___cdecl_TLazySingleton<TEventPool<0>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_TEventPool<0>_>&___ptr64___cdecl_TLazySingleton<TEventPool<0>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_TEventPool<0>_>&___ptr64___cdecl_TLazySingleton<TEventPool<0>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_154ea8340 = 0;
      atexit(`TLazySingleton<TEventPool<0>_>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_TEventPool<0>_>&___ptr64___cdecl_TLazySingleton<TEventPool<0>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  TLazySingleton<TEventPool<0>_>::Reset
            ((TLazySingleton<TEventPool<0>_> *)
             &`private:_static_class_TLazySingleton<class_TEventPool<0>_>&___ptr64___cdecl_TLazySingleton<TEventPool<0>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton);
  if (*piVar1 < `private:_static_class_TLazySingleton<class_TEventPool<1>_>&___ptr64___cdecl_TLazySingleton<TEventPool<1>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_TEventPool<1>_>&___ptr64___cdecl_TLazySingleton<TEventPool<1>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_TEventPool<1>_>&___ptr64___cdecl_TLazySingleton<TEventPool<1>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_154ea8400 = 0;
      atexit(`TLazySingleton<TEventPool<1>_>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_TEventPool<1>_>&___ptr64___cdecl_TLazySingleton<TEventPool<1>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  TLazySingleton<TEventPool<1>_>::Reset
            ((TLazySingleton<TEventPool<1>_> *)
             &`private:_static_class_TLazySingleton<class_TEventPool<1>_>&___ptr64___cdecl_TLazySingleton<TEventPool<1>_>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton);
  return;
}

// TerminateProc @ 141664120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericPlatformProcess::TerminateProc(FProcHandle *param_1,bool param_2)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return;
}

// TerminateProcTreeWithPredicate @ 141664140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FGenericPlatformProcess::TerminateProcTreeWithPredicate
          (FProcHandle *param_1,TFunctionRef<bool___cdecl(unsigned_int,wchar_t_const_*)> *param_2)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return;
}

// UserDir @ 141668fb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

wchar_t * __cdecl FGenericPlatformProcess::UserDir(void)

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
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  
  bVar16 = false;
  pFVar9 = TLazySingleton<FGenericPlatformMisc::FStaticData>::Get();
  iVar13 = (pFVar9->RootDir).Data.ArrayNum;
  iVar5 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) goto LAB_141659502;
  FPaths::EngineDir(&FStack_68);
  iVar5 = ::FString::Find(&FStack_68,L"/Engine",7,IgnoreCase,FromEnd,-1);
  iVar13 = 0;
  if (iVar5 == -1) {
    pwVar10 = FWindowsPlatformProcess::BaseDir();
    ::FString::operator=(&FStack_68,pwVar10);
    iVar5 = FStack_68.Data.ArrayNum + -1;
    FVar14.Data = FStack_68.Data.AllocatorInstance.Data;
    if (FStack_68.Data.ArrayNum == 0) {
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
    ::FString::FString(&FStack_58,(wchar_t *)(FVar14.Data + ((longlong)iVar5 - (longlong)iVar6) * 2)
                      );
    FVar14.Data = (FScriptContainerElement *)L"";
    if (FStack_58.Data.ArrayNum != 0) {
      FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
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
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    if (iVar7 == 0) {
      iVar7 = FStack_68.Data.ArrayNum + -1;
      if (FStack_68.Data.ArrayNum == 0) {
        iVar7 = iVar5;
      }
      if (iVar7 + -1 < iVar7) {
        iVar7 = iVar7 + -1;
      }
      iVar6 = iVar5;
      if (0 < iVar7) {
        iVar6 = iVar7;
      }
      ::FString::RemoveAt(&FStack_68,iVar6,1,No);
    }
    ::FString::PrintfImpl(&FStack_58,L"/%s/Binaries");
    if (FStack_58.Data.ArrayNum == 0) {
      pwVar10 = L"";
LAB_14165923f:
      sVar11 = wcslen(pwVar10);
      iVar7 = ::FString::Find(&FStack_68,pwVar10,(int)sVar11,IgnoreCase,FromStart,-1);
    }
    else {
      pwVar10 = (wchar_t *)FStack_58.Data.AllocatorInstance.Data;
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14165923f;
      iVar7 = -1;
    }
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    if (iVar7 == -1) {
      iVar7 = ::FString::Find(&FStack_68,L"/../Binaries",0xc,IgnoreCase,FromEnd,-1);
      FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
      if (iVar7 == -1) {
        do {
          iVar7 = FStack_68.Data.ArrayNum + -1;
          if (FStack_68.Data.ArrayNum == 0) {
            iVar7 = iVar5;
          }
          if (iVar7 == 0) {
LAB_1416593fe:
            bVar4 = false;
          }
          else {
            bVar16 = true;
            FVar14.Data = (FScriptContainerElement *)L"";
            if (FStack_68.Data.ArrayNum != 0) {
              FVar14.Data = FStack_68.Data.AllocatorInstance.Data;
            }
            iVar6 = iVar7;
            if (1 < iVar7) {
              iVar6 = 1;
            }
            iVar8 = iVar13;
            if (0 < iVar6) {
              iVar8 = iVar6;
            }
            ::FString::FString(&FStack_58,
                               (wchar_t *)(FVar14.Data + ((longlong)iVar7 - (longlong)iVar8) * 2));
            puVar17 = (ushort *)&u__;
            FVar15.Data = (FScriptContainerElement *)L"";
            if (FStack_58.Data.ArrayNum != 0) {
              FVar15.Data = FStack_58.Data.AllocatorInstance.Data;
            }
            do {
              while( true ) {
                uVar1 = *(ushort *)(FVar15.Data + -0x15063ed88 + (longlong)puVar17);
                uVar2 = *puVar17;
                puVar17 = puVar17 + 1;
                FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
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
            FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
          }
          if (!bVar4) goto LAB_141659494;
          iVar7 = FStack_68.Data.ArrayNum + -1;
          if (FStack_68.Data.ArrayNum == 0) {
            iVar7 = iVar5;
          }
          if (iVar7 + -1 < iVar7) {
            iVar7 = iVar7 + -1;
          }
          iVar6 = iVar13;
          if (0 < iVar7) {
            iVar6 = iVar7;
          }
          ::FString::RemoveAt(&FStack_68,iVar6,1,No);
        } while( true );
      }
      iVar13 = FStack_68.Data.ArrayNum + -1;
      if (FStack_68.Data.ArrayNum == 0) {
        iVar13 = iVar5;
      }
      if (iVar7 + 1 < iVar13) {
        iVar13 = iVar7 + 1;
      }
      if (0 < iVar13) {
        iVar5 = iVar13;
      }
      FVar14.Data = (FScriptContainerElement *)L"";
      if (FStack_68.Data.ArrayNum != 0) {
        FVar14.Data = FStack_68.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&FStack_48,(wchar_t *)FVar14.Data,iVar5);
      ::FString::ConcatFC(&FStack_58,&FStack_48,L"../../");
      if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
      FStack_68.Data.AllocatorInstance.Data = FStack_58.Data.AllocatorInstance.Data;
      FStack_68.Data.ArrayNum = FStack_58.Data.ArrayNum;
      FStack_68.Data.ArrayMax = FStack_58.Data.ArrayMax;
      FStack_58.Data.ArrayNum = 0;
      FStack_58.Data.ArrayMax = 0;
      FStack_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar13 = FStack_68.Data.ArrayNum + -1;
      if (FStack_68.Data.ArrayNum == 0) {
        iVar13 = iVar5;
      }
      iVar6 = iVar13;
      if (iVar7 + 1 < iVar13) {
        iVar6 = iVar7 + 1;
      }
      if (0 < iVar6) {
        iVar5 = iVar6;
      }
      ::FString::RemoveAt(&FStack_68,iVar5,iVar13 - iVar5,No);
    }
  }
  else {
    iVar7 = FStack_68.Data.ArrayNum + -1;
    if (FStack_68.Data.ArrayNum == 0) {
      iVar7 = iVar13;
    }
    iVar6 = iVar7;
    if (iVar5 + 1 < iVar7) {
      iVar6 = iVar5 + 1;
    }
    if (0 < iVar6) {
      iVar13 = iVar6;
    }
    ::FString::RemoveAt(&FStack_68,iVar13,iVar7 - iVar13,No);
  }
LAB_141659494:
  pFVar12 = (FStaticData *)FPaths::ConvertRelativePathToFull(&FStack_48,&FStack_68);
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
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  FPaths::RemoveDuplicateSlashes(&pFVar9->RootDir);
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
LAB_141659502:
  if ((pFVar9->RootDir).Data.ArrayNum != 0) {
    return (wchar_t *)(pFVar9->RootDir).Data.AllocatorInstance.Data;
  }
  return L"";
}

// UserHomeDir @ 141668fc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

wchar_t * __cdecl FGenericPlatformProcess::UserHomeDir(void)

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
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  
  bVar16 = false;
  pFVar9 = TLazySingleton<FGenericPlatformMisc::FStaticData>::Get();
  iVar13 = (pFVar9->RootDir).Data.ArrayNum;
  iVar5 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) goto LAB_141659502;
  FPaths::EngineDir(&FStack_68);
  iVar5 = ::FString::Find(&FStack_68,L"/Engine",7,IgnoreCase,FromEnd,-1);
  iVar13 = 0;
  if (iVar5 == -1) {
    pwVar10 = FWindowsPlatformProcess::BaseDir();
    ::FString::operator=(&FStack_68,pwVar10);
    iVar5 = FStack_68.Data.ArrayNum + -1;
    FVar14.Data = FStack_68.Data.AllocatorInstance.Data;
    if (FStack_68.Data.ArrayNum == 0) {
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
    ::FString::FString(&FStack_58,(wchar_t *)(FVar14.Data + ((longlong)iVar5 - (longlong)iVar6) * 2)
                      );
    FVar14.Data = (FScriptContainerElement *)L"";
    if (FStack_58.Data.ArrayNum != 0) {
      FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
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
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    if (iVar7 == 0) {
      iVar7 = FStack_68.Data.ArrayNum + -1;
      if (FStack_68.Data.ArrayNum == 0) {
        iVar7 = iVar5;
      }
      if (iVar7 + -1 < iVar7) {
        iVar7 = iVar7 + -1;
      }
      iVar6 = iVar5;
      if (0 < iVar7) {
        iVar6 = iVar7;
      }
      ::FString::RemoveAt(&FStack_68,iVar6,1,No);
    }
    ::FString::PrintfImpl(&FStack_58,L"/%s/Binaries");
    if (FStack_58.Data.ArrayNum == 0) {
      pwVar10 = L"";
LAB_14165923f:
      sVar11 = wcslen(pwVar10);
      iVar7 = ::FString::Find(&FStack_68,pwVar10,(int)sVar11,IgnoreCase,FromStart,-1);
    }
    else {
      pwVar10 = (wchar_t *)FStack_58.Data.AllocatorInstance.Data;
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14165923f;
      iVar7 = -1;
    }
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    if (iVar7 == -1) {
      iVar7 = ::FString::Find(&FStack_68,L"/../Binaries",0xc,IgnoreCase,FromEnd,-1);
      FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
      if (iVar7 == -1) {
        do {
          iVar7 = FStack_68.Data.ArrayNum + -1;
          if (FStack_68.Data.ArrayNum == 0) {
            iVar7 = iVar5;
          }
          if (iVar7 == 0) {
LAB_1416593fe:
            bVar4 = false;
          }
          else {
            bVar16 = true;
            FVar14.Data = (FScriptContainerElement *)L"";
            if (FStack_68.Data.ArrayNum != 0) {
              FVar14.Data = FStack_68.Data.AllocatorInstance.Data;
            }
            iVar6 = iVar7;
            if (1 < iVar7) {
              iVar6 = 1;
            }
            iVar8 = iVar13;
            if (0 < iVar6) {
              iVar8 = iVar6;
            }
            ::FString::FString(&FStack_58,
                               (wchar_t *)(FVar14.Data + ((longlong)iVar7 - (longlong)iVar8) * 2));
            puVar17 = (ushort *)&u__;
            FVar15.Data = (FScriptContainerElement *)L"";
            if (FStack_58.Data.ArrayNum != 0) {
              FVar15.Data = FStack_58.Data.AllocatorInstance.Data;
            }
            do {
              while( true ) {
                uVar1 = *(ushort *)(FVar15.Data + -0x15063ed88 + (longlong)puVar17);
                uVar2 = *puVar17;
                puVar17 = puVar17 + 1;
                FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
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
            FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
          }
          if (!bVar4) goto LAB_141659494;
          iVar7 = FStack_68.Data.ArrayNum + -1;
          if (FStack_68.Data.ArrayNum == 0) {
            iVar7 = iVar5;
          }
          if (iVar7 + -1 < iVar7) {
            iVar7 = iVar7 + -1;
          }
          iVar6 = iVar13;
          if (0 < iVar7) {
            iVar6 = iVar7;
          }
          ::FString::RemoveAt(&FStack_68,iVar6,1,No);
        } while( true );
      }
      iVar13 = FStack_68.Data.ArrayNum + -1;
      if (FStack_68.Data.ArrayNum == 0) {
        iVar13 = iVar5;
      }
      if (iVar7 + 1 < iVar13) {
        iVar13 = iVar7 + 1;
      }
      if (0 < iVar13) {
        iVar5 = iVar13;
      }
      FVar14.Data = (FScriptContainerElement *)L"";
      if (FStack_68.Data.ArrayNum != 0) {
        FVar14.Data = FStack_68.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&FStack_48,(wchar_t *)FVar14.Data,iVar5);
      ::FString::ConcatFC(&FStack_58,&FStack_48,L"../../");
      if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
      FStack_68.Data.AllocatorInstance.Data = FStack_58.Data.AllocatorInstance.Data;
      FStack_68.Data.ArrayNum = FStack_58.Data.ArrayNum;
      FStack_68.Data.ArrayMax = FStack_58.Data.ArrayMax;
      FStack_58.Data.ArrayNum = 0;
      FStack_58.Data.ArrayMax = 0;
      FStack_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar13 = FStack_68.Data.ArrayNum + -1;
      if (FStack_68.Data.ArrayNum == 0) {
        iVar13 = iVar5;
      }
      iVar6 = iVar13;
      if (iVar7 + 1 < iVar13) {
        iVar6 = iVar7 + 1;
      }
      if (0 < iVar6) {
        iVar5 = iVar6;
      }
      ::FString::RemoveAt(&FStack_68,iVar5,iVar13 - iVar5,No);
    }
  }
  else {
    iVar7 = FStack_68.Data.ArrayNum + -1;
    if (FStack_68.Data.ArrayNum == 0) {
      iVar7 = iVar13;
    }
    iVar6 = iVar7;
    if (iVar5 + 1 < iVar7) {
      iVar6 = iVar5 + 1;
    }
    if (0 < iVar6) {
      iVar13 = iVar6;
    }
    ::FString::RemoveAt(&FStack_68,iVar13,iVar7 - iVar13,No);
  }
LAB_141659494:
  pFVar12 = (FStaticData *)FPaths::ConvertRelativePathToFull(&FStack_48,&FStack_68);
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
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  FPaths::RemoveDuplicateSlashes(&pFVar9->RootDir);
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
LAB_141659502:
  if ((pFVar9->RootDir).Data.ArrayNum != 0) {
    return (wchar_t *)(pFVar9->RootDir).Data.AllocatorInstance.Data;
  }
  return L"";
}

// UserName @ 141668fd0

wchar_t * __cdecl FGenericPlatformProcess::UserName(bool param_1)

{
  return L"GenericUser";
}

// UserSettingsDir @ 141668fe0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

wchar_t * __cdecl FGenericPlatformProcess::UserSettingsDir(void)

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
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  
  bVar16 = false;
  pFVar9 = TLazySingleton<FGenericPlatformMisc::FStaticData>::Get();
  iVar13 = (pFVar9->RootDir).Data.ArrayNum;
  iVar5 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) goto LAB_141659502;
  FPaths::EngineDir(&FStack_68);
  iVar5 = ::FString::Find(&FStack_68,L"/Engine",7,IgnoreCase,FromEnd,-1);
  iVar13 = 0;
  if (iVar5 == -1) {
    pwVar10 = FWindowsPlatformProcess::BaseDir();
    ::FString::operator=(&FStack_68,pwVar10);
    iVar5 = FStack_68.Data.ArrayNum + -1;
    FVar14.Data = FStack_68.Data.AllocatorInstance.Data;
    if (FStack_68.Data.ArrayNum == 0) {
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
    ::FString::FString(&FStack_58,(wchar_t *)(FVar14.Data + ((longlong)iVar5 - (longlong)iVar6) * 2)
                      );
    FVar14.Data = (FScriptContainerElement *)L"";
    if (FStack_58.Data.ArrayNum != 0) {
      FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
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
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    if (iVar7 == 0) {
      iVar7 = FStack_68.Data.ArrayNum + -1;
      if (FStack_68.Data.ArrayNum == 0) {
        iVar7 = iVar5;
      }
      if (iVar7 + -1 < iVar7) {
        iVar7 = iVar7 + -1;
      }
      iVar6 = iVar5;
      if (0 < iVar7) {
        iVar6 = iVar7;
      }
      ::FString::RemoveAt(&FStack_68,iVar6,1,No);
    }
    ::FString::PrintfImpl(&FStack_58,L"/%s/Binaries");
    if (FStack_58.Data.ArrayNum == 0) {
      pwVar10 = L"";
LAB_14165923f:
      sVar11 = wcslen(pwVar10);
      iVar7 = ::FString::Find(&FStack_68,pwVar10,(int)sVar11,IgnoreCase,FromStart,-1);
    }
    else {
      pwVar10 = (wchar_t *)FStack_58.Data.AllocatorInstance.Data;
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14165923f;
      iVar7 = -1;
    }
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    if (iVar7 == -1) {
      iVar7 = ::FString::Find(&FStack_68,L"/../Binaries",0xc,IgnoreCase,FromEnd,-1);
      FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
      if (iVar7 == -1) {
        do {
          iVar7 = FStack_68.Data.ArrayNum + -1;
          if (FStack_68.Data.ArrayNum == 0) {
            iVar7 = iVar5;
          }
          if (iVar7 == 0) {
LAB_1416593fe:
            bVar4 = false;
          }
          else {
            bVar16 = true;
            FVar14.Data = (FScriptContainerElement *)L"";
            if (FStack_68.Data.ArrayNum != 0) {
              FVar14.Data = FStack_68.Data.AllocatorInstance.Data;
            }
            iVar6 = iVar7;
            if (1 < iVar7) {
              iVar6 = 1;
            }
            iVar8 = iVar13;
            if (0 < iVar6) {
              iVar8 = iVar6;
            }
            ::FString::FString(&FStack_58,
                               (wchar_t *)(FVar14.Data + ((longlong)iVar7 - (longlong)iVar8) * 2));
            puVar17 = (ushort *)&u__;
            FVar15.Data = (FScriptContainerElement *)L"";
            if (FStack_58.Data.ArrayNum != 0) {
              FVar15.Data = FStack_58.Data.AllocatorInstance.Data;
            }
            do {
              while( true ) {
                uVar1 = *(ushort *)(FVar15.Data + -0x15063ed88 + (longlong)puVar17);
                uVar2 = *puVar17;
                puVar17 = puVar17 + 1;
                FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
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
            FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
          }
          if (!bVar4) goto LAB_141659494;
          iVar7 = FStack_68.Data.ArrayNum + -1;
          if (FStack_68.Data.ArrayNum == 0) {
            iVar7 = iVar5;
          }
          if (iVar7 + -1 < iVar7) {
            iVar7 = iVar7 + -1;
          }
          iVar6 = iVar13;
          if (0 < iVar7) {
            iVar6 = iVar7;
          }
          ::FString::RemoveAt(&FStack_68,iVar6,1,No);
        } while( true );
      }
      iVar13 = FStack_68.Data.ArrayNum + -1;
      if (FStack_68.Data.ArrayNum == 0) {
        iVar13 = iVar5;
      }
      if (iVar7 + 1 < iVar13) {
        iVar13 = iVar7 + 1;
      }
      if (0 < iVar13) {
        iVar5 = iVar13;
      }
      FVar14.Data = (FScriptContainerElement *)L"";
      if (FStack_68.Data.ArrayNum != 0) {
        FVar14.Data = FStack_68.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&FStack_48,(wchar_t *)FVar14.Data,iVar5);
      ::FString::ConcatFC(&FStack_58,&FStack_48,L"../../");
      if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
      FStack_68.Data.AllocatorInstance.Data = FStack_58.Data.AllocatorInstance.Data;
      FStack_68.Data.ArrayNum = FStack_58.Data.ArrayNum;
      FStack_68.Data.ArrayMax = FStack_58.Data.ArrayMax;
      FStack_58.Data.ArrayNum = 0;
      FStack_58.Data.ArrayMax = 0;
      FStack_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar13 = FStack_68.Data.ArrayNum + -1;
      if (FStack_68.Data.ArrayNum == 0) {
        iVar13 = iVar5;
      }
      iVar6 = iVar13;
      if (iVar7 + 1 < iVar13) {
        iVar6 = iVar7 + 1;
      }
      if (0 < iVar6) {
        iVar5 = iVar6;
      }
      ::FString::RemoveAt(&FStack_68,iVar5,iVar13 - iVar5,No);
    }
  }
  else {
    iVar7 = FStack_68.Data.ArrayNum + -1;
    if (FStack_68.Data.ArrayNum == 0) {
      iVar7 = iVar13;
    }
    iVar6 = iVar7;
    if (iVar5 + 1 < iVar7) {
      iVar6 = iVar5 + 1;
    }
    if (0 < iVar6) {
      iVar13 = iVar6;
    }
    ::FString::RemoveAt(&FStack_68,iVar13,iVar7 - iVar13,No);
  }
LAB_141659494:
  pFVar12 = (FStaticData *)FPaths::ConvertRelativePathToFull(&FStack_48,&FStack_68);
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
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  FPaths::RemoveDuplicateSlashes(&pFVar9->RootDir);
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
LAB_141659502:
  if ((pFVar9->RootDir).Data.ArrayNum != 0) {
    return (wchar_t *)(pFVar9->RootDir).Data.AllocatorInstance.Data;
  }
  return L"";
}

// UserTempDir @ 141668ff0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

wchar_t * __cdecl FGenericPlatformProcess::UserTempDir(void)

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
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  
  bVar16 = false;
  pFVar9 = TLazySingleton<FGenericPlatformMisc::FStaticData>::Get();
  iVar13 = (pFVar9->RootDir).Data.ArrayNum;
  iVar5 = iVar13 + -1;
  if (iVar13 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) goto LAB_141659502;
  FPaths::EngineDir(&FStack_68);
  iVar5 = ::FString::Find(&FStack_68,L"/Engine",7,IgnoreCase,FromEnd,-1);
  iVar13 = 0;
  if (iVar5 == -1) {
    pwVar10 = FWindowsPlatformProcess::BaseDir();
    ::FString::operator=(&FStack_68,pwVar10);
    iVar5 = FStack_68.Data.ArrayNum + -1;
    FVar14.Data = FStack_68.Data.AllocatorInstance.Data;
    if (FStack_68.Data.ArrayNum == 0) {
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
    ::FString::FString(&FStack_58,(wchar_t *)(FVar14.Data + ((longlong)iVar5 - (longlong)iVar6) * 2)
                      );
    FVar14.Data = (FScriptContainerElement *)L"";
    if (FStack_58.Data.ArrayNum != 0) {
      FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
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
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    if (iVar7 == 0) {
      iVar7 = FStack_68.Data.ArrayNum + -1;
      if (FStack_68.Data.ArrayNum == 0) {
        iVar7 = iVar5;
      }
      if (iVar7 + -1 < iVar7) {
        iVar7 = iVar7 + -1;
      }
      iVar6 = iVar5;
      if (0 < iVar7) {
        iVar6 = iVar7;
      }
      ::FString::RemoveAt(&FStack_68,iVar6,1,No);
    }
    ::FString::PrintfImpl(&FStack_58,L"/%s/Binaries");
    if (FStack_58.Data.ArrayNum == 0) {
      pwVar10 = L"";
LAB_14165923f:
      sVar11 = wcslen(pwVar10);
      iVar7 = ::FString::Find(&FStack_68,pwVar10,(int)sVar11,IgnoreCase,FromStart,-1);
    }
    else {
      pwVar10 = (wchar_t *)FStack_58.Data.AllocatorInstance.Data;
      if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14165923f;
      iVar7 = -1;
    }
    if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
    }
    if (iVar7 == -1) {
      iVar7 = ::FString::Find(&FStack_68,L"/../Binaries",0xc,IgnoreCase,FromEnd,-1);
      FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
      if (iVar7 == -1) {
        do {
          iVar7 = FStack_68.Data.ArrayNum + -1;
          if (FStack_68.Data.ArrayNum == 0) {
            iVar7 = iVar5;
          }
          if (iVar7 == 0) {
LAB_1416593fe:
            bVar4 = false;
          }
          else {
            bVar16 = true;
            FVar14.Data = (FScriptContainerElement *)L"";
            if (FStack_68.Data.ArrayNum != 0) {
              FVar14.Data = FStack_68.Data.AllocatorInstance.Data;
            }
            iVar6 = iVar7;
            if (1 < iVar7) {
              iVar6 = 1;
            }
            iVar8 = iVar13;
            if (0 < iVar6) {
              iVar8 = iVar6;
            }
            ::FString::FString(&FStack_58,
                               (wchar_t *)(FVar14.Data + ((longlong)iVar7 - (longlong)iVar8) * 2));
            puVar17 = (ushort *)&u__;
            FVar15.Data = (FScriptContainerElement *)L"";
            if (FStack_58.Data.ArrayNum != 0) {
              FVar15.Data = FStack_58.Data.AllocatorInstance.Data;
            }
            do {
              while( true ) {
                uVar1 = *(ushort *)(FVar15.Data + -0x15063ed88 + (longlong)puVar17);
                uVar2 = *puVar17;
                puVar17 = puVar17 + 1;
                FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
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
            FVar14.Data = FStack_58.Data.AllocatorInstance.Data;
          }
          if (!bVar4) goto LAB_141659494;
          iVar7 = FStack_68.Data.ArrayNum + -1;
          if (FStack_68.Data.ArrayNum == 0) {
            iVar7 = iVar5;
          }
          if (iVar7 + -1 < iVar7) {
            iVar7 = iVar7 + -1;
          }
          iVar6 = iVar13;
          if (0 < iVar7) {
            iVar6 = iVar7;
          }
          ::FString::RemoveAt(&FStack_68,iVar6,1,No);
        } while( true );
      }
      iVar13 = FStack_68.Data.ArrayNum + -1;
      if (FStack_68.Data.ArrayNum == 0) {
        iVar13 = iVar5;
      }
      if (iVar7 + 1 < iVar13) {
        iVar13 = iVar7 + 1;
      }
      if (0 < iVar13) {
        iVar5 = iVar13;
      }
      FVar14.Data = (FScriptContainerElement *)L"";
      if (FStack_68.Data.ArrayNum != 0) {
        FVar14.Data = FStack_68.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&FStack_48,(wchar_t *)FVar14.Data,iVar5);
      ::FString::ConcatFC(&FStack_58,&FStack_48,L"../../");
      if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
      }
      FStack_68.Data.AllocatorInstance.Data = FStack_58.Data.AllocatorInstance.Data;
      FStack_68.Data.ArrayNum = FStack_58.Data.ArrayNum;
      FStack_68.Data.ArrayMax = FStack_58.Data.ArrayMax;
      FStack_58.Data.ArrayNum = 0;
      FStack_58.Data.ArrayMax = 0;
      FStack_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
      }
    }
    else {
      iVar13 = FStack_68.Data.ArrayNum + -1;
      if (FStack_68.Data.ArrayNum == 0) {
        iVar13 = iVar5;
      }
      iVar6 = iVar13;
      if (iVar7 + 1 < iVar13) {
        iVar6 = iVar7 + 1;
      }
      if (0 < iVar6) {
        iVar5 = iVar6;
      }
      ::FString::RemoveAt(&FStack_68,iVar5,iVar13 - iVar5,No);
    }
  }
  else {
    iVar7 = FStack_68.Data.ArrayNum + -1;
    if (FStack_68.Data.ArrayNum == 0) {
      iVar7 = iVar13;
    }
    iVar6 = iVar7;
    if (iVar5 + 1 < iVar7) {
      iVar6 = iVar5 + 1;
    }
    if (0 < iVar6) {
      iVar13 = iVar6;
    }
    ::FString::RemoveAt(&FStack_68,iVar13,iVar7 - iVar13,No);
  }
LAB_141659494:
  pFVar12 = (FStaticData *)FPaths::ConvertRelativePathToFull(&FStack_48,&FStack_68);
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
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  FPaths::RemoveDuplicateSlashes(&pFVar9->RootDir);
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
LAB_141659502:
  if ((pFVar9->RootDir).Data.ArrayNum != 0) {
    return (wchar_t *)(pFVar9->RootDir).Data.AllocatorInstance.Data;
  }
  return L"";
}

// WaitAndFork @ 14166af40

/* WARNING: Enum "Type": Some values do not have unique names */

EWaitAndForkResult __cdecl FGenericPlatformProcess::WaitAndFork(void)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return Error;
}

// WaitForProc @ 14166b680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericPlatformProcess::WaitForProc(FProcHandle *param_1)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return;
}

// WritePipe @ 14166b6c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FGenericPlatformProcess::WritePipe(void *param_1,FString *param_2,FString *param_3)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return false;
}

// WritePipe @ 14166b6f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FGenericPlatformProcess::WritePipe(void *param_1,uchar *param_2,int param_3,int *param_4)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogHAL);
  return false;
}

