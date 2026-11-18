// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14717b990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_FragmentPresent::InstantTest(FQueryTest_FragmentPresent *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined ***pppuVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_9e8 [32];
  int local_9b8 [2];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_9b0;
  FString local_9a0;
  FString local_990;
  FString local_980;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_970;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_960;
  code *local_948 [2];
  undefined **local_938;
  int *local_930;
  undefined ***local_920;
  FMassEntityQuery local_918;
  FMassExecutionContext local_5c8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_9e8;
  FMassEntityQuery::FMassEntityQuery
            (&local_918,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)&local_918,None,Any);
  FMassEntityQuery::CacheArchetypes(&local_918);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  iVar3 = local_918.ValidArchetypes.ArrayNum;
  pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_9a0,"There are exactly two archetypes matching the requirements");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_9a0.Data.ArrayNum != 0) {
    FVar8.Data = local_9a0.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar8.Data,iVar3,2);
  if (local_9a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a0.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
    if ((local_918.ValidArchetypes.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    if (*(longlong *)&this->field_0x50 ==
        *(longlong *)local_918.ValidArchetypes.AllocatorInstance.Data) {
LAB_14717bb45:
      bVar5 = false;
    }
    else {
      if ((local_918.ValidArchetypes.ArrayNum < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      if (*(longlong *)&this->field_0x50 ==
          *(longlong *)(local_918.ValidArchetypes.AllocatorInstance.Data + 0x10))
      goto LAB_14717bb45;
      bVar5 = true;
    }
    ::FString::FString(&local_990,"FloatsArchetype is not amongst matching archetypes");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_990.Data.ArrayNum != 0) {
      FVar8.Data = local_990.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar8.Data,bVar5);
    if (local_990.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_990.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      local_9b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_9b0.ArrayNum = 0;
      local_9b0.ArrayMax = 0;
      if ((*(longlong *)&this->field_0x28 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      FMassEntityManager::BatchCreateEntities
                (*(FMassEntityManager **)&this->field_0x28,&local_970,
                 (FMassArchetypeHandle *)&this->field_0x60,5,&local_9b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_970.SharedReferenceCount.ReferenceController);
      if ((*(longlong *)&this->field_0x28 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      FMassEntityManager::BatchCreateEntities
                (*(FMassEntityManager **)&this->field_0x28,&local_960,
                 (FMassArchetypeHandle *)&this->field_0x70,7,&local_9b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_960.SharedReferenceCount.ReferenceController);
      if ((local_9b0.ArrayNum != 0xc) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3489091741754064594>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassQueryTest.cpp"
                             ,0x12e,
                             "MatchingEntities.Num() == NumberOfEntitiesToAddA + NumberOfEntitiesToAddB"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      local_9b8[0] = 0;
      FMassExecutionContext::FMassExecutionContext
                (&local_5c8,*(FMassEntityManager **)&this->field_0x28,0.0,true);
      local_920 = (undefined ***)0x0;
      local_938 = &
                  ___7__TFunction_OwnedObject_V<lambda_1>__1__InstantTest_FQueryTest_FragmentPresent_FMassQueryTest__UEAA_NXZ__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_930 = local_9b8;
      local_948[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FMassQueryTest::FQueryTest_FragmentPresent::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
                     ::Call;
      FMassEntityQuery::ForEachEntityChunk
                (&local_918,&local_5c8,(TFunction<void___cdecl(FMassExecutionContext_&)> *)local_948
                );
      if (local_948[0] != (code *)0x0) {
        pppuVar7 = &local_938;
        if (local_920 != (undefined ***)0x0) {
          pppuVar7 = local_920;
        }
        (*(code *)(*pppuVar7)[2])();
      }
      if ((*(longlong *)&this->field_0x20 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      iVar3 = local_9b8[0];
      pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
      iVar4 = local_9b0.ArrayNum;
      ::FString::FString(&local_980,
                         "We expect the number of entities processed to match number added to matching archetypes"
                        );
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_980.Data.ArrayNum != 0) {
        FVar8.Data = local_980.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar8.Data,iVar4,iVar3);
      if (local_980.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_980.Data.AllocatorInstance.Data);
      }
      if (!bVar5) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
      }
      FMassExecutionContext::~FMassExecutionContext(&local_5c8);
      if (local_9b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9b0.AllocatorInstance.Data);
      }
      goto LAB_14717bd80;
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar5 = false;
LAB_14717bd80:
  FMassEntityQuery::~FMassEntityQuery(&local_918);
  return bVar5;
}

