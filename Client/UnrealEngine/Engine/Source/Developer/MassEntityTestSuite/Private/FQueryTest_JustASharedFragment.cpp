// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 147100770

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassQueryTest::FQueryTest_JustASharedFragment::InstantTest'::__l11::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  TFragmentView<FStructView> *pTVar3;
  FTestSharedFragment_Int *pFVar4;
  UPackage *pUVar5;
  FName local_res8;
  FString local_18;
  
  pTVar3 = TArray<FMassExecutionContext::TFragmentView<FStructView>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           ::
           FindByPredicate<_FMassExecutionContext::GetSharedFragmentPtr<FTestSharedFragment_Int>_::__l2::<lambda_1>_>
                     (&param_1->SharedFragmentViews,local_res8.ComparisonIndex.Value._0_1_);
  if ((pTVar3 != (TFragmentView<FStructView> *)0x0) &&
     (pFVar4 = UE::StructUtils::GetStructPtr<FTestSharedFragment_Int>
                         ((pTVar3->FragmentView).ScriptStruct,(pTVar3->FragmentView).StructMemory),
     pFVar4 != (FTestSharedFragment_Int *)0x0)) goto LAB_14710085d;
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar5,
                         L"TestSharedFragment_Int");
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_1471007f0;
    ::FString::FString(&local_18,L"None");
  }
  else {
LAB_1471007f0:
    local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton)->
                        _padding_;
    ::FName::ToString(&local_res8,&local_18);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("SharedFragment",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassExecutionContext.h"
                     ,0x1a9,
                     L"Requested fragment type not bound, type %s. Make sure it has been listed as required."
                    );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14710085d:
  **(undefined1 **)this = 1;
  return;
}

