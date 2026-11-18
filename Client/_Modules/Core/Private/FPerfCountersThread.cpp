// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// <lambda_invoker_cdecl> @ 141a9a5b0

void __cdecl
`WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_10>::
<lambda_invoker_cdecl>(double param_1)

{
  ushort uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_1;
  if ((__GTraceCounterMemory_PrivateBytesShaderCompilation.Value != lVar2) &&
     (__GTraceCounterMemory_PrivateBytesShaderCompilation.Value = lVar2,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterMemory_PrivateBytesShaderCompilation.CounterId == (atomic<unsigned_int>)0x0)
    {
      uVar1 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterMemory_PrivateBytesShaderCompilation.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterMemory_PrivateBytesShaderCompilation.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMemory_PrivateBytesShaderCompilation.CounterId == (atomic<unsigned_int>)0x0
         ) {
        __GTraceCounterMemory_PrivateBytesShaderCompilation.CounterId._2_2_ = 0;
        __GTraceCounterMemory_PrivateBytesShaderCompilation.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMemory_PrivateBytesShaderCompilation.CounterId._0_2_,
               __GTraceCounterMemory_PrivateBytesShaderCompilation.Value);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 141a9a630

void __cdecl
`WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(double param_1)

{
  ushort uVar1;
  
  if ((__GTraceCounterSystem_CPU_Usage.Value != param_1) &&
     (__GTraceCounterSystem_CPU_Usage.Value = param_1, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterSystem_CPU_Usage.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterSystem_CPU_Usage.CounterName,TraceCounterType_Float,
                         __GTraceCounterSystem_CPU_Usage.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterSystem_CPU_Usage.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterSystem_CPU_Usage.CounterId._2_2_ = 0;
        __GTraceCounterSystem_CPU_Usage.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterSystem_CPU_Usage.CounterId._0_2_,__GTraceCounterSystem_CPU_Usage.Value
              );
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 141a9a740

void __cdecl
`WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_2>::
<lambda_invoker_cdecl>(double param_1)

{
  ushort uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_1;
  if ((__GTraceCounterSystem_Thread_Count.Value != lVar2) &&
     (__GTraceCounterSystem_Thread_Count.Value = lVar2, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterSystem_Thread_Count.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterSystem_Thread_Count.CounterName,TraceCounterType_Int,
                         __GTraceCounterSystem_Thread_Count.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterSystem_Thread_Count.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterSystem_Thread_Count.CounterId._2_2_ = 0;
        __GTraceCounterSystem_Thread_Count.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterSystem_Thread_Count.CounterId._0_2_,
               __GTraceCounterSystem_Thread_Count.Value);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 141a9a7c0

void __cdecl
`WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_3>::
<lambda_invoker_cdecl>(double param_1)

{
  ushort uVar1;
  
  if ((__GTraceCounterSystem_DemandZeroPageFaults.Value != param_1) &&
     (__GTraceCounterSystem_DemandZeroPageFaults.Value = param_1, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterSystem_DemandZeroPageFaults.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterSystem_DemandZeroPageFaults.CounterName,
                         TraceCounterType_Float,
                         __GTraceCounterSystem_DemandZeroPageFaults.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterSystem_DemandZeroPageFaults.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterSystem_DemandZeroPageFaults.CounterId._2_2_ = 0;
        __GTraceCounterSystem_DemandZeroPageFaults.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterSystem_DemandZeroPageFaults.CounterId._0_2_,
               __GTraceCounterSystem_DemandZeroPageFaults.Value);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 141a9a840

void __cdecl
`WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_4>::
<lambda_invoker_cdecl>(double param_1)

{
  ushort uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_1;
  if ((__GTraceCounterMemory_FreeAndZeroPageList.Value != lVar2) &&
     (__GTraceCounterMemory_FreeAndZeroPageList.Value = lVar2, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterMemory_FreeAndZeroPageList.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterMemory_FreeAndZeroPageList.CounterName,TraceCounterType_Int,
                         __GTraceCounterMemory_FreeAndZeroPageList.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMemory_FreeAndZeroPageList.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterMemory_FreeAndZeroPageList.CounterId._2_2_ = 0;
        __GTraceCounterMemory_FreeAndZeroPageList.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMemory_FreeAndZeroPageList.CounterId._0_2_,
               __GTraceCounterMemory_FreeAndZeroPageList.Value);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 141a9a8c0

void __cdecl
`WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_5>::
<lambda_invoker_cdecl>(double param_1)

{
  ushort uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_1;
  if ((__GTraceCounterSystem_Network_Received.Value != lVar2) &&
     (__GTraceCounterSystem_Network_Received.Value = lVar2, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterSystem_Network_Received.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterSystem_Network_Received.CounterName,TraceCounterType_Int,
                         __GTraceCounterSystem_Network_Received.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterSystem_Network_Received.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterSystem_Network_Received.CounterId._2_2_ = 0;
        __GTraceCounterSystem_Network_Received.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterSystem_Network_Received.CounterId._0_2_,
               __GTraceCounterSystem_Network_Received.Value);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 141a9a940

void __cdecl
`WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_6>::
<lambda_invoker_cdecl>(double param_1)

{
  ushort uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_1;
  if ((__GTraceCounterSystem_Network_Sent.Value != lVar2) &&
     (__GTraceCounterSystem_Network_Sent.Value = lVar2, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterSystem_Network_Sent.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterSystem_Network_Sent.CounterName,TraceCounterType_Int,
                         __GTraceCounterSystem_Network_Sent.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterSystem_Network_Sent.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterSystem_Network_Sent.CounterId._2_2_ = 0;
        __GTraceCounterSystem_Network_Sent.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterSystem_Network_Sent.CounterId._0_2_,
               __GTraceCounterSystem_Network_Sent.Value);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 141a9a9c0

void __cdecl
`WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_7>::
<lambda_invoker_cdecl>(double param_1)

{
  ushort uVar1;
  
  if ((__GTraceCounterSystem_GPU_Usage.Value != param_1) &&
     (__GTraceCounterSystem_GPU_Usage.Value = param_1, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterSystem_GPU_Usage.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterSystem_GPU_Usage.CounterName,TraceCounterType_Float,
                         __GTraceCounterSystem_GPU_Usage.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterSystem_GPU_Usage.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterSystem_GPU_Usage.CounterId._2_2_ = 0;
        __GTraceCounterSystem_GPU_Usage.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterSystem_GPU_Usage.CounterId._0_2_,__GTraceCounterSystem_GPU_Usage.Value
              );
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 141a9aa40

void __cdecl
`WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_8>::
<lambda_invoker_cdecl>(double param_1)

{
  ushort uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_1;
  if ((__GTraceCounterMemory_UsedDedicatedVRAM.Value != lVar2) &&
     (__GTraceCounterMemory_UsedDedicatedVRAM.Value = lVar2, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterMemory_UsedDedicatedVRAM.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterMemory_UsedDedicatedVRAM.CounterName,TraceCounterType_Int,
                         __GTraceCounterMemory_UsedDedicatedVRAM.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMemory_UsedDedicatedVRAM.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterMemory_UsedDedicatedVRAM.CounterId._2_2_ = 0;
        __GTraceCounterMemory_UsedDedicatedVRAM.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMemory_UsedDedicatedVRAM.CounterId._0_2_,
               __GTraceCounterMemory_UsedDedicatedVRAM.Value);
    return;
  }
  return;
}

// <lambda_invoker_cdecl> @ 141a9aac0

void __cdecl
`WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_9>::
<lambda_invoker_cdecl>(double param_1)

{
  ushort uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_1;
  if ((__GTraceCounterMemory_UsedVirtualShaderCompilation.Value != lVar2) &&
     (__GTraceCounterMemory_UsedVirtualShaderCompilation.Value = lVar2,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterMemory_UsedVirtualShaderCompilation.CounterId == (atomic<unsigned_int>)0x0) {
      uVar1 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterMemory_UsedVirtualShaderCompilation.CounterName,
                         TraceCounterType_Int,
                         __GTraceCounterMemory_UsedVirtualShaderCompilation.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterMemory_UsedVirtualShaderCompilation.CounterId == (atomic<unsigned_int>)0x0)
      {
        __GTraceCounterMemory_UsedVirtualShaderCompilation.CounterId._2_2_ = 0;
        __GTraceCounterMemory_UsedVirtualShaderCompilation.CounterId._0_2_ = uVar1;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterMemory_UsedVirtualShaderCompilation.CounterId._0_2_,
               __GTraceCounterMemory_UsedVirtualShaderCompilation.Value);
    return;
  }
  return;
}

// Run @ 141abf430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run(FPerfCountersThread *this)

{
  uint uVar1;
  code *pcVar2;
  longlong *plVar3;
  ushort uVar4;
  int iVar5;
  void *pvVar6;
  ulonglong uVar7;
  double *pdVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  code **ppcVar11;
  longlong *plVar12;
  wchar_t **ppwVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  void *pvVar17;
  longlong lVar18;
  code **ppcVar19;
  longlong lVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_448 [32];
  void *local_428;
  uint local_418;
  uint local_414;
  undefined8 local_410;
  double local_408;
  FPerfCountersThread *local_400;
  longlong local_3f8;
  FPlatformMemoryStats local_3e8;
  wchar_t *local_358 [2];
  code *local_348 [2];
  undefined **local_338;
  code *local_330;
  undefined8 local_320;
  undefined8 local_318;
  wchar_t *local_308;
  code *local_2f8;
  undefined **local_2e8;
  code *local_2e0;
  undefined8 local_2d0;
  undefined8 local_2c8;
  wchar_t *local_2b8;
  code *local_2a8;
  undefined **local_298;
  code *local_290;
  undefined8 local_280;
  undefined8 local_278;
  wchar_t *local_268;
  code *local_258;
  undefined **local_248;
  code *local_240;
  undefined8 local_230;
  undefined8 local_228;
  wchar_t *local_218;
  code *local_208;
  undefined **local_1f8;
  code *local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  wchar_t *local_1c8;
  code *local_1b8;
  undefined **local_1a8;
  code *local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  wchar_t *local_178;
  code *local_168;
  undefined **local_158;
  code *local_150;
  undefined8 local_140;
  undefined8 local_138;
  wchar_t *local_128;
  code *local_118;
  undefined **local_108;
  code *local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  wchar_t *local_d8;
  code *local_c8;
  undefined **local_b8;
  code *local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  wchar_t *local_88;
  code *local_78;
  undefined **local_68;
  code *local_60;
  undefined8 local_50;
  undefined8 local_48;
  wchar_t *local_38 [2];
  
  local_38[0] = (wchar_t *)(__security_cookie.value ^ (ulonglong)auStack_448);
  local_358[0] = L"\\Processor(_Total)\\% Processor Time";
  pvVar6 = (void *)0x0;
  local_330 = `WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_1>::
              <lambda_invoker_cdecl>;
  local_308 = L"\\Process(_Total)\\Thread Count";
  local_2e0 = `WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_2>::
              <lambda_invoker_cdecl>;
  local_2b8 = L"\\Memory\\Demand Zero Faults/sec";
  local_290 = `WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_3>::
              <lambda_invoker_cdecl>;
  local_268 = L"\\Memory\\Free & Zero Page List Bytes";
  local_240 = `WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_4>::
              <lambda_invoker_cdecl>;
  local_218 = L"\\Network Interface(*)\\Bytes Received/sec";
  local_1f0 = `WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_5>::
              <lambda_invoker_cdecl>;
  local_1c8 = L"\\Network Interface(*)\\Bytes Sent/sec";
  local_1a0 = `WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_6>::
              <lambda_invoker_cdecl>;
  local_178 = L"\\GPU Engine(*)\\Utilization Percentage";
  local_150 = `WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_7>::
              <lambda_invoker_cdecl>;
  local_128 = L"\\GPU Adapter Memory(*)\\Dedicated Usage";
  local_100 = `WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_8>::
              <lambda_invoker_cdecl>;
  local_d8 = L"\\Process(ShaderCompileWorker*)\\Page File Bytes";
  local_b0 = `WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_9>::
             <lambda_invoker_cdecl>;
  local_320 = 0;
  local_338 = &___7__TFunction_OwnedObject_P6AXN_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_348[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<void_(__cdecl*)(double),void,double>::Call;
  local_318 = 0;
  local_2d0 = 0;
  local_2e8 = &___7__TFunction_OwnedObject_P6AXN_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_2f8 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(double),void,double>::
              Call;
  local_2c8 = 0;
  local_280 = 0;
  local_298 = &___7__TFunction_OwnedObject_P6AXN_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_2a8 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(double),void,double>::
              Call;
  local_278 = 0;
  local_230 = 0;
  local_248 = &___7__TFunction_OwnedObject_P6AXN_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_258 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(double),void,double>::
              Call;
  local_228 = 0;
  local_1e0 = 0;
  local_1f8 = &___7__TFunction_OwnedObject_P6AXN_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_208 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(double),void,double>::
              Call;
  local_1d8 = 0;
  local_190 = 0;
  local_1a8 = &___7__TFunction_OwnedObject_P6AXN_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_1b8 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(double),void,double>::
              Call;
  local_188 = 0;
  local_140 = 0;
  local_158 = &___7__TFunction_OwnedObject_P6AXN_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_168 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(double),void,double>::
              Call;
  local_138 = 0;
  local_f0 = 0;
  local_108 = &___7__TFunction_OwnedObject_P6AXN_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_118 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(double),void,double>::
              Call;
  local_e8 = 0;
  local_a0 = 0;
  local_b8 = &___7__TFunction_OwnedObject_P6AXN_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_c8 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(double),void,double>::
             Call;
  local_68 = &___7__TFunction_OwnedObject_P6AXN_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_88 = L"\\Process(ShaderCompileWorker*)\\Private Bytes";
  local_78 = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(double),void,double>::
             Call;
  local_60 = `WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run'::__l2::<lambda_10>::
             <lambda_invoker_cdecl>;
  local_98 = 0;
  local_50 = 0;
  local_48 = 0;
  local_410 = 0;
  local_400 = this;
  PdhOpenQueryW(0,0,&local_410);
  ppwVar13 = local_358;
  do {
    PdhAddCounterW(local_410,*ppwVar13,0,ppwVar13 + 8);
    ppwVar13 = ppwVar13 + 10;
  } while (ppwVar13 != local_38);
  lVar18 = 10;
  if (this->bContinue != (atomic<bool>)0x0) {
    local_3f8 = (longlong)(this->SampleIntervalInSeconds * __real_447a0000);
    pvVar17 = pvVar6;
    do {
      lVar20 = local_3f8;
      bVar21 = -1 < CpuChannel->Enabled;
      if (bVar21) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:_virtual_unsigned_int___cdecl_WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run(void)___ptr64'
                    ::__l8::__CpuProfilerEventSpecId114,"FCountersStatsThread::Tick",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Windows\\WindowsPlatformPerfCounters.cpp"
                   ,0x72);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:_virtual_unsigned_int___cdecl_WindowsPlatformPerfCountersImpl::FPerfCountersThread::Run(void)___ptr64'
                   ::__l8::__CpuProfilerEventSpecId114);
      }
      if ((DWORD)lVar20 == 0) {
        SwitchToThread();
      }
      else {
        Sleep((DWORD)lVar20);
      }
      FWindowsPlatformMemory::GetStats(&local_3e8);
      if ((__GTraceCounterMemory_TotalPhysical.Value != local_3e8._padding_) &&
         (__GTraceCounterMemory_TotalPhysical.Value = local_3e8._padding_,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterMemory_TotalPhysical.CounterId == (atomic<unsigned_int>)0x0) {
          uVar4 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterMemory_TotalPhysical.CounterName,TraceCounterType_Int,
                             __GTraceCounterMemory_TotalPhysical.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterMemory_TotalPhysical.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterMemory_TotalPhysical.CounterId._2_2_ = 0;
            __GTraceCounterMemory_TotalPhysical.CounterId._0_2_ = uVar4;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterMemory_TotalPhysical.CounterId._0_2_,
                   __GTraceCounterMemory_TotalPhysical.Value);
      }
      if ((__GTraceCounterMemory_TotalVirtual.Value != local_3e8._padding_) &&
         (__GTraceCounterMemory_TotalVirtual.Value = local_3e8._padding_,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterMemory_TotalVirtual.CounterId == (atomic<unsigned_int>)0x0) {
          uVar4 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterMemory_TotalVirtual.CounterName,TraceCounterType_Int,
                             __GTraceCounterMemory_TotalVirtual.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterMemory_TotalVirtual.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterMemory_TotalVirtual.CounterId._2_2_ = 0;
            __GTraceCounterMemory_TotalVirtual.CounterId._0_2_ = uVar4;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterMemory_TotalVirtual.CounterId._0_2_,
                   __GTraceCounterMemory_TotalVirtual.Value);
      }
      if ((__GTraceCounterMemory_UsedPhysical.Value != local_3e8._padding_) &&
         (__GTraceCounterMemory_UsedPhysical.Value = local_3e8._padding_,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterMemory_UsedPhysical.CounterId == (atomic<unsigned_int>)0x0) {
          uVar4 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterMemory_UsedPhysical.CounterName,TraceCounterType_Int,
                             __GTraceCounterMemory_UsedPhysical.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterMemory_UsedPhysical.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterMemory_UsedPhysical.CounterId._2_2_ = 0;
            __GTraceCounterMemory_UsedPhysical.CounterId._0_2_ = uVar4;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterMemory_UsedPhysical.CounterId._0_2_,
                   __GTraceCounterMemory_UsedPhysical.Value);
      }
      if ((__GTraceCounterMemory_UsedVirtual.Value != local_3e8._padding_) &&
         (__GTraceCounterMemory_UsedVirtual.Value = local_3e8._padding_,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterMemory_UsedVirtual.CounterId == (atomic<unsigned_int>)0x0) {
          uVar4 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterMemory_UsedVirtual.CounterName,TraceCounterType_Int,
                             __GTraceCounterMemory_UsedVirtual.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterMemory_UsedVirtual.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterMemory_UsedVirtual.CounterId._2_2_ = 0;
            __GTraceCounterMemory_UsedVirtual.CounterId._0_2_ = uVar4;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterMemory_UsedVirtual.CounterId._0_2_,
                   __GTraceCounterMemory_UsedVirtual.Value);
      }
      if ((__GTraceCounterMemory_AvailablePhysical.Value != local_3e8._padding_) &&
         (__GTraceCounterMemory_AvailablePhysical.Value = local_3e8._padding_,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterMemory_AvailablePhysical.CounterId == (atomic<unsigned_int>)0x0) {
          uVar4 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterMemory_AvailablePhysical.CounterName,
                             TraceCounterType_Int,
                             __GTraceCounterMemory_AvailablePhysical.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterMemory_AvailablePhysical.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterMemory_AvailablePhysical.CounterId._2_2_ = 0;
            __GTraceCounterMemory_AvailablePhysical.CounterId._0_2_ = uVar4;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterMemory_AvailablePhysical.CounterId._0_2_,
                   __GTraceCounterMemory_AvailablePhysical.Value);
      }
      if ((__GTraceCounterMemory_AvailableVirtual.Value != local_3e8._padding_) &&
         (__GTraceCounterMemory_AvailableVirtual.Value = local_3e8._padding_,
         -1 < CountersChannel->Enabled)) {
        if (__GTraceCounterMemory_AvailableVirtual.CounterId == (atomic<unsigned_int>)0x0) {
          uVar4 = FCountersTrace::OutputInitCounter
                            (__GTraceCounterMemory_AvailableVirtual.CounterName,TraceCounterType_Int
                             ,__GTraceCounterMemory_AvailableVirtual.CounterFlags & 0xf);
          LOCK();
          if (__GTraceCounterMemory_AvailableVirtual.CounterId == (atomic<unsigned_int>)0x0) {
            __GTraceCounterMemory_AvailableVirtual.CounterId._2_2_ = 0;
            __GTraceCounterMemory_AvailableVirtual.CounterId._0_2_ = uVar4;
          }
          UNLOCK();
        }
        FCountersTrace::OutputSetValue
                  (__GTraceCounterMemory_AvailableVirtual.CounterId._0_2_,
                   __GTraceCounterMemory_AvailableVirtual.Value);
      }
      PdhCollectQueryData(local_410);
      lVar20 = 10;
      ppcVar19 = local_348;
      do {
        uVar15 = 0;
        local_414 = 0;
        local_418 = 0;
        local_428 = (void *)0x0;
        iVar5 = PdhGetFormattedCounterArrayW(ppcVar19[6],0x200,&local_418,&local_414);
        if (iVar5 == -0x7ffff82e) {
          if ((pvVar6 == (void *)0x0) || ((uint)pvVar17 < local_418)) {
            pvVar6 = FMemory::Realloc(pvVar6,(ulonglong)local_418,0);
            pvVar17 = (void *)(ulonglong)local_418;
            if (pvVar6 == (void *)0x0) goto LAB_141abfb70;
          }
          local_428 = pvVar6;
          iVar5 = PdhGetFormattedCounterArrayW(ppcVar19[6],0x200,&local_418,&local_414);
          if (iVar5 == 0) {
            local_408 = 0.0;
            dVar22 = 0.0;
            if (local_414 != 0) {
              if (3 < local_414) {
                dVar23 = 0.0;
                dVar24 = 0.0;
                uVar16 = 2;
                uVar10 = 0;
                do {
                  uVar15 = (int)uVar10 + 4;
                  uVar7 = (ulonglong)uVar16;
                  local_408 = local_408 + *(double *)((longlong)pvVar6 + uVar10 * 0x18 + 0x10);
                  dVar22 = dVar22 + *(double *)
                                     ((longlong)pvVar6 + (ulonglong)(uVar16 - 1) * 0x18 + 0x10);
                  uVar1 = uVar16 + 1;
                  uVar16 = uVar16 + 4;
                  dVar23 = dVar23 + *(double *)((longlong)pvVar6 + uVar7 * 0x18 + 0x10);
                  dVar24 = dVar24 + *(double *)((longlong)pvVar6 + (ulonglong)uVar1 * 0x18 + 0x10);
                  uVar10 = (ulonglong)uVar15;
                } while (uVar15 < (local_414 & 0xfffffffc));
                local_408 = local_408 + dVar23 + dVar22 + dVar24;
              }
              if (uVar15 < local_414) {
                pdVar8 = (double *)((longlong)pvVar6 + (ulonglong)uVar15 * 0x18 + 0x10);
                uVar10 = (ulonglong)(local_414 - uVar15);
                do {
                  local_408 = local_408 + *pdVar8;
                  pdVar8 = pdVar8 + 3;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
            }
            UE::Core::Private::Function::CheckCallable(*ppcVar19);
            pcVar2 = *ppcVar19;
            ppcVar11 = ppcVar19 + 2;
            if ((code **)ppcVar19[5] != (code **)0x0) {
              ppcVar11 = (code **)ppcVar19[5];
            }
            uVar9 = (**(code **)(*ppcVar11 + 8))();
            (*pcVar2)(uVar9);
          }
        }
LAB_141abfb70:
        ppcVar19 = ppcVar19 + 10;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      if (bVar21) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    } while (local_400->bContinue != (atomic<bool>)0x0);
  }
  FMemory::Free(pvVar6);
  PdhCloseQuery(local_410);
  plVar14 = (longlong *)register0x00000020;
  do {
    lVar18 = lVar18 + -1;
    if (plVar14[-0xf] != 0) {
      plVar3 = (longlong *)plVar14[-10];
      plVar12 = plVar14 + -0xd;
      if (plVar3 != (longlong *)0x0) {
        plVar12 = plVar3;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    plVar14 = plVar14 + -10;
  } while (lVar18 != 0);
  return 0;
}

