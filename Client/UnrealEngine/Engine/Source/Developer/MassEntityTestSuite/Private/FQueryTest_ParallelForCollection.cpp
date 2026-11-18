// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14717f460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_ParallelForCollection::InstantTest
          (FQueryTest_ParallelForCollection *this)

{
  FScriptContainerElement *pFVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  code **ppcVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  undefined1 auStackY_b28 [32];
  undefined1 local_ad8 [8];
  ForAnyElementType local_ad0;
  undefined8 local_ac8;
  int local_ac0;
  int local_abc;
  int local_ab8 [2];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_ab0;
  FString local_aa0;
  FString local_a90;
  FString local_a80;
  FMassEntityHandle *local_a68;
  int iStack_a60;
  undefined4 uStack_a5c;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_a58;
  TArrayView<FMassEntityHandle_const_,int> local_a48;
  FMassArchetypeEntityCollection local_a38;
  undefined1 local_a08 [24];
  void *pvStack_9f0;
  undefined8 local_9e8;
  undefined1 auStack_9e0 [16];
  void *pvStack_9d0;
  undefined8 local_9c8;
  ForAnyElementType FStack_9c0;
  undefined8 local_9b8;
  ForAnyElementType FStack_9b0;
  undefined8 local_9a8;
  code *local_998 [2];
  code *local_988 [3];
  code **local_970;
  _RTL_CRITICAL_SECTION local_968;
  FMassEntityQuery local_938;
  FMassExecutionContext local_5e8;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_b28;
  local_ab0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ab0.ArrayNum = 0;
  local_ab0.ArrayMax = 0;
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  local_9a8._0_4_ = 0;
  local_9a8._4_4_ = 0;
  local_a08._8_8_ = 0;
  auStack_9e0._0_8_ = 0;
  local_a08._0_4_ = 0xffffffff;
  local_a08[4] = true;
  local_a08[5] = 0;
  local_a08._6_2_ = 0;
  local_a08._16_8_ = 0;
  pvStack_9f0 = (void *)0x0;
  auStack_9e0._8_8_ = 0;
  local_9e8 = 0x8000000000;
  pvStack_9d0 = (void *)0x0;
  local_9c8 = 0x8000000000;
  FStack_9c0.Data = (FScriptContainerElement *)0x0;
  local_9b8._0_4_ = 0;
  local_9b8._4_4_ = 0;
  FStack_9b0.Data = (FScriptContainerElement *)0x0;
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_a58,
             (FMassArchetypeHandle *)&this->field_0x50,
             (FMassArchetypeSharedFragmentValues *)local_a08,1000,&local_ab0);
  DestructItems<FSharedStruct,int>((FSharedStruct *)FStack_9b0.Data,(int)local_9a8);
  if (FStack_9b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9b0.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)FStack_9c0.Data,(int)local_9b8);
  if (FStack_9c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9c0.Data);
  }
  if (pvStack_9d0 != (void *)0x0) {
    FMemory::Free(pvStack_9d0);
  }
  if (pvStack_9f0 != (void *)0x0) {
    FMemory::Free(pvStack_9f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a58.SharedReferenceCount.ReferenceController);
  local_ad0.Data = (FScriptContainerElement *)0x0;
  local_ac8 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1000,&local_ad0,0,(int *)((longlong)&local_ac8 + 4));
  fVar5 = __real_3f000000;
  fVar4 = __real_3f800000;
  uVar12 = 1;
  iVar6 = local_ab0.ArrayNum;
  pFVar1 = local_ab0.AllocatorInstance.Data + (longlong)local_ab0.ArrayNum * 8;
  FVar11.Data = local_ab0.AllocatorInstance.Data;
  while( true ) {
    if (local_ab0.ArrayNum != iVar6) {
      local_ad8[0] = 0;
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_ad8);
    }
    if (FVar11.Data == pFVar1) break;
    uVar12 = uVar12 * 0xbb38435 + 0x3619636b;
    if ((float)(uVar12 >> 9 | 0x3f800000) - fVar4 < fVar5) {
      if (((local_ad0.Data <= FVar11.Data) &&
          (FVar11.Data < local_ad0.Data + (longlong)local_ac8._4_4_ * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      iVar9 = (int)local_ac8;
      if ((int)local_ac8 == local_ac8._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_ad0,(int *)((longlong)&local_ac8 + 4));
      }
      local_ac8 = CONCAT44(local_ac8._4_4_,iVar9 + 1);
      *(undefined8 *)(local_ad0.Data + (longlong)iVar9 * 8) = *(undefined8 *)FVar11.Data;
    }
    FVar11.Data = FVar11.Data + 8;
  }
  if (((int)local_ac8 < 1) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5084873461759737935>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassParallelQueryTest.cpp"
                         ,0x4f,"EntitiesToProcess.Num() > 0"), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  iVar6 = (int)local_ac8;
  local_a68 = (FMassEntityHandle *)local_ad0.Data;
  if (((int)local_ac8 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  iStack_a60 = iVar6;
  local_a48._12_4_ = uStack_a5c;
  local_a48.ArrayNum = iVar6;
  local_a48.DataPtr = local_a68;
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_a38,(FMassArchetypeHandle *)&this->field_0x50,&local_a48,NoDuplicates);
  if ((local_a38.Ranges.ArrayNum < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  FMassEntityQuery::FMassEntityQuery
            (&local_938,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)&local_938,ReadWrite,All);
  local_ac0 = 0;
  local_ab8[0] = 0;
  local_abc = 0;
  InitializeCriticalSectionAndSpinCount(&local_968,4000);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  FMassEntityManager::CreateExecutionContext
            (*(FMassEntityManager **)&this->field_0x28,&local_5e8,0.0);
  FMassExecutionContext::SetEntityCollection(&local_5e8,&local_a38);
  local_998[0] = (code *)0x0;
  local_970 = FMemory::Malloc(0x28,8);
  *local_970 = (code *)&
                       ___7__TFunction_OwnedObject_V<lambda_1>__1__InstantTest_FQueryTest_ParallelForCollection_FMassQueryTest__UEAA_NXZ__0A__00_Function_Private_Core_UE__6B_
  ;
  local_970[1] = (code *)&local_abc;
  local_970[2] = (code *)&local_968;
  local_970[3] = (code *)&local_ac0;
  local_970[4] = (code *)local_ab8;
  if (local_970 + 1 != (code **)0x0) {
    local_998[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FMassQueryTest::FQueryTest_ParallelForCollection::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
                   ::Call;
  }
  FMassEntityQuery::ParallelForEachEntityChunk
            (&local_938,&local_5e8,(TFunction<void___cdecl(FMassExecutionContext_&)> *)local_998,
             Force);
  if (local_998[0] != (code *)0x0) {
    ppcVar10 = local_998 + 2;
    if (local_970 != (code **)0x0) {
      ppcVar10 = local_970;
    }
    (**(code **)(*ppcVar10 + 0x10))();
  }
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  iVar9 = local_ac0;
  pFVar2 = *(FAutomationTestBase **)&this->field_0x20;
  iVar6 = (int)local_ac8;
  ::FString::FString(&local_aa0,"All entities passed for processing should have been counted");
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_aa0.Data.ArrayNum != 0) {
    FVar11.Data = local_aa0.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestEqual(pFVar2,(wchar_t *)FVar11.Data,iVar9,iVar6);
  if (local_aa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_aa0.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return (bool)uVar8;
    }
    iVar6 = local_abc;
    pFVar2 = *(FAutomationTestBase **)&this->field_0x20;
    ::FString::FString(&local_a90,"The number of jobs should match expectations");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_a90.Data.ArrayNum != 0) {
      FVar11.Data = local_a90.Data.AllocatorInstance.Data;
    }
    bVar7 = FAutomationTestBase::TestEqual
                      (pFVar2,(wchar_t *)FVar11.Data,local_a38.Ranges.ArrayNum,iVar6);
    if (local_a90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a90.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      if ((*(longlong *)&this->field_0x20 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TestRunner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                             ,0x46,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      pFVar2 = *(FAutomationTestBase **)&this->field_0x20;
      bVar7 = 0 < local_ab8[0];
      ::FString::FString(&local_a80,"Some work is expected to be executed in parallel");
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_a80.Data.ArrayNum != 0) {
        FVar11.Data = local_a80.Data.AllocatorInstance.Data;
      }
      bVar7 = FAutomationTestBase::TestTrue(pFVar2,(wchar_t *)FVar11.Data,bVar7);
      if (local_a80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a80.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        bVar7 = true;
        goto LAB_14717fa41;
      }
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar7 = false;
LAB_14717fa41:
  FMassExecutionContext::~FMassExecutionContext(&local_5e8);
  DeleteCriticalSection(&local_968);
  FMassEntityQuery::~FMassEntityQuery(&local_938);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a38.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController);
  if (local_a38.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a38.Ranges.AllocatorInstance.Data);
  }
  if (local_ad0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad0.Data);
  }
  if (local_ab0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ab0.AllocatorInstance.Data);
  }
  return bVar7;
}