// InstantTest @ 14717d4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassQueryTest::FQueryTest_JustASharedFragment::InstantTest(FQueryTest_JustASharedFragment *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FAutomationTestBase *pFVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  undefined1 uVar8;
  UPackage *pUVar9;
  FStructSharedMemory *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined ***pppuVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  undefined1 auStackY_bf8 [32];
  bool local_bc8 [8];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_bc0;
  undefined4 local_bb0;
  undefined4 local_bac;
  FSharedStruct local_ba8;
  FSharedStruct local_b98;
  FString local_b88;
  undefined8 local_b78;
  FSharedReferencer<1> local_b70;
  undefined8 local_b68;
  FSharedReferencer<1> local_b60;
  FString local_b58;
  FString local_b48;
  FScriptContainerElement *local_b38;
  undefined4 uStack_b30;
  undefined4 uStack_b2c;
  FMassArchetypeEntityCollection *local_b28;
  undefined4 uStack_b20;
  undefined4 uStack_b1c;
  FMassEntityHandle *local_b18;
  undefined4 uStack_b10;
  undefined4 uStack_b0c;
  FMassArchetypeEntityCollection *local_b08;
  undefined4 uStack_b00;
  undefined4 uStack_afc;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_af8;
  FSharedStruct local_ae8;
  TArrayView<FMassEntityHandle_const_,int> local_ad8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_ac8;
  FSharedStruct local_ab8;
  TArrayView<FMassEntityHandle_const_,int> local_aa8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_a98;
  FMassArchetypeEntityCollection local_a88;
  FMassArchetypeEntityCollection local_a60;
  undefined1 local_a38 [24];
  void *local_a20;
  undefined4 local_a18;
  undefined4 local_a14;
  void *local_a00;
  undefined4 local_9f8;
  undefined4 local_9f4;
  ForAnyElementType local_9f0;
  undefined8 local_9e8;
  ForAnyElementType local_9e0;
  undefined8 local_9d8;
  undefined1 local_9c8 [24];
  void *local_9b0;
  undefined4 local_9a8;
  undefined4 local_9a4;
  void *local_990;
  undefined4 local_988;
  undefined4 local_984;
  ForAnyElementType local_980;
  undefined8 local_978;
  ForAnyElementType local_970;
  undefined8 local_968;
  code *local_958 [2];
  undefined **local_948;
  bool *local_940;
  undefined ***local_930;
  FMassEntityQuery local_928;
  FMassExecutionContext local_5d8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_bf8;
  FMassEntityQuery::FMassEntityQuery
            (&local_928,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassFragmentRequirements::AddSharedRequirement<FTestSharedFragment_Int>
            ((FMassFragmentRequirements *)&local_928,ReadOnly,All);
  FMassEntityQuery::CacheArchetypes(&local_928);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  bVar7 = local_928.ValidArchetypes.ArrayNum == 0;
  pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_b88,"Initial number of matching archetypes matches expectations");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_b88.Data.ArrayNum != 0) {
    FVar14.Data = local_b88.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar14.Data,bVar7);
  if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b88.Data.AllocatorInstance.Data);
  }
  if (!bVar7) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    goto LAB_14717dea6;
  }
  local_bc0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_bc0.ArrayNum = 0;
  local_bc0.ArrayMax = 0;
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  FMassEntityManager::BatchCreateEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_af8,
             (FMassArchetypeHandle *)&this->field_0x60,10,&local_bc0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_af8.SharedReferenceCount.ReferenceController);
  local_bb0 = 0;
  local_ba8.StructMemoryPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar9 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar9,
                         L"TestSharedFragment_Int");
  }
  FVar6.ReferenceController = local_ba8.StructMemoryPtr.SharedReferenceCount.ReferenceController;
  pUVar4 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    local_ba8.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
    if (local_ba8.StructMemoryPtr.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_ba8.StructMemoryPtr.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(local_ba8.StructMemoryPtr.SharedReferenceCount.ReferenceController)->_padding_)
                  ();
        LOCK();
        paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    uVar15 = (uint)*(short *)((longlong)
                              &(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.
                               OuterSingleton)->_padding_ + 4);
    pFVar10 = FMemory::Malloc((longlong)
                              (int)(((int)(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int
                                          .OuterSingleton)->_padding_ + -1 + uVar15 & -uVar15) +
                                   (uVar15 + 7 & -uVar15)),uVar15);
    (pFVar10->ScriptStruct).field0_0x0.DebugPtr = pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    pUVar4 = (pFVar10->ScriptStruct).field0_0x0.DebugPtr;
    lVar13 = (longlong)*(short *)((longlong)&pUVar4->_padding_ + 4);
    (**(code **)(pUVar4->_padding_ + 0x2f8))
              (pUVar4,-lVar13 & (longlong)&(pFVar10->ScriptStruct).field0_0x0 + lVar13 + 7,1);
    pUVar4 = (pFVar10->ScriptStruct).field0_0x0.DebugPtr;
    lVar13 = (longlong)*(short *)((longlong)&pUVar4->_padding_ + 4);
    UScriptStruct::CopyScriptStruct
              (pUVar4,(void *)((longlong)&(pFVar10->ScriptStruct).field0_0x0 + lVar13 + 7 & -lVar13)
               ,&local_bb0,1);
    if ((pFVar10 == (FStructSharedMemory *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StructMemory != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                           ,0x44,
                           L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    local_b70.ReferenceController = ::operator_new(0x18);
    if (local_b70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      (local_b70.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      (local_b70.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
      ;
      (local_b70.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      local_b70.ReferenceController[1]._padding_ = (longlong)pFVar10;
    }
    local_b78 = 0;
    local_ba8.StructMemoryPtr.Object = pFVar10;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_ba8.StructMemoryPtr.SharedReferenceCount,&local_b70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b70.ReferenceController);
  }
  local_a38._0_4_ = 0xffffffff;
  local_a38[4] = true;
  local_a20 = (void *)0x0;
  local_a18 = 0;
  local_a14 = 0x80;
  local_a00 = (void *)0x0;
  local_9f8 = 0;
  local_9f4 = 0x80;
  local_9f0.Data = (FScriptContainerElement *)0x0;
  local_9e8._0_4_ = 0;
  local_9e8._4_4_ = 0;
  local_9e0.Data = (FScriptContainerElement *)0x0;
  local_9d8._0_4_ = 0;
  local_9d8._4_4_ = 0;
  FMassArchetypeSharedFragmentValues::Add_GetRef
            ((FMassArchetypeSharedFragmentValues *)local_a38,&local_ae8,&local_ba8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ae8.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  if ((local_bc0.ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_b38 = local_bc0.AllocatorInstance.Data;
  uStack_b30 = 1;
  local_ad8._12_4_ = uStack_b2c;
  local_ad8.ArrayNum = 1;
  local_ad8.DataPtr = (FMassEntityHandle *)local_bc0.AllocatorInstance.Data;
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_a88,(FMassArchetypeHandle *)&this->field_0x60,&local_ad8,NoDuplicates);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_b28 = &local_a88;
  uStack_b20 = 1;
  local_ac8._12_4_ = uStack_b1c;
  local_ac8.ArrayNum = 1;
  local_ac8.DataPtr = local_b28;
  FMassEntityManager::BatchAddSharedFragmentsForEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_ac8,
             (FMassArchetypeSharedFragmentValues *)local_a38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a88.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController);
  if (local_a88.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a88.Ranges.AllocatorInstance.Data);
  }
  DestructItems<FSharedStruct,int>((FSharedStruct *)local_9e0.Data,(int)local_9d8);
  if (local_9e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9e0.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)local_9f0.Data,(int)local_9e8);
  if (local_9f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9f0.Data);
  }
  if (local_a00 != (void *)0x0) {
    FMemory::Free(local_a00);
  }
  if (local_a20 != (void *)0x0) {
    FMemory::Free(local_a20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ba8.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  local_bac = 0;
  local_b98.StructMemoryPtr.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar9 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Float,(UObject *)pUVar9,
                         L"TestSharedFragment_Float");
    FVar6.ReferenceController = local_b98.StructMemoryPtr.SharedReferenceCount.ReferenceController;
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14717d9ac;
    local_b98.StructMemoryPtr.Object = (FStructSharedMemory *)0x0;
    if (local_b98.StructMemoryPtr.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_b98.StructMemoryPtr.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(local_b98.StructMemoryPtr.SharedReferenceCount.ReferenceController)->_padding_)
                  ();
        LOCK();
        paVar1 = &(FVar6.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((FVar6.ReferenceController)->_padding_ + 8))(FVar6.ReferenceController,1);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
LAB_14717d9ac:
    pUVar4 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton;
    uVar15 = (uint)*(short *)((longlong)
                              &(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.
                               OuterSingleton)->_padding_ + 4);
    pFVar10 = FMemory::Malloc((longlong)
                              (int)(((int)(
                                          Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float
                                          .OuterSingleton)->_padding_ + -1 + uVar15 & -uVar15) +
                                   (uVar15 + 7 & -uVar15)),uVar15);
    (pFVar10->ScriptStruct).field0_0x0.DebugPtr = pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    pUVar4 = (pFVar10->ScriptStruct).field0_0x0.DebugPtr;
    lVar13 = (longlong)*(short *)((longlong)&pUVar4->_padding_ + 4);
    (**(code **)(pUVar4->_padding_ + 0x2f8))
              (pUVar4,-lVar13 & (longlong)&(pFVar10->ScriptStruct).field0_0x0 + lVar13 + 7,1);
    pUVar4 = (pFVar10->ScriptStruct).field0_0x0.DebugPtr;
    lVar13 = (longlong)*(short *)((longlong)&pUVar4->_padding_ + 4);
    UScriptStruct::CopyScriptStruct
              (pUVar4,(void *)((longlong)&(pFVar10->ScriptStruct).field0_0x0 + lVar13 + 7 & -lVar13)
               ,&local_bac,1);
    if ((pFVar10 == (FStructSharedMemory *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StructMemory != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\SharedStruct.h"
                           ,0x44,
                           L"CreateImpl is expected to always return a valid pointer to FStructSharedMemory."
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pTVar11 = ::operator_new(0x18);
    local_b60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFStructSharedMemory__UFStructSharedMemoryDeleter_1__00_SharedPointerInternals__6B_
      ;
      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
      pTVar11[1]._padding_ = (longlong)pFVar10;
      local_b60.ReferenceController = pTVar11;
    }
    local_b68 = 0;
    local_b98.StructMemoryPtr.Object = pFVar10;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_b98.StructMemoryPtr.SharedReferenceCount,&local_b60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b60.ReferenceController);
  }
  local_9c8._0_4_ = 0xffffffff;
  local_9c8[4] = true;
  local_9b0 = (void *)0x0;
  local_9a8 = 0;
  local_9a4 = 0x80;
  local_990 = (void *)0x0;
  local_988 = 0;
  local_984 = 0x80;
  local_980.Data = (FScriptContainerElement *)0x0;
  local_978._0_4_ = 0;
  local_978._4_4_ = 0;
  local_970.Data = (FScriptContainerElement *)0x0;
  local_968._0_4_ = 0;
  local_968._4_4_ = 0;
  FMassArchetypeSharedFragmentValues::Add_GetRef
            ((FMassArchetypeSharedFragmentValues *)local_9c8,&local_ab8,&local_b98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ab8.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  if ((local_bc0.ArrayNum < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_b18 = (FMassEntityHandle *)(local_bc0.AllocatorInstance.Data + 8);
  uStack_b10 = 1;
  local_aa8._12_4_ = uStack_b0c;
  local_aa8.ArrayNum = 1;
  local_aa8.DataPtr = local_b18;
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_a60,(FMassArchetypeHandle *)&this->field_0x60,&local_aa8,NoDuplicates);
  if ((*(longlong *)&this->field_0x28 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  local_b08 = &local_a60;
  uStack_b00 = 1;
  local_a98._12_4_ = uStack_afc;
  local_a98.ArrayNum = 1;
  local_a98.DataPtr = local_b08;
  FMassEntityManager::BatchAddSharedFragmentsForEntities
            (*(FMassEntityManager **)&this->field_0x28,&local_a98,
             (FMassArchetypeSharedFragmentValues *)local_9c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a60.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController);
  if (local_a60.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a60.Ranges.AllocatorInstance.Data);
  }
  DestructItems<FSharedStruct,int>((FSharedStruct *)local_970.Data,(int)local_968);
  if (local_970.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_970.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)local_980.Data,(int)local_978);
  if (local_980.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_980.Data);
  }
  if (local_990 != (void *)0x0) {
    FMemory::Free(local_990);
  }
  if (local_9b0 != (void *)0x0) {
    FMemory::Free(local_9b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b98.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  FMassEntityQuery::CacheArchetypes(&local_928);
  if ((*(longlong *)&this->field_0x20 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TestRunner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                         ,0x46,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
  ::FString::FString(&local_b58,"Number of matching archetypes matches expectations.");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_b58.Data.ArrayNum != 0) {
    FVar14.Data = local_b58.Data.AllocatorInstance.Data;
  }
  bVar7 = FAutomationTestBase::TestEqual
                    (pFVar3,(wchar_t *)FVar14.Data,local_928.ValidArchetypes.ArrayNum,1);
  if (local_b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b58.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    local_bc8[0] = false;
    FMassExecutionContext::FMassExecutionContext
              (&local_5d8,*(FMassEntityManager **)&this->field_0x28,0.0,true);
    local_930 = (undefined ***)0x0;
    local_948 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__L___InstantTest_FQueryTest_JustASharedFragment_FMassQueryTest__UEAA_NXZ__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_940 = local_bc8;
    local_958[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FMassQueryTest::FQueryTest_JustASharedFragment::InstantTest'::__l11::<lambda_1>,void,FMassExecutionContext_&>
                   ::Call;
    FMassEntityQuery::ForEachEntityChunk
              (&local_928,&local_5d8,(TFunction<void___cdecl(FMassExecutionContext_&)> *)local_958);
    if (local_958[0] != (code *)0x0) {
      pppuVar12 = &local_948;
      if (local_930 != (undefined ***)0x0) {
        pppuVar12 = local_930;
      }
      (*(code *)(*pppuVar12)[2])();
    }
    if ((*(longlong *)&this->field_0x20 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TestRunner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AITestSuite\\Public\\AITestsCommon.h"
                           ,0x46,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    bVar7 = local_bc8[0];
    pFVar3 = *(FAutomationTestBase **)&this->field_0x20;
    ::FString::FString(&local_b48,"The tested query did execute and bounding was successful");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_b48.Data.ArrayNum != 0) {
      FVar14.Data = local_b48.Data.AllocatorInstance.Data;
    }
    bVar7 = FAutomationTestBase::TestTrue(pFVar3,(wchar_t *)FVar14.Data,bVar7);
    if (local_b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b48.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      FMassExecutionContext::~FMassExecutionContext(&local_5d8);
      bVar7 = true;
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      FMassExecutionContext::~FMassExecutionContext(&local_5d8);
      bVar7 = false;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    bVar7 = false;
  }
  if (local_bc0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bc0.AllocatorInstance.Data);
  }
LAB_14717dea6:
  FMassEntityQuery::~FMassEntityQuery(&local_928);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return bVar7;
}

