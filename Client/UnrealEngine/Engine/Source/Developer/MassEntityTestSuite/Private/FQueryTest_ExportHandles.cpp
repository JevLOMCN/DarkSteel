// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14717b0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_ExportHandles::InstantTest(FQueryTest_ExportHandles *this)

{
  FMassArchetypeEntityCollection *pFVar1;
  FMassEntityManager *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FAutomationTestBase *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  UScriptStruct *pUVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  UPackage *pUVar11;
  UStruct *pUVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  undefined1 auStackY_5c8 [32];
  undefined1 local_598;
  FIdentityFunctor local_597;
  FIdentityFunctor local_596;
  FIdentityFunctor local_595 [5];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_590;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_580;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_570;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_560;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_550;
  UScriptStruct *local_540;
  TSharedPtr<FMassEntityManager,1> local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FMassEntityHandle *local_4f8;
  int iStack_4f0;
  undefined4 uStack_4ec;
  FMassArchetypeEntityCollection *local_4e8;
  int iStack_4e0;
  undefined4 uStack_4dc;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_4d8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_4c8;
  TArrayView<FMassEntityHandle_const_,int> local_4b8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_4a8;
  undefined1 local_498 [24];
  void *pvStack_480;
  undefined8 local_478;
  undefined1 auStack_470 [16];
  void *pvStack_460;
  undefined8 local_458;
  ForAnyElementType FStack_450;
  undefined8 local_448;
  ForAnyElementType FStack_440;
  undefined8 local_438;
  undefined1 local_428 [24];
  void *pvStack_410;
  undefined8 local_408;
  undefined1 auStack_400 [16];
  void *pvStack_3f0;
  undefined8 local_3e8;
  ForAnyElementType FStack_3e0;
  undefined8 local_3d8;
  ForAnyElementType FStack_3d0;
  undefined8 local_3c8;
  undefined1 local_3b8 [16];
  void *local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined1 local_398 [16];
  void *pvStack_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined1 local_378 [624];
  ushort local_108;
  short local_106;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_590.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_590.ArrayNum = 0;
  local_590.ArrayMax = 0;
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  local_498._8_8_ = 0;
  auStack_470._0_8_ = 0;
  local_498._0_4_ = 0xffffffff;
  local_498[4] = true;
  local_498[5] = 0;
  local_498._6_2_ = 0;
  local_498._16_8_ = 0;
  pvStack_480 = (void *)0x0;
  auStack_470._8_8_ = 0;
  local_478 = 0x8000000000;
  pvStack_460 = (void *)0x0;
  local_458 = 0x8000000000;
  FStack_450.Data = (FScriptContainerElement *)0x0;
  local_448._0_4_ = 0;
  local_448._4_4_ = 0;
  FStack_440.Data = (FScriptContainerElement *)0x0;
  local_438._0_4_ = 0;
  local_438._4_4_ = 0;
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_4d8,
             (FMassArchetypeHandle *)&this->field_0x60,
             (FMassArchetypeSharedFragmentValues *)local_498,0xa000,&local_590);
  DestructItems<FSharedStruct,int>((FSharedStruct *)FStack_440.Data,(int)local_438);
  if (FStack_440.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_440.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)FStack_450.Data,(int)local_448);
  if (FStack_450.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_450.Data);
  }
  if (pvStack_460 != (void *)0x0) {
    FMemory::Free(pvStack_460);
  }
  if (pvStack_480 != (void *)0x0) {
    FMemory::Free(pvStack_480);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4d8.SharedReferenceCount.ReferenceController);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  local_428._8_8_ = 0;
  auStack_400._0_8_ = 0;
  local_428._0_4_ = 0xffffffff;
  local_428[4] = true;
  local_428[5] = 0;
  local_428._6_2_ = 0;
  local_428._16_8_ = 0;
  pvStack_410 = (void *)0x0;
  auStack_400._8_8_ = 0;
  local_408 = 0x8000000000;
  pvStack_3f0 = (void *)0x0;
  local_3e8 = 0x8000000000;
  FStack_3e0.Data = (FScriptContainerElement *)0x0;
  local_3d8._0_4_ = 0;
  local_3d8._4_4_ = 0;
  FStack_3d0.Data = (FScriptContainerElement *)0x0;
  local_3c8._0_4_ = 0;
  local_3c8._4_4_ = 0;
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_4c8,
             (FMassArchetypeHandle *)&this->field_0x50,
             (FMassArchetypeSharedFragmentValues *)local_428,0xa000,&local_590);
  DestructItems<FSharedStruct,int>((FSharedStruct *)FStack_3d0.Data,(int)local_3c8);
  if (FStack_3d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3d0.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)FStack_3e0.Data,(int)local_3d8);
  if (FStack_3e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3e0.Data);
  }
  if (pvStack_3f0 != (void *)0x0) {
    FMemory::Free(pvStack_3f0);
  }
  if (pvStack_410 != (void *)0x0) {
    FMemory::Free(pvStack_410);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4c8.SharedReferenceCount.ReferenceController);
  if ((local_590.ArrayNum != 0x14000) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entities.Num() == 2*Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassQueryTest.cpp"
                         ,0x39a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iVar10 = local_590.ArrayNum;
  local_4f8 = (FMassEntityHandle *)local_590.AllocatorInstance.Data;
  local_570.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_570.ArrayNum = 0;
  local_570.ArrayMax = 0;
  if ((local_590.ArrayNum < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iStack_4f0 = iVar10;
  local_4b8._12_4_ = uStack_4ec;
  local_4b8.ArrayNum = iVar10;
  local_4b8.DataPtr = local_4f8;
  UE::Mass::Utils::CreateEntityCollections
            (*(FMassEntityManager **)&this->field_0x28,&local_4b8,NoDuplicates,&local_570);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  pFVar2 = *(FMassEntityManager **)&this->field_0x28;
  local_398._0_8_ = 0;
  local_380 = 0;
  local_37c = 0x80;
  local_398._8_8_ = 0;
  pvStack_388 = (void *)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar11 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_A,(UObject *)pUVar11,L"TestTag_A");
  }
  pUVar7 = Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton;
  local_3a8 = (void *)0x0;
  local_3a0 = 0;
  local_39c = 0x80;
  pUVar12 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::GetBaseUStruct();
  if (pUVar12 == (UStruct *)0x0) {
LAB_14717b49c:
    local_540 = pUVar7;
    bVar8 = `TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Add'::__l6::<lambda_1>::operator()(&local_540);
    if (!bVar8) goto LAB_14717b4ca;
  }
  else {
    iVar10 = (int)pUVar12->_padding_;
    if (((int)pUVar7->_padding_ < iVar10) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar10 * 8) !=
        &pUVar12->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_14717b49c;
  }
  iVar10 = FStructTracker::FindOrAddStructTypeIndex
                     (&FMassTagBitSetStructTrackerWrapper::StructTracker,(UStruct *)pUVar7);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_3b8,iVar10);
LAB_14717b4ca:
  iVar10 = local_570.ArrayNum;
  local_4e8 = (FMassArchetypeEntityCollection *)local_570.AllocatorInstance.Data;
  if ((local_570.ArrayNum < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iStack_4e0 = iVar10;
  local_4a8._12_4_ = uStack_4dc;
  local_4a8.ArrayNum = iVar10;
  local_4a8.DataPtr = local_4e8;
  FMassEntityManager::BatchChangeTagsForEntities
            (pFVar2,&local_4a8,
             (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
             local_3b8,
             (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
             local_398);
  if (local_3a8 != (void *)0x0) {
    FMemory::Free(local_3a8);
  }
  if (pvStack_388 != (void *)0x0) {
    FMemory::Free(pvStack_388);
  }
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x30;
  pFVar2 = *(FMassEntityManager **)&this->field_0x28;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FMassEntityManager *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_538.Object = pFVar2;
  local_538.SharedReferenceCount.ReferenceController = pTVar3;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)local_378,&local_538);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_538.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (((local_108 & 0x10) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassRequirements.h"
                         ,0x114,L"Modifying requirements before initialization is not supported."),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iVar10 = TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>::
           GetTypeIndex<FTestTag_A>();
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)(local_378 + 0x40),iVar10);
  local_106 = local_106 + 1;
  local_108 = local_108 & 0xfffe;
  FMassEntityQuery::GetMatchingEntityHandles((FMassEntityQuery *)local_378,&local_550);
  AlgoImpl::
  IntroSortInternal<FMassEntityHandle,int,FIdentityFunctor,TDereferenceWrapper<FMassEntityHandle,TLess<void>_>_>
            ((FMassEntityHandle *)local_590.AllocatorInstance.Data,local_590.ArrayNum,local_597,
             (TLess<void> *)&local_597);
  AlgoImpl::
  IntroSortInternal<FMassEntityHandle,int,FIdentityFunctor,TDereferenceWrapper<FMassEntityHandle,TLess<void>_>_>
            ((FMassEntityHandle *)local_550.AllocatorInstance.Data,local_550.ArrayNum,local_596,
             (TLess<void> *)&local_596);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  lVar13 = (longlong)local_590.ArrayNum;
  pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
  if (local_590.ArrayNum == local_550.ArrayNum) {
    if (local_590.ArrayNum != 0) {
      FVar14.Data = local_590.AllocatorInstance.Data;
      do {
        uVar5 = *(undefined8 *)
                 (((longlong)local_550.AllocatorInstance.Data -
                  (longlong)local_590.AllocatorInstance.Data) + (longlong)FVar14.Data);
        if ((((FMassEntityHandle *)FVar14.Data)->Index != (int)uVar5) ||
           (((FMassEntityHandle *)FVar14.Data)->SerialNumber != (int)((ulonglong)uVar5 >> 0x20)))
        goto LAB_14717b6a4;
        lVar13 = lVar13 + -1;
        FVar14.Data = (FScriptContainerElement *)((longlong)FVar14.Data + 8);
      } while (lVar13 != 0);
    }
    bVar8 = true;
  }
  else {
LAB_14717b6a4:
    bVar8 = false;
  }
  ::FString::FString(&local_528,"Exported handle list contain all the expected handles");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_528.Data.ArrayNum != 0) {
    FVar14.Data = local_528.Data.AllocatorInstance.Data;
  }
  bVar8 = FAutomationTestBase::TestTrue(pFVar4,(wchar_t *)FVar14.Data,bVar8);
  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Data.AllocatorInstance.Data);
  }
  if (bVar8) {
    FMassEntityQuery::CreateMatchingEntitiesCollection((FMassEntityQuery *)local_378,&local_560);
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    iVar10 = local_560.ArrayNum;
    pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
    ::FString::FString(&local_518,"Expected number of archetypes in resulting collections");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_518.Data.ArrayNum != 0) {
      FVar14.Data = local_518.Data.AllocatorInstance.Data;
    }
    bVar8 = FAutomationTestBase::TestEqual(pFVar4,(wchar_t *)FVar14.Data,iVar10,2);
    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data.AllocatorInstance.Data);
    }
    iVar10 = local_560.ArrayNum;
    if (bVar8) {
      local_580.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_580.ArrayNum = 0;
      local_580.ArrayMax = 0;
      pFVar1 = (FMassArchetypeEntityCollection *)
               (local_560.AllocatorInstance.Data + (longlong)local_560.ArrayNum * 0x28);
      FVar14.Data = local_560.AllocatorInstance.Data;
      while( true ) {
        if (local_560.ArrayNum != iVar10) {
          local_598 = 0;
          `TCheckedPointerIterator<FMassArchetypeEntityCollection,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_598);
        }
        if ((FMassArchetypeEntityCollection *)FVar14.Data == pFVar1) break;
        FMassArchetypeEntityCollection::ExportEntityHandles
                  ((FMassArchetypeEntityCollection *)FVar14.Data,&local_580);
        FVar14.Data = FVar14.Data + 0x28;
      }
      AlgoImpl::
      IntroSortInternal<FMassEntityHandle,int,FIdentityFunctor,TDereferenceWrapper<FMassEntityHandle,TLess<void>_>_>
                ((FMassEntityHandle *)local_580.AllocatorInstance.Data,local_580.ArrayNum,
                 local_595[0],(TLess<void> *)local_595);
      if ((*(longlong *)&this->field_0x20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar13 = (longlong)local_590.ArrayNum;
      pFVar4 = *(FAutomationTestBase **)&this->field_0x20;
      if (local_590.ArrayNum == local_580.ArrayNum) {
        if (local_590.ArrayNum != 0) {
          FVar14.Data = local_590.AllocatorInstance.Data;
          do {
            uVar5 = *(undefined8 *)
                     ((longlong)FVar14.Data +
                     ((longlong)local_580.AllocatorInstance.Data -
                     (longlong)local_590.AllocatorInstance.Data));
            if ((((FMassEntityHandle *)FVar14.Data)->Index != (int)uVar5) ||
               (((FMassEntityHandle *)FVar14.Data)->SerialNumber != (int)((ulonglong)uVar5 >> 0x20))
               ) goto LAB_14717b858;
            lVar13 = lVar13 + -1;
            FVar14.Data = (FScriptContainerElement *)((longlong)FVar14.Data + 8);
          } while (lVar13 != 0);
        }
        bVar8 = true;
      }
      else {
LAB_14717b858:
        bVar8 = false;
      }
      ::FString::FString(&local_508,
                         "Handles exported from the collections contain all the expected handles");
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_508.Data.ArrayNum != 0) {
        FVar14.Data = local_508.Data.AllocatorInstance.Data;
      }
      bVar8 = FAutomationTestBase::TestTrue(pFVar4,(wchar_t *)FVar14.Data,bVar8);
      if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_508.Data.AllocatorInstance.Data);
      }
      if (!bVar8) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
      }
      if ((FMassEntityHandle *)local_580.AllocatorInstance.Data != (FMassEntityHandle *)0x0) {
        FMemory::Free(local_580.AllocatorInstance.Data);
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      bVar8 = false;
    }
    DestructItems<FMassArchetypeEntityCollection,int>
              ((FMassArchetypeEntityCollection *)local_560.AllocatorInstance.Data,local_560.ArrayNum
              );
    if ((FMassArchetypeEntityCollection *)local_560.AllocatorInstance.Data !=
        (FMassArchetypeEntityCollection *)0x0) {
      FMemory::Free(local_560.AllocatorInstance.Data);
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    bVar8 = false;
  }
  if ((FMassEntityHandle *)local_550.AllocatorInstance.Data != (FMassEntityHandle *)0x0) {
    FMemory::Free(local_550.AllocatorInstance.Data);
  }
  FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)local_378);
  DestructItems<FMassArchetypeEntityCollection,int>
            ((FMassArchetypeEntityCollection *)local_570.AllocatorInstance.Data,local_570.ArrayNum);
  if ((FMassArchetypeEntityCollection *)local_570.AllocatorInstance.Data !=
      (FMassArchetypeEntityCollection *)0x0) {
    FMemory::Free(local_570.AllocatorInstance.Data);
  }
  if ((FMassEntityHandle *)local_590.AllocatorInstance.Data != (FMassEntityHandle *)0x0) {
    FMemory::Free(local_590.AllocatorInstance.Data);
  }
  return bVar8;
}

