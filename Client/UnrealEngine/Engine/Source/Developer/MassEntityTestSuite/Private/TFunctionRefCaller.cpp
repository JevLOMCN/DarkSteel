// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 84

// Call @ 147119dc0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FMassExecutionContext_&),void,FMassExecutionContext_&>::Call
          (void *param_1,FMassExecutionContext *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000147119dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 147119dd0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID),bool,UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID>
::Call(void *param_1,FArchetypeGroupID *param_2,FArchetypeGroupID *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000147119ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2->ID,param_3->ID);
  return (bool)uVar1;
}

// Call @ 147119df0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::FQueryExecutor::ForEachEntity<UE::Mass::FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>_>,`FMassQueryExecutorTest::FTestQueryExecutor_AnyTag::Execute'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  TArrayView<FTestFragment_Float_const_,int> *pTVar5;
  FEntityIterator FStack_68;
  FEntityIterator FStack_48;
  FEntityIterator FStack_28;
  
  lVar2 = *(longlong *)param_1;
  pTVar5 = FMassExecutionContext::GetFragmentView<FTestFragment_Float>
                     (param_2,(TArrayView<FTestFragment_Float_const_,int> *)&FStack_68);
  uVar3 = *(undefined8 *)&pTVar5->ArrayNum;
  *(FTestFragment_Float **)(lVar2 + 8) = pTVar5->DataPtr;
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_48);
  FStack_68.NumEntities = FStack_48.NumEntities;
  FStack_68.EntityIndex = FStack_48.EntityIndex;
  FStack_68.ExecutionContext = FStack_48.ExecutionContext;
  FStack_68.QueryRuntime = FStack_48.QueryRuntime;
  FMassExecutionContext::FEntityIterator::FEntityIterator(&FStack_28);
  FStack_28.EntityIndex = FStack_48.NumEntities;
  if (FStack_68.EntityIndex != FStack_48.NumEntities) {
    do {
      piVar1 = (int *)(**(longlong **)((longlong)param_1 + 8) + 0x28);
      *piVar1 = *piVar1 + 1;
      iVar4 = FStack_68.EntityIndex + 1;
      FStack_68.EntityIndex = iVar4;
      if ((((FStack_68.QueryRuntime)->bCheckProcessorBreaks != false) ||
          ((FStack_68.QueryRuntime)->BreakFragmentsCount != 0)) && (iVar4 < FStack_68.NumEntities))
      {
        FMassExecutionContext::FEntityIterator::TestBreakpoints(&FStack_68);
        iVar4 = FStack_68.EntityIndex;
      }
    } while (iVar4 != FStack_28.EntityIndex);
  }
  return;
}

// Call @ 147119e00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::FQueryExecutor::ForEachEntity<UE::Mass::FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagBlocked<FTestTag_B>_>,`FMassQueryExecutorTest::FTestQueryExecutor_BlockTagB::Execute'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  TArrayView<FTestFragment_Float_const_,int> *pTVar5;
  FEntityIterator FStack_68;
  FEntityIterator FStack_48;
  FEntityIterator FStack_28;
  
  lVar2 = *(longlong *)param_1;
  pTVar5 = FMassExecutionContext::GetFragmentView<FTestFragment_Float>
                     (param_2,(TArrayView<FTestFragment_Float_const_,int> *)&FStack_68);
  uVar3 = *(undefined8 *)&pTVar5->ArrayNum;
  *(FTestFragment_Float **)(lVar2 + 8) = pTVar5->DataPtr;
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_48);
  FStack_68.NumEntities = FStack_48.NumEntities;
  FStack_68.EntityIndex = FStack_48.EntityIndex;
  FStack_68.ExecutionContext = FStack_48.ExecutionContext;
  FStack_68.QueryRuntime = FStack_48.QueryRuntime;
  FMassExecutionContext::FEntityIterator::FEntityIterator(&FStack_28);
  FStack_28.EntityIndex = FStack_48.NumEntities;
  if (FStack_68.EntityIndex != FStack_48.NumEntities) {
    do {
      piVar1 = (int *)(**(longlong **)((longlong)param_1 + 8) + 0x48);
      *piVar1 = *piVar1 + 1;
      iVar4 = FStack_68.EntityIndex + 1;
      FStack_68.EntityIndex = iVar4;
      if ((((FStack_68.QueryRuntime)->bCheckProcessorBreaks != false) ||
          ((FStack_68.QueryRuntime)->BreakFragmentsCount != 0)) && (iVar4 < FStack_68.NumEntities))
      {
        FMassExecutionContext::FEntityIterator::TestBreakpoints(&FStack_68);
        iVar4 = FStack_68.EntityIndex;
      }
    } while (iVar4 != FStack_28.EntityIndex);
  }
  return;
}

// Call @ 147119e10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::FQueryExecutor::ForEachEntity<UE::Mass::FQueryDefinition<UE::Mass::FConstFragmentAccess<FTestFragment_Float>,UE::Mass::FMassTagRequired<FTestTag_A>_>,`FMassQueryExecutorTest::FTestQueryExecutor_NeedTagA::Execute'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  TArrayView<FTestFragment_Float_const_,int> *pTVar5;
  FEntityIterator FStack_68;
  FEntityIterator FStack_48;
  FEntityIterator FStack_28;
  
  lVar2 = *(longlong *)param_1;
  pTVar5 = FMassExecutionContext::GetFragmentView<FTestFragment_Float>
                     (param_2,(TArrayView<FTestFragment_Float_const_,int> *)&FStack_68);
  uVar3 = *(undefined8 *)&pTVar5->ArrayNum;
  *(FTestFragment_Float **)(lVar2 + 8) = pTVar5->DataPtr;
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_48);
  FStack_68.NumEntities = FStack_48.NumEntities;
  FStack_68.EntityIndex = FStack_48.EntityIndex;
  FStack_68.ExecutionContext = FStack_48.ExecutionContext;
  FStack_68.QueryRuntime = FStack_48.QueryRuntime;
  FMassExecutionContext::FEntityIterator::FEntityIterator(&FStack_28);
  FStack_28.EntityIndex = FStack_48.NumEntities;
  if (FStack_68.EntityIndex != FStack_48.NumEntities) {
    do {
      piVar1 = (int *)(**(longlong **)((longlong)param_1 + 8) + 0x48);
      *piVar1 = *piVar1 + 1;
      iVar4 = FStack_68.EntityIndex + 1;
      FStack_68.EntityIndex = iVar4;
      if ((((FStack_68.QueryRuntime)->bCheckProcessorBreaks != false) ||
          ((FStack_68.QueryRuntime)->BreakFragmentsCount != 0)) && (iVar4 < FStack_68.NumEntities))
      {
        FMassExecutionContext::FEntityIterator::TestBreakpoints(&FStack_68);
        iVar4 = FStack_68.EntityIndex;
      }
    } while (iVar4 != FStack_28.EntityIndex);
  }
  return;
}

// Call @ 147119e20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassProcessorTest::SimpleProcessorRun<UMassTestProcessor_Floats>'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  **(int **)param_1 = **(int **)param_1 + (param_2->EntityListView).ArrayNum;
  return;
}

// Call @ 147119e40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Mass::Test::Observers::FForbidModifyOnDestroy::SetUp'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,void,FMassEntityManager_&>
::Call(void *param_1,FMassEntityManager *param_2)

{
  *(undefined1 *)**(undefined8 **)param_1 = 1;
  return;
}

// Call @ 147119e50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Mass::Test::Observers::FFragmentTestBase::SetUp'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,void,FMassEntityManager_&>
::Call(void *param_1,FMassEntityManager *param_2)

{
  *(undefined1 *)**(undefined8 **)param_1 = 1;
  return;
}

// Call @ 147119e60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::Mass::Test::Observers::FTagBaseOperation::SetUp'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,void,FMassEntityManager_&>
::Call(void *param_1,FMassEntityManager *param_2)

{
  *(undefined1 *)**(undefined8 **)param_1 = 1;
  return;
}

// Call @ 147119e70

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFarmHarvestTimerExpired::Execute'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int iVar1;
  longlong lVar2;
  FMassCommandBuffer *this;
  FMassEntityHandle FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  DWORD DVar7;
  UPackage *pUVar8;
  FMassEntityHandle *pFVar9;
  FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *this_00;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar10;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar11;
  longlong lVar12;
  FLLMScope aFStackX_10 [2];
  FName FStackX_18;
  FMemScope FStackX_20;
  FString FStack_58;
  FEntityIterator FStack_48;
  
  if (Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHarvestTimerFragment,(UObject *)pUVar8,
                         L"HarvestTimerFragment");
  }
  FVar10 = (param_2->FragmentViews).AllocatorInstance.SecondaryData;
  FVar11 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
           param_2;
  if (FVar10 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                 )0x0) {
    FVar11 = FVar10;
  }
  FVar10 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
           ((longlong)(param_2->FragmentViews).ArrayNum * 0x20 + (longlong)FVar11);
  for (; FVar11 != FVar10;
      FVar11 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )((longlong)FVar11 + 0x20)) {
    if (*(UScriptStruct **)FVar11 ==
        Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton) goto LAB_1470fa4f0;
  }
  FVar11 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
           0x0;
  if (Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHarvestTimerFragment,(UObject *)pUVar8,
                         L"HarvestTimerFragment");
    if (Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton ==
        (UScriptStruct *)0x0) {
      ::FString::FString(&FStack_58,L"None");
      goto LAB_1470fa4a1;
    }
  }
  FStackX_18 = (FName)(Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&FStackX_18,&FStack_58);
