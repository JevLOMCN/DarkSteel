// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// operator() @ 1471003b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassMultiThreadingTest::FMTTrivial::SetUp'::__l6::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  int iVar1;
  
  iVar1 = FMassExecutionContext::GetNumEntities(param_1);
  *(int *)(*(longlong *)this + 0xd4) = *(int *)(*(longlong *)this + 0xd4) + iVar1;
  return;
}

// SetUp @ 1471a7720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassMultiThreadingTest::FMTTrivial::SetUp(FMTTrivial *this)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  TSharedPtr<FMassEntityManager,1> *pTVar7;
  undefined1 auStackY_1a8 [32];
  UMassTestProcessor_A *local_140;
  longlong *local_138;
  longlong local_130;
  FMassEntityManager *local_128;
  longlong *local_120;
  TSharedPtr<FMassEntityManager,1> *local_118;
  UMassTestProcessor_A **local_110;
  UMassTestProcessor_A **local_108;
  UMassTestProcessor_A **local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  void *local_a0;
  longlong *local_98;
  longlong *local_90;
  FMassFragmentRequirements *local_88;
  <lambda_1> local_80;
  <lambda_1> *local_78;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_70;
  TSharedPtr<FMassEntityManager,1> local_60;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar3 = FEntityTestBase::SetUp((FEntityTestBase *)this);
  if (bVar3) {
    local_128 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    FMassEntityManager::BatchCreateEntities
              (local_128,&local_70,(FMassArchetypeHandle *)&this->_padding_,this->NumToCreate,
               (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->_padding_);
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_70);
    local_120 = &this->_padding_;
    TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_>::Reset
              ((TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_> *)local_120,0);
    plVar6 = &this->_padding_;
    local_118 = &local_60;
    pTVar7 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                       (local_118,(TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    local_140 = NewTestProcessor<UMassTestProcessor_A>(pTVar7);
    local_110 = (UMassTestProcessor_A **)*plVar6;
    local_108 = local_110;
    local_100 = local_110;
    if ((local_110 <= &local_140) &&
       (local_f8 = *plVar6, local_f0 = local_f8, local_e8 = local_f8,
       &local_140 <
       (UMassTestProcessor_A **)(local_f8 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 8))
       ) {
      local_e0 = 0;
      local_dc = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_c0 = (longlong)(int)this->_padding_;
      local_b8 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
      local_d8 = *plVar6;
      local_d0 = local_d8;
      local_c8 = local_d8;
      local_b0 = local_d8;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    if ((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)plVar6,(int *)((longlong)&this->_padding_ + 4));
      *(int *)&this->_padding_ = iVar5;
    }
    lVar2 = this->_padding_;
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    local_a8 = *plVar6;
    local_a0 = (void *)(local_a8 + (longlong)(int)lVar2 * 8);
    local_138 = ::operator_new(8,local_a0);
    *local_138 = (longlong)local_140;
    local_130 = *local_138;
    local_88 = (FMassFragmentRequirements *)(local_130 + 0x140);
    local_98 = local_138;
    local_90 = local_138;
    FMassFragmentRequirements::AddRequirement<FTestFragment_Int>(local_88,ReadOnly,All);
    local_78 = &local_80;
    local_80.__this = this;
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassExecutionContext_&)><_FMassMultiThreadingTest::FMTTrivial::SetUp_::__l6::<lambda_1>_>
              (&local_48,local_78);
    TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
              ((TFunction<void___cdecl(FMassExecutionContext_&)> *)(local_130 + 0x110),&local_48);
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_48);
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// VerifyLatentResults @ 1471b1f00

void __thiscall FMassMultiThreadingTest::FMTTrivial::VerifyLatentResults(FMTTrivial *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  FAutomationTestBase *pFVar4;
  FString local_20 [2];
  
  pFVar4 = FAITestBase::GetTestRunner((FAITestBase *)this);
  iVar1 = this->NumProcessed;
  iVar2 = this->NumToCreate;
  ::FString::FString(local_20,"Expected to process all the created entities.");
  bVar3 = FTestHelpers::TestEqual<int,int>(local_20,iVar2,iVar1,pFVar4);
  ::FString::~FString(local_20);
  if (!bVar3) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  return;
}

