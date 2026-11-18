// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// operator() @ 1470fdfd0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassQueryTest::FQueryTest_ExecutionLimiter::InstantTest'::__l2::<lambda_1>::operator()
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

// operator() @ 1471033c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassQueryTest::FQueryTest_ExecutionLimiter::InstantTest'::__l10::<lambda_2>::operator()
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

// operator() @ 1471037e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassQueryTest::FQueryTest_ExecutionLimiter::InstantTest'::__l2::<lambda_3>::operator()
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

// InstantTest @ 14717a1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_ExecutionLimiter::InstantTest(FQueryTest_ExecutionLimiter *this)

{
  FMassEntityHandle *pFVar1;
  float fVar2;
  FAutomationTestBase *pFVar3;
  FMassEntityManager *pFVar4;
  FMassEntityHandle FVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  UPackage *pUVar13;
  float *pfVar14;
  ulonglong uVar15;
  undefined ***pppuVar16;
  ForAnyElementType FVar17;
  ForAnyElementType FVar18;
  longlong lVar19;
  undefined1 auStackY_c48 [32];
  undefined1 local_c18;
  undefined1 local_c17 [3];
  int local_c14;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_c10;
  UScriptStruct *local_c00;
  TSharedRef<FMassEntityManager,1> local_bf8;
  FExecutionLimiter local_be8;
  FString local_bd0;
  FString local_bc0;
  FString local_bb0;
  FString local_ba0;
  FString local_b90;
  UScriptStruct **local_b80;
  TSharedRef<FMassEntityManager,1> *pTStack_b78;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_b70;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_b60;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_b50;
  initializer_list<UScriptStruct_*> local_b38;
  undefined1 local_b28 [24];
  void *pvStack_b10;
  undefined8 local_b08;
  undefined1 auStack_b00 [16];
  void *pvStack_af0;
  undefined8 local_ae8;
  ForAnyElementType FStack_ae0;
  undefined8 local_ad8;
  ForAnyElementType FStack_ad0;
  undefined8 local_ac8;
  undefined1 local_ab8 [24];
  void *pvStack_aa0;
  undefined8 local_a98;
  undefined1 auStack_a90 [16];
  void *pvStack_a80;
  undefined8 local_a78;
  ForAnyElementType FStack_a70;
  undefined8 local_a68;
  ForAnyElementType FStack_a60;
  undefined8 local_a58;
  undefined1 local_a48 [24];
  void *pvStack_a30;
  undefined8 local_a28;
  undefined1 auStack_a20 [16];
  void *pvStack_a10;
  undefined8 local_a08;
  ForAnyElementType FStack_a00;
  undefined8 local_9f8;
  ForAnyElementType FStack_9f0;
  undefined8 local_9e8;
  code *local_9d8 [2];
  undefined **local_9c8;
  int *local_9c0;
  undefined ***local_9b0;
  code *local_9a8 [2];
  undefined **local_998;
  int *local_990;
  undefined ***local_980;
  code *local_978 [2];
  undefined **local_968;
  int *local_960;
  undefined ***local_950;
  FMassEntityQuery local_948;
  FMassExecutionContext local_5f8;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_c48;
  local_c10.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c10.ArrayNum = 0;
  local_c10.ArrayMax = 0;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
  }
  local_b28._8_8_ = 0;
  auStack_b00._0_8_ = 0;
  local_b28._0_4_ = 0xffffffff;
  local_b28[4] = true;
  local_b28[5] = 0;
  local_b28._6_2_ = 0;
  local_b28._16_8_ = 0;
  pvStack_b10 = (void *)0x0;
  auStack_b00._8_8_ = 0;
  local_b08 = 0x8000000000;
  pvStack_af0 = (void *)0x0;
  local_ae8 = 0x8000000000;
  FStack_ae0.Data = (FScriptContainerElement *)0x0;
  local_ad8._0_4_ = 0;
  local_ad8._4_4_ = 0;
  FStack_ad0.Data = (FScriptContainerElement *)0x0;
  local_ac8._0_4_ = 0;
  local_ac8._4_4_ = 0;
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_b70,
             (FMassArchetypeHandle *)&this->field_0x60,
             (FMassArchetypeSharedFragmentValues *)local_b28,0xb,&local_c10);
  DestructItems<FSharedStruct,int>((FSharedStruct *)FStack_ad0.Data,(int)local_ac8);
  if (FStack_ad0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ad0.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)FStack_ae0.Data,(int)local_ad8);
  if (FStack_ae0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ae0.Data);
  }
  if (pvStack_af0 != (void *)0x0) {
    FMemory::Free(pvStack_af0);
  }
  if (pvStack_b10 != (void *)0x0) {
    FMemory::Free(pvStack_b10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b70.SharedReferenceCount.ReferenceController);
  uVar10 = local_c10._8_8_;
  iVar9 = local_c10.ArrayMax;
  local_c10._8_8_ = (ulonglong)(uint)local_c10.ArrayMax << 0x20;
  if (((longlong)uVar10 < 0) && (iVar9 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_c10.AllocatorInstance,0,&local_c10.ArrayMax);
  }
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
  }
  local_ab8._8_8_ = 0;
  auStack_a90._0_8_ = 0;
  local_ab8._0_4_ = 0xffffffff;
  local_ab8[4] = true;
  local_ab8[5] = 0;
  local_ab8._6_2_ = 0;
  local_ab8._16_8_ = 0;
  pvStack_aa0 = (void *)0x0;
  auStack_a90._8_8_ = 0;
  local_a98 = 0x8000000000;
  pvStack_a80 = (void *)0x0;
  local_a78 = 0x8000000000;
  FStack_a70.Data = (FScriptContainerElement *)0x0;
  local_a68._0_4_ = 0;
  local_a68._4_4_ = 0;
  FStack_a60.Data = (FScriptContainerElement *)0x0;
  local_a58._0_4_ = 0;
  local_a58._4_4_ = 0;
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_b60,
             (FMassArchetypeHandle *)&this->field_0x50,
             (FMassArchetypeSharedFragmentValues *)local_ab8,7,&local_c10);
  DestructItems<FSharedStruct,int>((FSharedStruct *)FStack_a60.Data,(int)local_a58);
  if (FStack_a60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a60.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)FStack_a70.Data,(int)local_a68);
  if (FStack_a70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a70.Data);
  }
  if (pvStack_a80 != (void *)0x0) {
    FMemory::Free(pvStack_a80);
  }
  if (pvStack_aa0 != (void *)0x0) {
    FMemory::Free(pvStack_aa0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b60.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
  }
  local_a48._8_8_ = 0;
  auStack_a20._0_8_ = 0;
  local_a48._0_4_ = 0xffffffff;
  local_a48[4] = true;
  local_a48[5] = 0;
  local_a48._6_2_ = 0;
  local_a48._16_8_ = 0;
  pvStack_a30 = (void *)0x0;
  auStack_a20._8_8_ = 0;
  local_a28 = 0x8000000000;
  pvStack_a10 = (void *)0x0;
  local_a08 = 0x8000000000;
  FStack_a00.Data = (FScriptContainerElement *)0x0;
  local_9f8._0_4_ = 0;
  local_9f8._4_4_ = 0;
  FStack_9f0.Data = (FScriptContainerElement *)0x0;
  local_9e8._0_4_ = 0;
  local_9e8._4_4_ = 0;
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_b50,
             (FMassArchetypeHandle *)&this->field_0x70,
             (FMassArchetypeSharedFragmentValues *)local_a48,0xd,&local_c10);
  DestructItems<FSharedStruct,int>((FSharedStruct *)FStack_9f0.Data,(int)local_9e8);
  if (FStack_9f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9f0.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)FStack_a00.Data,(int)local_9f8);
  if (FStack_a00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a00.Data);
  }
  if (pvStack_a10 != (void *)0x0) {
    FMemory::Free(pvStack_a10);
  }
  if (pvStack_a30 != (void *)0x0) {
    FMemory::Free(pvStack_a30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b50.SharedReferenceCount.ReferenceController);
  local_c14 = 0;
  FMassExecutionContext::FMassExecutionContext
            (&local_5f8,*(FMassEntityManager **)&this->field_0x28,0.0,true);
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar13 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar13,
                         L"TestFragment_Float");
  }
  local_b80 = &local_c00;
  pTStack_b78 = &local_bf8;
  local_c00 = Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
  }
  local_bf8.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this->field_0x30;
  local_bf8.Object = *(FMassEntityManager **)&this->field_0x28;
  if (local_bf8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_bf8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_bf8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_bf8.Object == (FMassEntityManager *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
  }
  local_b38._First = local_b80;
  local_b38._Last = (UScriptStruct **)pTStack_b78;
  FMassEntityQuery::FMassEntityQuery(&local_948,&local_bf8,&local_b38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_bf8.SharedReferenceCount.ReferenceController);
  local_9c8 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__1__InstantTest_FQueryTest_ExecutionLimiter_FMassQueryTest__UEAA_NXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_9c0 = &local_c14;
  local_be8.EntityCountRemaining = 0;
  local_9b0 = (undefined ***)0x0;
  local_9d8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMassQueryTest::FQueryTest_ExecutionLimiter::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
                 ::Call;
  local_be8.EntityLimit = ___xmm_ffffffffffffffffffffffff00000001;
  local_be8.ChunkIndex = _UNK_1515644a4;
  local_be8.ArchetypeIndex = _UNK_1515644a8;
  local_be8.MaxChunkIndex = _UNK_1515644ac;
  FMassEntityQuery::ForEachEntityChunk
            (&local_948,&local_5f8,&local_be8,
             (TFunction<void___cdecl(FMassExecutionContext_&)> *)local_9d8);
  if (local_9d8[0] != (code *)0x0) {
    pppuVar16 = &local_9c8;
    if (local_9b0 != (undefined ***)0x0) {
      pppuVar16 = local_9b0;
    }
    (*(code *)(*pppuVar16)[2])();
  }
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("TestRunner",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                        ,0x46,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
  }
  pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
  bVar11 = local_c14 < 0x14;
  ::FString::FString(&local_bd0,"Limiter should prevent all entities from being processed");
  FVar17.Data = (FScriptContainerElement *)L"";
  if (local_bd0.Data.ArrayNum != 0) {
    FVar17.Data = local_bd0.Data.AllocatorInstance.Data;
  }
  bVar11 = FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar17.Data,bVar11);
  if (local_bd0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bd0.Data.AllocatorInstance.Data);
  }
  if (bVar11) {
    if (*(longlong *)&this->field_0x20 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TestRunner",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                          ,0x46,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
    }
    pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
    bVar11 = 0 < local_c14;
    ::FString::FString(&local_bc0,"Limiter should process at least as many entities as requested");
    FVar17.Data = (FScriptContainerElement *)L"";
    if (local_bc0.Data.ArrayNum != 0) {
      FVar17.Data = local_bc0.Data.AllocatorInstance.Data;
    }
    bVar11 = FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar17.Data,bVar11);
    if (local_bc0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bc0.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      lVar19 = 0x14;
      do {
        local_990 = &local_c14;
        local_980 = (undefined ***)0x0;
        local_998 = &
                    ___7__TFunction_OwnedObject_V<lambda_2>__9__InstantTest_FQueryTest_ExecutionLimiter_FMassQueryTest__UEAA_NXZ__0A__0A__Function_Private_Core_UE__6B_
        ;
        local_9a8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FMassQueryTest::FQueryTest_ExecutionLimiter::InstantTest'::__l10::<lambda_2>,void,FMassExecutionContext_&>
                       ::Call;
        FMassEntityQuery::ForEachEntityChunk
                  (&local_948,&local_5f8,&local_be8,
                   (TFunction<void___cdecl(FMassExecutionContext_&)> *)local_9a8);
        if (local_9a8[0] != (code *)0x0) {
          pppuVar16 = &local_998;
          if (local_980 != (undefined ***)0x0) {
            pppuVar16 = local_980;
          }
          (*(code *)(*pppuVar16)[2])();
        }
        fVar8 = __real_41500000;
        fVar7 = __real_38d1b717;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      iVar9 = local_c10.ArrayNum;
      uVar15 = (ulonglong)local_c10.ArrayNum;
      pFVar1 = (FMassEntityHandle *)(local_c10.AllocatorInstance.Data + uVar15 * 8);
      FVar17.Data = local_c10.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar15 != iVar9) {
          local_c18 = 0;
          `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_c18);
        }
        if ((FMassEntityHandle *)FVar17.Data == pFVar1) break;
        if (*(longlong *)&this->field_0x28 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
        }
        pFVar4 = *(FMassEntityManager **)&this->field_0x28;
        FVar5 = *(FMassEntityHandle *)FVar17.Data;
        if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar13 = Z_Construct_UPackage__Script_MassEntityTestSuite();
          Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar13,
                               L"TestFragment_Float");
        }
        pfVar14 = FMassEntityManager::InternalGetFragmentDataChecked
                            (pFVar4,FVar5,
                             Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton);
        if (*(longlong *)&this->field_0x20 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("TestRunner",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                              ,0x46,L"");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
        }
        pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
        fVar2 = *pfVar14;
        ::FString::FString(&local_bb0,
                           "Every fragment value should have changed to the expected value");
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_bb0.Data.ArrayNum != 0) {
          FVar18.Data = local_bb0.Data.AllocatorInstance.Data;
        }
        bVar11 = FAutomationTestBase::TestEqual(pFVar3,(wchar_t *)FVar18.Data,fVar2,fVar8,fVar7);
        if (local_bb0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_bb0.Data.AllocatorInstance.Data);
        }
        if (!bVar11) goto LAB_14717ac9f;
        uVar15 = local_c10._8_8_ & 0xffffffff;
        FVar17.Data = FVar17.Data + 8;
      }
      local_be8.EntityLimit = 1000000;
      local_968 = &
                  ___7__TFunction_OwnedObject_V<lambda_3>__1__InstantTest_FQueryTest_ExecutionLimiter_FMassQueryTest__UEAA_NXZ__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_960 = &local_c14;
      local_c14 = 0;
      local_950 = (undefined ***)0x0;
      local_978[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FMassQueryTest::FQueryTest_ExecutionLimiter::InstantTest'::__l2::<lambda_3>,void,FMassExecutionContext_&>
                     ::Call;
      FMassEntityQuery::ForEachEntityChunk
                (&local_948,&local_5f8,&local_be8,
                 (TFunction<void___cdecl(FMassExecutionContext_&)> *)local_978);
      if (local_978[0] != (code *)0x0) {
        pppuVar16 = &local_968;
        if (local_950 != (undefined ***)0x0) {
          pppuVar16 = local_950;
        }
        (*(code *)(*pppuVar16)[2])();
      }
      if (*(longlong *)&this->field_0x20 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TestRunner",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                            ,0x46,L"");
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          uVar12 = (*pcVar6)();
          return (bool)uVar12;
        }
      }
      bVar11 = local_c14 == 0x14;
      pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
      ::FString::FString(&local_ba0,"All entities should be processed with a high enough limit");
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_ba0.Data.ArrayNum != 0) {
        FVar17.Data = local_ba0.Data.AllocatorInstance.Data;
      }
      bVar11 = FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar17.Data,bVar11);
      if (local_ba0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ba0.Data.AllocatorInstance.Data);
      }
      if (bVar11) {
        iVar9 = local_c10.ArrayNum;
        uVar15 = (ulonglong)local_c10.ArrayNum;
        pFVar1 = (FMassEntityHandle *)(local_c10.AllocatorInstance.Data + uVar15 * 8);
        FVar17.Data = local_c10.AllocatorInstance.Data;
        goto LAB_14717ab80;
      }
    }
  }
LAB_14717ac9f:
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar11 = false;
LAB_14717aca6:
  FMassEntityQuery::~FMassEntityQuery(&local_948);
  FMassExecutionContext::~FMassExecutionContext(&local_5f8);
  if ((FMassEntityHandle *)local_c10.AllocatorInstance.Data != (FMassEntityHandle *)0x0) {
    FMemory::Free(local_c10.AllocatorInstance.Data);
  }
  return bVar11;
LAB_14717ab80:
  if ((int)uVar15 != iVar9) {
    local_c17[0] = 0;
    `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_c17);
  }
  if ((FMassEntityHandle *)FVar17.Data == pFVar1) {
    bVar11 = true;
    goto LAB_14717aca6;
  }
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
  }
  pFVar4 = *(FMassEntityManager **)&this->field_0x28;
  FVar5 = *(FMassEntityHandle *)FVar17.Data;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar13 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar13,
                         L"TestFragment_Float");
  }
  pfVar14 = FMassEntityManager::InternalGetFragmentDataChecked
                      (pFVar4,FVar5,
                       Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("TestRunner",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                        ,0x46,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      uVar12 = (*pcVar6)();
      return (bool)uVar12;
    }
  }
  pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
  fVar2 = *pfVar14;
  ::FString::FString(&local_b90,"Every fragment value should have changed to the expected value");
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_b90.Data.ArrayNum != 0) {
    FVar18.Data = local_b90.Data.AllocatorInstance.Data;
  }
  bVar11 = FAutomationTestBase::TestEqual(pFVar3,(wchar_t *)FVar18.Data,fVar2,fVar8,fVar7);
  if (local_b90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b90.Data.AllocatorInstance.Data);
  }
  if (!bVar11) goto LAB_14717ac9f;
  uVar15 = local_c10._8_8_ & 0xffffffff;
  FVar17.Data = FVar17.Data + 8;
  goto LAB_14717ab80;
}

