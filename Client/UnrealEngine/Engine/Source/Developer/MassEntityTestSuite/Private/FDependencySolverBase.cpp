// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// FDependencySolverBase @ 1470f3460

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FDependencySolverBase * __thiscall
FMassDependencySolverTest::FDependencySolverBase::FDependencySolverBase(FDependencySolverBase *this)

{
  int iVar1;
  
  FAITestBase::FAITestBase((FAITestBase *)this);
  this->_padding_ = (longlong)&___7FDependencySolverBase_FMassDependencySolverTest__6B_;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->Processors).AllocatorInstance);
  (this->Processors).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->Processors).AllocatorInstance);
  (this->Processors).ArrayMax = iVar1;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->Result).AllocatorInstance);
  (this->Result).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->Result).AllocatorInstance);
  (this->Result).ArrayMax = iVar1;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            (&this->EntityManager,(FNullTag *)0x0);
  return this;
}

// ~FDependencySolverBase @ 1470f8020

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassDependencySolverTest::FDependencySolverBase::~FDependencySolverBase
          (FDependencySolverBase *this)

{
  TSharedPtr<FMassEntityManager,1>::~TSharedPtr<FMassEntityManager,1>(&this->EntityManager);
  TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_>(&this->Result);
  TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_>::
  ~TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_>(&this->Processors);
  FAITestBase::~FAITestBase((FAITestBase *)this);
  return;
}

// SetUp @ 1471a56b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassDependencySolverTest::FDependencySolverBase::SetUp(FDependencySolverBase *this)

{
  FMassEntityManager *pFVar1;
  TRawPtrProxy<FMassEntityManager> TVar2;
  FTypeManager *pFVar3;
  
  pFVar1 = ::operator_new(0x7d8);
  if (pFVar1 != (FMassEntityManager *)0x0) {
    FMassEntityManager::FMassEntityManager(pFVar1,(UObject *)0x0);
  }
  TVar2 = MakeShareable<FMassEntityManager>((FMassEntityManager *)&stack0xffffffffffffffd8);
  TSharedPtr<FMassEntityManager,1>::operator=<FMassEntityManager>
            (&this->EntityManager,(TRawPtrProxy<FMassEntityManager> *)TVar2.Object);
  TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_>::Reset(&this->Processors,0);
  pFVar1 = TSharedPtr<FMassEntityManager,1>::operator->(&this->EntityManager);
  pFVar3 = FMassEntityManager::GetTypeManager(pFVar1);
  UE::Mass::FTypeManager::RegisterType<FTestSharedFragment_Int>(pFVar3);
  pFVar1 = TSharedPtr<FMassEntityManager,1>::operator->(&this->EntityManager);
  pFVar3 = FMassEntityManager::GetTypeManager(pFVar1);
  UE::Mass::FTypeManager::RegisterType<UMassTestWorldSubsystem>(pFVar3);
  pFVar1 = TSharedPtr<FMassEntityManager,1>::operator->(&this->EntityManager);
  pFVar3 = FMassEntityManager::GetTypeManager(pFVar1);
  UE::Mass::FTypeManager::RegisterType<UMassTestParallelSubsystem>(pFVar3);
  return true;
}

// Solve @ 1471ab700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall FMassDependencySolverTest::FDependencySolverBase::Solve(FDependencySolverBase *this)

{
  TArrayView<UMassProcessor_*,int> *pTVar1;
  TArrayView<UMassProcessor_*_const,int> *pTVar2;
  TSharedPtr<FMassEntityManager,1> *pTVar3;
  longlong lVar4;
  TArrayView<UMassProcessor_*_const,int> *pTVar5;
  undefined1 auStack_178 [32];
  int local_158;
  int local_154;
  TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_> *local_150;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  TArrayView<UMassProcessor_*_const,int> *local_130;
  TSharedPtr<FMassEntityManager,1> *local_128;
  TArrayView<UMassProcessor_*_const,int> local_118;
  TArrayView<UMassProcessor_*_const,int> local_108;
  TArrayView<UMassProcessor_*,int> local_f8;
  TSharedPtr<FMassEntityManager,1> local_e8;
  FMassProcessorDependencySolver local_d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_150 = &this->Result;
  TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_>::Reset(local_150,0);
  local_130 = &local_108;
  local_158 = (this->Processors).ArrayNum;
  local_148 = (this->Processors).AllocatorInstance.Data;
  local_154 = local_158;
  local_140 = local_148;
  local_138 = local_148;
  pTVar1 = MakeArrayView<UMassProcessor_*>(&local_f8,(UMassProcessor **)local_148,local_158);
  pTVar2 = TArrayView<UMassProcessor_*_const,int>::
           TArrayView<UMassProcessor_*_const,int><TArrayView<UMassProcessor_*,int>,TArrayView<UMassProcessor_*,int>_>
                     (local_130,pTVar1);
  pTVar5 = &local_118;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *(undefined1 *)&pTVar2->DataPtr;
    pTVar2 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar2->DataPtr + 1);
    pTVar5 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  FMassProcessorDependencySolver::FMassProcessorDependencySolver(&local_d8,&local_118,true);
  local_128 = &local_e8;
  pTVar3 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_128,&this->EntityManager);
  FMassProcessorDependencySolver::ResolveDependencies(&local_d8,&this->Result,pTVar3,(FResult *)0x0)
  ;
  FMassProcessorDependencySolver::~FMassProcessorDependencySolver(&local_d8);
  return;
}

