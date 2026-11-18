// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// ~FMassProcessingPhaseManager @ 1470f87b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassProcessingPhaseManager::~FMassProcessingPhaseManager(FMassProcessingPhaseManager *this)

{
  TSharedPtr<FMassEntityManager,1>::~TSharedPtr<FMassEntityManager,1>(&this->EntityManager);
  _vector_destructor_iterator_
            (this->PendingDynamicProcessors,0x10,6,
             TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,enum_FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>
             ::
             ~TMpscQueue<TTuple<TStrongObjectPtr<UMassProcessor,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,enum_FMassProcessingPhaseManager::EDynamicProcessorOperationType>,FMemory>
            );
  TArray<TWeakObjectPtr<UMassProcessor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
  ~TArray<TWeakObjectPtr<UMassProcessor,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
            (&this->RemovedDynamicProcessors);
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
  ~TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>(&this->DynamicProcessors);
  TArray<FMassProcessingPhaseConfig,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassProcessingPhaseConfig,TSizedDefaultAllocator<32>_>(&this->ProcessingPhasesConfig);
  _vector_destructor_iterator_
            (this->ProcessingGraphBuildStates,0x40,6,FPhaseGraphBuildState::~FPhaseGraphBuildState);
  _vector_destructor_iterator_
            (this->ProcessingPhases,0x88,6,FMassProcessingPhase::~FMassProcessingPhase);
  TSharedFromThis<FMassProcessingPhaseManager,1>::~TSharedFromThis<FMassProcessingPhaseManager,1>
            ((TSharedFromThis<FMassProcessingPhaseManager,1> *)&this->_padding_);
  FGCObject::~FGCObject((FGCObject *)this);
  return;
}

// GetReferencerName @ 1471217b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FString * __thiscall
FMassProcessingPhaseManager::GetReferencerName
          (FMassProcessingPhaseManager *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FMassProcessingPhaseManager");
  return __return_storage_ptr__;
}

