// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147176900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassQueryTest::FQueryTest_AllOptional::InstantTest(FQueryTest_AllOptional *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UPackage *pUVar9;
  FMassArchetypeCompositionDescriptor *pFVar10;
  FStructSharedMemory *pFVar11;
  FMassEntityManager *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  FAutomationTestBase *pFVar14;
  longlong lVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  undefined1 auStackY_808 [32];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_7d8;
  undefined4 local_7c8;
  undefined4 local_7c4;
  uchar local_7c0 [8];
  FSharedStruct local_7b8;
  FSharedStruct local_7a8;
  FMassArchetypeCreationParams local_798;
  FMassArchetypeCreationParams local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  undefined8 local_748;
  FSharedReferencer<1> local_740;
  undefined8 local_738;
  FSharedReferencer<1> local_730;
  FString local_728;
  FString local_718;
  FMassEntityHandle *local_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  FMassArchetypeEntityCollection *local_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  FMassEntityHandle *local_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  FMassArchetypeEntityCollection *local_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  FSharedStruct local_6c8;
  FConstSharedStruct local_6b8;
  FSharedStruct local_6a8;
  FConstSharedStruct local_698;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_688;
  FMassArchetypeHandle local_678;
  FMassArchetypeHandle local_668;
  FSharedStruct local_658;
  TArrayView<FMassEntityHandle_const_,int> local_648;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_638;
  FSharedStruct local_628;
  TArrayView<FMassEntityHandle_const_,int> local_618;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_608;
  FMassArchetypeEntityCollection local_5f8;
  FMassArchetypeEntityCollection local_5d0;
  undefined1 local_5a8 [24];
  void *local_590;
  undefined4 local_588;
  undefined4 local_584;
  void *local_570;
  undefined4 local_568;
  undefined4 local_564;
  ForAnyElementType local_560;
  undefined8 local_558;
  ForAnyElementType local_550;
  undefined8 local_548;
  undefined1 local_538 [24];
  void *local_520;
  undefined4 local_518;
  undefined4 local_514;
  void *local_500;
  undefined4 local_4f8;
  undefined4 local_4f4;
  ForAnyElementType local_4f0;
  undefined8 local_4e8;
  ForAnyElementType local_4e0;
  undefined8 local_4d8;
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
  ushort local_116;
  int local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_808;
  FMassEntityQuery::FMassEntityQuery
            ((FMassEntityQuery *)local_388,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)local_388,None,Optional);
  if (((local_118 & 0x10) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x114,L"Modifying requirements before initialization is not supported."),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  iVar8 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
          GetTypeIndex<FTestTag_A>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)(local_388 + 0xa0),iVar8);
  local_116 = local_116 + 1;
  local_118 = local_118 & 0xfffe;
  FMassFragmentRequirements::AddChunkRequirement<FTestChunkFragment_Int>
            ((FMassFragmentRequirements *)local_388,None,Optional);
  FMassFragmentRequirements::AddSharedRequirement<FTestSharedFragment_Int>
            ((FMassFragmentRequirements *)local_388,None,Optional);
  FMassFragmentRequirements::AddConstSharedRequirement<FTestConstSharedFragment_Int>
            ((FMassFragmentRequirements *)local_388,Optional);
  FMassEntityQuery::CacheArchetypes((FMassEntityQuery *)local_388);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  bVar6 = local_88 == 2;
  pFVar14 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_778,"Initial number of matching archetypes matches expectations");
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_778.Data.ArrayNum != 0) {
    FVar17.Data = local_778.Data.AllocatorInstance.Data;
  }
  bVar6 = FAutomationTestBase::TestTrue(pFVar14,(wchar_t *)FVar17.Data,bVar6);
  if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_778.Data.AllocatorInstance.Data);
  }
  if (!bVar6) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    goto LAB_14717792f;
  }
  local_7d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7d8.ArrayNum = 0;
  local_7d8.ArrayMax = 0;
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_688,
             (FMassArchetypeHandle *)&this->field_0x60,10,&local_7d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_688.SharedReferenceCount.ReferenceController);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar12 = *(FMassEntityManager **)&this->field_0x28;
  if (Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar9 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_A,(UObject *)pUVar9,L"TestTag_A");
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton;
  if ((local_7d8.ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  FMassEntityManager::AddTagToEntity
            (pFVar12,*(FMassEntityHandle *)local_7d8.AllocatorInstance.Data,pUVar3);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  pFVar12 = *(FMassEntityManager **)&this->field_0x28;
  if (Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar9 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_B,(UObject *)pUVar9,L"TestTag_B");
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FTestTag_B.OuterSingleton;
  if ((local_7d8.ArrayNum < 2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  FMassEntityManager::AddTagToEntity
            (pFVar12,*(FMassEntityHandle *)(local_7d8.AllocatorInstance.Data + 8),pUVar3);
  FMassEntityQuery::CacheArchetypes((FMassEntityQuery *)local_388);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  iVar8 = local_88;
  pFVar14 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_768,"A: number of matching archetypes matches expectations.");
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_768.Data.ArrayNum != 0) {
    FVar17.Data = local_768.Data.AllocatorInstance.Data;
  }
  bVar6 = FAutomationTestBase::TestEqual(pFVar14,(wchar_t *)FVar17.Data,iVar8,3);
  if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_768.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    if ((*(longlong *)&this->field_0x28 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pFVar10 = FMassEntityManager::GetArchetypeComposition
                        (*(FMassEntityManager **)&this->field_0x28,
                         (FMassArchetypeHandle *)&this->field_0x60);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_4c8,(FBitSetContainer *)pFVar10);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_4a8,(FBitSetContainer *)&pFVar10->Tags);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_488,(FBitSetContainer *)&pFVar10->ChunkFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_468,(FBitSetContainer *)&pFVar10->SharedFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_448,(FBitSetContainer *)&pFVar10->ConstSharedFragments);
    TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
    ::Add<FTestChunkFragment_Int>
              ((TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)local_488);
    if ((*(longlong *)&this->field_0x28 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    local_798.ChunkMemorySize = 0;
    local_798.DebugName.ComparisonIndex.Value = 0;
    local_798.DebugName.Number = 0;
    local_798.DebugColor.field0_0x0 = (FColor_u_0)0x0;
    FMassEntityManager::CreateArchetype
              (*(FMassEntityManager **)&this->field_0x28,&local_678,
               (FMassArchetypeCompositionDescriptor *)local_4c8,&local_798);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_678.DataPtr.SharedReferenceCount.ReferenceController);
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
    if ((*(longlong *)&this->field_0x28 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    pFVar10 = FMassEntityManager::GetArchetypeComposition
                        (*(FMassEntityManager **)&this->field_0x28,
                         (FMassArchetypeHandle *)&this->field_0x60);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_428,(FBitSetContainer *)pFVar10);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_408,(FBitSetContainer *)&pFVar10->Tags);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_3e8,(FBitSetContainer *)&pFVar10->ChunkFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_3c8,(FBitSetContainer *)&pFVar10->SharedFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_3a8,(FBitSetContainer *)&pFVar10->ConstSharedFragments);
    TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
    ::Add<FTestChunkFragment_Float>
              ((TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)local_3e8);
    if ((*(longlong *)&this->field_0x28 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    local_788.ChunkMemorySize = 0;
    local_788.DebugName.ComparisonIndex.Value = 0;
    local_788.DebugName.Number = 0;
    local_788.DebugColor.field0_0x0 = (FColor_u_0)0x0;
    FMassEntityManager::CreateArchetype
              (*(FMassEntityManager **)&this->field_0x28,&local_668,
               (FMassArchetypeCompositionDescriptor *)local_428,&local_788);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_668.DataPtr.SharedReferenceCount.ReferenceController);
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
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    iVar8 = local_88;
    pFVar14 = *(FAutomationTestBase **)&this->field_0x20;
    ::FString::FString(&local_758,"B: number of matching archetypes matches expectations.");
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_758.Data.ArrayNum != 0) {
      FVar17.Data = local_758.Data.AllocatorInstance.Data;
    }
    bVar6 = FAutomationTestBase::TestEqual(pFVar14,(wchar_t *)FVar17.Data,iVar8,4);
    if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_758.Data.AllocatorInstance.Data);
    }
    if (!bVar6) goto LAB_147177909;
    local_7c8 = 0;
    local_7b8.StructMemoryPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar9,
                           L"TestSharedFragment_Int");
    }
    FVar5.ReferenceController = local_7b8.StructMemoryPtr.SharedReferenceCount.ReferenceController;
    pUVar3 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      local_7b8.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
      if (local_7b8.StructMemoryPtr.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_7b8.StructMemoryPtr.SharedReferenceCount.ReferenceController)->
                  SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(local_7b8.StructMemoryPtr.SharedReferenceCount.ReferenceController)->
                      _padding_)();
          LOCK();
          paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      uVar16 = (uint)*(short *)((longlong)
                                &(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.
                                 OuterSingleton)->_padding_ + 4);
      pFVar11 = FMemory::Malloc((longlong)
                                (int)(((int)(
                                            Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int
                                            .OuterSingleton)->_padding_ + -1 + uVar16 & -uVar16) +
                                     (uVar16 + 7 & -uVar16)),uVar16);
      (pFVar11->ScriptStruct).field0_0x0.DebugPtr = pUVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (pFVar11->ScriptStruct).field0_0x0.DebugPtr;
      lVar15 = (longlong)*(short *)((longlong)&pUVar3->_padding_ + 4);
      (**(code **)(pUVar3->_padding_ + 0x2f8))
                (pUVar3,(longlong)&(pFVar11->ScriptStruct).field0_0x0 + lVar15 + 7 & -lVar15,1);
      pUVar3 = (pFVar11->ScriptStruct).field0_0x0.DebugPtr;
      lVar15 = (longlong)*(short *)((longlong)&pUVar3->_padding_ + 4);
      UScriptStruct::CopyScriptStruct
                (pUVar3,(void *)((longlong)&(pFVar11->ScriptStruct).field0_0x0 + lVar15 + 7 &
                                -lVar15),&local_7c8,1);
      if ((pFVar11 == (FStructSharedMemory *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                             ,0x44,
                             L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      local_740.ReferenceController = ::operator_new(0x18);
      if (local_740.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        (local_740.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
        (local_740.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
        ;
        (local_740.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        local_740.ReferenceController[1]._padding_ = (longlong)pFVar11;
      }
      local_748 = 0;
      local_7b8.StructMemoryPtr.Object = pFVar11;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_7b8.StructMemoryPtr.SharedReferenceCount,&local_740);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_740.ReferenceController);
    }
    local_5a8._0_4_ = 0xffffffff;
    local_5a8[4] = true;
    local_590 = (void *)0x0;
    local_588 = 0;
    local_584 = 0x80;
    local_570 = (void *)0x0;
    local_568 = 0;
    local_564 = 0x80;
    local_560.Data = (FScriptContainerElement *)0x0;
    local_558._0_4_ = 0;
    local_558._4_4_ = 0;
    local_550.Data = (FScriptContainerElement *)0x0;
    local_548._0_4_ = 0;
    local_548._4_4_ = 0;
    FMassArchetypeSharedFragmentValues::Add_GetRef
              ((FMassArchetypeSharedFragmentValues *)local_5a8,&local_658,&local_7b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_658.StructMemoryPtr.SharedReferenceCount.ReferenceController);
    if ((local_7d8.ArrayNum < 3) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    local_708 = (FMassEntityHandle *)(local_7d8.AllocatorInstance.Data + 0x10);
    uStack_700 = 1;
    local_648._12_4_ = uStack_6fc;
    local_648.ArrayNum = 1;
    local_648.DataPtr = local_708;
    FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
              (&local_5f8,(FMassArchetypeHandle *)&this->field_0x60,&local_648,NoDuplicates);
    pFVar12 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_6f8 = &local_5f8;
    uStack_6f0 = 1;
    local_638._12_4_ = uStack_6ec;
    local_638.ArrayNum = 1;
    local_638.DataPtr = local_6f8;
    FMassEntityManager::BatchAddSharedFragmentsForEntities
              (pFVar12,&local_638,(FMassArchetypeSharedFragmentValues *)local_5a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5f8.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController)
    ;
    if (local_5f8.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5f8.Ranges.AllocatorInstance.Data);
    }
    DestructItems<FSharedStruct,int>((FSharedStruct *)local_550.Data,(int)local_548);
    if (local_550.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_550.Data);
    }
    DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)local_560.Data,(int)local_558);
    if (local_560.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_560.Data);
    }
    if (local_570 != (void *)0x0) {
      FMemory::Free(local_570);
    }
    if (local_590 != (void *)0x0) {
      FMemory::Free(local_590);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7b8.StructMemoryPtr.SharedReferenceCount.ReferenceController);
    local_7c4 = 0;
    local_7a8.StructMemoryPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Float,(UObject *)pUVar9,
                           L"TestSharedFragment_Float");
      FVar5.ReferenceController = local_7a8.StructMemoryPtr.SharedReferenceCount.ReferenceController
      ;
      if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton !=
          (UScriptStruct *)0x0) goto LAB_147177377;
      local_7a8.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
      if (local_7a8.StructMemoryPtr.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_7a8.StructMemoryPtr.SharedReferenceCount.ReferenceController)->
                  SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(local_7a8.StructMemoryPtr.SharedReferenceCount.ReferenceController)->
                      _padding_)();
          LOCK();
          paVar1 = &(FVar5.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((FVar5.ReferenceController)->_padding_ + 8))(FVar5.ReferenceController,1);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
