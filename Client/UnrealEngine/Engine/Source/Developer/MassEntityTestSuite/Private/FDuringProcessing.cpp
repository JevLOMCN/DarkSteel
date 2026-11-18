// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470fd1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::EntityBuilder::FDuringProcessing::InstantTest'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_2a8 [32];
  FMassEntityHandle local_288;
  FMassEntityHandle local_280;
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  FMassEntityHandle *local_258;
  int local_250;
  FMassEntityHandle local_248;
  int local_240;
  int local_23c;
  int local_238;
  FMassEntityManager *local_230;
  FMassEntityHandle local_228;
  FMassEntityHandle local_220;
  FMassEntityHandle local_218;
  FMassEntityHandle local_210;
  FMassEntityHandle local_208;
  FMassEntityHandle local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  FMassEntityHandle local_1f0;
  FMassEntityHandle local_1e8;
  FMassEntityHandle local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  FMassEntityHandle local_1c8;
  FMassEntityHandle local_1c0;
  void *local_1b8;
  undefined8 *local_1b0;
  FEntityBuilder local_1a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_230 = FMassExecutionContext::GetEntityManagerChecked(param_1);
  FMassEntityManager::MakeEntityBuilder(local_230,&local_1a0);
  local_240 = **(int **)this;
  **(int **)this = **(int **)this + 1;
  local_23c = local_240;
  UE::Mass::FEntityBuilder::Add<FTestFragment_Int,int>(&local_1a0,&local_23c);
  local_258 = *(FMassEntityHandle **)((longlong)this + 8);
  local_248 = UE::Mass::FEntityBuilder::Commit(&local_1a0);
  local_228 = *local_258;
  local_220 = local_228;
  local_218 = local_228;
  if (((ulonglong)local_228 <= (ulonglong)local_248) &&
     (local_210 = *local_258, local_208 = local_210, local_200 = local_210,
     (ulonglong)local_248 <
     (ulonglong)((longlong)local_210 + (longlong)local_258[1].SerialNumber * 8))) {
    local_1f8 = 0;
    local_1f4 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_270 = (longlong)local_258[1].Index;
    local_278 = (longlong)local_258[1].SerialNumber;
    local_280 = *local_258;
    local_268 = 8;
    local_288 = local_248;
    local_1f0 = local_280;
    local_1e8 = local_280;
    local_1e0 = local_280;
    local_1d8 = local_270;
    local_1d0 = local_278;
    local_1c8 = local_280;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_258[1].Index == local_258[1].SerialNumber) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)local_258,&local_258[1].SerialNumber);
    local_258[1].Index = iVar3;
  }
  local_250 = local_258[1].Index;
  local_258[1].Index = local_258[1].Index + 1;
  local_1c0 = *local_258;
  local_1b8 = (void *)((longlong)local_1c0 + (longlong)local_250 * 8);
  local_1b0 = ::operator_new(8,local_1b8);
  *local_1b0 = *(undefined8 *)local_248;
  local_238 = local_250;
  UE::Mass::FEntityBuilder::~FEntityBuilder(&local_1a0);
  return;
}

