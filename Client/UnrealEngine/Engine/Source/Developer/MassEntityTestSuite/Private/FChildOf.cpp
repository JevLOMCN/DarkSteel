// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14713db20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::Relations::FChildOf::InstantTest(FChildOf *this)

{
  int iVar1;
  FRelationManager *pFVar2;
  FMassEntityHandle FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  FAutomationTestBase *pFVar8;
  int local_458;
  int local_454;
  int local_450;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_458 = 0;
  do {
    if (*(int *)&this->field_0x128 <= local_458) {
      pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      pFVar2 = *(FRelationManager **)&this->field_0xa8;
      iVar1 = *(int *)&this->field_0xb8;
      if (iVar1 < 0 || *(int *)&this->field_0x128 <= iVar1) {
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      FVar3 = *(FMassEntityHandle *)(*(longlong *)&this->field_0x120 + (longlong)iVar1 * 8);
      iVar1 = *(int *)&this->field_0xb4;
      if (iVar1 < 0 || *(int *)&this->field_0x128 <= iVar1) {
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      bVar5 = FRelationManager::IsSubjectOfRelation
                        (pFVar2,(TObjectKey<UStruct_const_>)
                                *(TObjectKey<UStruct_const_> *)&this->field_0xa0,
                         *(FMassEntityHandle *)
                          (*(longlong *)&this->field_0x120 + (longlong)iVar1 * 8),FVar3);
      ::FString::FString(&local_38,"(NOT) SingleChildParent is a child of SingleChildChild");
      bVar5 = FAutomationTestBase::TestFalse(pFVar8,&local_38,bVar5);
      ::FString::~FString(&local_38);
      if (bVar5) {
        pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
        pFVar2 = *(FRelationManager **)&this->field_0xa8;
        iVar1 = *(int *)&this->field_0xb4;
        if (iVar1 < 0 || *(int *)&this->field_0x128 <= iVar1) {
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        FVar3 = *(FMassEntityHandle *)(*(longlong *)&this->field_0x120 + (longlong)iVar1 * 8);
        iVar1 = *(int *)&this->field_0xb8;
        if (iVar1 < 0 || *(int *)&this->field_0x128 <= iVar1) {
          Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        bVar5 = FRelationManager::IsSubjectOfRelation
                          (pFVar2,(TObjectKey<UStruct_const_>)
                                  *(TObjectKey<UStruct_const_> *)&this->field_0xa0,
                           *(FMassEntityHandle *)
                            (*(longlong *)&this->field_0x120 + (longlong)iVar1 * 8),FVar3);
        ::FString::FString(&local_28,"SingleChildChild is a child of SingleChildParent");
        bVar5 = FAutomationTestBase::TestTrue(pFVar8,&local_28,bVar5);
        ::FString::~FString(&local_28);
        if (bVar5) {
          for (local_450 = 0; local_450 < *(int *)&this->field_0x128; local_450 = local_450 + 1) {
            for (local_454 = 0; local_454 < *(int *)&this->field_0x128; local_454 = local_454 + 1) {
              pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
              bVar5 = (bool)(&this->field_0xbc)[(longlong)local_454 + (longlong)local_450 * 9];
              pFVar2 = *(FRelationManager **)&this->field_0xa8;
              if (local_454 < 0 || *(int *)&this->field_0x128 <= local_454) {
                Core::Private::FormatStringSan::
                AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
              }
              FVar3 = *(FMassEntityHandle *)
                       (*(longlong *)&this->field_0x120 + (longlong)local_454 * 8);
              if (local_450 < 0 || *(int *)&this->field_0x128 <= local_450) {
                Core::Private::FormatStringSan::
                AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar7) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
              }
              bVar7 = FRelationManager::IsSubjectOfRelationRecursive
                                (pFVar2,(TObjectKey<UStruct_const_>)
                                        *(TObjectKey<UStruct_const_> *)&this->field_0xa0,
                                 *(FMassEntityHandle *)
                                  (*(longlong *)&this->field_0x120 + (longlong)local_450 * 8),FVar3)
              ;
              ::FString::FString(&local_18,"Child is a child");
              bVar5 = FTestHelpers::TestEqual<bool,bool>(&local_18,bVar7,bVar5,pFVar8);
              ::FString::~FString(&local_18);
              if (!bVar5) {
                AITestSuite::ConditionallyBreakOnTestFail();
                return false;
              }
            }
          }
          bVar5 = true;
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          bVar5 = false;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        bVar5 = false;
      }
      return bVar5;
    }
    if (local_458 != *(int *)&this->field_0xb0) {
      pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      pFVar2 = *(FRelationManager **)&this->field_0xa8;
      if (local_458 < 0 || *(int *)&this->field_0x128 <= local_458) {
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      FVar3 = *(FMassEntityHandle *)(*(longlong *)&this->field_0x120 + (longlong)local_458 * 8);
      iVar1 = *(int *)&this->field_0xb0;
      if (iVar1 < 0 || *(int *)&this->field_0x128 <= iVar1) {
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      bVar5 = FRelationManager::IsSubjectOfRelation
                        (pFVar2,(TObjectKey<UStruct_const_>)
                                *(TObjectKey<UStruct_const_> *)&this->field_0xa0,
                         *(FMassEntityHandle *)
                          (*(longlong *)&this->field_0x120 + (longlong)iVar1 * 8),FVar3);
      ::FString::FString(&local_58,"NoRelation is a child of another entity");
      bVar5 = FAutomationTestBase::TestFalse(pFVar8,&local_58,bVar5);
      ::FString::~FString(&local_58);
      if (!bVar5) {
        AITestSuite::ConditionallyBreakOnTestFail();
        return false;
      }
      pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      pFVar2 = *(FRelationManager **)&this->field_0xa8;
      iVar1 = *(int *)&this->field_0xb0;
      if (iVar1 < 0 || *(int *)&this->field_0x128 <= iVar1) {
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      FVar3 = *(FMassEntityHandle *)(*(longlong *)&this->field_0x120 + (longlong)iVar1 * 8);
      if (local_458 < 0 || *(int *)&this->field_0x128 <= local_458) {
        Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      bVar5 = FRelationManager::IsSubjectOfRelation
                        (pFVar2,(TObjectKey<UStruct_const_>)
                                *(TObjectKey<UStruct_const_> *)&this->field_0xa0,
                         *(FMassEntityHandle *)
                          (*(longlong *)&this->field_0x120 + (longlong)local_458 * 8),FVar3);
      ::FString::FString(&local_48,"NoRelation is a parent to another entity");
      bVar5 = FAutomationTestBase::TestFalse(pFVar8,&local_48,bVar5);
      ::FString::~FString(&local_48);
      if (!bVar5) {
        AITestSuite::ConditionallyBreakOnTestFail();
        return false;
      }
    }
    local_458 = local_458 + 1;
  } while( true );
}

