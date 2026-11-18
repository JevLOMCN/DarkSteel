// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// <lambda_invoker_cdecl> @ 1470cf2f0

void __cdecl
`FMassMultiThreadingTest::FMTTestBase::Update'::__l5::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  return;
}

// FMTTestBase @ 1470f4450

FMTTestBase * __thiscall FMassMultiThreadingTest::FMTTestBase::FMTTestBase(FMTTestBase *this)

{
  int iVar1;
  
  FEntityTestBase::FEntityTestBase((FEntityTestBase *)this);
  this->_padding_ = (longlong)&___7FMTTestBase_FMassMultiThreadingTest__6B_;
  this->CompositeProcessor = (UMassCompositeProcessor *)0x0;
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
  (this->FinishEvent).Reference = (FBaseGraphTask *)0x0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->Entities).AllocatorInstance);
  (this->Entities).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->Entities).AllocatorInstance);
  (this->Entities).ArrayMax = iVar1;
  return this;
}

// ~FMTTestBase @ 1470f8250

void __thiscall FMassMultiThreadingTest::FMTTestBase::~FMTTestBase(FMTTestBase *this)

{
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&this->Entities);
  TRefCountPtr<FBaseGraphTask>::~TRefCountPtr<FBaseGraphTask>(&this->FinishEvent);
  TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_>(&this->Result);
  TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_>::
  ~TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_>(&this->Processors);
  FEntityTestBase::~FEntityTestBase((FEntityTestBase *)this);
  return;
}

// Update @ 1471b1190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FMassMultiThreadingTest::FMTTestBase::Update(FMTTestBase *this)

{
  bool bVar1;
  UObject *pUVar2;
  UMassCompositeProcessor *pUVar3;
  FName *pFVar4;
  TArrayView<UMassProcessor_*,int> *pTVar5;
  FMassEntityManager *pFVar6;
  TRefCountPtr<FBaseGraphTask> TVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_728 [32];
  undefined4 local_708;
  <lambda_1> local_6f8 [4];
  int local_6f4;
  int local_6f0;
  FName *local_6e8;
  FName local_6e0;
  UMassCompositeProcessor *local_6d8;
  FScriptContainerElement *local_6d0;
  FScriptContainerElement *local_6c8;
  FScriptContainerElement *local_6c0;
  UMassCompositeProcessor *local_6b8;
  code *local_6b0;
  TFunction<void___cdecl(void)> *local_6a8;
  TFunction<void___cdecl(void)> *local_6a0;
  FProcessingContext *local_698;
  undefined1 local_690 [32];
  FName local_670;
  undefined1 local_668 [16];
  undefined1 local_658 [16];
  TArrayView<UMassProcessor_*,int> local_648;
  TFunction<void___cdecl(void)> local_638;
  FProcessingContext local_608;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_728;
  if (this->CompositeProcessor == (UMassCompositeProcessor *)0x0) {
    pUVar2 = GetTransientPackageAsObject();
    pUVar3 = NewObject<UMassCompositeProcessor>(pUVar2);
    this->CompositeProcessor = pUVar3;
    local_6d8 = this->CompositeProcessor;
    local_6e8 = &local_670;
    pFVar4 = ::FName::FName(local_6e8,L"Test");
    local_6e0 = *pFVar4;
    UMassCompositeProcessor::SetGroupName(local_6d8,local_6e0);
    local_6b8 = this->CompositeProcessor;
    local_6b0 = *(code **)(this->CompositeProcessor->_padding_ + 0x310);
    TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
              ((TSharedPtr<FMassEntityManager,1> *)(local_690 + 0x10),(FNullTag *)0x0);
    local_6f4 = (this->Processors).ArrayNum;
    local_6d0 = (this->Processors).AllocatorInstance.Data;
    local_6f0 = local_6f4;
    local_6c8 = local_6d0;
    local_6c0 = local_6d0;
    pTVar5 = MakeArrayView<UMassProcessor_*>(&local_648,(UMassProcessor **)local_6d0,local_6f4);
    puVar9 = local_668;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar9 = *(undefined1 *)&pTVar5->DataPtr;
      pTVar5 = (TArrayView<UMassProcessor_*,int> *)((longlong)&pTVar5->DataPtr + 1);
      puVar9 = puVar9 + 1;
    }
    puVar9 = local_668;
    puVar10 = local_658;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    (*local_6b0)(local_6b8,local_658,local_690 + 0x10);
    TSharedPtr<FMassEntityManager,1>::~TSharedPtr<FMassEntityManager,1>
              ((TSharedPtr<FMassEntityManager,1> *)(local_690 + 0x10));
    pFVar6 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                       ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    UE::Mass::FProcessingContext::FProcessingContext(&local_608,pFVar6,0.0,true);
    local_6a8 = &local_638;
    local_6a0 = TFunction<void___cdecl(void)>::
                TFunction<void___cdecl(void)><_FMassMultiThreadingTest::FMTTestBase::Update_::__l5::<lambda_1>_>
                          (local_6a8,local_6f8);
    local_698 = (FProcessingContext *)this->CompositeProcessor;
    local_708 = 1;
    TVar7 = UE::Mass::Executor::TriggerParallelTasks
                      ((UMassProcessor *)local_690,local_698,
                       (TFunction<void___cdecl(void)> *)&local_608,(Type)local_6a0);
    TRefCountPtr<FBaseGraphTask>::operator=
              (&this->FinishEvent,(TRefCountPtr<FBaseGraphTask> *)TVar7.Reference);
    TRefCountPtr<FBaseGraphTask>::~TRefCountPtr<FBaseGraphTask>
              ((TRefCountPtr<FBaseGraphTask> *)local_690);
    UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
  }
  local_690._8_8_ = (this->FinishEvent).Reference;
  bVar1 = FBaseGraphTask::IsComplete((FBaseGraphTask *)local_690._8_8_);
  return bVar1;
}