LAB_1470fa4a1:
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("View",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x1bd,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (FStack_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1470fa4f0:
  iVar1 = *(int *)((longlong)FVar11 + 0x18);
  lVar2 = *(longlong *)((longlong)FVar11 + 0x10);
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_48);
  do {
    if ((FStack_48.SerialNumber == 0) ||
       (lVar12 = (longlong)FStack_48.EntityIndex, FStack_48.NumEntities <= FStack_48.EntityIndex)) {
      return;
    }
    uVar6 = 0;
    if (FStack_48.EntityIndex < iVar1) {
      uVar6 = (uint)~FStack_48.EntityIndex >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)(lVar2 + lVar12 * 4) == 0) {
      this = (param_2->DeferredCommandBuffer).Object;
      pFVar9 = TArrayView<FMassEntityHandle,int>::operator[]
                         (&param_2->EntityListView,FStack_48.EntityIndex);
      FVar3 = *pFVar9;
      if ((this->bIsFlushing != false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsFlushing() == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                             ,0x84,
                             L"Trying to push commands is not supported while the given buffer is being flushed"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DVar7 = GetCurrentThreadId();
      if ((this->OwnerThreadId != DVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                             ,0x84,
                             L"Commands can be pushed only in the same thread where the command buffer was created."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                        ::__l2::LLMScope_Name135,L"Mass/PushCommand");
        _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FLLMScope::FLLMScope
                (aFStackX_10,
                 `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                 ::__l2::LLMScope_Name135,false,None,Default,true);
      FMemScope::FMemScope
                (&FStackX_20,
                 &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                  ::__l2::LLMScope_Name135,true);
      this_00 = FMassCommandBuffer::
                CreateOrAddCommand<FMassCommandAddTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>
                          (this);
      FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_00,FVar3);
      this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
      FMemScope::~FMemScope(&FStackX_20);
      FLLMScope::~FLLMScope(aFStackX_10);
    }
    FStack_48.EntityIndex = FStack_48.EntityIndex + 1;
    if ((((FStack_48.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((FStack_48.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (FStack_48.EntityIndex < FStack_48.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&FStack_48);
    }
  } while( true );
}

// Call @ 147119e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFarmHarvestTimerSetIcon::Execute'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int iVar1;
  longlong lVar2;
  FMassCommandBuffer *pFVar3;
  FMassEntityHandle FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  UPackage *pUVar10;
  FMassEntityHandle *pFVar11;
  FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag> *this;
  FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag> *this_00;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar12;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar13;
  longlong lVar14;
  undefined1 auStackY_148 [32];
  FLLMScope FStack_118;
  FLLMScope FStack_114;
  FEntityIterator FStack_110;
  FString FStack_f0;
  FName FStack_e0;
  FMemScope FStack_d8;
  FMemScope FStack_d0;
  TArrayView<FFarmVisualFragment,int> TStack_c8;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  undefined8 uStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmGridCellData,(UObject *)pUVar10,
                         L"FarmGridCellData");
  }
  FVar12 = (param_2->FragmentViews).AllocatorInstance.SecondaryData;
  FVar13 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
           param_2;
  if (FVar12 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                 )0x0) {
    FVar13 = FVar12;
  }
  FVar12 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
           ((longlong)(param_2->FragmentViews).ArrayNum * 0x20 + (longlong)FVar13);
  for (; FVar13 != FVar12;
      FVar13 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                )((longlong)FVar13 + 0x20)) {
    if (*(UScriptStruct **)FVar13 ==
        Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton) goto LAB_1470fa88a;
  }
  FVar13 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
           0x0;
  if (Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmGridCellData,(UObject *)pUVar10,
                         L"FarmGridCellData");
    if (Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton == (UScriptStruct *)0x0)
    {
      ::FString::FString(&FStack_f0,L"None");
      goto LAB_1470fa83b;
    }
  }
  FStack_e0 = (FName)(Z_Registration_Info_UScriptStruct_FFarmGridCellData.OuterSingleton)->_padding_
  ;
  ::FName::ToString(&FStack_e0,&FStack_f0);
LAB_1470fa83b:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("View",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x1bd,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (FStack_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f0.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1470fa88a:
  iVar1 = *(int *)((longlong)FVar13 + 0x18);
  lVar2 = *(longlong *)((longlong)FVar13 + 0x10);
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FMassExecutionContext::GetMutableFragmentView<FFarmVisualFragment>(param_2,&TStack_c8);
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_110);
  while( true ) {
    iVar8 = FStack_110.EntityIndex;
    if ((FStack_110.SerialNumber == 0) || (FStack_110.NumEntities <= FStack_110.EntityIndex)) {
      return;
    }
    uVar7 = 0;
    if (FStack_110.EntityIndex < iVar1) {
      uVar7 = (uint)~FStack_110.EntityIndex >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar14 = *(longlong *)param_1;
    dStack_78 = (double)*(float *)(lVar14 + 0x444);
    dStack_90 = (double)((float)*(ushort *)(lVar2 + 2 + (longlong)iVar8 * 4) *
                        *(float *)(lVar14 + 0x43c));
    dStack_b8 = UE::Math::TQuat<double>::Identity.X;
    dStack_b0 = UE::Math::TQuat<double>::Identity.Y;
    dStack_98 = (double)((float)*(ushort *)(lVar2 + (longlong)iVar8 * 4) *
                        *(float *)(lVar14 + 0x438));
    dStack_a8 = UE::Math::TQuat<double>::Identity.Z;
    dStack_a0 = UE::Math::TQuat<double>::Identity.W;
    dStack_88 = (double)*(float *)(lVar14 + 0x440);
    uStack_80 = 0;
    uStack_60 = 0;
    dStack_70 = dStack_78;
    dStack_68 = dStack_78;
    iVar8 = (**(code **)(**(longlong **)(lVar14 + 0x430) + 0xbb0))
                      (*(longlong **)(lVar14 + 0x430),&dStack_b8,0);
    lVar14 = (longlong)FStack_110.EntityIndex;
    uVar7 = 0;
    if (FStack_110.EntityIndex < TStack_c8.ArrayNum) {
      uVar7 = (uint)~FStack_110.EntityIndex >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TStack_c8.DataPtr[lVar14].HarvestIconIndex = iVar8;
    pFVar11 = TArrayView<FMassEntityHandle,int>::operator[]
                        (&param_2->EntityListView,FStack_110.EntityIndex);
    pFVar3 = (param_2->DeferredCommandBuffer).Object;
    FVar4 = *pFVar11;
    if ((pFVar3->bIsFlushing != false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsFlushing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x84,
                           L"Trying to push commands is not supported while the given buffer is being flushed"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    DVar9 = GetCurrentThreadId();
    if ((pFVar3->OwnerThreadId != DVar9) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x84,
                           L"Commands can be pushed only in the same thread where the command buffer was created."
                          ), bVar6)) break;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                      ::__l2::LLMScope_Name135,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (&FStack_118,
               `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
               ::__l2::LLMScope_Name135,false,None,Default,true);
    FMemScope::FMemScope
              (&FStack_d8,
               &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                ::__l2::LLMScope_Name135,true);
    this = FMassCommandBuffer::
           CreateOrAddCommand<FMassCommandRemoveTagsInternal<0,FFarmJustBecameReadyToHarvestTag>_>
                     (pFVar3);
    FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this,FVar4);
    pFVar3->ActiveCommandsCounter = pFVar3->ActiveCommandsCounter + 1;
    FMemScope::~FMemScope(&FStack_d8);
    FLLMScope::~FLLMScope(&FStack_118);
    pFVar3 = (param_2->DeferredCommandBuffer).Object;
    if ((pFVar3->bIsFlushing != false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsFlushing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x84,
                           L"Trying to push commands is not supported while the given buffer is being flushed"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    DVar9 = GetCurrentThreadId();
    if ((pFVar3->OwnerThreadId != DVar9) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                           ,0x84,
                           L"Commands can be pushed only in the same thread where the command buffer was created."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                      ::__l2::LLMScope_Name135,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (&FStack_114,
               `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
               ::__l2::LLMScope_Name135,false,None,Default,true);
    FMemScope::FMemScope
              (&FStack_d0,
               &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(FMassEntityHandle)___ptr64'
                ::__l2::LLMScope_Name135,true);
    this_00 = FMassCommandBuffer::
              CreateOrAddCommand<FMassCommandAddTagsInternal<0,FFarmReadyToHarvestTag>_>(pFVar3);
    FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_00,FVar4);
    pFVar3->ActiveCommandsCounter = pFVar3->ActiveCommandsCounter + 1;
    FMemScope::~FMemScope(&FStack_d0);
    FLLMScope::~FLLMScope(&FStack_114);
    FStack_110.EntityIndex = FStack_110.EntityIndex + 1;
    if ((((FStack_110.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((FStack_110.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (FStack_110.EntityIndex < FStack_110.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&FStack_110);
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Call @ 147119e90

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFarmHarvestTimerSystem_Crops::Execute'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  TArrayView<FHarvestTimerFragment,int> TStack_58;
  TArrayView<FFarmWaterFragment_const_,int> TStack_48;
  FEntityIterator FStack_38;
  
  FMassExecutionContext::GetMutableFragmentView<FHarvestTimerFragment>(param_2,&TStack_58);
  FMassExecutionContext::GetFragmentView<FFarmWaterFragment>(param_2,&TStack_48);
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_38);
  fVar2 = __real_3e800000;
  while( true ) {
    if (FStack_38.SerialNumber == 0) {
      return;
    }
    lVar6 = (longlong)FStack_38.EntityIndex;
    if (FStack_38.NumEntities <= FStack_38.EntityIndex) {
      return;
    }
    uVar4 = 0;
    if (FStack_38.EntityIndex < TStack_48.ArrayNum) {
      uVar4 = (uint)~FStack_38.EntityIndex >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar7 = (longlong)FStack_38.EntityIndex;
    uVar5 = (fVar2 < TStack_48.DataPtr[lVar6].CurrentWater) + 1;
    uVar4 = 0;
    if (FStack_38.EntityIndex < TStack_58.ArrayNum) {
      uVar4 = (uint)~FStack_38.EntityIndex >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) break;
    if (TStack_58.DataPtr[lVar7].NumSecondsLeft < uVar5) {
      uVar5 = 0;
    }
    else {
      lVar6 = (longlong)FStack_38.EntityIndex;
      uVar4 = 0;
      if (FStack_38.EntityIndex < TStack_58.ArrayNum) {
        uVar4 = (uint)~FStack_38.EntityIndex >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = TStack_58.DataPtr[lVar6].NumSecondsLeft - uVar5;
    }
    lVar6 = (longlong)FStack_38.EntityIndex;
    uVar4 = 0;
    if (FStack_38.EntityIndex < TStack_58.ArrayNum) {
      uVar4 = (uint)~FStack_38.EntityIndex >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TStack_58.DataPtr[lVar6].NumSecondsLeft = uVar5;
    FStack_38.EntityIndex = FStack_38.EntityIndex + 1;
    if ((((FStack_38.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((FStack_38.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (FStack_38.EntityIndex < FStack_38.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&FStack_38);
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// Call @ 147119ea0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFarmHarvestTimerSystem_Flowers::Execute'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  TArrayView<FHarvestTimerFragment,int> TStack_68;
  TArrayView<FFarmWaterFragment_const_,int> TStack_58;
  TArrayView<FFarmFlowerFragment,int> TStack_48;
  FEntityIterator FStack_38;
  
  FMassExecutionContext::GetMutableFragmentView<FHarvestTimerFragment>(param_2,&TStack_68);
  FMassExecutionContext::GetFragmentView<FFarmWaterFragment>(param_2,&TStack_58);
  FMassExecutionContext::GetMutableFragmentView<FFarmFlowerFragment>(param_2,&TStack_48);
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_38);
  fVar2 = __real_3e800000;
  while( true ) {
    if (FStack_38.SerialNumber == 0) {
      return;
    }
    lVar5 = (longlong)FStack_38.EntityIndex;
    if (FStack_38.NumEntities <= FStack_38.EntityIndex) break;
    uVar4 = 0;
    if (FStack_38.EntityIndex < TStack_68.ArrayNum) {
      uVar4 = (uint)~FStack_38.EntityIndex >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (TStack_68.DataPtr[lVar5].NumSecondsLeft != 0) {
      lVar5 = (longlong)FStack_38.EntityIndex;
      uVar4 = 0;
      if (FStack_38.EntityIndex < TStack_68.ArrayNum) {
        uVar4 = (uint)~FStack_38.EntityIndex >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      TStack_68.DataPtr[lVar5].NumSecondsLeft = TStack_68.DataPtr[lVar5].NumSecondsLeft - 1;
      lVar5 = (longlong)FStack_38.EntityIndex;
      uVar4 = 0;
      if (FStack_38.EntityIndex < TStack_58.ArrayNum) {
        uVar4 = (uint)~FStack_38.EntityIndex >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (fVar2 < TStack_58.DataPtr[lVar5].CurrentWater) {
        lVar5 = (longlong)FStack_38.EntityIndex;
        uVar4 = 0;
        if (FStack_38.EntityIndex < TStack_48.ArrayNum) {
          uVar4 = (uint)~FStack_38.EntityIndex >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TStack_48.DataPtr[lVar5].NumBonusTicks = TStack_48.DataPtr[lVar5].NumBonusTicks + 1;
      }
    }
    FStack_38.EntityIndex = FStack_38.EntityIndex + 1;
    if ((((FStack_38.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((FStack_38.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (FStack_38.EntityIndex < FStack_38.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&FStack_38);
    }
  }
  return;
}

// Call @ 147119eb0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFarmWaterProcessor::Execute'::__l2::<lambda_1>,void,FMassExecutionContext_&>::
Call(void *param_1,FMassExecutionContext *param_2)

{
  FFarmWaterFragment *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TArrayView<FFarmWaterFragment,int> local_28 [2];
  
  fVar2 = param_2->DeltaTimeSeconds;
  FMassExecutionContext::GetMutableFragmentView<FFarmWaterFragment>(param_2,local_28);
  fVar3 = __real_3f800000;
  pFVar1 = local_28[0].DataPtr + local_28[0].ArrayNum;
  for (; local_28[0].DataPtr != pFVar1; local_28[0].DataPtr = local_28[0].DataPtr + 1) {
    fVar4 = fVar2 * (local_28[0].DataPtr)->DeltaWaterPerSecond + (local_28[0].DataPtr)->CurrentWater
    ;
    if (fVar3 <= fVar4) {
      fVar4 = fVar3;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    (local_28[0].DataPtr)->CurrentWater = fVar4;
  }
  return;
}

// Call @ 147119f30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::ChildOfRelation::FChildOfBase::ExecuteTestProcessor'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FMassEntityHandle *pFVar6;
  FMassEntityHandle FVar7;
  int iStack_10c;
  FMassEntityHandle FStack_d0;
  TArrayView<FMassEntityHandle,int> *pTStack_c8;
  TArrayView<FMassEntityHandle,int> *pTStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong lStack_b0;
  longlong lStack_a8;
  int *piStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong lStack_90;
  longlong lStack_88;
  int *piStack_80;
  TArrayView<FMassEntityHandle,int> *pTStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  longlong lStack_60;
  int *piStack_58;
  TArrayView<FMassChildOfFragment_const_,int> TStack_50;
  FEntityIterator FStack_40;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [24];
  
  FMassExecutionContext::GetFragmentView<FMassChildOfFragment>(param_2,&TStack_50);
  if (TStack_50.ArrayNum == 0) {
    for (iStack_10c = 0; iVar4 = FMassExecutionContext::GetNumEntities(param_2), iStack_10c < iVar4;
        iStack_10c = iStack_10c + 1) {
      pTStack_78 = (TArrayView<FMassEntityHandle,int> *)((longlong)param_1 + 8);
      FVar7 = FMassExecutionContext::GetEntity(param_2,(int)auStack_18);
      iVar4 = TArrayView<FMassEntityHandle,int>::Find(pTStack_78,(FMassEntityHandle *)FVar7);
      if ((iVar4 == -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("EntityGlobalIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassChildOfRelationTest.cpp"
                             ,0x80,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((longlong)param_1 + 0x18);
      if (iVar4 < 0 || (int)plVar1[1] <= iVar4) {
        uStack_70 = 0;
        uStack_6c = 0;
        FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      lStack_68 = *plVar1;
      piStack_58 = (int *)(lStack_68 + (longlong)iVar4 * 4);
      *piStack_58 = iVar4;
      lStack_60 = lStack_68;
    }
  }
  else {
    FMassExecutionContext::CreateEntityIterator(param_2,&FStack_40);
    while (bVar3 = FMassExecutionContext::FEntityIterator::operator_bool(&FStack_40), bVar3) {
      iVar4 = FMassExecutionContext::FEntityIterator::operator_int(&FStack_40);
      pFVar6 = &TArrayView<FMassChildOfFragment_const_,int>::operator[](&TStack_50,iVar4)->Parent;
      FStack_d0 = *pFVar6;
      bVar3 = FMassEntityHandle::IsValid(&FStack_d0);
      if (bVar3) {
        pTStack_c8 = (TArrayView<FMassEntityHandle,int> *)((longlong)param_1 + 8);
        FMassExecutionContext::FEntityIterator::operator_int(&FStack_40);
        FVar7 = FMassExecutionContext::GetEntity(param_2,(int)auStack_20);
        iVar4 = TArrayView<FMassEntityHandle,int>::Find(pTStack_c8,(FMassEntityHandle *)FVar7);
        pTStack_c0 = (TArrayView<FMassEntityHandle,int> *)((longlong)param_1 + 8);
        iVar5 = TArrayView<FMassEntityHandle,int>::Find(pTStack_c0,&FStack_d0);
        if (((iVar4 == -1) || (iVar5 == -1)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("EntityGlobalIndex != INDEX_NONE && ParentGlobalIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassChildOfRelationTest.cpp"
                               ,0x75,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((longlong)param_1 + 0x18);
        if (iVar5 < 0 || (int)plVar1[1] <= iVar5) {
          uStack_b8 = 0;
          uStack_b4 = 0;
          FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>()
          ;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        lStack_b0 = *plVar1;
        piStack_a0 = (int *)(lStack_b0 + (longlong)iVar5 * 4);
        iVar5 = *piStack_a0;
        plVar1 = *(longlong **)((longlong)param_1 + 0x18);
        lStack_a8 = lStack_b0;
        if (iVar4 < 0 || (int)plVar1[1] <= iVar4) {
          uStack_98 = 0;
          uStack_94 = 0;
          FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>()
          ;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        lStack_90 = *plVar1;
        piStack_80 = (int *)(lStack_90 + (longlong)iVar4 * 4);
        *piStack_80 = iVar5 * 10 + iVar4;
        lStack_88 = lStack_90;
      }
      FMassExecutionContext::FEntityIterator::operator++(&FStack_40);
    }
  }
  return;
}

// Call @ 147119f40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassArchetypeEntityCollectionTest::FArchetypeEntityCollection_ZeroLength_Execute::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int iVar1;
  
  iVar1 = FMassExecutionContext::GetNumEntities(param_2);
  **(int **)param_1 = **(int **)param_1 + iVar1;
  return;
}

// Call @ 147119f50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::FArchetypeGroup_SingleLevelQuery::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this;
  TArrayView<FMassEntityHandle_const_,int> *pTVar1;
  TArrayView<FMassEntityHandle_const_,int> TStack_18;
  
  this = *(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> **)param_1;
  pTVar1 = FMassExecutionContext::GetEntities(param_2,&TStack_18);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  Append<TArrayView<FMassEntityHandle_const_,int>_>(this,pTVar1);
  return;
}

// Call @ 147119f60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassCompositeProcessorTest::FCompositeProcessorTest_NoWork::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  **(int **)param_1 = **(int **)param_1 + 1;
  return;
}

// Call @ 147119f70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassEntityTest::FConstSharedFragment_ForEach::InstantTest'::__l2::<lambda_1>,void,FTestConstSharedFragment_Int_const_&>
::Call(void *param_1,FTestConstSharedFragment_Int *param_2)

{
  ForAnyElementType *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  
  pFVar1 = *(ForAnyElementType **)param_1;
  if ((pFVar1->Data <= param_2) &&
     (param_2 < pFVar1->Data + (longlong)*(int *)((longlong)&pFVar1[1].Data + 4) * 4)) {
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)&pFVar1[1].Data == *(int *)((longlong)&pFVar1[1].Data + 4)) {
    iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar1,(int *)((longlong)&pFVar1[1].Data + 4));
    *(int *)&pFVar1[1].Data = iVar4;
  }
  iVar4 = *(int *)&pFVar1[1].Data;
  *(int *)&pFVar1[1].Data = *(int *)&pFVar1[1].Data + 1;
  piVar5 = ::operator_new(4,pFVar1->Data + (longlong)iVar4 * 4);
  *piVar5 = param_2->Value;
  return;
}

// Call @ 147119f80

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::Observers::FCreationOperationOrder::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int iVar1;
  bool bVar2;
  FEntityIterator *pFVar3;
  FTestFragment_Float *pFVar4;
  longlong lVar5;
  FEntityIterator *pFVar6;
  int iStack_b4;
  int iStack_b0;
  float fStack_ac;
  FEntityIterator *pFStack_a8;
  undefined4 uStack_a0;
  TArrayView<FTestFragment_Float,int> *pTStack_98;
  FEntityIterator FStack_90;
  TArrayView<FTestFragment_Float,int> TStack_70;
  FEntityIterator FStack_60;
  FEntityIterator FStack_40;
  
  uStack_a0 = 0;
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_60);
  pFStack_a8 = &FStack_60;
  pFVar3 = FMassExecutionContext::FEntityIterator::begin(pFStack_a8);
  pFVar6 = &FStack_90;
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pFVar6->ExecutionContext = *(undefined1 *)&pFVar3->ExecutionContext;
    pFVar3 = (FEntityIterator *)((longlong)&pFVar3->ExecutionContext + 1);
    pFVar6 = (FEntityIterator *)((longlong)&pFVar6->ExecutionContext + 1);
  }
  FMassExecutionContext::FEntityIterator::end(pFStack_a8,&FStack_40);
  while( true ) {
    iStack_b4 = FMassExecutionContext::FEntityIterator::operator_int(&FStack_40);
    bVar2 = FMassExecutionContext::FEntityIterator::operator!=(&FStack_90,&iStack_b4);
    if (!bVar2) break;
    iStack_b0 = FMassExecutionContext::FEntityIterator::operator*(&FStack_90);
    iVar1 = **(int **)param_1;
    **(int **)param_1 = iVar1 + 1;
    fStack_ac = (float)(iVar1 + 1);
    pTStack_98 = FMassExecutionContext::GetMutableFragmentView<FTestFragment_Float>
                           (param_2,&TStack_70);
    pFVar4 = TArrayView<FTestFragment_Float,int>::operator[](pTStack_98,iStack_b0);
    pFVar4->Value = fStack_ac;
    FMassExecutionContext::FEntityIterator::operator++(&FStack_90);
  }
  return;
}

// Call @ 147119f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::EntityBuilder::FDuringProcessing::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_2a8 [32];
  FMassEntityHandle FStack_288;
  FMassEntityHandle FStack_280;
  longlong lStack_278;
  longlong lStack_270;
  undefined8 uStack_268;
  FMassEntityHandle *pFStack_258;
  int iStack_250;
  FMassEntityHandle FStack_248;
  int iStack_240;
  int iStack_23c;
  int iStack_238;
  FMassEntityManager *pFStack_230;
  FMassEntityHandle FStack_228;
  FMassEntityHandle FStack_220;
  FMassEntityHandle FStack_218;
  FMassEntityHandle FStack_210;
  FMassEntityHandle FStack_208;
  FMassEntityHandle FStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  FMassEntityHandle FStack_1f0;
  FMassEntityHandle FStack_1e8;
  FMassEntityHandle FStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  FMassEntityHandle FStack_1c8;
  FMassEntityHandle FStack_1c0;
  void *pvStack_1b8;
  undefined8 *puStack_1b0;
  FEntityBuilder FStack_1a0;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  pFStack_230 = FMassExecutionContext::GetEntityManagerChecked(param_2);
  FMassEntityManager::MakeEntityBuilder(pFStack_230,&FStack_1a0);
  iStack_240 = **(int **)param_1;
  **(int **)param_1 = **(int **)param_1 + 1;
  iStack_23c = iStack_240;
  Mass::FEntityBuilder::Add<FTestFragment_Int,int>(&FStack_1a0,&iStack_23c);
  pFStack_258 = *(FMassEntityHandle **)((longlong)param_1 + 8);
  FStack_248 = Mass::FEntityBuilder::Commit(&FStack_1a0);
  FStack_228 = *pFStack_258;
  FStack_220 = FStack_228;
  FStack_218 = FStack_228;
  if (((ulonglong)FStack_228 <= (ulonglong)FStack_248) &&
     (FStack_210 = *pFStack_258, FStack_208 = FStack_210, FStack_200 = FStack_210,
     (ulonglong)FStack_248 <
     (ulonglong)((longlong)FStack_210 + (longlong)pFStack_258[1].SerialNumber * 8))) {
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_270 = (longlong)pFStack_258[1].Index;
    lStack_278 = (longlong)pFStack_258[1].SerialNumber;
    FStack_280 = *pFStack_258;
    uStack_268 = 8;
    FStack_288 = FStack_248;
    FStack_1f0 = FStack_280;
    FStack_1e8 = FStack_280;
    FStack_1e0 = FStack_280;
    lStack_1d8 = lStack_270;
    lStack_1d0 = lStack_278;
    FStack_1c8 = FStack_280;
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
  if (pFStack_258[1].Index == pFStack_258[1].SerialNumber) {
    iVar3 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFStack_258,&pFStack_258[1].SerialNumber);
    pFStack_258[1].Index = iVar3;
  }
  iStack_250 = pFStack_258[1].Index;
  pFStack_258[1].Index = pFStack_258[1].Index + 1;
  FStack_1c0 = *pFStack_258;
  pvStack_1b8 = (void *)((longlong)FStack_1c0 + (longlong)iStack_250 * 8);
  puStack_1b0 = ::operator_new(8,pvStack_1b8);
  *puStack_1b0 = *(undefined8 *)FStack_248;
  iStack_238 = iStack_250;
  Mass::FEntityBuilder::~FEntityBuilder(&FStack_1a0);
  return;
}

// Call @ 147119fa0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::Observers::FFragmentTest_EntityCreation_Individual::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int iVar1;
  FTestFragment_Float *pFVar2;
  int iStack_28;
  TArrayView<FTestFragment_Float_const_,int> aTStack_20 [2];
  
  FMassExecutionContext::GetFragmentView<FTestFragment_Float>(param_2,aTStack_20);
  iStack_28 = 0;
  while( true ) {
    iVar1 = FMassExecutionContext::GetNumEntities(param_2);
    if (iVar1 <= iStack_28) break;
    pFVar2 = TArrayView<FTestFragment_Float_const_,int>::operator[](aTStack_20,iStack_28);
    **(float **)param_1 = pFVar2->Value;
    iStack_28 = iStack_28 + 1;
  }
  return;
}

// Call @ 147119fb0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassSystemRequirementTest::FGameSubsystemAccessAPI::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  UMassTestLocalPlayerSubsystem *pUVar1;
  UMassTestGameInstanceSubsystem *pUVar2;
  
  pUVar1 = FMassExecutionContext::GetMutableSubsystem<UMassTestLocalPlayerSubsystem,void>(param_2);
  **(undefined8 **)param_1 = pUVar1;
  pUVar2 = FMassExecutionContext::GetMutableSubsystem<UMassTestGameInstanceSubsystem,void>(param_2);
  **(undefined8 **)((longlong)param_1 + 8) = pUVar2;
  pUVar1 = FMassExecutionContext::GetSubsystem<UMassTestLocalPlayerSubsystem,void>(param_2);
  **(undefined8 **)((longlong)param_1 + 0x10) = pUVar1;
  pUVar2 = FMassExecutionContext::GetSubsystem<UMassTestGameInstanceSubsystem,void>(param_2);
  **(undefined8 **)((longlong)param_1 + 0x18) = pUVar2;
  return;
}

// Call @ 147119fc0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassSystemRequirementTest::FGenericSubsystemAccessAPI::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  UMassTestWorldSubsystem *pUVar1;
  UMassTestEngineSubsystem *pUVar2;
  
  pUVar1 = FMassExecutionContext::GetMutableSubsystem<UMassTestWorldSubsystem,void>(param_2);
  **(undefined8 **)param_1 = pUVar1;
  pUVar2 = FMassExecutionContext::GetMutableSubsystem<UMassTestEngineSubsystem,void>(param_2);
  **(undefined8 **)((longlong)param_1 + 8) = pUVar2;
  pUVar1 = FMassExecutionContext::GetSubsystem<UMassTestWorldSubsystem,void>(param_2);
  **(undefined8 **)((longlong)param_1 + 0x10) = pUVar1;
  pUVar2 = FMassExecutionContext::GetSubsystem<UMassTestEngineSubsystem,void>(param_2);
  **(undefined8 **)((longlong)param_1 + 0x18) = pUVar2;
  return;
}

// Call @ 147119fd0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::EntityIterator::FIterator_IndexParity::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  FMassEntityHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMassEntityHandle FVar5;
  undefined8 *puVar6;
  int iStack_b0;
  undefined1 auStack_18 [24];
  
  iStack_b0 = 0;
  do {
    iVar4 = FMassExecutionContext::GetNumEntities(param_2);
    if (iVar4 <= iStack_b0) {
      return;
    }
    pFVar1 = *(FMassEntityHandle **)param_1;
    FVar5 = FMassExecutionContext::GetEntity(param_2,(int)auStack_18);
    if (((ulonglong)*pFVar1 <= (ulonglong)FVar5) &&
       ((ulonglong)FVar5 < (ulonglong)((longlong)*pFVar1 + (longlong)pFVar1[1].SerialNumber * 8))) {
      FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (pFVar1[1].Index == pFVar1[1].SerialNumber) {
      iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pFVar1,&pFVar1[1].SerialNumber);
      pFVar1[1].Index = iVar4;
    }
    iVar4 = pFVar1[1].Index;
    pFVar1[1].Index = pFVar1[1].Index + 1;
    puVar6 = ::operator_new(8,(FScriptContainerElement *)((longlong)*pFVar1 + (longlong)iVar4 * 8));
    *puVar6 = *(undefined8 *)FVar5;
    iStack_b0 = iStack_b0 + 1;
  } while( true );
}

// Call @ 147119fe0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::EntityIterator::FIterator_ParallelFor::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  FMassEntityHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMassEntityHandle FVar5;
  undefined8 *puVar6;
  undefined1 auStack_38 [8];
  FEntityIterator FStack_30;
  
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_30);
  do {
    bVar3 = FMassExecutionContext::FEntityIterator::operator_bool(&FStack_30);
    if (!bVar3) {
      return;
    }
    pFVar1 = *(FMassEntityHandle **)param_1;
    FMassExecutionContext::FEntityIterator::operator_int(&FStack_30);
    FVar5 = FMassExecutionContext::GetEntity(param_2,(int)auStack_38);
    if (((ulonglong)*pFVar1 <= (ulonglong)FVar5) &&
       ((ulonglong)FVar5 < (ulonglong)((longlong)*pFVar1 + (longlong)pFVar1[1].SerialNumber * 8))) {
      FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (pFVar1[1].Index == pFVar1[1].SerialNumber) {
      iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pFVar1,&pFVar1[1].SerialNumber);
      pFVar1[1].Index = iVar4;
    }
    iVar4 = pFVar1[1].Index;
    pFVar1[1].Index = pFVar1[1].Index + 1;
    puVar6 = ::operator_new(8,(FScriptContainerElement *)((longlong)*pFVar1 + (longlong)iVar4 * 8));
    *puVar6 = *(undefined8 *)FVar5;
    FMassExecutionContext::FEntityIterator::operator++(&FStack_30);
  } while( true );
}

// Call @ 147119ff0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassQueryTest::FQueryTest_AnyFragment::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  longlong lVar1;
  FAutomationTestBase *this;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  FString FStack_38;
  TArrayView<FTestFragment_Bool,int> TStack_28;
  TArrayView<FTestFragment_Int,int> TStack_18;
  
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Bool>(param_2,&TStack_28);
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Int>(param_2,&TStack_18);
  lVar1 = *(longlong *)param_1;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this = *(FAutomationTestBase **)(lVar1 + 0x20);
  if ((TStack_28.ArrayNum == 0) && (TStack_18.ArrayNum == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  ::FString::FString(&FStack_38,"Every matching archetype needs to host Bool or Int fragments");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (FStack_38.Data.ArrayNum != 0) {
    FVar4.Data = FStack_38.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(this,(wchar_t *)FVar4.Data,bVar3);
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 14711a000

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassQueryTest::FQueryTest_AutoRecache::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  **(int **)param_1 = **(int **)param_1 + (param_2->EntityListView).ArrayNum;
  return;
}

// Call @ 14711a020

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassQueryTest::FQueryTest_ExecuteMultipleArchetypes::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  TArrayView<FTestFragment_Float,int> TStack_18;
  
  **(int **)param_1 = **(int **)param_1 + (param_2->EntityListView).ArrayNum;
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Float>(param_2,&TStack_18);
  uVar4 = 0;
  if (0 < (param_2->EntityListView).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < TStack_18.ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)((longlong)&(TStack_18.DataPtr)->Value + lVar5) = 0x41500000;
      lVar5 = lVar5 + 4;
    } while ((int)uVar4 < (param_2->EntityListView).ArrayNum);
  }
  return;
}

// Call @ 14711a030

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassQueryTest::FQueryTest_ExecuteSingleArchetype::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  TArrayView<FTestFragment_Float,int> TStack_18;
  
  **(int **)param_1 = **(int **)param_1 + (param_2->EntityListView).ArrayNum;
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Float>(param_2,&TStack_18);
  uVar4 = 0;
  if (0 < (param_2->EntityListView).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < TStack_18.ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)((longlong)&(TStack_18.DataPtr)->Value + lVar5) = 0x41500000;
      lVar5 = lVar5 + 4;
    } while ((int)uVar4 < (param_2->EntityListView).ArrayNum);
  }
  return;
}

// Call @ 14711a040

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassQueryTest::FQueryTest_ExecuteSparse::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  TArrayView<FTestFragment_Float,int> TStack_18;
  
  **(int **)param_1 = **(int **)param_1 + (param_2->EntityListView).ArrayNum;
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Float>(param_2,&TStack_18);
  uVar4 = 0;
  if (0 < (param_2->EntityListView).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < TStack_18.ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)((longlong)&(TStack_18.DataPtr)->Value + lVar5) = 0x41500000;
      lVar5 = lVar5 + 4;
    } while ((int)uVar4 < (param_2->EntityListView).ArrayNum);
  }
  return;
}

// Call @ 14711a050

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassQueryTest::FQueryTest_ExecutionLimiter::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  TArrayView<FTestFragment_Float,int> TStack_18;
  
  **(int **)param_1 = **(int **)param_1 + (param_2->EntityListView).ArrayNum;
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Float>(param_2,&TStack_18);
  uVar4 = 0;
  if (0 < (param_2->EntityListView).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < TStack_18.ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)((longlong)&(TStack_18.DataPtr)->Value + lVar5) = 0x41500000;
      lVar5 = lVar5 + 4;
    } while ((int)uVar4 < (param_2->EntityListView).ArrayNum);
  }
  return;
}

// Call @ 14711a060

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassQueryTest::FQueryTest_FragmentPresent::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  **(int **)param_1 = **(int **)param_1 + (param_2->EntityListView).ArrayNum;
  return;
}

// Call @ 14711a080

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassQueryTest::FQueryTest_ParallelForBasic::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  BOOL BVar1;
  
  LOCK();
  **(int **)((longlong)param_1 + 8) =
       **(int **)((longlong)param_1 + 8) + (param_2->EntityListView).ArrayNum;
  UNLOCK();
  BVar1 = TryEnterCriticalSection(*(LPCRITICAL_SECTION *)param_1);
  if (BVar1 == 0) {
    LOCK();
    **(int **)((longlong)param_1 + 0x10) = **(int **)((longlong)param_1 + 0x10) + 1;
    UNLOCK();
    return;
  }
  FWindowsPlatformProcess::Sleep(__real_3c23d70a);
  return;
}

// Call @ 14711a0d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassQueryTest::FQueryTest_ParallelForCollection::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  BOOL BVar1;
  
  LOCK();
  **(int **)param_1 = **(int **)param_1 + 1;
  UNLOCK();
  LOCK();
  **(int **)((longlong)param_1 + 0x10) =
       **(int **)((longlong)param_1 + 0x10) + (param_2->EntityListView).ArrayNum;
  UNLOCK();
  BVar1 = TryEnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)param_1 + 8));
  if (BVar1 == 0) {
    LOCK();
    **(int **)((longlong)param_1 + 0x18) = **(int **)((longlong)param_1 + 0x18) + 1;
    UNLOCK();
    return;
  }
  FWindowsPlatformProcess::Sleep(__real_3c23d70a);
  return;
}

// Call @ 14711a120

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassQueryTest::FQueryTest_UsingOptionalFragment::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  FTestFragment_Int *pFVar1;
  int iVar2;
  ulonglong uVar3;
  FTestFragment_Int *pFVar4;
  ulonglong uVar5;
  TArrayView<FTestFragment_Int,int> TStack_18;
  
  **(int **)param_1 = **(int **)param_1 + 1;
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Int>(param_2,&TStack_18);
  if (TStack_18.ArrayNum != 0) {
    pFVar1 = TStack_18.DataPtr + TStack_18.ArrayNum;
    uVar5 = (longlong)TStack_18.ArrayNum & 0x3fffffffffffffff;
    if (pFVar1 < TStack_18.DataPtr) {
      uVar5 = 0;
    }
    if ((uVar5 != 0) && (3 < uVar5)) {
      iVar2 = *(int *)((longlong)param_1 + 0x10);
      if (((FTestFragment_Int *)((longlong)param_1 + 0x10U) < TStack_18.DataPtr) ||
         (TStack_18.DataPtr + (uVar5 - 1) < (FTestFragment_Int *)((longlong)param_1 + 0x10U))) {
        pFVar4 = TStack_18.DataPtr;
        for (uVar3 = uVar5 & 0x3ffffffffffffffc; uVar3 != 0; uVar3 = uVar3 - 1) {
          pFVar4->Value = iVar2;
          pFVar4 = pFVar4 + 1;
        }
        TStack_18.DataPtr = TStack_18.DataPtr + (uVar5 & 0xfffffffffffffffc);
      }
    }
    for (; TStack_18.DataPtr != pFVar1; TStack_18.DataPtr = TStack_18.DataPtr + 1) {
      (TStack_18.DataPtr)->Value = *(int *)((longlong)param_1 + 0x10);
    }
    return;
  }
  **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + 1;
  return;
}

// Call @ 14711a130

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassEntityTest::FSharedFragment_ForEach::InstantTest'::__l2::<lambda_1>,void,FTestSharedFragment_Int_&>
::Call(void *param_1,FTestSharedFragment_Int *param_2)

{
  ForAnyElementType *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  
  pFVar1 = *(ForAnyElementType **)param_1;
  if ((pFVar1->Data <= param_2) &&
     (param_2 < pFVar1->Data + (longlong)*(int *)((longlong)&pFVar1[1].Data + 4) * 4)) {
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)&pFVar1[1].Data == *(int *)((longlong)&pFVar1[1].Data + 4)) {
    iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar1,(int *)((longlong)&pFVar1[1].Data + 4));
    *(int *)&pFVar1[1].Data = iVar4;
  }
  iVar4 = *(int *)&pFVar1[1].Data;
  *(int *)&pFVar1[1].Data = *(int *)&pFVar1[1].Data + 1;
  piVar5 = ::operator_new(4,pFVar1->Data + (longlong)iVar4 * 4);
  *piVar5 = param_2->Value;
  pFVar1 = *(ForAnyElementType **)((longlong)param_1 + 8);
  param_2->Value = param_2->Value + 100;
  if ((pFVar1->Data <= param_2) &&
     (param_2 < pFVar1->Data + (longlong)*(int *)((longlong)&pFVar1[1].Data + 4) * 4)) {
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)&pFVar1[1].Data == *(int *)((longlong)&pFVar1[1].Data + 4)) {
    iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar1,(int *)((longlong)&pFVar1[1].Data + 4));
    *(int *)&pFVar1[1].Data = iVar4;
  }
  iVar4 = *(int *)&pFVar1[1].Data;
  *(int *)&pFVar1[1].Data = *(int *)&pFVar1[1].Data + 1;
  piVar5 = ::operator_new(4,pFVar1->Data + (longlong)iVar4 * 4);
  *piVar5 = param_2->Value;
  return;
}

// Call @ 14711a140

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::EntityBuilder::FSyncBuildingAsyncSubmission::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int iVar1;
  
  Mass::FEntityBuilder::Commit(*(FEntityBuilder **)param_1);
  iVar1 = FMassExecutionContext::GetNumEntities(param_2);
  **(int **)((longlong)param_1 + 8) = **(int **)((longlong)param_1 + 8) + iVar1;
  return;
}

// Call @ 14711a150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_A::SetUp'::__l2::<lambda_1>,bool,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  initializer_list<int_const_> *piVar1;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar2;
  longlong lVar3;
  initializer_list<int_const_> *piVar4;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar5;
  undefined1 auStack_118 [32];
  undefined1 uStack_f8;
  FArchetypeGroup_MultiLevelQueryBase *pFStack_f0;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_e8;
  undefined1 auStack_d8 [32];
  initializer_list<int_const_> iStack_b8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_a8;
  initializer_list<int_const_> iStack_98;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_88;
  int aiStack_78 [20];
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  aiStack_78[0] = 4;
  aiStack_78[1] = 5;
  aiStack_78[2] = 6;
  aiStack_78[3] = 7;
  aiStack_78[4] = 0;
  aiStack_78[5] = 1;
  aiStack_78[6] = 2;
  aiStack_78[7] = 3;
  aiStack_78[8] = 0xc;
  aiStack_78[9] = 0xd;
  aiStack_78[10] = 0xe;
  aiStack_78[0xb] = 0xf;
  aiStack_78[0xc] = 8;
  aiStack_78[0xd] = 9;
  aiStack_78[0xe] = 10;
  aiStack_78[0xf] = 0xb;
  piVar1 = std::initializer_list<int_const_>::initializer_list<int_const_>
                     (&iStack_98,aiStack_78,aiStack_78 + 0x10);
  piVar4 = &iStack_b8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar1->_First;
    piVar1 = (initializer_list<int_const_> *)((longlong)&piVar1->_First + 1);
    piVar4 = (initializer_list<int_const_> *)((longlong)&piVar4->_First + 1);
  }
  TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
            (&TStack_e8,&iStack_b8);
  piVar2 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&iStack_88,&TStack_e8,
                      (TArray<int_const_,TSizedDefaultAllocator<32>_> *)auStack_d8);
  piVar5 = &iStack_a8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar5->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar2->_First + 1);
    piVar5 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar5->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (auStack_d8 + 8),&iStack_a8);
  _vector_destructor_iterator_
            (&TStack_e8,0x10,1,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  pFStack_f0 = *(FArchetypeGroup_MultiLevelQueryBase **)param_1;
  uStack_f8 = Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test1
                        (pFStack_f0,param_2,
                         (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                          *)(auStack_d8 + 8));
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (auStack_d8 + 8));
  return (bool)uStack_f8;
}

// Call @ 14711a160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_B::SetUp'::__l2::<lambda_1>,bool,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  initializer_list<int_const_> *piVar1;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar2;
  longlong lVar3;
  initializer_list<int_const_> *piVar4;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar5;
  undefined1 auStack_118 [32];
  undefined1 uStack_f8;
  FArchetypeGroup_MultiLevelQueryBase *pFStack_f0;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_e8;
  undefined1 auStack_d8 [32];
  initializer_list<int_const_> iStack_b8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_a8;
  initializer_list<int_const_> iStack_98;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_88;
  int aiStack_78 [20];
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  aiStack_78[0] = 3;
  aiStack_78[1] = 4;
  aiStack_78[2] = 0;
  aiStack_78[3] = 1;
  aiStack_78[4] = 2;
  aiStack_78[5] = 8;
  aiStack_78[6] = 9;
  aiStack_78[7] = 5;
  aiStack_78[8] = 6;
  aiStack_78[9] = 7;
  aiStack_78[10] = 0xd;
  aiStack_78[0xb] = 0xe;
  aiStack_78[0xc] = 10;
  aiStack_78[0xd] = 0xb;
  aiStack_78[0xe] = 0xc;
  aiStack_78[0xf] = 0xf;
  piVar1 = std::initializer_list<int_const_>::initializer_list<int_const_>
                     (&iStack_98,aiStack_78,aiStack_78 + 0x10);
  piVar4 = &iStack_b8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar1->_First;
    piVar1 = (initializer_list<int_const_> *)((longlong)&piVar1->_First + 1);
    piVar4 = (initializer_list<int_const_> *)((longlong)&piVar4->_First + 1);
  }
  TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
            (&TStack_e8,&iStack_b8);
  piVar2 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&iStack_88,&TStack_e8,
                      (TArray<int_const_,TSizedDefaultAllocator<32>_> *)auStack_d8);
  piVar5 = &iStack_a8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar5->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar2->_First + 1);
    piVar5 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar5->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (auStack_d8 + 8),&iStack_a8);
  _vector_destructor_iterator_
            (&TStack_e8,0x10,1,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  pFStack_f0 = *(FArchetypeGroup_MultiLevelQueryBase **)param_1;
  uStack_f8 = Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test1
                        (pFStack_f0,param_2,
                         (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                          *)(auStack_d8 + 8));
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (auStack_d8 + 8));
  return (bool)uStack_f8;
}

// Call @ 14711a170

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::SetUp'::__l2::<lambda_1>,bool,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_98 [4];
  uint uStack_94;
  longlong *plStack_90;
  int iStack_88;
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0> TStack_80;
  FArchetypeGroupType *pFStack_68;
  FArchetypeGroupType *pFStack_60;
  longlong lStack_58;
  longlong lStack_50;
  FArchetypeGroupType *pFStack_48;
  FArchetypeGroupType *pFStack_40;
  FMassEntityQuery *pFStack_38;
  FArchetypeGroup_MultiLevelQueryBase *pFStack_30;
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0> TStack_28;
  
  FMassEntityQuery::ResetGrouping((FMassEntityQuery *)(*(longlong *)param_1 + 0xb0));
  plStack_90 = (longlong *)(*(longlong *)param_1 + 0x90);
  pFStack_68 = (FArchetypeGroupType *)*plStack_90;
  pFStack_60 = pFStack_68;
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>::
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>
            (&TStack_80,(int *)(*(longlong *)param_1 + 0x98),pFStack_68);
  lStack_58 = *plStack_90;
  iStack_88 = (int)plStack_90[1];
  lStack_50 = lStack_58;
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>::
  TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>
            (&TStack_28,(int *)(plStack_90 + 1),
             (FArchetypeGroupType *)(lStack_58 + (longlong)iStack_88 * 4));
  while( true ) {
    if (*TStack_80.CurrentNum != TStack_80.InitialNum) {
      puVar3 = auStack_98;
      for (lVar2 = 1; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      `TCheckedPointerIterator<UE::Mass::FArchetypeGroupType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStack_98);
    }
    auStack_98[1] = TStack_80.Ptr != TStack_28.Ptr;
    uStack_94 = (uint)(byte)auStack_98[1];
    if (!(bool)auStack_98[1]) break;
    pFStack_48 = TStack_80.Ptr;
    pFStack_40 = TStack_80.Ptr;
    pFStack_38 = (FMassEntityQuery *)(*(longlong *)param_1 + 0xb0);
    FMassEntityQuery::GroupBy(pFStack_38,(FArchetypeGroupType)(TStack_80.Ptr)->Identifier);
    TStack_80.Ptr = TStack_80.Ptr + 1;
  }
  pFStack_30 = *(FArchetypeGroup_MultiLevelQueryBase **)param_1;
  bVar1 = Mass::Test::FArchetypeGroup_MultiLevelQueryBase::TestRaw
                    (pFStack_30,param_2,
                     (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)(*(longlong *)param_1 + 0x420));
  return bVar1;
}

// Call @ 14711a180

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::TestRaw'::__l2::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this;
  TArrayView<FMassEntityHandle_const_,int> *pTVar1;
  TArrayView<FMassEntityHandle_const_,int> TStack_18;
  
  this = *(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> **)param_1;
  pTVar1 = FMassExecutionContext::GetEntities(param_2,&TStack_18);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  Append<TArrayView<FMassEntityHandle_const_,int>_>(this,pTVar1);
  return;
}

// Call @ 14711a190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::FArchetypeGroup_MultiLevelQueryBase::SetUp'::__l5::<lambda_1>,bool,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  initializer_list<int_const_> *piVar1;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar2;
  longlong lVar3;
  initializer_list<int_const_> *piVar4;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar5;
  undefined1 auStack_118 [32];
  undefined1 uStack_f8;
  FArchetypeGroup_MultiLevelQueryBase *pFStack_f0;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_e8;
  undefined1 auStack_d8 [32];
  initializer_list<int_const_> iStack_b8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_a8;
  initializer_list<int_const_> iStack_98;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_88;
  int aiStack_78 [20];
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  aiStack_78[0] = 0;
  aiStack_78[1] = 1;
  aiStack_78[2] = 2;
  aiStack_78[3] = 3;
  aiStack_78[4] = 4;
  aiStack_78[5] = 5;
  aiStack_78[6] = 6;
  aiStack_78[7] = 7;
  aiStack_78[8] = 8;
  aiStack_78[9] = 9;
  aiStack_78[10] = 10;
  aiStack_78[0xb] = 0xb;
  aiStack_78[0xc] = 0xc;
  aiStack_78[0xd] = 0xd;
  aiStack_78[0xe] = 0xe;
  aiStack_78[0xf] = 0xf;
  piVar1 = std::initializer_list<int_const_>::initializer_list<int_const_>
                     (&iStack_98,aiStack_78,aiStack_78 + 0x10);
  piVar4 = &iStack_b8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar1->_First;
    piVar1 = (initializer_list<int_const_> *)((longlong)&piVar1->_First + 1);
    piVar4 = (initializer_list<int_const_> *)((longlong)&piVar4->_First + 1);
  }
  TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
            (&TStack_e8,&iStack_b8);
  piVar2 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&iStack_88,&TStack_e8,
                      (TArray<int_const_,TSizedDefaultAllocator<32>_> *)auStack_d8);
  piVar5 = &iStack_a8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar5->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar2->_First + 1);
    piVar5 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar5->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (auStack_d8 + 8),&iStack_a8);
  _vector_destructor_iterator_
            (&TStack_e8,0x10,1,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  pFStack_f0 = *(FArchetypeGroup_MultiLevelQueryBase **)param_1;
  uStack_f8 = Mass::Test::FArchetypeGroup_MultiLevelQueryBase::TestDefaultOrder
                        (pFStack_f0,param_2,
                         (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                          *)(auStack_d8 + 8));
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (auStack_d8 + 8));
  return (bool)uStack_f8;
}

