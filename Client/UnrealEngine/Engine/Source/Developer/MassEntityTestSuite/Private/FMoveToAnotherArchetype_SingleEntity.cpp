// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 7

// operator() @ 1470ff370

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

UMassTestProcessorBase * __thiscall
`UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp'::__l2::<lambda_1>::
operator()(void *this,TFunction<void___cdecl(FMassExecutionContext_&)> *param_1)

{
  TSharedPtr<FMassEntityManager,1> *pTVar1;
  UMassTestProcessorBase *pUVar2;
  TSharedPtr<FMassEntityManager,1> local_20 [2];
  
  pTVar1 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_20,(TSharedPtr<FMassEntityManager,1> *)(*(longlong *)this + 0x28));
  pUVar2 = NewTestProcessor<UMassTestProcessorBase>(pTVar1);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)&pUVar2->EntityQuery,ReadOnly,All);
  TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
            (&pUVar2->ForEachEntityChunkExecutionFunction,param_1);
  return pUVar2;
}

// operator() @ 147102fd0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp'::__l2::<lambda_2>::
operator()(void *this,FMassExecutionContext *param_1)

{
  *(undefined1 *)(*(longlong *)this + 0x90) = 1;
  return;
}

// operator() @ 147103ce0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp'::__l2::<lambda_3>::
operator()(void *this,FMassExecutionContext *param_1)

{
  *(undefined1 *)(*(longlong *)this + 0x91) = 1;
  return;
}

// operator() @ 147105110

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp'::__l2::<lambda_4>::
operator()(void *this,FMassExecutionContext *param_1)

{
  *(undefined1 *)(*(longlong *)this + 0x92) = 1;
  return;
}

// operator() @ 1471066a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp'::__l2::<lambda_5>::
operator()(void *this,FMassExecutionContext *param_1)

{
  *(undefined1 *)(*(longlong *)this + 0x93) = 1;
  return;
}

// InstantTest @ 147170f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::InstantTest
          (FMoveToAnotherArchetype_SingleEntity *this)

{
  bool bVar1;
  initializer_list<UScriptStruct_const_*_const> *piVar2;
  TArrayView<UScriptStruct_const_*_const,int> *pTVar3;
  longlong lVar4;
  undefined1 *puVar5;
  FMassArchetypeSharedFragmentValues *pFVar6;
  initializer_list<UScriptStruct_const_*_const> *piVar7;
  undefined1 *puVar8;
  undefined1 auStack_2b8 [32];
  bool local_298;
  char local_297;
  undefined1 local_296;
  bool local_295;
  char local_294;
  undefined1 local_293;
  bool local_292;
  char local_291;
  undefined1 local_290;
  bool local_28f;
  char local_28e;
  undefined1 local_28d;
  bool local_28c;
  char local_28b;
  undefined1 local_28a;
  bool local_289;
  char local_288;
  undefined1 local_287;
  undefined1 local_286;
  uint local_284;
  uint local_280;
  uint local_27c;
  uint local_278;
  uint local_274;
  uint local_270;
  FMassArchetypeHandle local_268;
  FMassArchetypeHandle local_258;
  FMassArchetypeHandle *local_248;
  FMassArchetypeHandle *local_240;
  FMassEntityManager *local_238;
  FMassArchetypeHandle *local_230;
  FMassEntityHandle local_228;
  FMassArchetypeHandle *local_220;
  FMassEntityHandle local_218;
  FMassEntityManager *local_210;
  FAutomationTestBase *local_208;
  FAutomationTestBase *local_200;
  FAutomationTestBase *local_1f8;
  FAutomationTestBase *local_1f0;
  FMassArchetypeHandle *local_1e8;
  FMassEntityHandle local_1e0;
  FMassArchetypeHandle *local_1d8;
  FMassEntityHandle local_1d0;
  FMassEntityManager *local_1c8;
  FAutomationTestBase *local_1c0;
  FAutomationTestBase *local_1b8;
  FMassEntityManager *local_1b0;
  UScriptStruct *local_1a8;
  UScriptStruct *local_1a0;
  UScriptStruct *local_198;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  initializer_list<UScriptStruct_const_*_const> local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  TArrayView<UScriptStruct_const_*_const,int> local_f8;
  TReferenceControllerBase<1> local_e8;
  initializer_list<UScriptStruct_const_*_const> local_d8;
  FMassArchetypeHandle local_c8;
  FMassArchetypeHandle local_b8;
  FMassArchetypeHandle local_a8;
  FMassArchetypeSharedFragmentValues local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_1b0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  pFVar6 = &local_98;
  for (lVar4 = 0x68; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&pFVar6->HashCache = 0;
    pFVar6 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar6->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_98);
  FMassEntityManager::CreateEntity
            (local_1b0,&local_258,(FMassArchetypeSharedFragmentValues *)&this->_padding_);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
  local_238 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  local_258.DataPtr.SharedReferenceCount.ReferenceController = &local_e8;
  local_1a8 = FTestTag_A::StaticStruct();
  local_1a0 = FTestFragment_Float::StaticStruct();
  piVar2 = std::initializer_list<UScriptStruct_const_*_const>::
           initializer_list<UScriptStruct_const_*_const>(&local_d8,&local_1a8,&local_198);
  piVar7 = &local_128;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&piVar7->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<UScriptStruct_const_*_const> *)((longlong)&piVar2->_First + 1);
    piVar7 = (initializer_list<UScriptStruct_const_*_const> *)((longlong)&piVar7->_First + 1);
  }
  pTVar3 = TArrayView<UScriptStruct_const_*_const,int>::TArrayView<UScriptStruct_const_*_const,int>
                     ((TArrayView<UScriptStruct_const_*_const,int> *)
                      local_258.DataPtr.SharedReferenceCount.ReferenceController,&local_128);
  puVar5 = local_118;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *(undefined1 *)&pTVar3->DataPtr;
    pTVar3 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar3->DataPtr + 1);
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_118;
  puVar8 = local_108;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  local_248 = &local_c8;
  local_240 = FMassArchetypeHandle::FMassArchetypeHandle
                        (local_248,(FMassArchetypeHandle *)&this->_padding_);
  puVar5 = local_108;
  pTVar3 = &local_f8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)&pTVar3->DataPtr = *puVar5;
    puVar5 = puVar5 + 1;
    pTVar3 = (TArrayView<UScriptStruct_const_*_const,int> *)((longlong)&pTVar3->DataPtr + 1);
  }
  FMassEntityManager::CreateArchetype(local_238,&local_268,local_240,&local_f8);
  local_210 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  local_230 = &local_b8;
  local_220 = FMassArchetypeHandle::FMassArchetypeHandle(local_230,&local_268);
  local_228 = (FMassEntityHandle)local_258.DataPtr.Object;
  local_218 = (FMassEntityHandle)local_258.DataPtr.Object;
  FMassEntityManager::MoveEntityToAnotherArchetype
            (local_210,(FMassEntityHandle)local_258.DataPtr.Object,local_220,
             (FMassArchetypeSharedFragmentValues *)0x0);
  local_208 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_298 = this->bTagAdded;
  ::FString::FString(&local_190,"Tag addition observer has been executed");
  bVar1 = FAutomationTestBase::TestTrue(local_208,&local_190,local_298);
  local_297 = !bVar1;
  local_284 = (uint)(byte)local_297;
  ::FString::~FString(&local_190);
  if (local_297 == '\0') {
    local_200 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_295 = this->bFloatAdded;
    ::FString::FString(&local_180,"Fragment addition observer has been executed");
    bVar1 = FAutomationTestBase::TestTrue(local_200,&local_180,local_295);
    local_294 = !bVar1;
    local_280 = (uint)(byte)local_294;
    ::FString::~FString(&local_180);
    if (local_294 == '\0') {
      local_1f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_292 = this->bTagRemoved;
      ::FString::FString(&local_170,"(NOT) Tag removal observer has been executed");
      bVar1 = FAutomationTestBase::TestFalse(local_1f8,&local_170,local_292);
      local_291 = !bVar1;
      local_27c = (uint)(byte)local_291;
      ::FString::~FString(&local_170);
      if (local_291 == '\0') {
        local_1f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_28f = this->bFloatRemoved;
        ::FString::FString(&local_160,"(NOT) Fragment addition observer has been executed");
        bVar1 = FAutomationTestBase::TestFalse(local_1f0,&local_160,local_28f);
        local_28e = !bVar1;
        local_278 = (uint)(byte)local_28e;
        ::FString::~FString(&local_160);
        if (local_28e == '\0') {
          local_1c8 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
          local_1e8 = &local_a8;
          local_1d8 = FMassArchetypeHandle::FMassArchetypeHandle
                                (local_1e8,(FMassArchetypeHandle *)&this->_padding_);
          local_1e0 = (FMassEntityHandle)local_258.DataPtr.Object;
          local_1d0 = (FMassEntityHandle)local_258.DataPtr.Object;
          FMassEntityManager::MoveEntityToAnotherArchetype
                    (local_1c8,(FMassEntityHandle)local_258.DataPtr.Object,local_1d8,
                     (FMassArchetypeSharedFragmentValues *)0x0);
          local_1c0 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_28c = this->bTagRemoved;
          ::FString::FString(&local_150,"Tag removal observer has been executed");
          bVar1 = FAutomationTestBase::TestTrue(local_1c0,&local_150,local_28c);
          local_28b = !bVar1;
          local_274 = (uint)(byte)local_28b;
          ::FString::~FString(&local_150);
          if (local_28b == '\0') {
            local_1b8 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_289 = this->bFloatRemoved;
            ::FString::FString(&local_140,"Fragment addition observer has been executed");
            bVar1 = FAutomationTestBase::TestTrue(local_1b8,&local_140,local_289);
            local_288 = !bVar1;
            local_270 = (uint)(byte)local_288;
            ::FString::~FString(&local_140);
            if (local_288 == '\0') {
              local_286 = 1;
              FMassArchetypeHandle::~FMassArchetypeHandle(&local_268);
              local_296 = local_286;
            }
            else {
              AITestSuite::ConditionallyBreakOnTestFail();
              local_287 = 0;
              FMassArchetypeHandle::~FMassArchetypeHandle(&local_268);
              local_296 = local_287;
            }
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            local_28a = 0;
            FMassArchetypeHandle::~FMassArchetypeHandle(&local_268);
            local_296 = local_28a;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_28d = 0;
          FMassArchetypeHandle::~FMassArchetypeHandle(&local_268);
          local_296 = local_28d;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_290 = 0;
        FMassArchetypeHandle::~FMassArchetypeHandle(&local_268);
        local_296 = local_290;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_293 = 0;
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_268);
      local_296 = local_293;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_296 = 0;
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_268);
  }
  return (bool)local_296;
}

// SetUp @ 1471a8b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp
          (FMoveToAnotherArchetype_SingleEntity *this)

{
  bool bVar1;
  FMassEntityManager *this_00;
  TNotNull<UMassProcessor_*> *pTVar2;
  TNotNull<UScriptStruct_const_*> *pTVar3;
  undefined1 auStack_248 [32];
  FMoveToAnotherArchetype_SingleEntity *local_228;
  FMassObserverManager *local_220;
  <lambda_2> local_218;
  <lambda_2> *local_210;
  UMassTestProcessorBase *local_208;
  TNotNull<UMassProcessor_*> *local_200;
  UScriptStruct *local_1f8;
  TNotNull<UScriptStruct_const_*> *local_1f0;
  TNotNull<UMassProcessor_*> local_1e8;
  UScriptStruct *local_1e0;
  <lambda_3> local_1d8;
  <lambda_3> *local_1d0;
  UMassTestProcessorBase *local_1c8;
  TNotNull<UMassProcessor_*> *local_1c0;
  UScriptStruct *local_1b8;
  TNotNull<UScriptStruct_const_*> *local_1b0;
  TNotNull<UMassProcessor_*> local_1a8;
  UScriptStruct *local_1a0;
  <lambda_4> local_198;
  <lambda_4> *local_190;
  UMassTestProcessorBase *local_188;
  TNotNull<UMassProcessor_*> *local_180;
  UScriptStruct *local_178;
  TNotNull<UScriptStruct_const_*> *local_170;
  TNotNull<UMassProcessor_*> local_168;
  UScriptStruct *local_160;
  <lambda_5> local_158;
  <lambda_5> *local_150;
  UMassTestProcessorBase *local_148;
  TNotNull<UMassProcessor_*> *local_140;
  UScriptStruct *local_138;
  TNotNull<UScriptStruct_const_*> *local_130;
  TNotNull<UMassProcessor_*> local_128;
  UScriptStruct *local_120;
  TNotNull<UMassProcessor_*> local_118;
  TNotNull<UScriptStruct_const_*> local_110;
  TNotNull<UMassProcessor_*> local_108;
  TNotNull<UScriptStruct_const_*> local_100;
  TNotNull<UMassProcessor_*> local_f8;
  TNotNull<UScriptStruct_const_*> local_f0;
  TNotNull<UMassProcessor_*> local_e8;
  TNotNull<UScriptStruct_const_*> local_e0;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_d8;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_a8;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_78;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_248;
  bVar1 = FEntityTestBase::SetUp((FEntityTestBase *)this);
  if (bVar1) {
    this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    local_220 = FMassEntityManager::GetObserverManager(this_00);
    local_200 = &local_118;
    local_210 = &local_218;
    local_228 = this;
    local_218.__this = this;
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp_::__l2::<lambda_2>_>
              (&local_d8,local_210);
    local_208 = `UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp'::__l2::
                <lambda_1>::operator()(&local_228,&local_d8);
    pTVar2 = TNotNull<UMassProcessor_*>::TNotNull<UMassProcessor_*><UMassTestProcessorBase_*>
                       (local_200,&local_208);
    local_1e8.Val = pTVar2->Val;
    local_1f0 = &local_110;
    local_1f8 = FTestTag_A::StaticStruct();
    pTVar3 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                       (local_1f0,&local_1f8);
    local_1e0 = pTVar3->Val;
    FMassObserverManager::AddObserverInstance
              (local_220,(TNotNull<UScriptStruct_const_*>)local_1e0,Add,local_1e8);
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_d8);
    local_1c0 = &local_108;
    local_1d0 = &local_1d8;
    local_1d8.__this = this;
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp_::__l2::<lambda_3>_>
              (&local_a8,local_1d0);
    local_1c8 = `UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp'::__l2::
                <lambda_1>::operator()(&local_228,&local_a8);
    pTVar2 = TNotNull<UMassProcessor_*>::TNotNull<UMassProcessor_*><UMassTestProcessorBase_*>
                       (local_1c0,&local_1c8);
    local_1a8.Val = pTVar2->Val;
    local_1b0 = &local_100;
    local_1b8 = FTestTag_A::StaticStruct();
    pTVar3 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                       (local_1b0,&local_1b8);
    local_1a0 = pTVar3->Val;
    FMassObserverManager::AddObserverInstance
              (local_220,(TNotNull<UScriptStruct_const_*>)local_1a0,Remove,local_1a8);
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_a8);
    local_180 = &local_f8;
    local_190 = &local_198;
    local_198.__this = this;
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp_::__l2::<lambda_4>_>
              (&local_78,local_190);
    local_188 = `UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp'::__l2::
                <lambda_1>::operator()(&local_228,&local_78);
    pTVar2 = TNotNull<UMassProcessor_*>::TNotNull<UMassProcessor_*><UMassTestProcessorBase_*>
                       (local_180,&local_188);
    local_168.Val = pTVar2->Val;
    local_170 = &local_f0;
    local_178 = FTestFragment_Float::StaticStruct();
    pTVar3 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                       (local_170,&local_178);
    local_160 = pTVar3->Val;
    FMassObserverManager::AddObserverInstance
              (local_220,(TNotNull<UScriptStruct_const_*>)local_160,Add,local_168);
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_78);
    local_140 = &local_e8;
    local_150 = &local_158;
    local_158.__this = this;
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp_::__l2::<lambda_5>_>
              (&local_48,local_150);
    local_148 = `UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp'::__l2::
                <lambda_1>::operator()(&local_228,&local_48);
    pTVar2 = TNotNull<UMassProcessor_*>::TNotNull<UMassProcessor_*><UMassTestProcessorBase_*>
                       (local_140,&local_148);
    local_128.Val = pTVar2->Val;
    local_130 = &local_e0;
    local_138 = FTestFragment_Float::StaticStruct();
    pTVar3 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                       (local_130,&local_138);
    local_120 = pTVar3->Val;
    FMassObserverManager::AddObserverInstance
              (local_220,(TNotNull<UScriptStruct_const_*>)local_120,Remove,local_128);
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_48);
  }
  return bVar1;
}

