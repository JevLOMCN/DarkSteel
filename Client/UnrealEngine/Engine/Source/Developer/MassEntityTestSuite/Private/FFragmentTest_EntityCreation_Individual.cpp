// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470fd5e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::Observers::FFragmentTest_EntityCreation_Individual::InstantTest'::__l2::<lambda_1>
::operator()(void *this,FMassExecutionContext *param_1)

{
  int iVar1;
  FTestFragment_Float *pFVar2;
  int local_28;
  TArrayView<FTestFragment_Float_const_,int> local_20 [2];
  
  FMassExecutionContext::GetFragmentView<FTestFragment_Float>(param_1,local_20);
  local_28 = 0;
  while( true ) {
    iVar1 = FMassExecutionContext::GetNumEntities(param_1);
    if (iVar1 <= local_28) break;
    pFVar2 = TArrayView<FTestFragment_Float_const_,int>::operator[](local_20,local_28);
    **(float **)this = pFVar2->Value;
    local_28 = local_28 + 1;
  }
  return;
}

// InstantTest @ 147165500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FFragmentTest_EntityCreation_Individual::InstantTest
          (FFragmentTest_EntityCreation_Individual *this)

{
  bool bVar1;
  FMassEntityManager *this_00;
  TNotNull<UMassProcessor_*> *pTVar2;
  TNotNull<UScriptStruct_const_*> *pTVar3;
  FTestFragment_Float *pFVar4;
  initializer_list<FInstancedStruct> *piVar5;
  TArrayView<FInstancedStruct_const_,int> *pTVar6;
  longlong lVar7;
  undefined1 *puVar8;
  initializer_list<FInstancedStruct> *piVar9;
  FMassArchetypeCreationParams *pFVar10;
  FMassArchetypeSharedFragmentValues *pFVar11;
  undefined1 *puVar12;
  undefined1 auStack_378 [32];
  FMassArchetypeCreationParams *local_358;
  EMassObservedOperationFlags local_348;
  char local_347;
  undefined1 local_346;
  char local_345;
  undefined1 local_344;
  undefined1 local_343;
  float local_340;
  uint local_33c;
  uint local_338;
  float local_334;
  float local_330;
  FMassEntityHandle local_328;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> local_320;
  FTestFragment_Float local_310 [2];
  <lambda_1> local_308;
  <lambda_1> *local_300;
  TNotNull<UMassProcessor_*> *local_2f8;
  UMassProcessor *local_2f0;
  UScriptStruct *local_2e8;
  TNotNull<UScriptStruct_const_*> *local_2e0;
  UScriptStruct *local_2d8;
  TNotNull<UMassProcessor_*> local_2d0;
  UScriptStruct *local_2c8;
  FMassObserverManager *local_2c0;
  FMassEntityManager *local_2b8;
  TArrayView<FInstancedStruct_const_,int> *local_2b0;
  FMassEntityHandle local_2a8;
  FMassEntityHandle local_2a0;
  FMassEntityManager *local_298;
  FAutomationTestBase *local_290;
  FMassEntityHandle local_288;
  FMassEntityManager *local_280;
  TArrayView<FInstancedStruct_const_,int> *local_278;
  FMassArchetypeCreationParams *local_270;
  FMassEntityManager *local_268;
  FAutomationTestBase *local_260;
  undefined1 local_258 [16];
  FMassEntityManager *local_248;
  float local_240;
  FInstancedStruct local_238;
  undefined1 local_228 [24];
  FString local_210;
  TNotNull<UScriptStruct_const_*> local_200;
  TNotNull<UMassProcessor_*> local_1f8 [2];
  initializer_list<FInstancedStruct> local_1e8;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  TArrayView<FInstancedStruct_const_,int> local_1b8;
  FMassArchetypeCreationParams local_1a8;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [32];
  TArrayView<FInstancedStruct_const_,int> local_158;
  TArrayView<FInstancedStruct_const_,int> local_148;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_138;
  FMassArchetypeSharedFragmentValues local_108;
  FMassArchetypeSharedFragmentValues local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_240 = __real_42f6e979;
  local_340 = 0.0;
  local_308.ValueOnNotification = &local_340;
  local_300 = &local_308;
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::Observers::FFragmentTest_EntityCreation_Individual::InstantTest_::__l2::<lambda_1>_>
            (&local_138,local_300);
  TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
            ((TFunction<void___cdecl(FMassExecutionContext_&)> *)
             (*(longlong *)&this->field_0xa0 + 0x110),&local_138);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_138);
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_2c0 = FMassEntityManager::GetObserverManager(this_00);
  local_2f8 = local_1f8;
  pTVar2 = TNotNull<UMassProcessor_*>::TNotNull<UMassProcessor_*><UMassTestProcessorBase_*_&>
                     (local_2f8,(UMassTestProcessorBase **)&this->field_0xa0);
  local_2f0 = pTVar2->Val;
  local_348 = this->field_0xa8;
  local_2e0 = &local_200;
  local_2d0.Val = local_2f0;
  local_2e8 = FTestFragment_Float::StaticStruct();
  pTVar3 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                     (local_2e0,&local_2e8);
  local_2d8 = pTVar3->Val;
  local_2c8 = local_2d8;
  FMassObserverManager::AddObserverInstance
            (local_2c0,(TNotNull<UScriptStruct_const_*>)local_2d8,local_348,local_2d0);
  pFVar4 = FTestFragment_Float::FTestFragment_Float(local_310,__real_42f6e979);
  FInstancedStruct::Make<FTestFragment_Float>(&local_238,pFVar4);
  piVar5 = std::initializer_list<FInstancedStruct>::initializer_list<FInstancedStruct>
                     ((initializer_list<FInstancedStruct> *)(local_178 + 0x10),&local_238,
                      (FInstancedStruct *)local_228);
  piVar9 = &local_1e8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&piVar9->_First = *(undefined1 *)&piVar5->_First;
    piVar5 = (initializer_list<FInstancedStruct> *)((longlong)&piVar5->_First + 1);
    piVar9 = (initializer_list<FInstancedStruct> *)((longlong)&piVar9->_First + 1);
  }
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>(&local_320,&local_1e8);
  _vector_destructor_iterator_(&local_238,0x10,1,FInstancedStruct::~FInstancedStruct);
  local_2b8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::ReserveEntity(local_2b8);
  local_298 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar11 = &local_108;
  for (lVar7 = 0x68; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&pFVar11->HashCache = 0;
    pFVar11 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar11->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_108);
  local_2b0 = &local_158;
  pTVar6 = TArrayView<FInstancedStruct_const_,int>::
           TArrayView<FInstancedStruct_const_,int><TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_&,TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>
                     (local_2b0,&local_320);
  puVar8 = local_1d8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<FInstancedStruct_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
    puVar8 = puVar8 + 1;
  }
  puVar8 = local_1d8;
  puVar12 = local_1c8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar12 + 1;
  }
  local_2a8 = local_328;
  local_2a0 = local_328;
  puVar8 = local_1c8;
  pTVar6 = &local_1b8;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&pTVar6->DataPtr = *puVar8;
    puVar8 = puVar8 + 1;
    pTVar6 = (TArrayView<FInstancedStruct_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
  }
  FMassEntityManager::BuildEntity(local_298,local_328,&local_1b8,&local_108);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_108);
  local_290 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_334 = local_340;
  ::FString::FString((FString *)(local_228 + 8),
                     L"The fragment observer notified by BuildEntity is expected to be able to fetch the initial value"
                    );
  bVar1 = FTestHelpers::TestEqual<float,float>
                    ((FString *)(local_228 + 8),local_334,__real_42f6e979,local_290);
  local_347 = !bVar1;
  local_33c = (uint)(byte)local_347;
  ::FString::~FString((FString *)(local_228 + 8));
  if (local_347 == '\0') {
    local_280 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_288 = local_328;
    FMassEntityManager::DestroyEntity(local_280,local_328);
    local_340 = 0.0;
    local_268 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    pFVar10 = &local_1a8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)&pFVar10->ChunkMemorySize = 0;
      pFVar10 = (FMassArchetypeCreationParams *)((longlong)&pFVar10->ChunkMemorySize + 1);
    }
    local_270 = FMassArchetypeCreationParams::FMassArchetypeCreationParams(&local_1a8);
    pFVar11 = &local_98;
    for (lVar7 = 0x68; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)&pFVar11->HashCache = 0;
      pFVar11 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar11->HashCache + 1);
    }
    FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_98);
    local_278 = &local_148;
    pTVar6 = TArrayView<FInstancedStruct_const_,int>::
             TArrayView<FInstancedStruct_const_,int><TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_&,TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>_>
                       (local_278,&local_320);
    puVar8 = local_198;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *(undefined1 *)&pTVar6->DataPtr;
      pTVar6 = (TArrayView<FInstancedStruct_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
      puVar8 = puVar8 + 1;
    }
    puVar8 = local_198;
    puVar12 = local_188;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar12 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
    }
    puVar8 = local_188;
    puVar12 = local_178;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar12 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
    }
    local_358 = local_270;
    FMassEntityManager::CreateEntity
              (local_268,(TArrayView<FInstancedStruct_const_,int> *)local_258,
               (FMassArchetypeSharedFragmentValues *)local_178,
               (FMassArchetypeCreationParams *)&local_98);
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
    local_260 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_330 = local_340;
    ::FString::FString(&local_210,
                       L"The fragment observer notified by CreateEntity is expected to be able to fetch the initial value"
                      );
    bVar1 = FTestHelpers::TestEqual<float,float>(&local_210,local_330,__real_42f6e979,local_260);
    local_345 = !bVar1;
    local_338 = (uint)(byte)local_345;
    ::FString::~FString(&local_210);
    if (local_345 == '\0') {
      local_248 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_258._8_8_ = local_258._0_8_;
      FMassEntityManager::DestroyEntity(local_248,(FMassEntityHandle)local_258._0_8_);
      TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
                ((TFunction<void___cdecl(FMassExecutionContext_&)> *)
                 (*(longlong *)&this->field_0xa0 + 0x110),(void *)0x0);
      local_343 = 1;
      TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::
      ~TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>(&local_320);
      local_346 = local_343;
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_344 = 0;
      TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::
      ~TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>(&local_320);
      local_346 = local_344;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_346 = 0;
    TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::
    ~TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>(&local_320);
  }
  return (bool)local_346;
}