LAB_147177377:
      pUVar3 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton;
      uVar16 = (uint)*(short *)((longlong)
                                &(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.
                                 OuterSingleton)->_padding_ + 4);
      pFVar11 = FMemory::Malloc((longlong)
                                (int)(((int)(
                                            Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float
                                            .OuterSingleton)->_padding_ + -1 + uVar16 & -uVar16) +
                                     (uVar16 + 7 & -uVar16)),uVar16);
      (pFVar11->ScriptStruct).field0_0x0.DebugPtr = pUVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      pUVar3 = (pFVar11->ScriptStruct).field0_0x0.DebugPtr;
      lVar15 = (longlong)*(short *)((longlong)&pUVar3->_padding_ + 4);
      (**(code **)(pUVar3->_padding_ + 0x2f8))
                (pUVar3,(longlong)&(pFVar11->ScriptStruct).field0_0x0 + lVar15 + 7 & -lVar15,1);
      pUVar3 = (pFVar11->ScriptStruct).field0_0x0.DebugPtr;
      lVar15 = (longlong)*(short *)((longlong)&pUVar3->_padding_ + 4);
      UScriptStruct::CopyScriptStruct
                (pUVar3,(void *)((longlong)&(pFVar11->ScriptStruct).field0_0x0 + lVar15 + 7 &
                                -lVar15),&local_7c4,1);
      if ((pFVar11 == (FStructSharedMemory *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructMemory != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                             ,0x44,
                             L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      pTVar13 = ::operator_new(0x18);
      local_730.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        pTVar13->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
        ;
        pTVar13->WeakReferenceCount = (atomic<int>)0x1;
        pTVar13[1]._padding_ = (longlong)pFVar11;
        local_730.ReferenceController = pTVar13;
      }
      local_738 = 0;
      local_7a8.StructMemoryPtr.Object = pFVar11;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_7a8.StructMemoryPtr.SharedReferenceCount,&local_730);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_730.ReferenceController);
    }
    local_538._0_4_ = 0xffffffff;
    local_538[4] = true;
    local_520 = (void *)0x0;
    local_518 = 0;
    local_514 = 0x80;
    local_500 = (void *)0x0;
    local_4f8 = 0;
    local_4f4 = 0x80;
    local_4f0.Data = (FScriptContainerElement *)0x0;
    local_4e8._0_4_ = 0;
    local_4e8._4_4_ = 0;
    local_4e0.Data = (FScriptContainerElement *)0x0;
    local_4d8._0_4_ = 0;
    local_4d8._4_4_ = 0;
    FMassArchetypeSharedFragmentValues::Add_GetRef
              ((FMassArchetypeSharedFragmentValues *)local_538,&local_628,&local_7a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_628.StructMemoryPtr.SharedReferenceCount.ReferenceController);
    if ((local_7d8.ArrayNum < 4) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    local_6e8 = (FMassEntityHandle *)(local_7d8.AllocatorInstance.Data + 0x18);
    uStack_6e0 = 1;
    local_618._12_4_ = uStack_6dc;
    local_618.ArrayNum = 1;
    local_618.DataPtr = local_6e8;
    FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
              (&local_5d0,(FMassArchetypeHandle *)&this->field_0x60,&local_618,NoDuplicates);
    pFVar12 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_6d8 = &local_5d0;
    uStack_6d0 = 1;
    local_608._12_4_ = uStack_6cc;
    local_608.ArrayNum = 1;
    local_608.DataPtr = local_6d8;
    FMassEntityManager::BatchAddSharedFragmentsForEntities
              (pFVar12,&local_608,(FMassArchetypeSharedFragmentValues *)local_538);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5d0.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController)
    ;
    if (local_5d0.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d0.Ranges.AllocatorInstance.Data);
    }
    DestructItems<FSharedStruct,int>((FSharedStruct *)local_4e0.Data,(int)local_4d8);
    if (local_4e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e0.Data);
    }
    DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)local_4f0.Data,(int)local_4e8);
    if (local_4f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4f0.Data);
    }
    if (local_500 != (void *)0x0) {
      FMemory::Free(local_500);
    }
    if (local_520 != (void *)0x0) {
      FMemory::Free(local_520);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7a8.StructMemoryPtr.SharedReferenceCount.ReferenceController);
    FMassEntityQuery::CacheArchetypes((FMassEntityQuery *)local_388);
    pFVar14 = FAITestBase::GetTestRunner((FAITestBase *)this);
    iVar8 = local_88;
    ::FString::FString(&local_728,"C: number of matching archetypes matches expectations.");
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_728.Data.ArrayNum != 0) {
      FVar17.Data = local_728.Data.AllocatorInstance.Data;
    }
    bVar6 = FAutomationTestBase::TestEqual(pFVar14,(wchar_t *)FVar17.Data,iVar8,5);
    if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_728.Data.AllocatorInstance.Data);
    }
    if (!bVar6) goto LAB_147177909;
    local_7c0[0] = '\0';
    local_7c0[1] = '\0';
    local_7c0[2] = '\0';
    local_7c0[3] = '\0';
    local_6c8.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
    local_6c8.StructMemoryPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar9,
                           L"TestConstSharedFragment_Int");
    }
    FSharedStruct::InitializeAs
              (&local_6c8,
               Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton,
               local_7c0);
    local_6b8.StructMemoryPtr.Object = local_6c8.StructMemoryPtr.Object;
    local_6b8.StructMemoryPtr.SharedReferenceCount.ReferenceController =
         local_6c8.StructMemoryPtr.SharedReferenceCount.ReferenceController;
    if (local_6c8.StructMemoryPtr.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_6c8.StructMemoryPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_6c8.StructMemoryPtr.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6c8.StructMemoryPtr.SharedReferenceCount.ReferenceController);
    pFVar12 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    if ((local_7d8.ArrayNum < 5) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    FMassEntityManager::AddConstSharedFragmentToEntity
              (pFVar12,*(FMassEntityHandle *)(local_7d8.AllocatorInstance.Data + 0x20),&local_6b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6b8.StructMemoryPtr.SharedReferenceCount.ReferenceController);
    local_7c0[4] = '\0';
    local_7c0[5] = '\0';
    local_7c0[6] = '\0';
    local_7c0[7] = '\0';
    local_6a8.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
    local_6a8.StructMemoryPtr.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_MassEntityTestSuite();
      Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Float,
                           (UObject *)pUVar9,L"TestConstSharedFragment_Float");
    }
    FSharedStruct::InitializeAs
              (&local_6a8,
               Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float.OuterSingleton,
               local_7c0 + 4);
    local_698.StructMemoryPtr.Object = local_6a8.StructMemoryPtr.Object;
    local_698.StructMemoryPtr.SharedReferenceCount.ReferenceController =
         local_6a8.StructMemoryPtr.SharedReferenceCount.ReferenceController;
    if (local_6a8.StructMemoryPtr.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_6a8.StructMemoryPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_6a8.StructMemoryPtr.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6a8.StructMemoryPtr.SharedReferenceCount.ReferenceController);
    pFVar12 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    if ((local_7d8.ArrayNum < 6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    FMassEntityManager::AddConstSharedFragmentToEntity
              (pFVar12,*(FMassEntityHandle *)(local_7d8.AllocatorInstance.Data + 0x28),&local_698);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_698.StructMemoryPtr.SharedReferenceCount.ReferenceController);
    FMassEntityQuery::CacheArchetypes((FMassEntityQuery *)local_388);
    pFVar14 = FAITestBase::GetTestRunner((FAITestBase *)this);
    ::FString::FString(&local_718,"D: number of matching archetypes matches expectations.");
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_718.Data.ArrayNum != 0) {
      FVar17.Data = local_718.Data.AllocatorInstance.Data;
    }
    bVar6 = FAutomationTestBase::TestEqual(pFVar14,(wchar_t *)FVar17.Data,local_88,6);
    if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_718.Data.AllocatorInstance.Data);
    }
    if (!bVar6) goto LAB_147177909;
    bVar6 = true;
  }
  else {
LAB_147177909:
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    bVar6 = false;
  }
  if ((FMassEntityHandle *)local_7d8.AllocatorInstance.Data != (FMassEntityHandle *)0x0) {
    FMemory::Free(local_7d8.AllocatorInstance.Data);
  }
LAB_14717792f:
  FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)local_388);
  return bVar6;
}

