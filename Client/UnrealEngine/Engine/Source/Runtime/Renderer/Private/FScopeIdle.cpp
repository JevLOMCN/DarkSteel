// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ~FScopeIdle @ 145479800

void __thiscall UE::Stats::FThreadIdleStats::FScopeIdle::~FScopeIdle(FScopeIdle *this)

{
  int iVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res10;
  code *local_18;
  undefined1 *local_10;
  
  if (this->bIgnore == false) {
    puVar2 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
    local_10 = local_res8;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar3 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar2);
    QueryPerformanceCounter(&local_res10);
    iVar1 = local_res10.s.LowPart - this->Start;
    *(int *)(pFVar3 + 2) = *(int *)(pFVar3 + 2) + iVar1;
    if (0 < *(int *)(pFVar3 + 3)) {
      *(int *)&pFVar3[2].field_0x4 = *(int *)&pFVar3[2].field_0x4 + iVar1;
    }
    pFVar3[3].field_0x4 = 0;
  }
  if ((this->TraceEventScope).bEnabled != false) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

