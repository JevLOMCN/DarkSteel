// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FMassProcessingPhaseConfig @ 1470f4bf0

FMassProcessingPhaseConfig * __thiscall
FMassProcessingPhaseConfig::FMassProcessingPhaseConfig(FMassProcessingPhaseConfig *this)

{
  int iVar1;
  UClass *pUVar2;
  UClass *pUVar3;
  
  FNameEntryId::FNameEntryId((FNameEntryId *)this);
  (this->PhaseName).Number = 0;
  pUVar2 = UMassCompositeProcessor::StaticClass();
  pUVar3 = (UClass *)UE::CoreUObject::Private::MakeObjectHandle((UObject *)pUVar2);
  (this->PhaseGroupClass).Class.field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->ProcessorCDOs).AllocatorInstance);
  (this->ProcessorCDOs).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->ProcessorCDOs).AllocatorInstance);
  (this->ProcessorCDOs).ArrayMax = iVar1;
  return this;
}

// ~FMassProcessingPhaseConfig @ 1470f8780

void __thiscall
FMassProcessingPhaseConfig::~FMassProcessingPhaseConfig(FMassProcessingPhaseConfig *this)

{
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
  ~TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>(&this->ProcessorCDOs);
  return;
}

