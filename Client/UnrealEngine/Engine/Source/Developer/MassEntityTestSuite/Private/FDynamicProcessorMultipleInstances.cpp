// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 5

// FDynamicProcessorMultipleInstances @ 1470f3530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDynamicProcessorMultipleInstances * __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorMultipleInstances::FDynamicProcessorMultipleInstances
          (FDynamicProcessorMultipleInstances *this)

{
  FProcessingPhasesTestBase::FProcessingPhasesTestBase((FProcessingPhasesTestBase *)this);
  this->_padding_ =
       (longlong)&___7FDynamicProcessorMultipleInstances_FMassDynamicProcessorsTest__6B_;
  this->AllowedTicksCount = 2;
  this->AddDynamicProcessorOnTickIndex = 1;
  this->NumberOfProcessorsToInstantiate = 3;
  std::atomic<int>::atomic<int>(&this->AccumulatedValue,0);
  this->ExpectedAccumulatedValue = 0;
  return this;
}

// operator() @ 1471004e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassDynamicProcessorsTest::FDynamicProcessorMultipleInstances::Update'::__l10::<lambda_1>::
operator()(void *this,FMassEntityManager *param_1,FMassExecutionContext *param_2)

{
  std::_Atomic_integral_facade<int>::operator+=
            ((_Atomic_integral_facade<int> *)(*(longlong *)this + 0x18c),
             *(int *)((longlong)this + 8) + 1);
  return;
}

// PopulatePhasesConfig @ 147199c40

bool __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorMultipleInstances::PopulatePhasesConfig
          (FDynamicProcessorMultipleInstances *this)

{
  return true;
}

// Update @ 1471b0b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorMultipleInstances::Update
          (FDynamicProcessorMultipleInstances *this)

{
  TSharedPtr<FMassEntityManager,1> *pTVar1;
  undefined1 auStack_c8 [32];
  int local_a8;
  UMassTestProcessorBase *local_a0;
  longlong local_98;
  FBaseGraphTask *local_90;
  FBaseGraphTask *local_88;
  TSharedPtr<FMassEntityManager,1> *local_80;
  <lambda_1> *local_78;
  FMassProcessingPhaseManager *local_70;
  <lambda_1> local_68;
  TSharedPtr<FMassEntityManager,1> local_58;
  TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FProcessingPhasesTestBase::Update((FProcessingPhasesTestBase *)this);
  if ((int)this->_padding_ == 1) {
    local_98 = this->_padding_;
    if (local_98 != 0) {
      local_90 = (FBaseGraphTask *)this->_padding_;
      local_88 = local_90;
      FBaseGraphTask::Wait(local_90,AnyNormalThreadNormalTask);
    }
    for (local_a8 = 0; local_a8 < this->NumberOfProcessorsToInstantiate; local_a8 = local_a8 + 1) {
      local_80 = &local_58;
      pTVar1 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                         (local_80,(TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
      local_a0 = NewTestProcessor<UMassTestProcessorBase>(pTVar1);
      UMassTestProcessorBase::SetShouldAllowMultipleInstances(local_a0,true);
      local_68.i = local_a8;
      local_78 = &local_68;
      local_68.__this = this;
      TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>::
      TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)><_FMassDynamicProcessorsTest::FDynamicProcessorMultipleInstances::Update_::__l10::<lambda_1>_>
                (&local_48,local_78);
      TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>::operator=
                (&local_a0->ExecutionFunction,&local_48);
      TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>::
      ~TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>(&local_48);
      this->ExpectedAccumulatedValue = local_a8 + 1 + this->ExpectedAccumulatedValue;
      local_70 = (FMassProcessingPhaseManager *)
                 TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>::operator->
                           ((TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *)
                            &this->_padding_);
      FMassProcessingPhaseManager::RegisterDynamicProcessor(local_70,(UMassProcessor *)local_a0);
    }
    this->ExpectedAccumulatedValue = this->ExpectedAccumulatedValue * this->AllowedTicksCount;
  }
  return this->AllowedTicksCount + this->AddDynamicProcessorOnTickIndex <= (int)this->_padding_;
}

// VerifyLatentResults @ 1471b1980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "memory_order": Some values do not have unique names */

void __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorMultipleInstances::VerifyLatentResults
          (FDynamicProcessorMultipleInstances *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FAutomationTestBase *pFVar4;
  FString local_18;
  
  FProcessingPhasesTestBase::VerifyLatentResults((FProcessingPhasesTestBase *)this);
  pFVar4 = FAITestBase::GetTestRunner((FAITestBase *)this);
  iVar1 = this->ExpectedAccumulatedValue;
  iVar3 = std::_Atomic_storage<int,4>::load
                    ((_Atomic_storage<int,4> *)&this->AccumulatedValue,memory_order_seq_cst);
  ::FString::FString(&local_18,"Expecting the accumulated value to match the prediction");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_18,iVar3,iVar1,pFVar4);
  ::FString::~FString(&local_18);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  return;
}

