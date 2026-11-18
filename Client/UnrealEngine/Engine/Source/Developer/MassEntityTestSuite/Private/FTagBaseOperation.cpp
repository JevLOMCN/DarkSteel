// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// FTagBaseOperation @ 1470f5510

FTagBaseOperation * __thiscall
UE::Mass::Test::Observers::FTagBaseOperation::FTagBaseOperation(FTagBaseOperation *this)

{
  int iVar1;
  
  FEntityTestBase::FEntityTestBase((FEntityTestBase *)this);
  this->_padding_ = (longlong)&___7FTagBaseOperation_Observers_Test_Mass_UE__6B_;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->AffectedEntities).AllocatorInstance);
  (this->AffectedEntities).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->AffectedEntities).AllocatorInstance);
  (this->AffectedEntities).ArrayMax = iVar1;
  this->ObserverProcessor = (UMassTestProcessorBase *)0x0;
  this->OperationFlagsObserved = None;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->EntitiesInt).AllocatorInstance);
  (this->EntitiesInt).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->EntitiesInt).AllocatorInstance);
  (this->EntitiesInt).ArrayMax = iVar1;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->EntitiesIntsFloat).AllocatorInstance);
  (this->EntitiesIntsFloat).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->EntitiesIntsFloat).AllocatorInstance);
  (this->EntitiesIntsFloat).ArrayMax = iVar1;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->ExpectedEntities).AllocatorInstance);
  (this->ExpectedEntities).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->ExpectedEntities).AllocatorInstance);
  (this->ExpectedEntities).ArrayMax = iVar1;
  this->bCommandsFlushed = false;
  return this;
}

// ~FTagBaseOperation @ 1470f8a30

void __thiscall
UE::Mass::Test::Observers::FTagBaseOperation::~FTagBaseOperation(FTagBaseOperation *this)

{
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&this->ExpectedEntities);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&this->EntitiesIntsFloat);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&this->EntitiesInt);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&this->AffectedEntities);
  FEntityTestBase::~FEntityTestBase((FEntityTestBase *)this);
  return;
}

// operator() @ 1471000d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::Observers::FTagBaseOperation::SetUp'::__l5::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  int iVar1;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this_00;
  TArrayView<FMassEntityHandle_const_,int> *pTVar2;
  <lambda_1> local_48;
  <lambda_1> *local_40;
  <lambda_1> *local_38;
  FMassCommandBuffer *local_30;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  TArrayView<FMassEntityHandle_const_,int> local_18;
  
  this_00 = *(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> **)((longlong)this + 8);
  pTVar2 = FMassExecutionContext::GetEntities(param_1,&local_28);
  iVar1 = pTVar2->ArrayNum;
  pTVar2 = FMassExecutionContext::GetEntities(param_1,&local_18);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Append(this_00,pTVar2->DataPtr,iVar1);
  local_30 = FMassExecutionContext::Defer(param_1);
  local_40 = &local_48;
  local_48.bCommandsFlushedPtr = this;
  local_38 = local_40;
  FMassCommandBuffer::
  PushCommand<FMassDeferredCommand<5>,__UE::Mass::Test::Observers::FTagBaseOperation::SetUp_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (local_30,local_40);
  return;
}

// InstantTest @ 14718f220

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall UE::Mass::Test::Observers::FTagBaseOperation::InstantTest(FTagBaseOperation *this)