// Call @ 14711a1a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::Observers::FForbidModifyOnDestroy::SetUp'::__l5::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int iVar1;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this;
  TArrayView<FMassEntityHandle_const_,int> *pTVar2;
  FMassEntityManager *this_00;
  FMassEntityHandle *pFStack_d0;
  <lambda_1> <Stack_60;
  <lambda_1> *p<Stack_58;
  <lambda_1> *p<Stack_50;
  FMassCommandBuffer *pFStack_48;
  FMassEntityHandle FStack_40;
  TArrayView<FMassEntityHandle_const_,int> TStack_38;
  TArrayView<FMassEntityHandle_const_,int> TStack_28;
  TArrayView<FMassEntityHandle_const_,int> TStack_18;
  
  this = *(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 8);
  pTVar2 = FMassExecutionContext::GetEntities(param_2,&TStack_28);
  iVar1 = pTVar2->ArrayNum;
  pTVar2 = FMassExecutionContext::GetEntities(param_2,&TStack_18);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Append(this,pTVar2->DataPtr,iVar1);
  this_00 = FMassExecutionContext::GetEntityManagerChecked(param_2);
  FMassEntityManager::IsProcessing(this_00);
  FMassExecutionContext::GetEntities(param_2,&TStack_38);
  for (pFStack_d0 = TStack_38.DataPtr; pFStack_d0 != TStack_38.DataPtr + TStack_38.ArrayNum;
      pFStack_d0 = pFStack_d0 + 1) {
    FStack_40 = *pFStack_d0;
  }
  pFStack_48 = FMassExecutionContext::Defer(param_2);
  p<Stack_58 = &<Stack_60;
  <Stack_60.bCommandsFlushedPtr = param_1;
  p<Stack_50 = p<Stack_58;
  FMassCommandBuffer::
  PushCommand<FMassDeferredCommand<5>,__UE::Mass::Test::Observers::FForbidModifyOnDestroy::SetUp_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (pFStack_48,p<Stack_58);
  return;
}

