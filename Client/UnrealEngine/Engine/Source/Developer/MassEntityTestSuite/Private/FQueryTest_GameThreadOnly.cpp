// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14717c200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_GameThreadOnly::InstantTest(FQueryTest_GameThreadOnly *this)

{
  FTypeManager *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  UPackage *pUVar6;
  UClass *pUVar7;
  FAutomationTestBase *pFVar8;
  ForAnyElementType FVar9;
  int iVar10;
  undefined1 auStack_df8 [32];
  undefined1 local_dd8;
  undefined2 local_dd7;
  UClass *local_dd0;
  FString local_dc8;
  FString local_db8;
  FString local_da8;
  FString local_d98;
  undefined1 local_d88 [8];
  undefined1 local_d80 [8];
  undefined1 local_d78 [696];
  char local_ac0;
  byte local_a30;
  undefined1 local_a28 [696];
  char local_770;
  byte local_6e0;
  undefined1 local_6d8 [696];
  char local_420;
  byte local_390;
  FMassEntityQuery local_388;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_df8;
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
  local_dd8 = 1;
  pFVar1 = *(FTypeManager **)(*(longlong *)&this->field_0x28 + 0x648);
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar6,
                         L"TestSharedFragment_Int");
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
  }
  UE::Mass::FTypeManager::RegisterType
            (pFVar1,(UStruct *)local_d88,
             (FSharedFragmentTypeTraits *)
             Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton);
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
  iVar10 = 0;
  local_dd7 = 0;
  pFVar1 = *(FTypeManager **)(*(longlong *)&this->field_0x28 + 0x648);
  pUVar7 = UMassTestWorldSubsystem::StaticClass();
  if (pUVar7 != (UClass *)0x0) {
    UE::Mass::FTypeManager::RegisterType(pFVar1,(UStruct *)local_d80,(FSubsystemTypeTraits *)pUVar7)
    ;
    FMassEntityQuery::FMassEntityQuery
              ((FMassEntityQuery *)local_d78,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    FMassFragmentRequirements::AddSharedRequirement<FTestSharedFragment_Int>
              ((FMassFragmentRequirements *)local_d78,ReadWrite,All);
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
    pFVar8 = *(FAutomationTestBase **)&this->field_0x20;
    if (((local_d78[0x274] != false) || (local_ac0 != '\0')) ||
       (iVar5 = iVar10, (local_a30 & 2) != 0)) {
      iVar5 = 1;
    }
    ::FString::FString(&local_dc8,"Statically typed shared fragment");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_dc8.Data.ArrayNum != 0) {
      FVar9.Data = local_dc8.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestEqual(pFVar8,(wchar_t *)FVar9.Data,iVar5,1);
    if (local_dc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_dc8.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)local_d78);
      FMassEntityQuery::FMassEntityQuery
                ((FMassEntityQuery *)local_a28,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28
                );
      if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar6,
                             L"TestSharedFragment_Int");
        if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
            (UScriptStruct *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
      }
      FMassFragmentRequirements::AddSharedRequirement
                ((FMassFragmentRequirements *)local_a28,
                 (TNotNull<UScriptStruct_const_*>)
                 Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton,ReadWrite,
                 All);
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
      pFVar8 = *(FAutomationTestBase **)&this->field_0x20;
      if (((local_a28[0x274] != false) || (local_770 != '\0')) ||
         (iVar5 = iVar10, (local_6e0 & 2) != 0)) {
        iVar5 = 1;
      }
      ::FString::FString(&local_db8,"Statically typed shared fragment");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_db8.Data.ArrayNum != 0) {
        FVar9.Data = local_db8.Data.AllocatorInstance.Data;
      }
      bVar3 = FAutomationTestBase::TestEqual(pFVar8,(wchar_t *)FVar9.Data,iVar5,1);
      if (local_db8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_db8.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)local_a28);
        FMassEntityQuery::FMassEntityQuery
                  ((FMassEntityQuery *)local_6d8,
                   (TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        iVar5 = TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                ::GetTypeIndex<UMassTestWorldSubsystem>();
        FStructTypeBitSet::FBitSetContainer::AddAtIndex
                  ((FBitSetContainer *)(local_6d8 + 0x298),iVar5);
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
        pFVar8 = *(FAutomationTestBase **)&this->field_0x20;
        if (((local_6d8[0x274] != '\0') || (local_420 != '\0')) ||
           (iVar5 = iVar10, (local_390 & 2) != 0)) {
          iVar5 = 1;
        }
        ::FString::FString(&local_da8,"Statically typed shared fragment");
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_da8.Data.ArrayNum != 0) {
          FVar9.Data = local_da8.Data.AllocatorInstance.Data;
        }
        bVar3 = FAutomationTestBase::TestEqual(pFVar8,(wchar_t *)FVar9.Data,iVar5,0);
        if (local_da8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_da8.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)local_6d8);
          FMassEntityQuery::FMassEntityQuery
                    (&local_388,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_dd0 = UMassTestWorldSubsystem::StaticClass();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_dd0 != (UClass *)0x0))
          {
            UE::GC::MarkAsReachable((UObject *)local_dd0);
          }
          FMassEntityQuery::AddSubsystemRequirement
                    (&local_388,(TSubclassOf<USubsystem>)&local_dd0,ReadWrite);
          pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
          if (((local_388._padding_._4_1_ != '\0') || ((char)local_388._padding_ != '\0')) ||
             (local_388.bRequiresMutatingWorldAccess != '\0')) {
            iVar10 = 1;
          }
          ::FString::FString(&local_d98,"Statically typed shared fragment");
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_d98.Data.ArrayNum != 0) {
            FVar9.Data = local_d98.Data.AllocatorInstance.Data;
          }
          bVar3 = FAutomationTestBase::TestEqual(pFVar8,(wchar_t *)FVar9.Data,iVar10,0);
          if (local_d98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d98.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            FMassEntityQuery::~FMassEntityQuery(&local_388);
            bVar3 = true;
          }
          else {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            FMassEntityQuery::~FMassEntityQuery(&local_388);
            bVar3 = false;
          }
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)local_6d8);
          bVar3 = false;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)local_a28);
        bVar3 = false;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)local_d78);
      bVar3 = false;
    }
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

