// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// FAllElementsUsed @ 1470f2a60

FAllElementsUsed * __thiscall
UE::Mass::Test::EntityBuilder::FAllElementsUsed::FAllElementsUsed(FAllElementsUsed *this)

{
  FEntityTestBase::FEntityTestBase((FEntityTestBase *)this);
  this->_padding_ = (longlong)&___7FAllElementsUsed_EntityBuilder_Test_Mass_UE__6B_;
  FMassEntityHandle::FMassEntityHandle(&this->OriginalEntity);
  this->TestIntValue = 0x11;
  this->TestFloatValue = __real_40490e56;
  this->TestSharedFloatValue = __real_402df84d;
  this->TestSharedIntValue = 0x3f1;
  return this;
}

// InstantTest @ 1471247e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::EntityBuilder::FAllElementsUsed::InstantTest(FAllElementsUsed *this)

{
  bool bVar1;
  undefined1 auStack_128 [32];
  bool local_108;
  char local_107;
  undefined1 local_106;
  undefined1 local_105;
  uint local_104;
  FMassEntityHandle local_100;
  FMassEntityManager *local_f8;
  FMassEntityManager *local_f0;
  FMassArchetypeCompositionDescriptor *local_e8;
  FAutomationTestBase *local_e0;
  FMassArchetypeHandle local_d8;
  FString local_c8;
  FMassArchetypeCompositionDescriptor local_b8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  FMassArchetypeCompositionDescriptor::FMassArchetypeCompositionDescriptor(&local_b8);
  FMassArchetypeCompositionDescriptor::Add<FTestFragment_Int>(&local_b8);
  FMassArchetypeCompositionDescriptor::Add<FTestFragment_Float>(&local_b8);
  FMassArchetypeCompositionDescriptor::Add<FTestTag_B>(&local_b8);
  FMassArchetypeCompositionDescriptor::Add<FTestSharedFragment_Float>(&local_b8);
  FMassArchetypeCompositionDescriptor::Add<FTestConstSharedFragment_Int>(&local_b8);
  local_f8 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  local_100 = this->OriginalEntity;
  FMassEntityManager::GetArchetypeForEntity(local_f8,&local_d8,local_100);
  local_f0 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  local_e8 = FMassEntityManager::GetArchetypeComposition(local_f0,&local_d8);
  local_e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_108 = FMassArchetypeCompositionDescriptor::IsEquivalent(local_e8,&local_b8);
  ::FString::FString(&local_c8,"Resulting archetype composition matches prediction");
  bVar1 = FAutomationTestBase::TestTrue(local_e0,&local_c8,local_108);
  local_107 = !bVar1;
  local_104 = (uint)(byte)local_107;
  ::FString::~FString(&local_c8);
  if (local_107 == '\0') {
    local_105 = TestEntity(this,this->OriginalEntity);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_d8);
    FMassArchetypeCompositionDescriptor::~FMassArchetypeCompositionDescriptor(&local_b8);
    local_106 = local_105;
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_106 = 0;
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_d8);
    FMassArchetypeCompositionDescriptor::~FMassArchetypeCompositionDescriptor(&local_b8);
  }
  return (bool)local_106;
}

// SetUp @ 14719d810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::EntityBuilder::FAllElementsUsed::SetUp(FAllElementsUsed *this)

{
  bool bVar1;
  TSharedRef<FMassEntityManager,1> *pTVar2;
  FMassEntityHandle FVar3;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  longlong *local_1c0;
  TSharedRef<FMassEntityManager,1> local_1b0;
  FEntityBuilder local_1a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  bVar1 = FEntityTestBase::SetUp((FEntityTestBase *)this);
  if (bVar1) {
    local_1c0 = &this->_padding_;
    pTVar2 = TSharedPtr<FMassEntityManager,1>::ToSharedRef
                       ((TSharedPtr<FMassEntityManager,1> *)local_1c0,&local_1b0);
    FEntityBuilder::FEntityBuilder(&local_1a0,pTVar2);
    TSharedRef<FMassEntityManager,1>::~TSharedRef<FMassEntityManager,1>(&local_1b0);
    FEntityBuilder::Add<FTestFragment_Int,int_const_&>(&local_1a0,&this->TestIntValue);
    FEntityBuilder::Add<FTestFragment_Float,float_const_&>(&local_1a0,&this->TestFloatValue);
    FEntityBuilder::Add<FTestTag_B>(&local_1a0);
    FEntityBuilder::Add<FTestSharedFragment_Float,float_const_&>
              (&local_1a0,&this->TestSharedFloatValue);
    FEntityBuilder::Add<FTestConstSharedFragment_Int,int_const_&>
              (&local_1a0,&this->TestSharedIntValue);
    FVar3 = FEntityBuilder::Commit(&local_1a0);
    this->OriginalEntity = *(FMassEntityHandle *)FVar3;
    local_1c8 = 1;
    FEntityBuilder::~FEntityBuilder(&local_1a0);
  }
  else {
    local_1c8 = 0;
  }
  return (bool)local_1c8;
}

