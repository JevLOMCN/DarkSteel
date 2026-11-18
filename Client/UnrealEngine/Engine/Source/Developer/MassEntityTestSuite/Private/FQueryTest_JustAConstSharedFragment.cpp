// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1471005b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassQueryTest::FQueryTest_JustAConstSharedFragment::InstantTest'::__l11::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  TFragmentView<FConstStructView> *pTVar5;
  UPackage *pUVar6;
  uchar *puVar7;
  FName local_res8;
  FString local_18;
  
  pTVar5 = TArray<FMassExecutionContext::TFragmentView<FConstStructView>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           ::
           FindByPredicate<_FMassExecutionContext::GetConstSharedFragmentPtr<FTestConstSharedFragment_Int_const_>_::__l2::<lambda_1>_>
                     (&param_1->ConstSharedFragmentViews,local_res8.ComparisonIndex.Value._0_1_);
  if (pTVar5 != (TFragmentView<FConstStructView> *)0x0) {
    puVar7 = (pTVar5->FragmentView).StructMemory;
    if ((puVar7 == (uchar *)0x0) ||
       (pUVar2 = (pTVar5->FragmentView).ScriptStruct, pUVar2 == (UScriptStruct *)0x0)) {
LAB_147100688:
      puVar7 = (uchar *)0x0;
    }
    else {
      if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
        Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,
                             (UObject *)pUVar6,L"TestConstSharedFragment_Int");
      }
      if (pUVar2 != Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton) {
        if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
          Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,
                               (UObject *)pUVar6,L"TestConstSharedFragment_Int");
          if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
              (UScriptStruct *)0x0) goto LAB_147100688;
        }
        iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)
                     ->_padding_;
        if (((int)pUVar2->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->
             _padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_147100688;
      }
    }
    if (puVar7 != (uchar *)0x0) {
      **(undefined1 **)this = 1;
      return;
    }
  }
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar6,
                         L"TestConstSharedFragment_Int");
    if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) {
      ::FString::FString(&local_18,L"None");
      goto LAB_147100706;
    }
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton
                      )->_padding_;
  ::FName::ToString(&local_res8,&local_18);
LAB_147100706:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("SharedFragment",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x186,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  **(undefined1 **)this = 1;
  return;
}

// InstantTest @ 14717cd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_JustAConstSharedFragment::InstantTest
          (FQueryTest_JustAConstSharedFragment *this)

