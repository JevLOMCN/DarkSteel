// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14717ad40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_ExplicitRequirements::InstantTest(FQueryTest_ExplicitRequirements *this)

{
  FAutomationTestBase *pFVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  UScriptStruct *pUVar4;
  bool bVar5;
  undefined1 uVar6;
  UPackage *pUVar7;
  ForAnyElementType FVar8;
  undefined1 auStack_428 [32];
  undefined8 local_408;
  longlong local_400;
  UScriptStruct *local_3f8;
  TSharedRef<FMassEntityManager,1> local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  UScriptStruct **local_3b0;
  TSharedRef<FMassEntityManager,1> *pTStack_3a8;
  initializer_list<UScriptStruct_*> local_398;
  FMassEntityQuery local_388;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_428;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar7 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar7,
                         L"TestFragment_Float");
  }
  local_3b0 = &local_3f8;
  pTStack_3a8 = &local_3f0;
  local_3f8 = Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  local_3f0.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x30;
  local_3f0.Object = *(FMassEntityManager **)&this->field_0x28;
  if (local_3f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_3f0.Object == (FMassEntityManager *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  local_398._First = local_3b0;
  local_398._Last = (UScriptStruct **)pTStack_3a8;
  FMassEntityQuery::FMassEntityQuery(&local_388,&local_3f0,&local_398);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f0.SharedReferenceCount.ReferenceController);
  if ((int)local_388._padding_ < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_3e0,
                     "Query should have extracted some requirements from the given Processor");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_3e0.Data.ArrayNum != 0) {
    FVar8.Data = local_3e0.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar8.Data,0 < (int)local_388._padding_);
  if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    if (*(longlong *)&this->field_0x20 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
    ::FString::FString(&local_3d0,"There should be exactly one requirement");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_3d0.Data.ArrayNum != 0) {
      FVar8.Data = local_3d0.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestTrue
                      (pFVar1,(wchar_t *)FVar8.Data,(int)local_388._padding_ == 1);
    if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      if (*(longlong *)&this->field_0x20 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar7 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar7,
                             L"TestFragment_Float");
      }
      pUVar4 = Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
      if ((int)local_388._padding_ < 1) {
        local_408 = 0;
        local_400 = (longlong)(int)local_388._padding_;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      pUVar2 = *(UScriptStruct **)local_388._padding_;
      ::FString::FString(&local_3c0,"The requirement should be of the Float fragment type");
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_3c0.Data.ArrayNum != 0) {
        FVar8.Data = local_3c0.Data.AllocatorInstance.Data;
      }
      bVar5 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar8.Data,pUVar2 == pUVar4);
      if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        bVar5 = true;
        goto LAB_14717b061;
      }
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar5 = false;
LAB_14717b061:
  FMassEntityQuery::~FMassEntityQuery(&local_388);
  return bVar5;
}

