// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470fdc90

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassQueryTest::FQueryTest_AnyFragment::InstantTest'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  longlong lVar1;
  FAutomationTestBase *this_00;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  FString local_38;
  TArrayView<FTestFragment_Bool,int> local_28;
  TArrayView<FTestFragment_Int,int> local_18;
  
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Bool>(param_1,&local_28);
  FMassExecutionContext::GetMutableFragmentView<FTestFragment_Int>(param_1,&local_18);
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = *(FAutomationTestBase **)(lVar1 + 0x20);
  if ((local_28.ArrayNum == 0) && (local_18.ArrayNum == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  ::FString::FString(&local_38,"Every matching archetype needs to host Bool or Int fragments");
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(this_00,(wchar_t *)FVar4.Data,bVar3);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// InstantTest @ 147177970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassQueryTest::FQueryTest_AnyFragment::InstantTest(FQueryTest_AnyFragment *this)

{
  FMassEntityManager *pFVar1;
  FAutomationTestBase *this_00;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  undefined ***pppuVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  undefined1 auStack_aa8 [32];
  undefined1 local_a88 [4];
  FMassArchetypeCreationParams local_a84;
  FMassArchetypeCreationParams local_a74;
  UScriptStruct *local_a60;
  FString local_a58;
  undefined1 local_a48 [16];
  UScriptStruct **local_a38;
  undefined4 uStack_a30;
  undefined4 uStack_a2c;
  UScriptStruct *local_a28;
  UScriptStruct *local_a20;
  UScriptStruct **local_a18;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  FMassArchetypeHandle local_a08;
  undefined1 local_9f8 [16];
  TArrayView<UScriptStruct_const_*_const,int> local_9e8;
  FMassArchetypeHandle local_9d8;
  FMassArchetypeHandle local_9c8;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  void *pvStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  void *pvStack_980;
  undefined8 local_978;
  FConstSharedStruct *pFStack_970;
  undefined8 local_968;
  FSharedStruct *pFStack_960;
  undefined8 local_958;
  code *local_948 [2];
  undefined **local_938;
  FQueryTest_AnyFragment *local_930;
  undefined ***local_920;
  FMassEntityQuery local_918;
  FMassExecutionContext local_5c8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_aa8;
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  pFVar1 = *(FMassEntityManager **)&this->field_0x28;
  local_a84.ChunkMemorySize = 0;
  local_a84.DebugName.ComparisonIndex.Value = 0;
  local_a84.DebugName.Number = 0;
  local_a84.DebugColor.field0_0x0 = (FColor_u_0)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Bool,(UObject *)pUVar6,
                         L"TestFragment_Bool");
  }
  local_a38 = &local_a60;
  uStack_a30 = 1;
  local_9f8._8_8_ = CONCAT44(uStack_a2c,1);
  local_a60 = Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton;
  local_9f8._0_8_ = local_a38;
  FMassEntityManager::CreateArchetype
            (pFVar1,&local_9c8,(TArrayView<UScriptStruct_const_*_const,int> *)local_9f8,&local_a84);
  if (*(longlong *)&this->field_0x28 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  pFVar1 = *(FMassEntityManager **)&this->field_0x28;
  local_a74.ChunkMemorySize = 0;
  local_a74.DebugName.ComparisonIndex.Value = 0;
  local_a74.DebugName.Number = 0;
  local_a74.DebugColor.field0_0x0 = (FColor_u_0)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Bool,(UObject *)pUVar6,
                         L"TestFragment_Bool");
  }
  local_a28 = Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar6,
                         L"TestFragment_Float");
  }
  local_a18 = &local_a28;
  uStack_a10 = 2;
  local_9e8._12_4_ = uStack_a0c;
  local_9e8.ArrayNum = 2;
  local_a20 = Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
  local_9e8.DataPtr = local_a18;
  FMassEntityManager::CreateArchetype(pFVar1,&local_9d8,&local_9e8,&local_a74);
  FMassEntityQuery::FMassEntityQuery
            (&local_918,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)&local_918,ReadWrite,Any);
  FMassFragmentRequirements::AddRequirement<FTestFragment_Bool>
            ((FMassFragmentRequirements *)&local_918,ReadWrite,Any);
  FMassEntityQuery::CacheArchetypes(&local_918);
  if (*(longlong *)&this->field_0x20 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TestRunner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                       ,0x46,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  iVar3 = local_918.ValidArchetypes.ArrayNum;
  this_00 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_a58,"Archetypes containing Int or Bool should meet requirements");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_a58.Data.ArrayNum != 0) {
    FVar8.Data = local_a58.Data.AllocatorInstance.Data;
  }
  bVar4 = FAutomationTestBase::TestEqual(this_00,(wchar_t *)FVar8.Data,iVar3,4);
  if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a58.Data.AllocatorInstance.Data);
  }
  iVar3 = local_918.ValidArchetypes.ArrayNum;
  if (bVar4) {
    lVar9 = (longlong)local_918.ValidArchetypes.ArrayNum;
    FVar8.Data = local_918.ValidArchetypes.AllocatorInstance.Data;
    while( true ) {
      if (local_918.ValidArchetypes.ArrayNum != iVar3) {
        local_a88[0] = 0;
        `TCheckedPointerIterator<FMassArchetypeHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_a88);
      }
      if (FVar8.Data == local_918.ValidArchetypes.AllocatorInstance.Data + lVar9 * 0x10) break;
      local_a48._0_8_ = *(undefined8 *)FVar8.Data;
      local_a48._8_8_ = *(undefined8 *)(FVar8.Data + 8);
      if ((TReferenceControllerBase<1> *)local_a48._8_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_a48._8_8_)->SharedReferenceCount =
             (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_a48._8_8_)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (*(longlong *)&this->field_0x28 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      local_958 = 0;
      uStack_9b0 = 0;
      uStack_990 = 0;
      local_9b8 = 0x1ffffffff;
      local_9a8 = 0;
      pvStack_9a0 = (void *)0x0;
      local_988 = 0;
      local_998 = 0x8000000000;
      pvStack_980 = (void *)0x0;
      local_978 = 0x8000000000;
      pFStack_970 = (FConstSharedStruct *)0x0;
      local_968 = 0;
      pFStack_960 = (FSharedStruct *)0x0;
      FMassEntityManager::CreateEntity
                (*(FMassEntityManager **)&this->field_0x28,&local_a08,
                 (FMassArchetypeSharedFragmentValues *)local_a48);
      DestructItems<FSharedStruct,int>(pFStack_960,(int)local_958);
      if (pFStack_960 != (FSharedStruct *)0x0) {
        FMemory::Free(pFStack_960);
      }
      DestructItems<FConstSharedStruct,int>(pFStack_970,(int)local_968);
      if (pFStack_970 != (FConstSharedStruct *)0x0) {
        FMemory::Free(pFStack_970);
      }
      if (pvStack_980 != (void *)0x0) {
        FMemory::Free(pvStack_980);
      }
      if (pvStack_9a0 != (void *)0x0) {
        FMemory::Free(pvStack_9a0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_a48._8_8_);
      FVar8.Data = FVar8.Data + 0x10;
    }
    FMassExecutionContext::FMassExecutionContext
              (&local_5c8,*(FMassEntityManager **)&this->field_0x28,0.0,true);
    local_920 = (undefined ***)0x0;
    local_938 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1__InstantTest_FQueryTest_AnyFragment_FMassQueryTest__UEAA_NXZ__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_948[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FMassQueryTest::FQueryTest_AnyFragment::InstantTest'::__l2::<lambda_1>,void,FMassExecutionContext_&>
                   ::Call;
    local_930 = this;
    FMassEntityQuery::ForEachEntityChunk
              (&local_918,&local_5c8,(TFunction<void___cdecl(FMassExecutionContext_&)> *)local_948);
    if (local_948[0] != (code *)0x0) {
      pppuVar7 = &local_938;
      if (local_920 != (undefined ***)0x0) {
        pppuVar7 = local_920;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    bVar4 = true;
    FMassExecutionContext::~FMassExecutionContext(&local_5c8);
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    bVar4 = false;
  }
  FMassEntityQuery::~FMassEntityQuery(&local_918);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9d8.DataPtr.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9c8.DataPtr.SharedReferenceCount.ReferenceController);
  return bVar4;
}

