// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FScopeIdle @ 141a71b10

FScopeIdle * __thiscall
UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(FScopeIdle *this,bool param_1)

{
  FTlsAutoCleanup *pFVar1;
  LARGE_INTEGER local_res8;
  undefined1 local_res10 [8];
  code *local_18;
  undefined1 *local_10;
  
  QueryPerformanceCounter(&local_res8);
  this->Start = local_res8.s.LowPart;
  if (param_1) {
LAB_141a71bc5:
    this->bIgnore = true;
  }
  else {
    local_10 = local_res10;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar1 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,&::TlsSlot);
    if (pFVar1[3].field_0x4 != '\0') goto LAB_141a71bc5;
    this->bIgnore = false;
    if ((-1 < CpuChannel->Enabled) && (-1 < ThreadIdleScopeChannel->Enabled)) {
      (this->TraceEventScope).bEnabled = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&ThreadIdleScopeTraceEventId,L"FThreadIdleStats::FScopeIdle",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\ThreadIdleStats.cpp"
                 ,0x14);
      FCpuProfilerTrace::OutputBeginEvent(ThreadIdleScopeTraceEventId);
      goto LAB_141a71bd0;
    }
  }
  (this->TraceEventScope).bEnabled = false;
LAB_141a71bd0:
  if (this->bIgnore == false) {
    local_10 = local_res10;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar1 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,&::TlsSlot);
    pFVar1[3].field_0x4 = 1;
  }
  return this;
}

