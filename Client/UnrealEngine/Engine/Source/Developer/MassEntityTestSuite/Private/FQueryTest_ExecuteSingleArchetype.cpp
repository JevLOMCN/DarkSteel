// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470fde30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassQueryTest::FQueryTest_ExecuteSingleArchetype::InstantTest'::__l2::<lambda_1>::operator()
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

// InstantTest @ 1471793b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_ExecuteSingleArchetype::InstantTest
          (FQueryTest_ExecuteSingleArchetype *this)

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
  bool bVar9;
  undefined1 uVar10;
  UPackage *pUVar11;
  float *pfVar12;
  undefined ***pppuVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  ForAnyElementType FVar16;
  undefined1 auStackY_a98 [32];
  undefined1 local_a68 [4];
  int local_a64;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_a60;
  UScriptStruct *local_a50;
  TSharedRef<FMassEntityManager,1> local_a48;
  FString local_a38;
  FString local_a28;
  UScriptStruct **local_a18;
  TSharedRef<FMassEntityManager,1> *pTStack_a10;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_a08;
  initializer_list<UScriptStruct_*> local_9f8;
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
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_a98;
  local_a60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a60.ArrayNum = 0;
  local_a60.ArrayMax = 0;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
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
            (*(FMassEntityManager **)&this->field_0x28,&local_a08,
             (FMassArchetypeHandle *)&this->field_0x50,
             (FMassArchetypeSharedFragmentValues *)local_9e8,10,&local_a60);
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
            (local_a08.SharedReferenceCount.ReferenceController);
  local_a64 = 0;
  FMassExecutionContext::FMassExecutionContext
            (&local_5f8,*(FMassEntityManager **)&this->field_0x28,0.0,true);
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar11 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar11,
                         L"TestFragment_Float");
  }
  local_a18 = &local_a50;
  pTStack_a10 = &local_a48;
  local_a50 = Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
  }
  local_a48.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x30;
  local_a48.Object = *(FMassEntityManager **)&this->field_0x28;
  if (local_a48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_a48.Object == (FMassEntityManager *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
  }
  local_9f8._First = local_a18;
  local_9f8._Last = (UScriptStruct **)pTStack_a10;
  FMassEntityQuery::FMassEntityQuery(&local_948,&local_a48,&local_9f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a48.SharedReferenceCount.ReferenceController);
  local_950 = (undefined ***)0x0;
  local_968 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1__InstantTest_FQueryTest_ExecuteSingleArchetype_FMassQueryTest__UEAA_NXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_960 = &local_a64;
  local_978[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMassQueryTest::FQueryTest_ExecuteSingleArchetype::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
                 ::Call;
  FMassEntityQuery::ForEachEntityChunk
            (&local_948,&local_5f8,(TFunction<void___cdecl(FMassExecutionContext_&)> *)local_978);
  if (local_978[0] != (code *)0x0) {
    pppuVar13 = &local_968;
    if (local_950 != (undefined ***)0x0) {
      pppuVar13 = local_950;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      uVar10 = (*pcVar5)();
      return (bool)uVar10;
    }
  }
  bVar9 = local_a64 == 10;
  pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_a38,"The number of entities processed needs to match expectations");
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_a38.Data.ArrayNum != 0) {
    FVar15.Data = local_a38.Data.AllocatorInstance.Data;
  }
  bVar9 = FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar15.Data,bVar9);
  if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a38.Data.AllocatorInstance.Data);
  }
  fVar7 = __real_41500000;
  fVar6 = __real_38d1b717;
  if (bVar9) {
    iVar8 = local_a60.ArrayNum;
    uVar14 = (ulonglong)local_a60.ArrayNum;
    pFVar1 = (FMassEntityHandle *)(local_a60.AllocatorInstance.Data + uVar14 * 8);
    FVar15.Data = local_a60.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar8) {
        local_a68[0] = 0;
        `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_a68);
      }
      if ((FMassEntityHandle *)FVar15.Data == pFVar1) {
        bVar9 = true;
        goto LAB_14717983c;
      }
      if (*(longlong *)&this->field_0x28 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      this_00 = *(FMassEntityManager **)&this->field_0x28;
      FVar4 = *(FMassEntityHandle *)FVar15.Data;
      if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar11,
                             L"TestFragment_Float");
      }
      pfVar12 = FMassEntityManager::InternalGetFragmentDataChecked
                          (this_00,FVar4,
                           Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton);
      if (*(longlong *)&this->field_0x20 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
      fVar2 = *pfVar12;
      ::FString::FString(&local_a28,"Every fragment value should have changed to the expected value"
                        );
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_a28.Data.ArrayNum != 0) {
        FVar16.Data = local_a28.Data.AllocatorInstance.Data;
      }
      bVar9 = FAutomationTestBase::TestEqual(pFVar3,(wchar_t *)FVar16.Data,fVar2,fVar7,fVar6);
      if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a28.Data.AllocatorInstance.Data);
      }
      if (!bVar9) break;
      uVar14 = local_a60._8_8_ & 0xffffffff;
      FVar15.Data = FVar15.Data + 8;
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar9 = false;
LAB_14717983c:
  FMassEntityQuery::~FMassEntityQuery(&local_948);
  FMassExecutionContext::~FMassExecutionContext(&local_5f8);
  if ((FMassEntityHandle *)local_a60.AllocatorInstance.Data != (FMassEntityHandle *)0x0) {
    FMemory::Free(local_a60.AllocatorInstance.Data);
  }
  return bVar9;
}

