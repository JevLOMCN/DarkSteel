// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470fdf00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassQueryTest::FQueryTest_ExecuteSparse::InstantTest'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  TArrayView<FTestFragment_Float,int> local_18;
  
  **(int **)this = **(int **)this + (param_1->EntityListView).ArrayNum;
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Float>(param_1,&local_18);
  uVar4 = 0;
  if (0 < (param_1->EntityListView).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < local_18.ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)((longlong)&(local_18.DataPtr)->Value + lVar5) = 0x41500000;
      lVar5 = lVar5 + 4;
    } while ((int)uVar4 < (param_1->EntityListView).ArrayNum);
  }
  return;
}

// InstantTest @ 1471798d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_ExecuteSparse::InstantTest(FQueryTest_ExecuteSparse *this)

{
  float fVar1;
  float fVar2;
  FAutomationTestBase *pFVar3;
  FMassEntityManager *pFVar4;
  FMassEntityHandle FVar5;
  code *pcVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  FMassArchetypeEntityCollection *pFVar14;
  UPackage *pUVar15;
  float *pfVar16;
  ForAnyElementType FVar17;
  undefined ***pppuVar18;
  ulonglong uVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  uint uVar22;
  ulonglong uVar23;
  FMassEntityHandle *pFVar24;
  undefined1 auStackY_b48 [32];
  undefined1 local_af8;
  undefined1 local_af7 [7];
  ForAnyElementType local_af0;
  undefined8 local_ae8;
  ForAnyElementType local_ae0;
  uint local_ad8;
  uint uStack_ad4;
  int local_ad0 [2];
  ForAnyElementType local_ac8;
  int local_ac0;
  int local_abc;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_ab8;
  FString local_aa8;
  FString local_a98;
  FString local_a88;
  FMassEntityHandle *local_a78;
  int iStack_a70;
  undefined4 uStack_a6c;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_a68;
  TArrayView<FMassEntityHandle_const_,int> local_a58;
  FMassArchetypeEntityCollection local_a48;
  undefined1 local_a18 [24];
  void *pvStack_a00;
  undefined8 local_9f8;
  undefined1 auStack_9f0 [16];
  void *pvStack_9e0;
  undefined8 local_9d8;
  ForAnyElementType FStack_9d0;
  undefined8 local_9c8;
  ForAnyElementType FStack_9c0;
  undefined8 local_9b8;
  code *local_9a8 [2];
  undefined **local_998;
  int *local_990;
  undefined ***local_980;
  undefined8 local_978;
  undefined8 uStack_970;
  uint local_968;
  FMassEntityQuery local_958;
  FMassExecutionContext local_608;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_b48;
  uVar19 = 0;
  local_ab8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ab8.ArrayNum = 0;
  local_ab8.ArrayMax = 0;
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  local_a18._8_8_ = 0;
  auStack_9f0._0_8_ = 0;
  local_a18._0_4_ = 0xffffffff;
  local_a18[4] = true;
  local_a18[5] = 0;
  local_a18._6_2_ = 0;
  local_a18._16_8_ = 0;
  pvStack_a00 = (void *)0x0;
  auStack_9f0._8_8_ = 0;
  local_9f8 = 0x8000000000;
  pvStack_9e0 = (void *)0x0;
  local_9d8 = 0x8000000000;
  FStack_9d0.Data = (FScriptContainerElement *)0x0;
  local_9c8._0_4_ = 0;
  local_9c8._4_4_ = 0;
  FStack_9c0.Data = (FScriptContainerElement *)0x0;
  local_9b8._0_4_ = 0;
  local_9b8._4_4_ = 0;
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_a68,
             (FMassArchetypeHandle *)&this->field_0x50,
             (FMassArchetypeSharedFragmentValues *)local_a18,10,&local_ab8);
  DestructItems<FSharedStruct,int>((FSharedStruct *)FStack_9c0.Data,(int)local_9b8);
  if (FStack_9c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9c0.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)FStack_9d0.Data,(int)local_9c8);
  if (FStack_9d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9d0.Data);
  }
  if (pvStack_9e0 != (void *)0x0) {
    FMemory::Free(pvStack_9e0);
  }
  if (pvStack_a00 != (void *)0x0) {
    FMemory::Free(pvStack_a00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a68.SharedReferenceCount.ReferenceController);
  uVar9 = _UNK_151564498;
  uVar8 = ___xmm_00000006000000030000000200000001;
  local_968 = 7;
  local_ac8.Data = (FScriptContainerElement *)0x0;
  local_ac0 = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,5,0,&local_ac8,5,&local_abc);
  local_978 = uVar8;
  uStack_970 = uVar9;
  *(undefined8 *)local_ac8.Data = uVar8;
  *(undefined8 *)(local_ac8.Data + 8) = uVar9;
  *(uint *)(local_ac8.Data + 0x10) = local_968;
  local_af0.Data = (FScriptContainerElement *)0x0;
  local_ae8 = 0;
  local_ae0.Data = (FScriptContainerElement *)0x0;
  local_ad8 = 0;
  uStack_ad4 = 0;
  uVar23 = uVar19;
  if (0 < local_ab8.ArrayNum) {
    do {
      uVar22 = (uint)uVar19;
      for (FVar17.Data = local_ac8.Data; FVar17.Data != local_ac8.Data + (longlong)local_ac0 * 4;
          FVar17.Data = FVar17.Data + 4) {
        if (*(uint *)FVar17.Data == uVar22) {
          uVar20 = ~uVar22 >> 0x1f;
          if ((int)((longlong)FVar17.Data - (longlong)local_ac8.Data >> 2) == -1)
          goto LAB_147179afc;
          uVar12 = 0;
          if ((int)uVar22 < local_ab8.ArrayNum) {
            uVar12 = uVar20;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          pFVar24 = (FMassEntityHandle *)(local_ab8.AllocatorInstance.Data + uVar23);
          if (((local_af0.Data <= pFVar24) &&
              (pFVar24 < (FMassEntityHandle *)(local_af0.Data + (longlong)local_ae8._4_4_ * 8))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar11 = (*pcVar6)();
            return (bool)uVar11;
          }
          if ((uint)local_ae8 == local_ae8._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_af0,(int *)((longlong)&local_ae8 + 4));
            local_ae8 = CONCAT44(local_ae8._4_4_,iVar13);
          }
          uVar20 = (uint)local_ae8;
          local_ae8 = CONCAT44(local_ae8._4_4_,(uint)local_ae8 + 1);
          FVar17.Data = local_af0.Data;
          goto LAB_147179bd9;
        }
      }
      uVar20 = ~uVar22 >> 0x1f;
LAB_147179afc:
      uVar12 = 0;
      if ((int)uVar22 < local_ab8.ArrayNum) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      pFVar24 = (FMassEntityHandle *)(local_ab8.AllocatorInstance.Data + uVar23);
      if (((local_ae0.Data <= pFVar24) &&
          (pFVar24 < (FMassEntityHandle *)(local_ae0.Data + (longlong)(int)uStack_ad4 * 8))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      if (local_ad8 == uStack_ad4) {
        local_ad8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_ae0,(int *)&uStack_ad4);
      }
      FVar17.Data = local_ae0.Data;
      uVar20 = local_ad8;
      local_ad8 = local_ad8 + 1;
LAB_147179bd9:
      uVar19 = (ulonglong)(uVar22 + 1);
      *(FMassEntityHandle *)((longlong)FVar17.Data + (longlong)(int)uVar20 * 8) = *pFVar24;
      uVar23 = uVar23 + 8;
    } while ((int)(uVar22 + 1) < local_ab8.ArrayNum);
  }
  local_ad0[0] = 0;
  FMassExecutionContext::FMassExecutionContext
            (&local_608,*(FMassEntityManager **)&this->field_0x28,0.0,true);
  FMassEntityQuery::FMassEntityQuery
            (&local_958,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)&local_958,ReadWrite,All);
  iStack_a70 = (uint)local_ae8;
  local_998 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1__InstantTest_FQueryTest_ExecuteSparse_FMassQueryTest__UEAA_NXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_990 = local_ad0;
  local_9a8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMassQueryTest::FQueryTest_ExecuteSparse::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
                 ::Call;
  local_a78 = (FMassEntityHandle *)local_af0.Data;
  local_980 = (undefined ***)0x0;
  if (((int)(uint)local_ae8 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  local_a58._12_4_ = uStack_a6c;
  local_a58.ArrayNum = iStack_a70;
  local_a58.DataPtr = local_a78;
  pFVar14 = FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
                      (&local_a48,(FMassArchetypeHandle *)&this->field_0x50,&local_a58,NoDuplicates)
  ;
  FMassEntityQuery::ForEachEntityChunk
            (&local_958,pFVar14,&local_608,
             (TFunction<void___cdecl(FMassExecutionContext_&)> *)local_9a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a48.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController);
  if (local_a48.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a48.Ranges.AllocatorInstance.Data);
  }
  if (local_9a8[0] != (code *)0x0) {
    pppuVar18 = &local_998;
    if (local_980 != (undefined ***)0x0) {
      pppuVar18 = local_980;
    }
    (*(code *)(*pppuVar18)[2])();
  }
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TestRunner",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                          ,0x46,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  bVar10 = local_ad0[0] == local_ac0;
  pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_aa8,"The number of entities processed needs to match expectations");
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_aa8.Data.ArrayNum != 0) {
    FVar17.Data = local_aa8.Data.AllocatorInstance.Data;
  }
  bVar10 = FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar17.Data,bVar10);
  if (local_aa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_aa8.Data.AllocatorInstance.Data);
  }
  fVar2 = __real_41500000;
  fVar7 = __real_38d1b717;
  if (bVar10) {
    iVar13 = (uint)local_ae8;
    uVar19 = (ulonglong)(int)(uint)local_ae8;
    pFVar24 = (FMassEntityHandle *)(local_af0.Data + uVar19 * 8);
    FVar17.Data = local_af0.Data;
    while( true ) {
      if ((int)uVar19 != iVar13) {
        local_af8 = 0;
        `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_af8);
      }
      uVar22 = local_ad8;
      if ((FMassEntityHandle *)FVar17.Data == pFVar24) {
        uVar19 = (ulonglong)(int)local_ad8;
        pFVar24 = (FMassEntityHandle *)(local_ae0.Data + uVar19 * 8);
        FVar17.Data = local_ae0.Data;
        goto LAB_147179ff0;
      }
      if ((*(longlong *)&this->field_0x28 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      pFVar4 = *(FMassEntityManager **)&this->field_0x28;
      FVar5 = *(FMassEntityHandle *)FVar17.Data;
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar15 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar15,
                             L"TestFragment_Float");
      }
      pfVar16 = FMassEntityManager::InternalGetFragmentDataChecked
                          (pFVar4,FVar5,
                           Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton);
      if ((*(longlong *)&this->field_0x20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TestRunner",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                              ,0x46,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar11 = (*pcVar6)();
        return (bool)uVar11;
      }
      pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
      fVar1 = *pfVar16;
      ::FString::FString(&local_a98,"Every fragment value should have changed to the expected value"
                        );
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_a98.Data.ArrayNum != 0) {
        FVar21.Data = local_a98.Data.AllocatorInstance.Data;
      }
      bVar10 = FAutomationTestBase::TestEqual(pFVar3,(wchar_t *)FVar21.Data,fVar1,fVar2,fVar7);
      if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a98.Data.AllocatorInstance.Data);
      }
      if (!bVar10) break;
      uVar19 = local_ae8 & 0xffffffff;
      FVar17.Data = FVar17.Data + 8;
    }
  }
LAB_14717a111:
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar10 = false;
LAB_14717a118:
  FMassEntityQuery::~FMassEntityQuery(&local_958);
  FMassExecutionContext::~FMassExecutionContext(&local_608);
  if ((FMassEntityHandle *)local_ae0.Data != (FMassEntityHandle *)0x0) {
    FMemory::Free(local_ae0.Data);
  }
  if ((FMassEntityHandle *)local_af0.Data != (FMassEntityHandle *)0x0) {
    FMemory::Free(local_af0.Data);
  }
  if (local_ac8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ac8.Data);
  }
  if (local_ab8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ab8.AllocatorInstance.Data);
  }
  return bVar10;
LAB_147179ff0:
  if ((uint)uVar19 != uVar22) {
    local_af7[0] = 0;
    `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_af7);
  }
  if ((FMassEntityHandle *)FVar17.Data == pFVar24) {
    bVar10 = true;
    goto LAB_14717a118;
  }
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  pFVar4 = *(FMassEntityManager **)&this->field_0x28;
  FVar5 = *(FMassEntityHandle *)FVar17.Data;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar15 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar15,
                         L"TestFragment_Float");
  }
  pfVar16 = FMassEntityManager::InternalGetFragmentDataChecked
                      (pFVar4,FVar5,
                       Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TestRunner",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                          ,0x46,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
  fVar2 = *pfVar16;
  ::FString::FString(&local_a88,"Untouched entities should retain default fragment value ");
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_a88.Data.ArrayNum != 0) {
    FVar21.Data = local_a88.Data.AllocatorInstance.Data;
  }
  bVar10 = FAutomationTestBase::TestEqual(pFVar3,(wchar_t *)FVar21.Data,fVar2,0.0,fVar7);
  if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a88.Data.AllocatorInstance.Data);
  }
  if (!bVar10) goto LAB_14717a111;
  uVar19 = (ulonglong)local_ad8;
  FVar17.Data = FVar17.Data + 8;
  goto LAB_147179ff0;
}

