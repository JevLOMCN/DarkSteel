// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// ~FPhaseGraphBuildState @ 1470f8920

void __thiscall
FMassProcessingPhaseManager::FPhaseGraphBuildState::~FPhaseGraphBuildState
          (FPhaseGraphBuildState *this)

{
  TArray<TSubclassOf<UMassProcessor>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSubclassOf<UMassProcessor>,TSizedDefaultAllocator<32>_>
            (&(this->LastResult).PrunedProcessorClasses);
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
  ~TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>
            (&(this->LastResult).PrunedProcessors);
  ::FString::~FString((FString *)this);
  return;
}

