// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14717e7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_OnlyAbsentFragments::InstantTest(FQueryTest_OnlyAbsentFragments *this)

{
  longlong lVar1;
  longlong lVar2;
  FMassArchetypeData *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  FAutomationTestBase *pFVar8;
  FMassEntityManager *this_00;
  ForAnyElementType FVar9;
  undefined1 auStack_478 [32];
  undefined8 local_458;
  longlong local_450;
  FMassArchetypeCreationParams local_448;
  UScriptStruct *local_438;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  FString local_3f0;
  FString local_3e0;
  FString local_3d0;
  UScriptStruct **local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  FMassArchetypeHandle local_3a8;
  TArrayView<UScriptStruct_const_*_const,int> local_398;
  FMassEntityQuery local_388;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_478;
  FMassEntityQuery::FMassEntityQuery
            (&local_388,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  pFVar8 = *(FAutomationTestBase **)&this->field_0x20;
  bVar6 = FMassFragmentRequirements::CheckValidity((FMassFragmentRequirements *)&local_388);
  ::FString::FString(&local_430,"The empty query is not valid");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_430.Data.ArrayNum != 0) {
    FVar9.Data = local_430.Data.AllocatorInstance.Data;
  }
  bVar6 = FAutomationTestBase::TestFalse(pFVar8,(wchar_t *)FVar9.Data,bVar6);
  if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
              ((FMassFragmentRequirements *)&local_388,ReadOnly,None);
    if (*(longlong *)&this->field_0x20 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    pFVar8 = *(FAutomationTestBase **)&this->field_0x20;
    bVar6 = FMassFragmentRequirements::CheckValidity((FMassFragmentRequirements *)&local_388);
    ::FString::FString(&local_420,"Single negative requirement is valid");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_420.Data.ArrayNum != 0) {
      FVar9.Data = local_420.Data.AllocatorInstance.Data;
    }
    bVar6 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,bVar6);
    if (local_420.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
                ((FMassFragmentRequirements *)&local_388,ReadOnly,None);
      FMassFragmentRequirements::AddRequirement<FTestFragment_Bool>
                ((FMassFragmentRequirements *)&local_388,ReadOnly,None);
      if (*(longlong *)&this->field_0x20 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      pFVar8 = *(FAutomationTestBase **)&this->field_0x20;
      bVar6 = FMassFragmentRequirements::CheckValidity((FMassFragmentRequirements *)&local_388);
      ::FString::FString(&local_410,"Multiple negative requirement is valid");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_410.Data.ArrayNum != 0) {
        FVar9.Data = local_410.Data.AllocatorInstance.Data;
      }
      bVar6 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,bVar6);
      if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_410.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        FMassEntityQuery::CacheArchetypes(&local_388);
        pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
        iVar5 = local_388.ValidArchetypes.ArrayNum;
        ::FString::FString(&local_400,"There\'s only one default test archetype matching the query")
        ;
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_400.Data.ArrayNum != 0) {
          FVar9.Data = local_400.Data.AllocatorInstance.Data;
        }
        bVar6 = FAutomationTestBase::TestEqual(pFVar8,(wchar_t *)FVar9.Data,iVar5,1);
        if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_400.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
          if (local_388.ValidArchetypes.ArrayNum < 1) {
            local_450 = (longlong)local_388.ValidArchetypes.ArrayNum;
            local_458 = 0;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
          }
          lVar1 = *(longlong *)&this->field_0x40;
          lVar2 = *(longlong *)local_388.ValidArchetypes.AllocatorInstance.Data;
          ::FString::FString(&local_3f0,"Only the Empty archetype matches the query");
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_3f0.Data.ArrayNum != 0) {
            FVar9.Data = local_3f0.Data.AllocatorInstance.Data;
          }
          bVar6 = FAutomationTestBase::TestTrue(pFVar8,(wchar_t *)FVar9.Data,lVar2 == lVar1);
          if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
          }
          if (bVar6) {
            this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
            local_448.ChunkMemorySize = 0;
            local_448.DebugName.ComparisonIndex.Value = 0;
            local_448.DebugName.Number = 0;
            local_448.DebugColor.field0_0x0 = (FColor_u_0)0x0;
            local_438 = FTestFragment_Large::StaticStruct();
            local_3b8 = &local_438;
            uStack_3b0 = 1;
            local_398._12_4_ = uStack_3ac;
            local_398.ArrayNum = 1;
            local_398.DataPtr = local_3b8;
            FMassEntityManager::CreateArchetype(this_00,&local_3a8,&local_398,&local_448);
            FMassEntityQuery::CacheArchetypes(&local_388);
            pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
            iVar5 = local_388.ValidArchetypes.ArrayNum;
            ::FString::FString(&local_3e0,"The number of matching queries matches expectations");
            FVar9.Data = (FScriptContainerElement *)L"";
            if (local_3e0.Data.ArrayNum != 0) {
              FVar9.Data = local_3e0.Data.AllocatorInstance.Data;
            }
            bVar6 = FAutomationTestBase::TestEqual(pFVar8,(wchar_t *)FVar9.Data,iVar5,2);
            if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
            }
            if (bVar6) {
              pFVar8 = FAITestBase::GetTestRunner((FAITestBase *)this);
              if (local_388.ValidArchetypes.ArrayNum < 2) {
                local_450 = (longlong)local_388.ValidArchetypes.ArrayNum;
                local_458 = 1;
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar4 = (code *)swi(3);
                  uVar7 = (*pcVar4)();
                  return (bool)uVar7;
                }
              }
              pFVar3 = *(FMassArchetypeData **)
                        (local_388.ValidArchetypes.AllocatorInstance.Data + 0x10);
              ::FString::FString(&local_3d0,"The new archetype matches the query");
              FVar9.Data = (FScriptContainerElement *)L"";
              if (local_3d0.Data.ArrayNum != 0) {
                FVar9.Data = local_3d0.Data.AllocatorInstance.Data;
              }
              bVar6 = FAutomationTestBase::TestTrue
                                (pFVar8,(wchar_t *)FVar9.Data,pFVar3 == local_3a8.DataPtr.Object);
              if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
              }
              if (bVar6) {
                bVar6 = true;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_3a8.DataPtr.SharedReferenceCount.ReferenceController);
                goto LAB_14717ec22;
              }
            }
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            bVar6 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_3a8.DataPtr.SharedReferenceCount.ReferenceController);
            goto LAB_14717ec22;
          }
        }
      }
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar6 = false;
LAB_14717ec22:
  FMassEntityQuery::~FMassEntityQuery(&local_388);
  return bVar6;
}

