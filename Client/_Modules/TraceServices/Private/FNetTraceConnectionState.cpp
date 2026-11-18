// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// ~FNetTraceConnectionState @ 14d3d0ea0

void __thiscall
TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState::~FNetTraceConnectionState
          (FNetTraceConnectionState *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  TArray<TraceServices::FNetTraceAnalyzer::FBunchInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  
  lVar2 = 2;
  pTVar3 = (TArray<TraceServices::FNetTraceAnalyzer::FBunchInfo,TSizedDefaultAllocator<32>_> *)
           &this->ConnectionState;
  lVar4 = 2;
  do {
    pFVar1 = pTVar3[-1].AllocatorInstance.Data;
    pTVar3 = pTVar3 + -1;
    lVar4 = lVar4 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar4 != 0);
  pTVar3 = this->BunchInfos;
  do {
    pFVar1 = (((TArray<TraceServices::FNetProfilerContentEvent,TSizedDefaultAllocator<32>_> *)
              (pTVar3 + -1))->AllocatorInstance).Data;
    pTVar3 = pTVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  pFVar1 = (this->PacketStats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

