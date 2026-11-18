// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// operator() @ 1470fbbe0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::FArchetypeGroup_SingleLevelQuery::InstantTest'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this_00;
  TArrayView<FMassEntityHandle_const_,int> *pTVar1;
  TArrayView<FMassEntityHandle_const_,int> local_18;
  
  this_00 = *(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> **)this;
  pTVar1 = FMassExecutionContext::GetEntities(param_1,&local_18);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  Append<TArrayView<FMassEntityHandle_const_,int>_>(this_00,pTVar1);
  return;
}

// operator() @ 1471008a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::FArchetypeGroup_SingleLevelQuery::InstantTest'::__l2::<lambda_2>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this_00;
  TArrayView<FMassEntityHandle_const_,int> *pTVar1;
  TArrayView<FMassEntityHandle_const_,int> local_18;
  
  this_00 = *(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> **)this;
  pTVar1 = FMassExecutionContext::GetEntities(param_1,&local_18);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  Append<TArrayView<FMassEntityHandle_const_,int>_>(this_00,pTVar1);
  return;
}

// operator() @ 147103520

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::FArchetypeGroup_SingleLevelQuery::InstantTest'::__l2::<lambda_3>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this_00;
  TArrayView<FMassEntityHandle_const_,int> *this_01;
  FMassEntityHandle *pFVar1;
  TArrayView<FMassEntityHandle_const_,int> local_20 [2];
  
  this_00 = *(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> **)this;
  this_01 = FMassExecutionContext::GetEntities(param_1,local_20);
  pFVar1 = TArrayView<FMassEntityHandle_const_,int>::operator[](this_01,0);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Insert(this_00,pFVar1,0);
  return;
}