{
  EMassObservedOperationFlags EVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  FMassEntityManager *pFVar8;
  TNotNull<UMassProcessor_*> *pTVar9;
  TNotNull<UScriptStruct_const_*> *pTVar10;
  int local_198;
  UScriptStruct *local_140;
  TNotNull<UScriptStruct_const_*> *local_138;
  UScriptStruct *local_130;
  TNotNull<UMassProcessor_*> local_128;
  UScriptStruct *local_120;
  FMassObserverManager *local_118;
  FMassEntityManager *local_110;
  FMassEntityManager *local_108;
  FAutomationTestBase *local_100;
  FAutomationTestBase *local_f8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_f0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  FMassEntityHandle *local_c8;
  FMassEntityHandle local_c0;
  FMassEntityHandle local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  FMassEntityHandle *local_98;
  FMassEntityHandle local_90;
  FMassEntityHandle local_88;
  FMassEntityHandle local_80;
  FAutomationTestBase *local_78;
  FMassEntityHandle local_70;
  FMassEntityHandle local_68;
  FString local_60;
  FString local_50;
  TNotNull<UMassProcessor_*> local_40;
  TNotNull<UScriptStruct_const_*> local_38;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_30;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_20 [2];
  
  pFVar8 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  local_118 = FMassEntityManager::GetObserverManager(pFVar8);
  pTVar9 = TNotNull<UMassProcessor_*>::TNotNull<UMassProcessor_*><UMassTestProcessorBase_*_&>
                     (&local_40,&this->ObserverProcessor);
  local_128.Val = pTVar9->Val;
  EVar1 = this->OperationFlagsObserved;
  local_138 = &local_38;
  local_140 = FTestTag_A::StaticStruct();
  pTVar10 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                      (local_138,&local_140);
  local_130 = pTVar10->Val;
  local_120 = local_130;
  FMassObserverManager::AddObserverInstance
            (local_118,(TNotNull<UScriptStruct_const_*>)local_130,EVar1,local_128);
  local_110 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  FMassEntityManager::BatchCreateEntities
            (local_110,&local_30,(FMassArchetypeHandle *)&this->_padding_,3,&this->EntitiesInt);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_30);
  local_108 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  FMassEntityManager::BatchCreateEntities
            (local_108,local_20,(FMassArchetypeHandle *)&this->_padding_,3,&this->EntitiesIntsFloat)
  ;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(local_20);
  cVar5 = (**(code **)(this->_padding_ + 0x40))(this);
  if (cVar5 != '\0') {
    pFVar8 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    FMassEntityManager::FlushCommands(pFVar8);
    local_100 = FAITestBase::GetTestRunner((FAITestBase *)this);
    iVar2 = (this->ExpectedEntities).ArrayNum;
    iVar3 = (this->AffectedEntities).ArrayNum;
    ::FString::FString(&local_60,
                       L"The observer is expected to be run for predicted number of entities");
    bVar6 = FTestHelpers::TestEqual<int,int>(&local_60,iVar3,iVar2,local_100);
    ::FString::~FString(&local_60);
    if (!bVar6) {
      AITestSuite::ConditionallyBreakOnTestFail();
      return false;
    }
    local_f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    bVar6 = FAutomationTestBase::TestTrue
                      (local_f8,L"The commands issued by the observer are flushed",
                       this->bCommandsFlushed);
    if (!bVar6) {
      AITestSuite::ConditionallyBreakOnTestFail();
      return false;
    }
    local_f0 = &this->ExpectedEntities;
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    Sort<UE::Mass::Test::Observers::EntityIndexSorted::<lambda>_>(local_f0,&EntityIndexSorted);
    local_e8 = &this->AffectedEntities;
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    Sort<UE::Mass::Test::Observers::EntityIndexSorted::<lambda>_>(local_e8,&EntityIndexSorted);
    for (local_198 = 0; local_198 < (this->ExpectedEntities).ArrayNum; local_198 = local_198 + 1) {
      local_78 = FAITestBase::GetTestRunner((FAITestBase *)this);
      if (local_198 < 0 || (this->ExpectedEntities).ArrayNum <= local_198) {
        local_e0 = 0;
        local_dc = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      local_d8 = (this->ExpectedEntities).AllocatorInstance.Data;
      local_c8 = (FMassEntityHandle *)(local_d8 + (longlong)local_198 * 8);
      local_c0 = *local_c8;
      local_d0 = local_d8;
      local_b8 = local_c0;
      local_70 = local_c0;
      if (local_198 < 0 || (this->AffectedEntities).ArrayNum <= local_198) {
        local_b0 = 0;
        local_ac = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      local_a8 = (this->AffectedEntities).AllocatorInstance.Data;
      local_98 = (FMassEntityHandle *)(local_a8 + (longlong)local_198 * 8);
      local_90 = *local_98;
      local_a0 = local_a8;
      local_88 = local_90;
      local_80 = local_90;
      local_68 = local_90;
      ::FString::FString(&local_50,L"Expected and affected sets should be the same");
      bVar6 = FTestHelpers::TestEqual<FMassEntityHandle,FMassEntityHandle>
                        (&local_50,local_68,local_70,local_78);
      ::FString::~FString(&local_50);
      if (!bVar6) {
        AITestSuite::ConditionallyBreakOnTestFail();
        return false;
      }
    }
  }
  return true;
}

// PerformOperation @ 147199c30

bool __thiscall
UE::Mass::Test::Observers::FTagBaseOperation::PerformOperation(FTagBaseOperation *this)

{
  return false;
}

// SetUp @ 1471aa2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::Observers::FTagBaseOperation::SetUp(FTagBaseOperation *this)

{
  bool bVar1;
  TSharedPtr<FMassEntityManager,1> *pTVar2;
  UMassTestProcessorBase *pUVar3;
  undefined1 auStack_a8 [32];
  TSharedPtr<FMassEntityManager,1> *local_88;
  FMassEntityQuery *local_80;
  FMassEntityQuery *local_78;
  <lambda_1> *local_70;
  <lambda_1> local_68;
  TSharedPtr<FMassEntityManager,1> local_58;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar1 = FEntityTestBase::SetUp((FEntityTestBase *)this);
  if (bVar1) {
    local_88 = &local_58;
    pTVar2 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                       (local_88,(TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    pUVar3 = NewTestProcessor<UMassTestProcessorBase>(pTVar2);
    this->ObserverProcessor = pUVar3;
    local_80 = &this->ObserverProcessor->EntityQuery;
    FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
              ((FMassFragmentRequirements *)local_80,ReadOnly,All);
    local_78 = &this->ObserverProcessor->EntityQuery;
    FMassFragmentRequirements::AddTagRequirement<FTestTag_A>
              ((FMassFragmentRequirements *)local_78,All);
    local_68.bCommandsFlushedPtr = &this->bCommandsFlushed;
    local_68.AffectedEntitiesPtr = &this->AffectedEntities;
    local_70 = &local_68;
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::Observers::FTagBaseOperation::SetUp_::__l5::<lambda_1>_>
              (&local_48,local_70);
    TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
              (&this->ObserverProcessor->ForEachEntityChunkExecutionFunction,&local_48);
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_48);
  }
  return bVar1;
}

