// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ~FDDoSDetection @ 148017d20

void __thiscall FDDoSDetection::~FDDoSDetection(FDDoSDetection *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->NotifySeverityEscalation);
  pvVar1 = *(void **)&(this->NotifySeverityEscalation).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NotifySeverityEscalation);
  pFVar2 = (this->CounterPerSecHistory).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDDoSStateConfig,int>
            ((FDDoSStateConfig *)(this->DetectionSeverity).AllocatorInstance.Data,
             (this->DetectionSeverity).ArrayNum);
  pFVar2 = (this->DetectionSeverity).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

