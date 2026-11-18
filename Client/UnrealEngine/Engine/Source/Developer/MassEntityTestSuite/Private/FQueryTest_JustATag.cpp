// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14717def0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassQueryTest::FQueryTest_JustATag::InstantTest(FQueryTest_JustATag *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FMassArchetypeCompositionDescriptor *pFVar6;
  ForAnyElementType FVar7;
  undefined1 auStack_6d8 [32];
  FMassArchetypeCreationParams local_6b8;
  FMassArchetypeCreationParams local_6a8;
  FMassArchetypeCreationParams local_698;
  FMassArchetypeCreationParams local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FMassArchetypeHandle local_648;
  FMassArchetypeHandle local_638;
  FMassArchetypeHandle local_628;
  FMassArchetypeHandle local_618;
  undefined1 local_608 [32];
  undefined1 local_5e8 [32];
  undefined1 local_5c8 [32];
  undefined1 local_5a8 [32];
  undefined1 local_588 [32];
  undefined1 local_568 [32];
  undefined1 local_548 [32];
  undefined1 local_528 [32];
  undefined1 local_508 [32];
  undefined1 local_4e8 [32];
  undefined1 local_4c8 [32];
  undefined1 local_4a8 [32];
  undefined1 local_488 [32];
  undefined1 local_468 [32];
  undefined1 local_448 [32];
  undefined1 local_428 [32];
  undefined1 local_408 [32];
  undefined1 local_3e8 [32];
  undefined1 local_3c8 [32];
  undefined1 local_3a8 [32];
  undefined1 local_388 [624];
  ushort local_118;
  short local_116;
  int local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_6d8;
  FMassEntityQuery::FMassEntityQuery
            ((FMassEntityQuery *)local_388,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  if ((local_118 & 0x10) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                       ,0x114,L"Modifying requirements before initialization is not supported.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestTag_A>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)(local_388 + 0x40),iVar5);
  local_116 = local_116 + 1;
  local_118 = local_118 & 0xfffe;
  FMassEntityQuery::CacheArchetypes((FMassEntityQuery *)local_388);
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
  bVar3 = local_88 == 0;
  pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_678,"Initial number of matching archetypes matches expectations");
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_678.Data.ArrayNum != 0) {
    FVar7.Data = local_678.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar7.Data,bVar3);
  if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_678.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
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
    pFVar6 = FMassEntityManager::GetArchetypeComposition
                       (*(FMassEntityManager **)&this->field_0x28,
                        (FMassArchetypeHandle *)&this->field_0x60);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_4c8,(FBitSetContainer *)pFVar6);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_4a8,(FBitSetContainer *)&pFVar6->Tags);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_488,(FBitSetContainer *)&pFVar6->ChunkFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_468,(FBitSetContainer *)&pFVar6->SharedFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_448,(FBitSetContainer *)&pFVar6->ConstSharedFragments);
    iVar5 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FTestTag_A>();
    FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_4a8,iVar5);
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
    local_6b8.ChunkMemorySize = 0;
    local_6b8.DebugName.ComparisonIndex.Value = 0;
    local_6b8.DebugName.Number = 0;
    local_6b8.DebugColor.field0_0x0 = (FColor_u_0)0x0;
    FMassEntityManager::CreateArchetype
              (*(FMassEntityManager **)&this->field_0x28,&local_648,
               (FMassArchetypeCompositionDescriptor *)local_4c8,&local_6b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_648.DataPtr.SharedReferenceCount.ReferenceController);
    if ((void *)local_448._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_448._16_8_);
    }
    if ((void *)local_468._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_468._16_8_);
    }
    if ((void *)local_488._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_488._16_8_);
    }
    if ((void *)local_4a8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_4a8._16_8_);
    }
    if ((void *)local_4c8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_4c8._16_8_);
    }
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
    pFVar6 = FMassEntityManager::GetArchetypeComposition
                       (*(FMassEntityManager **)&this->field_0x28,
                        (FMassArchetypeHandle *)&this->field_0x60);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_428,(FBitSetContainer *)pFVar6);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_408,(FBitSetContainer *)&pFVar6->Tags);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_3e8,(FBitSetContainer *)&pFVar6->ChunkFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_3c8,(FBitSetContainer *)&pFVar6->SharedFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_3a8,(FBitSetContainer *)&pFVar6->ConstSharedFragments);
    iVar5 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
            GetTypeIndex<FTestTag_B>();
    FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_408,iVar5);
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
    local_6a8.ChunkMemorySize = 0;
    local_6a8.DebugName.ComparisonIndex.Value = 0;
    local_6a8.DebugName.Number = 0;
    local_6a8.DebugColor.field0_0x0 = (FColor_u_0)0x0;
    FMassEntityManager::CreateArchetype
              (*(FMassEntityManager **)&this->field_0x28,&local_638,
               (FMassArchetypeCompositionDescriptor *)local_428,&local_6a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_638.DataPtr.SharedReferenceCount.ReferenceController);
    if ((void *)local_3a8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_3a8._16_8_);
    }
    if ((void *)local_3c8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_3c8._16_8_);
    }
    if ((void *)local_3e8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_3e8._16_8_);
    }
    if ((void *)local_408._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_408._16_8_);
    }
    if ((void *)local_428._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_428._16_8_);
    }
    FMassEntityQuery::CacheArchetypes((FMassEntityQuery *)local_388);
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
    iVar5 = local_88;
    pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
    ::FString::FString(&local_668,"A: number of matching archetypes matches expectations.");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_668.Data.ArrayNum != 0) {
      FVar7.Data = local_668.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar7.Data,iVar5,1);
    if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
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
      pFVar6 = FMassEntityManager::GetArchetypeComposition
                         (*(FMassEntityManager **)&this->field_0x28,
                          (FMassArchetypeHandle *)&this->field_0x60);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)local_608,(FBitSetContainer *)pFVar6);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)local_5e8,(FBitSetContainer *)&pFVar6->Tags);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)local_5c8,(FBitSetContainer *)&pFVar6->ChunkFragments);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)local_5a8,(FBitSetContainer *)&pFVar6->SharedFragments);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)local_588,(FBitSetContainer *)&pFVar6->ConstSharedFragments);
      iVar5 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
              GetTypeIndex<FTestTag_A>();
      FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_5e8,iVar5);
      TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::Add<FTestTag_C>
                ((TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
                 local_5e8);
      TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::Add<FTestTag_D>
                ((TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
                 local_5e8);
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
      local_698.ChunkMemorySize = 0;
      local_698.DebugName.ComparisonIndex.Value = 0;
      local_698.DebugName.Number = 0;
      local_698.DebugColor.field0_0x0 = (FColor_u_0)0x0;
      FMassEntityManager::CreateArchetype
                (*(FMassEntityManager **)&this->field_0x28,&local_628,
                 (FMassArchetypeCompositionDescriptor *)local_608,&local_698);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_628.DataPtr.SharedReferenceCount.ReferenceController);
      if ((void *)local_588._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_588._16_8_);
      }
      if ((void *)local_5a8._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_5a8._16_8_);
      }
      if ((void *)local_5c8._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_5c8._16_8_);
      }
      if ((void *)local_5e8._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_5e8._16_8_);
      }
      if ((void *)local_608._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_608._16_8_);
      }
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
      pFVar6 = FMassEntityManager::GetArchetypeComposition
                         (*(FMassEntityManager **)&this->field_0x28,
                          (FMassArchetypeHandle *)&this->field_0x60);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)local_568,(FBitSetContainer *)pFVar6);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)local_548,(FBitSetContainer *)&pFVar6->Tags);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)local_528,(FBitSetContainer *)&pFVar6->ChunkFragments);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)local_508,(FBitSetContainer *)&pFVar6->SharedFragments);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)local_4e8,(FBitSetContainer *)&pFVar6->ConstSharedFragments);
      iVar5 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
              GetTypeIndex<FTestTag_B>();
      FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_548,iVar5);
      TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::Add<FTestTag_C>
                ((TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
                 local_548);
      TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::Add<FTestTag_D>
                ((TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
                 local_548);
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
      local_688.ChunkMemorySize = 0;
      local_688.DebugName.ComparisonIndex.Value = 0;
      local_688.DebugName.Number = 0;
      local_688.DebugColor.field0_0x0 = (FColor_u_0)0x0;
      FMassEntityManager::CreateArchetype
                (*(FMassEntityManager **)&this->field_0x28,&local_618,
                 (FMassArchetypeCompositionDescriptor *)local_568,&local_688);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_618.DataPtr.SharedReferenceCount.ReferenceController);
      if ((void *)local_4e8._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_4e8._16_8_);
      }
      if ((void *)local_508._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_508._16_8_);
      }
      if ((void *)local_528._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_528._16_8_);
      }
      if ((void *)local_548._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_548._16_8_);
      }
      if ((void *)local_568._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_568._16_8_);
      }
      FMassEntityQuery::CacheArchetypes((FMassEntityQuery *)local_388);
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
      pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
      ::FString::FString(&local_658,"B: number of matching archetypes matches expectations.");
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_658.Data.ArrayNum != 0) {
        FVar7.Data = local_658.Data.AllocatorInstance.Data;
      }
      bVar3 = FAutomationTestBase::TestEqual(pFVar1,(wchar_t *)FVar7.Data,local_88,2);
      if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_658.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        bVar3 = true;
        goto LAB_14717e653;
      }
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar3 = false;
LAB_14717e653:
  FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)local_388);
  return bVar3;
}

