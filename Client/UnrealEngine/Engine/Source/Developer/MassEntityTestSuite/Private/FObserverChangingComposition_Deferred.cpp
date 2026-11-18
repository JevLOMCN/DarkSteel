// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// <lambda_invoker_cdecl> @ 1470cf050

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
`UE::Mass::Test::Observers::FObserverChangingComposition_Deferred::InstantTest'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FMassExecutionContext *param_1)

{
  FMassCommandBuffer *this;
  TArrayView<FMassEntityHandle_const_,int> *pTVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_50 [24];
  TArrayView<FMassEntityHandle_const_,int> local_38;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  
  this = FMassExecutionContext::Defer(param_1);
  pTVar1 = FMassExecutionContext::GetEntities(param_1,&local_28);
  puVar3 = local_50;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *(undefined1 *)&pTVar1->DataPtr;
    pTVar1 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar1->DataPtr + 1);
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_50;
  pTVar1 = &local_38;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined1 *)&pTVar1->DataPtr = *puVar3;
    puVar3 = puVar3 + 1;
    pTVar1 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar1->DataPtr + 1);
  }
  FMassCommandBuffer::PushCommand<FMassCommandAddFragmentsInternal<0,FTestFragment_Int>_>
            (this,&local_38);
  return;
}

// InstantTest @ 147171cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Observers::FObserverChangingComposition_Deferred::InstantTest
          (FObserverChangingComposition_Deferred *this)

{
  EMassObservedOperationFlags EVar1;
  bool bVar2;
  FMassEntityManager *this_00;
  TNotNull<UMassProcessor_*> *pTVar3;
  TNotNull<UScriptStruct_const_*> *pTVar4;
  undefined1 auStackY_158 [32];
  <lambda_1> local_122 [2];
  uint local_120;
  uint local_11c;
  int local_118;
  int local_114;
  FMassArchetypeHandle local_110;
  undefined4 local_100;
  TNotNull<UMassProcessor_*> *local_f8;
  UMassProcessor *local_f0;
  UScriptStruct *local_e8;
  TNotNull<UScriptStruct_const_*> *local_e0;
  UScriptStruct *local_d8;
  TNotNull<UMassProcessor_*> local_d0;
  UScriptStruct *local_c8;
  FMassObserverManager *local_c0;
  FMassEntityManager *local_b8;
  FMassEntityManager *local_b0;
  FAutomationTestBase *local_a8;
  FMassEntityManager *local_a0;
  FAutomationTestBase *local_98;
  FString local_90;
  FString local_80;
  TNotNull<UMassProcessor_*> local_70;
  TNotNull<UScriptStruct_const_*> local_68;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_60;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_100 = 3;
  FMassArchetypeHandle::FMassArchetypeHandle(&local_110,(FMassArchetypeHandle *)&this->field_0x50);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::Observers::FObserverChangingComposition_Deferred::InstantTest_::__l2::<lambda_1>_>
            (&local_48,local_122);
  TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
            ((TFunction<void___cdecl(FMassExecutionContext_&)> *)
             (*(longlong *)&this->field_0xa0 + 0x110),&local_48);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_48);
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_c0 = FMassEntityManager::GetObserverManager(this_00);
  local_f8 = &local_70;
  pTVar3 = TNotNull<UMassProcessor_*>::TNotNull<UMassProcessor_*><UMassTestProcessorBase_*_&>
                     (local_f8,(UMassTestProcessorBase **)&this->field_0xa0);
  local_f0 = pTVar3->Val;
  EVar1 = this->field_0xa8;
  local_e0 = &local_68;
  local_d0.Val = local_f0;
  local_e8 = FTestFragment_Float::StaticStruct();
  pTVar4 = TNotNull<UScriptStruct_const_*>::TNotNull<UScriptStruct_const_*><UScriptStruct_*>
                     (local_e0,&local_e8);
  local_d8 = pTVar4->Val;
  local_c8 = local_d8;
  FMassObserverManager::AddObserverInstance
            (local_c0,(TNotNull<UScriptStruct_const_*>)local_d8,EVar1,local_d0);
  local_b8 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_b8,&local_60,&local_110,3,
             (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)&this->field_0xc0);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_60);
  local_a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_b0 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_118 = FMassEntityManager::DebugGetArchetypeEntitiesCount(local_b0,&local_110);
  ::FString::FString(&local_90,"Number of entities in the original archetype");
  bVar2 = FTestHelpers::TestEqual<int,int>(&local_90,local_118,0,local_a8);
  local_120 = (uint)!bVar2;
  ::FString::~FString(&local_90);
  if (!bVar2) {
    AITestSuite::ConditionallyBreakOnTestFail();
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_110);
    bVar2 = false;
  }
  else {
    local_98 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_a0 = TSharedPtr<FMassEntityManager,1>::operator->
                         ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_114 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                          (local_a0,(FMassArchetypeHandle *)&this->field_0x70);
    ::FString::FString(&local_80,"Number of entities in the target archetype");
    bVar2 = FTestHelpers::TestEqual<int,int>(&local_80,local_114,3,local_98);
    local_11c = (uint)!bVar2;
    ::FString::~FString(&local_80);
    if (!bVar2) {
      AITestSuite::ConditionallyBreakOnTestFail();
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_110);
      bVar2 = false;
    }
    else {
      FMassArchetypeHandle::~FMassArchetypeHandle(&local_110);
      bVar2 = true;
    }
  }
  return bVar2;
}

