// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SynthBenchmark
// Functions: 16

// `dynamic_initializer_for_'CVarSynthBenchmarkGPUFullTestThreshold'' @ 1410a6150

void __cdecl _dynamic_initializer_for__CVarSynthBenchmarkGPUFullTestThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSynthBenchmarkGPUFullTestThreshold,L"r.SynthBenchmark.GPUWarmupThreshold",
             &GSynthBenchmarkGPUFullTestThreshold,
             L"Controls the maximum time, in seconds, used to determine whether to run the full GPU synthetic benchmark workload (default 1 second).\nIf the last warmup round takes longer than this threshold, the full GPU test is not run to avoid the risk of triggering the GPU hang detection (TDR)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSynthBenchmarkGPUFullTestThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarSynthBenchmarkGPUWarmupRounds'' @ 1410a61a0

void __cdecl _dynamic_initializer_for__CVarSynthBenchmarkGPUWarmupRounds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSynthBenchmarkGPUWarmupRounds,L"r.SynthBenchmark.GPUWarmupRounds",
             &GSynthBenchmarkGPUWarmupRounds,
             L"The number of warmup rounds for the GPU synthetic benchmark (default 3).",0);
  atexit(_dynamic_atexit_destructor_for__CVarSynthBenchmarkGPUWarmupRounds__);
  return;
}

// `dynamic_initializer_for_'CVarSynthBenchmarkGPUWarmupWorkScale'' @ 1410a61f0

void __cdecl _dynamic_initializer_for__CVarSynthBenchmarkGPUWarmupWorkScale__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSynthBenchmarkGPUWarmupWorkScale,L"r.SynthBenchmark.GPUWarmupWorkScale",
             &GSynthBenchmarkGPUWarmupWorkScale,
             L"The workload scale applied to the GPU synthetic benchmark\'s warmup rounds (default 0.15f)."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSynthBenchmarkGPUWarmupWorkScale__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantSynthBenchmark'' @ 1410a6240

void __cdecl _dynamic_initializer_for__ModuleRegistrantSynthBenchmark__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "SynthBenchmark";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"SynthBenchmark",0xe);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FSynthBenchmark>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 146abcbe0

void * __thiscall ISynthBenchmark::_scalar_deleting_destructor_(ISynthBenchmark *this,uint param_1)