// Call @ 14711a1b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::Observers::FFragmentTestBase::SetUp'::__l5::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int iVar1;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this;
  TArrayView<FMassEntityHandle_const_,int> *pTVar2;
  <lambda_1> <Stack_48;
  <lambda_1> *p<Stack_40;
  <lambda_1> *p<Stack_38;
  FMassCommandBuffer *pFStack_30;
  TArrayView<FMassEntityHandle_const_,int> TStack_28;
  TArrayView<FMassEntityHandle_const_,int> TStack_18;
  
  this = *(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 8);
  pTVar2 = FMassExecutionContext::GetEntities(param_2,&TStack_28);
  iVar1 = pTVar2->ArrayNum;
  pTVar2 = FMassExecutionContext::GetEntities(param_2,&TStack_18);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Append(this,pTVar2->DataPtr,iVar1);
  pFStack_30 = FMassExecutionContext::Defer(param_2);
  p<Stack_40 = &<Stack_48;
  <Stack_48.bCommandsFlushedPtr = param_1;
  p<Stack_38 = p<Stack_40;
  FMassCommandBuffer::
  PushCommand<FMassDeferredCommand<5>,__UE::Mass::Test::Observers::FFragmentTestBase::SetUp_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (pFStack_30,p<Stack_40);
  return;
}

// Call @ 14711a1c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::Observers::FTagBaseOperation::SetUp'::__l5::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int iVar1;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this;
  TArrayView<FMassEntityHandle_const_,int> *pTVar2;
  <lambda_1> <Stack_48;
  <lambda_1> *p<Stack_40;
  <lambda_1> *p<Stack_38;
  FMassCommandBuffer *pFStack_30;
  TArrayView<FMassEntityHandle_const_,int> TStack_28;
  TArrayView<FMassEntityHandle_const_,int> TStack_18;
  
  this = *(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 8);
  pTVar2 = FMassExecutionContext::GetEntities(param_2,&TStack_28);
  iVar1 = pTVar2->ArrayNum;
  pTVar2 = FMassExecutionContext::GetEntities(param_2,&TStack_18);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Append(this,pTVar2->DataPtr,iVar1);
  pFStack_30 = FMassExecutionContext::Defer(param_2);
  p<Stack_40 = &<Stack_48;
  <Stack_48.bCommandsFlushedPtr = param_1;
  p<Stack_38 = p<Stack_40;
  FMassCommandBuffer::
  PushCommand<FMassDeferredCommand<5>,__UE::Mass::Test::Observers::FTagBaseOperation::SetUp_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (pFStack_30,p<Stack_40);
  return;
}

// Call @ 14711a1d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMassTestProcessorBase::SetUseParallelForEachEntityChunk'::__l5::<lambda_1>,void,FMassEntityManager_&,FMassExecutionContext_&>
::Call(void *param_1,FMassEntityManager *param_2,FMassExecutionContext *param_3)

{
  FMassEntityQuery::ParallelForEachEntityChunk
            ((FMassEntityQuery *)(*(longlong *)param_1 + 0x140),param_3,
             (TFunction<void___cdecl(FMassExecutionContext_&)> *)(*(longlong *)param_1 + 0x110),
             Force);
  return;
}

// Call @ 14711a1e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassDynamicProcessorsTest::FDynamicProcessorsAddTrivial::Update'::__l5::<lambda_1>,void,FMassEntityManager_&,FMassExecutionContext_&>
::Call(void *param_1,FMassEntityManager *param_2,FMassExecutionContext *param_3)

{
  *(int *)(*(longlong *)param_1 + 0x188) = *(int *)(*(longlong *)param_1 + 0x188) + 1;
  return;
}

// Call @ 14711a1f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassCommandsTest::FCommands_DeferredFunction::InstantTest'::__l6::<lambda_1>,void,FMassEntityManager_&>
::Call(void *param_1,FMassEntityManager *param_2)

{
  int iVar1;
  FTestFragment_Int *pFVar2;
  FMassEntityView FStack_38;
  
  FMassEntityView::FMassEntityView
            (&FStack_38,(FMassArchetypeHandle *)((longlong)param_1 + 8),
             *(FMassEntityHandle *)param_1);
  iVar1 = *(int *)((longlong)param_1 + 0x18);
  pFVar2 = FMassEntityView::GetFragmentData<FTestFragment_Int>(&FStack_38);
  pFVar2->Value = pFVar2->Value - iVar1;
  return;
}

// Call @ 14711a200

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassMultiThreadingTest::FMTBasic::SetUp'::__l6::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  float fVar1;
  int iVar2;
  FTestFragment_Float *pFVar3;
  FTestFragment_Int *pFVar4;
  int iStack_38;
  TArrayView<FTestFragment_Int,int> TStack_28;
  TArrayView<FTestFragment_Float_const_,int> TStack_18;
  
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Int>(param_2,&TStack_28);
  FMassExecutionContext::GetFragmentView<FTestFragment_Float>(param_2,&TStack_18);
  iStack_38 = 0;
  while( true ) {
    iVar2 = FMassExecutionContext::GetNumEntities(param_2);
    if (iVar2 <= iStack_38) break;
    pFVar3 = TArrayView<FTestFragment_Float_const_,int>::operator[](&TStack_18,iStack_38);
    fVar1 = pFVar3->Value;
    pFVar4 = TArrayView<FTestFragment_Int,int>::operator[](&TStack_28,iStack_38);
    iVar2 = pFVar4->Value;
    pFVar4 = TArrayView<FTestFragment_Int,int>::operator[](&TStack_28,iStack_38);
    pFVar4->Value = (int)fVar1 + iVar2;
    iStack_38 = iStack_38 + 1;
  }
  return;
}

// Call @ 14711a210

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassMultiThreadingTest::FMTTrivial::SetUp'::__l6::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int iVar1;
  
  iVar1 = FMassExecutionContext::GetNumEntities(param_2);
  *(int *)(*(longlong *)param_1 + 0xd4) = *(int *)(*(longlong *)param_1 + 0xd4) + iVar1;
  return;
}

// Call @ 14711a220

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassDynamicProcessorsTest::FDynamicProcessorMultipleInstances::Update'::__l10::<lambda_1>,void,FMassEntityManager_&,FMassExecutionContext_&>
::Call(void *param_1,FMassEntityManager *param_2,FMassExecutionContext *param_3)

{
  std::_Atomic_integral_facade<int>::operator+=
            ((_Atomic_integral_facade<int> *)(*(longlong *)param_1 + 0x18c),
             *(int *)((longlong)param_1 + 8) + 1);
  return;
}