// InstantTest @ 1471384e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::FArchetypeGroup_SingleLevelQuery::InstantTest
          (FArchetypeGroup_SingleLevelQuery *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FName *pFVar4;
  TArrayView<FMassEntityHandle,int> *pTVar5;
  TArrayView<FMassEntityHandle_const_,int> *pTVar6;
  FArchetypeGroupID *pFVar7;
  FArchetypeGroupHandle *pFVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStackY_bb8 [32];
  uint local_b88;
  FArchetypeGroupType local_b78;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_b70;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_b60;
  uint local_b50;
  uint local_b4c;
  uint local_b48;
  uint local_b44;
  uint local_b40;
  int local_b3c;
  uint local_b38;
  uint local_b34;
  FName *local_b30;
  FName local_b28;
  FMassEntityManager *local_b20;
  FMassEntityManager *local_b18;
  FMassEntityManager *local_b10;
  <lambda_1> local_b08;
  <lambda_1> *local_b00;
  FAutomationTestBase *local_af8;
  undefined4 local_af0;
  undefined4 local_aec;
  FScriptContainerElement *local_ae8;
  FScriptContainerElement *local_ae0;
  FMassEntityHandle *local_ad8;
  TArrayView<FMassEntityHandle_const_,int> *local_ad0;
  FArchetypeGroupID *local_ac8;
  FArchetypeGroupHandle local_ac0;
  FArchetypeGroupHandle local_ab8;
  FMassEntityManager *local_ab0;
  <lambda_2> local_aa8;
  <lambda_2> *local_aa0;
  FAutomationTestBase *local_a98;
  <lambda_3> local_a90;
  <lambda_3> *local_a88;
  FAutomationTestBase *local_a80;
  undefined4 local_a78;
  FArchetypeGroupID local_a74;
  FString local_a70;
  FString local_a60;
  FString local_a50;
  FName local_a40;
  FArchetypeGroupHandle local_a38;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_a30;
  undefined1 local_a20 [16];
  undefined1 local_a10 [24];
  TArrayView<FMassEntityHandle_const_,int> local_9f8;
  TArrayView<FMassEntityHandle_const_,int> local_9e8;
  TArrayView<FMassEntityHandle,int> local_9d8;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_9c8;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_998;
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)> local_968;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_938;
  FMassEntityQuery local_908;
  FMassExecutionContext local_5b8;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_bb8;
  local_a78 = 100;
  local_b20 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_b30 = &local_a40;
  pFVar4 = ::FName::FName(local_b30,L"TestGroup");
  local_b28 = *pFVar4;
  FMassEntityManager::FindOrAddArchetypeGroupType(local_b20,(FName)&local_b78);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_b60.AllocatorInstance);
  local_b60.ArrayNum = 0;
  local_b60.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_b60.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_b70.AllocatorInstance);
  local_b70.ArrayNum = 0;
  local_b70.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_b70.AllocatorInstance);
  local_b18 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_b18,&local_a30,(FMassArchetypeHandle *)&this->field_0x60,100,&local_b60);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_a30);
  FMassEntityQuery::FMassEntityQuery
            (&local_908,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)&local_908,ReadOnly,All);
  local_b10 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::CreateExecutionContext(local_b10,&local_5b8,0.0);
  local_b08.VerifyEntities = &local_b70;
  local_b00 = &local_b08;
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::FArchetypeGroup_SingleLevelQuery::InstantTest_::__l2::<lambda_1>_>
            (&local_9c8,local_b00);
  FMassEntityQuery::ForEachEntityChunk(&local_908,&local_5b8,&local_9c8);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_9c8);
  local_af8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  bVar2 = Algo::
          Compare<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                    (&local_b60,&local_b70);
  ::FString::FString(&local_a70,"Assumptions re order of entity processing is correct");
  bVar2 = FAutomationTestBase::TestTrue(local_af8,&local_a70,bVar2);
  local_b50 = (uint)!bVar2;
  ::FString::~FString(&local_a70);
  if (!bVar2) {
    AITestSuite::ConditionallyBreakOnTestFail();
    FMassExecutionContext::~FMassExecutionContext(&local_5b8);
    FMassEntityQuery::~FMassEntityQuery(&local_908);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b70);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b60);
    bVar2 = false;
  }
  else {
    for (local_b88 = 0; local_b3c = local_b60.ArrayNum, (int)local_b88 < local_b60.ArrayNum;
        local_b88 = local_b88 + 1) {
      local_ab0 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_ad0 = &local_9e8;
      local_b48 = (uint)(-1 < (int)local_b88);
      local_b4c = (uint)((int)local_b88 < local_b60.ArrayNum);
      if (-1 >= (int)local_b88 || (int)local_b88 >= local_b60.ArrayNum) {
        local_af0 = 0;
        local_aec = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_ae8 = local_b60.AllocatorInstance.Data;
      local_ae0 = local_b60.AllocatorInstance.Data;
      local_ad8 = (FMassEntityHandle *)
                  (local_b60.AllocatorInstance.Data + (longlong)(int)local_b88 * 8);
      pTVar5 = MakeArrayView<FMassEntityHandle>(&local_9d8,local_ad8,1);
      pTVar6 = TArrayView<FMassEntityHandle_const_,int>::
               TArrayView<FMassEntityHandle_const_,int><TArrayView<FMassEntityHandle,int>,TArrayView<FMassEntityHandle,int>_>
                         (local_ad0,pTVar5);
      puVar10 = local_a20;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar10 = *(undefined1 *)&pTVar6->DataPtr;
        pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
        puVar10 = puVar10 + 1;
      }
      puVar10 = local_a20;
      puVar11 = local_a10;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      local_ac8 = &local_a74;
      pFVar7 = FArchetypeGroupID::FArchetypeGroupID(local_ac8,local_b88);
      local_b38 = pFVar7->ID;
      local_b34 = local_b78.Identifier;
      pFVar8 = FArchetypeGroupHandle::FArchetypeGroupHandle
                         (&local_a38,local_b78,(FArchetypeGroupID)local_b38);
      local_ac0 = *pFVar8;
      puVar10 = local_a10;
      pTVar6 = &local_9f8;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *(undefined1 *)&pTVar6->DataPtr = *puVar10;
        puVar10 = puVar10 + 1;
        pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
      }
      local_ab8 = local_ac0;
      FMassEntityManager::BatchGroupEntities(local_ab0,local_ac0,&local_9f8);
    }
    FMassEntityQuery::GroupBy(&local_908,local_b78);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Reset(&local_b70,0);
    local_aa8.VerifyEntities = &local_b70;
    local_aa0 = &local_aa8;
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::FArchetypeGroup_SingleLevelQuery::InstantTest_::__l2::<lambda_2>_>
              (&local_998,local_aa0);
    FMassEntityQuery::ForEachEntityChunk(&local_908,&local_5b8,&local_998);
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_998);
    local_a98 = FAITestBase::GetTestRunner((FAITestBase *)this);
    bVar2 = Algo::
            Compare<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                      (&local_b60,&local_b70);
    ::FString::FString(&local_a60,"After grouping the order is expected to remain the same");
    bVar2 = FAutomationTestBase::TestTrue(local_a98,&local_a60,bVar2);
    local_b44 = (uint)!bVar2;
    ::FString::~FString(&local_a60);
    if (!bVar2) {
      AITestSuite::ConditionallyBreakOnTestFail();
      FMassExecutionContext::~FMassExecutionContext(&local_5b8);
      FMassEntityQuery::~FMassEntityQuery(&local_908);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b70);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b60);
      bVar2 = false;
    }
    else {
      FMassEntityQuery::ResetGrouping(&local_908);
      TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
      TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)><UE::Mass::Test::DescendingGroupSorter::<lambda>_&>
                (&local_968,&DescendingGroupSorter);
      FMassEntityQuery::GroupBy(&local_908,local_b78,&local_968);
      TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
      ~TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>(&local_968);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Reset(&local_b70,0);
      local_a90.VerifyEntities = &local_b70;
      local_a88 = &local_a90;
      TFunction<void___cdecl(FMassExecutionContext_&)>::
      TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::FArchetypeGroup_SingleLevelQuery::InstantTest_::__l2::<lambda_3>_>
                (&local_938,local_a88);
      FMassEntityQuery::ForEachEntityChunk(&local_908,&local_5b8,&local_938);
      TFunction<void___cdecl(FMassExecutionContext_&)>::
      ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_938);
      local_a80 = FAITestBase::GetTestRunner((FAITestBase *)this);
      bVar2 = Algo::
              Compare<TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
                        (&local_b60,&local_b70);
      ::FString::FString(&local_a50,"After descending grouping the order matches expectations");
      bVar2 = FAutomationTestBase::TestTrue(local_a80,&local_a50,bVar2);
      local_b40 = (uint)!bVar2;
      ::FString::~FString(&local_a50);
      if (!bVar2) {
        AITestSuite::ConditionallyBreakOnTestFail();
        FMassExecutionContext::~FMassExecutionContext(&local_5b8);
        FMassEntityQuery::~FMassEntityQuery(&local_908);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b70);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b60);
        bVar2 = false;
      }
      else {
        FMassExecutionContext::~FMassExecutionContext(&local_5b8);
        FMassEntityQuery::~FMassEntityQuery(&local_908);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b70);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b60);
        bVar2 = true;
      }
    }
  }
  return bVar2;
}

