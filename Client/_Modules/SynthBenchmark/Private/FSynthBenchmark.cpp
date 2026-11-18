// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SynthBenchmark
// Functions: 5

// StartupModule @ 146abcc20

void __thiscall FSynthBenchmark::StartupModule(FSynthBenchmark *this)

{
  return;
}

// ShutdownModule @ 146abcc30

void __thiscall FSynthBenchmark::ShutdownModule(FSynthBenchmark *this)

{
  return;
}

// Run @ 146abcc40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FSynthBenchmark::Run
          (FSynthBenchmark *this,FSynthBenchmarkResults *param_1,bool param_2,float param_3)

{
  code *pcVar1;
  double dVar2;
  uint uVar3;
  bool bVar4;
  FTimeSample FVar5;
  FModuleManager *pFVar6;
  FName *pFVar7;
  IModuleInterface *pIVar8;
  wchar_t *pwVar9;
  char *pcVar10;
  FLogCategoryLogSynthBenchmark *pFVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  FName local_res10;
  LARGE_INTEGER local_168;
  LARGE_INTEGER local_160;
  LARGE_INTEGER local_158;
  LARGE_INTEGER local_150;
  wchar_t *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  wchar_t *pwStack_130;
  longlong local_128;
  wchar_t *local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  wchar_t *pwStack_108;
  longlong local_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  FName local_b0;
  FName local_a8;
  FString local_a0 [7];
  
  pFVar11 = (FLogCategoryLogSynthBenchmark *)param_1;
  if (param_3 <= 0.0) {
    pcVar10 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SynthBenchmark\\Private\\SynthBenchmarkPrivate.cpp"
    ;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorkScale > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SynthBenchmark\\Private\\SynthBenchmarkPrivate.cpp"
                       ,0x6f,L"");
    pFVar11 = (FLogCategoryLogSynthBenchmark *)pcVar10;
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar17 = __real_3f800000;
  if (!param_2) {
    param_3 = __real_3f800000;
  }
  QueryPerformanceCounter(&local_168);
  if (3 < (byte)LogSynthBenchmark._0_1_) {
    pFVar11 = &LogSynthBenchmark;
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
    if (3 < (byte)LogSynthBenchmark._0_1_) {
      pFVar11 = &LogSynthBenchmark;
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
      if (3 < (byte)LogSynthBenchmark._0_1_) {
        pFVar11 = &LogSynthBenchmark;
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
      }
    }
  }
  uStack_140 = 0xbf800000;
  uStack_13c = 0xbf800000;
  local_148 = L"RayIntersect";
  local_138 = 0x3cd1cc10;
  pwStack_130 = L"s/Run";
  uVar15 = (int)param_3;
  if ((int)param_3 < 1) {
    uVar15 = 1;
  }
  fVar18 = 0.0;
  param_1->CPUStats[0].Desc = L"RayIntersect";
  param_1->CPUStats[0].MeasuredTotalTime = -1.0;
  param_1->CPUStats[0].MeasuredNormalizedTime = -1.0;
  local_128 = (ulonglong)(uint)fVar17 << 0x20;
  *(ulonglong *)&param_1->CPUStats[0].IndexNormalizedTime = CONCAT44(uStack_134,0x3cd1cc10);
  param_1->CPUStats[0].ValueType = L"s/Run";
  param_1->CPUStats[0].Confidence = (float)(int)local_128;
  param_1->CPUStats[0].Weight = (float)(int)((ulonglong)local_128 >> 0x20);
  if (uVar15 != 0) {
    uVar12 = (ulonglong)uVar15;
    do {
      QueryPerformanceCounter(&local_160);
      dVar2 = (double)local_160.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      fVar17 = RayIntersectBenchmark();
      GGlobalStateObject = GGlobalStateObject + fVar17;
      QueryPerformanceCounter(&local_158);
      fVar18 = fVar18 + (float)((double)local_158.QuadPart * FGenericPlatformTime::SecondsPerCycle -
                               dVar2);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar3 = __real_3fc00000;
  param_1->CPUStats[0].MeasuredTotalTime = fVar18;
  param_1->CPUStats[0].Confidence = 90.0;
  uStack_118 = 0xbf800000;
  uStack_114 = 0xbf800000;
  local_110 = 0x3cea4a8c;
  pwStack_108 = L"s/Run";
  local_120 = L"Fractal";
  param_1->CPUStats[0].MeasuredNormalizedTime = fVar18 / (float)uVar15;
  param_1->CPUStats[1].Desc = L"Fractal";
  param_1->CPUStats[1].MeasuredTotalTime = -1.0;
  param_1->CPUStats[1].MeasuredNormalizedTime = -1.0;
  *(ulonglong *)&param_1->CPUStats[1].IndexNormalizedTime = CONCAT44(uStack_10c,0x3cea4a8c);
  param_1->CPUStats[1].ValueType = L"s/Run";
  local_100 = (ulonglong)uVar3 << 0x20;
  param_1->CPUStats[1].Confidence = (float)(int)local_100;
  param_1->CPUStats[1].Weight = (float)(int)((ulonglong)local_100 >> 0x20);
  FVar5 = RunBenchmark(0.0,(_func___cdecl_float *)pFVar11);
  param_1->CPUStats[1].MeasuredTotalTime = *(float *)FVar5;
  param_1->CPUStats[1].MeasuredNormalizedTime = *(float *)((longlong)FVar5 + 4);
  param_1->CPUStats[1].Confidence = 90.0;
  if ((((((3 < (byte)LogSynthBenchmark._0_1_) &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark),
         3 < (byte)LogSynthBenchmark._0_1_)) &&
        (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark),
        3 < (byte)LogSynthBenchmark._0_1_)) &&
       ((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark),
        3 < (byte)LogSynthBenchmark._0_1_ &&
        (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark),
        3 < (byte)LogSynthBenchmark._0_1_)))) &&
      (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark),
      3 < (byte)LogSynthBenchmark._0_1_)) &&
     ((UE::Logging::Private::BasicLog<4>
                 ((FStaticBasicLogRecord *)&PTR_u___UE_BUILD_TEST_1513da700,
                  (FLogCategoryBase *)&LogSynthBenchmark), 3 < (byte)LogSynthBenchmark._0_1_ &&
      (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark),
      3 < (byte)LogSynthBenchmark._0_1_)))) {
    FGenericPlatformMemory::GetPhysicalGBRam();
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
    if (3 < (byte)LogSynthBenchmark._0_1_) {
      FWindowsPlatformMisc::NumberOfCores();
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
      if (3 < (byte)LogSynthBenchmark._0_1_) {
        FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
      }
    }
  }
  if (((((3 < (byte)LogSynthBenchmark._0_1_) &&
        (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark),
        3 < (byte)LogSynthBenchmark._0_1_)) &&
       (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark),
       3 < (byte)LogSynthBenchmark._0_1_)) &&
      (((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark),
        3 < (byte)LogSynthBenchmark._0_1_ &&
        (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark),
        3 < (byte)LogSynthBenchmark._0_1_)) &&
       ((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark),
        3 < (byte)LogSynthBenchmark._0_1_ &&
        ((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark),
         3 < (byte)LogSynthBenchmark._0_1_ &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark),
         3 < (byte)LogSynthBenchmark._0_1_)))))))) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark),
     3 < (byte)LogSynthBenchmark._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar9 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar9,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    iVar14 = 0;
    local_f8 = ___xmm_ffffffffffffffffffffffffffffffff;
    lStack_f0 = _UNK_15060db28;
    local_e8 = ___xmm_ffffffffffffffffffffffffffffffff;
    lStack_e0 = _UNK_15060db28;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    if (((GDynamicRHI != (FDynamicRHI *)0x0) &&
        ((**(code **)(GDynamicRHI->_padding_ + 0x188))(), -1 < local_f8)) &&
       ((-1 < lStack_f0 && ((-1 < local_e8 && (3 < (byte)LogSynthBenchmark._0_1_)))))) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
    }
    fVar17 = 0.0;
    if (param_2) {
      pFVar6 = FModuleManager::Get();
      pFVar7 = ::FName::FName(&local_b0,L"Renderer");
      bVar4 = FModuleManager::IsModuleLoaded(pFVar6,*pFVar7);
      if (bVar4) {
        pFVar7 = ::FName::FName(&local_a8,L"Renderer");
        local_res10 = *pFVar7;
        pFVar6 = FModuleManager::Get();
        bVar4 = FModuleManager::IsModuleLoaded(pFVar6,local_res10);
        if (!bVar4) {
          ::FName::ToString(&local_res10,local_a0);
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("ModuleManager.IsModuleLoaded(ModuleName)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                             ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
          if (local_a0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0[0].Data.AllocatorInstance.Data);
          }
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pIVar8 = FModuleManager::GetModule(pFVar6,local_res10);
        lVar16 = 7;
        if (0 < GSynthBenchmarkGPUWarmupRounds) {
          do {
            (**(code **)((longlong)*pIVar8 + 0xd0))
                      (pIVar8,param_1,param_3 * GSynthBenchmarkGPUWarmupWorkScale);
            fVar17 = param_1->GPUStats[0].MeasuredTotalTime + param_1->GPUStats[1].MeasuredTotalTime
                     + param_1->GPUStats[2].MeasuredTotalTime +
                     param_1->GPUStats[3].MeasuredTotalTime + param_1->GPUStats[4].MeasuredTotalTime
                     + param_1->GPUStats[5].MeasuredTotalTime +
                     param_1->GPUStats[6].MeasuredTotalTime;
            if (3 < (byte)LogSynthBenchmark._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
            }
            lVar13 = 7;
            do {
              if (3 < (byte)LogSynthBenchmark._0_1_) {
                UE::Logging::Private::BasicLog<4>
                          (&`void___cdecl_PrintGPUStats<7>(struct_FSynthBenchmarkStat_(&___ptr64)[7],wchar_t_const*___ptr64)'
                            ::__l5::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
              }
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            iVar14 = iVar14 + 1;
          } while (iVar14 < GSynthBenchmarkGPUWarmupRounds);
        }
        uVar15 = 0;
        if (fVar17 < GSynthBenchmarkGPUFullTestThreshold) {
          (**(code **)((longlong)*pIVar8 + 0xd0))(pIVar8,param_1,param_3);
          fVar17 = param_1->GPUStats[1].MeasuredTotalTime + param_1->GPUStats[0].MeasuredTotalTime +
                   param_1->GPUStats[2].MeasuredTotalTime + param_1->GPUStats[3].MeasuredTotalTime +
                   param_1->GPUStats[4].MeasuredTotalTime + param_1->GPUStats[5].MeasuredTotalTime +
                   param_1->GPUStats[6].MeasuredTotalTime;
          if (3 < (byte)LogSynthBenchmark._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
          }
          lVar13 = 7;
          do {
            if (3 < (byte)LogSynthBenchmark._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        (&`void___cdecl_PrintGPUStats<7>(struct_FSynthBenchmarkStat_(&___ptr64)[7],wchar_t_const*___ptr64)'
                          ::__l5::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
            }
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        if (0.0 < fVar17) {
          if (3 < (byte)LogSynthBenchmark._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
          }
          do {
            if (3 < (byte)LogSynthBenchmark._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        (&`void___cdecl_PrintGPUStats<7>(struct_FSynthBenchmarkStat_(&___ptr64)[7],wchar_t_const*___ptr64)'
                          ::__l5::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
            }
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          if (3 < (byte)LogSynthBenchmark._0_1_) {
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
          }
          do {
            if (3 < (byte)LogSynthBenchmark._0_1_) {
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < 7);
          if (3 < (byte)LogSynthBenchmark._0_1_) {
            FSynthBenchmarkResults::ComputeGPUPerfIndex
                      (param_1,(TArray<float,TSizedDefaultAllocator<32>_> *)0x0);
            UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
          }
        }
      }
    }
  }
  if (3 < (byte)LogSynthBenchmark._0_1_) {
    FSynthBenchmarkResults::ComputeCPUPerfIndex
              (param_1,(TArray<float,TSizedDefaultAllocator<32>_> *)0x0);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
  }
  if ((3 < (byte)LogSynthBenchmark._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark),
     3 < (byte)LogSynthBenchmark._0_1_)) {
    QueryPerformanceCounter(&local_150);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
  }
  return;
}

// GetRHIDisplay @ 146abd870

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FSynthBenchmark::GetRHIDisplay(FSynthBenchmark *this,FGPUAdpater *param_1)

{
  WriteFStringToResults(param_1->AdapterName,&GRHIGlobals.GpuInfo.AdapterName);
  WriteFStringToResults
            (param_1->AdapterInternalDriverVersion,&GRHIGlobals.GpuInfo.AdapterInternalDriverVersion
            );
  WriteFStringToResults
            (param_1->AdapterUserDriverVersion,&GRHIGlobals.GpuInfo.AdapterUserDriverVersion);
  WriteFStringToResults(param_1->AdapterDriverDate,&GRHIGlobals.GpuInfo.AdapterDriverDate);
  return;
}

// GetRHIInfo @ 146abd8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FSynthBenchmark::GetRHIInfo(FSynthBenchmark *this,FGPUAdpater *param_1,FString *param_2)

{
  wchar_t *pwVar1;
  FString local_58;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  (**(code **)((longlong)*this + 0x48))();
  if (GDynamicRHI != (FDynamicRHI *)0x0) {
    local_48 = ___xmm_ffffffffffffffffffffffffffffffff;
    uStack_40 = _UNK_15060db28;
    local_38 = ___xmm_ffffffffffffffffffffffffffffffff;
    uStack_30 = _UNK_15060db28;
    local_18 = 0;
    uStack_10 = 0;
    local_28 = 0;
    local_20 = 0;
    (**(code **)(GDynamicRHI->_padding_ + 0x188))(GDynamicRHI,&local_48);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    ::FString::AppendInt
              (&local_58,
               (int)((longlong)((ulonglong)((uint)(local_48 >> 0x3f) & 0xfffff) + local_48) >> 0x14)
              );
    WriteFStringToResults(param_1->AdapterDedicatedMemoryMB,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pwVar1 = (wchar_t *)(**(code **)(GDynamicRHI->_padding_ + 0x20))();
    ::FString::operator=(param_2,pwVar1);
  }
  return;
}

