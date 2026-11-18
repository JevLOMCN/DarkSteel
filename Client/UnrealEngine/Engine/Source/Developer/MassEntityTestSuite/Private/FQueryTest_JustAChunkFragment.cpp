// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14717c710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_JustAChunkFragment::InstantTest(FQueryTest_JustAChunkFragment *this)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FMassArchetypeCompositionDescriptor *pFVar5;
  FMassArchetypeHandle *pFVar6;
  undefined ***pppuVar7;
  ForAnyElementType FVar8;
  undefined1 auStack_ba8 [32];
  bool local_b88 [8];
  undefined1 local_b80 [8];
  FSharedReferencer<1> FStack_b78;
  FMassArchetypeCreationParams local_b70;
  undefined1 local_b60 [16];
  FString local_b50;
  FString local_b40;
  FString local_b30;
  undefined1 local_b20 [16];
  TReferenceControllerBase<1> *local_b10;
  FMassArchetypeHandle local_b08;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  void *pvStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  void *pvStack_ac0;
  undefined8 local_ab8;
  FConstSharedStruct *pFStack_ab0;
  undefined8 local_aa8;
  FSharedStruct *pFStack_aa0;
  undefined8 local_a98;
  code *local_a88 [2];
  undefined **local_a78;
  bool *local_a70;
  undefined ***local_a60;
  undefined1 local_a58 [32];
  undefined1 local_a38 [32];
  undefined1 local_a18 [32];
  undefined1 local_9f8 [32];
  undefined1 local_9d8 [32];
  undefined1 local_9b8 [32];
  undefined1 local_998 [32];
  undefined1 local_978 [32];
  undefined1 local_958 [32];
  undefined1 local_938 [32];
  FMassEntityQuery local_918;
  FMassExecutionContext local_5c8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_ba8;
  local_b80 = (undefined1  [8])0x0;
  FStack_b78.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMassEntityQuery::FMassEntityQuery
            (&local_918,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddChunkRequirement<FTestChunkFragment_Int>
            ((FMassFragmentRequirements *)&local_918,ReadOnly,All);
  FMassEntityQuery::CacheArchetypes(&local_918);
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
  bVar3 = local_918.ValidArchetypes.ArrayNum == 0;
  pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_b50,"Initial number of matching archetypes matches expectations");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_b50.Data.ArrayNum != 0) {
    FVar8.Data = local_b50.Data.AllocatorInstance.Data;
  }
  bVar3 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar8.Data,bVar3);
  if (local_b50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b50.Data.AllocatorInstance.Data);
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
    pFVar5 = FMassEntityManager::GetArchetypeComposition
                       (*(FMassEntityManager **)&this->field_0x28,
                        (FMassArchetypeHandle *)&this->field_0x60);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_a58,(FBitSetContainer *)pFVar5);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_a38,(FBitSetContainer *)&pFVar5->Tags);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_a18,(FBitSetContainer *)&pFVar5->ChunkFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_9f8,(FBitSetContainer *)&pFVar5->SharedFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_9d8,(FBitSetContainer *)&pFVar5->ConstSharedFragments);
    TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
    ::Add<FTestChunkFragment_Int>
              ((TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)local_a18);
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
    local_b70.ChunkMemorySize = 0;
    local_b70.DebugName.ComparisonIndex.Value = 0;
    local_b70.DebugName.Number = 0;
    local_b70.DebugColor.field0_0x0 = (FColor_u_0)0x0;
    pFVar6 = FMassEntityManager::CreateArchetype
                       (*(FMassEntityManager **)&this->field_0x28,
                        (FMassArchetypeHandle *)(local_b20 + 8),
                        (FMassArchetypeCompositionDescriptor *)local_a58,&local_b70);
    if ((FMassArchetypeHandle *)local_b80 != pFVar6) {
      local_b80 = (undefined1  [8])(pFVar6->DataPtr).Object;
      (pFVar6->DataPtr).Object = (FMassArchetypeData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_b78,&(pFVar6->DataPtr).SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b10);
    if ((void *)local_9d8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_9d8._16_8_);
    }
    if ((void *)local_9f8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_9f8._16_8_);
    }
    if ((void *)local_a18._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a18._16_8_);
    }
    if ((void *)local_a38._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a38._16_8_);
    }
    if ((void *)local_a58._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a58._16_8_);
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
    pFVar5 = FMassEntityManager::GetArchetypeComposition
                       (*(FMassEntityManager **)&this->field_0x28,
                        (FMassArchetypeHandle *)&this->field_0x60);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_9b8,(FBitSetContainer *)pFVar5);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_998,(FBitSetContainer *)&pFVar5->Tags);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_978,(FBitSetContainer *)&pFVar5->ChunkFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_958,(FBitSetContainer *)&pFVar5->SharedFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_938,(FBitSetContainer *)&pFVar5->ConstSharedFragments);
    TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
    ::Add<FTestChunkFragment_Float>
              ((TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)local_978);
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
    local_b60._0_4_ = 0;
    local_b60._4_4_ = 0;
    local_b60._8_8_ = 0;
    FMassEntityManager::CreateArchetype
              (*(FMassEntityManager **)&this->field_0x28,&local_b08,
               (FMassArchetypeCompositionDescriptor *)local_9b8,
               (FMassArchetypeCreationParams *)local_b60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b08.DataPtr.SharedReferenceCount.ReferenceController);
    if ((void *)local_938._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_938._16_8_);
    }
    if ((void *)local_958._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_958._16_8_);
    }
    if ((void *)local_978._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_978._16_8_);
    }
    if ((void *)local_998._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_998._16_8_);
    }
    if ((void *)local_9b8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_9b8._16_8_);
    }
    FMassEntityQuery::CacheArchetypes(&local_918);
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
    ::FString::FString(&local_b40,"Number of matching archetypes matches expectations.");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_b40.Data.ArrayNum != 0) {
      FVar8.Data = local_b40.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestEqual
                      (pFVar1,(wchar_t *)FVar8.Data,local_918.ValidArchetypes.ArrayNum,1);
    if (local_b40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b40.Data.AllocatorInstance.Data);
    }
    if (!bVar3) goto LAB_14717cd08;
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
    local_a98 = 0;
    uStack_af0 = 0;
    uStack_ad0 = 0;
    local_af8 = 0x1ffffffff;
    local_ae8 = 0;
    pvStack_ae0 = (void *)0x0;
    local_ac8 = 0;
    local_ad8 = 0x8000000000;
    pvStack_ac0 = (void *)0x0;
    local_ab8 = 0x8000000000;
    pFStack_ab0 = (FConstSharedStruct *)0x0;
    local_aa8 = 0;
    pFStack_aa0 = (FSharedStruct *)0x0;
    FMassEntityManager::CreateEntity
              (*(FMassEntityManager **)&this->field_0x28,(FMassArchetypeHandle *)local_b20,
               (FMassArchetypeSharedFragmentValues *)local_b80);
    DestructItems<FSharedStruct,int>(pFStack_aa0,(int)local_a98);
    if (pFStack_aa0 != (FSharedStruct *)0x0) {
      FMemory::Free(pFStack_aa0);
    }
    DestructItems<FConstSharedStruct,int>(pFStack_ab0,(int)local_aa8);
    if (pFStack_ab0 != (FConstSharedStruct *)0x0) {
      FMemory::Free(pFStack_ab0);
    }
    if (pvStack_ac0 != (void *)0x0) {
      FMemory::Free(pvStack_ac0);
    }
    if (pvStack_ae0 != (void *)0x0) {
      FMemory::Free(pvStack_ae0);
    }
    FMassExecutionContext::FMassExecutionContext
              (&local_5c8,*(FMassEntityManager **)&this->field_0x28,0.0,true);
    local_b88[0] = false;
    local_a78 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__L___InstantTest_FQueryTest_JustAChunkFragment_FMassQueryTest__UEAA_NXZ__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_a70 = local_b88;
    local_a60 = (undefined ***)0x0;
    local_a88[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FMassQueryTest::FQueryTest_JustAChunkFragment::InstantTest'::__l11::<lambda_1>,void,FMassExecutionContext_&>
                   ::Call;
    FMassEntityQuery::ForEachEntityChunk
              (&local_918,&local_5c8,(TFunction<void___cdecl(FMassExecutionContext_&)> *)local_a88);
    if (local_a88[0] != (code *)0x0) {
      pppuVar7 = &local_a78;
      if (local_a60 != (undefined ***)0x0) {
        pppuVar7 = local_a60;
      }
      (*(code *)(*pppuVar7)[2])();
    }
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
    bVar3 = local_b88[0];
    pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
    ::FString::FString(&local_b30,"The tested query did execute and bounding was successful");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_b30.Data.ArrayNum != 0) {
      FVar8.Data = local_b30.Data.AllocatorInstance.Data;
    }
    bVar3 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar8.Data,bVar3);
    if (local_b30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b30.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      FMassExecutionContext::~FMassExecutionContext(&local_5c8);
      bVar3 = true;
      goto LAB_14717cd0f;
    }
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    FMassExecutionContext::~FMassExecutionContext(&local_5c8);
  }
  else {
LAB_14717cd08:
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  bVar3 = false;
LAB_14717cd0f:
  FMassEntityQuery::~FMassEntityQuery(&local_918);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_b78.ReferenceController);
  return bVar3;
}

