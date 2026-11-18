// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470fe0a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassQueryTest::FQueryTest_UsingOptionalFragment::InstantTest'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  FTestFragment_Int *pFVar1;
  int iVar2;
  ulonglong uVar3;
  FTestFragment_Int *pFVar4;
  ulonglong uVar5;
  TArrayView<FTestFragment_Int,int> local_18;
  
  **(int **)this = **(int **)this + 1;
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Int>(param_1,&local_18);
  if (local_18.ArrayNum != 0) {
    pFVar1 = local_18.DataPtr + local_18.ArrayNum;
    uVar5 = (longlong)local_18.ArrayNum & 0x3fffffffffffffff;
    if (pFVar1 < local_18.DataPtr) {
      uVar5 = 0;
    }
    if ((uVar5 != 0) && (3 < uVar5)) {
      iVar2 = *(int *)((longlong)this + 0x10);
      if (((FTestFragment_Int *)((longlong)this + 0x10U) < local_18.DataPtr) ||
         (local_18.DataPtr + (uVar5 - 1) < (FTestFragment_Int *)((longlong)this + 0x10U))) {
        pFVar4 = local_18.DataPtr;
        for (uVar3 = uVar5 & 0x3ffffffffffffffc; uVar3 != 0; uVar3 = uVar3 - 1) {
          pFVar4->Value = iVar2;
          pFVar4 = pFVar4 + 1;
        }
        local_18.DataPtr = local_18.DataPtr + (uVar5 & 0xfffffffffffffffc);
      }
    }
    for (; local_18.DataPtr != pFVar1; local_18.DataPtr = local_18.DataPtr + 1) {
      (local_18.DataPtr)->Value = *(int *)((longlong)this + 0x10);
    }
    return;
  }
  **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
  return;
}

