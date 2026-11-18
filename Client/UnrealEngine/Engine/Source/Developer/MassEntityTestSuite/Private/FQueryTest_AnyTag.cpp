// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147177e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassQueryTest::FQueryTest_AnyTag::InstantTest(FQueryTest_AnyTag *this)

{
  FMassEntityManager *pFVar1;
  code *pcVar2;
  ushort uVar3;
  bool bVar4;
  undefined1 uVar5;
  ushort uVar6;
  int iVar7;
  UPackage *pUVar8;
  ForAnyElementType FVar9;
  FAutomationTestBase *pFVar10;
  undefined1 auStack_598 [32];
  FMassArchetypeCreationParams local_578;
  FMassArchetypeCreationParams local_568;
  FMassArchetypeCreationParams local_558;
  FMassArchetypeCreationParams local_548;
  FMassArchetypeCreationParams local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  UScriptStruct **local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  UScriptStruct **local_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  UScriptStruct **local_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  UScriptStruct **local_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  UScriptStruct **local_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  FMassArchetypeHandle local_498;
  FMassArchetypeHandle local_488;
  FMassArchetypeHandle local_478;
  TArrayView<UScriptStruct_const_*_const,int> local_468;
  TArrayView<UScriptStruct_const_*_const,int> local_458;
  TArrayView<UScriptStruct_const_*_const,int> local_448;
  TArrayView<UScriptStruct_const_*_const,int> local_438;
  TArrayView<UScriptStruct_const_*_const,int> local_428;
  FMassArchetypeHandle local_418;
  FMassArchetypeHandle local_408;
  UScriptStruct *local_3f8;
  UScriptStruct *local_3f0;
  UScriptStruct *local_3e8;
  UScriptStruct *local_3e0;
  UScriptStruct *local_3d8;
  UScriptStruct *local_3d0;
  UScriptStruct *local_3c8;
  UScriptStruct *local_3c0;
  UScriptStruct *local_3b8;
  UScriptStruct *local_3b0;
  UScriptStruct *local_3a8;
  UScriptStruct *local_3a0;
  UScriptStruct *local_398;
  UScriptStruct *local_390;
  UScriptStruct *local_388;
  undefined1 local_378 [624];
  ushort local_108;
  ushort local_106;
  ForAnyElementType local_80;
  int local_78;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_598;
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pFVar1 = *(FMassEntityManager **)&this->field_0x28;
  local_578.ChunkMemorySize = 0;
  local_578.DebugName.ComparisonIndex.Value = 0;
  local_578.DebugName.Number = 0;
  local_578.DebugColor.field0_0x0 = (FColor_u_0)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar8,
                         L"TestFragment_Int");
  }
  local_3f8 = Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_A,(UObject *)pUVar8,L"TestTag_A");
  }
  local_3f0 = Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_B,(UObject *)pUVar8,L"TestTag_B");
  }
  local_4e8 = &local_3f8;
  uStack_4e0 = 3;
  local_468._12_4_ = uStack_4dc;
  local_468.ArrayNum = 3;
  local_468.DataPtr = local_4e8;
  local_3e8 = Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton;
  FMassEntityManager::CreateArchetype(pFVar1,&local_478,&local_468,&local_578);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pFVar1 = *(FMassEntityManager **)&this->field_0x28;
  local_568.ChunkMemorySize = 0;
  local_568.DebugName.ComparisonIndex.Value = 0;
  local_568.DebugName.Number = 0;
  local_568.DebugColor.field0_0x0 = (FColor_u_0)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar8,
                         L"TestFragment_Int");
  }
  local_3e0 = Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_A,(UObject *)pUVar8,L"TestTag_A");
  }
  local_3d8 = Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_C,(UObject *)pUVar8,L"TestTag_C");
  }
  local_4d8 = &local_3e0;
  uStack_4d0 = 3;
  local_458._12_4_ = uStack_4cc;
  local_458.ArrayNum = 3;
  local_458.DataPtr = local_4d8;
  local_3d0 = Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton;
  FMassEntityManager::CreateArchetype(pFVar1,&local_488,&local_458,&local_568);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pFVar1 = *(FMassEntityManager **)&this->field_0x28;
  local_558.ChunkMemorySize = 0;
  local_558.DebugName.ComparisonIndex.Value = 0;
  local_558.DebugName.Number = 0;
  local_558.DebugColor.field0_0x0 = (FColor_u_0)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar8,
                         L"TestFragment_Int");
  }
  local_3c8 = Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_B,(UObject *)pUVar8,L"TestTag_B");
  }
  local_3c0 = Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_C,(UObject *)pUVar8,L"TestTag_C");
  }
  local_4c8 = &local_3c8;
  uStack_4c0 = 3;
  local_448._12_4_ = uStack_4bc;
  local_448.ArrayNum = 3;
  local_448.DataPtr = local_4c8;
  local_3b8 = Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton;
  FMassEntityManager::CreateArchetype(pFVar1,&local_498,&local_448,&local_558);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pFVar1 = *(FMassEntityManager **)&this->field_0x28;
  local_548.ChunkMemorySize = 0;
  local_548.DebugName.ComparisonIndex.Value = 0;
  local_548.DebugName.Number = 0;
  local_548.DebugColor.field0_0x0 = (FColor_u_0)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar8,
                         L"TestFragment_Int");
  }
  local_3b0 = Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_B,(UObject *)pUVar8,L"TestTag_B");
  }
  local_3a8 = Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestTag_D.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_D,(UObject *)pUVar8,L"TestTag_D");
  }
  local_4b8 = &local_3b0;
  uStack_4b0 = 3;
  local_438._12_4_ = uStack_4ac;
  local_438.ArrayNum = 3;
  local_438.DataPtr = local_4b8;
  local_3a0 = Z_Registration_Info_UScriptStruct_FTestTag_D.OuterSingleton;
  FMassEntityManager::CreateArchetype(pFVar1,&local_408,&local_438,&local_548);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  pFVar1 = *(FMassEntityManager **)&this->field_0x28;
  local_538.ChunkMemorySize = 0;
  local_538.DebugName.ComparisonIndex.Value = 0;
  local_538.DebugName.Number = 0;
  local_538.DebugColor.field0_0x0 = (FColor_u_0)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar8,
                         L"TestFragment_Float");
  }
  local_398 = Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_A,(UObject *)pUVar8,L"TestTag_A");
  }
  local_390 = Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_C,(UObject *)pUVar8,L"TestTag_C");
  }
  local_4a8 = &local_398;
  uStack_4a0 = 3;
  local_428._12_4_ = uStack_49c;
  local_428.ArrayNum = 3;
  local_428.DataPtr = local_4a8;
  local_388 = Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton;
  FMassEntityManager::CreateArchetype(pFVar1,&local_418,&local_428,&local_538);
  FMassEntityQuery::FMassEntityQuery
            ((FMassEntityQuery *)local_378,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)local_378,ReadOnly,All);
  if (((local_108 & 0x10) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x114,L"Modifying requirements before initialization is not supported."),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  iVar7 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestTag_A>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)(local_378 + 0x60),iVar7);
  local_106 = local_106 + 1;
  uVar6 = local_108 & 0xfffe;
  uVar3 = local_108 & 0x10;
  local_108 = uVar6;
  if ((uVar3 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x114,L"Modifying requirements before initialization is not supported."),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::Add<FTestTag_C>
            ((TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
             (local_378 + 0x60));
  local_106 = local_106 + 1;
  local_108 = local_108 & 0xfffe;
  FMassEntityQuery::CacheArchetypes((FMassEntityQuery *)local_378);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  iVar7 = local_78;
  pFVar10 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_528,"Only Archetypes tagged with A or C should matched the query");
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_528.Data.ArrayNum != 0) {
    FVar9.Data = local_528.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual(pFVar10,(wchar_t *)FVar9.Data,iVar7,3);
  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pFVar10 = *(FAutomationTestBase **)&this->field_0x20;
    for (FVar9.Data = local_80.Data; FVar9.Data != local_80.Data + (longlong)local_78 * 0x10;
        FVar9.Data = FVar9.Data + 0x10) {
      if (*(FMassArchetypeData **)FVar9.Data == local_478.DataPtr.Object) {
        iVar7 = (int)((longlong)FVar9.Data - (longlong)local_80.Data >> 4);
        goto LAB_147178517;
      }
    }
    iVar7 = -1;
LAB_147178517:
    ::FString::FString(&local_518,"ABArchetype should be amongst the matched archetypes");
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_518.Data.ArrayNum != 0) {
      FVar9.Data = local_518.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestTrue(pFVar10,(wchar_t *)FVar9.Data,iVar7 != -1);
    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      if ((*(longlong *)&this->field_0x20 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar10 = *(FAutomationTestBase **)&this->field_0x20;
      for (FVar9.Data = local_80.Data; FVar9.Data != local_80.Data + (longlong)local_78 * 0x10;
          FVar9.Data = FVar9.Data + 0x10) {
        if (*(FMassArchetypeData **)FVar9.Data == local_488.DataPtr.Object) {
          iVar7 = (int)((longlong)FVar9.Data - (longlong)local_80.Data >> 4);
          goto LAB_1471785c7;
        }
      }
      iVar7 = -1;
LAB_1471785c7:
      ::FString::FString(&local_508,"ACArchetype should be amongst the matched archetypes");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_508.Data.ArrayNum != 0) {
        FVar9.Data = local_508.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestTrue(pFVar10,(wchar_t *)FVar9.Data,iVar7 != -1);
      if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_508.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pFVar10 = FAITestBase::GetTestRunner((FAITestBase *)this);
        for (FVar9.Data = local_80.Data; FVar9.Data != local_80.Data + (longlong)local_78 * 0x10;
            FVar9.Data = FVar9.Data + 0x10) {
          if (*(FMassArchetypeData **)FVar9.Data == local_498.DataPtr.Object) {
            iVar7 = (int)((longlong)FVar9.Data - (longlong)local_80.Data >> 4);
            goto LAB_147178653;
          }
        }
        iVar7 = -1;
LAB_147178653:
        ::FString::FString(&local_4f8,"BCArchetype should be amongst the matched archetypes");
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_4f8.Data.ArrayNum != 0) {
          FVar9.Data = local_4f8.Data.AllocatorInstance.Data;
        }
        bVar4 = FAutomationTestBase::TestTrue(pFVar10,(wchar_t *)FVar9.Data,iVar7 != -1);
        if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          bVar4 = true;
          goto LAB_1471786c2;
        }
      }
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar4 = false;
LAB_1471786c2:
  FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)local_378);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_418.DataPtr.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_408.DataPtr.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_498.DataPtr.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_488.DataPtr.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_478.DataPtr.SharedReferenceCount.ReferenceController);
  return bVar4;
}

