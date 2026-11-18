// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DoWork @ 148794ef0

void __thiscall FRenderAssetUpdate::FMipUpdateTask::DoWork(FMipUpdateTask *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  longlong lVar6;
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelGameThread);
  if ((this->PendingUpdate).Reference == (FRenderAssetUpdate *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingUpdate.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\RenderAssetUpdate.cpp"
                       ,0x14f,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar4 = CVarStreamingStressTestExtraAsyncLatency.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      lVar6 = 4;
      goto LAB_148794f5a;
    }
  }
  lVar6 = 0;
LAB_148794f5a:
  iVar2 = *(int *)((longlong)pTVar4->ShadowedValue + lVar6);
  if (0 < iVar2) {
    FWindowsPlatformProcess::Sleep((float)iVar2 * __real_3a83126f);
  }
  FRenderAssetUpdate::Tick((this->PendingUpdate).Reference,TT_Async);
  piVar1 = &((this->PendingUpdate).Reference)->ScheduledAsyncTasks;
  *piVar1 = *piVar1 + -1;
  FTaskTagScope::~FTaskTagScope(&local_18);
  return;
}