// TestEntity @ 1471acb70

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::EntityBuilder::FAllElementsUsed::TestEntity
          (FAllElementsUsed *this,FMassEntityHandle param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FMassEntityManager *pFVar6;
  FTestFragment_Int *pFVar7;
  FAutomationTestBase *pFVar8;
  FTestFragment_Float *pFVar9;
  FTestSharedFragment_Float *pFVar10;
  FTestConstSharedFragment_Int *pFVar11;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20 [2];
  
  pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  pFVar7 = FMassEntityManager::GetFragmentDataPtr<FTestFragment_Int>(pFVar6,param_1);
  pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_90,"Created entity has the int fragment");
  bVar5 = FAutomationTestBase::TestNotNull<FTestFragment_Int>(pFVar8,&local_90,pFVar7);
  ::FString::~FString(&local_90);
  if (bVar5) {
    pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    iVar3 = this->TestIntValue;
    iVar4 = pFVar7->Value;
    ::FString::FString(&local_80,"Resulting Int fragment value");
    bVar5 = FTestHelpers::TestEqual<int,int>(&local_80,iVar4,iVar3,pFVar8);
    ::FString::~FString(&local_80);
    if (bVar5) {
      pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                         ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
      pFVar9 = FMassEntityManager::GetFragmentDataPtr<FTestFragment_Float>(pFVar6,param_1);
      pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      ::FString::FString(&local_70,"Created entity has the int fragment");
      bVar5 = FAutomationTestBase::TestNotNull<FTestFragment_Float>(pFVar8,&local_70,pFVar9);
      ::FString::~FString(&local_70);
      if (bVar5) {
        pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
        fVar1 = this->TestFloatValue;
        fVar2 = pFVar9->Value;
        ::FString::FString(&local_60,"Resulting Int fragment value");
        bVar5 = FTestHelpers::TestEqual<float,float>(&local_60,fVar2,fVar1,pFVar8);
        ::FString::~FString(&local_60);
        if (bVar5) {
          pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                             ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
          pFVar10 = FMassEntityManager::GetSharedFragmentDataPtr<FTestSharedFragment_Float>
                              (pFVar6,param_1);
          pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
          ::FString::FString(&local_50,"Created entity has the int fragment");
          bVar5 = FAutomationTestBase::TestNotNull<FTestSharedFragment_Float>
                            (pFVar8,&local_50,pFVar10);
          ::FString::~FString(&local_50);
          if (bVar5) {
            pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
            fVar1 = this->TestSharedFloatValue;
            fVar2 = pFVar10->Value;
            ::FString::FString(&local_40,"Resulting Int fragment value");
            bVar5 = FTestHelpers::TestEqual<float,float>(&local_40,fVar2,fVar1,pFVar8);
            ::FString::~FString(&local_40);
            if (bVar5) {
              pFVar6 = TSharedPtr<FMassEntityManager,1>::operator->
                                 ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
              pFVar11 = FMassEntityManager::
                        GetConstSharedFragmentDataPtr<FTestConstSharedFragment_Int>(pFVar6,param_1);
              pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
              ::FString::FString(&local_30,"Created entity has the int fragment");
              bVar5 = FAutomationTestBase::TestNotNull<FTestConstSharedFragment_Int>
                                (pFVar8,&local_30,pFVar11);
              ::FString::~FString(&local_30);
              if (bVar5) {
                pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
                iVar3 = this->TestSharedIntValue;
                iVar4 = pFVar11->Value;
                ::FString::FString(local_20,"Resulting Int fragment value");
                bVar5 = FTestHelpers::TestEqual<int,int>(local_20,iVar4,iVar3,pFVar8);
                ::FString::~FString(local_20);
                if (bVar5) {
                  bVar5 = true;
                }
                else {
                  AITestSuite::ConditionallyBreakOnTestFail();
                  bVar5 = false;
                }
              }
              else {
                AITestSuite::ConditionallyBreakOnTestFail();
                bVar5 = false;
              }
            }
            else {
              AITestSuite::ConditionallyBreakOnTestFail();
              bVar5 = false;
            }
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            bVar5 = false;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          bVar5 = false;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        bVar5 = false;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      bVar5 = false;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    bVar5 = false;
  }
  return bVar5;
}

