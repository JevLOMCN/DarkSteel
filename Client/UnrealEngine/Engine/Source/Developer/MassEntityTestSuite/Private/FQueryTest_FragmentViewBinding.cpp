// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// <lambda_invoker_cdecl> @ 1470cf0d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
`FMassQueryTest::FQueryTest_FragmentViewBinding::InstantTest'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(FMassExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  TArrayView<FTestFragment_Float,int> local_18;
  
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

// InstantTest @ 14717bdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_FragmentViewBinding::InstantTest(FQueryTest_FragmentViewBinding *this)

{
  float fVar1;
  FMassEntityManager *this_00;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  UPackage *pUVar8;
  float *pfVar9;
  UMassTestProcessor_Floats *pUVar10;
  TSharedRef<FMassEntityManager,1> *pTVar11;
  longlong *plVar12;
  TReferenceControllerBase<1> *pTVar13;
  ForAnyElementType FVar14;
  undefined1 auStackY_748 [32];
  undefined1 local_718 [16];
  int local_708;
  FString local_700;
  TSharedPtr<FMassEntityManager,1> local_6f0;
  TSharedRef<FMassEntityManager,1> local_6e0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  void *pvStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  void *pvStack_690;
  undefined8 local_688;
  FConstSharedStruct *pFStack_680;
  undefined8 local_678;
  FSharedStruct *pFStack_670;
  undefined8 local_668;
  longlong local_658;
  longlong lStack_650;
  longlong local_648;
  longlong lStack_640;
  undefined8 local_638;
  longlong *plStack_630;
  FProcessingContext local_628;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_748;
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  local_668 = 0;
  uStack_6c0 = 0;
  uStack_6a0 = 0;
  local_6c8 = 0x1ffffffff;
  local_6b8 = 0;
  pvStack_6b0 = (void *)0x0;
  local_698 = 0;
  local_6a8 = 0x8000000000;
  pvStack_690 = (void *)0x0;
  local_688 = 0x8000000000;
  pFStack_680 = (FConstSharedStruct *)0x0;
  local_678 = 0;
  pFStack_670 = (FSharedStruct *)0x0;
  FMassEntityManager::CreateEntity
            (*(FMassEntityManager **)&this->field_0x28,(FMassArchetypeHandle *)local_718,
             (FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  DestructItems<FSharedStruct,int>(pFStack_670,(int)local_668);
  if (pFStack_670 != (FSharedStruct *)0x0) {
    FMemory::Free(pFStack_670);
  }
  DestructItems<FConstSharedStruct,int>(pFStack_680,(int)local_678);
  if (pFStack_680 != (FConstSharedStruct *)0x0) {
    FMemory::Free(pFStack_680);
  }
  if (pvStack_690 != (void *)0x0) {
    FMemory::Free(pvStack_690);
  }
  if (pvStack_6b0 != (void *)0x0) {
    FMemory::Free(pvStack_6b0);
  }
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  this_00 = *(FMassEntityManager **)&this->field_0x28;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar8 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar8,
                         L"TestFragment_Float");
  }
  pfVar9 = FMassEntityManager::InternalGetFragmentDataChecked
                     (this_00,(FMassEntityHandle)local_718._0_8_,
                      Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  pFVar2 = *(FAutomationTestBase **)&this->field_0x20;
  fVar1 = *pfVar9;
  ::FString::FString((FString *)(local_718 + 8),
                     "Initial value of the fragment should match expectations");
  pTVar13 = (TReferenceControllerBase<1> *)L"";
  if (local_708 != 0) {
    pTVar13 = (TReferenceControllerBase<1> *)local_718._8_8_;
  }
  bVar6 = FAutomationTestBase::TestTrue(pFVar2,(wchar_t *)pTVar13,fVar1 == 0.0);
  if ((TReferenceControllerBase<1> *)local_718._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free((void *)local_718._8_8_);
  }
  if (bVar6) {
    local_6f0.Object = *(FMassEntityManager **)&this->field_0x28;
    local_6f0.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&this->field_0x30;
    if (local_6f0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_6f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_6f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar10 = NewTestProcessor<UMassTestProcessor_Floats>(&local_6f0);
    local_658 = pUVar10->_padding_;
    lVar5 = pUVar10->_padding_;
    local_648 = pUVar10->_padding_;
    lStack_640 = pUVar10->_padding_;
    lVar4 = pUVar10->_padding_;
    plStack_630 = (longlong *)pUVar10->_padding_;
    pUVar10->_padding_ =
         (longlong)
         UE::Core::Private::Function::
         TFunctionRefCaller<void_(__cdecl*)(FMassExecutionContext_&),void,FMassExecutionContext_&>::
         Call;
    pUVar10->_padding_ = lStack_650;
    *(undefined4 *)&pUVar10->_padding_ = 0x51563770;
    *(undefined4 *)((longlong)&pUVar10->_padding_ + 4) = 1;
    *(undefined4 *)&pUVar10->_padding_ = 0x470cf0d0;
    *(undefined4 *)((longlong)&pUVar10->_padding_ + 4) = 1;
    *(undefined4 *)&pUVar10->_padding_ = (undefined4)local_638;
    *(undefined4 *)((longlong)&pUVar10->_padding_ + 4) = local_638._4_4_;
    *(undefined4 *)&pUVar10->_padding_ = 0;
    *(undefined4 *)((longlong)&pUVar10->_padding_ + 4) = 0;
    local_638 = lVar4;
    lStack_650 = lVar5;
    if (local_658 != 0) {
      plVar12 = &local_648;
      if (plStack_630 != (longlong *)0x0) {
        plVar12 = plStack_630;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if ((*(longlong *)&this->field_0x28 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    pTVar11 = TSharedFromThis<FMassEntityManager,1>::AsShared
                        ((TSharedFromThis<FMassEntityManager,1> *)
                         (*(longlong *)&this->field_0x28 + 0x10),&local_6e0);
    local_628.EntityManager.Object = pTVar11->Object;
    local_628.EntityManager.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    if (local_628.EntityManager.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_628.EntityManager.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_628.EntityManager.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    local_628.DeltaSeconds = 0.0;
    FInstancedStruct::FInstancedStruct(&local_628.AuxData);
    local_628.CommandBuffer.Object = (FMassCommandBuffer *)0x0;
    local_628.CommandBuffer.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_628.bFlushCommandBuffer = true;
    local_628.ExecutionContextPtr = (FMassExecutionContext *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6e0.SharedReferenceCount.ReferenceController);
    UE::Mass::Executor::Run((UMassProcessor *)pUVar10,&local_628);
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
    pFVar2 = *(FAutomationTestBase **)&this->field_0x20;
    fVar1 = *pfVar9;
    ::FString::FString(&local_700,"Fragment value should have changed to the expected value");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_700.Data.ArrayNum != 0) {
      FVar14.Data = local_700.Data.AllocatorInstance.Data;
    }
    bVar6 = FAutomationTestBase::TestEqual
                      (pFVar2,(wchar_t *)FVar14.Data,fVar1,__real_41500000,__real_38d1b717);
    if (local_700.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_700.Data.AllocatorInstance.Data);
    }
    if (!bVar6) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
    }
    UE::Mass::FProcessingContext::~FProcessingContext(&local_628);
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    bVar6 = false;
  }
  return bVar6;
}