// Call @ 14711a230

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassQueryTest::FQueryTest_JustAChunkFragment::InstantTest'::__l11::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  FMassExecutionContext::GetChunkFragment<FTestChunkFragment_Int>(param_2);
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 14711a260

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassQueryTest::FQueryTest_JustAConstSharedFragment::InstantTest'::__l11::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  TFragmentView<FConstStructView> *pTVar5;
  UPackage *pUVar6;
  uchar *puVar7;
  FName FStackX_8;
  FString FStack_18;
  
  pTVar5 = TArray<FMassExecutionContext::TFragmentView<FConstStructView>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           ::
           FindByPredicate<_FMassExecutionContext::GetConstSharedFragmentPtr<FTestConstSharedFragment_Int_const_>_::__l2::<lambda_1>_>
                     (&param_2->ConstSharedFragmentViews,FStackX_8.ComparisonIndex.Value._0_1_);
  if (pTVar5 != (TFragmentView<FConstStructView> *)0x0) {
    puVar7 = (pTVar5->FragmentView).StructMemory;
    if ((puVar7 == (uchar *)0x0) ||
       (pUVar2 = (pTVar5->FragmentView).ScriptStruct, pUVar2 == (UScriptStruct *)0x0)) {
LAB_147100688:
      puVar7 = (uchar *)0x0;
    }
    else {
      if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,
                             (UObject *)pUVar6,L"TestConstSharedFragment_Int");
      }
      if (pUVar2 != Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton) {
        if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
          Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,
                               (UObject *)pUVar6,L"TestConstSharedFragment_Int");
          if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
              (UScriptStruct *)0x0) goto LAB_147100688;
        }
        iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)
                     ->_padding_;
        if (((int)pUVar2->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->
             _padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_147100688;
      }
    }
    if (puVar7 != (uchar *)0x0) {
      **(undefined1 **)param_1 = 1;
      return;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar6,
                         L"TestConstSharedFragment_Int");
    if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      ::FString::FString(&FStack_18,L"None");
      goto LAB_147100706;
    }
  }
  FStackX_8 = (FName)(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)
                     ->_padding_;
  ::FName::ToString(&FStackX_8,&FStack_18);
LAB_147100706:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SharedFragment",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x186,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 14711a270

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassQueryTest::FQueryTest_JustASharedFragment::InstantTest'::__l11::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  TFragmentView<FStructView> *pTVar3;
  FTestSharedFragment_Int *pFVar4;
  UPackage *pUVar5;
  FName FStackX_8;
  FString FStack_18;
  
  pTVar3 = TArray<FMassExecutionContext::TFragmentView<FStructView>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           ::
           FindByPredicate<_FMassExecutionContext::GetSharedFragmentPtr<FTestSharedFragment_Int>_::__l2::<lambda_1>_>
                     (&param_2->SharedFragmentViews,FStackX_8.ComparisonIndex.Value._0_1_);
  if ((pTVar3 != (TFragmentView<FStructView> *)0x0) &&
     (pFVar4 = StructUtils::GetStructPtr<FTestSharedFragment_Int>
                         ((pTVar3->FragmentView).ScriptStruct,(pTVar3->FragmentView).StructMemory),
     pFVar4 != (FTestSharedFragment_Int *)0x0)) goto LAB_14710085d;
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar5,
                         L"TestSharedFragment_Int");
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1471007f0;
    ::FString::FString(&FStack_18,L"None");
  }
  else {
LAB_1471007f0:
    FStackX_8 = (FName)(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)->
                       _padding_;
    ::FName::ToString(&FStackX_8,&FStack_18);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("SharedFragment",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x1a9,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14710085d:
  **(undefined1 **)param_1 = 1;
  return;
}

// Call @ 14711a280

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassCompositeProcessorTest::FCompositeProcessorTest_MultipleSubProcessors::InstantTest'::__l12::<lambda_1>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  **(int **)param_1 = **(int **)param_1 + *(int *)((longlong)param_1 + 8);
  return;
}

// Call @ 14711a290

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::FArchetypeGroup_SingleLevelQuery::InstantTest'::__l2::<lambda_2>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this;
  TArrayView<FMassEntityHandle_const_,int> *pTVar1;
  TArrayView<FMassEntityHandle_const_,int> TStack_18;
  
  this = *(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> **)param_1;
  pTVar1 = FMassExecutionContext::GetEntities(param_2,&TStack_18);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  Append<TArrayView<FMassEntityHandle_const_,int>_>(this,pTVar1);
  return;
}

// Call @ 14711a2a0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassEntityTest::FConstSharedFragment_ForEach::InstantTest'::__l2::<lambda_2>,bool,FTestConstSharedFragment_Int_const_&>
::Call(void *param_1,FTestConstSharedFragment_Int *param_2)

{
  return 10 < param_2->Value;
}

// Call @ 14711a2b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::EntityIterator::FIterator_IndexParity::InstantTest'::__l2::<lambda_2>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  FMassEntityHandle *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMassEntityHandle FVar5;
  undefined8 *puVar6;
  undefined1 auStack_38 [8];
  FEntityIterator FStack_30;
  
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_30);
  do {
    bVar3 = FMassExecutionContext::FEntityIterator::operator_bool(&FStack_30);
    if (!bVar3) {
      return;
    }
    pFVar1 = *(FMassEntityHandle **)param_1;
    FMassExecutionContext::FEntityIterator::operator_int(&FStack_30);
    FVar5 = FMassExecutionContext::GetEntity(param_2,(int)auStack_38);
    if (((ulonglong)*pFVar1 <= (ulonglong)FVar5) &&
       ((ulonglong)FVar5 < (ulonglong)((longlong)*pFVar1 + (longlong)pFVar1[1].SerialNumber * 8))) {
      FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (pFVar1[1].Index == pFVar1[1].SerialNumber) {
      iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pFVar1,&pFVar1[1].SerialNumber);
      pFVar1[1].Index = iVar4;
    }
    iVar4 = pFVar1[1].Index;
    pFVar1[1].Index = pFVar1[1].Index + 1;
    puVar6 = ::operator_new(8,(FScriptContainerElement *)((longlong)*pFVar1 + (longlong)iVar4 * 8));
    *puVar6 = *(undefined8 *)FVar5;
    FMassExecutionContext::FEntityIterator::operator++(&FStack_30);
  } while( true );
}

// Call @ 14711a2c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::EntityIterator::FIterator_ParallelFor::InstantTest'::__l2::<lambda_2>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> TStack_e8;
  int iStack_d8;
  FMassEntityHandle FStack_d0;
  int iStack_c8;
  FMassEntityHandle FStack_c0;
  FMassEntityHandle FStack_b8;
  FMassEntityHandle FStack_b0;
  FMassEntityHandle FStack_a8;
  FMassEntityHandle FStack_a0;
  FMassEntityHandle FStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FMassEntityHandle FStack_88;
  FMassEntityHandle FStack_80;
  FMassEntityHandle FStack_78;
  longlong lStack_70;
  longlong lStack_68;
  FMassEntityHandle FStack_60;
  FMassEntityHandle FStack_58;
  void *pvStack_50;
  undefined8 *puStack_48;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTStack_40;
  undefined1 auStack_38 [8];
  FEntityIterator FStack_30;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_e8.AllocatorInstance);
  TStack_e8.ArrayNum = 0;
  TStack_e8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&TStack_e8.AllocatorInstance);
  FMassExecutionContext::CreateEntityIterator(param_2,&FStack_30);
  do {
    bVar2 = FMassExecutionContext::FEntityIterator::operator_bool(&FStack_30);
    if (!bVar2) {
      FSpinLock::Lock(*(FSpinLock **)((longlong)param_1 + 8));
      pTStack_40 = *(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> **)param_1;
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      Append<FMassEntityHandle,TSizedDefaultAllocator<32>_>(pTStack_40,&TStack_e8);
      FSpinLock::Unlock(*(FSpinLock **)((longlong)param_1 + 8));
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&TStack_e8);
      return;
    }
    FMassExecutionContext::FEntityIterator::operator_int(&FStack_30);
    FStack_d0 = FMassExecutionContext::GetEntity(param_2,(int)auStack_38);
    FStack_c0 = (FMassEntityHandle)TStack_e8.AllocatorInstance.Data;
    FStack_b8 = (FMassEntityHandle)TStack_e8.AllocatorInstance.Data;
    FStack_b0 = (FMassEntityHandle)TStack_e8.AllocatorInstance.Data;
    if (TStack_e8.AllocatorInstance.Data <= (ulonglong)FStack_d0) {
      FStack_a8 = (FMassEntityHandle)TStack_e8.AllocatorInstance.Data;
      FStack_a0 = (FMassEntityHandle)TStack_e8.AllocatorInstance.Data;
      FStack_98 = (FMassEntityHandle)TStack_e8.AllocatorInstance.Data;
      if ((ulonglong)FStack_d0 <
          (ulonglong)((longlong)TStack_e8.AllocatorInstance.Data + (longlong)TStack_e8.ArrayMax * 8)
         ) {
        uStack_90 = 0;
        uStack_8c = 0;
        FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        lStack_70 = (longlong)TStack_e8.ArrayNum;
        lStack_68 = (longlong)TStack_e8.ArrayMax;
        FStack_88 = (FMassEntityHandle)TStack_e8.AllocatorInstance.Data;
        FStack_80 = (FMassEntityHandle)TStack_e8.AllocatorInstance.Data;
        FStack_78 = (FMassEntityHandle)TStack_e8.AllocatorInstance.Data;
        FStack_60 = (FMassEntityHandle)TStack_e8.AllocatorInstance.Data;
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
    }
    if (TStack_e8.ArrayNum == TStack_e8.ArrayMax) {
      TStack_e8.ArrayNum =
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&TStack_e8.AllocatorInstance,&TStack_e8.ArrayMax);
    }
    iStack_d8 = TStack_e8.ArrayNum;
    FStack_58 = (FMassEntityHandle)TStack_e8.AllocatorInstance.Data;
    pvStack_50 = (void *)((longlong)TStack_e8.AllocatorInstance.Data +
                         (longlong)TStack_e8.ArrayNum * 8);
    TStack_e8.ArrayNum = TStack_e8.ArrayNum + 1;
    puStack_48 = ::operator_new(8,pvStack_50);
    *puStack_48 = *(undefined8 *)FStack_d0;
    iStack_c8 = iStack_d8;
    FMassExecutionContext::FEntityIterator::operator++(&FStack_30);
  } while( true );
}

// Call @ 14711a2d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassEntityTest::FSharedFragment_ForEach::InstantTest'::__l2::<lambda_2>,void,FTestSharedFragment_Int_&>
::Call(void *param_1,FTestSharedFragment_Int *param_2)

{
  ForAnyElementType *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  
  pFVar1 = *(ForAnyElementType **)param_1;
  if ((pFVar1->Data <= param_2) &&
     (param_2 < pFVar1->Data + (longlong)*(int *)((longlong)&pFVar1[1].Data + 4) * 4)) {
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)&pFVar1[1].Data == *(int *)((longlong)&pFVar1[1].Data + 4)) {
    iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar1,(int *)((longlong)&pFVar1[1].Data + 4));
    *(int *)&pFVar1[1].Data = iVar4;
  }
  iVar4 = *(int *)&pFVar1[1].Data;
  *(int *)&pFVar1[1].Data = *(int *)&pFVar1[1].Data + 1;
  piVar5 = ::operator_new(4,pFVar1->Data + (longlong)iVar4 * 4);
  *piVar5 = param_2->Value;
  return;
}

// Call @ 14711a2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_A::SetUp'::__l2::<lambda_2>,bool,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  initializer_list<int_const_> *piVar1;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar2;
  longlong lVar3;
  initializer_list<int_const_> *piVar4;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar5;
  undefined1 auStack_118 [32];
  undefined1 uStack_f8;
  FArchetypeGroup_MultiLevelQueryBase *pFStack_f0;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_e8;
  undefined1 auStack_d8 [32];
  initializer_list<int_const_> iStack_b8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_a8;
  initializer_list<int_const_> iStack_98;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_88;
  int aiStack_78 [20];
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  aiStack_78[0] = 2;
  aiStack_78[1] = 3;
  aiStack_78[2] = 0;
  aiStack_78[3] = 1;
  aiStack_78[4] = 6;
  aiStack_78[5] = 7;
  aiStack_78[6] = 4;
  aiStack_78[7] = 5;
  aiStack_78[8] = 10;
  aiStack_78[9] = 0xb;
  aiStack_78[10] = 8;
  aiStack_78[0xb] = 9;
  aiStack_78[0xc] = 0xe;
  aiStack_78[0xd] = 0xf;
  aiStack_78[0xe] = 0xc;
  aiStack_78[0xf] = 0xd;
  piVar1 = std::initializer_list<int_const_>::initializer_list<int_const_>
                     (&iStack_98,aiStack_78,aiStack_78 + 0x10);
  piVar4 = &iStack_b8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar1->_First;
    piVar1 = (initializer_list<int_const_> *)((longlong)&piVar1->_First + 1);
    piVar4 = (initializer_list<int_const_> *)((longlong)&piVar4->_First + 1);
  }
  TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
            (&TStack_e8,&iStack_b8);
  piVar2 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&iStack_88,&TStack_e8,
                      (TArray<int_const_,TSizedDefaultAllocator<32>_> *)auStack_d8);
  piVar5 = &iStack_a8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar5->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar2->_First + 1);
    piVar5 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar5->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (auStack_d8 + 8),&iStack_a8);
  _vector_destructor_iterator_
            (&TStack_e8,0x10,1,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  pFStack_f0 = *(FArchetypeGroup_MultiLevelQueryBase **)param_1;
  uStack_f8 = Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test2
                        (pFStack_f0,param_2,
                         (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                          *)(auStack_d8 + 8));
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (auStack_d8 + 8));
  return (bool)uStack_f8;
}

// Call @ 14711a2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_B::SetUp'::__l2::<lambda_2>,bool,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  initializer_list<int_const_> *piVar1;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar2;
  longlong lVar3;
  initializer_list<int_const_> *piVar4;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar5;
  undefined1 auStack_118 [32];
  undefined1 uStack_f8;
  FArchetypeGroup_MultiLevelQueryBase *pFStack_f0;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_e8;
  undefined1 auStack_d8 [32];
  initializer_list<int_const_> iStack_b8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_a8;
  initializer_list<int_const_> iStack_98;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_88;
  int aiStack_78 [20];
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  aiStack_78[0] = 2;
  aiStack_78[1] = 1;
  aiStack_78[2] = 0;
  aiStack_78[3] = 4;
  aiStack_78[4] = 3;
  aiStack_78[5] = 7;
  aiStack_78[6] = 6;
  aiStack_78[7] = 5;
  aiStack_78[8] = 9;
  aiStack_78[9] = 8;
  aiStack_78[10] = 0xc;
  aiStack_78[0xb] = 0xb;
  aiStack_78[0xc] = 10;
  aiStack_78[0xd] = 0xe;
  aiStack_78[0xe] = 0xd;
  aiStack_78[0xf] = 0xf;
  piVar1 = std::initializer_list<int_const_>::initializer_list<int_const_>
                     (&iStack_98,aiStack_78,aiStack_78 + 0x10);
  piVar4 = &iStack_b8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar1->_First;
    piVar1 = (initializer_list<int_const_> *)((longlong)&piVar1->_First + 1);
    piVar4 = (initializer_list<int_const_> *)((longlong)&piVar4->_First + 1);
  }
  TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
            (&TStack_e8,&iStack_b8);
  piVar2 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&iStack_88,&TStack_e8,
                      (TArray<int_const_,TSizedDefaultAllocator<32>_> *)auStack_d8);
  piVar5 = &iStack_a8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar5->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar2->_First + 1);
    piVar5 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar5->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (auStack_d8 + 8),&iStack_a8);
  _vector_destructor_iterator_
            (&TStack_e8,0x10,1,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  pFStack_f0 = *(FArchetypeGroup_MultiLevelQueryBase **)param_1;
  uStack_f8 = Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test2
                        (pFStack_f0,param_2,
                         (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                          *)(auStack_d8 + 8));
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (auStack_d8 + 8));
  return (bool)uStack_f8;
}

