// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// <lambda_invoker_cdecl> @ 1470cf190

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
`FMassQueryTest::FQueryTest_ParallelCommands::InstantTest'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FMassExecutionContext *param_1)

{
  int iVar1;
  FMassEntityHandle *pFVar2;
  FMassCommandBuffer *this;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  FMassCommandAddTagsInternal<0,FTestFragment_Tag> *this_00;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  TArrayView<FMassEntityHandle_const_,int> local_18;
  
  pFVar2 = (param_1->EntityListView).DataPtr;
  this = (param_1->DeferredCommandBuffer).Object;
  iVar1 = (param_1->EntityListView).ArrayNum;
  if (this->bIsFlushing != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsFlushing() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x8f,
                       L"Trying to push commands is not supported while the given buffer is being flushed"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  DVar5 = GetCurrentThreadId();
  if (this->OwnerThreadId != DVar5) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("OwnerThreadId == FPlatformTLS::GetCurrentThreadId()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassCommandBuffer.h"
                       ,0x8f,
                       L"Commands can be pushed only in the same thread where the command buffer was created."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
                      ::__l2::LLMScope_Name146,L"Mass/PushCommand");
      _Init_thread_footer(&`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
             ::__l2::LLMScope_Name146,false,None,Default,true);
  FMemScope::FMemScope
            (local_res10,
             &`public:_void___cdecl_FMassCommandBuffer::PushCommand<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(TArrayView<FMassEntityHandle_const_,int>)___ptr64'
              ::__l2::LLMScope_Name146,true);
  this_00 = FMassCommandBuffer::
            CreateOrAddCommand<FMassCommandAddTagsInternal<0,FTestFragment_Tag>_>(this);
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pFVar2;
  FMassBatchedEntityCommand::Add((FMassBatchedEntityCommand *)this_00,&local_18);
  this->ActiveCommandsCounter = this->ActiveCommandsCounter + 1;
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// InstantTest @ 14717ec70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_ParallelCommands::InstantTest(FQueryTest_ParallelCommands *this)

{
  FMassEntityManager *this_00;
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UPackage *pUVar6;
  undefined ***pppuVar7;
  ForAnyElementType FVar8;
  int iVar9;
  undefined1 auStackY_a18 [32];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_9e8;
  UScriptStruct *local_9d8;
  FString local_9d0;
  FString local_9c0;
  FString local_9b0;
  UScriptStruct **local_998;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  FMassArchetypeHandle local_988;
  FMassArchetypeHandle local_978;
  TArrayView<UScriptStruct_const_*_const,int> local_968;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_958;
  code *local_948 [2];
  undefined **local_938;
  code *local_930;
  undefined ***local_920;
  FMassEntityQuery local_918;
  FMassExecutionContext local_5c8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a18;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  this_00 = *(FMassEntityManager **)&this->field_0x28;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Tag.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Tag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Tag,(UObject *)pUVar6,
                         L"TestFragment_Tag");
  }
  local_9d8 = Z_Registration_Info_UScriptStruct_FTestFragment_Tag.OuterSingleton;
  local_998 = &local_9d8;
  local_988.DataPtr.Object = *(FMassArchetypeData **)&this->field_0x50;
  local_988.DataPtr.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x58;
  uStack_990 = 1;
  if (local_988.DataPtr.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_988.DataPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_988.DataPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_968._12_4_ = uStack_98c;
  local_968.ArrayNum = 1;
  local_968.DataPtr = local_998;
  FMassEntityManager::CreateArchetype(this_00,&local_978,&local_988,&local_968);
  if (*(longlong *)&this->field_0x50 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArchetypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                       ,0x1ff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar9 = *(int *)(*(longlong *)&this->field_0x50 + 0x2a8) << 5;
  local_9e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9e8.ArrayNum = 0;
  local_9e8.ArrayMax = 0;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_958,
             (FMassArchetypeHandle *)&this->field_0x50,iVar9,&local_9e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_958.SharedReferenceCount.ReferenceController);
  FMassEntityQuery::FMassEntityQuery
            (&local_918,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)&local_918,ReadWrite,All);
  local_918.bAllowParallelCommands = '\x01';
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                    (*(FMassEntityManager **)&this->field_0x28,
                     (FMassArchetypeHandle *)&this->field_0x50);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_9d0,"Target archetype should only contain freshly created entities");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_9d0.Data.ArrayNum != 0) {
    FVar8.Data = local_9d0.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar8.Data,iVar5,iVar9);
  if (local_9d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9d0.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    goto LAB_14717f0c7;
  }
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  FMassEntityManager::CreateExecutionContext
            (*(FMassEntityManager **)&this->field_0x28,&local_5c8,0.0);
  local_920 = (undefined ***)0x0;
  local_938 = &
              ___7__TFunction_OwnedObject_P6AXAEAUFMassExecutionContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_930 = `FMassQueryTest::FQueryTest_ParallelCommands::InstantTest'::__l2::<lambda_1>::
              <lambda_invoker_cdecl>;
  local_948[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<void_(__cdecl*)(FMassExecutionContext_&),void,FMassExecutionContext_&>
                 ::Call;
  FMassEntityQuery::ParallelForEachEntityChunk
            (&local_918,&local_5c8,(TFunction<void___cdecl(FMassExecutionContext_&)> *)local_948,
             Force);
  if (local_948[0] != (code *)0x0) {
    pppuVar7 = &local_938;
    if (local_920 != (undefined ***)0x0) {
      pppuVar7 = local_920;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar9 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                    (*(FMassEntityManager **)&this->field_0x28,
                     (FMassArchetypeHandle *)&this->field_0x50);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_9c0,"Target archetype should be empty after the move");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_9c0.Data.ArrayNum != 0) {
    FVar8.Data = local_9c0.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar8.Data,iVar9,0);
  if (local_9c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c0.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    if (*(longlong *)&this->field_0x28 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar9 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                      (*(FMassEntityManager **)&this->field_0x28,&local_978);
    if (*(longlong *)&this->field_0x20 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
    ::FString::FString(&local_9b0,
                       "All entities are expected to be moved over to the target archetype");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_9b0.Data.ArrayNum != 0) {
      FVar8.Data = local_9b0.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar8.Data,iVar5,iVar9);
    if (local_9b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9b0.Data.AllocatorInstance.Data);
    }
    if (!bVar3) goto LAB_14717f0b4;
    bVar3 = true;
  }
  else {
LAB_14717f0b4:
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    bVar3 = false;
  }
  FMassExecutionContext::~FMassExecutionContext(&local_5c8);
LAB_14717f0c7:
  FMassEntityQuery::~FMassEntityQuery(&local_918);
  if (local_9e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9e8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_978.DataPtr.SharedReferenceCount.ReferenceController);
  return bVar3;
}

