// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14717f130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_ParallelForBasic::InstantTest(FQueryTest_ParallelForBasic *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  code **ppcVar6;
  ForAnyElementType FVar7;
  int iVar8;
  undefined1 auStackY_9f8 [32];
  int local_9c8;
  int local_9c4;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_9c0;
  FString local_9b0;
  FString local_9a0;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_990;
  code *local_978 [2];
  code *local_968 [3];
  code **local_950;
  _RTL_CRITICAL_SECTION local_948;
  FMassEntityQuery local_918;
  FMassExecutionContext local_5c8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_9f8;
  if (*(longlong *)&this->field_0x50 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArchetypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                       ,0x1ff,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  iVar8 = *(int *)(*(longlong *)&this->field_0x50 + 0x2a8) << 5;
  local_9c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9c0.ArrayNum = 0;
  local_9c0.ArrayMax = 0;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_990,
             (FMassArchetypeHandle *)&this->field_0x50,iVar8,&local_9c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_990.SharedReferenceCount.ReferenceController);
  FMassEntityQuery::FMassEntityQuery
            (&local_918,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)&local_918,ReadWrite,All);
  local_9c8 = 0;
  local_9c4 = 0;
  InitializeCriticalSectionAndSpinCount(&local_948,4000);
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  FMassEntityManager::CreateExecutionContext
            (*(FMassEntityManager **)&this->field_0x28,&local_5c8,0.0);
  local_978[0] = (code *)0x0;
  local_950 = FMemory::Malloc(0x20,8);
  *local_950 = (code *)&
                       ___7__TFunction_OwnedObject_V<lambda_1>__1__InstantTest_FQueryTest_ParallelForBasic_FMassQueryTest__UEAA_NXZ__0A__00_Function_Private_Core_UE__6B_
  ;
  local_950[1] = (code *)&local_948;
  local_950[2] = (code *)&local_9c8;
  local_950[3] = (code *)&local_9c4;
  if (local_950 + 1 != (code **)0x0) {
    local_978[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FMassQueryTest::FQueryTest_ParallelForBasic::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
                   ::Call;
  }
  FMassEntityQuery::ParallelForEachEntityChunk
            (&local_918,&local_5c8,(TFunction<void___cdecl(FMassExecutionContext_&)> *)local_978,
             Force);
  if (local_978[0] != (code *)0x0) {
    ppcVar6 = local_978 + 2;
    if (local_950 != (code **)0x0) {
      ppcVar6 = local_950;
    }
    (**(code **)(*ppcVar6 + 0x10))();
  }
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  iVar3 = local_9c8;
  pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_9b0,"All created entites should have been processed at this point");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_9b0.Data.ArrayNum != 0) {
    FVar7.Data = local_9b0.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar7.Data,iVar3,iVar8);
  if (local_9b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9b0.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    if (*(longlong *)&this->field_0x20 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
    }
    pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
    bVar4 = 0 < local_9c4;
    ::FString::FString(&local_9a0,"Some work is expected to be executed in parallel");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_9a0.Data.ArrayNum != 0) {
      FVar7.Data = local_9a0.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar7.Data,bVar4);
    if (local_9a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a0.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      bVar4 = true;
      goto LAB_14717f3f0;
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar4 = false;
LAB_14717f3f0:
  FMassExecutionContext::~FMassExecutionContext(&local_5c8);
  DeleteCriticalSection(&local_948);
  FMassEntityQuery::~FMassEntityQuery(&local_918);
  if (local_9c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c0.AllocatorInstance.Data);
  }
  return bVar4;
}