// InstantTest @ 1471555d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::EntityBuilder::FDuringProcessing::InstantTest(FDuringProcessing *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FMassEntityManager,1> *pTVar4;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar5;
  TArrayView<UMassProcessor_*,int> *pTVar6;
  TArrayView<UMassProcessor_*_const,int> *pTVar7;
  FMassEntityManager *this_00;
  longlong lVar8;
  FSharedReferencer<1> *pFVar9;
  undefined1 *puVar10;
  FMassArchetypeSharedFragmentValues *pFVar11;
  undefined1 auStack_9f8 [32];
  longlong local_9d8;
  longlong local_9d0;
  int local_9c8;
  int local_9c4;
  char local_9c0;
  undefined1 local_9bf;
  bool local_9be;
  char local_9bd;
  undefined1 local_9bc;
  bool local_9bb;
  char local_9ba;
  undefined1 local_9b9;
  bool local_9b8;
  char local_9b7;
  undefined1 local_9b6;
  bool local_9b5;
  char local_9b4;
  undefined1 local_9b3;
  undefined1 local_9b2;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_9b0;
  int local_9a0;
  int local_998;
  uint local_990;
  uint local_98c;
  uint local_988;
  uint local_984;
  uint local_980;
  uint local_97c;
  uint local_978;
  uint local_974;
  uint local_970;
  uint local_96c;
  uint local_968;
  uint local_964;
  uint local_960;
  uint local_95c;
  uint local_958;
  int local_954;
  int local_950;
  int local_94c;
  UMassTestProcessorBase *local_948;
  undefined4 local_940;
  FMassEntityManager *local_938;
  TSharedPtr<FMassEntityManager,1> *local_930;
  <lambda_1> *local_928;
  FMassEntityQuery *local_920;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_918;
  TArrayView<UMassProcessor_*_const,int> *local_910;
  wchar_t *local_908;
  FAutomationTestBase *local_900;
  FString *local_8f8;
  undefined4 local_8f0;
  undefined4 local_8ec;
  FScriptContainerElement *local_8e8;
  FScriptContainerElement *local_8e0;
  FMassEntityHandle *local_8d8;
  FMassEntityHandle local_8d0;
  FMassEntityManager *local_8c8;
  wchar_t *local_8c0;
  FString *local_8b8;
  FAutomationTestBase *local_8b0;
  undefined4 local_8a8;
  undefined4 local_8a4;
  FScriptContainerElement *local_8a0;
  FScriptContainerElement *local_898;
  FMassEntityHandle *local_890;
  FMassEntityHandle local_888;
  FMassEntityManager *local_880;
  wchar_t *local_878;
  FString *local_870;
  FAutomationTestBase *local_868;
  undefined4 local_860;
  undefined4 local_85c;
  FScriptContainerElement *local_858;
  FScriptContainerElement *local_850;
  FMassEntityHandle *local_848;
  FMassEntityHandle local_840;
  FMassEntityManager *local_838;
  FMassArchetypeHandle *local_830;
  wchar_t *local_828;
  FString *local_820;
  FAutomationTestBase *local_818;
  undefined4 local_810;
  undefined4 local_80c;
  FScriptContainerElement *local_808;
  FScriptContainerElement *local_800;
  FMassEntityHandle *local_7f8;
  undefined4 local_7f0;
  undefined4 local_7ec;
  FScriptContainerElement *local_7e8;
  FScriptContainerElement *local_7e0;
  FMassEntityHandle *local_7d8;
  FMassEntityHandle local_7d0;
  FMassEntityHandle *local_7c8;
  wchar_t *local_7c0;
  FString *local_7b8;
  FAutomationTestBase *local_7b0;
  undefined4 local_7a8;
  <lambda_1> local_7a0;
  FMassArchetypeHandle local_790;
  undefined1 local_778 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_768;
  TArrayView<UMassProcessor_*_const,int> local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FMassArchetypeHandle local_708;
  FString local_6f8;
  TSharedPtr<FMassEntityManager,1> local_6e8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_6d8;
  TArrayView<UMassProcessor_*_const,int> local_6c8;
  TArrayView<UMassProcessor_*,int> local_6b8;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_6a8;
  FMassArchetypeSharedFragmentValues local_678;
  FProcessingContext local_608;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_9f8;
  local_7a8 = 5;
  local_938 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar11 = &local_678;
  for (lVar8 = 0x68; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar11->HashCache = 0;
    pFVar11 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar11->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_678);
  FMassEntityManager::CreateEntity
            (local_938,&local_790,(FMassArchetypeSharedFragmentValues *)&this->field_0x60);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_678);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_9b0.AllocatorInstance);
  local_9b0.ArrayNum = 0;
  local_9b0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_9b0.AllocatorInstance);
  local_940 = 100;
  local_954 = 100;
  local_930 = &local_6e8;
  pTVar4 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_930,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_948 = NewTestProcessor<UMassTestProcessorBase>(pTVar4);
  local_7a0.ValueToSet = &local_954;
  local_7a0.EntityHandles = &local_9b0;
  local_928 = &local_7a0;
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_UE::Mass::Test::EntityBuilder::FDuringProcessing::InstantTest_::__l2::<lambda_1>_>
            (&local_6a8,local_928);
  TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
            (&local_948->ForEachEntityChunkExecutionFunction,&local_6a8);
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_6a8);
  local_920 = &local_948->EntityQuery;
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)local_920,ReadOnly,All);
  FProcessingContext::FProcessingContext
            (&local_608,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,0.0,false);
  for (local_9a0 = 0; local_9a0 < 5; local_9a0 = local_9a0 + 1) {
    local_918 = &local_6d8;
    pTVar5 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
             TArrayView<FMassArchetypeEntityCollection_const_,int>(local_918);
    pFVar9 = &local_790.DataPtr.SharedReferenceCount;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined1 *)&pFVar9->ReferenceController = *(undefined1 *)&pTVar5->DataPtr;
      pTVar5 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
               ((longlong)&pTVar5->DataPtr + 1);
      pFVar9 = (FSharedReferencer<1> *)((longlong)&pFVar9->ReferenceController + 1);
    }
    local_910 = &local_6c8;
    pTVar6 = MakeArrayView<UMassProcessor_*>(&local_6b8,(UMassProcessor **)&local_948,1);
    pTVar7 = TArrayView<UMassProcessor_*_const,int>::
             TArrayView<UMassProcessor_*_const,int><TArrayView<UMassProcessor_*,int>,TArrayView<UMassProcessor_*,int>_>
                       (local_910,pTVar6);
    puVar10 = local_778;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *(undefined1 *)&pTVar7->DataPtr;
      pTVar7 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar7->DataPtr + 1);
      puVar10 = puVar10 + 1;
    }
    pFVar9 = &local_790.DataPtr.SharedReferenceCount;
    pTVar5 = &local_768;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined1 *)&pTVar5->DataPtr = *(undefined1 *)&pFVar9->ReferenceController;
      pFVar9 = (FSharedReferencer<1> *)((longlong)&pFVar9->ReferenceController + 1);
      pTVar5 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
               ((longlong)&pTVar5->DataPtr + 1);
    }
    puVar10 = local_778;
    pTVar7 = &local_758;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined1 *)&pTVar7->DataPtr = *puVar10;
      puVar10 = puVar10 + 1;
      pTVar7 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar7->DataPtr + 1);
    }
    Executor::RunProcessorsView(&local_758,&local_608,&local_768);
    local_900 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_950 = local_9b0.ArrayNum;
    local_94c = local_9b0.ArrayNum;
    local_908 = L"Number of entities after iteration %d";
    local_8f8 = ::FString::Printf<int>
                          (&local_748,(TCheckedFormatStringPrivate<wchar_t,int>)0x1515564c0,
                           local_9a0);
    bVar2 = FTestHelpers::TestEqual<int,int>(local_8f8,local_94c,local_9a0 + 1,local_900);
    local_9c0 = !bVar2;
    local_958 = (uint)(byte)local_9c0;
    ::FString::~FString(&local_748);
    if (local_9c0 != '\0') {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_9bf = 0;
      FProcessingContext::~FProcessingContext(&local_608);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_9b0);
      return (bool)local_9bf;
    }
  }
  for (local_9c4 = 0; local_9c4 < 5; local_9c4 = local_9c4 + 1) {
    local_8b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_8c8 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_98c = (uint)(-1 < local_9c4);
    local_990 = (uint)(local_9c4 < local_9b0.ArrayNum);
    if (-1 >= local_9c4 || local_9c4 >= local_9b0.ArrayNum) {
      local_8f0 = 0;
      local_8ec = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_9d0 = (longlong)local_9b0.ArrayNum;
      local_9d8 = (longlong)local_9c4;
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
    local_8e8 = local_9b0.AllocatorInstance.Data;
    local_8e0 = local_9b0.AllocatorInstance.Data;
    local_8d8 = (FMassEntityHandle *)(local_9b0.AllocatorInstance.Data + (longlong)local_9c4 * 8);
    local_8d0 = *local_8d8;
    local_9be = FMassEntityManager::IsEntityBuilt(local_8c8,local_8d0);
    local_8c0 = L"(NOT) Entity %d is `created`";
    local_8b8 = ::FString::Printf<int>
                          (&local_738,(TCheckedFormatStringPrivate<wchar_t,int>)0x151556510,
                           local_9c4);
    bVar2 = FAutomationTestBase::TestFalse(local_8b0,local_8b8,local_9be);
    local_9bd = !bVar2;
    local_988 = (uint)(byte)local_9bd;
    ::FString::~FString(&local_738);
    if (local_9bd != '\0') {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_9bc = 0;
      FProcessingContext::~FProcessingContext(&local_608);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_9b0);
      return (bool)local_9bc;
    }
  }
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::FlushCommands(this_00);
  local_9c8 = 0;
  while( true ) {
    if (4 < local_9c8) {
      local_9b2 = 1;
      FProcessingContext::~FProcessingContext(&local_608);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_9b0);
      return (bool)local_9b2;
    }
    local_868 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_880 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_980 = (uint)(-1 < local_9c8);
    local_984 = (uint)(local_9c8 < local_9b0.ArrayNum);
    if (-1 >= local_9c8 || local_9c8 >= local_9b0.ArrayNum) {
      local_8a8 = 0;
      local_8a4 = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_9d0 = (longlong)local_9b0.ArrayNum;
      local_9d8 = (longlong)local_9c8;
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
    local_8a0 = local_9b0.AllocatorInstance.Data;
    local_898 = local_9b0.AllocatorInstance.Data;
    local_890 = (FMassEntityHandle *)(local_9b0.AllocatorInstance.Data + (longlong)local_9c8 * 8);
    local_888 = *local_890;
    local_9bb = FMassEntityManager::IsEntityBuilt(local_880,local_888);
    local_878 = L"Entity %d is `created`";
    local_870 = ::FString::Printf<int>
                          (&local_728,(TCheckedFormatStringPrivate<wchar_t,int>)0x151556550,
                           local_9c8);
    bVar2 = FAutomationTestBase::TestTrue(local_868,local_870,local_9bb);
    local_9ba = !bVar2;
    local_97c = (uint)(byte)local_9ba;
    ::FString::~FString(&local_728);
    if (local_9ba != '\0') {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_9b9 = 0;
      FProcessingContext::~FProcessingContext(&local_608);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_9b0);
      return (bool)local_9b9;
    }
    local_818 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_838 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_974 = (uint)(-1 < local_9c8);
    local_978 = (uint)(local_9c8 < local_9b0.ArrayNum);
    if (-1 >= local_9c8 || local_9c8 >= local_9b0.ArrayNum) {
      local_860 = 0;
      local_85c = 0;
      Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_9d0 = (longlong)local_9b0.ArrayNum;
      local_9d8 = (longlong)local_9c8;
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
    local_858 = local_9b0.AllocatorInstance.Data;
    local_850 = local_9b0.AllocatorInstance.Data;
    local_848 = (FMassEntityHandle *)(local_9b0.AllocatorInstance.Data + (longlong)local_9c8 * 8);
    local_840 = *local_848;
    local_830 = FMassEntityManager::GetArchetypeForEntity(local_838,&local_708,local_840);
    local_9b8 = FMassArchetypeHandle::operator==
                          (local_830,(FMassArchetypeHandle *)&this->field_0x60);
    local_828 = L"Entity %d has the right archetype";
    local_820 = ::FString::Printf<int>
                          (&local_718,(TCheckedFormatStringPrivate<wchar_t,int>)0x151556580,
                           local_9c8);
    bVar2 = FAutomationTestBase::TestTrue(local_818,local_820,local_9b8);
    local_9b7 = !bVar2;
    local_970 = (uint)(byte)local_9b7;
    ::FString::~FString(&local_718);
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_708);
    if (local_9b7 != '\0') break;
    if (local_9c8 + 1 < 5) {
      local_7b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_968 = (uint)(-1 < local_9c8);
      local_96c = (uint)(local_9c8 < local_9b0.ArrayNum);
      if (-1 >= local_9c8 || local_9c8 >= local_9b0.ArrayNum) {
        local_810 = 0;
        local_80c = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_9d0 = (longlong)local_9b0.ArrayNum;
        local_9d8 = (longlong)local_9c8;
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
      local_808 = local_9b0.AllocatorInstance.Data;
      local_800 = local_9b0.AllocatorInstance.Data;
      local_7f8 = (FMassEntityHandle *)(local_9b0.AllocatorInstance.Data + (longlong)local_9c8 * 8);
      local_998 = local_9c8 + 1;
      local_960 = (uint)(-1 < local_998);
      local_964 = (uint)(local_998 < local_9b0.ArrayNum);
      local_7c8 = local_7f8;
      if (-1 >= local_998 || local_998 >= local_9b0.ArrayNum) {
        local_7f0 = 0;
        local_7ec = 0;
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_9d0 = (longlong)local_9b0.ArrayNum;
        local_9d8 = (longlong)local_998;
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
      local_7e8 = local_9b0.AllocatorInstance.Data;
      local_7e0 = local_9b0.AllocatorInstance.Data;
      local_7d8 = (FMassEntityHandle *)(local_9b0.AllocatorInstance.Data + (longlong)local_998 * 8);
      local_7d0 = *local_7d8;
      local_9b5 = FMassEntityHandle::operator==(local_7c8,local_7d0);
      local_7c0 = L"(NOT) Entity handles are the same %d";
      local_7b8 = ::FString::Printf<int>
                            (&local_6f8,(TCheckedFormatStringPrivate<wchar_t,int>)0x1515565d0,
                             local_9c8);
      bVar2 = FAutomationTestBase::TestFalse(local_7b0,local_7b8,local_9b5);
      local_9b4 = !bVar2;
      local_95c = (uint)(byte)local_9b4;
      ::FString::~FString(&local_6f8);
      if (local_9b4 != '\0') {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_9b3 = 0;
        FProcessingContext::~FProcessingContext(&local_608);
        TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
        ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_9b0);
        return (bool)local_9b3;
      }
    }
    local_9c8 = local_9c8 + 1;
  }
  AITestSuite::ConditionallyBreakOnTestFail();
  local_9b6 = 0;
  FProcessingContext::~FProcessingContext(&local_608);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_9b0);
  return (bool)local_9b6;
}

