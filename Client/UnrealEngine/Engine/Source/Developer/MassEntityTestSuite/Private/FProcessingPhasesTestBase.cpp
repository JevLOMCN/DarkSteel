// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 6

// FProcessingPhasesTestBase @ 1470f4ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FProcessingPhasesTestBase * __thiscall
FProcessingPhasesTestBase::FProcessingPhasesTestBase(FProcessingPhasesTestBase *this)

{
  FEntityTestBase::FEntityTestBase((FEntityTestBase *)this);
  this->_padding_ = (longlong)&___7FProcessingPhasesTestBase__6B_;
  TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>::
  TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>
            (&this->PhaseManager,(FNullTag *)0x0);
  _vector_constructor_iterator_
            (this->PhasesConfig,0x20,6,FMassProcessingPhaseConfig::FMassProcessingPhaseConfig);
  this->TickIndex = -1;
  (this->CompletionEvent).Reference = (FBaseGraphTask *)0x0;
  this->DeltaTime = __real_3d088889;
  this->World = (UWorld *)0x0;
  *(undefined1 *)&this->_padding_ = 1;
  return this;
}

// ~FProcessingPhasesTestBase @ 1470f8970

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
FProcessingPhasesTestBase::~FProcessingPhasesTestBase(FProcessingPhasesTestBase *this)

{
  TRefCountPtr<FBaseGraphTask>::~TRefCountPtr<FBaseGraphTask>(&this->CompletionEvent);
  _vector_destructor_iterator_
            (this->PhasesConfig,0x20,6,FMassProcessingPhaseConfig::~FMassProcessingPhaseConfig);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->PhaseManager).SharedReferenceCount);
  FEntityTestBase::~FEntityTestBase((FEntityTestBase *)this);
  return;
}

// SetUp @ 1471a8f20

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