// InstantTest @ 147180710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_UsingOptionalFragment::InstantTest
          (FQueryTest_UsingOptionalFragment *this)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FTestFragment_Int *pFVar6;
  code **ppcVar7;
  TReferenceControllerBase<1> *pTVar8;
  ForAnyElementType FVar9;
  undefined1 auStack_b18 [32];
  int local_af8;
  int local_af4;
  undefined1 local_af0 [16];
  int local_ae0;
  FString local_ad8;
  FString local_ac8;
  code *local_ab8;
  code *pcStack_ab0;
  undefined4 local_aa8;
  undefined4 uStack_aa4;
  undefined1 local_aa0 [24];
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  void *pvStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  void *pvStack_a50;
  undefined8 local_a48;
  FConstSharedStruct *pFStack_a40;
  undefined8 local_a38;
  FSharedStruct *pFStack_a30;
  undefined8 local_a28;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  void *pvStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  void *pvStack_9e0;
  undefined8 local_9d8;
  FConstSharedStruct *pFStack_9d0;
  undefined8 local_9c8;
  FSharedStruct *pFStack_9c0;
  undefined8 local_9b8;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  void *pvStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  void *pvStack_970;
  undefined8 local_968;
  FConstSharedStruct *pFStack_960;
  undefined8 local_958;
  FSharedStruct *pFStack_950;
  undefined8 local_948;
  code *local_938 [2];
  code *local_928 [3];
  code **local_910;
  FMassEntityQuery local_908;
  FMassExecutionContext local_5b8;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_b18;
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
  local_a28 = 0;
  uStack_a80 = 0;
  uStack_a60 = 0;
  local_a88 = 0x1ffffffff;
  local_a78 = 0;
  pvStack_a70 = (void *)0x0;
  local_a58 = 0;
  local_a68 = 0x8000000000;
  pvStack_a50 = (void *)0x0;
  local_a48 = 0x8000000000;
  pFStack_a40 = (FConstSharedStruct *)0x0;
  local_a38 = 0;
  pFStack_a30 = (FSharedStruct *)0x0;
  FMassEntityManager::CreateEntity
            (*(FMassEntityManager **)&this->field_0x28,(FMassArchetypeHandle *)local_aa0,
             (FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  DestructItems<FSharedStruct,int>(pFStack_a30,(int)local_a28);
  if (pFStack_a30 != (FSharedStruct *)0x0) {
    FMemory::Free(pFStack_a30);
  }
  DestructItems<FConstSharedStruct,int>(pFStack_a40,(int)local_a38);
  if (pFStack_a40 != (FConstSharedStruct *)0x0) {
    FMemory::Free(pFStack_a40);
  }
  if (pvStack_a50 != (void *)0x0) {
    FMemory::Free(pvStack_a50);
  }
  if (pvStack_a70 != (void *)0x0) {
    FMemory::Free(pvStack_a70);
  }
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
  local_9b8 = 0;
  uStack_a10 = 0;
  uStack_9f0 = 0;
  local_a18 = 0x1ffffffff;
  local_a08 = 0;
  pvStack_a00 = (void *)0x0;
  local_9e8 = 0;
  local_9f8 = 0x8000000000;
  pvStack_9e0 = (void *)0x0;
  local_9d8 = 0x8000000000;
  pFStack_9d0 = (FConstSharedStruct *)0x0;
  local_9c8 = 0;
  pFStack_9c0 = (FSharedStruct *)0x0;
  FMassEntityManager::CreateEntity
            (*(FMassEntityManager **)&this->field_0x28,(FMassArchetypeHandle *)local_af0,
             (FMassArchetypeSharedFragmentValues *)&this->field_0x70);
  DestructItems<FSharedStruct,int>(pFStack_9c0,(int)local_9b8);
  if (pFStack_9c0 != (FSharedStruct *)0x0) {
    FMemory::Free(pFStack_9c0);
  }
  DestructItems<FConstSharedStruct,int>(pFStack_9d0,(int)local_9c8);
  if (pFStack_9d0 != (FConstSharedStruct *)0x0) {
    FMemory::Free(pFStack_9d0);
  }
  if (pvStack_9e0 != (void *)0x0) {
    FMemory::Free(pvStack_9e0);
  }
  if (pvStack_a00 != (void *)0x0) {
    FMemory::Free(pvStack_a00);
  }
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
  local_948 = 0;
  uStack_9a0 = 0;
  uStack_980 = 0;
  local_9a8 = 0x1ffffffff;
  local_998 = 0;
  pvStack_990 = (void *)0x0;
  local_978 = 0;
  local_988 = 0x8000000000;
  pvStack_970 = (void *)0x0;
  local_968 = 0x8000000000;
  pFStack_960 = (FConstSharedStruct *)0x0;
  local_958 = 0;
  pFStack_950 = (FSharedStruct *)0x0;
  FMassEntityManager::CreateEntity
            (*(FMassEntityManager **)&this->field_0x28,(FMassArchetypeHandle *)(local_aa0 + 8),
             (FMassArchetypeSharedFragmentValues *)&this->field_0x60);
  DestructItems<FSharedStruct,int>(pFStack_950,(int)local_948);
  if (pFStack_950 != (FSharedStruct *)0x0) {
    FMemory::Free(pFStack_950);
  }
  DestructItems<FConstSharedStruct,int>(pFStack_960,(int)local_958);
  if (pFStack_960 != (FConstSharedStruct *)0x0) {
    FMemory::Free(pFStack_960);
  }
  if (pvStack_970 != (void *)0x0) {
    FMemory::Free(pvStack_970);
  }
  if (pvStack_990 != (void *)0x0) {
    FMemory::Free(pvStack_990);
  }
  local_af8 = 0;
  local_af4 = 0;
  FMassEntityQuery::FMassEntityQuery
            (&local_908,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)&local_908,ReadWrite,Optional);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)&local_908,ReadWrite,All);
  FMassExecutionContext::FMassExecutionContext
            (&local_5b8,*(FMassEntityManager **)&this->field_0x28,0.0,true);
  local_ab8 = (code *)&local_af8;
  local_aa8 = 0x7b;
  pcStack_ab0 = (code *)&local_af4;
  local_938[0] = (code *)0x0;
  local_910 = FMemory::Malloc(0x20,8);
  *local_910 = (code *)&
                       ___7__TFunction_OwnedObject_V<lambda_1>__1__InstantTest_FQueryTest_UsingOptionalFragment_FMassQueryTest__UEAA_NXZ__0A__00_Function_Private_Core_UE__6B_
  ;
  local_910[1] = local_ab8;
  local_910[2] = pcStack_ab0;
  local_910[3] = (code *)CONCAT44(uStack_aa4,local_aa8);
  if (local_910 + 1 != (code **)0x0) {
    local_938[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FMassQueryTest::FQueryTest_UsingOptionalFragment::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
                   ::Call;
  }
  FMassEntityQuery::ForEachEntityChunk
            (&local_908,&local_5b8,(TFunction<void___cdecl(FMassExecutionContext_&)> *)local_938);
  if (local_938[0] != (code *)0x0) {
    ppcVar7 = local_938 + 2;
    if (local_910 != (code **)0x0) {
      ppcVar7 = local_910;
    }
    (**(code **)(*ppcVar7 + 0x10))();
  }
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
  iVar1 = local_af8;
  pFVar2 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString((FString *)(local_af0 + 8),"Two archetypes total should get processed");
  pTVar8 = (TReferenceControllerBase<1> *)L"";
  if (local_ae0 != 0) {
    pTVar8 = (TReferenceControllerBase<1> *)local_af0._8_8_;
  }
  bVar4 = FAutomationTestBase::TestEqual(pFVar2,(wchar_t *)pTVar8,iVar1,2);
  if ((TReferenceControllerBase<1> *)local_af0._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free((void *)local_af0._8_8_);
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
    iVar1 = local_af4;
    pFVar2 = *(FAutomationTestBase **)&this->field_0x20;
    ::FString::FString(&local_ad8,"Only one of these archetypes should get an empty Ints array view"
                      );
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_ad8.Data.ArrayNum != 0) {
      FVar9.Data = local_ad8.Data.AllocatorInstance.Data;
    }
    bVar4 = FAutomationTestBase::TestEqual(pFVar2,(wchar_t *)FVar9.Data,iVar1,1);
    if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
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
      pFVar6 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Int>
                         (*(FMassEntityManager **)&this->field_0x28,
                          (FMassEntityHandle)local_af0._0_8_);
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
      iVar1 = pFVar6->Value;
      pFVar2 = *(FAutomationTestBase **)&this->field_0x20;
      ::FString::FString(&local_ac8,
                         "The optional fragment\'s value should get modified where present");
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_ac8.Data.ArrayNum != 0) {
        FVar9.Data = local_ac8.Data.AllocatorInstance.Data;
      }
      bVar4 = FAutomationTestBase::TestTrue(pFVar2,(wchar_t *)FVar9.Data,iVar1 == 0x7b);
      if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        bVar4 = true;
        goto LAB_147180ce7;
      }
    }
  }
  UE::AITestSuite::ConditionallyBreakOnTestFail();
  bVar4 = false;
LAB_147180ce7:
  FMassExecutionContext::~FMassExecutionContext(&local_5b8);
  FMassEntityQuery::~FMassEntityQuery(&local_908);
  return bVar4;
}

