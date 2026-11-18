// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// ~FMassProcessorDependencySolver @ 1470f88a0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassProcessorDependencySolver::~FMassProcessorDependencySolver
          (FMassProcessorDependencySolver *this)

{
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>::
  ~TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
            (&this->MultiThreadedSystemsBitSet);
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
  ~TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
            (&this->NodeIndexMap);
  TArray<FMassProcessorDependencySolver::FNode,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassProcessorDependencySolver::FNode,TSizedDefaultAllocator<32>_>(&this->AllNodes);
  ::FString::~FString(&this->DependencyGraphFileName);
  return;
}

