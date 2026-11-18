// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FDumpScope @ 145d09940

FDumpScope * __thiscall
UE::RenderCore::DumpGPU::FDumpScope::FDumpScope(FDumpScope *this,bool param_1)

{
  FRDGResourceDumpContext *pFVar1;
  code *pcVar2;
  bool bVar3;
  FDumpScope *pFVar4;
  FString local_18;
  
  if (!param_1) {
LAB_145d099b0:
    this->bCondition = false;
    return this;
  }
  bVar3 = IsInGameThread();
  if (((!bVar3) && (bVar3 = IsInRenderingThread(), !bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                         ,0xab9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FDumpScope *)(*pcVar2)();
    return pFVar4;
  }
  bVar3 = IsInGameThread();
  pFVar1 = GRDGResourceDumpContext_GameThread;
  if ((bVar3) ||
     (bVar3 = IsInRenderingThread(), pFVar1 = GRDGResourceDumpContext_RenderThread, bVar3)) {
    if (pFVar1 != (FRDGResourceDumpContext *)0x0) goto LAB_145d099b0;
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\DumpGPU.cpp"
                       ,0xac5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FDumpScope *)(*pcVar2)();
      return pFVar4;
    }
  }
  this->bCondition = true;
  FRDGBuilder::BeginResourceDump(&local_18,L"-oneframe");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  TickEndFrame();
  return this;
}