{
  *this = (ISynthBenchmark)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146abd9c0

void * __thiscall FSynthBenchmark::_scalar_deleting_destructor_(FSynthBenchmark *this,uint param_1)

{
  *this = (FSynthBenchmark)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// PrintGPUStats<7> @ 146abda00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl PrintGPUStats<7>(FSynthBenchmarkStat (*param_1) [7],wchar_t *param_2)

{
  longlong lVar1;
  
  lVar1 = 7;
  do {
    if (3 < (byte)LogSynthBenchmark._0_1_) {
      UE::Logging::Private::BasicLog<4>
                (&`void___cdecl_PrintGPUStats<7>(struct_FSynthBenchmarkStat_(&___ptr64)[7],wchar_t_const*___ptr64)'
                  ::__l5::LOG_Static,(FLogCategoryBase *)&LogSynthBenchmark);
    }
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

// EvaluateJuliaFractalAt @ 146abdab0

uint __cdecl EvaluateJuliaFractalAt(float param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = 0;
  do {
    if (299 < uVar1) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    fVar2 = param_1 + param_1;
    param_1 = (param_1 * param_1 - param_2 * param_2) - __real_3f3ae148;
    param_2 = fVar2 * param_2 + __real_3e343958;
  } while (param_1 * param_1 + param_2 * param_2 <= __real_44c80000);
  return uVar1;
}

// FractalBenchmark @ 146abdb40

float __cdecl FractalBenchmark(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar3 = 0;
  fVar7 = 0.0;
  do {
    iVar2 = 0;
    do {
      uVar1 = 0;
      fVar5 = (float)iVar2 * __real_3c000000 - __real_3f800000;
      fVar6 = (float)iVar3 * __real_3c000000 - __real_3f800000;
      do {
        if (299 < uVar1) break;
        uVar1 = uVar1 + 1;
        fVar4 = fVar6 * fVar6;
        fVar6 = (fVar5 + fVar5) * fVar6 + __real_3e343958;
        fVar5 = (fVar5 * fVar5 - fVar4) - __real_3f3ae148;
      } while (fVar5 * fVar5 + fVar6 * fVar6 <= __real_44c80000);
      iVar2 = iVar2 + 1;
      fVar7 = fVar7 + (float)uVar1;
    } while (iVar2 < 0x100);
    iVar3 = iVar3 + 1;
    if (0xff < iVar3) {
      uVar1 = rand();
      return (float)(uVar1 & 0x7fff) * __real_38000100 + fVar7 * __real_37800000;
    }
  } while( true );
}

// RayIntersectBenchmark @ 146abdcb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl RayIntersectBenchmark(void)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  uVar5 = 0x1234;
  iVar7 = 0;
  lVar8 = 200000;
  do {
    do {
      do {
        uVar5 = uVar5 * 0xbb38435 + 0x3619636b;
        uVar6 = uVar5 * 0xbb38435 + 0x3619636b;
        fVar9 = (float)(uVar5 >> 9 | 0x3f800000) - __real_3f800000;
        uVar5 = uVar6 * 0xbb38435 + 0x3619636b;
        dVar15 = (double)((fVar9 + fVar9) - __real_3f800000);
        fVar9 = (float)(uVar6 >> 9 | 0x3f800000) - __real_3f800000;
        dVar13 = (double)((fVar9 + fVar9) - __real_3f800000);
        fVar9 = (float)(uVar5 >> 9 | 0x3f800000) - __real_3f800000;
        dVar14 = (double)((fVar9 + fVar9) - __real_3f800000);
        dVar11 = dVar13 * dVar13 + dVar15 * dVar15 + dVar14 * dVar14;
      } while (__real_3ff0000000000000 < dVar11);
    } while (dVar11 < __real_3f1a36e2e0000000);
    dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
    dVar15 = dVar15 * dVar11 * __real_4008000000000000;
    dVar13 = dVar13 * dVar11 * __real_4008000000000000;
    dVar11 = dVar14 * dVar11 * __real_4008000000000000;
    do {
      do {
        uVar5 = uVar5 * 0xbb38435 + 0x3619636b;
        uVar6 = uVar5 * 0xbb38435 + 0x3619636b;
        fVar9 = (float)(uVar5 >> 9 | 0x3f800000) - __real_3f800000;
        uVar5 = uVar6 * 0xbb38435 + 0x3619636b;
        dVar14 = (double)((fVar9 + fVar9) - __real_3f800000);
        fVar9 = (float)(uVar6 >> 9 | 0x3f800000) - __real_3f800000;
        dVar3 = (double)((fVar9 + fVar9) - __real_3f800000);
        fVar9 = (float)(uVar5 >> 9 | 0x3f800000) - __real_3f800000;
        dVar2 = (double)((fVar9 + fVar9) - __real_3f800000);
        dVar12 = dVar3 * dVar3 + dVar14 * dVar14 + dVar2 * dVar2;
      } while (__real_3ff0000000000000 < dVar12);
    } while (dVar12 < __real_3f1a36e2e0000000);
    dVar10 = __real_3ff0000000000000 / SQRT(dVar12);
    dVar12 = dVar3 * dVar10 * __real_4008000000000000 - dVar13;
    dVar3 = dVar14 * dVar10 * __real_4008000000000000 - dVar15;
    dVar2 = dVar2 * dVar10 * __real_4008000000000000 - dVar11;
    dVar14 = dVar12 * ___real_bfffffffe6000000 * ___real_bffffffff0000000 -
             dVar12 * ___real_bffffffff0000000 * ___real_400199998d000000;
    if (dVar14 < __real_3ee4f8b588e368f1) {
LAB_146abe026:
      bVar1 = false;
    }
    else {
      dVar15 = dVar15 - __real_3fb99999a0000000;
      dVar13 = dVar13 - __real_3fc99999a0000000;
      dVar11 = dVar11 - ___real_4002666660000000;
      dVar10 = (dVar2 * ___real_3fffffffe6000000 - dVar3 * ___real_bffffffff0000000) * dVar13 +
               dVar15 * dVar12 * ___real_bffffffff0000000 +
               dVar11 * dVar12 * ___real_bfffffffe6000000;
      if ((dVar10 < 0.0) || (dVar14 < dVar10)) goto LAB_146abe026;
      dVar15 = (dVar13 * ___real_bffffffff0000000 * dVar3 -
               (dVar11 * ___real_400199998d000000 - dVar15 * __real_3ffffffff0000000) * dVar12) +
               dVar13 * ___real_400199998d000000 * dVar2;
      if ((dVar15 < 0.0) || (dVar14 < dVar15 + dVar10)) goto LAB_146abe026;
      bVar1 = 0.0 <= (dVar13 * ___real_bffffffff0000000 * ___real_3fffffffe6000000 -
                     dVar13 * ___real_400199998d000000 * __real_3ffffffff0000000) / dVar14;
    }
    iVar4 = iVar7 + 1;
    if (!bVar1) {
      iVar4 = iVar7;
    }
    iVar7 = iVar4;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) {
      return (float)iVar7 * ___real_36a7c5ac;
    }
  } while( true );
}

// RunBenchmark @ 146abe0a0

FTimeSample __cdecl RunBenchmark(float param_1,_func___cdecl_float *param_2)

{
  double dVar1;
  FTimeSample in_RCX;
  uint uVar2;
  ulonglong uVar3;
  code *in_R8;
  float fVar4;
  float in_XMM1_Da;
  float fVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar2 = (uint)in_XMM1_Da;
  fVar5 = 0.0;
  if ((int)uVar2 < 1) {
    uVar2 = 1;
  }
  if (uVar2 != 0) {
    uVar3 = (ulonglong)uVar2;
    do {
      QueryPerformanceCounter(&local_res8);
      dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      fVar4 = (float)(*in_R8)();
      GGlobalStateObject = GGlobalStateObject + fVar4;
      QueryPerformanceCounter(&local_res20);
      fVar5 = fVar5 + (float)((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle -
                             dVar1);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(float *)in_RCX = fVar5;
  *(float *)((longlong)in_RCX + 4) = fVar5 / (float)uVar2;
  return in_RCX;
}

// WriteFStringToResults @ 146abe190

void __cdecl WriteFStringToResults(wchar_t *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  memset(param_1,0,0x208);
  iVar5 = 0;
  lVar6 = 0;
  while( true ) {
    iVar3 = (param_2->Data).ArrayNum;
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    iVar3 = 0x103;
    if (iVar4 < 0x103) {
      iVar3 = iVar4;
    }
    if (iVar3 <= iVar5) break;
    if ((iVar5 < 0) || (iVar4 <= iVar5)) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar5 = iVar5 + 1;
    *param_1 = *(wchar_t *)((param_2->Data).AllocatorInstance.Data + lVar6);
    param_1 = param_1 + 1;
    lVar6 = lVar6 + 2;
  }
  return;
}

// IMPLEMENT_MODULE_SynthBenchmark @ 146abe260

void __cdecl IMPLEMENT_MODULE_SynthBenchmark(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarSynthBenchmarkGPUFullTestThreshold'' @ 1503ddbc0

void __cdecl _dynamic_atexit_destructor_for__CVarSynthBenchmarkGPUFullTestThreshold__(void)

{
  CVarSynthBenchmarkGPUFullTestThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSynthBenchmarkGPUFullTestThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSynthBenchmarkGPUWarmupRounds'' @ 1503ddbe0

void __cdecl _dynamic_atexit_destructor_for__CVarSynthBenchmarkGPUWarmupRounds__(void)

{
  CVarSynthBenchmarkGPUWarmupRounds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSynthBenchmarkGPUWarmupRounds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSynthBenchmarkGPUWarmupWorkScale'' @ 1503ddc00

void __cdecl _dynamic_atexit_destructor_for__CVarSynthBenchmarkGPUWarmupWorkScale__(void)

{
  CVarSynthBenchmarkGPUWarmupWorkScale._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSynthBenchmarkGPUWarmupWorkScale);
  return;
}