// Call @ 14711a300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001471021ce) */
/* WARNING: Removing unreachable block (ram,0x00014710236a) */
/* WARNING: Removing unreachable block (ram,0x000147102512) */
/* WARNING: Removing unreachable block (ram,0x0001471026c0) */
/* WARNING: Removing unreachable block (ram,0x00014710286e) */
/* WARNING: Removing unreachable block (ram,0x000147102a1c) */
/* WARNING: Removing unreachable block (ram,0x000147102bca) */
/* WARNING: Removing unreachable block (ram,0x000147102d78) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::SetUp'::__l2::<lambda_2>,bool,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar4;
  longlong lVar5;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar6;
  undefined1 auStack_428 [32];
  undefined8 uStack_408;
  longlong lStack_400;
  undefined1 uStack_3f8;
  uint uStack_3f4;
  undefined4 uStack_3f0;
  uint uStack_3ec;
  undefined4 uStack_3e8;
  uint uStack_3e4;
  undefined4 uStack_3e0;
  uint uStack_3dc;
  undefined4 uStack_3d8;
  uint uStack_3d4;
  undefined4 uStack_3d0;
  uint uStack_3cc;
  undefined4 uStack_3c8;
  uint uStack_3c4;
  undefined4 uStack_3c0;
  uint uStack_3bc;
  undefined4 uStack_3b8;
  int iStack_3b4;
  int iStack_3b0;
  int iStack_3ac;
  int iStack_3a8;
  int iStack_3a4;
  int iStack_3a0;
  int iStack_39c;
  int iStack_398;
  int iStack_394;
  int iStack_390;
  int iStack_38c;
  int iStack_388;
  int iStack_384;
  int iStack_380;
  int iStack_37c;
  int iStack_378;
  undefined8 *puStack_370;
  longlong *plStack_368;
  longlong *plStack_360;
  longlong *plStack_358;
  longlong *plStack_350;
  longlong *plStack_348;
  longlong *plStack_340;
  longlong *plStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  int *piStack_2d0;
  int *piStack_2c8;
  int *piStack_2c0;
  int *piStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  longlong lStack_2a8;
  longlong lStack_2a0;
  undefined8 *puStack_298;
  int *piStack_290;
  int *piStack_288;
  int *piStack_280;
  int *piStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong lStack_268;
  longlong lStack_260;
  undefined8 *puStack_258;
  int *piStack_250;
  int *piStack_248;
  int *piStack_240;
  int *piStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong lStack_228;
  longlong lStack_220;
  undefined8 *puStack_218;
  int *piStack_210;
  int *piStack_208;
  int *piStack_200;
  int *piStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong lStack_1e8;
  longlong lStack_1e0;
  undefined8 *puStack_1d8;
  int *piStack_1d0;
  int *piStack_1c8;
  int *piStack_1c0;
  int *piStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong lStack_1a8;
  longlong lStack_1a0;
  undefined8 *puStack_198;
  int *piStack_190;
  int *piStack_188;
  int *piStack_180;
  int *piStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong lStack_168;
  longlong lStack_160;
  undefined8 *puStack_158;
  int *piStack_150;
  int *piStack_148;
  int *piStack_140;
  int *piStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong lStack_128;
  longlong lStack_120;
  undefined8 *puStack_118;
  int *piStack_110;
  int *piStack_108;
  int *piStack_100;
  int *piStack_f8;
  FArchetypeGroup_MultiLevelQueryBase *pFStack_f0;
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> TStack_e8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_d8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_c8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_b8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_a8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_98;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_88;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_78;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_68;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_58;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_48;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_38;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_428;
  puStack_370 = (undefined8 *)(*(longlong *)param_1 + 0x420);
  uStack_3f0 = 1;
  uStack_3f4 = (uint)(0 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_3f4 == 0) {
    uStack_2f0 = 0;
    uStack_2ec = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_400 = (longlong)*(int *)(puStack_370 + 1);
    uStack_408 = 0;
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
  puStack_330 = (undefined8 *)*puStack_370;
  puStack_2e8 = puStack_330;
  puStack_2e0 = puStack_330;
  puStack_2d8 = puStack_330;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_b8.AllocatorInstance);
  iStack_3b4 = *(int *)(puStack_330 + 1);
  piStack_2d0 = (int *)*puStack_330;
  iStack_3b0 = iStack_3b4;
  piStack_2c8 = piStack_2d0;
  piStack_2c0 = piStack_2d0;
  piStack_2b8 = piStack_2d0;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_b8,piStack_2d0,iStack_3b4,0);
  plStack_368 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_3e8 = 1;
  uStack_3ec = (uint)(2 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_3ec == 0) {
    uStack_2b0 = 0;
    uStack_2ac = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_400 = (longlong)(int)plStack_368[1];
    uStack_408 = 2;
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
  lStack_2a8 = *plStack_368;
  puStack_328 = (undefined8 *)(lStack_2a8 + 0x20);
  lStack_2a0 = lStack_2a8;
  puStack_298 = puStack_328;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_a8.AllocatorInstance);
  iStack_3ac = *(int *)(puStack_328 + 1);
  piStack_290 = (int *)*puStack_328;
  iStack_3a8 = iStack_3ac;
  piStack_288 = piStack_290;
  piStack_280 = piStack_290;
  piStack_278 = piStack_290;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_a8,piStack_290,iStack_3ac,0);
  plStack_360 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_3e0 = 1;
  uStack_3e4 = (uint)(1 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_3e4 == 0) {
    uStack_270 = 0;
    uStack_26c = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_400 = (longlong)(int)plStack_360[1];
    uStack_408 = 1;
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
  lStack_268 = *plStack_360;
  puStack_320 = (undefined8 *)(lStack_268 + 0x10);
  lStack_260 = lStack_268;
  puStack_258 = puStack_320;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_98.AllocatorInstance);
  iStack_3a4 = *(int *)(puStack_320 + 1);
  piStack_250 = (int *)*puStack_320;
  iStack_3a0 = iStack_3a4;
  piStack_248 = piStack_250;
  piStack_240 = piStack_250;
  piStack_238 = piStack_250;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_98,piStack_250,iStack_3a4,0);
  plStack_358 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_3d8 = 1;
  uStack_3dc = (uint)(4 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_3dc == 0) {
    uStack_230 = 0;
    uStack_22c = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_400 = (longlong)(int)plStack_358[1];
    uStack_408 = 4;
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
  lStack_228 = *plStack_358;
  puStack_318 = (undefined8 *)(lStack_228 + 0x40);
  lStack_220 = lStack_228;
  puStack_218 = puStack_318;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_88.AllocatorInstance);
  iStack_39c = *(int *)(puStack_318 + 1);
  piStack_210 = (int *)*puStack_318;
  iStack_398 = iStack_39c;
  piStack_208 = piStack_210;
  piStack_200 = piStack_210;
  piStack_1f8 = piStack_210;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_88,piStack_210,iStack_39c,0);
  plStack_350 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_3d0 = 1;
  uStack_3d4 = (uint)(3 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_3d4 == 0) {
    uStack_1f0 = 0;
    uStack_1ec = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_400 = (longlong)(int)plStack_350[1];
    uStack_408 = 3;
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
  lStack_1e8 = *plStack_350;
  puStack_310 = (undefined8 *)(lStack_1e8 + 0x30);
  lStack_1e0 = lStack_1e8;
  puStack_1d8 = puStack_310;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_78.AllocatorInstance);
  iStack_394 = *(int *)(puStack_310 + 1);
  piStack_1d0 = (int *)*puStack_310;
  iStack_390 = iStack_394;
  piStack_1c8 = piStack_1d0;
  piStack_1c0 = piStack_1d0;
  piStack_1b8 = piStack_1d0;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_78,piStack_1d0,iStack_394,0);
  plStack_348 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_3c8 = 1;
  uStack_3cc = (uint)(5 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_3cc == 0) {
    uStack_1b0 = 0;
    uStack_1ac = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_400 = (longlong)(int)plStack_348[1];
    uStack_408 = 5;
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
  lStack_1a8 = *plStack_348;
  puStack_308 = (undefined8 *)(lStack_1a8 + 0x50);
  lStack_1a0 = lStack_1a8;
  puStack_198 = puStack_308;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_68.AllocatorInstance);
  iStack_38c = *(int *)(puStack_308 + 1);
  piStack_190 = (int *)*puStack_308;
  iStack_388 = iStack_38c;
  piStack_188 = piStack_190;
  piStack_180 = piStack_190;
  piStack_178 = piStack_190;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_68,piStack_190,iStack_38c,0);
  plStack_340 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_3c0 = 1;
  uStack_3c4 = (uint)(6 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_3c4 == 0) {
    uStack_170 = 0;
    uStack_16c = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_400 = (longlong)(int)plStack_340[1];
    uStack_408 = 6;
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
  lStack_168 = *plStack_340;
  puStack_300 = (undefined8 *)(lStack_168 + 0x60);
  lStack_160 = lStack_168;
  puStack_158 = puStack_300;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_58.AllocatorInstance);
  iStack_384 = *(int *)(puStack_300 + 1);
  piStack_150 = (int *)*puStack_300;
  iStack_380 = iStack_384;
  piStack_148 = piStack_150;
  piStack_140 = piStack_150;
  piStack_138 = piStack_150;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_58,piStack_150,iStack_384,0);
  plStack_338 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_3b8 = 1;
  uStack_3bc = (uint)(7 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_3bc == 0) {
    uStack_130 = 0;
    uStack_12c = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_400 = (longlong)(int)plStack_338[1];
    uStack_408 = 7;
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
  lStack_128 = *plStack_338;
  puStack_2f8 = (undefined8 *)(lStack_128 + 0x70);
  lStack_120 = lStack_128;
  puStack_118 = puStack_2f8;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_48.AllocatorInstance);
  iStack_37c = *(int *)(puStack_2f8 + 1);
  piStack_110 = (int *)*puStack_2f8;
  iStack_378 = iStack_37c;
  piStack_108 = piStack_110;
  piStack_100 = piStack_110;
  piStack_f8 = piStack_110;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_48,piStack_110,iStack_37c,0);
  piVar4 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&iStack_c8,&TStack_b8,&TStack_38);
  piVar6 = &iStack_d8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&piVar6->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar4->_First + 1);
    piVar6 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar6->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (&TStack_e8,&iStack_d8);
  _vector_destructor_iterator_
            (&TStack_b8,0x10,8,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  pFStack_f0 = *(FArchetypeGroup_MultiLevelQueryBase **)param_1;
  uStack_3f8 = Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test1(pFStack_f0,param_2,&TStack_e8)
  ;
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>(&TStack_e8);
  return (bool)uStack_3f8;
}

// Call @ 14711a310

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp'::__l2::<lambda_2>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x90) = 1;
  return;
}

// Call @ 14711a320

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest'::__l3::<lambda_2>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  FMassEntityManager *this;
  UScriptStruct *pUVar1;
  FMassEntityHandle FVar2;
  undefined1 auStack_18 [24];
  
  this = TSharedPtr<FMassEntityManager,1>::operator->(param_1);
  pUVar1 = FTestFragment_Int::StaticStruct();
  FVar2 = FMassExecutionContext::GetEntity(param_2,(int)auStack_18);
  FMassEntityManager::AddFragmentToEntity(this,*(FMassEntityHandle *)FVar2,pUVar1);
  return;
}

// Call @ 14711a330

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassMultiThreadingTest::FMTBasic::SetUp'::__l7::<lambda_2>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int iVar1;
  int iVar2;
  FTestFragment_Int *pFVar3;
  FTestFragment_Int *pFVar4;
  FTestFragment_Float *pFVar5;
  int iStack_48;
  TArrayView<FTestFragment_Int_const_,int> TStack_30;
  TArrayView<FTestFragment_Float,int> aTStack_20 [2];
  
  FMassExecutionContext::GetFragmentView<FTestFragment_Int>(param_2,&TStack_30);
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Float>(param_2,aTStack_20);
  iStack_48 = 0;
  while( true ) {
    iVar2 = FMassExecutionContext::GetNumEntities(param_2);
    if (iVar2 <= iStack_48) break;
    pFVar3 = TArrayView<FTestFragment_Int_const_,int>::operator[](&TStack_30,iStack_48);
    pFVar4 = TArrayView<FTestFragment_Int_const_,int>::operator[](&TStack_30,iStack_48);
    iVar2 = pFVar3->Value;
    iVar1 = pFVar4->Value;
    pFVar5 = TArrayView<FTestFragment_Float,int>::operator[](aTStack_20,iStack_48);
    pFVar5->Value = (float)(iVar2 * iVar1);
    iStack_48 = iStack_48 + 1;
  }
  return;
}

// Call @ 14711a340

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMassTestProcessorBase::SetUseParallelForEachEntityChunk'::__l7::<lambda_2>,void,FMassEntityManager_&,FMassExecutionContext_&>
::Call(void *param_1,FMassEntityManager *param_2,FMassExecutionContext *param_3)

{
  FMassEntityQuery::ForEachEntityChunk
            ((FMassEntityQuery *)(*(longlong *)param_1 + 0x140),param_3,
             (TFunction<void___cdecl(FMassExecutionContext_&)> *)(*(longlong *)param_1 + 0x110));
  return;
}

// Call @ 14711a350

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassQueryTest::FQueryTest_ExecutionLimiter::InstantTest'::__l10::<lambda_2>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  TArrayView<FTestFragment_Float,int> TStack_18;
  
  **(int **)param_1 = **(int **)param_1 + (param_2->EntityListView).ArrayNum;
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Float>(param_2,&TStack_18);
  uVar4 = 0;
  if (0 < (param_2->EntityListView).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < TStack_18.ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)((longlong)&(TStack_18.DataPtr)->Value + lVar5) = 0x41500000;
      lVar5 = lVar5 + 4;
    } while ((int)uVar4 < (param_2->EntityListView).ArrayNum);
  }
  return;
}

// Call @ 14711a360

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::FArchetypeGroup_SingleLevelQuery::InstantTest'::__l2::<lambda_3>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *this;
  TArrayView<FMassEntityHandle_const_,int> *this_00;
  FMassEntityHandle *pFVar1;
  TArrayView<FMassEntityHandle_const_,int> aTStack_20 [2];
  
  this = *(TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> **)param_1;
  this_00 = FMassExecutionContext::GetEntities(param_2,aTStack_20);
  pFVar1 = TArrayView<FMassEntityHandle_const_,int>::operator[](this_00,0);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Insert(this,pFVar1,0);
  return;
}

// Call @ 14711a370

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassEntityTest::FConstSharedFragment_ForEach::InstantTest'::__l2::<lambda_3>,void,FTestConstSharedFragment_Int_const_&>
::Call(void *param_1,FTestConstSharedFragment_Int *param_2)

{
  ForAnyElementType *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  
  pFVar1 = *(ForAnyElementType **)param_1;
  if ((pFVar1->Data <= param_2) &&
     (param_2 < pFVar1->Data + (longlong)*(int *)((longlong)&pFVar1[1].Data + 4) * 4)) {
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)&pFVar1[1].Data == *(int *)((longlong)&pFVar1[1].Data + 4)) {
    iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar1,(int *)((longlong)&pFVar1[1].Data + 4));
    *(int *)&pFVar1[1].Data = iVar4;
  }
  iVar4 = *(int *)&pFVar1[1].Data;
  *(int *)&pFVar1[1].Data = *(int *)&pFVar1[1].Data + 1;
  piVar5 = ::operator_new(4,pFVar1->Data + (longlong)iVar4 * 4);
  *piVar5 = param_2->Value;
  return;
}

// Call @ 14711a380

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassQueryTest::FQueryTest_ExecutionLimiter::InstantTest'::__l2::<lambda_3>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  TArrayView<FTestFragment_Float,int> TStack_18;
  
  **(int **)param_1 = **(int **)param_1 + (param_2->EntityListView).ArrayNum;
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Float>(param_2,&TStack_18);
  uVar4 = 0;
  if (0 < (param_2->EntityListView).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < TStack_18.ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)((longlong)&(TStack_18.DataPtr)->Value + lVar5) = 0x41500000;
      lVar5 = lVar5 + 4;
    } while ((int)uVar4 < (param_2->EntityListView).ArrayNum);
  }
  return;
}

// Call @ 14711a390

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassEntityTest::FSharedFragment_ForEach::InstantTest'::__l2::<lambda_3>,bool,FTestSharedFragment_Int_&>
::Call(void *param_1,FTestSharedFragment_Int *param_2)

{
  return 10 < param_2->Value;
}

// Call @ 14711a3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_A::SetUp'::__l2::<lambda_3>,bool,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  initializer_list<int_const_> *piVar1;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar2;
  longlong lVar3;
  initializer_list<int_const_> *piVar4;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar5;
  undefined1 auStack_118 [32];
  undefined1 uStack_f8;
  FArchetypeGroup_MultiLevelQueryBase *pFStack_f0;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_e8;
  undefined1 auStack_d8 [32];
  initializer_list<int_const_> iStack_b8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_a8;
  initializer_list<int_const_> iStack_98;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_88;
  int aiStack_78 [20];
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  aiStack_78[0] = 0xc;
  aiStack_78[1] = 0xd;
  aiStack_78[2] = 0xe;
  aiStack_78[3] = 0xf;
  aiStack_78[4] = 4;
  aiStack_78[5] = 5;
  aiStack_78[6] = 6;
  aiStack_78[7] = 7;
  aiStack_78[8] = 8;
  aiStack_78[9] = 9;
  aiStack_78[10] = 10;
  aiStack_78[0xb] = 0xb;
  aiStack_78[0xc] = 0;
  aiStack_78[0xd] = 1;
  aiStack_78[0xe] = 2;
  aiStack_78[0xf] = 3;
  piVar1 = std::initializer_list<int_const_>::initializer_list<int_const_>
                     (&iStack_98,aiStack_78,aiStack_78 + 0x10);
  piVar4 = &iStack_b8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar1->_First;
    piVar1 = (initializer_list<int_const_> *)((longlong)&piVar1->_First + 1);
    piVar4 = (initializer_list<int_const_> *)((longlong)&piVar4->_First + 1);
  }
  TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
            (&TStack_e8,&iStack_b8);
  piVar2 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&iStack_88,&TStack_e8,
                      (TArray<int_const_,TSizedDefaultAllocator<32>_> *)auStack_d8);
  piVar5 = &iStack_a8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar5->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar2->_First + 1);
    piVar5 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar5->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (auStack_d8 + 8),&iStack_a8);
  _vector_destructor_iterator_
            (&TStack_e8,0x10,1,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  pFStack_f0 = *(FArchetypeGroup_MultiLevelQueryBase **)param_1;
  uStack_f8 = Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test3
                        (pFStack_f0,param_2,
                         (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                          *)(auStack_d8 + 8));
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (auStack_d8 + 8));
  return (bool)uStack_f8;
}

// Call @ 14711a3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_B::SetUp'::__l2::<lambda_3>,bool,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  initializer_list<int_const_> *piVar1;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar2;
  longlong lVar3;
  initializer_list<int_const_> *piVar4;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar5;
  undefined1 auStack_118 [32];
  undefined1 uStack_f8;
  FArchetypeGroup_MultiLevelQueryBase *pFStack_f0;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_e8;
  undefined1 auStack_d8 [32];
  initializer_list<int_const_> iStack_b8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_a8;
  initializer_list<int_const_> iStack_98;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_88;
  int aiStack_78 [20];
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  aiStack_78[0] = 0xd;
  aiStack_78[1] = 0xe;
  aiStack_78[2] = 8;
  aiStack_78[3] = 9;
  aiStack_78[4] = 3;
  aiStack_78[5] = 4;
  aiStack_78[6] = 0xf;
  aiStack_78[7] = 10;
  aiStack_78[8] = 0xb;
  aiStack_78[9] = 0xc;
  aiStack_78[10] = 5;
  aiStack_78[0xb] = 6;
  aiStack_78[0xc] = 7;
  aiStack_78[0xd] = 0;
  aiStack_78[0xe] = 1;
  aiStack_78[0xf] = 2;
  piVar1 = std::initializer_list<int_const_>::initializer_list<int_const_>
                     (&iStack_98,aiStack_78,aiStack_78 + 0x10);
  piVar4 = &iStack_b8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar4->_First = *(undefined1 *)&piVar1->_First;
    piVar1 = (initializer_list<int_const_> *)((longlong)&piVar1->_First + 1);
    piVar4 = (initializer_list<int_const_> *)((longlong)&piVar4->_First + 1);
  }
  TArray<int_const_,TSizedDefaultAllocator<32>_>::TArray<int_const_,TSizedDefaultAllocator<32>_>
            (&TStack_e8,&iStack_b8);
  piVar2 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&iStack_88,&TStack_e8,
                      (TArray<int_const_,TSizedDefaultAllocator<32>_> *)auStack_d8);
  piVar5 = &iStack_a8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&piVar5->_First = *(undefined1 *)&piVar2->_First;
    piVar2 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar2->_First + 1);
    piVar5 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar5->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (auStack_d8 + 8),&iStack_a8);
  _vector_destructor_iterator_
            (&TStack_e8,0x10,1,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  pFStack_f0 = *(FArchetypeGroup_MultiLevelQueryBase **)param_1;
  uStack_f8 = Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test3
                        (pFStack_f0,param_2,
                         (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                          *)(auStack_d8 + 8));
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            ((TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             (auStack_d8 + 8));
  return (bool)uStack_f8;
}

// Call @ 14711a3c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::SetUp'::__l2::<lambda_3>,bool,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  bool bVar1;
  
  bVar1 = Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test2
                    (*(FArchetypeGroup_MultiLevelQueryBase **)param_1,param_2,
                     (TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                      *)(*(longlong *)param_1 + 0x420));
  return bVar1;
}

// Call @ 14711a3d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp'::__l2::<lambda_3>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x91) = 1;
  return;
}

// Call @ 14711a3e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassMultiThreadingTest::FMTBasic::SetUp'::__l8::<lambda_3>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  int iVar1;
  FTestFragment_Int *pFVar2;
  int iStack_28;
  int iStack_24;
  TArrayView<FTestFragment_Int,int> TStack_18;
  
  iStack_24 = 0;
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Int>(param_2,&TStack_18);
  iStack_28 = 0;
  while( true ) {
    iVar1 = FMassExecutionContext::GetNumEntities(param_2);
    if (iVar1 <= iStack_28) break;
    pFVar2 = TArrayView<FTestFragment_Int,int>::operator[](&TStack_18,iStack_28);
    pFVar2->Value = iStack_24;
    iStack_28 = iStack_28 + 1;
    iStack_24 = iStack_24 + 1;
  }
  return;
}

// Call @ 14711a3f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMassEntityTest::FSharedFragment_ForEach::InstantTest'::__l2::<lambda_4>,void,FTestSharedFragment_Int_&>
::Call(void *param_1,FTestSharedFragment_Int *param_2)

{
  ForAnyElementType *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  
  pFVar1 = *(ForAnyElementType **)param_1;
  if ((pFVar1->Data <= param_2) &&
     (param_2 < pFVar1->Data + (longlong)*(int *)((longlong)&pFVar1[1].Data + 4) * 4)) {
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)&pFVar1[1].Data == *(int *)((longlong)&pFVar1[1].Data + 4)) {
    iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar1,(int *)((longlong)&pFVar1[1].Data + 4));
    *(int *)&pFVar1[1].Data = iVar4;
  }
  iVar4 = *(int *)&pFVar1[1].Data;
  *(int *)&pFVar1[1].Data = *(int *)&pFVar1[1].Data + 1;
  piVar5 = ::operator_new(4,pFVar1->Data + (longlong)iVar4 * 4);
  *piVar5 = param_2->Value;
  return;
}

// Call @ 14711a400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014710430f) */
/* WARNING: Removing unreachable block (ram,0x0001471044b1) */
/* WARNING: Removing unreachable block (ram,0x000147104659) */
/* WARNING: Removing unreachable block (ram,0x000147104807) */
/* WARNING: Removing unreachable block (ram,0x0001471049b5) */
/* WARNING: Removing unreachable block (ram,0x000147104b63) */
/* WARNING: Removing unreachable block (ram,0x000147104d11) */
/* WARNING: Removing unreachable block (ram,0x000147104ebe) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::SetUp'::__l2::<lambda_4>,bool,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar4;
  longlong lVar5;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar6;
  undefined1 auStack_428 [32];
  undefined8 uStack_408;
  longlong lStack_400;
  undefined1 uStack_3f8;
  uint uStack_3f4;
  undefined4 uStack_3f0;
  uint uStack_3ec;
  undefined4 uStack_3e8;
  uint uStack_3e4;
  undefined4 uStack_3e0;
  uint uStack_3dc;
  undefined4 uStack_3d8;
  uint uStack_3d4;
  undefined4 uStack_3d0;
  uint uStack_3cc;
  undefined4 uStack_3c8;
  uint uStack_3c4;
  undefined4 uStack_3c0;
  uint uStack_3bc;
  undefined4 uStack_3b8;
  int iStack_3b4;
  int iStack_3b0;
  int iStack_3ac;
  int iStack_3a8;
  int iStack_3a4;
  int iStack_3a0;
  int iStack_39c;
  int iStack_398;
  int iStack_394;
  int iStack_390;
  int iStack_38c;
  int iStack_388;
  int iStack_384;
  int iStack_380;
  int iStack_37c;
  int iStack_378;
  longlong *plStack_370;
  longlong *plStack_368;
  longlong *plStack_360;
  longlong *plStack_358;
  longlong *plStack_350;
  longlong *plStack_348;
  longlong *plStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  longlong lStack_2e8;
  longlong lStack_2e0;
  undefined8 *puStack_2d8;
  int *piStack_2d0;
  int *piStack_2c8;
  int *piStack_2c0;
  int *piStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  longlong lStack_2a8;
  longlong lStack_2a0;
  undefined8 *puStack_298;
  int *piStack_290;
  int *piStack_288;
  int *piStack_280;
  int *piStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  longlong lStack_268;
  longlong lStack_260;
  undefined8 *puStack_258;
  int *piStack_250;
  int *piStack_248;
  int *piStack_240;
  int *piStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong lStack_228;
  longlong lStack_220;
  undefined8 *puStack_218;
  int *piStack_210;
  int *piStack_208;
  int *piStack_200;
  int *piStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong lStack_1e8;
  longlong lStack_1e0;
  undefined8 *puStack_1d8;
  int *piStack_1d0;
  int *piStack_1c8;
  int *piStack_1c0;
  int *piStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong lStack_1a8;
  longlong lStack_1a0;
  undefined8 *puStack_198;
  int *piStack_190;
  int *piStack_188;
  int *piStack_180;
  int *piStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong lStack_168;
  longlong lStack_160;
  undefined8 *puStack_158;
  int *piStack_150;
  int *piStack_148;
  int *piStack_140;
  int *piStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  int *piStack_110;
  int *piStack_108;
  int *piStack_100;
  int *piStack_f8;
  FArchetypeGroup_MultiLevelQueryBase *pFStack_f0;
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> TStack_e8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_d8;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_c8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_b8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_a8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_98;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_88;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_78;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_68;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_58;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_48;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_38;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_428;
  plStack_370 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_3f0 = 1;
  uStack_3f4 = (uint)(7 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_3f4 == 0) {
    uStack_2f0 = 0;
    uStack_2ec = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_400 = (longlong)(int)plStack_370[1];
    uStack_408 = 7;
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
  lStack_2e8 = *plStack_370;
  puStack_330 = (undefined8 *)(lStack_2e8 + 0x70);
  lStack_2e0 = lStack_2e8;
  puStack_2d8 = puStack_330;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_b8.AllocatorInstance);
  iStack_3b4 = *(int *)(puStack_330 + 1);
  piStack_2d0 = (int *)*puStack_330;
  iStack_3b0 = iStack_3b4;
  piStack_2c8 = piStack_2d0;
  piStack_2c0 = piStack_2d0;
  piStack_2b8 = piStack_2d0;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_b8,piStack_2d0,iStack_3b4,0);
  plStack_368 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_3e8 = 1;
  uStack_3ec = (uint)(6 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_3ec == 0) {
    uStack_2b0 = 0;
    uStack_2ac = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_400 = (longlong)(int)plStack_368[1];
    uStack_408 = 6;
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
  lStack_2a8 = *plStack_368;
  puStack_328 = (undefined8 *)(lStack_2a8 + 0x60);
  lStack_2a0 = lStack_2a8;
  puStack_298 = puStack_328;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_a8.AllocatorInstance);
  iStack_3ac = *(int *)(puStack_328 + 1);
  piStack_290 = (int *)*puStack_328;
  iStack_3a8 = iStack_3ac;
  piStack_288 = piStack_290;
  piStack_280 = piStack_290;
  piStack_278 = piStack_290;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_a8,piStack_290,iStack_3ac,0);
  plStack_360 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_3e0 = 1;
  uStack_3e4 = (uint)(5 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_3e4 == 0) {
    uStack_270 = 0;
    uStack_26c = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_400 = (longlong)(int)plStack_360[1];
    uStack_408 = 5;
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
  lStack_268 = *plStack_360;
  puStack_320 = (undefined8 *)(lStack_268 + 0x50);
  lStack_260 = lStack_268;
  puStack_258 = puStack_320;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_98.AllocatorInstance);
  iStack_3a4 = *(int *)(puStack_320 + 1);
  piStack_250 = (int *)*puStack_320;
  iStack_3a0 = iStack_3a4;
  piStack_248 = piStack_250;
  piStack_240 = piStack_250;
  piStack_238 = piStack_250;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_98,piStack_250,iStack_3a4,0);
  plStack_358 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_3d8 = 1;
  uStack_3dc = (uint)(4 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_3dc == 0) {
    uStack_230 = 0;
    uStack_22c = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_400 = (longlong)(int)plStack_358[1];
    uStack_408 = 4;
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
  lStack_228 = *plStack_358;
  puStack_318 = (undefined8 *)(lStack_228 + 0x40);
  lStack_220 = lStack_228;
  puStack_218 = puStack_318;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_88.AllocatorInstance);
  iStack_39c = *(int *)(puStack_318 + 1);
  piStack_210 = (int *)*puStack_318;
  iStack_398 = iStack_39c;
  piStack_208 = piStack_210;
  piStack_200 = piStack_210;
  piStack_1f8 = piStack_210;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_88,piStack_210,iStack_39c,0);
  plStack_350 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_3d0 = 1;
  uStack_3d4 = (uint)(3 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_3d4 == 0) {
    uStack_1f0 = 0;
    uStack_1ec = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_400 = (longlong)(int)plStack_350[1];
    uStack_408 = 3;
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
  lStack_1e8 = *plStack_350;
  puStack_310 = (undefined8 *)(lStack_1e8 + 0x30);
  lStack_1e0 = lStack_1e8;
  puStack_1d8 = puStack_310;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_78.AllocatorInstance);
  iStack_394 = *(int *)(puStack_310 + 1);
  piStack_1d0 = (int *)*puStack_310;
  iStack_390 = iStack_394;
  piStack_1c8 = piStack_1d0;
  piStack_1c0 = piStack_1d0;
  piStack_1b8 = piStack_1d0;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_78,piStack_1d0,iStack_394,0);
  plStack_348 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_3c8 = 1;
  uStack_3cc = (uint)(2 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_3cc == 0) {
    uStack_1b0 = 0;
    uStack_1ac = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_400 = (longlong)(int)plStack_348[1];
    uStack_408 = 2;
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
  lStack_1a8 = *plStack_348;
  puStack_308 = (undefined8 *)(lStack_1a8 + 0x20);
  lStack_1a0 = lStack_1a8;
  puStack_198 = puStack_308;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_68.AllocatorInstance);
  iStack_38c = *(int *)(puStack_308 + 1);
  piStack_190 = (int *)*puStack_308;
  iStack_388 = iStack_38c;
  piStack_188 = piStack_190;
  piStack_180 = piStack_190;
  piStack_178 = piStack_190;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_68,piStack_190,iStack_38c,0);
  plStack_340 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_3c0 = 1;
  uStack_3c4 = (uint)(1 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_3c4 == 0) {
    uStack_170 = 0;
    uStack_16c = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_400 = (longlong)(int)plStack_340[1];
    uStack_408 = 1;
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
  lStack_168 = *plStack_340;
  puStack_300 = (undefined8 *)(lStack_168 + 0x10);
  lStack_160 = lStack_168;
  puStack_158 = puStack_300;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_58.AllocatorInstance);
  iStack_384 = *(int *)(puStack_300 + 1);
  piStack_150 = (int *)*puStack_300;
  iStack_380 = iStack_384;
  piStack_148 = piStack_150;
  piStack_140 = piStack_150;
  piStack_138 = piStack_150;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_58,piStack_150,iStack_384,0);
  puStack_338 = (undefined8 *)(*(longlong *)param_1 + 0x420);
  uStack_3b8 = 1;
  uStack_3bc = (uint)(0 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_3bc == 0) {
    uStack_130 = 0;
    uStack_12c = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_400 = (longlong)*(int *)(puStack_338 + 1);
    uStack_408 = 0;
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
  puStack_2f8 = (undefined8 *)*puStack_338;
  puStack_128 = puStack_2f8;
  puStack_120 = puStack_2f8;
  puStack_118 = puStack_2f8;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_48.AllocatorInstance);
  iStack_37c = *(int *)(puStack_2f8 + 1);
  piStack_110 = (int *)*puStack_2f8;
  iStack_378 = iStack_37c;
  piStack_108 = piStack_110;
  piStack_100 = piStack_110;
  piStack_f8 = piStack_110;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_48,piStack_110,iStack_37c,0);
  piVar4 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&iStack_c8,&TStack_b8,&TStack_38);
  piVar6 = &iStack_d8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&piVar6->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar4->_First + 1);
    piVar6 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar6->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (&TStack_e8,&iStack_d8);
  _vector_destructor_iterator_
            (&TStack_b8,0x10,8,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  pFStack_f0 = *(FArchetypeGroup_MultiLevelQueryBase **)param_1;
  uStack_3f8 = Mass::Test::FArchetypeGroup_MultiLevelQueryBase::Test3(pFStack_f0,param_2,&TStack_e8)
  ;
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>(&TStack_e8);
  return (bool)uStack_3f8;
}

// Call @ 14711a410

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp'::__l2::<lambda_4>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x92) = 1;
  return;
}

// Call @ 14711a420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::Observers::FObserverChangingComposition_Sync::InstantTest'::__l7::<lambda_4>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  TArrayView<FMassEntityHandle_const_,int> *pTVar1;
  UScriptStruct *pUVar2;
  TArrayView<FMassArchetypeEntityCollection,int> *pTVar3;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar4;
  longlong lVar5;
  undefined1 *puVar6;
  TArrayView<FMassEntityHandle_const_,int> *pTVar7;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar8;
  undefined1 *puVar9;
  undefined1 auStack_138 [32];
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTStack_118;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTStack_110;
  FMassEntityManager *pFStack_108;
  TArrayView<FMassEntityHandle_const_,int> TStack_f8;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> TStack_c8;
  FMassArchetypeEntityCollection FStack_b8;
  TArrayView<FMassEntityHandle_const_,int> TStack_90;
  TArrayView<FMassArchetypeEntityCollection_const_,int> TStack_80;
  TArrayView<FMassArchetypeEntityCollection,int> TStack_70;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> TStack_60;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> TStack_40;
  ulonglong uStack_20;
  
  uStack_20 = __security_cookie.value ^ (ulonglong)auStack_138;
  pTVar1 = FMassExecutionContext::GetEntities(param_2,&TStack_90);
  pTVar7 = &TStack_f8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pTVar7->DataPtr = *(undefined1 *)&pTVar1->DataPtr;
    pTVar1 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar1->DataPtr + 1);
    pTVar7 = (TArrayView<FMassEntityHandle_const_,int> *)((longlong)&pTVar7->DataPtr + 1);
  }
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&FStack_b8,(FMassArchetypeHandle *)((longlong)param_1 + 0x10),&TStack_f8,NoDuplicates);
  pFStack_108 = TSharedPtr<FMassEntityManager,1>::operator->(param_1);
  pTVar8 = &TStack_60;
  for (lVar5 = 0x20; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)pTVar8 = 0;
    pTVar8 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)&pTVar8->field_0x1;
  }
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>(&TStack_60)
  ;
  pUVar2 = FTestFragment_Int::StaticStruct();
  pTStack_110 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                ::
                TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                          (&TStack_40,pUVar2);
  pTStack_118 = &TStack_80;
  pTVar3 = MakeArrayView<FMassArchetypeEntityCollection>(&TStack_70,&FStack_b8,1);
  pTVar4 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int><TArrayView<FMassArchetypeEntityCollection,int>,TArrayView<FMassArchetypeEntityCollection,int>_>
                     (pTStack_118,pTVar3);
  puVar6 = auStack_e8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar4->DataPtr + 1);
    puVar6 = puVar6 + 1;
  }
  puVar6 = auStack_e8;
  puVar9 = auStack_d8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar6 = auStack_d8;
  pTVar4 = &TStack_c8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&pTVar4->DataPtr = *puVar6;
    puVar6 = puVar6 + 1;
    pTVar4 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar4->DataPtr + 1);
  }
  FMassEntityManager::BatchChangeFragmentCompositionForEntities
            (pFStack_108,&TStack_c8,pTStack_110,&TStack_60);
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
            (&TStack_40);
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
  ~TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
            (&TStack_60);
  FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&FStack_b8);
  return;
}

// Call @ 14711a430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147105486) */
/* WARNING: Removing unreachable block (ram,0x0001471055dd) */
/* WARNING: Removing unreachable block (ram,0x00014710572e) */
/* WARNING: Removing unreachable block (ram,0x00014710586d) */
/* WARNING: Removing unreachable block (ram,0x000147105a1b) */
/* WARNING: Removing unreachable block (ram,0x000147105bc9) */
/* WARNING: Removing unreachable block (ram,0x000147105d77) */
/* WARNING: Removing unreachable block (ram,0x000147105f25) */
/* WARNING: Removing unreachable block (ram,0x0001471060d2) */
/* WARNING: Removing unreachable block (ram,0x00014710627d) */
/* WARNING: Removing unreachable block (ram,0x000147106434) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::FArchetypeGroup_MultiLevelQuery_Complex::SetUp'::__l2::<lambda_5>,bool,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar4;
  longlong lVar5;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *piVar6;
  undefined1 auStack_538 [32];
  undefined8 uStack_518;
  longlong lStack_510;
  undefined1 uStack_508;
  uint uStack_504;
  undefined4 uStack_500;
  uint uStack_4fc;
  undefined4 uStack_4f8;
  uint uStack_4f4;
  undefined4 uStack_4f0;
  uint uStack_4ec;
  undefined4 uStack_4e8;
  uint uStack_4e4;
  undefined4 uStack_4e0;
  uint uStack_4dc;
  undefined4 uStack_4d8;
  uint uStack_4d4;
  undefined4 uStack_4d0;
  uint uStack_4cc;
  undefined4 uStack_4c8;
  uint uStack_4c4;
  undefined4 uStack_4c0;
  uint uStack_4bc;
  undefined4 uStack_4b8;
  uint uStack_4b4;
  undefined4 uStack_4b0;
  uint uStack_4ac;
  uint uStack_4a8;
  uint uStack_4a4;
  int iStack_4a0;
  int iStack_49c;
  int iStack_498;
  int iStack_494;
  int iStack_490;
  int iStack_48c;
  int iStack_488;
  int iStack_484;
  int iStack_480;
  int iStack_47c;
  int iStack_478;
  int iStack_474;
  int iStack_470;
  int iStack_46c;
  int iStack_468;
  int iStack_464;
  longlong *plStack_460;
  undefined8 *puStack_458;
  longlong *plStack_450;
  longlong *plStack_448;
  longlong *plStack_440;
  longlong *plStack_438;
  longlong *plStack_430;
  longlong *plStack_428;
  undefined8 *puStack_420;
  longlong *plStack_418;
  longlong *plStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  longlong lStack_3c0;
  longlong lStack_3b8;
  uint *puStack_3b0;
  FMassEntityQuery *pFStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  uint *puStack_398;
  uint *puStack_390;
  uint *puStack_388;
  FMassEntityQuery *pFStack_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  longlong lStack_370;
  longlong lStack_368;
  uint *puStack_360;
  FMassEntityQuery *pFStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  longlong lStack_348;
  longlong lStack_340;
  undefined8 *puStack_338;
  int *piStack_330;
  int *piStack_328;
  int *piStack_320;
  int *piStack_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  longlong lStack_308;
  longlong lStack_300;
  undefined8 *puStack_2f8;
  int *piStack_2f0;
  int *piStack_2e8;
  int *piStack_2e0;
  int *piStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  longlong lStack_2c8;
  longlong lStack_2c0;
  undefined8 *puStack_2b8;
  int *piStack_2b0;
  int *piStack_2a8;
  int *piStack_2a0;
  int *piStack_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  longlong lStack_288;
  longlong lStack_280;
  undefined8 *puStack_278;
  int *piStack_270;
  int *piStack_268;
  int *piStack_260;
  int *piStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  longlong lStack_248;
  longlong lStack_240;
  undefined8 *puStack_238;
  int *piStack_230;
  int *piStack_228;
  int *piStack_220;
  int *piStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  int *piStack_1f0;
  int *piStack_1e8;
  int *piStack_1e0;
  int *piStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong lStack_1c8;
  longlong lStack_1c0;
  undefined8 *puStack_1b8;
  int *piStack_1b0;
  int *piStack_1a8;
  int *piStack_1a0;
  int *piStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong lStack_188;
  longlong lStack_180;
  undefined8 *puStack_178;
  int *piStack_170;
  int *piStack_168;
  int *piStack_160;
  int *piStack_158;
  FArchetypeGroup_MultiLevelQueryBase *pFStack_150;
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> TStack_148;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_138;
  initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> iStack_128;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_118;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_108;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_f8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_e8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_d8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_c8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_b8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_a8;
  TArray<int_const_,TSizedDefaultAllocator<32>_> TStack_98;
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)> TStack_88;
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)> TStack_58;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_538;
  FMassEntityQuery::ResetGrouping((FMassEntityQuery *)(*(longlong *)param_1 + 0xb0));
  pFStack_3a8 = (FMassEntityQuery *)(*(longlong *)param_1 + 0xb0);
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)><UE::Mass::Test::DescendingGroupSorter::<lambda>_&>
            (&TStack_88,&Mass::Test::DescendingGroupSorter);
  plStack_460 = (longlong *)(*(longlong *)param_1 + 0x90);
  uStack_500 = 1;
  uStack_504 = (uint)(2 < *(int *)(*(longlong *)param_1 + 0x98));
  if (uStack_504 == 0) {
    uStack_3c8 = 0;
    uStack_3c4 = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_510 = (longlong)(int)plStack_460[1];
    uStack_518 = 2;
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
  lStack_3c0 = *plStack_460;
  puStack_3b0 = (uint *)(lStack_3c0 + 8);
  uStack_4ac = *puStack_3b0;
  lStack_3b8 = lStack_3c0;
  FMassEntityQuery::GroupBy(pFStack_3a8,(FArchetypeGroupType)uStack_4ac,&TStack_88);
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
  ~TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>(&TStack_88);
  pFStack_380 = (FMassEntityQuery *)(*(longlong *)param_1 + 0xb0);
  puStack_458 = (undefined8 *)(*(longlong *)param_1 + 0x90);
  uStack_4f8 = 1;
  uStack_4fc = (uint)(0 < *(int *)(*(longlong *)param_1 + 0x98));
  if (uStack_4fc == 0) {
    uStack_3a0 = 0;
    uStack_39c = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_510 = (longlong)*(int *)(puStack_458 + 1);
    uStack_518 = 0;
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
  puStack_398 = (uint *)*puStack_458;
  uStack_4a8 = *puStack_398;
  puStack_390 = puStack_398;
  puStack_388 = puStack_398;
  FMassEntityQuery::GroupBy(pFStack_380,(FArchetypeGroupType)uStack_4a8);
  pFStack_358 = (FMassEntityQuery *)(*(longlong *)param_1 + 0xb0);
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)><UE::Mass::Test::DescendingGroupSorter::<lambda>_&>
            (&TStack_58,&Mass::Test::DescendingGroupSorter);
  plStack_450 = (longlong *)(*(longlong *)param_1 + 0x90);
  uStack_4f0 = 1;
  uStack_4f4 = (uint)(1 < *(int *)(*(longlong *)param_1 + 0x98));
  if (uStack_4f4 == 0) {
    uStack_378 = 0;
    uStack_374 = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_510 = (longlong)(int)plStack_450[1];
    uStack_518 = 1;
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
  lStack_370 = *plStack_450;
  puStack_360 = (uint *)(lStack_370 + 4);
  uStack_4a4 = *puStack_360;
  lStack_368 = lStack_370;
  FMassEntityQuery::GroupBy(pFStack_358,(FArchetypeGroupType)uStack_4a4,&TStack_58);
  TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>::
  ~TFunction<bool___cdecl(UE::Mass::FArchetypeGroupID,UE::Mass::FArchetypeGroupID)>(&TStack_58);
  plStack_448 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_4e8 = 1;
  uStack_4ec = (uint)(6 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_4ec == 0) {
    uStack_350 = 0;
    uStack_34c = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_510 = (longlong)(int)plStack_448[1];
    uStack_518 = 6;
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
  lStack_348 = *plStack_448;
  puStack_408 = (undefined8 *)(lStack_348 + 0x60);
  lStack_340 = lStack_348;
  puStack_338 = puStack_408;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_118.AllocatorInstance);
  iStack_4a0 = *(int *)(puStack_408 + 1);
  piStack_330 = (int *)*puStack_408;
  iStack_49c = iStack_4a0;
  piStack_328 = piStack_330;
  piStack_320 = piStack_330;
  piStack_318 = piStack_330;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_118,piStack_330,iStack_4a0,0);
  plStack_440 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_4e0 = 1;
  uStack_4e4 = (uint)(7 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_4e4 == 0) {
    uStack_310 = 0;
    uStack_30c = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_510 = (longlong)(int)plStack_440[1];
    uStack_518 = 7;
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
  lStack_308 = *plStack_440;
  puStack_400 = (undefined8 *)(lStack_308 + 0x70);
  lStack_300 = lStack_308;
  puStack_2f8 = puStack_400;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_108.AllocatorInstance);
  iStack_498 = *(int *)(puStack_400 + 1);
  piStack_2f0 = (int *)*puStack_400;
  iStack_494 = iStack_498;
  piStack_2e8 = piStack_2f0;
  piStack_2e0 = piStack_2f0;
  piStack_2d8 = piStack_2f0;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_108,piStack_2f0,iStack_498,0);
  plStack_438 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_4d8 = 1;
  uStack_4dc = (uint)(4 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_4dc == 0) {
    uStack_2d0 = 0;
    uStack_2cc = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_510 = (longlong)(int)plStack_438[1];
    uStack_518 = 4;
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
  lStack_2c8 = *plStack_438;
  puStack_3f8 = (undefined8 *)(lStack_2c8 + 0x40);
  lStack_2c0 = lStack_2c8;
  puStack_2b8 = puStack_3f8;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_f8.AllocatorInstance);
  iStack_490 = *(int *)(puStack_3f8 + 1);
  piStack_2b0 = (int *)*puStack_3f8;
  iStack_48c = iStack_490;
  piStack_2a8 = piStack_2b0;
  piStack_2a0 = piStack_2b0;
  piStack_298 = piStack_2b0;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_f8,piStack_2b0,iStack_490,0);
  plStack_430 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_4d0 = 1;
  uStack_4d4 = (uint)(3 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_4d4 == 0) {
    uStack_290 = 0;
    uStack_28c = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_510 = (longlong)(int)plStack_430[1];
    uStack_518 = 3;
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
  lStack_288 = *plStack_430;
  puStack_3f0 = (undefined8 *)(lStack_288 + 0x30);
  lStack_280 = lStack_288;
  puStack_278 = puStack_3f0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_e8.AllocatorInstance);
  iStack_488 = *(int *)(puStack_3f0 + 1);
  piStack_270 = (int *)*puStack_3f0;
  iStack_484 = iStack_488;
  piStack_268 = piStack_270;
  piStack_260 = piStack_270;
  piStack_258 = piStack_270;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_e8,piStack_270,iStack_488,0);
  plStack_428 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_4c8 = 1;
  uStack_4cc = (uint)(5 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_4cc == 0) {
    uStack_250 = 0;
    uStack_24c = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_510 = (longlong)(int)plStack_428[1];
    uStack_518 = 5;
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
  lStack_248 = *plStack_428;
  puStack_3e8 = (undefined8 *)(lStack_248 + 0x50);
  lStack_240 = lStack_248;
  puStack_238 = puStack_3e8;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_d8.AllocatorInstance);
  iStack_480 = *(int *)(puStack_3e8 + 1);
  piStack_230 = (int *)*puStack_3e8;
  iStack_47c = iStack_480;
  piStack_228 = piStack_230;
  piStack_220 = piStack_230;
  piStack_218 = piStack_230;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_d8,piStack_230,iStack_480,0);
  puStack_420 = (undefined8 *)(*(longlong *)param_1 + 0x420);
  uStack_4c0 = 1;
  uStack_4c4 = (uint)(0 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_4c4 == 0) {
    uStack_210 = 0;
    uStack_20c = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_510 = (longlong)*(int *)(puStack_420 + 1);
    uStack_518 = 0;
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
  puStack_3e0 = (undefined8 *)*puStack_420;
  puStack_208 = puStack_3e0;
  puStack_200 = puStack_3e0;
  puStack_1f8 = puStack_3e0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_c8.AllocatorInstance);
  iStack_478 = *(int *)(puStack_3e0 + 1);
  piStack_1f0 = (int *)*puStack_3e0;
  iStack_474 = iStack_478;
  piStack_1e8 = piStack_1f0;
  piStack_1e0 = piStack_1f0;
  piStack_1d8 = piStack_1f0;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_c8,piStack_1f0,iStack_478,0);
  plStack_418 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_4b8 = 1;
  uStack_4bc = (uint)(2 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_4bc == 0) {
    uStack_1d0 = 0;
    uStack_1cc = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_510 = (longlong)(int)plStack_418[1];
    uStack_518 = 2;
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
  lStack_1c8 = *plStack_418;
  puStack_3d8 = (undefined8 *)(lStack_1c8 + 0x20);
  lStack_1c0 = lStack_1c8;
  puStack_1b8 = puStack_3d8;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_b8.AllocatorInstance);
  iStack_470 = *(int *)(puStack_3d8 + 1);
  piStack_1b0 = (int *)*puStack_3d8;
  iStack_46c = iStack_470;
  piStack_1a8 = piStack_1b0;
  piStack_1a0 = piStack_1b0;
  piStack_198 = piStack_1b0;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_b8,piStack_1b0,iStack_470,0);
  plStack_410 = (longlong *)(*(longlong *)param_1 + 0x420);
  uStack_4b0 = 1;
  uStack_4b4 = (uint)(1 < *(int *)(*(longlong *)param_1 + 0x428));
  if (uStack_4b4 == 0) {
    uStack_190 = 0;
    uStack_18c = 0;
    FormatStringSan::AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    lStack_510 = (longlong)(int)plStack_410[1];
    uStack_518 = 1;
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
  lStack_188 = *plStack_410;
  puStack_3d0 = (undefined8 *)(lStack_188 + 0x10);
  lStack_180 = lStack_188;
  puStack_178 = puStack_3d0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&TStack_a8.AllocatorInstance);
  iStack_468 = *(int *)(puStack_3d0 + 1);
  piStack_170 = (int *)*puStack_3d0;
  iStack_464 = iStack_468;
  piStack_168 = piStack_170;
  piStack_160 = piStack_170;
  piStack_158 = piStack_170;
  TArray<int_const_,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
            (&TStack_a8,piStack_170,iStack_468,0);
  piVar4 = std::initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>::
           initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_>
                     (&iStack_128,&TStack_118,&TStack_98);
  piVar6 = &iStack_138;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)&piVar6->_First = *(undefined1 *)&piVar4->_First;
    piVar4 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar4->_First + 1);
    piVar6 = (initializer_list<TArray<int_const_,TSizedDefaultAllocator<32>_>_> *)
             ((longlong)&piVar6->_First + 1);
  }
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            (&TStack_148,&iStack_138);
  _vector_destructor_iterator_
            (&TStack_118,0x10,8,
             TArray<int_const_,TSizedDefaultAllocator<32>_>::
             ~TArray<int_const_,TSizedDefaultAllocator<32>_>);
  pFStack_150 = *(FArchetypeGroup_MultiLevelQueryBase **)param_1;
  uStack_508 = Mass::Test::FArchetypeGroup_MultiLevelQueryBase::TestRaw
                         (pFStack_150,param_2,&TStack_148);
  TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  ~TArray<TArray<int_const_,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>(&TStack_148);
  return (bool)uStack_508;
}

// Call @ 14711a440

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Mass::Test::Observers::FMoveToAnotherArchetype_SingleEntity::SetUp'::__l2::<lambda_5>,void,FMassExecutionContext_&>
::Call(void *param_1,FMassExecutionContext *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 0x93) = 1;
  return;
}

