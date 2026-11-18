// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147178740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassQueryTest::FQueryTest_AutoRecache::InstantTest(FQueryTest_AutoRecache *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  FMassEntityManager *this_00;
  FAutomationTestBase *pFVar6;
  undefined ***pppuVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_a18 [32];
  int local_9e8 [2];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_9e0;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_9d0;
  FString local_9c0;
  FString local_9b0;
  FString local_9a0;
  FString local_990;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_980;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_970;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_960;
  code *local_948 [2];
  undefined **local_938;
  int *local_930;
  undefined ***local_920;
  FMassEntityQuery local_918;
  FMassExecutionContext local_5c8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_a18;
  FMassEntityQuery::FMassEntityQuery
            (&local_918,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)&local_918,ReadOnly,All);
  local_938 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1__InstantTest_FQueryTest_AutoRecache_FMassQueryTest__UEAA_NXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_930 = local_9e8;
  local_9e8[0] = 0;
  local_948[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMassQueryTest::FQueryTest_AutoRecache::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
                 ::Call;
  local_920 = (undefined ***)0x0;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  FMassExecutionContext::FMassExecutionContext
            (&local_5c8,*(FMassEntityManager **)&this->field_0x28,0.0,true);
  FMassEntityQuery::ForEachEntityChunk
            (&local_918,&local_5c8,(TFunction<void___cdecl(FMassExecutionContext_&)> *)local_948);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  iVar2 = local_9e8[0];
  pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_9c0,"No entities have been created so we expect counting to yield 0");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_9c0.Data.ArrayNum != 0) {
    FVar8.Data = local_9c0.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual(pFVar6,(wchar_t *)FVar8.Data,iVar2,0);
  if (local_9c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c0.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    goto LAB_147178b52;
  }
  local_9e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9e0.ArrayNum = 0;
  local_9e0.ArrayMax = 0;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_980,
             (FMassArchetypeHandle *)&this->field_0x60,0x11,&local_9e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_980.SharedReferenceCount.ReferenceController);
  local_9e8[0] = 0;
  FMassEntityQuery::ForEachEntityChunk
            (&local_918,&local_5c8,(TFunction<void___cdecl(FMassExecutionContext_&)> *)local_948);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  iVar2 = local_9e8[0];
  pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
  iVar3 = local_9e0.ArrayNum;
  ::FString::FString(&local_9b0,
                     "The number of entities found should match the number of entities created in the matching archetype"
                    );
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_9b0.Data.ArrayNum != 0) {
    FVar8.Data = local_9b0.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual(pFVar6,(wchar_t *)FVar8.Data,iVar2,iVar3);
  if (local_9b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9b0.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    local_9d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9d0.ArrayNum = 0;
    local_9d0.ArrayMax = 0;
    if (*(longlong *)&this->field_0x28 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    FMassEntityManager::BatchCreateEntities
              (*(FMassEntityManager **)&this->field_0x28,&local_970,
               (FMassArchetypeHandle *)&this->field_0x50,0xd,&local_9d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_970.SharedReferenceCount.ReferenceController);
    local_9e8[0] = 0;
    FMassEntityQuery::ForEachEntityChunk
              (&local_918,&local_5c8,(TFunction<void___cdecl(FMassExecutionContext_&)> *)local_948);
    if (*(longlong *)&this->field_0x20 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    iVar2 = local_9e8[0];
    pFVar6 = *(FAutomationTestBase **)&this->field_0x20;
    iVar3 = local_9e0.ArrayNum;
    ::FString::FString(&local_9a0,
                       "The number of entities found should not change with addition of entities not matching the query"
                      );
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_9a0.Data.ArrayNum != 0) {
      FVar8.Data = local_9a0.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual(pFVar6,(wchar_t *)FVar8.Data,iVar2,iVar3);
    if (local_9a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a0.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      FMassEntityManager::BatchCreateEntities
                (this_00,&local_960,(FMassArchetypeHandle *)&this->field_0x70,0x11,&local_9e0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_960.SharedReferenceCount.ReferenceController);
      local_9e8[0] = 0;
      FMassEntityQuery::ForEachEntityChunk
                (&local_918,&local_5c8,(TFunction<void___cdecl(FMassExecutionContext_&)> *)local_948
                );
      pFVar6 = FAITestBase::GetTestRunner((FAITestBase *)this);
      iVar2 = local_9e8[0];
      iVar3 = local_9e0.ArrayNum;
      ::FString::FString(&local_990,
                         "The total number of entities found should include entities from both matching archetypes"
                        );
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_990.Data.ArrayNum != 0) {
        FVar8.Data = local_990.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestEqual(pFVar6,(wchar_t *)FVar8.Data,iVar2,iVar3);
      if (local_990.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_990.Data.AllocatorInstance.Data);
      }
      if (!bVar4) goto LAB_147178b25;
      bVar4 = true;
    }
    else {
LAB_147178b25:
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      bVar4 = false;
    }
    if (local_9d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9d0.AllocatorInstance.Data);
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    bVar4 = false;
  }
  if (local_9e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9e0.AllocatorInstance.Data);
  }
LAB_147178b52:
  FMassExecutionContext::~FMassExecutionContext(&local_5c8);
  if (local_948[0] != (code *)0x0) {
    pppuVar7 = &local_938;
    if (local_920 != (undefined ***)0x0) {
      pppuVar7 = local_920;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  FMassEntityQuery::~FMassEntityQuery(&local_918);
  return bVar4;
}

