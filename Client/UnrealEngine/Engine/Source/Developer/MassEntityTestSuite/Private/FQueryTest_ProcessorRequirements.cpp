// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14717fae0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_ProcessorRequirements::InstantTest
          (FQueryTest_ProcessorRequirements *this)

{
  int iVar1;
  longlong *plVar2;
  FAutomationTestBase *pFVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  UScriptStruct *pUVar6;
  bool bVar7;
  undefined1 uVar8;
  UMassTestProcessor_Floats *pUVar9;
  UPackage *pUVar10;
  ForAnyElementType FVar11;
  FString local_58;
  FString local_48;
  FString local_38;
  TSharedPtr<FMassEntityManager,1> local_28;
  
  local_28.Object = *(FMassEntityManager **)&this->field_0x28;
  local_28.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x30;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar9 = NewTestProcessor<UMassTestProcessor_Floats>(&local_28);
  iVar1 = (int)pUVar9->_padding_;
  plVar2 = (longlong *)pUVar9->_padding_;
  if ((iVar1 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_58,
                     "Query should have extracted some requirements from the given Processor");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar11.Data = local_58.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar11.Data,0 < iVar1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
    ::FString::FString(&local_48,"There should be exactly one requirement");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar11.Data = local_48.Data.AllocatorInstance.Data;
    }
    bVar7 = FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar11.Data,iVar1 == 1);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      if ((*(longlong *)&this->field_0x20 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar10 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar10,
                             L"TestFragment_Float");
      }
      pUVar6 = Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
      if ((iVar1 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      pUVar4 = (UScriptStruct *)*plVar2;
      ::FString::FString(&local_38,"The requirement should be of the Float fragment type");
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar11.Data = local_38.Data.AllocatorInstance.Data;
      }
      bVar7 = FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar11.Data,pUVar4 == pUVar6);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        return true;
      }
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  return false;
}

