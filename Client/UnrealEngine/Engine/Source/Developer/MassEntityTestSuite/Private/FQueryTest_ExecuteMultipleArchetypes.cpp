// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470fdd60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassQueryTest::FQueryTest_ExecuteMultipleArchetypes::InstantTest'::__l2::<lambda_1>::operator()
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

// InstantTest @ 147178bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_ExecuteMultipleArchetypes::InstantTest
          (FQueryTest_ExecuteMultipleArchetypes *this)

{
  FMassEntityHandle *pFVar1;
  float fVar2;
  FAutomationTestBase *pFVar3;
  FMassEntityManager *this_00;
  FMassEntityHandle FVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 uVar11;
  UPackage *pUVar12;
  float *pfVar13;
  undefined ***pppuVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  ForAnyElementType FVar17;
  undefined1 auStackY_ba8 [32];
  undefined1 local_b78 [8];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_b70;
  int local_b60 [2];
  UScriptStruct *local_b58;
  TSharedRef<FMassEntityManager,1> local_b50;
  FString local_b40;
  FString local_b30;
  UScriptStruct **local_b20;
  TSharedRef<FMassEntityManager,1> *pTStack_b18;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_b10;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_b00;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_af0;
  initializer_list<UScriptStruct_*> local_ad8;
  undefined1 local_ac8 [24];
  void *pvStack_ab0;
  undefined8 local_aa8;
  undefined1 auStack_aa0 [16];
  void *pvStack_a90;
  undefined8 local_a88;
  ForAnyElementType FStack_a80;
  undefined8 local_a78;
  ForAnyElementType FStack_a70;
  undefined8 local_a68;
  undefined1 local_a58 [24];
  void *pvStack_a40;
  undefined8 local_a38;
  undefined1 auStack_a30 [16];
  void *pvStack_a20;
  undefined8 local_a18;
  ForAnyElementType FStack_a10;
  undefined8 local_a08;
  ForAnyElementType FStack_a00;
  undefined8 local_9f8;
  undefined1 local_9e8 [24];
  void *pvStack_9d0;
  undefined8 local_9c8;
  undefined1 auStack_9c0 [16];
  void *pvStack_9b0;
  undefined8 local_9a8;
  ForAnyElementType FStack_9a0;
  undefined8 local_998;
  ForAnyElementType FStack_990;
  undefined8 local_988;
  code *local_978 [2];
  undefined **local_968;
  int *local_960;
  undefined ***local_950;
  FMassEntityQuery local_948;
  FMassExecutionContext local_5f8;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_ba8;
  local_b70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b70.ArrayNum = 0;
  local_b70.ArrayMax = 0;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
  }
  local_ac8._8_8_ = 0;
  auStack_aa0._0_8_ = 0;
  local_ac8._0_4_ = 0xffffffff;
  local_ac8[4] = true;
  local_ac8[5] = 0;
  local_ac8._6_2_ = 0;
  local_ac8._16_8_ = 0;
  pvStack_ab0 = (void *)0x0;
  auStack_aa0._8_8_ = 0;
  local_aa8 = 0x8000000000;
  pvStack_a90 = (void *)0x0;
  local_a88 = 0x8000000000;
  FStack_a80.Data = (FScriptContainerElement *)0x0;
  local_a78._0_4_ = 0;
  local_a78._4_4_ = 0;
  FStack_a70.Data = (FScriptContainerElement *)0x0;
  local_a68._0_4_ = 0;
  local_a68._4_4_ = 0;
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_b10,
             (FMassArchetypeHandle *)&this->field_0x60,
             (FMassArchetypeSharedFragmentValues *)local_ac8,0xb,&local_b70);
  DestructItems<FSharedStruct,int>((FSharedStruct *)FStack_a70.Data,(int)local_a68);
  if (FStack_a70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a70.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)FStack_a80.Data,(int)local_a78);
  if (FStack_a80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a80.Data);
  }
  if (pvStack_a90 != (void *)0x0) {
    FMemory::Free(pvStack_a90);
  }
  if (pvStack_ab0 != (void *)0x0) {
    FMemory::Free(pvStack_ab0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b10.SharedReferenceCount.ReferenceController);
  uVar9 = local_b70._8_8_;
  iVar8 = local_b70.ArrayMax;
  local_b70._8_8_ = (ulonglong)(uint)local_b70.ArrayMax << 0x20;
  if (((longlong)uVar9 < 0) && (iVar8 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_b70.AllocatorInstance,0,&local_b70.ArrayMax);
  }
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
  }
  local_a58._8_8_ = 0;
  auStack_a30._0_8_ = 0;
  local_a58._0_4_ = 0xffffffff;
  local_a58[4] = true;
  local_a58[5] = 0;
  local_a58._6_2_ = 0;
  local_a58._16_8_ = 0;
  pvStack_a40 = (void *)0x0;
  auStack_a30._8_8_ = 0;
  local_a38 = 0x8000000000;
  pvStack_a20 = (void *)0x0;
  local_a18 = 0x8000000000;
  FStack_a10.Data = (FScriptContainerElement *)0x0;
  local_a08._0_4_ = 0;
  local_a08._4_4_ = 0;
  FStack_a00.Data = (FScriptContainerElement *)0x0;
  local_9f8._0_4_ = 0;
  local_9f8._4_4_ = 0;
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_b00,
             (FMassArchetypeHandle *)&this->field_0x50,
             (FMassArchetypeSharedFragmentValues *)local_a58,7,&local_b70);
  DestructItems<FSharedStruct,int>((FSharedStruct *)FStack_a00.Data,(int)local_9f8);
  if (FStack_a00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a00.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)FStack_a10.Data,(int)local_a08);
  if (FStack_a10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a10.Data);
  }
  if (pvStack_a20 != (void *)0x0) {
    FMemory::Free(pvStack_a20);
  }
  if (pvStack_a40 != (void *)0x0) {
    FMemory::Free(pvStack_a40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b00.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
  }
  local_9e8._8_8_ = 0;
  auStack_9c0._0_8_ = 0;
  local_9e8._0_4_ = 0xffffffff;
  local_9e8[4] = true;
  local_9e8[5] = 0;
  local_9e8._6_2_ = 0;
  local_9e8._16_8_ = 0;
  pvStack_9d0 = (void *)0x0;
  auStack_9c0._8_8_ = 0;
  local_9c8 = 0x8000000000;
  pvStack_9b0 = (void *)0x0;
  local_9a8 = 0x8000000000;
  FStack_9a0.Data = (FScriptContainerElement *)0x0;
  local_998._0_4_ = 0;
  local_998._4_4_ = 0;
  FStack_990.Data = (FScriptContainerElement *)0x0;
  local_988._0_4_ = 0;
  local_988._4_4_ = 0;
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_af0,
             (FMassArchetypeHandle *)&this->field_0x70,
             (FMassArchetypeSharedFragmentValues *)local_9e8,0xd,&local_b70);
  DestructItems<FSharedStruct,int>((FSharedStruct *)FStack_990.Data,(int)local_988);
  if (FStack_990.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_990.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)FStack_9a0.Data,(int)local_998);
  if (FStack_9a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9a0.Data);
  }
  if (pvStack_9b0 != (void *)0x0) {
    FMemory::Free(pvStack_9b0);
  }
  if (pvStack_9d0 != (void *)0x0) {
    FMemory::Free(pvStack_9d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_af0.SharedReferenceCount.ReferenceController);
  local_b60[0] = 0;
  FMassExecutionContext::FMassExecutionContext
            (&local_5f8,*(FMassEntityManager **)&this->field_0x28,0.0,true);
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar12 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar12,
                         L"TestFragment_Float");
  }
  local_b20 = &local_b58;
  pTStack_b18 = &local_b50;
  local_b58 = Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
  }
  local_b50.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x30;
  local_b50.Object = *(FMassEntityManager **)&this->field_0x28;
  if (local_b50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_b50.Object == (FMassEntityManager *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
  }
  local_ad8._First = local_b20;
  local_ad8._Last = (UScriptStruct **)pTStack_b18;
  FMassEntityQuery::FMassEntityQuery(&local_948,&local_b50,&local_ad8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b50.SharedReferenceCount.ReferenceController);
  local_950 = (undefined ***)0x0;
  local_968 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1__InstantTest_FQueryTest_ExecuteMultipleArchetypes_FMassQueryTest__UEAA_NXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_960 = local_b60;
  local_978[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMassQueryTest::FQueryTest_ExecuteMultipleArchetypes::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
                 ::Call;
  FMassEntityQuery::ForEachEntityChunk
            (&local_948,&local_5f8,(TFunction<void___cdecl(FMassExecutionContext_&)> *)local_978);
  if (local_978[0] != (code *)0x0) {
    pppuVar14 = &local_968;
    if (local_950 != (undefined ***)0x0) {
      pppuVar14 = local_950;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("TestRunner",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                        ,0x46,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
  }
  bVar10 = local_b60[0] == 0x14;
  pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_b40,"The number of entities processed needs to match expectations");
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_b40.Data.ArrayNum != 0) {
    FVar16.Data = local_b40.Data.AllocatorInstance.Data;
  }
  bVar10 = FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar16.Data,bVar10);
  if (local_b40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b40.Data.AllocatorInstance.Data);
  }
  fVar7 = __real_41500000;
  fVar6 = __real_38d1b717;
  if (bVar10) {
    iVar8 = local_b70.ArrayNum;
    uVar15 = (ulonglong)local_b70.ArrayNum;
    pFVar1 = (FMassEntityHandle *)(local_b70.AllocatorInstance.Data + uVar15 * 8);
    FVar16.Data = local_b70.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar15 != iVar8) {
        local_b78[0] = 0;
        `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_b78);
      }
      if ((FMassEntityHandle *)FVar16.Data == pFVar1) {
        bVar10 = true;
        goto LAB_147179322;
      }
      if (*(longlong *)&this->field_0x28 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
      }
      this_00 = *(FMassEntityManager **)&this->field_0x28;
      FVar4 = *(FMassEntityHandle *)FVar16.Data;
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar12 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar12,
                             L"TestFragment_Float");
      }
      pfVar13 = FMassEntityManager::InternalGetFragmentDataChecked
                          (this_00,FVar4,
                           Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton);
      if (*(longlong *)&this->field_0x20 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TestRunner",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                            ,0x46,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          uVar11 = (*pcVar5)();
          return (bool)uVar11;
        }
      }
      pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
      fVar2 = *pfVar13;
      ::FString::FString(&local_b30,"Every fragment value should have changed to the expected value"
                        );
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_b30.Data.ArrayNum != 0) {
        FVar17.Data = local_b30.Data.AllocatorInstance.Data;
      }
      bVar10 = FAutomationTestBase::TestEqual(pFVar3,(wchar_t *)FVar17.Data,fVar2,fVar7,fVar6);
      if (local_b30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b30.Data.AllocatorInstance.Data);
      }
      if (!bVar10) break;
      uVar15 = local_b70._8_8_ & 0xffffffff;
      FVar16.Data = FVar16.Data + 8;
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar10 = false;
LAB_147179322:
  FMassEntityQuery::~FMassEntityQuery(&local_948);
  FMassExecutionContext::~FMassExecutionContext(&local_5f8);
  if ((FMassEntityHandle *)local_b70.AllocatorInstance.Data != (FMassEntityHandle *)0x0) {
    FMemory::Free(local_b70.AllocatorInstance.Data);
  }
  return bVar10;
}

