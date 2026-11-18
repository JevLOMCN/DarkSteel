// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 5

// FDynamicProcessorsAddTrivial @ 1470f35c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDynamicProcessorsAddTrivial * __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsAddTrivial::FDynamicProcessorsAddTrivial
          (FDynamicProcessorsAddTrivial *this)

{
  FProcessingPhasesTestBase::FProcessingPhasesTestBase((FProcessingPhasesTestBase *)this);
  this->_padding_ = (longlong)&___7FDynamicProcessorsAddTrivial_FMassDynamicProcessorsTest__6B_;
  this->AllowedTicksCount = 2;
  this->AddDynamicProcessorOnTickIndex = 1;
  this->NumberOfTimesTicked = 0;
  this->DynamicProcessor = (UMassTestProcessorBase *)0x0;
  FWeakObjectPtr::FWeakObjectPtr(&(this->WeakDynamicProcessor).WeakPtr);
  return this;
}

// operator() @ 147100220

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassDynamicProcessorsTest::FDynamicProcessorsAddTrivial::Update'::__l5::<lambda_1>::operator()
          (void *this,FMassEntityManager *param_1,FMassExecutionContext *param_2)

{
  *(int *)(*(longlong *)this + 0x188) = *(int *)(*(longlong *)this + 0x188) + 1;
  return;
}

// PopulatePhasesConfig @ 147199c50

bool __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsAddTrivial::PopulatePhasesConfig
          (FDynamicProcessorsAddTrivial *this)

{
  return true;
}

// Update @ 1471b0dd0

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
FMassDynamicProcessorsTest::FDynamicProcessorsAddTrivial::Update(FDynamicProcessorsAddTrivial *this)

{
  TSharedPtr<FMassEntityManager,1> *pTVar1;
  UMassTestProcessorBase *pUVar2;
  UObject *pUVar3;
  undefined1 auStack_f8 [40];
  UMassTestProcessorBase *local_d0;
  FObjectPtr_u_0 local_c8;
  TSharedPtr<FMassEntityManager,1> *local_c0;
  <lambda_1> local_b8;
  <lambda_1> *local_b0;
  longlong local_a8;
  FBaseGraphTask *local_a0;
  FBaseGraphTask *local_98;
  UMassTestProcessorBase *local_90;
  FMassProcessingPhaseManager *local_88;
  UMassTestProcessorBase *local_80;
  FObjectPtr_u_0 local_78;
  FWeakObjectPtr *local_70;
  undefined1 local_68 [8];
  TSharedPtr<FMassEntityManager,1> local_60;
  TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FProcessingPhasesTestBase::Update((FProcessingPhasesTestBase *)this);
  if ((int)this->_padding_ == this->AddDynamicProcessorOnTickIndex) {
    local_c0 = &local_60;
    pTVar1 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                       (local_c0,(TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    pUVar2 = NewTestProcessor<UMassTestProcessorBase>(pTVar1);
    this->DynamicProcessor = pUVar2;
    local_b0 = &local_b8;
    local_b8.__this = this;
    TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)><_FMassDynamicProcessorsTest::FDynamicProcessorsAddTrivial::Update_::__l5::<lambda_1>_>
              (&local_48,local_b0);
    TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>::operator=
              (&this->DynamicProcessor->ExecutionFunction,&local_48);
    TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassEntityManager_&,FMassExecutionContext_&)>(&local_48);
    local_a8 = this->_padding_;
    if (local_a8 != 0) {
      local_a0 = (FBaseGraphTask *)this->_padding_;
      local_98 = local_a0;
      FBaseGraphTask::Wait(local_a0,AnyNormalThreadNormalTask);
    }
    local_88 = (FMassProcessingPhaseManager *)
               TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>::operator->
                         ((TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *)
                          &this->_padding_);
    local_90 = this->DynamicProcessor;
    FMassProcessingPhaseManager::RegisterDynamicProcessor(local_88,(UMassProcessor *)local_90);
    local_d0 = this->DynamicProcessor;
    local_70 = &(this->WeakDynamicProcessor).WeakPtr;
    local_c8.Handle = (UObject *)local_68;
    local_80 = local_d0;
    pUVar3 = UE::CoreUObject::Private::MakeObjectHandle((UObject *)local_d0);
    *(UObject **)local_c8.Handle = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_d0 != (UMassTestProcessorBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_d0);
    }
    local_78.Handle = local_c8.Handle;
    FWeakObjectPtr::operator=(local_70,(FObjectPtr)local_c8);
  }
  return this->AllowedTicksCount + this->AddDynamicProcessorOnTickIndex <= (int)this->_padding_;
}

// VerifyLatentResults @ 1471b1b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FMassDynamicProcessorsTest::FDynamicProcessorsAddTrivial::VerifyLatentResults
          (FDynamicProcessorsAddTrivial *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  FAutomationTestBase *pFVar4;
  FString local_20 [2];
  
  FProcessingPhasesTestBase::VerifyLatentResults((FProcessingPhasesTestBase *)this);
  pFVar4 = FAITestBase::GetTestRunner((FAITestBase *)this);
  iVar1 = this->AllowedTicksCount;
  iVar2 = this->NumberOfTimesTicked;
  ::FString::FString(local_20,
                     "Expecting the dynamic processor to be ticked the predicted number of times");
  bVar3 = FTestHelpers::TestEqual<int,int>(local_20,iVar2,iVar1,pFVar4);
  ::FString::~FString(local_20);
  if (!bVar3) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  return;
}

