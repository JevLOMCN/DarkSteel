// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147180380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassQueryTest::FQueryTest_TagPresent::InstantTest(FQueryTest_TagPresent *this)

{
  FMassEntityManager *this_00;
  FAutomationTestBase *pFVar1;
  FMassArchetypeData *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UPackage *pUVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_448 [32];
  ForAnyElementType local_408;
  int local_400;
  int local_3fc;
  FMassArchetypeCreationParams local_3f8;
  FString local_3e8;
  FString local_3d8;
  UScriptStruct *local_3c8;
  UScriptStruct *pUStack_3c0;
  FScriptContainerElement *local_3b8;
  int iStack_3b0;
  undefined4 uStack_3ac;
  FMassArchetypeHandle local_3a8;
  TArrayView<UScriptStruct_const_*_const,int> local_398;
  undefined1 local_388 [624];
  ushort local_118;
  ushort local_116;
  ForAnyElementType local_90;
  int local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_448;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar7 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar7,
                         L"TestFragment_Float");
  }
  local_3c8 = Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Tag.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Tag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Tag,(UObject *)pUVar7,
                         L"TestFragment_Tag");
  }
  local_400 = 2;
  local_408.Data = (FScriptContainerElement *)0x0;
  pUStack_3c0 = Z_Registration_Info_UScriptStruct_FTestFragment_Tag.OuterSingleton;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,2,0,&local_408,2,&local_3fc);
  *(UScriptStruct **)local_408.Data = local_3c8;
  *(UScriptStruct **)(local_408.Data + 8) = pUStack_3c0;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = local_400;
  this_00 = *(FMassEntityManager **)&this->field_0x28;
  local_3b8 = local_408.Data;
  local_3f8.ChunkMemorySize = 0;
  local_3f8.DebugName.ComparisonIndex.Value = 0;
  local_3f8.DebugName.Number = 0;
  local_3f8.DebugColor.field0_0x0 = (FColor_u_0)0x0;
  if (local_400 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iStack_3b0 = iVar6;
  local_398._12_4_ = uStack_3ac;
  local_398.ArrayNum = iVar6;
  local_398.DataPtr = (UScriptStruct **)local_3b8;
  FMassEntityManager::CreateArchetype(this_00,&local_3a8,&local_398,&local_3f8);
  FMassEntityQuery::FMassEntityQuery
            ((FMassEntityQuery *)local_388,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)local_388,ReadWrite,All);
  if ((local_118 & 0x10) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                       ,0x114,L"Modifying requirements before initialization is not supported.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestFragment_Tag>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)(local_388 + 0x40),iVar6);
  local_116 = local_116 + 1;
  local_118 = local_118 & 0xfffe;
  FMassEntityQuery::CacheArchetypes((FMassEntityQuery *)local_388);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = local_88;
  pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_3e8,"There\'s a single archetype matching the requirements");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_3e8.Data.ArrayNum != 0) {
    FVar8.Data = local_3e8.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar8.Data,iVar6,1);
  if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    if (*(longlong *)&this->field_0x20 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
    if (local_88 < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar2 = *(FMassArchetypeData **)local_90.Data;
    ::FString::FString(&local_3d8,"The only valid archetype is FloatsTagArchetype");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_3d8.Data.ArrayNum != 0) {
      FVar8.Data = local_3d8.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestTrue
                      (pFVar1,(wchar_t *)FVar8.Data,local_3a8.DataPtr.Object == pFVar2);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      bVar4 = true;
      goto LAB_1471806ad;
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar4 = false;
LAB_1471806ad:
  FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)local_388);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a8.DataPtr.SharedReferenceCount.ReferenceController);
  if (local_408.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.Data);
  }
  return bVar4;
}

