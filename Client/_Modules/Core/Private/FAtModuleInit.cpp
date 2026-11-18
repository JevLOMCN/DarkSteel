// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FAtModuleInit @ 141986100

FAtModuleInit * __thiscall VTuneProfiler::FAtModuleInit::FAtModuleInit(FAtModuleInit *this)

{
  code *pcVar1;
  TUniquePtr<FVTuneExternalProfiler,TDefaultDelete<FVTuneExternalProfiler>_> TVar2;
  bool bVar3;
  FAtModuleInit *pFVar4;
  void *pvVar5;
  _func___cdecl_void *p_Var6;
  ___itt_domain *p_Var7;
  FVTuneExternalProfiler *this_00;
  ___itt_domain *p_Var8;
  
  p_Var7 = (___itt_domain *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_VTuneProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_VTuneProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_VTuneProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    this_00 = ::operator_new(0x28);
    p_Var8 = p_Var7;
    if (this_00 != (FVTuneExternalProfiler *)0x0) {
      p_Var8 = (___itt_domain *)FVTuneExternalProfiler::FVTuneExternalProfiler(this_00);
    }
    `public:___cdecl_VTuneProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::ProfilerVTune
    .Ptr = (FVTuneExternalProfiler *)p_Var8;
    atexit(`VTuneProfiler::FAtModuleInit::FAtModuleInit'::__l2::
           _dynamic_atexit_destructor_for__ProfilerVTune__);
    _Init_thread_footer(&`public:___cdecl_VTuneProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2.Ptr = `public:___cdecl_VTuneProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
              ProfilerVTune.Ptr;
  if (((`public:___cdecl_VTuneProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
        ProfilerVTune.Ptr)->DLLHandle != (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DLLHandle == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\Windows\\VTuneExternalProfiler.cpp"
                         ,0x73,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FAtModuleInit *)(*pcVar1)();
    return pFVar4;
  }
  pvVar5 = FWindowsPlatformProcess::GetDllHandle(L"VtuneApi.dll");
  (TVar2.Ptr)->DLLHandle = pvVar5;
  if (pvVar5 == (void *)0x0) {
    pvVar5 = FWindowsPlatformProcess::GetDllHandle(L"VtuneApi32e.dll");
    (TVar2.Ptr)->DLLHandle = pvVar5;
    if (pvVar5 != (void *)0x0) goto LAB_14198619c;
  }
  else {
LAB_14198619c:
    p_Var6 = FWindowsPlatformProcess::GetDllExport(pvVar5,L"VTPause");
    (TVar2.Ptr)->VTPause = p_Var6;
    if (p_Var6 == (_func___cdecl_void *)0x0) {
      p_Var6 = FWindowsPlatformProcess::GetDllExport((TVar2.Ptr)->DLLHandle,L"_VTPause@0");
      (TVar2.Ptr)->VTPause = p_Var6;
    }
    p_Var6 = FWindowsPlatformProcess::GetDllExport((TVar2.Ptr)->DLLHandle,L"VTResume");
    (TVar2.Ptr)->VTResume = p_Var6;
    if (p_Var6 == (_func___cdecl_void *)0x0) {
      p_Var6 = FWindowsPlatformProcess::GetDllExport((TVar2.Ptr)->DLLHandle,L"_VTResume@0");
      (TVar2.Ptr)->VTResume = p_Var6;
    }
    if (((TVar2.Ptr)->VTPause == (_func___cdecl_void *)0x0) || (p_Var6 == (_func___cdecl_void *)0x0)
       ) {
      FWindowsPlatformProcess::FreeDllHandle((TVar2.Ptr)->DLLHandle);
      (TVar2.Ptr)->DLLHandle = (void *)0x0;
      (TVar2.Ptr)->VTPause = (_func___cdecl_void *)0x0;
      (TVar2.Ptr)->VTResume = (_func___cdecl_void *)0x0;
    }
    if ((TVar2.Ptr)->DLLHandle == (void *)0x0) goto LAB_14198623f;
    if (__itt_domain_createW_ptr__3_0 != (_func___cdecl____itt_domain_ptr_wchar_t_ptr *)0x0) {
      p_Var7 = (*__itt_domain_createW_ptr__3_0)(L"UE4Domain");
    }
    (TVar2.Ptr)->Domain = p_Var7;
  }
  if ((TVar2.Ptr)->DLLHandle != (void *)0x0) {
    return this;
  }
LAB_14198623f:
  TVar2.Ptr = `public:___cdecl_VTuneProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
              ProfilerVTune.Ptr;
  if (`public:___cdecl_VTuneProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::
      ProfilerVTune.Ptr != (FVTuneExternalProfiler *)0x0) {
    `public:___cdecl_VTuneProfiler::FAtModuleInit::FAtModuleInit(void)___ptr64'::__l2::ProfilerVTune
    .Ptr = (FVTuneExternalProfiler *)0x0;
    (**(code **)(TVar2.Ptr)->_padding_)(TVar2.Ptr,1);
  }
  return this;
}

