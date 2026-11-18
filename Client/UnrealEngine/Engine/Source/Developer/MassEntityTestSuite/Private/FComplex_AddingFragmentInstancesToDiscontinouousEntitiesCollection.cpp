// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// <lambda_invoker_cdecl> @ 1470cf020

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
`FMassComplexTest::FComplex_AddingFragmentInstancesToDiscontinouousEntitiesCollection::InstantTest'
::__l2::<lambda_1>::<lambda_invoker_cdecl>(FMassExecutionContext *param_1)

{
  undefined1 local_18 [4];
  undefined4 local_14;
  
  local_14 = 0;
  operator()(local_18,param_1);
  return;
}

// operator() @ 1470fcd80

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassComplexTest::FComplex_AddingFragmentInstancesToDiscontinouousEntitiesCollection::InstantTest'
::__l2::<lambda_1>::operator()(void *this,FMassExecutionContext *param_1)

{
  int iVar1;
  FTestFragment_Int *pFVar2;
  int local_28;
  TArrayView<FTestFragment_Int,int> local_20 [2];
  
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Int>(param_1,local_20);
  local_28 = 0;
  while( true ) {
    iVar1 = FMassExecutionContext::GetNumEntities(param_1);
    if (iVar1 <= local_28) break;
    pFVar2 = TArrayView<FTestFragment_Int,int>::operator[](local_20,local_28);
    pFVar2->Value = local_28;
    local_28 = local_28 + 1;
  }
  return;
}

// InstantTest @ 147147200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassComplexTest::FComplex_AddingFragmentInstancesToDiscontinouousEntitiesCollection::InstantTest
          (FComplex_AddingFragmentInstancesToDiscontinouousEntitiesCollection *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<UScriptStruct_*> *piVar4;
  FMassEntityManager *pFVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStackY_b68 [32];
  int local_b38;
  int local_b34;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_b28;
  <lambda_1> local_b18 [4];
  uint local_b14;
  uint local_b10;
  uint local_b0c;
  uint local_b08;
  uint local_b04;
  uint local_b00;
  uint local_afc;
  uint local_af8;
  uint local_af4;
  uint local_af0;
  int local_aec;
  int local_ae8;
  int local_ae4;
  FTestFragment_Int *local_ae0;
  UScriptStruct *local_ad8;
  UScriptStruct *local_ad0;
  FTestFragment_Float local_ac8 [2];
  FMassEntityManager *local_ac0;
  FMassEntityManager *local_ab8;
  undefined1 *local_ab0;
  TSharedRef<FMassEntityManager,1> *local_aa8;
  undefined4 local_aa0;
  undefined4 local_a9c;
  FScriptContainerElement *local_a98;
  FScriptContainerElement *local_a90;
  FMassEntityHandle *local_a88;
  FMassEntityHandle local_a80;
  FMassEntityManager *local_a78;
  FTestFragment_Int *local_a70;
  undefined4 local_a68;
  undefined4 local_a64;
  FScriptContainerElement *local_a60;
  FScriptContainerElement *local_a58;
  FMassEntityHandle *local_a50;
  FMassEntityHandle local_a48;
  FTestFragment_Float *local_a40;
  FMassEntityHandle local_a38;
  FMassCommandBuffer *local_a30;
  undefined4 local_a28;
  undefined4 local_a24;
  FScriptContainerElement *local_a20;
  FScriptContainerElement *local_a18;
  FMassEntityHandle *local_a10;
  FMassEntityHandle local_a08;
  FMassEntityManager *local_a00;
  undefined4 local_9f8;
  undefined4 local_9f4;
  FScriptContainerElement *local_9f0;
  FScriptContainerElement *local_9e8;
  FMassEntityHandle *local_9e0;
  FMassEntityHandle local_9d8;
  FMassEntityManager *local_9d0;
  FAutomationTestBase *local_9c8;
  FTestFragment_Float *local_9c0;
  FAutomationTestBase *local_9b8;
  undefined4 local_9b0;
  undefined4 local_9ac;
  FString local_9a8;
  FString local_998;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_988;
  undefined1 local_978 [16];
  initializer_list<UScriptStruct_*> local_968;
  TSharedRef<FMassEntityManager,1> local_958;
  initializer_list<UScriptStruct_*> local_948;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_938;
  FMassEntityQuery local_908;
  FMassExecutionContext local_5b8;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_b68;
  local_9b0 = 4;
  local_9ac = 2;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_b28.AllocatorInstance);
  local_b28.ArrayNum = 0;
  local_b28.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_b28.AllocatorInstance);
  local_ac0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_ac0,&local_988,(FMassArchetypeHandle *)&this->field_0x60,4,&local_b28);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_988);
  local_ab8 = *(FMassEntityManager **)&this->field_0x28;
  FMassExecutionContext::FMassExecutionContext(&local_5b8,local_ab8,0.0,true);
  local_ad8 = FTestFragment_Int::StaticStruct();
  piVar4 = std::initializer_list<UScriptStruct_*>::initializer_list<UScriptStruct_*>
                     (&local_948,&local_ad8,&local_ad0);
  puVar7 = local_978;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<UScriptStruct_*> *)((longlong)&piVar4->_First + 1);
    puVar7 = puVar7 + 1;
  }
  local_ab0 = &this->field_0x28;
  local_aa8 = TSharedPtr<FMassEntityManager,1>::ToSharedRef
                        ((TSharedPtr<FMassEntityManager,1> *)local_ab0,&local_958);
  puVar7 = local_978;
  piVar4 = &local_968;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&piVar4->_First = *puVar7;
    puVar7 = puVar7 + 1;
    piVar4 = (initializer_list<UScriptStruct_*> *)((longlong)&piVar4->_First + 1);
  }
  FMassEntityQuery::FMassEntityQuery(&local_908,local_aa8,&local_968);
  TSharedRef<FMassEntityManager,1>::~TSharedRef<FMassEntityManager,1>(&local_958);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_FMassComplexTest::FComplex_AddingFragmentInstancesToDiscontinouousEntitiesCollection::InstantTest_::__l2::<lambda_1>_>
            (&local_938,local_b18);
  FMassEntityQuery::ForEachEntityChunk(&local_908,&local_5b8,&local_938);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_938);
  for (local_b34 = 3; -1 < local_b34; local_b34 = local_b34 + -1) {
    if (local_b34 != 2) {
      local_a78 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_b10 = (uint)(-1 < local_b34);
      local_b14 = (uint)(local_b34 < local_b28.ArrayNum);
      if (-1 >= local_b34 || local_b34 >= local_b28.ArrayNum) {
        local_aa0 = 0;
        local_a9c = 0;
        UE::Core::Private::FormatStringSan::
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
      local_a98 = local_b28.AllocatorInstance.Data;
      local_a90 = local_b28.AllocatorInstance.Data;
      local_a88 = (FMassEntityHandle *)(local_b28.AllocatorInstance.Data + (longlong)local_b34 * 8);
      local_a80 = *local_a88;
      local_a70 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Int>(local_a78,local_a80)
      ;
      pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                         ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_a30 = FMassEntityManager::Defer(pFVar5);
      local_a40 = FTestFragment_Float::FTestFragment_Float(local_ac8,(float)local_a70->Value);
      local_b08 = (uint)(-1 < local_b34);
      local_b0c = (uint)(local_b34 < local_b28.ArrayNum);
      if (-1 >= local_b34 || local_b34 >= local_b28.ArrayNum) {
        local_a68 = 0;
        local_a64 = 0;
        UE::Core::Private::FormatStringSan::
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
      local_a60 = local_b28.AllocatorInstance.Data;
      local_a58 = local_b28.AllocatorInstance.Data;
      local_a50 = (FMassEntityHandle *)(local_b28.AllocatorInstance.Data + (longlong)local_b34 * 8);
      local_a48 = *local_a50;
      local_a38 = local_a48;
      FMassCommandBuffer::PushCommand<FMassCommandAddFragmentInstances,FTestFragment_Float>
                (local_a30,local_a48,local_a40);
    }
  }
  pFVar5 = TSharedPtr<FMassEntityManager,1>::operator->
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::FlushCommands(pFVar5);
  local_b38 = 0;
  do {
    if (3 < local_b38) {
      FMassEntityQuery::~FMassEntityQuery(&local_908);
      FMassExecutionContext::~FMassExecutionContext(&local_5b8);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b28);
      return true;
    }
    if (local_b38 != 2) {
      local_a00 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_b00 = (uint)(-1 < local_b38);
      local_b04 = (uint)(local_b38 < local_b28.ArrayNum);
      if (-1 >= local_b38 || local_b38 >= local_b28.ArrayNum) {
        local_a28 = 0;
        local_a24 = 0;
        UE::Core::Private::FormatStringSan::
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
      local_a20 = local_b28.AllocatorInstance.Data;
      local_a18 = local_b28.AllocatorInstance.Data;
      local_a10 = (FMassEntityHandle *)(local_b28.AllocatorInstance.Data + (longlong)local_b38 * 8);
      local_a08 = *local_a10;
      local_9c0 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Float>
                            (local_a00,local_a08);
      local_9d0 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_af8 = (uint)(-1 < local_b38);
      local_afc = (uint)(local_b38 < local_b28.ArrayNum);
      if (-1 >= local_b38 || local_b38 >= local_b28.ArrayNum) {
        local_9f8 = 0;
        local_9f4 = 0;
        UE::Core::Private::FormatStringSan::
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
      local_9f0 = local_b28.AllocatorInstance.Data;
      local_9e8 = local_b28.AllocatorInstance.Data;
      local_9e0 = (FMassEntityHandle *)(local_b28.AllocatorInstance.Data + (longlong)local_b38 * 8);
      local_9d8 = *local_9e0;
      local_ae0 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Int>(local_9d0,local_9d8)
      ;
      local_9c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_aec = local_ae0->Value;
      ::FString::FString(&local_9a8,
                         "All int fragments are expected to contain the value indicating the order in which the entity has been created."
                        );
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_9a8,local_aec,local_b38,local_9c8);
      local_af4 = (uint)!bVar2;
      ::FString::~FString(&local_9a8);
      if (!bVar2) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        FMassEntityQuery::~FMassEntityQuery(&local_908);
        FMassExecutionContext::~FMassExecutionContext(&local_5b8);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b28);
        return false;
      }
      local_9b8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_ae8 = (int)local_9c0->Value;
      local_ae4 = local_ae0->Value;
      ::FString::FString(&local_998,"The int and float values are expected to remain in sync.");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_998,local_ae4,local_ae8,local_9b8);
      local_af0 = (uint)!bVar2;
      ::FString::~FString(&local_998);
      if (!bVar2) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        FMassEntityQuery::~FMassEntityQuery(&local_908);
        FMassExecutionContext::~FMassExecutionContext(&local_5b8);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_b28);
        return false;
      }
    }
    local_b38 = local_b38 + 1;
  } while( true );
}