bool __thiscall FProcessingPhasesTestBase::SetUp(FProcessingPhasesTestBase *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  FMassProcessingPhaseManager *pFVar5;
  TRawPtrProxy<UE::Mass::Testing::FMassTestProcessingPhaseManager> TVar6;
  FMassEntityManager *this_00;
  UWorld *pUVar7;
  TArrayView<FMassProcessingPhaseConfig_const_,int> *pTVar8;
  FMassTestProcessingPhaseManager *this_01;
  longlong lVar9;
  undefined1 *puVar10;
  FMassProcessingPhaseManager *pFVar11;
  undefined1 *puVar12;
  FString local_70;
  undefined1 local_60 [56];
  TArrayView<FMassProcessingPhaseConfig_const_,int> local_28;
  
  bVar2 = FEntityTestBase::SetUp((FEntityTestBase *)this);
  if (bVar2) {
    pFVar5 = ::operator_new(0x5a0);
    if (pFVar5 != (FMassProcessingPhaseManager *)0x0) {
      pFVar11 = pFVar5;
      for (lVar9 = 0x5a0; lVar9 != 0; lVar9 = lVar9 + -1) {
        *(undefined1 *)&pFVar11->_padding_ = 0;
        pFVar11 = (FMassProcessingPhaseManager *)((longlong)&pFVar11->_padding_ + 1);
      }
      FMassProcessingPhaseManager::FMassProcessingPhaseManager(pFVar5,None);
      pFVar5->_padding_ = (longlong)&___7FMassTestProcessingPhaseManager_Testing_Mass_UE__6B_;
    }
    TVar6 = MakeShareable<UE::Mass::Testing::FMassTestProcessingPhaseManager>
                      ((FMassTestProcessingPhaseManager *)local_60);
    TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>::
    operator=<UE::Mass::Testing::FMassTestProcessingPhaseManager>
              (&this->PhaseManager,
               (TRawPtrProxy<UE::Mass::Testing::FMassTestProcessingPhaseManager> *)TVar6.Object);
    this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    FMassEntityManager::Initialize(this_00);
    cVar3 = (**(code **)(this->_padding_ + 0x40))(this);
    if (cVar3 != '\0') {
      this->TickIndex = -1;
      pUVar7 = FAITestHelpers::GetWorld();
      this->World = pUVar7;
      if ((this->World == (UWorld *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("World",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassProcessingPhasesTest.cpp"
                             ,0x24,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pFVar5 = (FMassProcessingPhaseManager *)
               TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>::operator->
                         (&this->PhaseManager);
      ::FString::FString(&local_70,L"");
      pTVar8 = TArrayView<FMassProcessingPhaseConfig_const_,int>::
               TArrayView<FMassProcessingPhaseConfig_const_,int><FMassProcessingPhaseConfig_(&)[6],FMassProcessingPhaseConfig_[6]>
                         (&local_28,&this->PhasesConfig);
      puVar10 = local_60 + 8;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar10 = *(undefined1 *)&pTVar8->DataPtr;
        pTVar8 = (TArrayView<FMassProcessingPhaseConfig_const_,int> *)
                 ((longlong)&pTVar8->DataPtr + 1);
        puVar10 = puVar10 + 1;
      }
      puVar10 = local_60 + 8;
      puVar12 = local_60 + 0x18;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      pUVar7 = this->World;
      puVar10 = local_60 + 0x18;
      puVar12 = local_60 + 0x28;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      FMassProcessingPhaseManager::Initialize
                (pFVar5,(UObject *)pUVar7,
                 (TArrayView<FMassProcessingPhaseConfig_const_,int> *)(local_60 + 0x28),&local_70);
      ::FString::~FString(&local_70);
      this_01 = TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>::operator->
                          (&this->PhaseManager);
      UE::Mass::Testing::FMassTestProcessingPhaseManager::Start
                (this_01,(TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
      return true;
    }
  }
  return false;
}

// TearDown @ 1471abd10

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

void __thiscall FProcessingPhasesTestBase::TearDown(FProcessingPhasesTestBase *this)

{
  FMassProcessingPhaseManager *this_00;
  
  if ((this->CompletionEvent).Reference != (FBaseGraphTask *)0x0) {
    FBaseGraphTask::Wait((this->CompletionEvent).Reference,AnyNormalThreadNormalTask);
  }
  this_00 = (FMassProcessingPhaseManager *)
            TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>::operator->
                      (&this->PhaseManager);
  FMassProcessingPhaseManager::Stop(this_00);
  TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>::operator=
            (&this->PhaseManager,(FNullTag *)0x0);
  FExecutionTestBase::TearDown((FExecutionTestBase *)this);
  return;
}

// Update @ 1471b1440

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

bool __thiscall FProcessingPhasesTestBase::Update(FProcessingPhasesTestBase *this)

{
  initializer_list<TRefCountPtr<FBaseGraphTask>_> *piVar1;
  TRefCountPtr<FBaseGraphTask> TVar2;
  longlong lVar3;
  initializer_list<TRefCountPtr<FBaseGraphTask>_> *piVar4;
  undefined1 auStack_118 [32];
  float *local_f8;
  undefined1 local_e8;
  undefined1 local_e7 [3];
  int local_e4;
  uint local_e0;
  TRefCountPtr<FBaseGraphTask> local_d8;
  TRefCountPtr<FBaseGraphTask> local_d0;
  FBaseGraphTask *local_c8;
  FBaseGraphTask *local_c0;
  TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *local_b8;
  TSharedRef<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *local_b0;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *local_a8;
  undefined1 local_a0 [24];
  initializer_list<TRefCountPtr<FBaseGraphTask>_> local_88;
  TSharedRef<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> local_78;
  initializer_list<TRefCountPtr<FBaseGraphTask>_> local_68;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_e8 = (this->CompletionEvent).Reference != (FBaseGraphTask *)0x0;
  local_e0 = (uint)(byte)local_e8;
  if ((bool)local_e8) {
    local_c8 = (this->CompletionEvent).Reference;
    local_c0 = local_c8;
    FBaseGraphTask::Wait(local_c8,AnyNormalThreadNormalTask);
  }
  for (local_e4 = 0; local_e4 < 6; local_e4 = local_e4 + 1) {
    TRefCountPtr<FBaseGraphTask>::TRefCountPtr<FBaseGraphTask>(&local_d8,&this->CompletionEvent);
    piVar1 = std::initializer_list<TRefCountPtr<FBaseGraphTask>_>::
             initializer_list<TRefCountPtr<FBaseGraphTask>_>(&local_68,&local_d8,&local_d0);
    piVar4 = &local_88;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar1->_First;
      piVar1 = (initializer_list<TRefCountPtr<FBaseGraphTask>_> *)((longlong)&piVar1->_First + 1);
      piVar4 = (initializer_list<TRefCountPtr<FBaseGraphTask>_> *)((longlong)&piVar4->_First + 1);
    }
    TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
    TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              (&local_58,&local_88);
    _vector_destructor_iterator_
              (&local_d8,8,1,TRefCountPtr<FBaseGraphTask>::~TRefCountPtr<FBaseGraphTask>);
    local_a8 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)TGraphTask<UE::Mass::Testing::FMassTestPhaseTickTask>::CreateTask
                            ((TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                              *)(local_a0 + 8),(Type)&local_58);
    local_e7[0] = (undefined1)local_e4;
    local_b8 = &this->PhaseManager;
    local_b0 = TSharedPtr<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>::ToSharedRef
                         (local_b8,&local_78);
    local_f8 = &this->DeltaTime;
    TVar2 = TGraphTask<UE::Mass::Testing::FMassTestPhaseTickTask>::FConstructor::
            ConstructAndDispatchWhenReady<TSharedRef<UE::Mass::Testing::FMassTestProcessingPhaseManager,1>,enum_EMassProcessingPhase,float_&>
                      ((FConstructor *)local_a8,
                       (TSharedRef<UE::Mass::Testing::FMassTestProcessingPhaseManager,1> *)local_a0,
                       (EMassProcessingPhase *)local_b0,(float *)local_e7);
    TRefCountPtr<FBaseGraphTask>::operator=
              (&this->CompletionEvent,(TRefCountPtr<FBaseGraphTask> *)TVar2.Reference);
    TRefCountPtr<FBaseGraphTask>::~TRefCountPtr<FBaseGraphTask>
              ((TRefCountPtr<FBaseGraphTask> *)local_a0);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_78.SharedReferenceCount);
    TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
    ~TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              (&local_58);
  }
  this->TickIndex = this->TickIndex + 1;
  return false;
}

// VerifyLatentResults @ 1471b1fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FProcessingPhasesTestBase::VerifyLatentResults(FProcessingPhasesTestBase *this)

{
  if ((this->CompletionEvent).Reference != (FBaseGraphTask *)0x0) {
    FBaseGraphTask::Wait((this->CompletionEvent).Reference,AnyNormalThreadNormalTask);
  }
  return;
}

