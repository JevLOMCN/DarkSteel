// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// InstantTest @ 147123800

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::
FSharedFragment_CreateEntitesWithSharedFragment<FConstSharedStruct,FTestConstSharedFragment_Int>::
InstantTest(FSharedFragment_CreateEntitesWithSharedFragment<FConstSharedStruct,FTestConstSharedFragment_Int>
            *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  FMassEntityHandle FVar4;
  uchar *puVar5;
  bool bVar6;
  undefined1 uVar7;
  FMassArchetypeHandle *pFVar8;
  FMassArchetypeHandle *pFVar9;
  FAutomationTestBase *pFVar10;
  UPackage *pUVar11;
  UScriptStruct *pUVar12;
  FMassEntityHandle FVar13;
  FTestConstSharedFragment_Int *pFVar14;
  ForAnyElementType FVar15;
  FMassEntityHandle local_res8;
  FMassEntityHandle local_res10;
  longlong *local_res18;
  FConstStructView local_138;
  FConstStructView local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FMassArchetypeHandle local_58;
  FMassArchetypeHandle local_48;
  
  local_res10.Index = 0;
  local_res10.SerialNumber = 0;
  local_res8.Index = 0;
  local_res8.SerialNumber = 0;
  FSharedFragmentBase::CreateEntity<FConstSharedStruct,FTestConstSharedFragment_Int>
            ((FSharedFragmentBase *)this,&local_res10,0x3ff);
  FSharedFragmentBase::CreateEntity<FConstSharedStruct,FTestConstSharedFragment_Int>
            ((FSharedFragmentBase *)this,&local_res8,0x3f);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  plVar2 = *(longlong **)&this->field_0x20;
  local_res18 = plVar2;
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  FVar13 = local_res8;
  pFVar8 = FMassEntityManager::GetArchetypeForEntityUnsafe
                     (*(FMassEntityManager **)&this->field_0x28,&local_58,local_res8);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  FVar4 = local_res10;
  pFVar9 = FMassEntityManager::GetArchetypeForEntityUnsafe
                     (*(FMassEntityManager **)&this->field_0x28,&local_48,local_res10);
  ::FString::FString(&local_118,"Both entities should end up in the same archetype");
  if ((pFVar9->DataPtr).Object == (pFVar8->DataPtr).Object) {
    bVar6 = false;
  }
  else {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_88,L"%s: The two values are not equal.");
    (*pcVar3)(local_res18,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    bVar6 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar9->DataPtr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar8->DataPtr).SharedReferenceCount.ReferenceController);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (!bVar6) {
    FSharedFragmentBase::GetSharedFragmentView<FConstSharedStruct,FTestConstSharedFragment_Int>
              ((FSharedFragmentBase *)this,&local_128,FVar4);
    FSharedFragmentBase::GetSharedFragmentView<FConstSharedStruct,FTestConstSharedFragment_Int>
              ((FSharedFragmentBase *)this,&local_138,FVar13);
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    pFVar10 = *(FAutomationTestBase **)&this->field_0x20;
    if ((local_128.StructMemory == (uchar *)0x0) || (local_128.ScriptStruct == (UScriptStruct *)0x0)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    ::FString::FString(&local_108,"SharedFragmentA should be valid");
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar15.Data = local_108.Data.AllocatorInstance.Data;
    }
    bVar6 = FAutomationTestBase::TestTrue(pFVar10,(wchar_t *)FVar15.Data,bVar6);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      if ((*(longlong *)&this->field_0x20 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pFVar10 = *(FAutomationTestBase **)&this->field_0x20;
      if ((local_138.StructMemory == (uchar *)0x0) ||
         (local_138.ScriptStruct == (UScriptStruct *)0x0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      ::FString::FString(&local_f8,"SharedFragmentB should be valid");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_f8.Data.ArrayNum != 0) {
        FVar15.Data = local_f8.Data.AllocatorInstance.Data;
      }
      bVar6 = FAutomationTestBase::TestTrue(pFVar10,(wchar_t *)FVar15.Data,bVar6);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pFVar10 = FAITestBase::GetTestRunner((FAITestBase *)this);
        if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_MassEntityTestSuite();
          Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,
                               (UObject *)pUVar11,L"TestConstSharedFragment_Int");
        }
        pUVar12 = Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
        ::FString::FString(&local_e8,"SharedFragmentA should be of expected type");
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_e8.Data.ArrayNum != 0) {
          FVar15.Data = local_e8.Data.AllocatorInstance.Data;
        }
        bVar6 = FAutomationTestBase::TestEqual
                          (pFVar10,(wchar_t *)FVar15.Data,(ulong64)local_128.ScriptStruct,
                           (ulong64)pUVar12);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          pFVar10 = FAITestBase::GetTestRunner((FAITestBase *)this);
          pUVar12 = FTestConstSharedFragment_Int::StaticStruct();
          ::FString::FString(&local_d8,"SharedFragmentB should be of expected type");
          FVar15.Data = (FScriptContainerElement *)L"";
          if (local_d8.Data.ArrayNum != 0) {
            FVar15.Data = local_d8.Data.AllocatorInstance.Data;
          }
          bVar6 = FAutomationTestBase::TestEqual
                            (pFVar10,(wchar_t *)FVar15.Data,(ulong64)local_138.ScriptStruct,
                             (ulong64)pUVar12);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (bVar6) {
            FVar13 = (FMassEntityHandle)FAITestBase::GetTestRunner((FAITestBase *)this);
            local_res8 = FVar13;
            ::FString::FString(&local_c8,
                               "SharedFragmentA and SharedFragmentB should be different instanceS");
            puVar5 = local_138.StructMemory;
            if ((local_128.ScriptStruct == local_138.ScriptStruct) &&
               (local_128.StructMemory == local_138.StructMemory)) {
              pcVar3 = *(code **)(*(longlong *)FVar13 + 0x28);
              ::FString::PrintfImpl(&local_78,L"%s: The two values are equal.");
              (*pcVar3)(local_res8,&local_78,0);
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            if (!bVar6) {
              FVar13 = (FMassEntityHandle)FAITestBase::GetTestRunner((FAITestBase *)this);
              local_res8 = FVar13;
              ::FString::FString(&local_b8,"SharedFragmentA and SharedFragmentB should be distinct")
              ;
              if ((local_128.ScriptStruct == local_138.ScriptStruct) &&
                 (local_128.StructMemory == puVar5)) {
                pcVar3 = *(code **)(*(longlong *)FVar13 + 0x28);
                ::FString::PrintfImpl(&local_68,L"%s: The two values are equal.");
                (*pcVar3)(local_res8,&local_68,0);
                if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_68.Data.AllocatorInstance.Data);
                }
                bVar6 = true;
              }
              else {
                bVar6 = false;
              }
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
              if (!bVar6) {
                pFVar10 = FAITestBase::GetTestRunner((FAITestBase *)this);
                pFVar14 = UE::StructUtils::GetStructRef<FTestConstSharedFragment_Int_const_>
                                    (local_128.ScriptStruct,local_128.StructMemory);
                iVar1 = pFVar14->Value;
                ::FString::FString(&local_a8,
                                   "SharedFragmentA\'s value should match the expected value");
                FVar15.Data = (FScriptContainerElement *)L"";
                if (local_a8.Data.ArrayNum != 0) {
                  FVar15.Data = local_a8.Data.AllocatorInstance.Data;
                }
                bVar6 = FAutomationTestBase::TestEqual(pFVar10,(wchar_t *)FVar15.Data,iVar1,0x3ff);
                if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                }
                if (bVar6) {
                  pFVar10 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  pFVar14 = UE::StructUtils::GetStructRef<FTestConstSharedFragment_Int_const_>
                                      (local_138.ScriptStruct,local_138.StructMemory);
                  iVar1 = pFVar14->Value;
                  ::FString::FString(&local_98,
                                     "SharedFragmentB\'s value should match the expected value");
                  FVar15.Data = (FScriptContainerElement *)L"";
                  if (local_98.Data.ArrayNum != 0) {
                    FVar15.Data = local_98.Data.AllocatorInstance.Data;
                  }
                  bVar6 = FAutomationTestBase::TestEqual(pFVar10,(wchar_t *)FVar15.Data,iVar1,0x3f);
                  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_98.Data.AllocatorInstance.Data);
                  }
                  if (bVar6) {
                    return true;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  return false;
}

// InstantTest @ 147123da0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::
FSharedFragment_CreateEntitesWithSharedFragment<FSharedStruct,FTestSharedFragment_Int>::InstantTest
          (FSharedFragment_CreateEntitesWithSharedFragment<FSharedStruct,FTestSharedFragment_Int>
           *this)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  FMassEntityHandle FVar4;
  uchar *puVar5;
  bool bVar6;
  undefined1 uVar7;
  FMassArchetypeHandle *pFVar8;
  FMassArchetypeHandle *pFVar9;
  FAutomationTestBase *pFVar10;
  UPackage *pUVar11;
  UScriptStruct *pUVar12;
  FMassEntityHandle FVar13;
  FTestSharedFragment_Int *pFVar14;
  ForAnyElementType FVar15;
  FMassEntityHandle local_res8;
  FMassEntityHandle local_res10;
  longlong *local_res18;
  FConstStructView local_138;
  FConstStructView local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FMassArchetypeHandle local_58;
  FMassArchetypeHandle local_48;
  
  local_res10.Index = 0;
  local_res10.SerialNumber = 0;
  local_res8.Index = 0;
  local_res8.SerialNumber = 0;
  FSharedFragmentBase::CreateEntity<FSharedStruct,FTestSharedFragment_Int>
            ((FSharedFragmentBase *)this,&local_res10,0x3ff);
  FSharedFragmentBase::CreateEntity<FSharedStruct,FTestSharedFragment_Int>
            ((FSharedFragmentBase *)this,&local_res8,0x3f);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  plVar2 = *(longlong **)&this->field_0x20;
  local_res18 = plVar2;
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  FVar13 = local_res8;
  pFVar8 = FMassEntityManager::GetArchetypeForEntityUnsafe
                     (*(FMassEntityManager **)&this->field_0x28,&local_58,local_res8);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  FVar4 = local_res10;
  pFVar9 = FMassEntityManager::GetArchetypeForEntityUnsafe
                     (*(FMassEntityManager **)&this->field_0x28,&local_48,local_res10);
  ::FString::FString(&local_118,"Both entities should end up in the same archetype");
  if ((pFVar9->DataPtr).Object == (pFVar8->DataPtr).Object) {
    bVar6 = false;
  }
  else {
    pcVar3 = *(code **)(*plVar2 + 0x28);
    ::FString::PrintfImpl(&local_88,L"%s: The two values are not equal.");
    (*pcVar3)(local_res18,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    bVar6 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar9->DataPtr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar8->DataPtr).SharedReferenceCount.ReferenceController);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if (!bVar6) {
    FSharedFragmentBase::GetSharedFragmentView<FSharedStruct,FTestSharedFragment_Int>
              ((FSharedFragmentBase *)this,&local_128,FVar4);
    FSharedFragmentBase::GetSharedFragmentView<FSharedStruct,FTestSharedFragment_Int>
              ((FSharedFragmentBase *)this,&local_138,FVar13);
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    pFVar10 = *(FAutomationTestBase **)&this->field_0x20;
    if ((local_128.StructMemory == (uchar *)0x0) || (local_128.ScriptStruct == (UScriptStruct *)0x0)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    ::FString::FString(&local_108,"SharedFragmentA should be valid");
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar15.Data = local_108.Data.AllocatorInstance.Data;
    }
    bVar6 = FAutomationTestBase::TestTrue(pFVar10,(wchar_t *)FVar15.Data,bVar6);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      if ((*(longlong *)&this->field_0x20 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      pFVar10 = *(FAutomationTestBase **)&this->field_0x20;
      if ((local_138.StructMemory == (uchar *)0x0) ||
         (local_138.ScriptStruct == (UScriptStruct *)0x0)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      ::FString::FString(&local_f8,"SharedFragmentB should be valid");
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_f8.Data.ArrayNum != 0) {
        FVar15.Data = local_f8.Data.AllocatorInstance.Data;
      }
      bVar6 = FAutomationTestBase::TestTrue(pFVar10,(wchar_t *)FVar15.Data,bVar6);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pFVar10 = FAITestBase::GetTestRunner((FAITestBase *)this);
        if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar11 = Z_Construct_UPackage__Script_MassEntityTestSuite();
          Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar11,
                               L"TestSharedFragment_Int");
        }
        pUVar12 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
        ::FString::FString(&local_e8,"SharedFragmentA should be of expected type");
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_e8.Data.ArrayNum != 0) {
          FVar15.Data = local_e8.Data.AllocatorInstance.Data;
        }
        bVar6 = FAutomationTestBase::TestEqual
                          (pFVar10,(wchar_t *)FVar15.Data,(ulong64)local_128.ScriptStruct,
                           (ulong64)pUVar12);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          pFVar10 = FAITestBase::GetTestRunner((FAITestBase *)this);
          pUVar12 = FTestSharedFragment_Int::StaticStruct();
          ::FString::FString(&local_d8,"SharedFragmentB should be of expected type");
          FVar15.Data = (FScriptContainerElement *)L"";
          if (local_d8.Data.ArrayNum != 0) {
            FVar15.Data = local_d8.Data.AllocatorInstance.Data;
          }
          bVar6 = FAutomationTestBase::TestEqual
                            (pFVar10,(wchar_t *)FVar15.Data,(ulong64)local_138.ScriptStruct,
                             (ulong64)pUVar12);
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          if (bVar6) {
            FVar13 = (FMassEntityHandle)FAITestBase::GetTestRunner((FAITestBase *)this);
            local_res8 = FVar13;
            ::FString::FString(&local_c8,
                               "SharedFragmentA and SharedFragmentB should be different instanceS");
            puVar5 = local_138.StructMemory;
            if ((local_128.ScriptStruct == local_138.ScriptStruct) &&
               (local_128.StructMemory == local_138.StructMemory)) {
              pcVar3 = *(code **)(*(longlong *)FVar13 + 0x28);
              ::FString::PrintfImpl(&local_78,L"%s: The two values are equal.");
              (*pcVar3)(local_res8,&local_78,0);
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              bVar6 = true;
            }
            else {
              bVar6 = false;
            }
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            if (!bVar6) {
              FVar13 = (FMassEntityHandle)FAITestBase::GetTestRunner((FAITestBase *)this);
              local_res8 = FVar13;
              ::FString::FString(&local_b8,"SharedFragmentA and SharedFragmentB should be distinct")
              ;
              if ((local_128.ScriptStruct == local_138.ScriptStruct) &&
                 (local_128.StructMemory == puVar5)) {
                pcVar3 = *(code **)(*(longlong *)FVar13 + 0x28);
                ::FString::PrintfImpl(&local_68,L"%s: The two values are equal.");
                (*pcVar3)(local_res8,&local_68,0);
                if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_68.Data.AllocatorInstance.Data);
                }
                bVar6 = true;
              }
              else {
                bVar6 = false;
              }
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
              if (!bVar6) {
                pFVar10 = FAITestBase::GetTestRunner((FAITestBase *)this);
                pFVar14 = UE::StructUtils::GetStructRef<FTestSharedFragment_Int_const_>
                                    (local_128.ScriptStruct,local_128.StructMemory);
                iVar1 = pFVar14->Value;
                ::FString::FString(&local_a8,
                                   "SharedFragmentA\'s value should match the expected value");
                FVar15.Data = (FScriptContainerElement *)L"";
                if (local_a8.Data.ArrayNum != 0) {
                  FVar15.Data = local_a8.Data.AllocatorInstance.Data;
                }
                bVar6 = FAutomationTestBase::TestEqual(pFVar10,(wchar_t *)FVar15.Data,iVar1,0x3ff);
                if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                }
                if (bVar6) {
                  pFVar10 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  pFVar14 = UE::StructUtils::GetStructRef<FTestSharedFragment_Int_const_>
                                      (local_138.ScriptStruct,local_138.StructMemory);
                  iVar1 = pFVar14->Value;
                  ::FString::FString(&local_98,
                                     "SharedFragmentB\'s value should match the expected value");
                  FVar15.Data = (FScriptContainerElement *)L"";
                  if (local_98.Data.ArrayNum != 0) {
                    FVar15.Data = local_98.Data.AllocatorInstance.Data;
                  }
                  bVar6 = FAutomationTestBase::TestEqual(pFVar10,(wchar_t *)FVar15.Data,iVar1,0x3f);
                  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_98.Data.AllocatorInstance.Data);
                  }
                  if (bVar6) {
                    return true;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  return false;
}