{
  FAutomationTestBase *pFVar1;
  UScriptStruct *pUVar2;
  FMassEntityManager *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UPackage *pUVar7;
  FStructSharedMemory *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FSharedReferencer<1> FVar10;
  undefined ***pppuVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  FSharedReferencer<1> FVar14;
  uint uVar15;
  undefined1 auStackY_a48 [32];
  bool local_a18 [8];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_a10;
  undefined4 local_a00;
  undefined4 local_9fc;
  FStructSharedMemory *local_9f8;
  FSharedReferencer<1> FStack_9f0;
  FStructSharedMemory *local_9e8;
  FSharedReferencer<1> FStack_9e0;
  FString local_9d8;
  undefined8 local_9c8;
  FSharedReferencer<1> local_9c0;
  undefined8 local_9b8;
  FSharedReferencer<1> local_9b0;
  FString local_9a8;
  FString local_998;
  FConstSharedStruct local_988;
  FConstSharedStruct local_978;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_968;
  code *local_958 [2];
  undefined **local_948;
  bool *local_940;
  undefined ***local_930;
  FMassEntityQuery local_928;
  FMassExecutionContext local_5d8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_a48;
  FMassEntityQuery::FMassEntityQuery
            (&local_928,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddConstSharedRequirement<FTestConstSharedFragment_Int>
            ((FMassFragmentRequirements *)&local_928,All);
  FMassEntityQuery::CacheArchetypes(&local_928);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  bVar5 = local_928.ValidArchetypes.ArrayNum == 0;
  pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_9d8,"Initial number of matching archetypes matches expectations");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_9d8.Data.ArrayNum != 0) {
    FVar13.Data = local_9d8.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar13.Data,bVar5);
  if (local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
  }
  if (!bVar5) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    goto LAB_14717d459;
  }
  FVar10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_a10.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a10.ArrayNum = 0;
  local_a10.ArrayMax = 0;
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_968,
             (FMassArchetypeHandle *)&this->field_0x60,10,&local_a10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_968.SharedReferenceCount.ReferenceController);
  local_a00 = 0;
  FStack_9f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar7,
                         L"TestConstSharedFragment_Int");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    local_9f8 = (FStructSharedMemory *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    FVar14.ReferenceController = FVar10.ReferenceController;
  }
  else {
    uVar15 = (uint)*(short *)((longlong)
                              &(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.
                               OuterSingleton)->_padding_ + 4);
    pFVar8 = FMemory::Malloc((longlong)
                             (int)(((int)(
                                         Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int
                                         .OuterSingleton)->_padding_ + -1 + uVar15 & -uVar15) +
                                  (uVar15 + 7 & -uVar15)),uVar15);
    (pFVar8->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pUVar2 = (pFVar8->ScriptStruct).field0_0x0.DebugPtr;
    lVar12 = (longlong)*(short *)((longlong)&pUVar2->_padding_ + 4);
    (**(code **)(pUVar2->_padding_ + 0x2f8))
              (pUVar2,-lVar12 & (longlong)&(pFVar8->ScriptStruct).field0_0x0 + lVar12 + 7,1);
    pUVar2 = (pFVar8->ScriptStruct).field0_0x0.DebugPtr;
    lVar12 = (longlong)*(short *)((longlong)&pUVar2->_padding_ + 4);
    UScriptStruct::CopyScriptStruct
              (pUVar2,(void *)((longlong)&(pFVar8->ScriptStruct).field0_0x0 + lVar12 + 7 & -lVar12),
               &local_a00,1);
    if ((pFVar8 == (FStructSharedMemory *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StructMemory != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                           ,0x44,
                           L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pTVar9 = ::operator_new(0x18);
    local_9c0.ReferenceController = FVar10.ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
      ;
      pTVar9[1]._padding_ = (longlong)pFVar8;
      local_9c0.ReferenceController = pTVar9;
    }
    local_9c8 = 0;
    local_9f8 = pFVar8;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_9f0,&local_9c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_9c0.ReferenceController);
    FVar14.ReferenceController = FStack_9f0.ReferenceController;
  }
  local_988.StructMemoryPtr.Object = local_9f8;
  local_988.StructMemoryPtr.SharedReferenceCount.ReferenceController =
       FStack_9f0.ReferenceController;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar3 = *(FMassEntityManager **)&this->field_0x28;
  if ((local_a10.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FMassEntityManager::AddConstSharedFragmentToEntity
            (pFVar3,*(FMassEntityHandle *)local_a10.AllocatorInstance.Data,&local_988);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_988.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  local_9fc = 0;
  FStack_9e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Float,(UObject *)pUVar7,
                         L"TestConstSharedFragment_Float");
    if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14717d0f7;
    local_9e8 = (FStructSharedMemory *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
LAB_14717d0f7:
    pUVar2 = Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float.OuterSingleton;
    uVar15 = (uint)*(short *)((longlong)
                              &(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float.
                               OuterSingleton)->_padding_ + 4);
    pFVar8 = FMemory::Malloc((longlong)
                             (int)(((int)(
                                         Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Float
                                         .OuterSingleton)->_padding_ + -1 + uVar15 & -uVar15) +
                                  (uVar15 + 7 & -uVar15)),uVar15);
    (pFVar8->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pUVar2 = (pFVar8->ScriptStruct).field0_0x0.DebugPtr;
    lVar12 = (longlong)*(short *)((longlong)&pUVar2->_padding_ + 4);
    (**(code **)(pUVar2->_padding_ + 0x2f8))
              (pUVar2,-lVar12 & (longlong)&(pFVar8->ScriptStruct).field0_0x0 + lVar12 + 7,1);
    pUVar2 = (pFVar8->ScriptStruct).field0_0x0.DebugPtr;
    lVar12 = (longlong)*(short *)((longlong)&pUVar2->_padding_ + 4);
    UScriptStruct::CopyScriptStruct
              (pUVar2,(void *)((longlong)&(pFVar8->ScriptStruct).field0_0x0 + lVar12 + 7 & -lVar12),
               &local_9fc,1);
    if ((pFVar8 == (FStructSharedMemory *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StructMemory != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                           ,0x44,
                           L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pTVar9 = ::operator_new(0x18);
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
      ;
      pTVar9[1]._padding_ = (longlong)pFVar8;
      FVar10.ReferenceController = pTVar9;
    }
    local_9b8 = 0;
    local_9e8 = pFVar8;
    local_9b0.ReferenceController = FVar10.ReferenceController;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_9e0,&local_9b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_9b0.ReferenceController);
    FVar10.ReferenceController = FStack_9e0.ReferenceController;
  }
  local_978.StructMemoryPtr.Object = local_9e8;
  local_978.StructMemoryPtr.SharedReferenceCount.ReferenceController =
       FStack_9e0.ReferenceController;
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar3 = *(FMassEntityManager **)&this->field_0x28;
  if ((local_a10.ArrayNum < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FMassEntityManager::AddConstSharedFragmentToEntity
            (pFVar3,*(FMassEntityHandle *)(local_a10.AllocatorInstance.Data + 8),&local_978);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_978.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  FMassEntityQuery::CacheArchetypes(&local_928);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_9a8,"Number of matching archetypes matches expectations.");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_9a8.Data.ArrayNum != 0) {
    FVar13.Data = local_9a8.Data.AllocatorInstance.Data;
  }
  bVar5 = FAutomationTestBase::TestEqual
                    (pFVar1,(wchar_t *)FVar13.Data,local_928.ValidArchetypes.ArrayNum,1);
  if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    local_a18[0] = false;
    FMassExecutionContext::FMassExecutionContext
              (&local_5d8,*(FMassEntityManager **)&this->field_0x28,0.0,true);
    local_930 = (undefined ***)0x0;
    local_948 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__L___InstantTest_FQueryTest_JustAConstSharedFragment_FMassQueryTest__UEAA_NXZ__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_940 = local_a18;
    local_958[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FMassQueryTest::FQueryTest_JustAConstSharedFragment::InstantTest'::__l11::<lambda_1>,void,FMassExecutionContext_&>
                   ::Call;
    FMassEntityQuery::ForEachEntityChunk
              (&local_928,&local_5d8,(TFunction<void___cdecl(FMassExecutionContext_&)> *)local_958);
    if (local_958[0] != (code *)0x0) {
      pppuVar11 = &local_948;
      if (local_930 != (undefined ***)0x0) {
        pppuVar11 = local_930;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    bVar5 = local_a18[0];
    pFVar1 = *(FAutomationTestBase **)&this->field_0x20;
    ::FString::FString(&local_998,"The tested query did execute and bounding was successful");
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_998.Data.ArrayNum != 0) {
      FVar13.Data = local_998.Data.AllocatorInstance.Data;
    }
    bVar5 = FAutomationTestBase::TestTrue(pFVar1,(wchar_t *)FVar13.Data,bVar5);
    if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_998.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      FMassExecutionContext::~FMassExecutionContext(&local_5d8);
      bVar5 = true;
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      FMassExecutionContext::~FMassExecutionContext(&local_5d8);
      bVar5 = false;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    bVar5 = false;
  }
  if ((FMassEntityHandle *)local_a10.AllocatorInstance.Data != (FMassEntityHandle *)0x0) {
    FMemory::Free(local_a10.AllocatorInstance.Data);
  }
LAB_14717d459:
  FMassEntityQuery::~FMassEntityQuery(&local_928);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return bVar5;
}

