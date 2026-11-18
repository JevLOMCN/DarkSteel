// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// <lambda_invoker_cdecl> @ 1470ceff0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
`FMassCommandsTest::FCommands_PushWhileFlushing::InstantTest'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FMassExecutionContext *param_1)

{
  undefined1 local_18 [24];
  
  operator()(local_18,param_1);
  return;
}

// operator() @ 1470fcc80

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassCommandsTest::FCommands_PushWhileFlushing::InstantTest'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  FMassEntityManager *this_00;
  FMassCommandBuffer *this_01;
  FMassEntityHandle *local_78;
  TArrayView<FMassEntityHandle_const_,int> local_20 [2];
  
  FMassExecutionContext::GetEntities(param_1,local_20);
  for (local_78 = local_20[0].DataPtr; local_78 != local_20[0].DataPtr + local_20[0].ArrayNum;
      local_78 = local_78 + 1) {
    this_00 = FMassExecutionContext::GetEntityManagerChecked(param_1);
    this_01 = FMassEntityManager::Defer(this_00);
    FMassCommandBuffer::AddFragment<FTestFragment_Float>(this_01,*local_78);
  }
  return;
}

// InstantTest @ 1471452e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassCommandsTest::FCommands_PushWhileFlushing::InstantTest(FCommands_PushWhileFlushing *this)

{
  bool bVar1;
  TSharedPtr<FMassEntityManager,1> *pTVar2;
  FMassEntityManager *pFVar3;
  TNotNull<UMassProcessor_*> *pTVar4;
  TNotNull<UScriptStruct_const_*> *pTVar5;
  longlong lVar6;
  <lambda_1> *p<Var7;
  undefined1 auStackY_2d8 [32];
  <lambda_1> local_2a8 [16];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_298;
  uint local_288;
  uint local_284;
  uint local_280;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_278;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_270;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_268;
  int local_260;
  int local_25c;
  int local_258;
  UMassTestProcessorBase *local_250;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_248;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_230;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_218;
  FScriptContainerElement *local_200;
  FScriptContainerElement *local_1f8;
  FMassEntityHandle *local_1f0;
  FMassEntityHandle *local_1e8;
  FMassEntityHandle local_1e0;
  FMassEntityManager *local_1d8;
  FTestFragment_Float *local_1d0;
  FAutomationTestBase *local_1c8;
  TSharedPtr<FMassEntityManager,1> *local_1c0;
  TNotNull<UMassProcessor_*> *local_1b8;
  UScriptStruct *local_1b0;
  TNotNull<UScriptStruct_const_*> *local_1a8;
  TNotNull<UMassProcessor_*> local_1a0;
  UScriptStruct *local_198;
  FMassObserverManager *local_190;
  FMassCommandBuffer *local_188;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  FMassEntityHandle *local_160;
  FMassEntityHandle *local_158;
  FMassEntityHandle local_150;
  FMassEntityManager *local_148;
  FTestFragment_Float *local_140;
  FAutomationTestBase *local_138;
  FScriptContainerElement *local_120;
  undefined4 local_118;
  FMassEntityHandle *local_110;
  FMassEntityHandle *local_108;
  FMassEntityHandle local_100;
  FMassEntityManager *local_f8;
  FTestFragment_Float *local_f0;
  FAutomationTestBase *local_e8;
  FScriptContainerElement *local_e0;
  FMassEntityManager *local_d8;
  TNotNull<UScriptStruct_const_*> local_c0;
  TNotNull<UMassProcessor_*> local_b8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_b0;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_a0;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_88;
  TCheckedPointerIterator<FMassEntityHandle,int,0> local_70;
  TSharedPtr<FMassEntityManager,1> local_58;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_118 = 5;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_298.AllocatorInstance);
  local_298.ArrayNum = 0;
  local_298.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_298.AllocatorInstance);
  local_d8 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_d8,&local_b0,(FMassArchetypeHandle *)&this->field_0x60,5,&local_298);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_b0);
  local_278 = &local_298;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_248,&local_298.ArrayNum,(FMassEntityHandle *)local_298.AllocatorInstance.Data);
  local_200 = (local_278->AllocatorInstance).Data;
  local_260 = local_278->ArrayNum;
  local_1f8 = local_200;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_a0,&local_278->ArrayNum,
             (FMassEntityHandle *)(local_200 + (longlong)local_260 * 8));
  while( true ) {
    if (*local_248.CurrentNum != local_248.InitialNum) {
      p<Var7 = local_2a8;
      for (lVar6 = 1; lVar6 != 0; lVar6 = lVar6 + -1) {
        *p<Var7 = (<lambda_1>)0x0;
        p<Var7 = p<Var7 + 1;
      }
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2a8);
    }
    local_2a8[1] = (<lambda_1>)(local_248.Ptr != local_a0.Ptr);
    local_288 = (uint)(byte)local_2a8[1];
    if (!(bool)local_2a8[1]) break;
    local_1f0 = local_248.Ptr;
    local_1e8 = local_248.Ptr;
    local_1c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_1d8 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_1e0 = *local_1e8;
    local_1d0 = FMassEntityManager::GetFragmentDataPtr<FTestFragment_Float>(local_1d8,local_1e0);
    bVar1 = FAutomationTestBase::TestNull
                      (local_1c8,
                       L"None of the freshly created entities is expexted to contain a float fragment"
                       ,local_1d0);
    if (!bVar1) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_2a8[2] = (<lambda_1>)0x0;
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_298);
      return (bool)local_2a8[2];
    }
    local_248.Ptr = local_248.Ptr + 1;
  }
  local_1c0 = &local_58;
  pTVar2 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_1c0,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_250 = NewTestProcessor<UMassTestProcessorBase>(pTVar2);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_FMassCommandsTest::FCommands_PushWhileFlushing::InstantTest_::__l2::<lambda_1>_>
            (&local_48,local_2a8 + 10);
  TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
            (&local_250->ForEachEntityChunkExecutionFunction,&local_48);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_48);
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_190 = FMassEntityManager::GetObserverManager(pFVar3);
  local_1b8 = &local_b8;
  pTVar4 = TNotNull<UMassProcessor_*>::TNotNull<UMassProcessor_*><UMassTestProcessorBase_*_&>
                     (local_1b8,&local_250);
  local_1a0.Val = pTVar4->Val;
  local_1a8 = &local_c0;
  local_1b0 = FTestTag_A::StaticStruct();
  pTVar5 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                     (local_1a8,&local_1b0);
  local_198 = pTVar5->Val;
  FMassObserverManager::AddObserverInstance
            (local_190,(TNotNull<UScriptStruct_const_*>)local_198,Add,local_1a0);
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_188 = FMassEntityManager::Defer(pFVar3);
  FMassCommandBuffer::
  PushCommand<FMassCommandAddTagsInternal<0,FTestTag_A>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&>
            (local_188,&local_298);
  local_270 = &local_298;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_230,&local_298.ArrayNum,(FMassEntityHandle *)local_298.AllocatorInstance.Data);
  local_170 = (local_270->AllocatorInstance).Data;
  local_25c = local_270->ArrayNum;
  local_168 = local_170;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_88,&local_270->ArrayNum,
             (FMassEntityHandle *)(local_170 + (longlong)local_25c * 8));
  while( true ) {
    if (*local_230.CurrentNum != local_230.InitialNum) {
      p<Var7 = local_2a8 + 3;
      for (lVar6 = 1; lVar6 != 0; lVar6 = lVar6 + -1) {
        *p<Var7 = (<lambda_1>)0x0;
        p<Var7 = p<Var7 + 1;
      }
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2a8 + 3);
    }
    local_2a8[4] = (<lambda_1>)(local_230.Ptr != local_88.Ptr);
    local_284 = (uint)(byte)local_2a8[4];
    if (!(bool)local_2a8[4]) break;
    local_160 = local_230.Ptr;
    local_158 = local_230.Ptr;
    local_138 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_148 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_150 = *local_158;
    local_140 = FMassEntityManager::GetFragmentDataPtr<FTestFragment_Float>(local_148,local_150);
    bVar1 = FAutomationTestBase::TestNull
                      (local_138,
                       L"Pushing the AddTag command should not result in adding the float fragment",
                       local_140);
    if (!bVar1) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_2a8[5] = (<lambda_1>)0x0;
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_298);
      return (bool)local_2a8[5];
    }
    local_230.Ptr = local_230.Ptr + 1;
  }
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::FlushCommands(pFVar3);
  local_268 = &local_298;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_218,&local_298.ArrayNum,(FMassEntityHandle *)local_298.AllocatorInstance.Data);
  local_120 = (local_268->AllocatorInstance).Data;
  local_258 = local_268->ArrayNum;
  local_e0 = local_120;
  TCheckedPointerIterator<FMassEntityHandle,int,0>::TCheckedPointerIterator<FMassEntityHandle,int,0>
            (&local_70,&local_268->ArrayNum,
             (FMassEntityHandle *)(local_120 + (longlong)local_258 * 8));
  while( true ) {
    if (*local_218.CurrentNum != local_218.InitialNum) {
      p<Var7 = local_2a8 + 6;
      for (lVar6 = 1; lVar6 != 0; lVar6 = lVar6 + -1) {
        *p<Var7 = (<lambda_1>)0x0;
        p<Var7 = p<Var7 + 1;
      }
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2a8 + 6);
    }
    local_2a8[7] = (<lambda_1>)(local_218.Ptr != local_70.Ptr);
    local_280 = (uint)(byte)local_2a8[7];
    if (!(bool)local_2a8[7]) break;
    local_110 = local_218.Ptr;
    local_108 = local_218.Ptr;
    local_e8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_f8 = TSharedPtr<FMassEntityManager,1>::operator->
                         ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_100 = *local_108;
    local_f0 = FMassEntityManager::GetFragmentDataPtr<FTestFragment_Float>(local_f8,local_100);
    bVar1 = FAutomationTestBase::TestNotNull<FTestFragment_Float>
                      (local_e8,
                       L"After flushing all the observed entities should have the float fragment",
                       local_f0);
    if (!bVar1) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_2a8[8] = (<lambda_1>)0x0;
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_298);
      return (bool)local_2a8[8];
    }
    local_218.Ptr = local_218.Ptr + 1;
  }
  local_2a8[9] = (<lambda_1>)0x1;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_298);
  return (bool)local_2a8[9];
}

